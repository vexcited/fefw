#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aeb5df;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f4010;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchScene_15f0f70();
void ProcPerchScene_15f0fa0();
__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2);
__int64 GameRoutine_14368c0(void);
__int64 GameRoutine_144fca0(_QWORD, _QWORD);
__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14514d0(_QWORD, _QWORD);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1472720(_QWORD);
__int64 GameRoutine_1486c20(float);
__int64 GameRoutine_15f0540(_QWORD, _QWORD);
__int64 GameRoutine_170cac0(_QWORD);
__int64 GameRoutine_1775750(_QWORD, _QWORD);
__int64 GameRoutine_1775df0(_QWORD, _QWORD);
__int64 GameRoutine_8696e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1ab1a04;
extern _UNKNOWN GameData_1af2e0a;
extern _UNKNOWN* GameData_2174240;
extern __int64 (*GameData_2060a68[])();
extern __int64 (*GameData_2060ae8[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9f88;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_224ae20;
extern __int64 GameData_2262ae0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64* GameData_2131410;
extern char GameData_1aa5e95[];
float ProcTheaterSceneAct_13e2420(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera();
__int64 ProcPerchScene_15ee6b0();
__int64 ProcPerchScene_15ee740();
void game_facility_anonymous_ProcPerchScene_SetQuestionCamera();
void ProcPerchScene_15eea60();
__int64 ProcPerchScene_15eec60();
__int64 ProcPerchScene_15ef1d0(__int64 result);
__int64 ProcPerchScene_15ef780(__int64 a1);
bool ProcPerchScene_15ef7f0();
__int64 ProcPerchScene_15ef820(__int64 result);
__int64 ProcPerchScene_15efc60(__int64 a1);
__int64 ProcPerchScene_15efc80(__int64 result);
__int64 ProcPerchScene_15efd40(__int64 a1);
__int64 ProcPerchScene_15efd70(__int64 a1);
__int64 ProcPerchScene_15f02e0();
__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera_closure_Invoke(
    __int64 a1);
__int64
game_facility_anonymous_ProcPerchScene_SetQuestionCamera_closure_Invoke();
_QWORD* GameRoutine_658c00(_QWORD* result);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int16* GameRoutine_1958ed0(__int16* result, __int64);
__int64 GameRoutine_1958ed0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1958ed0");
__int64 GameRoutine_658d60(__int64*);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_1afe8f0;
extern __int64 (*GameData_2060c20[])();
extern __int64 (*GameData_2060d08[])();
extern __int64 (*GameData_2060db8[])();
extern __int64 (*GameData_2060e00[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchScene_vtable[])();
extern __int64* GameData_2132488;
extern __int64 GameData_212c608[2];
extern __int64 GameData_225ae28;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_2241730;
void GameRoutine_1488300();
_QWORD* ProcPerchScene_15edda0(__int64 a1);
unsigned __int64 ProcPerchScene_15f0160();
_QWORD* ProcPerchScene_Destructor(__int64 a1);
__int64
ProcPerchScene_15f0fe0_alt1(__int64 a1) __asm__("ProcPerchScene_15f0fe0");
_QWORD* ProcPerchScene_15f1480(__int64 a1);
_QWORD* ProcPerchScene_15f16f0(__int16* a1);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 FacilityVariable_1472720(__int64);
__int64 GameHr_8696e0(int);
__int64 game_809dc0_alt1(__int64, _QWORD*, __n128) __asm__("game_809dc0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void GameRoutine_1958ed0_alt2(__int64, __int64) __asm__("GameRoutine_1958ed0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void ProcPerchScene_15f0fe0(__int64 a1);
__attribute__((swiftcall)) void PerchSceneDiff_14224a0(PSEUDO_X8, __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameHr_1421620(__int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_975940(__int64);
__int64 ShowmanSceneDiff_147d3c0(__int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_147dd40(int);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcPerchScene_15eedf0(__int64 a1);
void ProcPerchScene_15f0540(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8, _QWORD*,
                                                      _QWORD*, float);
__int64 GameRoutine_14225f0(void);
__int64 GameRoutine_15edd90();
__int64 GameRoutine_15edf20();
__int64 GameRoutine_15ee060();
__int64 GameRoutine_15efc50();
__int64 GameRoutine_15efd30();
__int64 GameRoutine_15f0530();
__int64 GameRoutine_170bd10(__int64 result);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcPerchScene_15edda0_alt1();
__int64 ProcPerchScene_15ee1c0();
__int64 ProcPerchScene_15eea60_alt1();
__int64 ProcPerchScene_15eedf0_alt1();
__int64 ProcPerchScene_15ef1d0_alt1();
__int64 ProcPerchScene_15ef2a0();
__int64 ProcPerchScene_15ef780_alt1();
__int64 ProcPerchScene_15ef7f0_alt1();
__int64 ProcPerchScene_15ef820_alt1();
__int64 ProcPerchScene_15ef8e0();
__int64 ProcPerchScene_15efc60_alt1();
__int64 ProcPerchScene_15efc80_alt1();
__int64 ProcPerchScene_15efd40_alt1();
__int64 ProcPerchScene_15efd70_alt1();
__int64 ProcPerchScene_15efe00();
__int64 ProcPerchScene_15f0160_alt1();
__int64 fw_memory_HeapManager_Allocate_alt2(__int64, __int64, __int64,
                                            unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_facility_SceneManager_SceneManager(__int64);
__int64 game_facility_anonymous_15edd80();
__int64 game_facility_anonymous_15ee5a0();
__int64 game_facility_anonymous_ProcPerchScene_SetQuestionCamera_alt1();
__int64 std___1___shared_weak_count___release_weak_alt1(__int64);
extern _UNKNOWN GameData_1ae3a12;
extern _UNKNOWN GameData_225ae20;
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d298)();
extern __int64 (*GameData_212d610[2])();
extern __int64 (*GameData_212dd30[5])();
extern __int64 (*GameData_212dd50)();
extern __int64 (*ProcHubSeq_d85570_ptr_212dd48[2])();
extern __int64 (*RelianceCheck_19a8080_ptr_212dd40[3])();
extern __int64 (*game_80a680_ptr_212c6d0[11])();
extern __int64 (*game_hub_d856f0_ptr_212dd38[4])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131408[2];
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_2259868;
extern __int64 GameData_2259870;
extern __int64 GameData_2259878;
extern __int64 GameData_2259888;
extern __int64 GameData_2259898;
extern __int64 GameData_22598a8;
extern __int64 GameData_22598b0;
extern __int64 GameData_22598b8;
extern __int64 GameData_22598c8;
extern __int64 GameData_22598d8;
extern __int64 GameData_22598e8;
extern __int64 GameData_22598f0;
extern __int64 GameData_2259908;
extern __int64 GameData_2259918;
extern __int64 GameData_2259928;
extern __int64 GameData_2259930;
extern __int64 GameData_2259938;
extern __int64 GameData_2259948;
extern __int64 GameData_2259958;
extern __int64 GameData_2259968;
extern __int64 GameData_2259970;
extern __int64 GameData_2259978;
extern __int64 GameData_2259988;
extern __int64 GameData_2259998;
extern __int64 GameData_22599a8;
extern __int64 GameData_22599b0;
extern __int64 GameData_22599b8;
extern __int64 GameData_22599c8;
extern __int64 GameData_22599d8;
extern __int64 GameData_22599e8;
extern __int64 GameData_22599f0;
extern __int64 GameData_22599f8;
extern __int64 GameData_2259a08;
extern __int64 GameData_2259a18;
extern __int64 GameData_2259a28;
extern __int64 GameData_2259a30;
extern __int64 GameData_2259a38;
extern __int64 GameData_2259a48;
extern __int64 GameData_2259a58;
extern __int64 GameData_2259a68;
extern __int64 GameData_2259a70;
extern __int64 GameData_2259a78;
extern __int64 GameData_2259a88;
extern __int64 GameData_2259a98;
extern __int64 GameData_2259aa8;
extern __int64 GameData_2259ab0;
extern __int64 GameData_2259ab8;
extern __int64 GameData_2259ac8;
extern __int64 GameData_2259ad8;
extern __int64 GameData_2259ae8;
extern __int64 GameData_2259af0;
extern __int64 GameData_2259af8;
extern __int64 GameData_2259b08;
extern __int64 GameData_2259b18;
extern __int64 GameData_2259b28;
extern __int64 GameData_2259b30;
extern __int64 GameData_2259b48;
extern __int64 GameData_2259b58;
extern __int64 GameData_2259b68;
extern __int64 GameData_2259b70;
extern __int64 GameData_2259b78;
extern __int64 GameData_2259b88;
extern __int64 GameData_2259b98;
extern __int64 GameData_2259ba8;
extern __int64 GameData_2259bb0;
extern __int64 GameData_2259bc8;
extern __int64 GameData_2259bd8;
extern __int64 GameData_2259be8;
extern __int64 GameData_2259bf0;
extern __int64 GameData_2259c08;
extern __int64 GameData_2259c18;
extern __int64 GameData_2259c28;
extern __int64 GameData_2259c30;
extern __int64 GameData_2259c38;
extern __int64 GameData_2259c48;
extern __int64 GameData_2259c58;
extern __int64 GameData_2259c68;
extern __int64 GameData_2259c70;
extern __int64 GameData_2259c78;
extern __int64 GameData_2259c88;
extern __int64 GameData_2259c98;
extern __int64 GameData_2259ca8;
extern __int64 GameData_2259cb0;
extern __int64 GameData_2259cb8;
extern __int64 GameData_2259cc8;
extern __int64 GameData_2259cd8;
extern __int64 GameData_2259ce8;
extern __int64 GameData_2259cf0;
extern __int64 GameData_2259d08;
extern __int64 GameData_2259d18;
extern __int64 GameData_2259d28;
extern __int64 GameData_2259d30;
extern __int64 GameData_2259d48;
extern __int64 GameData_2259d58;
extern __int64 GameData_2259d68;
extern __int64 GameData_2259d70;
extern __int64 GameData_2259d78;
extern __int64 GameData_2259d88;
extern __int64 GameData_2259d98;
extern __int64 GameData_2259da8;
extern __int64 GameData_2259db0;
extern __int64 GameData_2259dc8;
extern __int64 GameData_2259dd8;
extern __int64 GameData_2259de8;
extern __int64 GameData_2259df0;
extern __int64 GameData_2259df8;
extern __int64 GameData_2259e08;
extern __int64 GameData_2259e18;
extern __int64 GameData_2259e28;
extern __int64 GameData_2259e30;
extern __int64 GameData_2259e38;
extern __int64 GameData_2259e48;
extern __int64 GameData_2259e58;
extern __int64 GameData_2259e68;
extern __int64 GameData_2259e70;
extern __int64 GameData_2259e78;
extern __int64 GameData_2259e88;
extern __int64 GameData_2259e98;
extern __int64 GameData_2259ea8;
extern __int64 GameData_2259eb0;
extern __int64 GameData_2259eb8;
extern __int64 GameData_2259ec8;
extern __int64 GameData_2259ed8;
extern __int64 GameData_2259ee8;
extern __int64 GameData_2259ef0;
extern __int64 GameData_2259ef8;
extern __int64 GameData_2259f08;
extern __int64 GameData_2259f18;
extern __int64 GameData_2259f28;
extern __int64 GameData_2259f30;
extern __int64 GameData_2259f38;
extern __int64 GameData_2259f48;
extern __int64 GameData_2259f58;
extern __int64 GameData_2259f68;
extern __int64 GameData_2259f70;
extern __int64 GameData_2259f88;
extern __int64 GameData_2259f98;
extern __int64 GameData_2259fa8;
extern __int64 GameData_2259fb0;
extern __int64 GameData_2259fc8;
extern __int64 GameData_2259fd8;
extern __int64 GameData_2259fe8;
extern __int64 GameData_2259ff0;
extern __int64 GameData_2259ff8;
extern __int64 GameData_225a008;
extern __int64 GameData_225a018;
extern __int64 GameData_225a028;
extern __int64 GameData_225a030;
extern __int64 GameData_225a038;
extern __int64 GameData_225a048;
extern __int64 GameData_225a058;
extern __int64 GameData_225a068;
extern __int64 GameData_225a070;
extern __int64 GameData_225a078;
extern __int64 GameData_225a088;
extern __int64 GameData_225a098;
extern __int64 GameData_225a0a8;
extern __int64 GameData_225a0b0;
extern __int64 GameData_225a0b8;
extern __int64 GameData_225a0c8;
extern __int64 GameData_225a0d8;
extern __int64 GameData_225a0e8;
extern __int64 GameData_225a0f0;
extern __int64 GameData_225a0f8;
extern __int64 GameData_225a108;
extern __int64 GameData_225a118;
extern __int64 GameData_225a128;
extern __int64 GameData_225a130;
extern __int64 GameData_225a138;
extern __int64 GameData_225a148;
extern __int64 GameData_225a158;
extern __int64 GameData_225a168;
extern __int64 GameData_225a170;
extern __int64 GameData_225a178;
extern __int64 GameData_225a188;
extern __int64 GameData_225a198;
extern __int64 GameData_225a1a8;
extern __int64 GameData_225a1b0;
extern __int64 GameData_225a1b8;
extern __int64 GameData_225a1c8;
extern __int64 GameData_225a1d8;
extern __int64 GameData_225a1e8;
extern __int64 GameData_225a1f0;
extern __int64 GameData_225a1f8;
extern __int64 GameData_225a208;
extern __int64 GameData_225a218;
extern __int64 GameData_225a228;
extern __int64 GameData_225a230;
extern __int64 GameData_225a238;
extern __int64 GameData_225a248;
extern __int64 GameData_225a258;
extern __int64 GameData_225a268;
extern __int64 GameData_225a270;
extern __int64 GameData_225a278;
extern __int64 GameData_225a288;
extern __int64 GameData_225a298;
extern __int64 GameData_225a2a8;
extern __int64 GameData_225a2b0;
extern __int64 GameData_225a2b8;
extern __int64 GameData_225a2c8;
extern __int64 GameData_225a2d8;
extern __int64 GameData_225a2e8;
extern __int64 GameData_225a2f0;
extern __int64 GameData_225a2f8;
extern __int64 GameData_225a308;
extern __int64 GameData_225a318;
extern __int64 GameData_225a328;
extern __int64 GameData_225a330;
extern __int64 GameData_225a338;
extern __int64 GameData_225a348;
extern __int64 GameData_225a358;
extern __int64 GameData_225a368;
extern __int64 GameData_225a370;
extern __int64 GameData_225a378;
extern __int64 GameData_225a388;
extern __int64 GameData_225a398;
extern __int64 GameData_225a3a8;
extern __int64 GameData_225a3b0;
extern __int64 GameData_225a3b8;
extern __int64 GameData_225a3c8;
extern __int64 GameData_225a3d8;
extern __int64 GameData_225a3e8;
extern __int64 GameData_225a3f0;
extern __int64 GameData_225a3f8;
extern __int64 GameData_225a408;
extern __int64 GameData_225a418;
extern __int64 GameData_225a428;
extern __int64 GameData_225a430;
extern __int64 GameData_225a438;
extern __int64 GameData_225a448;
extern __int64 GameData_225a458;
extern __int64 GameData_225a468;
extern __int64 GameData_225a470;
extern __int64 GameData_225a478;
extern __int64 GameData_225a488;
extern __int64 GameData_225a498;
extern __int64 GameData_225a4a8;
extern __int64 GameData_225a4b0;
extern __int64 GameData_225a4b8;
extern __int64 GameData_225a4c8;
extern __int64 GameData_225a4d8;
extern __int64 GameData_225a4e8;
extern __int64 GameData_225a4f0;
extern __int64 GameData_225a4f8;
extern __int64 GameData_225a508;
extern __int64 GameData_225a518;
extern __int64 GameData_225a528;
extern __int64 GameData_225a530;
extern __int64 GameData_225a538;
extern __int64 GameData_225a548;
extern __int64 GameData_225a558;
extern __int64 GameData_225a568;
extern __int64 GameData_225a570;
extern __int64 GameData_225a578;
extern __int64 GameData_225a588;
extern __int64 GameData_225a598;
extern __int64 GameData_225a5a8;
extern __int64 GameData_225a5b0;
extern __int64 GameData_225a5b8;
extern __int64 GameData_225a5c8;
extern __int64 GameData_225a5d8;
extern __int64 GameData_225a5e8;
extern __int64 GameData_225a5f0;
extern __int64 GameData_225a5f8;
extern __int64 GameData_225a608;
extern __int64 GameData_225a618;
extern __int64 GameData_225a628;
extern __int64 GameData_225a630;
extern __int64 GameData_225a638;
extern __int64 GameData_225a648;
extern __int64 GameData_225a658;
extern __int64 GameData_225a668;
extern __int64 GameData_225a670;
extern __int64 GameData_225a678;
extern __int64 GameData_225a688;
extern __int64 GameData_225a698;
extern __int64 GameData_225a6a8;
extern __int64 GameData_225a6b0;
extern __int64 GameData_225a6b8;
extern __int64 GameData_225a6c8;
extern __int64 GameData_225a6d8;
extern __int64 GameData_225a6e8;
extern __int64 GameData_225a6f0;
extern __int64 GameData_225a6f8;
extern __int64 GameData_225a708;
extern __int64 GameData_225a718;
extern __int64 GameData_225a728;
extern __int64 GameData_225a730;
extern __int64 GameData_225a738;
extern __int64 GameData_225a748;
extern __int64 GameData_225a758;
extern __int64 GameData_225a768;
extern __int64 GameData_225a770;
extern __int64 GameData_225a778;
extern __int64 GameData_225a788;
extern __int64 GameData_225a798;
extern __int64 GameData_225a7a8;
extern __int64 GameData_225a7b0;
extern __int64 GameData_225a7b8;
extern __int64 GameData_225a7c8;
extern __int64 GameData_225a7d8;
extern __int64 GameData_225a7e8;
extern __int64 GameData_225a7f0;
extern __int64 GameData_225a7f8;
extern __int64 GameData_225a808;
extern __int64 GameData_225a818;
extern __int64 GameData_225a828;
extern __int64 GameData_225a830;
extern __int64 GameData_225a838;
extern __int64 GameData_225a848;
extern __int64 GameData_225a858;
extern __int64 GameData_225a868;
extern __int64 GameData_225a870;
extern __int64 GameData_225a888;
extern __int64 GameData_225a898;
extern __int64 GameData_225a8a8;
extern __int64 GameData_225a8b0;
extern __int64 GameData_225a8c8;
extern __int64 GameData_225a8d8;
extern __int64 GameData_225a8e8;
extern __int64 GameData_225a8f0;
extern __int64 GameData_225a8f8;
extern __int64 GameData_225a908;
extern __int64 GameData_225a918;
extern __int64 GameData_225a928;
extern __int64 GameData_225a930;
extern __int64 GameData_225a938;
extern __int64 GameData_225a948;
extern __int64 GameData_225a958;
extern __int64 GameData_225a968;
extern __int64 GameData_225a970;
extern __int64 GameData_225a978;
extern __int64 GameData_225a988;
extern __int64 GameData_225a998;
extern __int64 GameData_225a9a8;
extern __int64 GameData_225a9b0;
extern __int64 GameData_225a9b8;
extern __int64 GameData_225a9c8;
extern __int64 GameData_225a9d8;
extern __int64 GameData_225a9e8;
extern __int64 GameData_225a9f0;
extern __int64 GameData_225a9f8;
extern __int64 GameData_225aa08;
extern __int64 GameData_225aa18;
extern __int64 GameData_225aa28;
extern __int64 GameData_225aa30;
extern __int64 GameData_225aa48;
extern __int64 GameData_225aa58;
extern __int64 GameData_225aa68;
extern __int64 GameData_225aa70;
extern __int64 GameData_225aa78;
extern __int64 GameData_225aa88;
extern __int64 GameData_225aa98;
extern __int64 GameData_225aaa8;
extern __int64 GameData_225aab0;
extern __int64 GameData_225aab8;
extern __int64 GameData_225aac8;
extern __int64 GameData_225aad8;
extern __int64 GameData_225aae8;
extern __int64 GameData_225aaf0;
extern __int64 GameData_225aaf8;
extern __int64 GameData_225ab08;
extern __int64 GameData_225ab18;
extern __int64 GameData_225ab28;
extern __int64 GameData_225ab30;
extern __int64 GameData_225ab38;
extern __int64 GameData_225ab48;
extern __int64 GameData_225ab58;
extern __int64 GameData_225ab68;
extern __int64 GameData_225ab70;
extern __int64 GameData_225ab78;
extern __int64 GameData_225ab88;
extern __int64 GameData_225ab98;
extern __int64 GameData_225aba8;
extern __int64 GameData_225abb0;
extern __int64 GameData_225abc8;
extern __int64 GameData_225abd8;
extern __int64 GameData_225abe8;
extern __int64 GameData_225abf0;
extern __int64 GameData_225ac08;
extern __int64 GameData_225ac18;
extern __int64 GameData_225ac28;
extern __int64 GameData_225ac30;
extern __int64 GameData_225ac38;
extern __int64 GameData_225ac48;
extern __int64 GameData_225ac58;
extern __int64 GameData_225ac68;
extern __int64 GameData_225ac70;
extern __int64 GameData_225ac78;
extern __int64 GameData_225ac88;
extern __int64 GameData_225ac98;
extern __int64 GameData_225aca8;
extern __int64 GameData_225acb0;
extern __int64 GameData_225acb8;
extern __int64 GameData_225acc8;
extern __int64 GameData_225acd8;
extern __int64 GameData_225ace8;
extern __int64 GameData_225acf0;
extern __int64 GameData_225ad08;
extern __int64 GameData_225ad18;
extern __int64 GameData_225ad28;
extern __int64 GameData_225ad30;
extern __int64 GameData_225ad38;
extern __int64 GameData_225ad48;
extern __int64 GameData_225ad58;
extern __int64 GameData_225ad68;
extern __int64 GameData_225ad70;
extern __int64 GameData_225ad78;
extern __int64 GameData_225ad88;
extern __int64 GameData_225ad98;
extern __int64 GameData_225ada8;
extern __int64 GameData_225adb0;
extern __int64 GameData_225adb8;
extern __int64 GameData_225adc8;
extern __int64 GameData_225add8;
extern __int64 GameData_225ade8;
extern __int64 GameData_225adf0;
extern __int64 GameData_225adf8;
extern __int64 GameData_225ae08;
extern __int64 GameData_225ae18;
extern char GameData_2259860;
extern char GameData_22598a0;
extern char GameData_22598e0;
extern char GameData_2259920;
extern char GameData_2259960;
extern char GameData_22599a0;
extern char GameData_22599e0;
extern char GameData_2259a20;
extern char GameData_2259a60;
extern char GameData_2259aa0;
extern char GameData_2259ae0;
extern char GameData_2259b20;
extern char GameData_2259b60;
extern char GameData_2259ba0;
extern char GameData_2259be0;
extern char GameData_2259c20;
extern char GameData_2259c60;
extern char GameData_2259ca0;
extern char GameData_2259ce0;
extern char GameData_2259d20;
extern char GameData_2259d60;
extern char GameData_2259da0;
extern char GameData_2259de0;
extern char GameData_2259e20;
extern char GameData_2259e60;
extern char GameData_2259ea0;
extern char GameData_2259ee0;
extern char GameData_2259f20;
extern char GameData_2259f60;
extern char GameData_2259fa0;
extern char GameData_2259fe0;
extern char GameData_225a020;
extern char GameData_225a060;
extern char GameData_225a0a0;
extern char GameData_225a0e0;
extern char GameData_225a120;
extern char GameData_225a160;
extern char GameData_225a1a0;
extern char GameData_225a1e0;
extern char GameData_225a220;
extern char GameData_225a260;
extern char GameData_225a2a0;
extern char GameData_225a2e0;
extern char GameData_225a320;
extern char GameData_225a360;
extern char GameData_225a3a0;
extern char GameData_225a3e0;
extern char GameData_225a420;
extern char GameData_225a460;
extern char GameData_225a4a0;
extern char GameData_225a4e0;
extern char GameData_225a520;
extern char GameData_225a560;
extern char GameData_225a5a0;
extern char GameData_225a5e0;
extern char GameData_225a620;
extern char GameData_225a660;
extern char GameData_225a6a0;
extern char GameData_225a6e0;
extern char GameData_225a720;
extern char GameData_225a760;
extern char GameData_225a7a0;
extern char GameData_225a7e0;
extern char GameData_225a820;
extern char GameData_225a860;
extern char GameData_225a8a0;
extern char GameData_225a8e0;
extern char GameData_225a920;
extern char GameData_225a960;
extern char GameData_225a9a0;
extern char GameData_225a9e0;
extern char GameData_225aa20;
extern char GameData_225aa60;
extern char GameData_225aaa0;
extern char GameData_225aae0;
extern char GameData_225ab20;
extern char GameData_225ab60;
extern char GameData_225aba0;
extern char GameData_225abe0;
extern char GameData_225ac20;
extern char GameData_225ac60;
extern char GameData_225aca0;
extern char GameData_225ace0;
extern char GameData_225ad20;
extern char GameData_225ad60;
extern char GameData_225ada0;
extern char GameData_225ade0;
extern int* GameData_2131418[3];
extern int GameData_2259880;
extern int GameData_2259890;
extern int GameData_22598c0;
extern int GameData_22598d0;
extern int GameData_2259900;
extern int GameData_2259910;
extern int GameData_2259940;
extern int GameData_2259950;
extern int GameData_2259980;
extern int GameData_2259990;
extern int GameData_22599c0;
extern int GameData_22599d0;
extern int GameData_2259a00;
extern int GameData_2259a10;
extern int GameData_2259a40;
extern int GameData_2259a50;
extern int GameData_2259a80;
extern int GameData_2259a90;
extern int GameData_2259ac0;
extern int GameData_2259ad0;
extern int GameData_2259b00;
extern int GameData_2259b10;
extern int GameData_2259b40;
extern int GameData_2259b50;
extern int GameData_2259b80;
extern int GameData_2259b90;
extern int GameData_2259bc0;
extern int GameData_2259bd0;
extern int GameData_2259c00;
extern int GameData_2259c10;
extern int GameData_2259c40;
extern int GameData_2259c50;
extern int GameData_2259c80;
extern int GameData_2259c90;
extern int GameData_2259cc0;
extern int GameData_2259cd0;
extern int GameData_2259d00;
extern int GameData_2259d10;
extern int GameData_2259d40;
extern int GameData_2259d50;
extern int GameData_2259d80;
extern int GameData_2259d90;
extern int GameData_2259dc0;
extern int GameData_2259dd0;
extern int GameData_2259e00;
extern int GameData_2259e10;
extern int GameData_2259e40;
extern int GameData_2259e50;
extern int GameData_2259e80;
extern int GameData_2259e90;
extern int GameData_2259ec0;
extern int GameData_2259ed0;
extern int GameData_2259f00;
extern int GameData_2259f10;
extern int GameData_2259f40;
extern int GameData_2259f50;
extern int GameData_2259f80;
extern int GameData_2259f90;
extern int GameData_2259fc0;
extern int GameData_2259fd0;
extern int GameData_225a000;
extern int GameData_225a010;
extern int GameData_225a040;
extern int GameData_225a050;
extern int GameData_225a080;
extern int GameData_225a090;
extern int GameData_225a0c0;
extern int GameData_225a0d0;
extern int GameData_225a100;
extern int GameData_225a110;
extern int GameData_225a140;
extern int GameData_225a150;
extern int GameData_225a180;
extern int GameData_225a190;
extern int GameData_225a1c0;
extern int GameData_225a1d0;
extern int GameData_225a200;
extern int GameData_225a210;
extern int GameData_225a240;
extern int GameData_225a250;
extern int GameData_225a280;
extern int GameData_225a290;
extern int GameData_225a2c0;
extern int GameData_225a2d0;
extern int GameData_225a300;
extern int GameData_225a310;
extern int GameData_225a340;
extern int GameData_225a350;
extern int GameData_225a380;
extern int GameData_225a390;
extern int GameData_225a3c0;
extern int GameData_225a3d0;
extern int GameData_225a400;
extern int GameData_225a410;
extern int GameData_225a440;
extern int GameData_225a450;
extern int GameData_225a480;
extern int GameData_225a490;
extern int GameData_225a4c0;
extern int GameData_225a4d0;
extern int GameData_225a500;
extern int GameData_225a510;
extern int GameData_225a540;
extern int GameData_225a550;
extern int GameData_225a580;
extern int GameData_225a590;
extern int GameData_225a5c0;
extern int GameData_225a5d0;
extern int GameData_225a600;
extern int GameData_225a610;
extern int GameData_225a640;
extern int GameData_225a650;
extern int GameData_225a680;
extern int GameData_225a690;
extern int GameData_225a6c0;
extern int GameData_225a6d0;
extern int GameData_225a700;
extern int GameData_225a710;
extern int GameData_225a740;
extern int GameData_225a750;
extern int GameData_225a780;
extern int GameData_225a790;
extern int GameData_225a7c0;
extern int GameData_225a7d0;
extern int GameData_225a800;
extern int GameData_225a810;
extern int GameData_225a840;
extern int GameData_225a850;
extern int GameData_225a880;
extern int GameData_225a890;
extern int GameData_225a8c0;
extern int GameData_225a8d0;
extern int GameData_225a900;
extern int GameData_225a910;
extern int GameData_225a940;
extern int GameData_225a950;
extern int GameData_225a980;
extern int GameData_225a990;
extern int GameData_225a9c0;
extern int GameData_225a9d0;
extern int GameData_225aa00;
extern int GameData_225aa10;
extern int GameData_225aa40;
extern int GameData_225aa50;
extern int GameData_225aa80;
extern int GameData_225aa90;
extern int GameData_225aac0;
extern int GameData_225aad0;
extern int GameData_225ab00;
extern int GameData_225ab10;
extern int GameData_225ab40;
extern int GameData_225ab50;
extern int GameData_225ab80;
extern int GameData_225ab90;
extern int GameData_225abc0;
extern int GameData_225abd0;
extern int GameData_225ac00;
extern int GameData_225ac10;
extern int GameData_225ac40;
extern int GameData_225ac50;
extern int GameData_225ac80;
extern int GameData_225ac90;
extern int GameData_225acc0;
extern int GameData_225acd0;
extern int GameData_225ad00;
extern int GameData_225ad10;
extern int GameData_225ad40;
extern int GameData_225ad50;
extern int GameData_225ad80;
extern int GameData_225ad90;
extern int GameData_225adc0;
extern int GameData_225add0;
extern int GameData_225ae00;
extern int GameData_225ae10;
float ProcTheaterSceneAct_13e2420_alt1(__int64);
int __cxa_guard_acquire(__int64);
void GameRoutine_1418aa0();
void __cxa_guard_release(__int64);
void game_facility_PerchSceneDiff_Initialize(__int64*, __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
__int64 ProcPerchScene_15ecd50(__int64 a1, __int64* a2);

__int64 ProcPerchScene_15ecd50(__int64 a1, __int64* a2)
{

#pragma clang fp contract(on)

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64** v10;
  __int64* v11;
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
  __int64** v27;
  __int64* v28;
  _QWORD* v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v38[2];
    __int64 v39;
  } v38_;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225ae20,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_225ae20) != 0) {
    GameData_22598a8 = 0;
    GameData_22598b0 = (__int64)game_facility_anonymous_15edd80;
    GameData_2259860 = 3;
    GameData_2259888 = 0;
    GameData_2259890 = 0;
    GameData_2259898 = 0;
    GameData_2259868 = 0;
    GameData_2259870 = 0;
    GameData_2259878 = 0;
    GameData_2259880 = 0;
    GameData_22598a0 = 13;
    GameData_22598b8 = 0;
    GameData_22598c0 = 0;
    GameData_22598c8 = 0;
    GameData_22598d0 = 0;
    GameData_22598d8 = 0;
    GameData_22598e0 = 8;
    GameData_2259a28 = 0;
    GameData_2259a30 = (__int64)GameRoutine_15edf20;
    GameData_2259900 = 0;
    GameData_2259908 = 0;
    GameData_2259910 = 0;
    GameData_2259918 = 0;
    GameData_2259920 = 13;
    GameData_2259938 = 0;
    GameData_2259940 = 0;
    GameData_2259948 = 0;
    GameData_2259950 = 0;
    GameData_2259958 = 0;
    GameData_2259960 = 13;
    GameData_2259968 = 0;
    GameData_2259970 = (__int64)ProcPerchScene_15edda0_alt1;
    GameData_2259978 = 0;
    GameData_2259980 = 0;
    GameData_2259988 = 0;
    GameData_2259990 = 0;
    GameData_2259998 = 0;
    GameData_22599a0 = 12;
    GameData_22599b0 = 0;
    GameData_22599b8 = 0;
    GameData_22599a8 = 0;
    GameData_22599c8 = 0;
    GameData_22599d0 = 0;
    GameData_22599d8 = 0;
    GameData_22599e0 = 2;
    GameData_22598e8 = 0;
    GameData_22598f0 = (__int64)GameData_212dd30[0];
    GameData_22599e8 = 0;
    GameData_22599f0 = 0;
    GameData_22599f8 = 0;
    GameData_2259a08 = 0;
    GameData_2259a10 = 0;
    GameData_2259a18 = 0;
    GameData_2259a20 = 13;
    GameData_2259a38 = 0;
    GameData_2259a40 = 0;
    GameData_2259a48 = 0;
    GameData_2259928 = 0;
    GameData_2259930 = (__int64)GameRoutine_15edd90;
    GameData_2259a50 = 0;
    GameData_2259a58 = 0;
    GameData_2259a60 = 13;
    GameData_2259a68 = 0;
    GameData_2259a70 = (__int64)GameRoutine_15ee060;
    GameData_2259a78 = 0;
    GameData_2259a80 = 0;
    GameData_2259a88 = 0;
    GameData_2259a90 = 0;
    GameData_2259a98 = 0;
    GameData_22599c0 = 1;
    GameData_2259a00 = 1;
    GameData_2259aa0 = 13;
    GameData_2259aa8 = 0;
    GameData_2259ab0 =
        (__int64)game_facility_anonymous_ProcPerchScene_SetGreetCamera;
    GameData_2259ab8 = 0;
    GameData_2259ac0 = 0;
    GameData_2259ac8 = 0;
    GameData_2259ad0 = 0;
    GameData_2259ad8 = 0;
    GameData_2259ae0 = 13;
    GameData_2259ae8 = 0;
    GameData_2259af0 = 144;
    GameData_2259af8 = 1;
    GameData_2259b00 = 0;
    GameData_2259b08 = 0;
    GameData_2259b10 = 0;
    GameData_2259b18 = 0;
    GameData_2259b20 = 8;
    GameData_2259b28 = 0;
    GameData_2259b40 = 0;
    GameData_2259b48 = 0;
    GameData_2259b50 = 0;
    GameData_2259b58 = 0;
    GameData_2259b60 = 8;
    GameData_2259b30 = (__int64)GameData_212d298;
    GameData_2259b88 = 0;
    GameData_2259b90 = 0;
    GameData_2259b98 = 0;
    GameData_2259b80 = 0;
    GameData_2259b78 = 0;
    GameData_2259b70 = 0;
    GameData_2259ba0 = 19;
    GameData_2259ba8 = 0;
    GameData_2259b68 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_2259bc0 = 500;
    GameData_2259bc8 = 0;
    GameData_2259bd0 = 0;
    GameData_2259bd8 = 0;
    GameData_2259be0 = 10;
    GameData_2259bb0 = (__int64)GameData_212d060[0];
    GameData_2259c70 = (__int64)game_facility_anonymous_15ee5a0;
    GameData_2259be8 = 0;
    GameData_2259c00 = 0;
    GameData_2259c08 = 0;
    GameData_2259c10 = 0;
    GameData_2259c18 = 0;
    GameData_2259c20 = 13;
    GameData_2259c28 = 0;
    GameData_2259c30 = (__int64)ProcPerchScene_15ee1c0;
    GameData_2259c38 = 0;
    GameData_2259c40 = 0;
    GameData_2259c48 = 0;
    GameData_2259c50 = 0;
    GameData_2259c58 = 0;
    GameData_2259c60 = 13;
    GameData_2259c68 = 0;
    GameData_2259c78 = 0;
    GameData_2259c80 = 0;
    GameData_2259c88 = 0;
    GameData_2259c90 = 0;
    GameData_2259c98 = 0;
    GameData_2259ca8 = 0;
    GameData_2259cb0 = (__int64)ProcPerchScene_15ee6b0;
    GameData_2259cb8 = 0;
    GameData_2259cc0 = 0;
    GameData_2259cc8 = 0;
    GameData_2259cd0 = 0;
    GameData_2259cd8 = 0;
    GameData_2259ce0 = 19;
    GameData_2259ce8 = 0;
    GameData_2259ca0 = 15;
    GameData_2259bf0 = (__int64)GameData_212c720;
    GameData_2259d00 = 500;
    GameData_2259d08 = 0;
    GameData_2259d10 = 0;
    GameData_2259d18 = 0;
    GameData_2259d20 = 10;
    GameData_2259d28 = 0;
    GameData_2259d30 = (__int64)GameData_212c720;
    GameData_2259d40 = 0;
    GameData_2259d48 = 0;
    GameData_2259d50 = 0;
    GameData_2259d58 = 0;
    GameData_2259d60 = 8;
    GameData_2259cf0 = (__int64)game_80a680_ptr_212c6d0[0];
    GameData_2259d88 = 0;
    GameData_2259d90 = 0;
    GameData_2259d98 = 0;
    GameData_2259d80 = 0;
    GameData_2259d78 = 0;
    GameData_2259d70 = 0;
    GameData_2259da0 = 8;
    GameData_2259da8 = 0;
    GameData_2259d68 = (__int64)ProcHubSeq_d85570_ptr_212dd48[0];
    GameData_225a5c0 = 5;
    GameData_225a530 = (__int64)ProcPerchScene_15edda0_alt1;
    GameData_2259dc0 = 0;
    GameData_2259dc8 = 0;
    GameData_2259dd0 = 0;
    GameData_2259dd8 = 0;
    GameData_2259de0 = 13;
    GameData_2259de8 = 0;
    GameData_2259df0 = (__int64)ProcPerchScene_15ee740;
    GameData_2259df8 = 0;
    GameData_2259e00 = 0;
    GameData_2259e08 = 0;
    GameData_2259e10 = 0;
    GameData_2259e18 = 0;
    GameData_2259e20 = 13;
    GameData_2259e28 = 0;
    GameData_2259e30 = (__int64)GameRoutine_15ee060;
    GameData_2259e38 = 0;
    GameData_2259e40 = 0;
    GameData_2259e48 = 0;
    GameData_2259e50 = 0;
    GameData_2259e58 = 0;
    GameData_2259e60 = 13;
    GameData_2259e68 = 0;
    GameData_2259e70 =
        (__int64)game_facility_anonymous_ProcPerchScene_SetQuestionCamera_alt1;
    GameData_2259e78 = 0;
    GameData_2259e80 = 0;
    GameData_2259e88 = 0;
    GameData_2259e90 = 0;
    GameData_2259e98 = 0;
    GameData_2259ea0 = 13;
    GameData_2259ea8 = 0;
    GameData_2259eb8 = 0;
    GameData_2259ec0 = 0;
    GameData_2259ec8 = 0;
    GameData_2259ed0 = 0;
    GameData_2259ed8 = 0;
    GameData_2259ee0 = 13;
    GameData_2259ee8 = 0;
    GameData_2259ef0 = (__int64)ProcPerchScene_15eec60;
    GameData_2259ef8 = 0;
    GameData_2259f00 = 0;
    GameData_2259f08 = 0;
    GameData_2259f10 = 0;
    GameData_2259f18 = 0;
    GameData_2259f20 = 8;
    GameData_2259f28 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_2259f48 = 0;
    GameData_2259f50 = 0;
    GameData_2259f58 = 0;
    GameData_2259f40 = 0;
    GameData_2259f38 = 0;
    GameData_2259f30 = 0;
    GameData_2259f60 = 19;
    GameData_2259f68 = 0;
    GameData_2259f70 = (__int64)GameData_212d060[0];
    GameData_2259f80 = 500;
    GameData_2259f88 = 0;
    GameData_2259f90 = 0;
    GameData_2259f98 = 0;
    GameData_2259fa0 = 10;
    GameData_2259fa8 = 0;
    GameData_2259fb0 = (__int64)GameData_212c720;
    GameData_2259fc0 = 0;
    GameData_2259fc8 = 0;
    GameData_2259fd0 = 0;
    GameData_2259fd8 = 0;
    GameData_2259fe0 = 12;
    GameData_2259ff8 = 0;
    GameData_2259ff0 = 0;
    GameData_2259fe8 = 0;
    GameData_225a000 = 2;
    GameData_225a008 = 0;
    GameData_225a010 = 0;
    GameData_225a018 = 0;
    GameData_225a020 = 2;
    GameData_225a028 = 0;
    GameData_225a030 = 0;
    GameData_225a038 = 0;
    GameData_225a5a0 = 2;
    GameData_225a5a8 = 0;
    GameData_225a5b0 = 0;
    GameData_225a5b8 = 0;
    GameData_225a5c8 = 0;
    GameData_225a5d0 = 0;
    GameData_225a5d8 = 0;
    GameData_225a5e0 = 13;
    GameData_225a548 = 0;
    GameData_225a550 = 0;
    GameData_225a558 = 0;
    GameData_225a560 = 12;
    GameData_225a578 = 0;
    GameData_225a570 = 0;
    GameData_225a568 = 0;
    GameData_225a588 = 0;
    GameData_225a590 = 0;
    GameData_225a598 = 0;
    GameData_225a4f0 = (__int64)GameRoutine_15efd30;
    GameData_225a4f8 = 0;
    GameData_225a500 = 0;
    GameData_225a508 = 0;
    GameData_225a510 = 0;
    GameData_225a518 = 0;
    GameData_225a520 = 13;
    GameData_225a528 = 0;
    GameData_225a538 = 0;
    GameData_225a540 = 0;
    GameData_225a490 = 0;
    GameData_225a498 = 0;
    GameData_225a4a0 = 2;
    GameData_225a4a8 = 0;
    GameData_225a4b0 = 0;
    GameData_225a4b8 = 0;
    GameData_225a4c0 = 4;
    GameData_225a4c8 = 0;
    GameData_225a4d0 = 0;
    GameData_225a4d8 = 0;
    GameData_225a4e0 = 13;
    GameData_225a4e8 = 0;
    GameData_225a040 = 2;
    GameData_225a3e8 = 0;
    GameData_225a440 = 0;
    GameData_225a448 = 0;
    GameData_225a450 = 0;
    GameData_225a458 = 0;
    GameData_225a460 = 12;
    GameData_225a478 = 0;
    GameData_225a470 = 0;
    GameData_225a468 = 0;
    GameData_225a480 = 4;
    GameData_225a488 = 0;
    GameData_225a3f0 = 0;
    GameData_225a3f8 = 0;
    GameData_225a400 = 1;
    GameData_225a408 = 0;
    GameData_225a410 = 500;
    GameData_225a418 = 0;
    GameData_225a420 = 13;
    GameData_225a428 = 0;
    GameData_225a438 = 0;
    GameData_225a298 = 0;
    GameData_225a2a0 = 2;
    GameData_225a370 = 0;
    GameData_225a3a0 = 15;
    GameData_225a3a8 = 0;
    GameData_225a3b0 = (__int64)ProcPerchScene_15ef8e0;
    GameData_225a3b8 = 0;
    GameData_225a3c0 = 0;
    GameData_225a3c8 = 0;
    GameData_225a3d0 = 0;
    GameData_225a3d8 = 0;
    GameData_225a3e0 = 4;
    GameData_225a348 = 0;
    GameData_225a350 = 0;
    GameData_225a358 = 0;
    GameData_225a360 = 8;
    GameData_225a580 = 7;
    GameData_225a430 = (__int64)ProcPerchScene_15efc80_alt1;
    GameData_2259db0 = (__int64)GameData_212c710[0];
    GameData_2259eb0 = (__int64)ProcPerchScene_15eea60_alt1;
    GameData_225a828 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_225a1f0 = (__int64)ProcPerchScene_15ef8e0;
    GameData_225a070 = (__int64)ProcPerchScene_15eedf0_alt1;
    GameData_225a388 = 0;
    GameData_225a390 = 0;
    GameData_225a398 = 0;
    GameData_225a380 = 0;
    GameData_225a378 = 0;
    GameData_225a2f8 = 0;
    GameData_225a300 = 0;
    GameData_225a308 = 0;
    GameData_225a310 = 0;
    GameData_225a318 = 0;
    GameData_225a320 = 13;
    GameData_225a328 = 0;
    GameData_225a338 = 0;
    GameData_225a340 = 0;
    GameData_225a2b8 = 0;
    GameData_225a2b0 = 0;
    GameData_225a2a8 = 0;
    GameData_225a2c0 = 3;
    GameData_225a2c8 = 0;
    GameData_225a2d0 = 0;
    GameData_225a2d8 = 0;
    GameData_225a2e0 = 13;
    GameData_225a2e8 = 0;
    GameData_225a048 = 0;
    GameData_225a240 = 1;
    GameData_225a248 = 0;
    GameData_225a250 = 500;
    GameData_225a258 = 0;
    GameData_225a260 = 12;
    GameData_225a268 = 0;
    GameData_225a270 = 0;
    GameData_225a278 = 0;
    GameData_225a280 = 2;
    GameData_225a288 = 0;
    GameData_225a290 = 0;
    GameData_225a1f8 = 0;
    GameData_225a200 = 0;
    GameData_225a208 = 0;
    GameData_225a210 = 0;
    GameData_225a218 = 0;
    GameData_225a220 = 4;
    GameData_225a238 = 0;
    GameData_225a230 = 0;
    GameData_225a228 = 0;
    GameData_225a1a0 = 13;
    GameData_225a1a8 = 0;
    GameData_225a1b8 = 0;
    GameData_225a1c0 = 0;
    GameData_225a1c8 = 0;
    GameData_225a1d0 = 0;
    GameData_225a1d8 = 0;
    GameData_225a1e0 = 15;
    GameData_225a1e8 = 0;
    GameData_225a150 = 0;
    GameData_225a158 = 0;
    GameData_225a160 = 15;
    GameData_225a168 = 0;
    GameData_225a178 = 0;
    GameData_225a180 = 0;
    GameData_225a188 = 0;
    GameData_225a190 = 0;
    GameData_225a198 = 0;
    GameData_225a100 = 0;
    GameData_225a108 = 0;
    GameData_225a110 = 0;
    GameData_225a118 = 0;
    GameData_225a120 = 13;
    GameData_225a128 = 0;
    GameData_225a138 = 0;
    GameData_225a140 = 0;
    GameData_225a148 = 0;
    GameData_225a050 = 0;
    GameData_225a0b8 = 0;
    GameData_225a0c0 = 0;
    GameData_225a0c8 = 0;
    GameData_225a0d0 = 0;
    GameData_225a0d8 = 0;
    GameData_225a0e0 = 13;
    GameData_225a0e8 = 0;
    GameData_225a0f8 = 0;
    GameData_225a068 = 0;
    GameData_225a078 = 0;
    GameData_225a080 = 0;
    GameData_225a088 = 0;
    GameData_225a090 = 0;
    GameData_225a098 = 0;
    GameData_225a0a0 = 13;
    GameData_225a0a8 = 0;
    GameData_225a058 = 0;
    GameData_225a060 = 13;
    GameData_225a5e8 = 0;
    GameData_225a5f8 = 0;
    GameData_225a600 = 0;
    GameData_225a608 = 0;
    GameData_225a610 = 0;
    GameData_225a618 = 0;
    GameData_225a620 = 12;
    GameData_225a638 = 0;
    GameData_225a630 = 0;
    GameData_225a628 = 0;
    GameData_225a640 = 4;
    GameData_225a648 = 0;
    GameData_225a650 = 0;
    GameData_225a658 = 0;
    GameData_225a660 = 2;
    GameData_225a668 = 0;
    GameData_225a670 = 0;
    GameData_225a678 = 0;
    GameData_225a688 = 0;
    GameData_225a690 = 0;
    GameData_225a698 = 0;
    GameData_225a6a0 = 13;
    GameData_225a6a8 = 0;
    GameData_225a6b0 = (__int64)ProcPerchScene_15ee740;
    GameData_225a6b8 = 0;
    GameData_225a6c0 = 0;
    GameData_225a6c8 = 0;
    GameData_225a6d0 = 0;
    GameData_225a6d8 = 0;
    GameData_225a6e0 = 13;
    GameData_225a6e8 = 0;
    GameData_225a6f0 = (__int64)GameRoutine_15ee060;
    GameData_225a6f8 = 0;
    GameData_225a700 = 0;
    GameData_225a708 = 0;
    GameData_225a710 = 0;
    GameData_225a718 = 0;
    GameData_225a720 = 13;
    GameData_225a728 = 0;
    GameData_225a730 =
        (__int64)game_facility_anonymous_ProcPerchScene_SetQuestionCamera_alt1;
    GameData_225a738 = 0;
    GameData_225a740 = 0;
    GameData_225a748 = 0;
    GameData_225a750 = 0;
    GameData_225a758 = 0;
    GameData_225a760 = 13;
    GameData_225a768 = 0;
    GameData_225a770 = 144;
    GameData_225a778 = 1;
    GameData_225a780 = 0;
    GameData_225a788 = 0;
    GameData_225a790 = 0;
    GameData_225a798 = 0;
    GameData_225a7a0 = 13;
    GameData_225a7a8 = 0;
    GameData_225a7b0 = (__int64)ProcPerchScene_15eea60_alt1;
    GameData_225a7b8 = 0;
    GameData_225a7c0 = 0;
    GameData_225a7c8 = 0;
    GameData_225a7d0 = 0;
    GameData_225a7d8 = 0;
    GameData_225a7e0 = 13;
    GameData_225a7e8 = 0;
    GameData_225a7f0 = (__int64)ProcPerchScene_15eec60;
    GameData_225a7f8 = 0;
    GameData_225a800 = 0;
    GameData_225a808 = 0;
    GameData_225a810 = 0;
    GameData_225a818 = 0;
    GameData_225a820 = 8;
    GameData_225a848 = 0;
    GameData_225a850 = 0;
    GameData_225a858 = 0;
    GameData_225a840 = 0;
    GameData_225a838 = 0;
    GameData_225a830 = 0;
    GameData_225a868 = 0;
    GameData_225a870 = (__int64)GameData_212d060[0];
    GameData_225a880 = 500;
    GameData_225a888 = 0;
    GameData_225a890 = 0;
    GameData_225a898 = 0;
    GameData_225a860 = 19;
    GameData_225a130 = (__int64)ProcPerchScene_15ef780_alt1;
    GameData_225a5f0 = (__int64)ProcPerchScene_15efd40_alt1;
    GameData_225a8a8 = 0;
    GameData_225a8b0 = (__int64)GameData_212c720;
    GameData_225a8c0 = 0;
    GameData_225a8c8 = 0;
    GameData_225a8d0 = 0;
    GameData_225a8d8 = 0;
    GameData_225a8a0 = 10;
    GameData_225a0f0 = (__int64)ProcPerchScene_15ef2a0;
    GameData_225a8e8 = 0;
    GameData_225a8f0 = (__int64)ProcPerchScene_15ee1c0;
    GameData_225a8f8 = 0;
    GameData_225a900 = 0;
    GameData_225a908 = 0;
    GameData_225a910 = 0;
    GameData_225a918 = 0;
    GameData_225a8e0 = 13;
    GameData_225a0b0 = (__int64)ProcPerchScene_15ef1d0_alt1;
    GameData_225a928 = 0;
    GameData_225a938 = 0;
    GameData_225a940 = 0;
    GameData_225a948 = 0;
    GameData_225a950 = 0;
    GameData_225a958 = 0;
    GameData_225a968 = 0;
    GameData_225a970 = (__int64)ProcPerchScene_15efd40_alt1;
    GameData_225a920 = 13;
    GameData_225a368 = (__int64)RelianceCheck_19a8080_ptr_212dd40[0];
    GameData_225a680 = 6;
    GameData_225a978 = 0;
    GameData_225a980 = 0;
    GameData_225a988 = 0;
    GameData_225a990 = 0;
    GameData_225a998 = 0;
    GameData_225a930 = (__int64)ProcPerchScene_15efd70_alt1;
    GameData_225a330 = (__int64)ProcPerchScene_15efc60_alt1;
    GameData_225a9b8 = 0;
    GameData_225a9b0 = 0;
    GameData_225a9a8 = 0;
    GameData_225a9c0 = 7;
    GameData_225a9c8 = 0;
    GameData_225a9d0 = 0;
    GameData_225a9d8 = 0;
    GameData_225a960 = 13;
    GameData_225a2f0 = (__int64)GameRoutine_15efc50;
    GameData_225a9e8 = 0;
    GameData_225a9f0 = 0;
    GameData_225a9f8 = 0;
    GameData_225aa00 = 7;
    GameData_225aa08 = 0;
    GameData_225aa10 = 0;
    GameData_225aa18 = 0;
    GameData_225a9a0 = 12;
    GameData_225a1b0 = (__int64)ProcPerchScene_15ef820_alt1;
    GameData_225aa28 = 0;
    GameData_225a9e0 = 2;
    GameData_225a170 = (__int64)ProcPerchScene_15ef7f0_alt1;
    GameData_225aa20 = 8;
    GameData_225ab78 = 1;
    GameData_225aa40 = 0;
    GameData_225aa48 = 0;
    GameData_225aa50 = 0;
    GameData_225aa58 = 0;
    GameData_225aa68 = 0;
    GameData_225aa78 = 0;
    GameData_225aa80 = 0;
    GameData_225aa88 = 0;
    GameData_225aa90 = 0;
    GameData_225aa98 = 0;
    GameData_225aab8 = 0;
    GameData_225aab0 = 0;
    GameData_225aaa8 = 0;
    GameData_225aac0 = 8;
    GameData_225aac8 = 0;
    GameData_225aad0 = 0;
    GameData_225aad8 = 0;
    GameData_225aae8 = 0;
    GameData_225aaf0 = 0;
    GameData_225aaf8 = 0;
    GameData_225ab00 = 8;
    GameData_225ab08 = 0;
    GameData_225ab10 = 0;
    GameData_225ab18 = 0;
    GameData_225ab28 = 0;
    GameData_225ab38 = 0;
    GameData_225ab40 = 0;
    GameData_225ab48 = 0;
    GameData_225ab50 = 0;
    GameData_225ab58 = 0;
    GameData_225ab68 = 0;
    GameData_225ab80 = 0;
    GameData_225ab88 = 0;
    GameData_225ab90 = 0;
    GameData_225aba0 = 19;
    GameData_225ab98 = 0;
    GameData_225aba8 = 0;
    GameData_225abb0 = (__int64)game_80a680_ptr_212c6d0[0];
    GameData_225abc0 = 500;
    GameData_225abc8 = 0;
    GameData_225abd0 = 0;
    GameData_225abd8 = 0;
    GameData_225abe8 = 0;
    GameData_225abf0 = (__int64)GameData_212c720;
    GameData_225abe0 = 10;
    GameData_225ac00 = 0;
    GameData_225ac08 = 0;
    GameData_225ac10 = 0;
    GameData_225ac18 = 0;
    GameData_225ac28 = (__int64)ProcHubSeq_d85570_ptr_212dd48[0];
    GameData_225ac48 = 0;
    GameData_225ac50 = 0;
    GameData_225ac58 = 0;
    GameData_225ac40 = 0;
    GameData_225ac20 = 8;
    GameData_225ac38 = 0;
    GameData_225ac30 = 0;
    GameData_225ac68 = 0;
    GameData_225ac78 = 0;
    GameData_225ac80 = 0;
    GameData_225ac88 = 0;
    GameData_225ac90 = 0;
    GameData_225ac98 = 0;
    GameData_225aca8 = 0;
    GameData_225acb0 = (__int64)ProcPerchScene_15ef7f0_alt1;
    GameData_225aa30 = (__int64)GameData_212d610[0];
    GameData_225ac60 = 13;
    GameData_225acb8 = 0;
    GameData_225acc0 = 0;
    GameData_225acc8 = 0;
    GameData_225acd0 = 0;
    GameData_225acd8 = 0;
    GameData_225ace8 = 0;
    GameData_225aa60 = 13;
    GameData_225ac70 = (__int64)ProcPerchScene_15f02e0;
    GameData_225aa70 = (__int64)ProcPerchScene_15efe00;
    GameData_225aca0 = 15;
    GameData_225aaa0 = 12;
    GameData_225ace0 = 8;
    GameData_225aae0 = 2;
    GameData_225ab20 = 13;
    GameData_225ab30 = (__int64)ProcPerchScene_15f0160_alt1;
    GameData_225ab60 = 13;
    GameData_225ab70 = 152;
    GameData_225ad00 = 0;
    GameData_225ad08 = 0;
    GameData_225ad10 = 0;
    GameData_225ad18 = 0;
    GameData_225ad28 = 0;
    GameData_225ad38 = 0;
    GameData_225ad40 = 0;
    GameData_225ad48 = 0;
    GameData_225ad50 = 0;
    GameData_225ad58 = 0;
    GameData_225ad88 = 0;
    GameData_225ad90 = 0;
    GameData_225ad98 = 0;
    GameData_225ad80 = 0;
    GameData_225ad78 = 0;
    GameData_225ad70 = 0;
    GameData_225ad68 = 0;
    GameData_225adc8 = 0;
    GameData_225add0 = 0;
    GameData_225add8 = 0;
    GameData_225ae08 = 0;
    GameData_225ae10 = 0;
    GameData_225ae18 = 0;
    GameData_225ada8 = 0;
    GameData_225adb0 = 0;
    GameData_225adb8 = 0;
    GameData_225adc0 = 0;
    GameData_225ade8 = 0;
    GameData_225adf0 = 0;
    GameData_225adf8 = 0;
    GameData_225ae00 = 0;
    GameData_225acf0 = (__int64)GameData_212dd50;
    GameData_225ad20 = 13;
    GameData_225ad30 = (__int64)GameRoutine_15f0530;
    GameData_225ad60 = 3;
    GameData_225ada0 = 6;
    GameData_225ade0 = 0;
    __cxa_guard_release((__int64)&GameData_225ae20);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 400, 16, 0);
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  v6 = v5;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  v7 = GameData_212c608[0];
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v7 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  GameData_225ae28 = v6;
  *(_QWORD*)v6 = GameData_2060e00;
  v8 = GameData_2132488;
  *(_BYTE*)(v6 + 216) = 0;
  *(_BYTE*)(v6 + 220) = 0;
  *(_QWORD*)(v6 + 208) = v8 + 2;
  v9 = GameData_2130240[0];
  *(_BYTE*)(v6 + 232) = 0;
  *(_BYTE*)(v6 + 236) = 0;
  *(_QWORD*)(v6 + 224) = v9 + 2;
  GameRoutine_1418aa0();
  v10 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v11 = (__int64*)fw_memory_HeapManager_Allocate_alt2(*v4, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v11);
    v12 = *v11;
    *v10 = v11;
    (*(void (**)(__int64*))(v12 + 16))(v11);
  }
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[10];
  v16 = a2[11];
  v17 = *v4;
  *(_QWORD*)v6 = game_facility_anonymous_ProcPerchScene_vtable;
  *(_DWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 360) = 0;
  *(_QWORD*)(v6 + 368) = 0;
  *(_QWORD*)(v6 + 376) = 0;
  *(_BYTE*)(v6 + 384) = 1;
  *(_QWORD*)(v6 + 208) = GameData_2060c20;
  *(_QWORD*)(v6 + 240) = v13;
  v18 = a2[12];
  v19 = a2[13];
  *(_QWORD*)(v6 + 328) = v16;
  *(_QWORD*)(v6 + 336) = v18;
  *(_QWORD*)(v6 + 344) = v19;
  v20 = a2[6];
  v21 = a2[8];
  v22 = a2[9];
  *(_QWORD*)(v6 + 296) = a2[7];
  *(_QWORD*)(v6 + 304) = v21;
  *(_QWORD*)(v6 + 312) = v22;
  *(_QWORD*)(v6 + 320) = v15;
  v23 = a2[2];
  v24 = a2[4];
  v25 = a2[5];
  *(_QWORD*)(v6 + 264) = a2[3];
  *(_QWORD*)(v6 + 272) = v24;
  *(_QWORD*)(v6 + 280) = v25;
  *(_QWORD*)(v6 + 288) = v20;
  *(_QWORD*)(v6 + 248) = v14;
  *(_QWORD*)(v6 + 256) = v23;
  v26 = fw_memory_HeapManager_Allocate_alt2(v17, 104, 16, 0);
  v27 = (__int64**)GameData_2131410;
  if (*GameData_2131410 == 0) {
    *GameData_2131418[0] = 1;
  }
  *(_WORD*)(v26 + 8) = 0;
  *(_WORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_QWORD*)(v26 + 80) = 0;
  *(_DWORD*)(v26 + 88) = 1065353216;
  v28 = GameData_2131408[0];
  *(_QWORD*)(v26 + 96) = 0;
  *v27 = (__int64*)v26;
  *(_QWORD*)v26 = v28 + 2;
  GameRoutine_14225f0();
  game_facility_PerchSceneDiff_Initialize(*v27, v6 + 240);
  v29 = *(_QWORD**)GameData_2130fc0[0];
  v30 = fw_memory_HeapManager_Allocate_alt2(*v4, 48, 16, 0);
  v38_.v38[0] = 49;
  v38_.v38[1] = 45;
  v38_.v39 = v30;
  *(_QWORD*)(v30 + 16) = 0xBC83E3A283E394ADLL;
  *(_QWORD*)(v30 + 24) = 0x83E3A783E3B782E3LL;
  *(_QWORD*)(v30 + 32) = 0xE5A181E39389E6B3LL;
  strcpy((char*)(v30 + 37), "\x81\xA1切り");
  *(_QWORD*)v30 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v30 + 8) = 0xE79E9BE5A89CE68ALL;
  v31 = ProcTheaterSceneAct_13e2420_alt1((__int64)&GameData_1ae3a12);
  game_facility_19532e0((void*)(&v40_.v40), v29, v38_.v38, v31);
  v32 = v40_.v40;
  v33 = v40_.v41;
  v34 = *(_QWORD*)(v6 + 376);
  v40_.v40 = 0;
  v40_.v41 = 0;
  *(_QWORD*)(v6 + 368) = v32;
  *(_QWORD*)(v6 + 376) = v33;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak_alt1(v34);
  }
  v35 = v40_.v41;
  if (v40_.v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak_alt1(v35);
    if ((v38_.v38[0] & 1) == 0) {
      goto LABEL_18;
    }
  }
  else if ((v38_.v38[0] & 1) == 0) {
    goto LABEL_18;
  }
  if (v38_.v39 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v36, v38_.v39);
  }
LABEL_18:
  GameRoutine_170bd10(v6);
  return ProcInst_657850(v6, (__int64)&GameData_2259860,
                         (__int64)"ProcPerchScene", 1, a1);
}

_QWORD* ProcPerchScene_15edda0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(_DWORD*)(a1 + 152);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(_DWORD*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(_DWORD*)(a1 + 156);
            if (v5 == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(_DWORD*)(a1 + 156);
  if (v5 == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  v0 = GameData_212dce8;
  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)v0 + 264LL);
    if (v2 != 0) {
      v3 = *(_QWORD*)(*(_QWORD*)v0 + 256LL);
      v4 = result;
      v5 = *(_QWORD*)(*(_QWORD*)v0 + 264LL);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v6 = std___1___shared_weak_count_lock(v5);
      result = std___1___shared_weak_count___release_weak(v2);
      if (v6 != 0) {
        if (v3 == 0) {
          goto LABEL_15;
        }
        v9[0] = GameData_2060a68;
        v9[1] = v4;
        v10 = v9;
        v12 = v11;
        v11[0] = GameData_2060a68;
        v11[1] = v4;
        GameRoutine_14514d0(v11, v3 + 272);
        if (v12 == v11) {
          v7 = 32;
        }
        else {
          if (v12 == nullptr) {
            goto LABEL_10;
          }
          v7 = 40;
        }
        (*(void (**)(void*))(*v12 + v7))(v12);
      LABEL_10:
        result = (__int64)v10;
        if (v10 == v9) {
          v8 = 32;
        }
        else {
          if (v10 == nullptr) {
            goto LABEL_15;
          }
          v8 = 40;
        }
        result = (*(__int64 (**)(void*))(*v10 + v8))(v10);
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15ee6b0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  bool v3;
  unsigned __int64 add;
  unsigned int v5;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 128);
    v2 = *(_QWORD*)(result + 136);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
      v3 = *(_QWORD*)(v1 + 56) == 0;
      add = atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL);
      result = !v3;
      if (add == 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
        return v5;
      }
    }
    else {
      return *(_QWORD*)(v1 + 56) != 0;
    }
  }
  return result;
}

__int64 ProcPerchScene_15ee740()
{
  __int64* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v0 = GameData_2131410;
  v1 = *GameData_2131410;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      56, 16, 0);
  *(_BYTE*)(v3 + 50) = 0;
  v14 = 57;
  v15 = 50;
  v16 = v3;
  *(_WORD*)(v3 + 48) = -32103;
  *(_QWORD*)(v3 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v3 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v3 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v3 + 40) = 0xE68F95E5AAB3E85FLL;
  *(_QWORD*)v3 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v3 + 8) = 0x828FE55FA89CE68ALL;
  GameRoutine_15f0540(v1, &v14);
  if ((v14 & 1) != 0 && v16 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v4, v16);
  }
  v5 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 128);
    v7 = *(_QWORD*)(v5 + 136);
    if (v7 == 0) {
      if (*(_QWORD*)(v6 + 56) == 0) {
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = *(_QWORD*)(v6 + 56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v5 = v9;
    }
    if (v8 != 0) {
    LABEL_11:
      BYTE2(v14) = 1;
      LOWORD(v14) = 257;
      SceneCharacter_1400a90(v5, &v14);
    }
  }
LABEL_12:
  v10 = *v0;
  v11 = fw_memory_HeapManager_Allocate(*v2, 48, 16, 0);
  v14 = 49;
  v15 = 41;
  v16 = v11;
  *(_WORD*)(v11 + 40) = 130;
  *(_QWORD*)(v11 + 16) = 0x9DE9AB83E38783E3LL;
  *(_QWORD*)(v11 + 24) = 0x5FBAA4E7A8A1E89ELL;
  *(_QWORD*)(v11 + 32) = 0x99E68F95E5AAB3E8LL;
  *(_QWORD*)v11 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v11 + 8) = 0xA283E35FA89CE68ALL;
  result = GameRoutine_15f0540(v10, &v14);
  if ((v14 & 1) != 0 && v16 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v2 + v13, v16);
  }
  if (GameData_2262ae0 != 0) {
    return LayoutAccessor_155e830(GameData_2262ae0 + 168, 1);
  }
  return result;
}

void game_facility_anonymous_ProcPerchScene_SetQuestionCamera()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 == 0) {
        goto LABEL_14;
      }
      v6[0] = GameData_2060ae8;
      v7 = v6;
      v9 = v8;
      v8[0] = GameData_2060ae8;
      GameRoutine_14514d0(v8, v1 + 272);
      if (v9 == v8) {
        v4 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_9;
        }
        v4 = 40;
      }
      (*(void (**)(void*))(*v9 + v4))(v9);
    LABEL_9:
      if (v7 == v6) {
        v5 = 32;
      }
      else {
        if (v7 == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      (*(void (**)(void*))(*v7 + v5))(v7);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

void ProcPerchScene_15eea60()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
  }
  *(_DWORD*)(v3 + 92) = 1;
  *(_BYTE*)(v3 + 96) = 1;
  v4 = ProcTheaterSceneAct_13e2420(&GameData_1af2e0a);
  GameRoutine_1486c20(v4);
  v5 = ProcTheaterSceneAct_13e2420(&GameData_1ab1a04);
  v6 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v6 + 48);
  v7 = *(_QWORD*)(v6 + 56);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
  }
  *(float*)(v9 + 172) = v5;
  *(_BYTE*)(v9 + 176) = 1;
  v10 = *(_QWORD*)(game_g_frame_clock + 13224);
  v12 = *(_QWORD*)(v10 + 48);
  v11 = *(_QWORD*)(v10 + 56);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
  }
  *(_WORD*)(v13 + 329) = 256;
}

__int64 ProcPerchScene_15eec60()
{
  __int64 result;
  __int64 v1;
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
  __int64* v18;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 8);
    v17 = 0;
    v18 = &v17;
    result = GameRoutine_1462640(&v18, &v18, v1);
    v2 = v17;
    if (v17 != 0) {
      v4 = *(_QWORD*)(v17 + 48);
      v3 = *(_QWORD*)(v17 + 56);
      *(_DWORD*)(v17 + 112) = 0;
      v5 = v3 - v4;
      *(_BYTE*)(v2 + 116) = 1;
      if (v5 != 0) {
        if (v5 == 8) {
          v6 = 0;
        }
        else {
          v9 = 0;
          v6 = 0;
          do {
            v12 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
                  224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6);
            *(_QWORD*)(v2 + 96) = v12;
            v13 = *(_QWORD*)(v12 + 192);
            if ((*(_BYTE*)(v13 + 22) & 1) == 0 &&
                (*(_BYTE*)(v13 + 21) & 1) == 0) {
              *(_QWORD*)v13 = 0;
              *(_DWORD*)(v13 + 8) = 1;
            }
            *(_DWORD*)(v13 + 12) = 0;
            *(_BYTE*)(v13 + 20) = 1;
            v14 = *(_QWORD*)(v2 + 136);
            *(_QWORD*)(v2 + 96) = 0;
            *(_BYTE*)(v14 + v9) = 0;
            v15 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
                  224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6 + 8);
            *(_QWORD*)(v2 + 96) = v15;
            v16 = *(_QWORD*)(v15 + 192);
            if ((*(_BYTE*)(v16 + 22) & 1) == 0 &&
                (*(_BYTE*)(v16 + 21) & 1) == 0) {
              *(_QWORD*)v16 = 0;
              *(_DWORD*)(v16 + 8) = 1;
            }
            *(_DWORD*)(v16 + 12) = 0;
            *(_BYTE*)(v16 + 20) = 1;
            v6 += 2;
            v10 = *(_QWORD*)(v2 + 136);
            *(_QWORD*)(v2 + 96) = 0;
            v11 = v10 + v9;
            v9 += 6;
            *(_BYTE*)(v11 + 3) = 0;
          } while (((v5 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v6);
        }
        if ((v5 & 8) != 0) {
          v7 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
               224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6);
          *(_QWORD*)(v2 + 96) = v7;
          v8 = *(_QWORD*)(v7 + 192);
          if ((*(_BYTE*)(v8 + 22) & 1) == 0 && (*(_BYTE*)(v8 + 21) & 1) == 0) {
            *(_QWORD*)v8 = 0;
            *(_DWORD*)(v8 + 8) = 1;
          }
          *(_DWORD*)(v8 + 12) = 0;
          *(_BYTE*)(v8 + 20) = 1;
          *(_QWORD*)(v2 + 96) = 0;
          *(_BYTE*)(*(_QWORD*)(v2 + 136) + 3 * v6) = 0;
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15eedf0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  char* v7;
  int v8;
  const char* v9;
  __int64 v10;
  __int64* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  __int64 result;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  _BYTE* v46;
  char v47;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  struct {
    _DWORD* v51;
    _DWORD* v52;
    _DWORD* v53;
  } v51_;

  v2 = GameHr_1421620(a1 + 240);
  v3 = *(_QWORD*)(a1 + 264);
  *(_DWORD*)(a1 + 352) = v2;
  if (v2 <= 1) {
    v4 = 1;
  }
  else {
    v4 = v2;
  }
  if (v4 >= 10) {
    v5 = 10;
  }
  else {
    v5 = v4;
  }
  v6 = GameRoutine_975940(*(_QWORD*)(*(_QWORD*)(v3 + 40) + 288LL));
  v7 = game_util_Format_alt1("MID_SV_Bird_%s_m02_%02d",
                             *(const char**)(v6 + 160), v5);
  v8 = *(_DWORD*)(a1 + 352);
  v9 = v7;
  if (v8 <= 1) {
    v8 = 1;
  }
  if (v8 >= 10) {
    v8 = 10;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 16LL * (unsigned int)(v8 - 1) + 72);
  v48_.v50 = 0;
  *(_QWORD*)(a1 + 360) = v10;
  v48_.v48 = v10;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 12, 16, 0);
  v13 = (__int64)v12;
  if (v10 != 0) {
    *v12 = *(unsigned __int8*)(v10 + 32);
    v14 = 1;
  }
  else {
    v14 = 0;
  }
  v51_.v51 = v12;
  v51_.v52 = &v12[v14];
  v51_.v53 = v12 + 3;
  v15 = ShowmanSceneDiff_147d3c0((__int64*)&v51_.v51);
  v16 = 128;
  if (*(_QWORD*)(*v11 + 200) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v11 + v16, v13);
  v17 = game_147dd40(v15);
  v48_.v49 = v17;
  v18 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(*v11, 12, 16, 0);
  v19 = (__int64)v18;
  if (v10 != 0) {
    *v18 = *(unsigned __int8*)(v10 + 32);
    v20 = 1;
    if (v17 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v20 = 0;
  if (v17 != 0) {
  LABEL_18:
    v18[v20++] = *(unsigned __int8*)(v17 + 32);
  }
LABEL_19:
  v51_.v51 = v18;
  v51_.v52 = &v18[v20];
  v51_.v53 = v18 + 3;
  v21 = ShowmanSceneDiff_147d3c0((__int64*)&v51_.v51);
  v22 = 128;
  if (*(_QWORD*)(*v11 + 200) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v11 + v22, v19);
  v48_.v50 = game_147dd40(v21);
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v23 = game_map_MapRandom_instance__ptr[0];
  v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v26 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v23 + 1) = v24;
  v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v25;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v27;
  v28 = v27 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v29 = v28 - 3 * ((1431655766 * (unsigned __int64)v28) >> 32);
  v48_.v48 = *(&v48_.v48 + v29);
  *(&v48_.v48 + v29) = v10;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v30 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23);
  v31 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4);
  v32 = *(_DWORD*)v23 ^ (*(_DWORD*)v23 << 11);
  *(_DWORD*)v23 = *((_DWORD*)v23 + 1);
  *((_DWORD*)v23 + 1) = v30;
  v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v31;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v33;
  v34 = v33 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v35 = v48_.v49;
  v36 = v34 - 3 * ((1431655766 * (unsigned __int64)v34) >> 32);
  v48_.v49 = *(&v48_.v48 + v36);
  *(&v48_.v48 + v36) = v35;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v37 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23);
  v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4);
  v39 = *(_DWORD*)v23 ^ (*(_DWORD*)v23 << 11);
  *(_DWORD*)v23 = *((_DWORD*)v23 + 1);
  *((_DWORD*)v23 + 1) = v37;
  v40 = (v39 >> 8) ^ (v38 >> 19) ^ v39 ^ v38;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v38;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v40;
  LODWORD(v23) = v40 & 0x7FFFFFFF;
  result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v42 = v48_.v50;
  v43 = (_DWORD)v23 -
        3 * ((1431655766 * (unsigned __int64)(unsigned int)v23) >> 32);
  v48_.v50 = *(&v48_.v48 + v43);
  *(&v48_.v48 + v43) = v42;
  if (GameData_21ec7b8 == 0) {
    v44 = fw_memory_HeapManager_Allocate_alt1(*v11, 1376, 16, 0);
    GameRoutine_1130770(v44, v9, &v48_.v48);
    v45 = *(_QWORD*)(a1 + 40);
    if (v45 != 0) {
      *(_QWORD*)(v45 + 48) = v44;
      *(_QWORD*)(v44 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v44;
    *(_QWORD*)(v44 + 24) = "talk::Seq";
    *(_QWORD*)(v44 + 32) = a1;
    *(_DWORD*)(v44 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v44 + 64) = 0;
    *(_QWORD*)(v44 + 72) = 24;
    *(_QWORD*)(v44 + 80) = 1;
    *(_QWORD*)(v44 + 8) = &GameData_216de68;
    *(_QWORD*)(v44 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v44 + 32LL))(v44);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 136LL))(v44);
    if ((result & 1) != 0 && (*(_WORD*)(v44 + 136) & 0x100) == 0) {
      *(_WORD*)(v44 + 136) |= 0x100u;
    }
    v46 = *(_BYTE**)(v44 + 32);
    v47 = v46[138];
    if (v47 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v46 + 64LL))(*(_QWORD*)(v44 + 32));
      v47 = v46[138];
    }
    v46[138] = v47 + 1;
    *(_WORD*)(v44 + 136) |= 2u;
  }
  return result;
}

__int64 ProcPerchScene_15ef1d0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;

  v1 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v2 = *(unsigned int*)(GameData_21f3ff8 + 20);
    if ((v2 & 0x80000000) != 0 ||
        (v3 = *(_QWORD*)(GameData_21c9f88 + 64),
         (int)v2 >=
             (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9f88 + 72) - v3) >>
                   3))) {
      v1 = 0;
    }
    else {
      v1 = *(_QWORD*)(v3 + 8 * v2);
    }
  }
  v4 = *(_QWORD*)(result + 360);
  if ((unsigned int)(*(_DWORD*)(result + 272) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 280) == 0 || *(_QWORD*)(result + 288) == 0) {
    v7 = result + 272;
  LABEL_33:
    *(_DWORD*)v7 = *(_DWORD*)(result + 352);
    *(_QWORD*)(v7 + 8) = v4;
    *(_QWORD*)(v7 + 16) = v1;
    return result;
  }
  if ((unsigned int)(*(_DWORD*)(result + 296) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 304) == 0 || *(_QWORD*)(result + 312) == 0) {
    v7 = result + 296;
    goto LABEL_33;
  }
  if ((unsigned int)(*(_DWORD*)(result + 320) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 328) == 0 || *(_QWORD*)(result + 336) == 0) {
    v7 = result + 320;
    goto LABEL_33;
  }
  return result;
}

__int64 ProcPerchScene_15ef780(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  _BOOL8 v9;

  v1 = *(_QWORD*)(a1 + 328);
  v2 = *(_QWORD*)(a1 + 336);
  if ((unsigned int)(*(_DWORD*)(a1 + 320) - 11) >= 0xFFFFFFF6 && v1 != 0 &&
      v2 != 0) {
    goto LABEL_27;
  }
  v1 = *(_QWORD*)(a1 + 304);
  v2 = *(_QWORD*)(a1 + 312);
  v5 = (unsigned int)(*(_DWORD*)(a1 + 296) - 11) < 0xFFFFFFF6 || v1 == 0;
  v6 = v5 || v2 == 0;
  if (v6 && ((v1 = *(_QWORD*)(a1 + 280), v2 = *(_QWORD*)(a1 + 288),
              (unsigned int)(*(_DWORD*)(a1 + 272) - 11) >= 0xFFFFFFF6)
                 ? (v7 = v1 == 0)
                 : (v7 = true),
             !v7 ? (v8 = v2 == 0) : (v8 = true), v8)) {
    v9 = false;
  }
  else {
  LABEL_27:
    v9 = v1 == v2;
  }
  return GameRoutine_170cac0(v9);
}

bool ProcPerchScene_15ef7f0()
{
  return GameData_224ae20 != 0 && (int)((*(_QWORD*)(GameData_224ae20 + 40) -
                                         *(_QWORD*)(GameData_224ae20 + 32)) >>
                                        4) > 0;
}

__int64 ProcPerchScene_15ef820(__int64 result)
{
  bool v3;
  bool v5;
  __int64 v7;

  if ((unsigned int)(*(_DWORD*)(result + 272) - 11) >= 0xFFFFFFF6 &&
      *(_QWORD*)(result + 280) != 0 && *(_QWORD*)(result + 288) != 0) {
    v3 = (unsigned int)(*(_DWORD*)(result + 296) - 11) < 0xFFFFFFF6 ||
         *(_QWORD*)(result + 304) == 0;
    if (!v3 && *(_QWORD*)(result + 312) != 0) {
      v5 = (unsigned int)(*(_DWORD*)(result + 320) - 1) > 9 ||
           *(_QWORD*)(result + 328) == 0;
      if (!v5 && *(_QWORD*)(result + 336) != 0) {
        v7 = *(_QWORD*)(result + 8);
        if (v7 != 0) {
          while (1) {
            if (*(_BYTE*)v7 == 2) {
              if (*(_DWORD*)(v7 + 32) == 3) {
                *(_QWORD*)(result + 16) = v7;
                *(_WORD*)(result + 136) &= ~0x80u;
                break;
              }
            }
            else if (*(_BYTE*)v7 == 0) {
              break;
            }
            v7 += 64;
          }
        }
        *(_WORD*)(result + 136) |= 8u;
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15efc60(__int64 a1)
{
  __int64 v1;

  v1 = a1 + 240;
  if (*(_BYTE*)(a1 + 344) == 3) {
    return GameRoutine_1775df0(a1, v1);
  }
  else {
    return GameRoutine_1775750(a1, v1);
  }
}

__int64 ProcPerchScene_15efc80(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_BYTE*)(result + 344) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 192);
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 192) = 0;
  if (v1 == (_QWORD*)(result + 160)) {
    v3 = result;
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_7;
    }
    v2 = 40;
    v3 = result;
  }
  (*(void (**)(_QWORD*))(*v1 + v2))(v1);
  result = v3;
LABEL_7:
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 8) {
          *(_QWORD*)(result + 16) = v4;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

__int64 ProcPerchScene_15efd40(__int64 a1)
{
  __int64 result;

  result = GameRoutine_14368c0();
  *(_BYTE*)(a1 + 384) = 0;
  return result;
}

__int64 ProcPerchScene_15efd70(__int64 a1)
{
  unsigned __int64 v1;
  __int64 result;
  __int64 v3;
  unsigned __int64 v4[2];

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    v1 = *(_QWORD*)(v1 + 392);
  }
  v4[0] = v1;
  result = FacilityVariable_1472720((__int64)v4);
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v4[1] = (unsigned __int64)&GameData_1a856ca;
    v4[0] = game_HashString_alt2((__int64)&GameData_1a856ca);
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v4);
      if (v3 != 0) {
        LODWORD(v3) = *(_DWORD*)(v3 + 32);
      }
    }
    else {
      LODWORD(v3) = 0;
    }
    return GameHr_8696e0(v3);
  }
  return result;
}

unsigned __int64 ProcPerchScene_15f0160()
{
  _QWORD handle[2];
  unsigned __int64 result;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  _QWORD v13[25];

  result = game_HashString_alt2((__int64)&GameData_1afe8f0);
  if (result != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = result;
        if (result >= v1) {
          v4 = result % v1;
        }
      }
      else {
        v4 = v3 & result;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v8 = v6[1];
              if (v8 == result) {
                if (v6[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v8 & v3) != v4) {
                return result;
              }
              v6 = (_QWORD*)*v6;
              if (v6 == nullptr) {
                return result;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == result) {
              if (v6[2] == result) {
              LABEL_26:
                v9 = v6[3];
                if (v9 != 0) {
                  v10 = *(_QWORD*)(v9 + 32);
                  if (v10 != 0) {
                    snd_Fade_Fade_10c830_alt1((__int64)v13, 0x0.0p+0f);
                    snd_play_ff2d0_alt1((void*)(handle), v10, v10, (__int64)v13,
                                        0, 0x10001u, 0, 0x0.0p+0f,
                                        0x1.0000000000000p+0f);
                    snd_Fade_Destroy_Fade_alt1(v13);
                  }
                  else {
                    v11_.v11 = 0;
                    v11_.v12 = 0x2000;
                  }
                  result = GameData_224ae20;
                  if (GameData_224ae20 != 0) {
                    return ((__int64 (*)(__int64, __int64*,
                                         __int64))GameRoutine_1488300)(
                        GameData_224ae20, &v11_.v11, 1);
                  }
                }
                return result;
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return result;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15f02e0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
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

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      result = std___1___shared_weak_count___release_weak(v1);
    }
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      result = std___1___shared_weak_count___release_weak(v1);
    }
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
  }
  *(_DWORD*)(v4 + 92) = 0;
  *(_BYTE*)(v4 + 96) = 1;
  v5 = *(_QWORD*)(game_g_frame_clock + 13224);
  v7 = *(_QWORD*)(v5 + 48);
  v6 = *(_QWORD*)(v5 + 56);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 128LL);
  }
  if (*(_BYTE*)(v8 + 256) == 1) {
    *(_BYTE*)(v8 + 256) = 0;
  }
  v9 = *(_QWORD*)(game_g_frame_clock + 13224);
  v11 = *(_QWORD*)(v9 + 48);
  v10 = *(_QWORD*)(v9 + 56);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 128LL);
  }
  if (*(_BYTE*)(v12 + 176) == 1) {
    *(_BYTE*)(v12 + 176) = 0;
  }
  v13 = *(_QWORD*)(game_g_frame_clock + 13224);
  v15 = *(_QWORD*)(v13 + 48);
  v14 = *(_QWORD*)(v13 + 56);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else {
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
  }
  if (*(_BYTE*)(v16 + 330) == 1) {
    *(_BYTE*)(v16 + 330) = 0;
  }
  return result;
}

void ProcPerchScene_15f0540(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  PerchSceneDiff_14224a0((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (const char*)(a2 + 1);
  }
  else {
    v7 = *((const char**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v43_.v45);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(const char**)(a1 + 24);
  }
  else {
    v13 = (const char*)(a1 + 9);
  }
  v14 = strlen_alt1(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove_alt1((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = (const char*)(a2 + 1);
  }
  else {
    v21 = *((const char**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v43_.v45);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(const char**)(a1 + 48);
  }
  else {
    v27 = (const char*)(a1 + 33);
  }
  v28 = strlen_alt1(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0_alt1();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v31, 16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove_alt1((__int64)v30, (__int64)v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = (const char*)(a2 + 1);
  }
  else {
    v35 = *((const char**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v43_.v45);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

__int64

game_facility_anonymous_ProcPerchScene_SetGreetCamera_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v3 + 38) = 0;
  v6[0] = 41;
  v6[1] = 38;
  v7 = v3;
  *(_QWORD*)(v3 + 16) = 0x81E3A2ADE65FA983LL;
  *(_QWORD*)(v3 + 24) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v3 + 30) = 0x8BA7E58B96E95FA8LL;
  *(_QWORD*)v3 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3A183E3AB82E3A9LL;
  result = GameRoutine_144fca0(v6, v1);
  if ((v6[0] & 1) != 0 && v7 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, v7);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchScene_SetQuestionCamera_closure_Invoke()
{
  void* v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = GameData_2174240;
  v1 = strlen(GameData_2174240);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

_QWORD* ProcPerchScene_Destructor(__int64 a1)
{
  __int16* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_anonymous_ProcPerchScene_vtable;
  *(_QWORD*)(a1 + 208) = GameData_2060c20;
  v2 = (__int16*)(a1 + 208);
  v3 = GameData_2131410;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131410 + 24LL))(*GameData_2131410);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = *(_QWORD*)(a1 + 376);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)a1 = GameData_2060d08;
  *(_QWORD*)(a1 + 208) = GameData_2060db8;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  v8 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2060e00;
  if (v8 == (_QWORD*)(a1 + 160)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_17:
  GameData_225ae28 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 ProcPerchScene_15f0f70()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchScene_15f0fa0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

void ProcPerchScene_15f0fe0(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 v2;
  __int64 v3;
  unsigned __int64 v4;
  __n128* v5;
  __n128* v6;
  __n128 v7;

  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1958ed0_alt2(a1 + 208, a1),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v3 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168) &&
          (v5 = (__n128*)(v4 + 160),
           LANES128(v2).n128_u64[1] =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160))
                   .n128_u64[1],
           LANES128(v2).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v5)).n128_f32[3] == LANES128(*(v5)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v5)).n128_u64[0] + 16))(v5),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v2 = v5[3];
        }
        v7 = v2;
        LANES128(v2).n128_u64[0] = 0;
        v6 = &v7;
      }
      else {
        LANES128(v2).n128_u64[0] = 0;
        v6 = (__n128*)GameData_212c960;
      }
      game_809dc0_alt1(v3, v6, v2),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(a1, 1),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = game_HashString(&GameData_1aeb5df, a2);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = v2;
        if (v2 >= v3) {
          v6 = v2 % v3;
        }
      }
      else {
        v6 = v5 & v2;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  goto LABEL_27;
                }
              }
              else if ((v11 & v5) != v6) {
                goto LABEL_25;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
              LABEL_27:
                v10 = v8[3];
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                break;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v10 = 0;
  return GameRoutine_14877f0(v10, 0x13F000000LL);
}

_QWORD* ProcPerchScene_15f1480(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_2060d08;
  *(_QWORD*)(a1 + 208) = GameData_2060db8;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0((__int16*)(a1 + 208), a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2060e00;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  GameData_225ae28 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

_QWORD* ProcPerchScene_15f16f0(__int16* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int16* v6;
  __int64 v7;

  *((_QWORD*)a1 - 26) = GameData_2060d08;
  v2 = (__int64)(a1 - 104);
  *(_QWORD*)a1 = GameData_2060db8;
  GameRoutine_1958ed0(a1, (__int64)(a1 - 104));
  *(_QWORD*)a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = *((__int16**)a1 - 2);
  *((_QWORD*)a1 - 26) = GameData_2060e00;
  if (v6 == a1 - 24) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + v7))((__int64)v6);
LABEL_12:
  GameData_225ae28 = 0;
  *((_QWORD*)a1 - 26) = GameData_212c608[0] + 16;
  if ((*(a1 - 36) & 0x100) != 0) {
    *(a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00((_QWORD*)a1 - 15);
}

#pragma GCC visibility pop
