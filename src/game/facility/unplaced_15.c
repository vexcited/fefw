#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
game_ThermaeData_GetLearnSkillList(PSEUDO_X8, __int64 result, _DWORD*,
                                   __int64(__fastcall**)());
__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8, _QWORD*,
                                                      _QWORD*, float);
__int64 FacilityDialogueFile_196e860(unsigned int, __int64, __int64);
__int64 FacilityUtil_948fc0(__int64 result, int, int);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_142fb10();
__int64 GameRoutine_1431300();
__int64 GameRoutine_14960a0();
__int64 GameRoutine_17b95c0(__int64 result, __int16*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_950540(__int64, __int64**);
__int64 GameRoutine_9505e0(__int64, int);
__int64 GameSideStoryData_12b3d60(__int64 result);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 ProcConversation_1495fa0();
__int64 ProcConversation_1496100();
__int64 ProcConversation_14962e0();
__int64 ProcConversation_1496480();
__int64 ProcImpression_14312d0();
__int64 ProcImpression_1431480();
__int64 ProcImpression_1431610();
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 Registration_a4da40(__int64, __int64);
__int64 Unit_6cfa20(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_197ac60(__int64, __int64);
__int64 game_809ba0(__int64, float);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_RandomSeed_RollVariable(_DWORD*, unsigned __int64*);
__int64 game_facility_94b3c0(__int64);
__int64 game_facility_SceneManager_SceneManager(__int64);
__int64 game_facility_anonymous_142e910();
__int64 game_facility_anonymous_142e940();
__int64 game_facility_anonymous_14317b0();
__int64 game_facility_anonymous_1495ef0();
__int64 game_facility_anonymous_196b1e0(__int64, _QWORD*);
__int64 game_facility_anonymous_ProcConversation_PlaySpecialTelop();
__int64 game_facility_anonymous_ProcImpression_HideMob();
__int64 game_facility_anonymous_ProcImpression_PlayMobMotion();
__int64 game_facility_anonymous_ProcImpression_PrepareCamera();
__int64 game_facility_anonymous_ProcImpression_ResetMotion();
__int64 game_facility_anonymous_ProcOpening_PlayMotion();
__int64 game_facility_anonymous_ProcOpening_StartCameraWork();
__int64 game_facility_anonymous_ProcReaction_PlayMobMotion();
__int64 game_facility_anonymous_ProcReaction_ResetMotion();
__int64 game_telop_176fc00(__int64, __int64);
__int64 game_telop_1772480(__int64, __int64);
__int64 game_telop_1773940(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1abbc75;
extern _UNKNOWN GameData_1afa938;
extern _UNKNOWN GameData_22449e0;
extern _UNKNOWN GameData_2244da8;
extern _UNKNOWN GameData_22453f0;
extern _UNKNOWN GameData_224b468;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_203c6f8[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d298)();
extern __int64 (*GameData_2131220[3])();
extern __int64 (*GameData_2131230)();
extern __int64 (*GameData_2131490[4])();
extern __int64 (*GameData_2131498[3])();
extern __int64 (*ProcConversation_Destructor_14968a0_ptr[])();
extern __int64 (*ProcHubSeq_d85570_ptr_212dd48[2])();
extern __int64 (*ProcImpression_Destructor_ptr[])();
extern __int64 (*ProcOpening_Destructor_ptr[])();
extern __int64 (*ProcReaction_Destructor_ptr[])();
extern __int64 (*ProcTheaterSceneAct_13dcac0_ptr_21311f8[2])();
extern __int64 (*ProcTheaterSceneAct_13dccf0_ptr_2131200)();
extern __int64 (*game_80a680_ptr_212c6d0[11])();
extern __int64 (*game_facility_anonymous_ProcConversation_vtable_2043c48[])();
extern __int64 (*game_facility_anonymous_ProcImpression_vtable[])();
extern __int64 (*game_facility_anonymous_ProcOpening_vtable[])();
extern __int64 (*game_facility_anonymous_ProcReaction_vtable[])();
extern __int64 (*game_hub_d856f0_ptr_212dd38[4])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_212dcd0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2132488;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_21c9728;
extern __int64 GameData_2244628;
extern __int64 GameData_2244630;
extern __int64 GameData_2244638;
extern __int64 GameData_2244648;
extern __int64 GameData_2244658;
extern __int64 GameData_2244668;
extern __int64 GameData_2244670;
extern __int64 GameData_2244678;
extern __int64 GameData_2244688;
extern __int64 GameData_2244698;
extern __int64 GameData_22446a8;
extern __int64 GameData_22446b0;
extern __int64 GameData_22446b8;
extern __int64 GameData_22446c8;
extern __int64 GameData_22446d8;
extern __int64 GameData_22446e8;
extern __int64 GameData_22446f0;
extern __int64 GameData_22446f8;
extern __int64 GameData_2244708;
extern __int64 GameData_2244718;
extern __int64 GameData_2244728;
extern __int64 GameData_2244730;
extern __int64 GameData_2244738;
extern __int64 GameData_2244748;
extern __int64 GameData_2244758;
extern __int64 GameData_2244768;
extern __int64 GameData_2244770;
extern __int64 GameData_2244788;
extern __int64 GameData_2244798;
extern __int64 GameData_22447a8;
extern __int64 GameData_22447b0;
extern __int64 GameData_22447b8;
extern __int64 GameData_22447c8;
extern __int64 GameData_22447d8;
extern __int64 GameData_22447e8;
extern __int64 GameData_22447f0;
extern __int64 GameData_2244808;
extern __int64 GameData_2244818;
extern __int64 GameData_2244828;
extern __int64 GameData_2244830;
extern __int64 GameData_2244848;
extern __int64 GameData_2244858;
extern __int64 GameData_2244868;
extern __int64 GameData_2244870;
extern __int64 GameData_2244878;
extern __int64 GameData_2244888;
extern __int64 GameData_2244898;
extern __int64 GameData_22448a8;
extern __int64 GameData_22448b0;
extern __int64 GameData_22448c8;
extern __int64 GameData_22448d8;
extern __int64 GameData_22448e8;
extern __int64 GameData_22448f0;
extern __int64 GameData_22448f8;
extern __int64 GameData_2244908;
extern __int64 GameData_2244918;
extern __int64 GameData_2244928;
extern __int64 GameData_2244930;
extern __int64 GameData_2244948;
extern __int64 GameData_2244958;
extern __int64 GameData_2244968;
extern __int64 GameData_2244970;
extern __int64 GameData_2244978;
extern __int64 GameData_2244988;
extern __int64 GameData_2244998;
extern __int64 GameData_22449a8;
extern __int64 GameData_22449b0;
extern __int64 GameData_22449b8;
extern __int64 GameData_22449c8;
extern __int64 GameData_22449d8;
extern __int64 GameData_22449f0;
extern __int64 GameData_22449f8;
extern __int64 GameData_2244a00;
extern __int64 GameData_2244a10;
extern __int64 GameData_2244a20;
extern __int64 GameData_2244a30;
extern __int64 GameData_2244a38;
extern __int64 GameData_2244a40;
extern __int64 GameData_2244a50;
extern __int64 GameData_2244a60;
extern __int64 GameData_2244a70;
extern __int64 GameData_2244a78;
extern __int64 GameData_2244a80;
extern __int64 GameData_2244a90;
extern __int64 GameData_2244aa0;
extern __int64 GameData_2244ab0;
extern __int64 GameData_2244ab8;
extern __int64 GameData_2244ac0;
extern __int64 GameData_2244ad0;
extern __int64 GameData_2244ae0;
extern __int64 GameData_2244af0;
extern __int64 GameData_2244af8;
extern __int64 GameData_2244b00;
extern __int64 GameData_2244b10;
extern __int64 GameData_2244b20;
extern __int64 GameData_2244b30;
extern __int64 GameData_2244b38;
extern __int64 GameData_2244b50;
extern __int64 GameData_2244b60;
extern __int64 GameData_2244b70;
extern __int64 GameData_2244b78;
extern __int64 GameData_2244b90;
extern __int64 GameData_2244ba0;
extern __int64 GameData_2244bb0;
extern __int64 GameData_2244bb8;
extern __int64 GameData_2244bc0;
extern __int64 GameData_2244bd0;
extern __int64 GameData_2244be0;
extern __int64 GameData_2244bf0;
extern __int64 GameData_2244bf8;
extern __int64 GameData_2244c10;
extern __int64 GameData_2244c20;
extern __int64 GameData_2244c30;
extern __int64 GameData_2244c38;
extern __int64 GameData_2244c50;
extern __int64 GameData_2244c60;
extern __int64 GameData_2244c70;
extern __int64 GameData_2244c78;
extern __int64 GameData_2244c80;
extern __int64 GameData_2244c90;
extern __int64 GameData_2244ca0;
extern __int64 GameData_2244cb0;
extern __int64 GameData_2244cb8;
extern __int64 GameData_2244cd0;
extern __int64 GameData_2244ce0;
extern __int64 GameData_2244cf0;
extern __int64 GameData_2244cf8;
extern __int64 GameData_2244d10;
extern __int64 GameData_2244d20;
extern __int64 GameData_2244d30;
extern __int64 GameData_2244d38;
extern __int64 GameData_2244d40;
extern __int64 GameData_2244d50;
extern __int64 GameData_2244d60;
extern __int64 GameData_2244d70;
extern __int64 GameData_2244d78;
extern __int64 GameData_2244d80;
extern __int64 GameData_2244d90;
extern __int64 GameData_2244da0;
extern __int64 GameData_2244db8;
extern __int64 GameData_2244dc0;
extern __int64 GameData_2244dc8;
extern __int64 GameData_2244dd8;
extern __int64 GameData_2244de8;
extern __int64 GameData_2244df8;
extern __int64 GameData_2244e00;
extern __int64 GameData_2244e08;
extern __int64 GameData_2244e18;
extern __int64 GameData_2244e28;
extern __int64 GameData_2244e38;
extern __int64 GameData_2244e40;
extern __int64 GameData_2244e48;
extern __int64 GameData_2244e58;
extern __int64 GameData_2244e68;
extern __int64 GameData_2244e78;
extern __int64 GameData_2244e80;
extern __int64 GameData_2244e88;
extern __int64 GameData_2244e98;
extern __int64 GameData_2244ea8;
extern __int64 GameData_2244eb8;
extern __int64 GameData_2244ec0;
extern __int64 GameData_2244ec8;
extern __int64 GameData_2244ed8;
extern __int64 GameData_2244ee8;
extern __int64 GameData_2244ef8;
extern __int64 GameData_2244f00;
extern __int64 GameData_2244f08;
extern __int64 GameData_2244f18;
extern __int64 GameData_2244f28;
extern __int64 GameData_2244f38;
extern __int64 GameData_2244f40;
extern __int64 GameData_2244f58;
extern __int64 GameData_2244f68;
extern __int64 GameData_2244f78;
extern __int64 GameData_2244f80;
extern __int64 GameData_2244f98;
extern __int64 GameData_2244fa8;
extern __int64 GameData_2244fb8;
extern __int64 GameData_2244fc0;
extern __int64 GameData_2244fc8;
extern __int64 GameData_2244fd8;
extern __int64 GameData_2244fe8;
extern __int64 GameData_2244ff8;
extern __int64 GameData_2245000;
extern __int64 GameData_2245018;
extern __int64 GameData_2245028;
extern __int64 GameData_2245038;
extern __int64 GameData_2245040;
extern __int64 GameData_2245058;
extern __int64 GameData_2245068;
extern __int64 GameData_2245078;
extern __int64 GameData_2245080;
extern __int64 GameData_2245088;
extern __int64 GameData_2245098;
extern __int64 GameData_22450a8;
extern __int64 GameData_22450b8;
extern __int64 GameData_22450c0;
extern __int64 GameData_22450c8;
extern __int64 GameData_22450d8;
extern __int64 GameData_22450e8;
extern __int64 GameData_22450f8;
extern __int64 GameData_2245100;
extern __int64 GameData_2245108;
extern __int64 GameData_2245118;
extern __int64 GameData_2245128;
extern __int64 GameData_2245138;
extern __int64 GameData_2245140;
extern __int64 GameData_2245148;
extern __int64 GameData_2245158;
extern __int64 GameData_2245168;
extern __int64 GameData_2245178;
extern __int64 GameData_2245180;
extern __int64 GameData_2245188;
extern __int64 GameData_2245198;
extern __int64 GameData_22451a8;
extern __int64 GameData_22451b8;
extern __int64 GameData_22451c0;
extern __int64 GameData_22451c8;
extern __int64 GameData_22451d8;
extern __int64 GameData_22451e8;
extern __int64 GameData_22451f8;
extern __int64 GameData_2245200;
extern __int64 GameData_2245208;
extern __int64 GameData_2245218;
extern __int64 GameData_2245228;
extern __int64 GameData_2245238;
extern __int64 GameData_2245240;
extern __int64 GameData_2245248;
extern __int64 GameData_2245258;
extern __int64 GameData_2245268;
extern __int64 GameData_2245278;
extern __int64 GameData_2245280;
extern __int64 GameData_2245288;
extern __int64 GameData_2245298;
extern __int64 GameData_22452a8;
extern __int64 GameData_22452b8;
extern __int64 GameData_22452c0;
extern __int64 GameData_22452c8;
extern __int64 GameData_22452d8;
extern __int64 GameData_22452e8;
extern __int64 GameData_22452f8;
extern __int64 GameData_2245300;
extern __int64 GameData_2245308;
extern __int64 GameData_2245318;
extern __int64 GameData_2245328;
extern __int64 GameData_2245338;
extern __int64 GameData_2245340;
extern __int64 GameData_2245348;
extern __int64 GameData_2245358;
extern __int64 GameData_2245368;
extern __int64 GameData_2245378;
extern __int64 GameData_2245380;
extern __int64 GameData_2245398;
extern __int64 GameData_22453a8;
extern __int64 GameData_22453b8;
extern __int64 GameData_22453c0;
extern __int64 GameData_22453c8;
extern __int64 GameData_22453d8;
extern __int64 GameData_22453e8;
extern __int64 GameData_22453f8;
extern __int64 GameData_2246cb0;
extern __int64 GameData_224af30;
extern __int64 GameData_224af38;
extern __int64 GameData_224af40;
extern __int64 GameData_224af50;
extern __int64 GameData_224af60;
extern __int64 GameData_224af70;
extern __int64 GameData_224af78;
extern __int64 GameData_224af80;
extern __int64 GameData_224af90;
extern __int64 GameData_224afa0;
extern __int64 GameData_224afb0;
extern __int64 GameData_224afb8;
extern __int64 GameData_224afc0;
extern __int64 GameData_224afd0;
extern __int64 GameData_224afe0;
extern __int64 GameData_224aff0;
extern __int64 GameData_224aff8;
extern __int64 GameData_224b010;
extern __int64 GameData_224b020;
extern __int64 GameData_224b030;
extern __int64 GameData_224b038;
extern __int64 GameData_224b050;
extern __int64 GameData_224b060;
extern __int64 GameData_224b070;
extern __int64 GameData_224b078;
extern __int64 GameData_224b080;
extern __int64 GameData_224b090;
extern __int64 GameData_224b0a0;
extern __int64 GameData_224b0b0;
extern __int64 GameData_224b0b8;
extern __int64 GameData_224b0d0;
extern __int64 GameData_224b0e0;
extern __int64 GameData_224b0f0;
extern __int64 GameData_224b0f8;
extern __int64 GameData_224b100;
extern __int64 GameData_224b110;
extern __int64 GameData_224b120;
extern __int64 GameData_224b130;
extern __int64 GameData_224b138;
extern __int64 GameData_224b140;
extern __int64 GameData_224b150;
extern __int64 GameData_224b160;
extern __int64 GameData_224b170;
extern __int64 GameData_224b178;
extern __int64 GameData_224b180;
extern __int64 GameData_224b190;
extern __int64 GameData_224b1a0;
extern __int64 GameData_224b1b0;
extern __int64 GameData_224b1b8;
extern __int64 GameData_224b1c0;
extern __int64 GameData_224b1d0;
extern __int64 GameData_224b1e0;
extern __int64 GameData_224b1f0;
extern __int64 GameData_224b1f8;
extern __int64 GameData_224b200;
extern __int64 GameData_224b210;
extern __int64 GameData_224b220;
extern __int64 GameData_224b230;
extern __int64 GameData_224b238;
extern __int64 GameData_224b240;
extern __int64 GameData_224b250;
extern __int64 GameData_224b260;
extern __int64 GameData_224b270;
extern __int64 GameData_224b278;
extern __int64 GameData_224b280;
extern __int64 GameData_224b290;
extern __int64 GameData_224b2a0;
extern __int64 GameData_224b2b0;
extern __int64 GameData_224b2b8;
extern __int64 GameData_224b2c0;
extern __int64 GameData_224b2d0;
extern __int64 GameData_224b2e0;
extern __int64 GameData_224b2f0;
extern __int64 GameData_224b2f8;
extern __int64 GameData_224b300;
extern __int64 GameData_224b310;
extern __int64 GameData_224b320;
extern __int64 GameData_224b330;
extern __int64 GameData_224b338;
extern __int64 GameData_224b340;
extern __int64 GameData_224b350;
extern __int64 GameData_224b360;
extern __int64 GameData_224b370;
extern __int64 GameData_224b378;
extern __int64 GameData_224b380;
extern __int64 GameData_224b390;
extern __int64 GameData_224b3a0;
extern __int64 GameData_224b3b0;
extern __int64 GameData_224b3b8;
extern __int64 GameData_224b3c0;
extern __int64 GameData_224b3d0;
extern __int64 GameData_224b3e0;
extern __int64 GameData_224b3f0;
extern __int64 GameData_224b3f8;
extern __int64 GameData_224b400;
extern __int64 GameData_224b410;
extern __int64 GameData_224b420;
extern __int64 GameData_224b430;
extern __int64 GameData_224b438;
extern __int64 GameData_224b440;
extern __int64 GameData_224b450;
extern __int64 GameData_224b460;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2166cf2;
extern char GameData_2244620;
extern char GameData_2244660;
extern char GameData_22446a0;
extern char GameData_22446e0;
extern char GameData_2244720;
extern char GameData_2244760;
extern char GameData_22447a0;
extern char GameData_22447e0;
extern char GameData_2244820;
extern char GameData_2244860;
extern char GameData_22448a0;
extern char GameData_22448e0;
extern char GameData_2244920;
extern char GameData_2244960;
extern char GameData_22449a0;
extern char GameData_22449e8;
extern char GameData_2244a28;
extern char GameData_2244a68;
extern char GameData_2244aa8;
extern char GameData_2244ae8;
extern char GameData_2244b28;
extern char GameData_2244b68;
extern char GameData_2244ba8;
extern char GameData_2244be8;
extern char GameData_2244c28;
extern char GameData_2244c68;
extern char GameData_2244ca8;
extern char GameData_2244ce8;
extern char GameData_2244d28;
extern char GameData_2244d68;
extern char GameData_2244db0;
extern char GameData_2244df0;
extern char GameData_2244e30;
extern char GameData_2244e70;
extern char GameData_2244eb0;
extern char GameData_2244ef0;
extern char GameData_2244f30;
extern char GameData_2244f70;
extern char GameData_2244fb0;
extern char GameData_2244ff0;
extern char GameData_2245030;
extern char GameData_2245070;
extern char GameData_22450b0;
extern char GameData_22450f0;
extern char GameData_2245130;
extern char GameData_2245170;
extern char GameData_22451b0;
extern char GameData_22451f0;
extern char GameData_2245230;
extern char GameData_2245270;
extern char GameData_22452b0;
extern char GameData_22452f0;
extern char GameData_2245330;
extern char GameData_2245370;
extern char GameData_22453b0;
extern char GameData_224af28;
extern char GameData_224af68;
extern char GameData_224afa8;
extern char GameData_224afe8;
extern char GameData_224b028;
extern char GameData_224b068;
extern char GameData_224b0a8;
extern char GameData_224b0e8;
extern char GameData_224b128;
extern char GameData_224b168;
extern char GameData_224b1a8;
extern char GameData_224b1e8;
extern char GameData_224b228;
extern char GameData_224b268;
extern char GameData_224b2a8;
extern char GameData_224b2e8;
extern char GameData_224b328;
extern char GameData_224b368;
extern char GameData_224b3a8;
extern char GameData_224b3e8;
extern char GameData_224b428;
extern int GameData_2244640;
extern int GameData_2244650;
extern int GameData_2244680;
extern int GameData_2244690;
extern int GameData_22446c0;
extern int GameData_22446d0;
extern int GameData_2244700;
extern int GameData_2244710;
extern int GameData_2244740;
extern int GameData_2244750;
extern int GameData_2244780;
extern int GameData_2244790;
extern int GameData_22447c0;
extern int GameData_22447d0;
extern int GameData_2244800;
extern int GameData_2244810;
extern int GameData_2244840;
extern int GameData_2244850;
extern int GameData_2244880;
extern int GameData_2244890;
extern int GameData_22448c0;
extern int GameData_22448d0;
extern int GameData_2244900;
extern int GameData_2244910;
extern int GameData_2244940;
extern int GameData_2244950;
extern int GameData_2244980;
extern int GameData_2244990;
extern int GameData_22449c0;
extern int GameData_22449d0;
extern int GameData_2244a08;
extern int GameData_2244a18;
extern int GameData_2244a48;
extern int GameData_2244a58;
extern int GameData_2244a88;
extern int GameData_2244a98;
extern int GameData_2244ac8;
extern int GameData_2244ad8;
extern int GameData_2244b08;
extern int GameData_2244b18;
extern int GameData_2244b48;
extern int GameData_2244b58;
extern int GameData_2244b88;
extern int GameData_2244b98;
extern int GameData_2244bc8;
extern int GameData_2244bd8;
extern int GameData_2244c08;
extern int GameData_2244c18;
extern int GameData_2244c48;
extern int GameData_2244c58;
extern int GameData_2244c88;
extern int GameData_2244c98;
extern int GameData_2244cc8;
extern int GameData_2244cd8;
extern int GameData_2244d08;
extern int GameData_2244d18;
extern int GameData_2244d48;
extern int GameData_2244d58;
extern int GameData_2244d88;
extern int GameData_2244d98;
extern int GameData_2244dd0;
extern int GameData_2244de0;
extern int GameData_2244e10;
extern int GameData_2244e20;
extern int GameData_2244e50;
extern int GameData_2244e60;
extern int GameData_2244e90;
extern int GameData_2244ea0;
extern int GameData_2244ed0;
extern int GameData_2244ee0;
extern int GameData_2244f10;
extern int GameData_2244f20;
extern int GameData_2244f50;
extern int GameData_2244f60;
extern int GameData_2244f90;
extern int GameData_2244fa0;
extern int GameData_2244fd0;
extern int GameData_2244fe0;
extern int GameData_2245010;
extern int GameData_2245020;
extern int GameData_2245050;
extern int GameData_2245060;
extern int GameData_2245090;
extern int GameData_22450a0;
extern int GameData_22450d0;
extern int GameData_22450e0;
extern int GameData_2245110;
extern int GameData_2245120;
extern int GameData_2245150;
extern int GameData_2245160;
extern int GameData_2245190;
extern int GameData_22451a0;
extern int GameData_22451d0;
extern int GameData_22451e0;
extern int GameData_2245210;
extern int GameData_2245220;
extern int GameData_2245250;
extern int GameData_2245260;
extern int GameData_2245290;
extern int GameData_22452a0;
extern int GameData_22452d0;
extern int GameData_22452e0;
extern int GameData_2245310;
extern int GameData_2245320;
extern int GameData_2245350;
extern int GameData_2245360;
extern int GameData_2245390;
extern int GameData_22453a0;
extern int GameData_22453d0;
extern int GameData_22453e0;
extern int GameData_224af48;
extern int GameData_224af58;
extern int GameData_224af88;
extern int GameData_224af98;
extern int GameData_224afc8;
extern int GameData_224afd8;
extern int GameData_224b008;
extern int GameData_224b018;
extern int GameData_224b048;
extern int GameData_224b058;
extern int GameData_224b088;
extern int GameData_224b098;
extern int GameData_224b0c8;
extern int GameData_224b0d8;
extern int GameData_224b108;
extern int GameData_224b118;
extern int GameData_224b148;
extern int GameData_224b158;
extern int GameData_224b188;
extern int GameData_224b198;
extern int GameData_224b1c8;
extern int GameData_224b1d8;
extern int GameData_224b208;
extern int GameData_224b218;
extern int GameData_224b248;
extern int GameData_224b258;
extern int GameData_224b288;
extern int GameData_224b298;
extern int GameData_224b2c8;
extern int GameData_224b2d8;
extern int GameData_224b308;
extern int GameData_224b318;
extern int GameData_224b348;
extern int GameData_224b358;
extern int GameData_224b388;
extern int GameData_224b398;
extern int GameData_224b3c8;
extern int GameData_224b3d8;
extern int GameData_224b408;
extern int GameData_224b418;
extern int GameData_224b448;
extern int GameData_224b458;
float ProcTheaterSceneAct_13e2420(__int64);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void GameRoutine_1418aa0();
void GameRoutine_1464bd0(_QWORD*, __int64, int, int);
void RelianceCheck_19a7f00(__int64, __int64, int);
void SceneTalk_1497180(unsigned __int8*, __int64, unsigned __int64, __int64,
                       __int64, unsigned __int64, int);
void __attribute__((noreturn)) GameRoutine_705570();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_929c20(__int64 a1);
__int64 game_facility_929c30(__int64 a1);
void game_facility_1407e80(__int64 a1);
__int64 game_facility_1407e90(__int64 a1);
__int64 game_facility_1407ea0(__int64 a1);
void game_facility_1409ea0(__int64 a1);
void game_facility_141bac0(__int64 a1);
__int64 game_facility_141bb60(__int64 a1);
__int64 game_facility_141bb70(__int64 a1);
__int64 game_facility_1428050(__int64 a1);
void game_facility_1428060(__int64 a1);
__int64 game_facility_142d560(__int64 a1, __int64 a2);
__int64 game_facility_142da50(__int64 a1, __int64 a2);
__int64 game_facility_142de10(__int64 a1, __int64 a2);
__int64 game_facility_1461c14();
__int64 game_facility_14683e0(__int64 a1);
__int64 game_facility_14686c0(__int64 a1);
__int64 game_facility_14954d0(__int64 a1, __int64 a2);
__int64 game_facility_19584e0(__int64 result);
__int64 game_facility_197f480(__int64 result, __int64 a2);
__int64 game_facility_197fad0(__int64 result);

__int64 game_facility_929c20(__int64 a1)
{
  return game_facility_anonymous_196b1e0(a1, (_QWORD*)(a1 + 184));
}

__int64 game_facility_929c30(__int64 a1)
{
  return game_telop_1773940(a1, a1 + 184);
}

void game_facility_1407e80(__int64 a1) { game_facility_1409ea0(a1 + 184); }

__int64 game_facility_1407e90(__int64 a1)
{
  return game_facility_14954d0(a1, a1 + 184);
}

__int64 game_facility_1407ea0(__int64 a1)
{
  return game_telop_176fc00(a1, a1 + 184);
}

void game_facility_1409ea0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  void* v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  char v38;
  _QWORD* v39;
  unsigned int v40;
  __int64 (***v41)();
  __int64 v42;
  int v43;
  unsigned int v44;
  int v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  int v54;
  __int64 v55;
  int v56;
  _QWORD* v57;
  int v58;
  __int64 v59;
  __int64 v60;
  struct {
    __int64* v61;
    char* v62;
    char* v63;
  } v61_;
  struct {
    __int64* v64;
    char* v65;
    char* v66;
  } v64_;
  struct {
    _QWORD v67[2];
    __int64 v68;
  } v67_;
  struct {
    __int64 v69;
    void* v70;
    _QWORD* v71;
  } v69_;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 48) = v1;
  *(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFF00000000LL;
  *(_DWORD*)(a1 + 96) = -1;
  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  v3 = *(__int64**)(a1 + 8);
  v5 = *v3;
  v4 = v3[1];
  v69_.v70 = &GameData_1abbc75;
  v69_.v69 = game_HashString((__int64)&GameData_1abbc75),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v6 = game_map_MapRandom_instance__ptr[0];
  v7 = game_RandomSeed_RollVariable(
           (_DWORD*)game_map_MapRandom_instance__ptr[0] + 4,
           (unsigned __int64*)&v69_.v69) &
       1,
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v8 = *(_QWORD*)(a1 + 32);
  *(_DWORD*)(a1 + 88) = v7;
  game_ThermaeData_GetLearnSkillList((void*)(&v69_.v69), v8, (_DWORD*)v6 + 4,
                                     (__int64 (**)(void))v5),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = *(_QWORD*)(a1 + 40);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 48) = v9;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12, v9),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v14 = v69_.v69;
  v13 = v69_.v70;
  v15 = v69_.v71;
  v16 = (unsigned __int64)v69_.v70 - v69_.v69;
  *(_QWORD*)(a1 + 40) = v69_.v69;
  *(_QWORD*)(a1 + 48) = v13;
  *(_QWORD*)(a1 + 56) = v15;
  v69_.v70 = nullptr;
  v69_.v71 = nullptr;
  v69_.v69 = 0;
  v64_.v64 = nullptr;
  v64_.v65 = nullptr;
  v64_.v66 = nullptr;
  if (v13 == (void*)v14) {
    v19 = 0;
  }
  else {
    if ((v16 & 0x8000000000000000LL) != 0) {
      goto LABEL_59;
    }
    v17 = (__int64*)fw_memory_HeapManager_Allocate(*v10, (__int64)v13 - v14, 16,
                                                   0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v18 = (char*)v17 + v16;
    v19 = (__int64)v17;
    v64_.v64 = v17;
    v64_.v66 = (char*)v17 + v16;
    GameRoutine_1a0b950((__int64)v17, v14, v16),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v64_.v65 = v18;
  }
  game_ThermaeData_GetLearnSkillList((void*)(&v69_.v69), *(_QWORD*)(a1 + 32),
                                     (_DWORD*)v6 + 4, (__int64 (**)(void))v4),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v20 = *(_QWORD*)(a1 + 64);
  if (v20 != 0) {
    v21 = *v10;
    *(_QWORD*)(a1 + 72) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v24 = v69_.v69;
  v23 = v69_.v70;
  v25 = v69_.v71;
  v26 = (unsigned __int64)v69_.v70 - v69_.v69;
  *(_QWORD*)(a1 + 64) = v69_.v69;
  *(_QWORD*)(a1 + 72) = v23;
  *(_QWORD*)(a1 + 80) = v25;
  v69_.v70 = nullptr;
  v69_.v71 = nullptr;
  v69_.v69 = 0;
  v61_.v61 = nullptr;
  v61_.v62 = nullptr;
  v61_.v63 = nullptr;
  if (v23 != (void*)v24) {
    if ((v26 & 0x8000000000000000LL) == 0) {
      v27 = (__int64*)fw_memory_HeapManager_Allocate(*v10, (__int64)v23 - v24,
                                                     16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v28 = (char*)v27 + v26;
      v29 = (__int64)v27;
      v61_.v61 = v27;
      v61_.v63 = (char*)v27 + v26;
      GameRoutine_1a0b950((__int64)v27, v24, v26),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v61_.v62 = v28;
      goto LABEL_19;
    }
  LABEL_59:
    GameRoutine_705570(),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v29 = 0;
LABEL_19:
  v30 = game_RelianceCheck_unknown_;
  v31 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v30 + 8) = v31;
  v32 = *(__int64**)(a1 + 8);
  v33 = *v32;
  v69_.v71 = nullptr;
  v69_.v69 = v33;
  v69_.v70 = nullptr;
  if (v33 != 0) {
    v34 = *(_QWORD**)(v33 + 392);
    v69_.v70 = v34;
    if (v34 != nullptr) {
      v34 = *(_QWORD**)(*(_QWORD*)(v34[3] + 1784LL) + 272LL);
    }
    v69_.v71 = v34;
    v35 = v34 == nullptr;
  }
  else {
    v35 = true;
  }
  v36 = v32[1];
  v67_.v67[0] = v36;
  if (v36 == 0 || (v37 = *(_QWORD*)(v36 + 392), v67_.v67[1] = v37, v37 == 0) ||
      ((v67_.v68 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v37 + 24) + 1784LL) + 272LL)) == 0
           ? (v38 = 1)
           : (v38 = v35),
       (v38 & 1) != 0 || (v39 = *(_QWORD**)(game_GameModeData_instance_ + 128),
                          ((v40 = GameReliance_8e17a0(v39, (__int64)&v69_.v69,
                                                      (__int64)v67_.v67)) &
                           0x80000000) != 0))) {
    v41 = &game_GameReliance_Impl_Data_vtable_ptr;
    if (GameData_2166cf2 == 0) {
      goto LABEL_37;
    }
  }
  else {
    v41 = (__int64 (***)(void))(v39[1] + 56LL * v40),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (*((_BYTE*)v41 + 10) == 0) {
      goto LABEL_37;
    }
  }
  v42 = *(_QWORD*)(a1 + 32);
  v43 = *(_DWORD*)(a1 + 88);
  *(_DWORD*)(a1 + 92) = *((unsigned __int16*)v41 + 6);
  v44 = GameRoutine_9505e0(v42, v43),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v45 = ((__int64 (*)(__int64 (***)(void), _QWORD, __int64))(*v41)[2])(v41, v44,
                                                                       1),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_DWORD*)(a1 + 96) = *((unsigned __int16*)v41 + 6);
  v46 = *(__int64**)(GameData_21c9728 + 16);
  v47 = *(__int64**)(GameData_21c9728 + 24);
  while (v46 != v47) {
    v48 = *v46++;
    GameSideStoryData_12b3d60(v48),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  RelianceCheck_19a7f00(
      *(_QWORD*)(**(_QWORD**)(a1 + 8) + 392LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 392LL), v45),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_37:
  v49 = *(_QWORD*)(v5 + 392);
  v50 = *(_QWORD*)(v4 + 392);
  v51 = FacilityDialogueFile_196e860(0, v49, v50),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v51 == 0) {
    v51 = FacilityDialogueFile_196e860(2u, v49, v50),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  *(_QWORD*)(a1 + 104) = v51;
  game_facility_94b3c0(*(_QWORD*)(a1 + 32)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_950540(v5, &v64_.v64),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_950540(v4, &v61_.v61),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v52 = *(__int64**)(a1 + 8);
  v53 = *(__int64**)(a1 + 16);
  if (*(_DWORD*)(a1 + 88) == 1) {
    v54 = 2;
  }
  else {
    v54 = 1;
  }
  for (; v52 != v53; ++v52) {
    v55 = *v52;
    Unit_6cfa20(*v52),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v56 = *(char*)(v55 + 2090);
    v57 = (_QWORD*)GameData_2246cb0;
    if (((v54 + v56) & ~((v54 + v56) >> 31)) >= 3) {
      v58 = 3;
    }
    else {
      v58 = (v54 + v56) & ~((v54 + v56) >> 31);
    }
    *(_BYTE*)(v55 + 2090) = v58;
    if (v57 != nullptr) {
      GameRoutine_1464bd0(v57, v55, v56, v58),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  if (v29 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v59, v29),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v19 != 0) {
    v60 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v60, v19),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
}

void game_facility_141bac0(__int64 a1)
{
  __int64* v1;
  __int64* i;
  __int64 v3;
  int v4;
  _QWORD* v5;
  int v6;
  int v7;

  if (*(_BYTE*)(a1 + 232) == 3) {
    if (GameData_2246cb0 != 0) {
      *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
    }
    v1 = *(__int64**)(a1 + 200);
    for (i = *(__int64**)(a1 + 208); v1 != i; ++v1) {
      v3 = *v1;
      if (*v1 != 0) {
        v4 = *(char*)(v3 + 2090);
        v5 = (_QWORD*)GameData_2246cb0;
        if (v4 <= -1) {
          v6 = -1;
        }
        else {
          v6 = *(char*)(v3 + 2090);
        }
        if ((unsigned int)(v6 + 1) < 3) {
          v7 = v6 + 1;
        }
        else {
          v7 = 3;
        }
        *(_BYTE*)(v3 + 2090) = v7;
        if (v5 != nullptr) {
          GameRoutine_1464bd0(v5, v3, v4, v7);
        }
      }
    }
  }
}

__int64 game_facility_141bb60(__int64 a1)
{
  return game_telop_1772480(a1, a1 + 184);
}

__int64 game_facility_141bb70(__int64 a1)
{
  return FacilityUtil_948fc0(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 244),
                             *(_DWORD*)(a1 + 248));
}

__int64 game_facility_1428050(__int64 a1) { return game_197ac60(a1, a1 + 184); }

void game_facility_1428060(__int64 a1)
{
  __int64* v1;
  __int64* i;
  __int64 v3;
  int v4;
  _QWORD* v5;
  int v6;
  int v7;

  if (*(_BYTE*)(a1 + 240) == 4) {
    if (GameData_2246cb0 != 0) {
      *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
    }
    v1 = *(__int64**)(a1 + 200);
    for (i = *(__int64**)(a1 + 208); v1 != i; ++v1) {
      v3 = *v1;
      if (*v1 != 0) {
        v4 = *(char*)(v3 + 2090);
        v5 = (_QWORD*)GameData_2246cb0;
        if (v4 <= -1) {
          v6 = -1;
        }
        else {
          v6 = *(char*)(v3 + 2090);
        }
        if ((unsigned int)(v6 + 1) < 3) {
          v7 = v6 + 1;
        }
        else {
          v7 = 3;
        }
        *(_BYTE*)(v3 + 2090) = v7;
        if (v5 != nullptr) {
          GameRoutine_1464bd0(v5, v3, v4, v7);
        }
      }
    }
  }
}

__int64 game_facility_142d560(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  float v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22449e0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22449e0) != 0) {
    GameData_22446a8 = 0;
    GameData_22446b0 = (__int64)game_facility_anonymous_ProcOpening_PlayMotion;
    GameData_2244620 = 18;
    GameData_2244648 = 0;
    GameData_2244650 = 0;
    GameData_2244658 = 0;
    GameData_2244628 = 0;
    GameData_2244630 = 0;
    GameData_2244638 = 0;
    GameData_2244640 = 0;
    GameData_2244688 = 0;
    GameData_2244690 = 0;
    GameData_2244698 = 0;
    GameData_22446e8 = 0;
    GameData_22446f0 =
        (__int64)game_facility_anonymous_ProcOpening_StartCameraWork;
    GameData_2244660 = 3;
    GameData_2244668 = 0;
    GameData_2244670 = 0;
    GameData_2244678 = 0;
    GameData_2244680 = 0;
    GameData_22446a0 = 13;
    GameData_22446b8 = 0;
    GameData_22446c0 = 0;
    GameData_22446c8 = 0;
    GameData_22446d0 = 0;
    GameData_2244728 = 0;
    GameData_2244730 = (__int64)game_facility_anonymous_142e910;
    GameData_22446d8 = 0;
    GameData_22446e0 = 13;
    GameData_22446f8 = 0;
    GameData_2244700 = 0;
    GameData_2244708 = 0;
    GameData_2244710 = 0;
    GameData_2244718 = 0;
    GameData_2244720 = 13;
    GameData_2244738 = 0;
    GameData_2244740 = 0;
    GameData_2244748 = 0;
    GameData_2244750 = 0;
    GameData_2244758 = 0;
    GameData_2244760 = 19;
    GameData_2244788 = 0;
    GameData_2244790 = 0;
    GameData_2244798 = 0;
    GameData_22447a0 = 14;
    GameData_2244768 = 0;
    GameData_2244770 = (__int64)GameData_212d060[0];
    GameData_2244780 = 500;
    GameData_22447b8 = 0;
    GameData_22447c0 = 0;
    GameData_22447c8 = 0;
    GameData_22447d0 = 0;
    GameData_22447d8 = 0;
    GameData_22447a8 = 0;
    GameData_22447b0 = (__int64)ProcTheaterSceneAct_13dcac0_ptr_21311f8[0];
    GameData_22447e0 = 19;
    GameData_2244800 = 500;
    GameData_2244808 = 0;
    GameData_2244810 = 0;
    GameData_2244818 = 0;
    GameData_2244828 = 0;
    GameData_2244820 = 10;
    GameData_22447e8 = 0;
    GameData_22447f0 = (__int64)game_80a680_ptr_212c6d0[0];
    GameData_2244840 = 0;
    GameData_2244848 = 0;
    GameData_2244850 = 0;
    GameData_2244858 = 0;
    GameData_2244830 = (__int64)GameData_212c720;
    GameData_2244860 = 8;
    GameData_2244888 = 0;
    GameData_2244890 = 0;
    GameData_2244898 = 0;
    GameData_2244880 = 0;
    GameData_2244878 = 0;
    GameData_2244870 = 0;
    GameData_22448a0 = 8;
    GameData_22448a8 = 0;
    GameData_2244868 = (__int64)ProcHubSeq_d85570_ptr_212dd48[0];
    GameData_22448e0 = 13;
    GameData_22448c0 = 0;
    GameData_22448c8 = 0;
    GameData_22448d0 = 0;
    GameData_22448d8 = 0;
    GameData_22448e8 = 0;
    GameData_22448f8 = 0;
    GameData_2244900 = 0;
    GameData_2244908 = 0;
    GameData_2244910 = 0;
    GameData_2244918 = 0;
    GameData_2244920 = 10;
    GameData_2244928 = 0;
    GameData_22448f0 = (__int64)game_facility_anonymous_142e940;
    GameData_22448b0 = (__int64)GameData_2131220[0];
    GameData_2244940 = 0;
    GameData_2244948 = 0;
    GameData_2244950 = 0;
    GameData_2244958 = 0;
    GameData_2244960 = 3;
    GameData_2244988 = 0;
    GameData_2244990 = 0;
    GameData_2244998 = 0;
    GameData_22449a0 = 0;
    GameData_22449c8 = 0;
    GameData_22449d0 = 0;
    GameData_22449d8 = 0;
    GameData_2244980 = 0;
    GameData_2244978 = 0;
    GameData_2244970 = 0;
    GameData_2244968 = 0;
    GameData_22449a8 = 0;
    GameData_22449b0 = 0;
    GameData_22449b8 = 0;
    GameData_22449c0 = 0;
    GameData_2244930 = (__int64)ProcTheaterSceneAct_13dccf0_ptr_2131200;
    __cxa_guard_release((__int64)&GameData_22449e0);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v6 = GameData_212c608[0];
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
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  v7 = GameData_2132488;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 164) = 0;
  *(_QWORD*)(v5 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v5 + 176) = 0;
  *(_BYTE*)(v5 + 180) = 0;
  *(_QWORD*)(v5 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_QWORD*)(v5 + 184) = a2;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)v5 = game_facility_anonymous_ProcOpening_vtable;
  *(_QWORD*)(v5 + 152) = ProcOpening_Destructor_ptr;
  v12 = ProcTheaterSceneAct_13e2420((__int64)&GameData_1afa938);
  v13 = *(_QWORD**)GameData_2130fc0[0];
  v14 = fw_memory_HeapManager_Allocate(*v4, 40, 16, 0);
  *(_BYTE*)(v14 + 34) = 0;
  v21_.v21[0] = 41;
  v21_.v21[1] = 34;
  v21_.v22 = v14;
  *(_WORD*)(v14 + 32) = -26749;
  *(_QWORD*)v14 = 0x83E3AB83E38683E3LL;
  *(_QWORD*)(v14 + 8) = 0xB989E75FA882E39ELL;
  *(_QWORD*)(v14 + 16) = 0x83E3AFB9E6A588E5LL;
  *(_QWORD*)(v14 + 24) = 0xE38383E3AD83E386LL;
  game_facility_19532e0((void*)(&v23_.v23), v13, v21_.v21, v12);
  v15 = v23_.v23;
  v16 = v23_.v24;
  v17 = *(_QWORD*)(v5 + 200);
  v23_.v23 = 0;
  v23_.v24 = 0;
  *(_QWORD*)(v5 + 192) = v15;
  *(_QWORD*)(v5 + 200) = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    if ((v21_.v21[0] & 1) == 0) {
      return ProcInst_657850(v5, (__int64)&GameData_2244620, "ProcOpening", 1,
                             a1);
    }
  }
  else if ((v21_.v21[0] & 1) == 0) {
    return ProcInst_657850(v5, (__int64)&GameData_2244620, "ProcOpening", 1,
                           a1);
  }
  if (v21_.v22 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v19, v21_.v22);
  }
  return ProcInst_657850(v5, (__int64)&GameData_2244620, "ProcOpening", 1, a1);
}

__int64 game_facility_142da50(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2244da8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2244da8) != 0) {
    GameData_2244a68 = 13;
    GameData_2244aa8 = 13;
    GameData_2244ae8 = 13;
    GameData_22449e8 = 18;
    GameData_2244a70 = 0;
    GameData_2244a78 =
        (__int64)game_facility_anonymous_ProcReaction_ResetMotion;
    GameData_2244a10 = 0;
    GameData_2244a18 = 0;
    GameData_2244a20 = 0;
    GameData_22449f0 = 0;
    GameData_22449f8 = 0;
    GameData_2244af0 = 0;
    GameData_2244af8 = (__int64)GameRoutine_142fb10;
    GameData_2244a00 = 0;
    GameData_2244a08 = 0;
    GameData_2244a28 = 3;
    GameData_2244a50 = 0;
    GameData_2244a58 = 0;
    GameData_2244a60 = 0;
    GameData_2244a30 = 0;
    GameData_2244a38 = 0;
    GameData_2244a40 = 0;
    GameData_2244a48 = 0;
    GameData_2244a80 = 0;
    GameData_2244a88 = 0;
    GameData_2244a90 = 0;
    GameData_2244a98 = 0;
    GameData_2244aa0 = 0;
    GameData_2244ab0 = 0;
    GameData_2244ab8 =
        (__int64)game_facility_anonymous_ProcReaction_PlayMobMotion;
    GameData_2244ac0 = 0;
    GameData_2244ac8 = 0;
    GameData_2244ad0 = 0;
    GameData_2244ad8 = 0;
    GameData_2244ae0 = 0;
    GameData_2244b00 = 0;
    GameData_2244b08 = 0;
    GameData_2244b10 = 0;
    GameData_2244b18 = 0;
    GameData_2244b20 = 0;
    GameData_2244b28 = 8;
    GameData_2244b48 = 0;
    GameData_2244b50 = 0;
    GameData_2244b58 = 0;
    GameData_2244b60 = 0;
    GameData_2244b30 = 0;
    GameData_2244b38 = (__int64)GameData_2131490[0];
    GameData_2244b68 = 19;
    GameData_2244b90 = 0;
    GameData_2244b98 = 0;
    GameData_2244ba0 = 0;
    GameData_2244ba8 = 14;
    GameData_2244b70 = 0;
    GameData_2244b78 = (__int64)GameData_212d060[0];
    GameData_2244b88 = 500;
    GameData_2244bc0 = 0;
    GameData_2244bc8 = 0;
    GameData_2244bd0 = 0;
    GameData_2244bd8 = 0;
    GameData_2244be0 = 0;
    GameData_2244be8 = 19;
    GameData_2244bb0 = 0;
    GameData_2244bb8 = (__int64)ProcTheaterSceneAct_13dcac0_ptr_21311f8[0];
    GameData_2244bf0 = 0;
    GameData_2244c08 = 500;
    GameData_2244c10 = 0;
    GameData_2244c18 = 0;
    GameData_2244c20 = 0;
    GameData_2244c30 = 0;
    GameData_2244bf8 = (__int64)game_80a680_ptr_212c6d0[0];
    GameData_2244c28 = 10;
    GameData_2244c48 = 0;
    GameData_2244c50 = 0;
    GameData_2244c58 = 0;
    GameData_2244c60 = 0;
    GameData_2244c68 = 8;
    GameData_2244c38 = (__int64)GameData_212c720;
    GameData_2244c90 = 0;
    GameData_2244c98 = 0;
    GameData_2244ca0 = 0;
    GameData_2244c88 = 0;
    GameData_2244c80 = 0;
    GameData_2244c78 = 0;
    GameData_2244ca8 = 8;
    GameData_2244cb0 = 0;
    GameData_2244c70 = (__int64)ProcHubSeq_d85570_ptr_212dd48[0];
    GameData_2244cc8 = 0;
    GameData_2244cd0 = 0;
    GameData_2244cd8 = 0;
    GameData_2244ce0 = 0;
    GameData_2244ce8 = 8;
    GameData_2244cf0 = 0;
    GameData_2244cb8 = (__int64)GameData_2131220[0];
    GameData_2244d08 = 0;
    GameData_2244d10 = 0;
    GameData_2244d18 = 0;
    GameData_2244d20 = 0;
    GameData_2244d28 = 3;
    GameData_2244d50 = 0;
    GameData_2244d58 = 0;
    GameData_2244d60 = 0;
    GameData_2244d68 = 0;
    GameData_2244d90 = 0;
    GameData_2244d98 = 0;
    GameData_2244da0 = 0;
    GameData_2244d48 = 0;
    GameData_2244d40 = 0;
    GameData_2244d38 = 0;
    GameData_2244d30 = 0;
    GameData_2244d70 = 0;
    GameData_2244d78 = 0;
    GameData_2244d80 = 0;
    GameData_2244d88 = 0;
    GameData_2244cf8 = (__int64)GameData_2131230;
    __cxa_guard_release((__int64)&GameData_2244da8);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v6 = GameData_212c608[0];
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
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  v7 = GameData_2132488;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 164) = 0;
  *(_QWORD*)(v5 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v5 + 176) = 0;
  *(_BYTE*)(v5 + 180) = 0;
  *(_QWORD*)(v5 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_QWORD*)(v5 + 184) = a2;
  *(_QWORD*)v5 = game_facility_anonymous_ProcReaction_vtable;
  *(_QWORD*)(v5 + 152) = ProcReaction_Destructor_ptr;
  return ProcInst_657850(v5, (__int64)&GameData_22449e8, "ProcReaction", 1, a1);
}

__int64 game_facility_142de10(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22453f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22453f0) != 0) {
    GameData_2244e38 = 0;
    GameData_2244e40 =
        (__int64)game_facility_anonymous_ProcImpression_ResetMotion;
    GameData_2244db0 = 18;
    GameData_2244dd8 = 0;
    GameData_2244de0 = 0;
    GameData_2244de8 = 0;
    GameData_2244db8 = 0;
    GameData_2244dc0 = 0;
    GameData_2244dc8 = 0;
    GameData_2244dd0 = 0;
    GameData_2244e78 = 0;
    GameData_2244e80 = (__int64)game_facility_anonymous_ProcImpression_HideMob;
    GameData_2244df0 = 3;
    GameData_2244e18 = 0;
    GameData_2244e20 = 0;
    GameData_2244e28 = 0;
    GameData_2244df8 = 0;
    GameData_2244e00 = 0;
    GameData_2244e08 = 0;
    GameData_2244e10 = 0;
    GameData_2244eb8 = 0;
    GameData_2244ec0 =
        (__int64)game_facility_anonymous_ProcImpression_PlayMobMotion;
    GameData_2244e30 = 13;
    GameData_2244e48 = 0;
    GameData_2244e50 = 0;
    GameData_2244e58 = 0;
    GameData_2244e60 = 0;
    GameData_2244e68 = 0;
    GameData_2244e70 = 13;
    GameData_2244e88 = 0;
    GameData_2244e90 = 0;
    GameData_2244ef8 = 0;
    GameData_2244f00 =
        (__int64)game_facility_anonymous_ProcImpression_PrepareCamera;
    GameData_2244e98 = 0;
    GameData_2244ea0 = 0;
    GameData_2244ea8 = 0;
    GameData_2244eb0 = 13;
    GameData_2244ec8 = 0;
    GameData_2244ed0 = 0;
    GameData_2244ed8 = 0;
    GameData_2244ee0 = 0;
    GameData_2244ee8 = 0;
    GameData_2244ef0 = 13;
    GameData_2244f08 = 0;
    GameData_2244f10 = 0;
    GameData_2244f18 = 0;
    GameData_2244f20 = 0;
    GameData_2244f28 = 0;
    GameData_2244f30 = 8;
    GameData_2244f50 = 0;
    GameData_2244f58 = 0;
    GameData_2244f60 = 0;
    GameData_2244f68 = 0;
    GameData_2244f70 = 8;
    GameData_2244f38 = 0;
    GameData_2244f40 = (__int64)GameData_2131498[0];
    GameData_2244f90 = 0;
    GameData_2244f98 = 0;
    GameData_2244fa0 = 0;
    GameData_2244fa8 = 0;
    GameData_2244f78 = 0;
    GameData_2244f80 = (__int64)GameData_212d298;
    GameData_2244fb0 = 8;
    GameData_2244fd8 = 0;
    GameData_2244fe0 = 0;
    GameData_2244fe8 = 0;
    GameData_2244fd0 = 0;
    GameData_2244fc8 = 0;
    GameData_2244fc0 = 0;
    GameData_2244fb8 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_2244ff0 = 19;
    GameData_2244ff8 = 0;
    GameData_2245018 = 0;
    GameData_2245020 = 0;
    GameData_2245028 = 0;
    GameData_2245038 = 0;
    GameData_2245000 = (__int64)GameData_212d060[0];
    GameData_2245010 = 500;
    GameData_2245030 = 10;
    GameData_2245140 = (__int64)ProcImpression_1431480;
    GameData_2245180 = (__int64)ProcImpression_1431480;
    GameData_22451d0 = 3;
    GameData_22452d0 = 3;
    GameData_2245310 = 3;
    GameData_2245050 = 0;
    GameData_2245058 = 0;
    GameData_2245060 = 0;
    GameData_2245068 = 0;
    GameData_2245070 = 13;
    GameData_2245078 = 0;
    GameData_2245088 = 0;
    GameData_2245090 = 0;
    GameData_2245098 = 0;
    GameData_22450a0 = 0;
    GameData_22450a8 = 0;
    GameData_22450b0 = 13;
    GameData_22450b8 = 0;
    GameData_22450c8 = 0;
    GameData_22450d0 = 0;
    GameData_22450d8 = 0;
    GameData_22450e0 = 0;
    GameData_22450e8 = 0;
    GameData_2245108 = 0;
    GameData_2245100 = 0;
    GameData_22450f8 = 0;
    GameData_2245110 = 1;
    GameData_2245118 = 0;
    GameData_2245120 = 0;
    GameData_2245128 = 0;
    GameData_2245130 = 21;
    GameData_2245138 = 0;
    GameData_2245148 = 0;
    GameData_2245150 = 0;
    GameData_2245158 = 0;
    GameData_2245160 = 0;
    GameData_2245168 = 0;
    GameData_2245170 = 21;
    GameData_2245178 = 0;
    GameData_2245188 = 0;
    GameData_2245190 = 1;
    GameData_2245198 = 0;
    GameData_22451a0 = 0;
    GameData_22451a8 = 0;
    GameData_22451c8 = 0;
    GameData_22451c0 = 0;
    GameData_22451b8 = 0;
    GameData_22451d8 = 0;
    GameData_22451e0 = 0;
    GameData_22451e8 = 0;
    GameData_22451f8 = 0;
    GameData_2245200 = 0;
    GameData_2245208 = 0;
    GameData_2245218 = 0;
    GameData_2245220 = 0;
    GameData_2245228 = 0;
    GameData_2245230 = 21;
    GameData_2245238 = 0;
    GameData_2245240 = (__int64)ProcImpression_1431610;
    GameData_2245248 = 0;
    GameData_2245250 = 0;
    GameData_2245258 = 0;
    GameData_2245260 = 0;
    GameData_2245268 = 0;
    GameData_2245270 = 21;
    GameData_2245278 = 0;
    GameData_2245280 = (__int64)ProcImpression_1431610;
    GameData_2245288 = 0;
    GameData_2245290 = 1;
    GameData_2245298 = 0;
    GameData_22452a0 = 0;
    GameData_22452a8 = 0;
    GameData_22452c8 = 0;
    GameData_22452c0 = 0;
    GameData_22452b8 = 0;
    GameData_22452d8 = 0;
    GameData_22452e0 = 0;
    GameData_22452e8 = 0;
    GameData_22452f8 = 0;
    GameData_2245300 = 0;
    GameData_2245308 = 0;
    GameData_2245318 = 0;
    GameData_2245320 = 0;
    GameData_2245328 = 0;
    GameData_2245330 = 13;
    GameData_2245338 = 0;
    GameData_2245348 = 0;
    GameData_2245350 = 0;
    GameData_2245358 = 0;
    GameData_2245360 = 0;
    GameData_2245368 = 0;
    GameData_2245370 = 8;
    GameData_2245378 = 0;
    GameData_22451b0 = 12;
    GameData_22452b0 = 12;
    GameData_2245340 = (__int64)game_facility_anonymous_14317b0;
    GameData_2245040 = (__int64)GameData_212c720;
    GameData_2245080 = (__int64)ProcImpression_14312d0;
    GameData_22450c0 = (__int64)GameRoutine_1431300;
    GameData_22450f0 = 2;
    GameData_22451f0 = 2;
    GameData_2245210 = 2;
    GameData_22452f0 = 2;
    GameData_2245390 = 0;
    GameData_2245398 = 0;
    GameData_22453a0 = 0;
    GameData_22453a8 = 0;
    GameData_22453b0 = 0;
    GameData_22453d8 = 0;
    GameData_22453e0 = 0;
    GameData_22453e8 = 0;
    GameData_22453d0 = 0;
    GameData_22453c8 = 0;
    GameData_22453c0 = 0;
    GameData_22453b8 = 0;
    GameData_2245380 = (__int64)GameData_212c710[0];
    __cxa_guard_release((__int64)&GameData_22453f0);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      256, 16, 0);
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
  GameData_22453f8 = v6;
  *(_QWORD*)v6 = GameData_203c6f8;
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
    v11 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v11);
    v12 = *v11;
    *v10 = v11;
    (*(void (**)(__int64*))(v12 + 16))(v11);
  }
  *(_QWORD*)(v6 + 240) = a2;
  *(_QWORD*)v6 = game_facility_anonymous_ProcImpression_vtable;
  *(_QWORD*)(v6 + 208) = ProcImpression_Destructor_ptr;
  return ProcInst_657850(v6, (__int64)&GameData_2244db0, "ProcImpression", 1,
                         a1);
}

__int64 game_facility_1461c14() { return GameRoutine_2b0(); }

__int64 game_facility_14683e0(__int64 a1)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  char* v9;
  char* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  char* v18;
  _BOOL4 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
    char gap24_[8];
    char v26;
    char gap33_[15];
    __int64 v27;
    char gap56_[8];
    char v28;
    char gap65_[15];
    __int64 v29;
    char v30;
    char gap89_[15];
    __int64 v31;
  } v23_;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;

  if (game_facility_FacilityView_instance_ == 0) {
    return 0;
  }
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 == 0) {
    return 0;
  }
  v5 = v3 + 48;
  v4 = *(__int64**)(v3 + 48);
  if (*(__int64**)(v5 + 8) == v4) {
    return 0;
  }
  v6 = *v4;
  if (v6 == 0) {
    return 0;
  }
  SceneTalk_1497180((unsigned __int8*)&v23_.v23, (__int64)"Serve", 5u,
                    *(_QWORD*)(v6 + 392), (__int64)"m04", 3u, 1);
  v8 = msg_MessageManager_instance__ptr[0];
  if ((v23_.v23 & 1) != 0) {
    v9 = v23_.v25;
  }
  else {
    v9 = (char*)&v23_.v23 + 1;
  }
  if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], (__int64)v9) &
       1) == 0 ||
      ((v23_.v23 & 1) != 0 ? (v10 = v23_.v25) : (v10 = (char*)&v23_.v23 + 1),
       (Manager_a51640(*v8, (__int64)v10, v10) & 1) == 0)) {
    LOWORD(v32_.v32) = 0;
    if ((v23_.v30 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ((v23_.v23 & 1) == 0) {
    v32_.v32 = v23_.v23;
    v32_.v33 = v23_.v24;
    v32_.v34 = v23_.v25;
    if ((v23_.v30 & 1) == 0) {
      goto LABEL_22;
    }
  LABEL_18:
    if (v23_.v31 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v23_.v31);
    }
    goto LABEL_22;
  }
  fw_text_String_CopyTerminated(&v32_.v32, (__int64)v23_.v25, v23_.v24);
  if ((v23_.v30 & 1) != 0) {
    goto LABEL_18;
  }
LABEL_22:
  if ((v23_.v28 & 1) != 0 && v23_.v29 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v23_.v29);
  }
  if ((v23_.v26 & 1) != 0 && v23_.v27 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v23_.v27);
  }
  if ((v23_.v23 & 1) != 0 && v23_.v25 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)v23_.v25);
  }
  v16 = v32_.v32 & 1;
  v17 = (unsigned __int64)(unsigned __int8)v32_.v32 >> 1;
  if (v16 != 0) {
    v17 = v32_.v33;
  }
  result = v17 != 0;
  if (v17 != 0) {
    v18 = v16 != 0 ? v32_.v34 : (char*)&v32_.v32 + 1;
    if (*GameData_212d460[0] == 0 && v18 != nullptr) {
      v19 = v17 != 0;
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v20, v18, nullptr);
      ProcInst_657850(v20, (__int64)GameData_2130228, "talk::Seq", 1, a1);
      result = v19;
      v16 = v32_.v32 & 1;
    }
  }
  if (v16 != 0 && v32_.v34 != nullptr) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v32_.v34);
    return v21;
  }
  return result;
}

__int64 game_facility_14686c0(__int64 a1)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  char* v9;
  char* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  char* v18;
  _BOOL4 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
    char gap24_[8];
    char v26;
    char gap33_[15];
    __int64 v27;
    char gap56_[8];
    char v28;
    char gap65_[15];
    __int64 v29;
    char v30;
    char gap89_[15];
    __int64 v31;
  } v23_;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;

  if (game_facility_FacilityView_instance_ == 0) {
    return 0;
  }
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 == 0) {
    return 0;
  }
  v5 = v3 + 48;
  v4 = *(__int64**)(v3 + 48);
  if (*(__int64**)(v5 + 8) == v4) {
    return 0;
  }
  v6 = *v4;
  if (v6 == 0) {
    return 0;
  }
  SceneTalk_1497180((unsigned __int8*)&v23_.v23, (__int64)"Serve", 5u,
                    *(_QWORD*)(v6 + 392), (__int64)"m05", 3u, 1);
  v8 = msg_MessageManager_instance__ptr[0];
  if ((v23_.v23 & 1) != 0) {
    v9 = v23_.v25;
  }
  else {
    v9 = (char*)&v23_.v23 + 1;
  }
  if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], (__int64)v9) &
       1) == 0 ||
      ((v23_.v23 & 1) != 0 ? (v10 = v23_.v25) : (v10 = (char*)&v23_.v23 + 1),
       (Manager_a51640(*v8, (__int64)v10, v10) & 1) == 0)) {
    LOWORD(v32_.v32) = 0;
    if ((v23_.v30 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ((v23_.v23 & 1) == 0) {
    v32_.v32 = v23_.v23;
    v32_.v33 = v23_.v24;
    v32_.v34 = v23_.v25;
    if ((v23_.v30 & 1) == 0) {
      goto LABEL_22;
    }
  LABEL_18:
    if (v23_.v31 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v23_.v31);
    }
    goto LABEL_22;
  }
  fw_text_String_CopyTerminated(&v32_.v32, (__int64)v23_.v25, v23_.v24);
  if ((v23_.v30 & 1) != 0) {
    goto LABEL_18;
  }
LABEL_22:
  if ((v23_.v28 & 1) != 0 && v23_.v29 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v23_.v29);
  }
  if ((v23_.v26 & 1) != 0 && v23_.v27 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v23_.v27);
  }
  if ((v23_.v23 & 1) != 0 && v23_.v25 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)v23_.v25);
  }
  v16 = v32_.v32 & 1;
  v17 = (unsigned __int64)(unsigned __int8)v32_.v32 >> 1;
  if (v16 != 0) {
    v17 = v32_.v33;
  }
  result = v17 != 0;
  if (v17 != 0) {
    v18 = v16 != 0 ? v32_.v34 : (char*)&v32_.v32 + 1;
    if (*GameData_212d460[0] == 0 && v18 != nullptr) {
      v19 = v17 != 0;
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v20, v18, nullptr);
      ProcInst_657850(v20, (__int64)GameData_2130228, "talk::Seq", 1, a1);
      result = v19;
      v16 = v32_.v32 & 1;
    }
  }
  if (v16 != 0 && v32_.v34 != nullptr) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v32_.v34);
    return v21;
  }
  return result;
}

__int64 game_facility_14954d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  float v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224b468,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_224b468) != 0) {
    GameData_224af28 = 18;
    GameData_224af70 = 0;
    GameData_224af78 =
        (__int64)game_facility_anonymous_ProcConversation_PlaySpecialTelop;
    GameData_224af50 = 0;
    GameData_224af58 = 0;
    GameData_224af60 = 0;
    GameData_224af30 = 0;
    GameData_224af38 = 0;
    GameData_224af40 = 0;
    GameData_224af48 = 0;
    GameData_224af80 = 0;
    GameData_224af68 = 13;
    GameData_224af88 = 0;
    GameData_224af90 = 0;
    GameData_224af98 = 0;
    GameData_224afa0 = 0;
    GameData_224afa8 = 8;
    GameData_224afd0 = 0;
    GameData_224afd8 = 0;
    GameData_224afe0 = 0;
    GameData_224afc8 = 0;
    GameData_224afb8 = 0;
    GameData_224afc0 = 0;
    GameData_224afb0 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_224afe8 = 19;
    GameData_224b010 = 0;
    GameData_224b018 = 0;
    GameData_224b020 = 0;
    GameData_224aff0 = 0;
    GameData_224aff8 = (__int64)GameData_212d060[0];
    GameData_224b008 = 500;
    GameData_224b028 = 10;
    GameData_224b048 = 0;
    GameData_224b050 = 0;
    GameData_224b058 = 0;
    GameData_224b060 = 0;
    GameData_224b068 = 13;
    GameData_224b080 = 0;
    GameData_224b088 = 0;
    GameData_224b090 = 0;
    GameData_224b098 = 0;
    GameData_224b0a0 = 0;
    GameData_224b0a8 = 10;
    GameData_224b030 = 0;
    GameData_224b038 = (__int64)GameData_212c720;
    GameData_224b070 = 0;
    GameData_224b078 = (__int64)game_facility_anonymous_1495ef0;
    GameData_224b0e8 = 13;
    GameData_224b128 = 13;
    GameData_224b1f8 = (__int64)ProcConversation_1496100;
    GameData_224b238 = (__int64)ProcConversation_1496100;
    GameData_224b3e8 = 13;
    GameData_224b0c8 = 0;
    GameData_224b0d0 = 0;
    GameData_224b0d8 = 0;
    GameData_224b0e0 = 0;
    GameData_224b100 = 0;
    GameData_224b108 = 0;
    GameData_224b110 = 0;
    GameData_224b118 = 0;
    GameData_224b120 = 0;
    GameData_224b130 = 0;
    GameData_224b140 = 0;
    GameData_224b148 = 0;
    GameData_224b150 = 0;
    GameData_224b158 = 0;
    GameData_224b160 = 0;
    GameData_224b168 = 12;
    GameData_224b190 = 0;
    GameData_224b198 = 0;
    GameData_224b1a0 = 0;
    GameData_224b188 = 0;
    GameData_224b180 = 0;
    GameData_224b178 = 0;
    GameData_224b170 = 0;
    GameData_224b1d0 = 0;
    GameData_224b1d8 = 0;
    GameData_224b1e0 = 0;
    GameData_224b1b0 = 0;
    GameData_224b1b8 = 0;
    GameData_224b1c0 = 0;
    GameData_224b1c8 = 0;
    GameData_224b1e8 = 21;
    GameData_224b1f0 = 0;
    GameData_224b200 = 0;
    GameData_224b208 = 0;
    GameData_224b210 = 0;
    GameData_224b218 = 0;
    GameData_224b220 = 0;
    GameData_224b228 = 21;
    GameData_224b230 = 0;
    GameData_224b240 = 0;
    GameData_224b250 = 0;
    GameData_224b258 = 0;
    GameData_224b260 = 0;
    GameData_224b268 = 12;
    GameData_224b280 = 0;
    GameData_224b278 = 0;
    GameData_224b270 = 0;
    GameData_224b290 = 0;
    GameData_224b298 = 0;
    GameData_224b2a0 = 0;
    GameData_224b2b0 = 0;
    GameData_224b2b8 = 0;
    GameData_224b2c0 = 0;
    GameData_224b2d0 = 0;
    GameData_224b2d8 = 0;
    GameData_224b2e0 = 0;
    GameData_224b2e8 = 21;
    GameData_224b2f0 = 0;
    GameData_224b2f8 = (__int64)ProcConversation_14962e0;
    GameData_224b300 = 0;
    GameData_224b308 = 0;
    GameData_224b310 = 0;
    GameData_224b318 = 0;
    GameData_224b320 = 0;
    GameData_224b328 = 21;
    GameData_224b330 = 0;
    GameData_224b338 = (__int64)ProcConversation_14962e0;
    GameData_224b340 = 0;
    GameData_224b350 = 0;
    GameData_224b358 = 0;
    GameData_224b360 = 0;
    GameData_224b368 = 12;
    GameData_224b380 = 0;
    GameData_224b378 = 0;
    GameData_224b370 = 0;
    GameData_224b390 = 0;
    GameData_224b398 = 0;
    GameData_224b3a0 = 0;
    GameData_224b3b0 = 0;
    GameData_224b3b8 = 0;
    GameData_224b3c0 = 0;
    GameData_224b3d0 = 0;
    GameData_224b3d8 = 0;
    GameData_224b3e0 = 0;
    GameData_224b3f0 = 0;
    GameData_224b400 = 0;
    GameData_224b408 = 0;
    GameData_224b410 = 0;
    GameData_224b418 = 0;
    GameData_224b420 = 0;
    GameData_224b428 = 0;
    GameData_224b450 = 0;
    GameData_224b458 = 0;
    GameData_224b460 = 0;
    GameData_224b448 = 0;
    GameData_224b440 = 0;
    GameData_224b438 = 0;
    GameData_224b430 = 0;
    GameData_224b248 = 1;
    GameData_224b2c8 = 1;
    GameData_224b348 = 1;
    GameData_224b3f8 = (__int64)ProcConversation_1496480;
    GameData_224b0b0 = 0;
    GameData_224b0b8 = (__int64)ProcTheaterSceneAct_13dccf0_ptr_2131200;
    GameData_224b0f0 = 0;
    GameData_224b0f8 = (__int64)ProcConversation_1495fa0;
    GameData_224b138 = (__int64)GameRoutine_14960a0;
    GameData_224b1a8 = 2;
    GameData_224b288 = 2;
    GameData_224b2a8 = 2;
    GameData_224b388 = 2;
    GameData_224b3a8 = 2;
    GameData_224b3c8 = 2;
    __cxa_guard_release((__int64)&GameData_224b468);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v6 = GameData_212c608[0];
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
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  v7 = GameData_2132488;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 164) = 0;
  *(_QWORD*)(v5 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v5 + 176) = 0;
  *(_BYTE*)(v5 + 180) = 0;
  *(_QWORD*)(v5 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_QWORD*)(v5 + 184) = a2;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)v5 = game_facility_anonymous_ProcConversation_vtable_2043c48;
  *(_QWORD*)(v5 + 152) = ProcConversation_Destructor_14968a0_ptr;
  v12 = ProcTheaterSceneAct_13e2420((__int64)&GameData_1afa938);
  v13 = *(_QWORD**)GameData_2130fc0[0];
  v14 = fw_memory_HeapManager_Allocate(*v4, 40, 16, 0);
  *(_BYTE*)(v14 + 34) = 0;
  v21_.v21[0] = 41;
  v21_.v21[1] = 34;
  v21_.v22 = v14;
  *(_WORD*)(v14 + 32) = -26749;
  *(_QWORD*)v14 = 0x83E3AB83E38683E3LL;
  *(_QWORD*)(v14 + 8) = 0xB989E75FA882E39ELL;
  *(_QWORD*)(v14 + 16) = 0x83E3AFB9E6A588E5LL;
  *(_QWORD*)(v14 + 24) = 0xE38383E3AD83E386LL;
  game_facility_19532e0((void*)(&v23_.v23), v13, v21_.v21, v12);
  v15 = v23_.v23;
  v16 = v23_.v24;
  v17 = *(_QWORD*)(v5 + 200);
  v23_.v23 = 0;
  v23_.v24 = 0;
  *(_QWORD*)(v5 + 192) = v15;
  *(_QWORD*)(v5 + 200) = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    if ((v21_.v21[0] & 1) == 0) {
      return ProcInst_657850(v5, (__int64)&GameData_224af28, "ProcConversation",
                             1, a1);
    }
  }
  else if ((v21_.v21[0] & 1) == 0) {
    return ProcInst_657850(v5, (__int64)&GameData_224af28, "ProcConversation",
                           1, a1);
  }
  if (v21_.v22 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v19, v21_.v22);
  }
  return ProcInst_657850(v5, (__int64)&GameData_224af28, "ProcConversation", 1,
                         a1);
}

__int64 game_facility_19584e0(__int64 result)
{
  if (*(_BYTE*)(result + 240) == 1) {
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      return game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-1f);
    }
  }
  return result;
}

__int64 game_facility_197f480(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(result + 252) != 1) {
    return result;
  }
  v2 = result;
  *(_WORD*)(result + 152) = 0;
  v3 = result + 160;
  result = *(_QWORD*)(result + 192);
  *(_QWORD*)(v2 + 192) = 0;
  if (result == v3) {
    v4 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  result =
      (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v4))(result, a2);
LABEL_7:
  v5 = *(_QWORD*)(v2 + 8);
  if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 1) {
          *(_QWORD*)(v2 + 16) = v5;
          *(_WORD*)(v2 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

__int64 game_facility_197fad0(__int64 result)
{
  __int16* v1;

  if (*(_BYTE*)(result + 253) == 1) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v1 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v1 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    return GameRoutine_17b95c0(result, v1);
  }
  return result;
}

#pragma GCC visibility pop
