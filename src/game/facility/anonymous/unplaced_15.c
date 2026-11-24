#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1661600(__int64, char, int, __int64*);
__int64 GameRoutine_1466310();
__int64 GameRoutine_1466380();
__int64 GameRoutine_1466400();
__int64 GameRoutine_1466dd0();
__int64 GameRoutine_1466e40();
__int64 GameRoutine_1466ec0();
__int64 GameRoutine_1479fc0(__int64);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_197c650();
__int64 GameRoutine_197c6e0();
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_7fa250(__int64, __int64*, __int64);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 SceneCharacter_1400a90(_QWORD*, __int64);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_facility_142d560(__int64, __int64);
__int64 game_facility_142da50(__int64, __int64);
__int64 game_facility_142de10(__int64, __int64);
__int64 game_facility_SceneManager_SceneManager(__int64);
__int64 game_facility_anonymous_1466320_alt1();
__int64 game_facility_anonymous_1466de0_alt1();
__int64 game_facility_anonymous_196c040_alt1();
__int64 game_facility_anonymous_196c0e0();
__int64 game_facility_anonymous_196c310_alt1();
__int64 game_facility_anonymous_196c360_alt1();
__int64 game_facility_anonymous_196c3c0();
__int64 game_facility_anonymous_196c560_alt1();
__int64 game_facility_anonymous_197c740();
__int64 game_facility_anonymous_197c920();
__int64 game_facility_anonymous_197cac0_alt1();
__int64 llvm_libcxx_21_libcxx_include___functional_1795980(__int64, int,
                                                           const char*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
char* game_util_Format(const char*, ...);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_22474c8;
extern _UNKNOWN GameData_2247710;
extern _UNKNOWN GameData_22704d0;
extern _UNKNOWN GameData_2271248;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2043bc8[])();
extern __int64 (*GameData_211b678[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d298)();
extern __int64 (*GameData_21324d8)();
extern __int64 (*ProcHubSeq_d85570_ptr_212dd48[2])();
extern __int64 (*ProcSortiePlanButtomUpScene_Destructor_1466a40_ptr[])();
extern __int64 (*ProcSortiePlanTrainingScene_Destructor_1467280_ptr[])();
extern __int64 (*ProcWork_Destructor_ptr[])();
extern __int64 (*game_80a680_ptr_212c6d0[11])();
extern __int64 (
    *game_facility_ProcFacilityScene_Destroy_ProcFacilityScene_ptr[])();
extern __int64 (*game_facility_anonymous_ProcConversation_vtable[])();
extern __int64 (*game_facility_anonymous_ProcObeliskHero3Menu_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcSortiePlanButtomUpScene_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcSortiePlanTrainingScene_vtable[])();
extern __int64 (*game_hub_d856f0_ptr_212dd38[4])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20b2a30[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b2960[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131440[5];
extern __int64* GameData_2131448[4];
extern __int64* GameData_2132488;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce0[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9718;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_22420e0;
extern __int64 GameData_2247290;
extern __int64 GameData_2247298;
extern __int64 GameData_22472a0;
extern __int64 GameData_22472b0;
extern __int64 GameData_22472c0;
extern __int64 GameData_22472d0;
extern __int64 GameData_22472d8;
extern __int64 GameData_22472e0;
extern __int64 GameData_22472f0;
extern __int64 GameData_2247300;
extern __int64 GameData_2247310;
extern __int64 GameData_2247318;
extern __int64 GameData_2247320;
extern __int64 GameData_2247330;
extern __int64 GameData_2247340;
extern __int64 GameData_2247350;
extern __int64 GameData_2247358;
extern __int64 GameData_2247360;
extern __int64 GameData_2247370;
extern __int64 GameData_2247380;
extern __int64 GameData_2247390;
extern __int64 GameData_2247398;
extern __int64 GameData_22473a0;
extern __int64 GameData_22473b0;
extern __int64 GameData_22473c0;
extern __int64 GameData_22473d0;
extern __int64 GameData_22473d8;
extern __int64 GameData_22473e0;
extern __int64 GameData_22473f0;
extern __int64 GameData_2247400;
extern __int64 GameData_2247410;
extern __int64 GameData_2247418;
extern __int64 GameData_2247420;
extern __int64 GameData_2247430;
extern __int64 GameData_2247440;
extern __int64 GameData_2247450;
extern __int64 GameData_2247458;
extern __int64 GameData_2247460;
extern __int64 GameData_2247470;
extern __int64 GameData_2247480;
extern __int64 GameData_2247490;
extern __int64 GameData_2247498;
extern __int64 GameData_22474a0;
extern __int64 GameData_22474b0;
extern __int64 GameData_22474c0;
extern __int64 GameData_22474d8;
extern __int64 GameData_22474e0;
extern __int64 GameData_22474e8;
extern __int64 GameData_22474f8;
extern __int64 GameData_2247508;
extern __int64 GameData_2247518;
extern __int64 GameData_2247520;
extern __int64 GameData_2247528;
extern __int64 GameData_2247538;
extern __int64 GameData_2247548;
extern __int64 GameData_2247558;
extern __int64 GameData_2247560;
extern __int64 GameData_2247568;
extern __int64 GameData_2247578;
extern __int64 GameData_2247588;
extern __int64 GameData_2247598;
extern __int64 GameData_22475a0;
extern __int64 GameData_22475a8;
extern __int64 GameData_22475b8;
extern __int64 GameData_22475c8;
extern __int64 GameData_22475d8;
extern __int64 GameData_22475e0;
extern __int64 GameData_22475e8;
extern __int64 GameData_22475f8;
extern __int64 GameData_2247608;
extern __int64 GameData_2247618;
extern __int64 GameData_2247620;
extern __int64 GameData_2247628;
extern __int64 GameData_2247638;
extern __int64 GameData_2247648;
extern __int64 GameData_2247658;
extern __int64 GameData_2247660;
extern __int64 GameData_2247668;
extern __int64 GameData_2247678;
extern __int64 GameData_2247688;
extern __int64 GameData_2247698;
extern __int64 GameData_22476a0;
extern __int64 GameData_22476a8;
extern __int64 GameData_22476b8;
extern __int64 GameData_22476c8;
extern __int64 GameData_22476d8;
extern __int64 GameData_22476e0;
extern __int64 GameData_22476e8;
extern __int64 GameData_22476f8;
extern __int64 GameData_2247708;
extern __int64 GameData_226ffd8;
extern __int64 GameData_226ffe0;
extern __int64 GameData_226ffe8;
extern __int64 GameData_226fff8;
extern __int64 GameData_2270008;
extern __int64 GameData_2270018;
extern __int64 GameData_2270020;
extern __int64 GameData_2270028;
extern __int64 GameData_2270038;
extern __int64 GameData_2270048;
extern __int64 GameData_2270058;
extern __int64 GameData_2270060;
extern __int64 GameData_2270078;
extern __int64 GameData_2270088;
extern __int64 GameData_2270098;
extern __int64 GameData_22700a0;
extern __int64 GameData_22700a8;
extern __int64 GameData_22700b8;
extern __int64 GameData_22700c8;
extern __int64 GameData_22700d8;
extern __int64 GameData_22700e0;
extern __int64 GameData_22700e8;
extern __int64 GameData_22700f8;
extern __int64 GameData_2270108;
extern __int64 GameData_2270118;
extern __int64 GameData_2270120;
extern __int64 GameData_2270128;
extern __int64 GameData_2270138;
extern __int64 GameData_2270148;
extern __int64 GameData_2270158;
extern __int64 GameData_2270160;
extern __int64 GameData_2270168;
extern __int64 GameData_2270178;
extern __int64 GameData_2270188;
extern __int64 GameData_2270198;
extern __int64 GameData_22701a0;
extern __int64 GameData_22701a8;
extern __int64 GameData_22701b8;
extern __int64 GameData_22701c8;
extern __int64 GameData_22701d8;
extern __int64 GameData_22701e0;
extern __int64 GameData_22701e8;
extern __int64 GameData_22701f8;
extern __int64 GameData_2270208;
extern __int64 GameData_2270218;
extern __int64 GameData_2270220;
extern __int64 GameData_2270228;
extern __int64 GameData_2270238;
extern __int64 GameData_2270248;
extern __int64 GameData_2270258;
extern __int64 GameData_2270260;
extern __int64 GameData_2270268;
extern __int64 GameData_2270278;
extern __int64 GameData_2270288;
extern __int64 GameData_2270298;
extern __int64 GameData_22702a0;
extern __int64 GameData_22702a8;
extern __int64 GameData_22702b8;
extern __int64 GameData_22702c8;
extern __int64 GameData_22702d8;
extern __int64 GameData_22702e0;
extern __int64 GameData_22702e8;
extern __int64 GameData_22702f8;
extern __int64 GameData_2270308;
extern __int64 GameData_2270318;
extern __int64 GameData_2270320;
extern __int64 GameData_2270328;
extern __int64 GameData_2270338;
extern __int64 GameData_2270348;
extern __int64 GameData_2270358;
extern __int64 GameData_2270360;
extern __int64 GameData_2270368;
extern __int64 GameData_2270378;
extern __int64 GameData_2270388;
extern __int64 GameData_2270398;
extern __int64 GameData_22703a0;
extern __int64 GameData_22703b8;
extern __int64 GameData_22703c8;
extern __int64 GameData_22703d8;
extern __int64 GameData_22703e0;
extern __int64 GameData_22703e8;
extern __int64 GameData_22703f8;
extern __int64 GameData_2270408;
extern __int64 GameData_2270418;
extern __int64 GameData_2270420;
extern __int64 GameData_2270428;
extern __int64 GameData_2270438;
extern __int64 GameData_2270448;
extern __int64 GameData_2270458;
extern __int64 GameData_2270460;
extern __int64 GameData_2270478;
extern __int64 GameData_2270488;
extern __int64 GameData_2270498;
extern __int64 GameData_22704a0;
extern __int64 GameData_22704a8;
extern __int64 GameData_22704b8;
extern __int64 GameData_22704c8;
extern __int64 GameData_2270ad0;
extern __int64 GameData_2270ad8;
extern __int64 GameData_2270ae0;
extern __int64 GameData_2270af0;
extern __int64 GameData_2270b00;
extern __int64 GameData_2270b10;
extern __int64 GameData_2270b18;
extern __int64 GameData_2270b20;
extern __int64 GameData_2270b30;
extern __int64 GameData_2270b40;
extern __int64 GameData_2270b50;
extern __int64 GameData_2270b58;
extern __int64 GameData_2270b60;
extern __int64 GameData_2270b70;
extern __int64 GameData_2270b80;
extern __int64 GameData_2270b90;
extern __int64 GameData_2270b98;
extern __int64 GameData_2270ba0;
extern __int64 GameData_2270bb0;
extern __int64 GameData_2270bc0;
extern __int64 GameData_2270bd0;
extern __int64 GameData_2270bd8;
extern __int64 GameData_2270bf0;
extern __int64 GameData_2270c00;
extern __int64 GameData_2270c10;
extern __int64 GameData_2270c18;
extern __int64 GameData_2270c30;
extern __int64 GameData_2270c40;
extern __int64 GameData_2270c50;
extern __int64 GameData_2270c58;
extern __int64 GameData_2270c70;
extern __int64 GameData_2270c80;
extern __int64 GameData_2270c90;
extern __int64 GameData_2270c98;
extern __int64 GameData_2270ca0;
extern __int64 GameData_2270cb0;
extern __int64 GameData_2270cc0;
extern __int64 GameData_2270cd0;
extern __int64 GameData_2270cd8;
extern __int64 GameData_2270ce0;
extern __int64 GameData_2270cf0;
extern __int64 GameData_2270d00;
extern __int64 GameData_2270d10;
extern __int64 GameData_2270d18;
extern __int64 GameData_2270d20;
extern __int64 GameData_2270d30;
extern __int64 GameData_2270d40;
extern __int64 GameData_2270d50;
extern __int64 GameData_2270d58;
extern __int64 GameData_2270d60;
extern __int64 GameData_2270d70;
extern __int64 GameData_2270d80;
extern __int64 GameData_2270d90;
extern __int64 GameData_2270d98;
extern __int64 GameData_2270da0;
extern __int64 GameData_2270db0;
extern __int64 GameData_2270dc0;
extern __int64 GameData_2270dd0;
extern __int64 GameData_2270dd8;
extern __int64 GameData_2270de0;
extern __int64 GameData_2270df0;
extern __int64 GameData_2270e00;
extern __int64 GameData_2270e10;
extern __int64 GameData_2270e18;
extern __int64 GameData_2270e20;
extern __int64 GameData_2270e30;
extern __int64 GameData_2270e40;
extern __int64 GameData_2270e50;
extern __int64 GameData_2270e58;
extern __int64 GameData_2270e60;
extern __int64 GameData_2270e70;
extern __int64 GameData_2270e80;
extern __int64 GameData_2270e90;
extern __int64 GameData_2270e98;
extern __int64 GameData_2270ea0;
extern __int64 GameData_2270eb0;
extern __int64 GameData_2270ec0;
extern __int64 GameData_2270ed0;
extern __int64 GameData_2270ed8;
extern __int64 GameData_2270ee0;
extern __int64 GameData_2270ef0;
extern __int64 GameData_2270f00;
extern __int64 GameData_2270f10;
extern __int64 GameData_2270f18;
extern __int64 GameData_2270f20;
extern __int64 GameData_2270f30;
extern __int64 GameData_2270f40;
extern __int64 GameData_2270f50;
extern __int64 GameData_2270f58;
extern __int64 GameData_2270f60;
extern __int64 GameData_2270f70;
extern __int64 GameData_2270f80;
extern __int64 GameData_2270f90;
extern __int64 GameData_2270f98;
extern __int64 GameData_2270fa0;
extern __int64 GameData_2270fb0;
extern __int64 GameData_2270fc0;
extern __int64 GameData_2270fd0;
extern __int64 GameData_2270fd8;
extern __int64 GameData_2270fe0;
extern __int64 GameData_2270ff0;
extern __int64 GameData_2271000;
extern __int64 GameData_2271010;
extern __int64 GameData_2271018;
extern __int64 GameData_2271030;
extern __int64 GameData_2271040;
extern __int64 GameData_2271050;
extern __int64 GameData_2271058;
extern __int64 GameData_2271060;
extern __int64 GameData_2271070;
extern __int64 GameData_2271080;
extern __int64 GameData_2271090;
extern __int64 GameData_2271098;
extern __int64 GameData_22710a0;
extern __int64 GameData_22710b0;
extern __int64 GameData_22710c0;
extern __int64 GameData_22710d0;
extern __int64 GameData_22710d8;
extern __int64 GameData_22710f0;
extern __int64 GameData_2271100;
extern __int64 GameData_2271110;
extern __int64 GameData_2271118;
extern __int64 GameData_2271130;
extern __int64 GameData_2271140;
extern __int64 GameData_2271150;
extern __int64 GameData_2271158;
extern __int64 GameData_2271160;
extern __int64 GameData_2271170;
extern __int64 GameData_2271180;
extern __int64 GameData_2271190;
extern __int64 GameData_2271198;
extern __int64 GameData_22711b0;
extern __int64 GameData_22711c0;
extern __int64 GameData_22711d0;
extern __int64 GameData_22711d8;
extern __int64 GameData_22711e0;
extern __int64 GameData_22711f0;
extern __int64 GameData_2271200;
extern __int64 GameData_2271210;
extern __int64 GameData_2271218;
extern __int64 GameData_2271220;
extern __int64 GameData_2271230;
extern __int64 GameData_2271240;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char* GameData_211b388[16];
extern char* GameData_211b3e8[4];
extern char GameData_2247288;
extern char GameData_22472c8;
extern char GameData_2247308;
extern char GameData_2247348;
extern char GameData_2247388;
extern char GameData_22473c8;
extern char GameData_2247408;
extern char GameData_2247448;
extern char GameData_2247488;
extern char GameData_22474d0;
extern char GameData_2247510;
extern char GameData_2247550;
extern char GameData_2247590;
extern char GameData_22475d0;
extern char GameData_2247610;
extern char GameData_2247650;
extern char GameData_2247690;
extern char GameData_22476d0;
extern char GameData_226ffd0;
extern char GameData_2270010;
extern char GameData_2270050;
extern char GameData_2270090;
extern char GameData_22700d0;
extern char GameData_2270110;
extern char GameData_2270150;
extern char GameData_2270190;
extern char GameData_22701d0;
extern char GameData_2270210;
extern char GameData_2270250;
extern char GameData_2270290;
extern char GameData_22702d0;
extern char GameData_2270310;
extern char GameData_2270350;
extern char GameData_2270390;
extern char GameData_22703d0;
extern char GameData_2270410;
extern char GameData_2270450;
extern char GameData_2270490;
extern char GameData_2270ac8;
extern char GameData_2270b08;
extern char GameData_2270b48;
extern char GameData_2270b88;
extern char GameData_2270bc8;
extern char GameData_2270c08;
extern char GameData_2270c48;
extern char GameData_2270c88;
extern char GameData_2270cc8;
extern char GameData_2270d08;
extern char GameData_2270d48;
extern char GameData_2270d88;
extern char GameData_2270dc8;
extern char GameData_2270e08;
extern char GameData_2270e48;
extern char GameData_2270e88;
extern char GameData_2270ec8;
extern char GameData_2270f08;
extern char GameData_2270f48;
extern char GameData_2270f88;
extern char GameData_2270fc8;
extern char GameData_2271008;
extern char GameData_2271048;
extern char GameData_2271088;
extern char GameData_22710c8;
extern char GameData_2271108;
extern char GameData_2271148;
extern char GameData_2271188;
extern char GameData_22711c8;
extern char GameData_2271208;
extern const char GameData_1a966f7[];
extern const char GameData_1ad7f83[];
extern int GameData_22472a8;
extern int GameData_22472b8;
extern int GameData_22472e8;
extern int GameData_22472f8;
extern int GameData_2247328;
extern int GameData_2247338;
extern int GameData_2247368;
extern int GameData_2247378;
extern int GameData_22473a8;
extern int GameData_22473b8;
extern int GameData_22473e8;
extern int GameData_22473f8;
extern int GameData_2247428;
extern int GameData_2247438;
extern int GameData_2247468;
extern int GameData_2247478;
extern int GameData_22474a8;
extern int GameData_22474b8;
extern int GameData_22474f0;
extern int GameData_2247500;
extern int GameData_2247530;
extern int GameData_2247540;
extern int GameData_2247570;
extern int GameData_2247580;
extern int GameData_22475b0;
extern int GameData_22475c0;
extern int GameData_22475f0;
extern int GameData_2247600;
extern int GameData_2247630;
extern int GameData_2247640;
extern int GameData_2247670;
extern int GameData_2247680;
extern int GameData_22476b0;
extern int GameData_22476c0;
extern int GameData_22476f0;
extern int GameData_2247700;
extern int GameData_226fff0;
extern int GameData_2270000;
extern int GameData_2270030;
extern int GameData_2270040;
extern int GameData_2270070;
extern int GameData_2270080;
extern int GameData_22700b0;
extern int GameData_22700c0;
extern int GameData_22700f0;
extern int GameData_2270100;
extern int GameData_2270130;
extern int GameData_2270140;
extern int GameData_2270170;
extern int GameData_2270180;
extern int GameData_22701b0;
extern int GameData_22701c0;
extern int GameData_22701f0;
extern int GameData_2270200;
extern int GameData_2270230;
extern int GameData_2270240;
extern int GameData_2270270;
extern int GameData_2270280;
extern int GameData_22702b0;
extern int GameData_22702c0;
extern int GameData_22702f0;
extern int GameData_2270300;
extern int GameData_2270330;
extern int GameData_2270340;
extern int GameData_2270370;
extern int GameData_2270380;
extern int GameData_22703b0;
extern int GameData_22703c0;
extern int GameData_22703f0;
extern int GameData_2270400;
extern int GameData_2270430;
extern int GameData_2270440;
extern int GameData_2270470;
extern int GameData_2270480;
extern int GameData_22704b0;
extern int GameData_22704c0;
extern int GameData_2270ae8;
extern int GameData_2270af8;
extern int GameData_2270b28;
extern int GameData_2270b38;
extern int GameData_2270b68;
extern int GameData_2270b78;
extern int GameData_2270ba8;
extern int GameData_2270bb8;
extern int GameData_2270be8;
extern int GameData_2270bf8;
extern int GameData_2270c28;
extern int GameData_2270c38;
extern int GameData_2270c68;
extern int GameData_2270c78;
extern int GameData_2270ca8;
extern int GameData_2270cb8;
extern int GameData_2270ce8;
extern int GameData_2270cf8;
extern int GameData_2270d28;
extern int GameData_2270d38;
extern int GameData_2270d68;
extern int GameData_2270d78;
extern int GameData_2270da8;
extern int GameData_2270db8;
extern int GameData_2270de8;
extern int GameData_2270df8;
extern int GameData_2270e28;
extern int GameData_2270e38;
extern int GameData_2270e68;
extern int GameData_2270e78;
extern int GameData_2270ea8;
extern int GameData_2270eb8;
extern int GameData_2270ee8;
extern int GameData_2270ef8;
extern int GameData_2270f28;
extern int GameData_2270f38;
extern int GameData_2270f68;
extern int GameData_2270f78;
extern int GameData_2270fa8;
extern int GameData_2270fb8;
extern int GameData_2270fe8;
extern int GameData_2270ff8;
extern int GameData_2271028;
extern int GameData_2271038;
extern int GameData_2271068;
extern int GameData_2271078;
extern int GameData_22710a8;
extern int GameData_22710b8;
extern int GameData_22710e8;
extern int GameData_22710f8;
extern int GameData_2271128;
extern int GameData_2271138;
extern int GameData_2271168;
extern int GameData_2271178;
extern int GameData_22711a8;
extern int GameData_22711b8;
extern int GameData_22711e8;
extern int GameData_22711f8;
extern int GameData_2271228;
extern int GameData_2271238;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void GameRoutine_1418aa0();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __cxa_guard_release(__int64);
void game_149edd0(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_anonymous_13e2b40(__int64 a1);
__int64 game_facility_anonymous_13e2b50(__int64 a1);
__int64 game_facility_anonymous_13e2b60(__int64 a1);
void game_facility_anonymous_142e910(__int64 a1);
_QWORD* game_facility_anonymous_142e940(_QWORD* result);
void game_facility_anonymous_14317b0();
__int64 game_facility_anonymous_1465580(__int64 a1);
__int64 game_facility_anonymous_1465590(__int64 a1);
__int64 game_facility_anonymous_1465aa0(__int64 a1);
__int64 game_facility_anonymous_1465d90(__int64 a1);
__int64 game_facility_anonymous_1466320(__int64 result);
__int64 game_facility_anonymous_1466de0(__int64 result);
__int64 game_facility_anonymous_147a4a0(__int64 a1);
__int64 game_facility_anonymous_1495ef0(__int64 result);
__int64 game_facility_anonymous_1727be0(__int64 a1);
__int64 game_facility_anonymous_1966da0(__int64 a1);
char* game_facility_anonymous_196a690(__int64 a1);
void game_facility_anonymous_196ace0(__int64 a1, unsigned __int8 a2);
__int64 game_facility_anonymous_196b1e0(__int64 a1, _QWORD* a2);
__int64 game_facility_anonymous_196c040(__int64 result);
_DWORD* game_facility_anonymous_196c310(_DWORD* result);
__int64 game_facility_anonymous_196c360(__int64 result);
void game_facility_anonymous_196c560();
__int64 game_facility_anonymous_197c090(__int64 a1, __int64 a2);
__int64 game_facility_anonymous_197cac0(__int64 result);

__int64 game_facility_anonymous_13e2b40(__int64 a1)
{
  return game_facility_142d560(a1, a1 + 184);
}

__int64 game_facility_anonymous_13e2b50(__int64 a1)
{
  return game_facility_142da50(a1, a1 + 184);
}

__int64 game_facility_anonymous_13e2b60(__int64 a1)
{
  return game_facility_142de10(a1, a1 + 184);
}

void game_facility_anonymous_142e910(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 32LL);
  if (v1 != 0 && *(_BYTE*)(v1 + 72) == 3) {
    game_149edd0(GameData_1a966f7);
  }
  else {
    game_149edd0(GameData_1ad7f83);
  }
}

_QWORD* game_facility_anonymous_142e940(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 257;
  }
  v1 = result[24];
  if ((*(_BYTE*)(v1 + 136) & 1) == 0) {
    result = *(_QWORD**)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (result == (_QWORD*)(v1 + 64)) {
      v2 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_9;
      }
      v2 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v2))((__int64)result);
  LABEL_9:
    v3 = *(_QWORD*)(v1 + 112);
    v4 = *(_QWORD*)(v1 + 120);
    if (v3 == v4) {
    LABEL_10:
      *(_QWORD*)(v1 + 120) = v3;
      return result;
    }
    while (1) {
      result = *(_QWORD**)(v4 - 16);
      *(_QWORD*)(v4 - 16) = 0;
      if ((_QWORD*)(v4 - 48) == result) {
        v6 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_14;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*result + v6))((__int64)result);
      result = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == result) {
        v5 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
    LABEL_14:
      v4 -= 64;
      if (v4 == v3) {
        goto LABEL_10;
      }
    }
  }
  return result;
}

void game_facility_anonymous_14317b0()
{
  int v0;
  int v1;
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  struct {
    __int16 v5;
    char v6;
  } v5_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      v2 = (__int64*)GameData_212dce8;
      v3 = (_QWORD*)SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
      if (v3 != nullptr) {
        v5_.v5 = 256;
        v5_.v6 = 1;
        SceneCharacter_1400a90(v3, (__int64)&v5_.v5);
      }
      v4 = (_QWORD*)SceneManager_138e5e0(*v2);
      if (v4 != nullptr) {
        v5_.v5 = 256;
        v5_.v6 = 1;
        SceneCharacter_1400a90(v4, (__int64)&v5_.v5);
      }
    }
  }
}

__int64 game_facility_anonymous_1465580(__int64 a1)
{
  return game_facility_anonymous_1465aa0(a1 + 16);
}

__int64 game_facility_anonymous_1465590(__int64 a1)
{
  return game_facility_anonymous_1465d90(a1 + 16);
}

__int64 game_facility_anonymous_1465aa0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22474c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22474c8) != 0) {
    GameData_2247288 = 3;
    GameData_22472d0 = 0;
    GameData_22472d8 = (__int64)GameRoutine_1466310;
    GameData_2247350 = 0;
    GameData_2247358 = (__int64)game_facility_anonymous_1466320_alt1;
    GameData_22472b0 = 0;
    GameData_22472b8 = 0;
    GameData_22472c0 = 0;
    GameData_2247290 = 0;
    GameData_2247298 = 0;
    GameData_22472a0 = 0;
    GameData_22472a8 = 0;
    GameData_22472e0 = 0;
    GameData_22472e8 = 0;
    GameData_22472c8 = 13;
    GameData_2247308 = 2;
    GameData_2247348 = 13;
    GameData_2247388 = 13;
    GameData_2247390 = 0;
    GameData_2247398 = (__int64)GameRoutine_1466380;
    GameData_2247408 = 2;
    GameData_2247448 = 13;
    GameData_22472f0 = 0;
    GameData_22472f8 = 0;
    GameData_2247300 = 0;
    GameData_2247330 = 0;
    GameData_2247338 = 0;
    GameData_2247340 = 0;
    GameData_2247328 = 0;
    GameData_2247318 = 0;
    GameData_2247320 = 0;
    GameData_2247310 = 0;
    GameData_2247360 = 0;
    GameData_2247368 = 0;
    GameData_2247370 = 0;
    GameData_2247378 = 0;
    GameData_2247380 = 0;
    GameData_22473a0 = 0;
    GameData_22473a8 = 0;
    GameData_22473b0 = 0;
    GameData_22473b8 = 0;
    GameData_22473c0 = 0;
    GameData_22473c8 = 12;
    GameData_22473f0 = 0;
    GameData_22473f8 = 0;
    GameData_2247400 = 0;
    GameData_22473e8 = 0;
    GameData_22473d8 = 0;
    GameData_22473e0 = 0;
    GameData_22473d0 = 0;
    GameData_2247410 = 0;
    GameData_2247418 = 0;
    GameData_2247420 = 0;
    GameData_2247428 = 1;
    GameData_2247430 = 0;
    GameData_2247438 = 0;
    GameData_2247440 = 0;
    GameData_2247450 = 0;
    GameData_2247458 = (__int64)GameRoutine_1466400;
    GameData_2247460 = 0;
    GameData_2247468 = 0;
    GameData_2247470 = 0;
    GameData_2247478 = 0;
    GameData_2247480 = 0;
    GameData_2247488 = 0;
    GameData_22474b0 = 0;
    GameData_22474b8 = 0;
    GameData_22474c0 = 0;
    GameData_22474a8 = 0;
    GameData_22474a0 = 0;
    GameData_2247498 = 0;
    GameData_2247490 = 0;
    __cxa_guard_release((__int64)&GameData_22474c8);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      264, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  v5 = GameData_2132488;
  *(_BYTE*)(v3 + 160) = 0;
  *(_BYTE*)(v3 + 164) = 0;
  *(_QWORD*)(v3 + 152) = v5 + 2;
  v6 = GameData_2130240[0];
  *(_BYTE*)(v3 + 176) = 0;
  *(_BYTE*)(v3 + 180) = 0;
  *(_QWORD*)(v3 + 168) = v6 + 2;
  GameRoutine_1418aa0();
  v7 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v8 = (__int64*)fw_memory_HeapManager_Allocate(*v2, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v8);
    v9 = *v8;
    *v7 = v8;
    (*(void (**)(__int64*))(v9 + 16))(v8);
  }
  v10 = GameData_2131448[0];
  *(_QWORD*)v3 = game_facility_anonymous_ProcSortiePlanButtomUpScene_vtable;
  *(_QWORD*)(v3 + 200) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 232) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_DWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 152) = ProcSortiePlanButtomUpScene_Destructor_1466a40_ptr;
  *(_QWORD*)(v3 + 184) = v10 + 2;
  *(_QWORD*)(v3 + 192) = v10 + 11;
  *(_DWORD*)(v3 + 248) = 1;
  return ProcInst_657850(v3, (__int64)&GameData_2247288,
                         "ProcSortiePlanButtomUpScene", 1, a1);
}

__int64 game_facility_anonymous_1465d90(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2247710,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2247710) != 0) {
    GameData_22474d0 = 3;
    GameData_2247518 = 0;
    GameData_2247520 = (__int64)GameRoutine_1466dd0;
    GameData_2247598 = 0;
    GameData_22475a0 = (__int64)game_facility_anonymous_1466de0_alt1;
    GameData_22474f8 = 0;
    GameData_2247500 = 0;
    GameData_2247508 = 0;
    GameData_22474d8 = 0;
    GameData_22474e0 = 0;
    GameData_22474e8 = 0;
    GameData_22474f0 = 0;
    GameData_2247528 = 0;
    GameData_2247530 = 0;
    GameData_2247510 = 13;
    GameData_2247550 = 2;
    GameData_2247590 = 13;
    GameData_22475d0 = 13;
    GameData_22475d8 = 0;
    GameData_22475e0 = (__int64)GameRoutine_1466e40;
    GameData_2247650 = 2;
    GameData_2247690 = 13;
    GameData_2247538 = 0;
    GameData_2247540 = 0;
    GameData_2247548 = 0;
    GameData_2247578 = 0;
    GameData_2247580 = 0;
    GameData_2247588 = 0;
    GameData_2247570 = 0;
    GameData_2247560 = 0;
    GameData_2247568 = 0;
    GameData_2247558 = 0;
    GameData_22475a8 = 0;
    GameData_22475b0 = 0;
    GameData_22475b8 = 0;
    GameData_22475c0 = 0;
    GameData_22475c8 = 0;
    GameData_22475e8 = 0;
    GameData_22475f0 = 0;
    GameData_22475f8 = 0;
    GameData_2247600 = 0;
    GameData_2247608 = 0;
    GameData_2247610 = 12;
    GameData_2247638 = 0;
    GameData_2247640 = 0;
    GameData_2247648 = 0;
    GameData_2247630 = 0;
    GameData_2247620 = 0;
    GameData_2247628 = 0;
    GameData_2247618 = 0;
    GameData_2247658 = 0;
    GameData_2247660 = 0;
    GameData_2247668 = 0;
    GameData_2247670 = 1;
    GameData_2247678 = 0;
    GameData_2247680 = 0;
    GameData_2247688 = 0;
    GameData_2247698 = 0;
    GameData_22476a0 = (__int64)GameRoutine_1466ec0;
    GameData_22476a8 = 0;
    GameData_22476b0 = 0;
    GameData_22476b8 = 0;
    GameData_22476c0 = 0;
    GameData_22476c8 = 0;
    GameData_22476d0 = 0;
    GameData_22476f8 = 0;
    GameData_2247700 = 0;
    GameData_2247708 = 0;
    GameData_22476f0 = 0;
    GameData_22476e8 = 0;
    GameData_22476e0 = 0;
    GameData_22476d8 = 0;
    __cxa_guard_release((__int64)&GameData_2247710);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      264, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  v5 = GameData_2132488;
  *(_BYTE*)(v3 + 160) = 0;
  *(_BYTE*)(v3 + 164) = 0;
  *(_QWORD*)(v3 + 152) = v5 + 2;
  v6 = GameData_2130240[0];
  *(_BYTE*)(v3 + 176) = 0;
  *(_BYTE*)(v3 + 180) = 0;
  *(_QWORD*)(v3 + 168) = v6 + 2;
  GameRoutine_1418aa0();
  v7 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v8 = (__int64*)fw_memory_HeapManager_Allocate(*v2, 336, 16, 0);
    game_facility_SceneManager_SceneManager((__int64)v8);
    v9 = *v8;
    *v7 = v8;
    (*(void (**)(__int64*))(v9 + 16))(v8);
  }
  v10 = GameData_2131440[0];
  *(_QWORD*)v3 = game_facility_anonymous_ProcSortiePlanTrainingScene_vtable;
  *(_QWORD*)(v3 + 200) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 232) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_BYTE*)(v3 + 248) = 0;
  *(_DWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 152) = ProcSortiePlanTrainingScene_Destructor_1467280_ptr;
  *(_QWORD*)(v3 + 184) = v10 + 2;
  *(_QWORD*)(v3 + 192) = v10 + 11;
  return ProcInst_657850(v3, (__int64)&GameData_22474d0,
                         "ProcSortiePlanTrainingScene", 1, a1);
}

__int64 game_facility_anonymous_1466320(__int64 result)
{
  __int64 v3;
  signed int v4;
  _WORD v5[2];

  v3 = *(_QWORD*)(result + 200);
  v4 = *(_DWORD*)(result + 256);
  if (v4 < (int)(-1431655765 *
                 ((unsigned __int64)(*(_QWORD*)(result + 208) - v3) >> 5))) {
    LOBYTE(v5[1]) = 0;
    v5[0] = 1;
    return GameRoutine_7fa250(result, (__int64*)(v3 + 96LL * v4), (__int64)v5);
  }
  return result;
}

__int64 game_facility_anonymous_1466de0(__int64 result)
{
  __int64 v3;
  signed int v4;
  _WORD v5[2];

  v3 = *(_QWORD*)(result + 200);
  v4 = *(_DWORD*)(result + 256);
  if (v4 < (int)(-1431655765 *
                 ((unsigned __int64)(*(_QWORD*)(result + 208) - v3) >> 5))) {
    LOBYTE(v5[1]) = 0;
    v5[0] = 1;
    return GameRoutine_7fa250(result, (__int64*)(v3 + 96LL * v4), (__int64)v5);
  }
  return result;
}

__int64 game_facility_anonymous_147a4a0(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  unsigned int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  float v12;
  __int64 v13;
  __int64** v14;
  __int64** v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  bool v20;
  float v21;

  if (GameData_21c9718 != 0) {
    v1 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    else {
      v2 = 0;
    }
    v5 = GameData_21c9718 + 72 + 136LL * v2;
    v6 = *(__int64**)v5;
    v7 = *(__int64**)(v5 + 8);
    if (v6 == v7) {
      v12 = 0x0.0p+0f;
      if (game_GameModeData_instance_ != 0) {
      LABEL_16:
        v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
    }
    else {
      v8 = 0;
      do {
        v9 = *v6++;
        v10 = *(unsigned __int8*)(*(_QWORD*)v9 + 113LL);
        if (*(_BYTE*)(*(_QWORD*)v9 + 112LL) == 7 & v10 == 4) {
          ++v8;
        }
      } while (v6 != v7);
      v12 = vcvts_n_f32_u32(v8, 1u);
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_16;
      }
    }
    v13 = GameData_21c9718 + 72 + 136LL * v1;
    v14 = *(__int64***)v13;
    v15 = *(__int64***)(v13 + 8);
    if (v14 == v15) {
      v21 = 0x0.0p+0f;
    }
    else {
      v16 = 0;
      do {
        v17 = **v14;
        v18 = *(unsigned __int8*)(v17 + 112);
        v19 = *(unsigned __int8*)(v17 + 113);
        v20 = v18 == 7 & v19 == 4;
        if (v20 && *((_BYTE*)*v14 + 9) == 4) {
          ++v16;
        }
        ++v14;
      } while (v14 != v15);
      v21 = (float)v16;
    }
    v3 = GameData_21f3ff8;
    if (GameData_21f3ff8 != 0) {
      if (v12 > v21) {
        v4 = 1;
      }
      else {
        v4 = 5;
      }
      goto LABEL_36;
    }
    return GameRoutine_1479fc0(a1);
  }
  v3 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v4 = 1;
  LABEL_36:
    *(_DWORD*)(v3 + 12) = v4;
  }
  return GameRoutine_1479fc0(a1);
}

__int64 game_facility_anonymous_1495ef0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 184) + 32LL);
  if (*(_BYTE*)(v1 + 66) != 0) {
    v2 = result;
    llvm_libcxx_21_libcxx_include___functional_1795980(
        result, 0, *(const char**)(v1 + 32));
    v3 = *(_QWORD*)(v2 + 192);
    v5_.v5[0] = GameData_2043bc8;
    v5_.v6 = v5_.v5;
    GameRoutine_1952d00(v3, 0, (__int64)v5_.v5);
    result = (__int64)v5_.v6;
    if (v5_.v6 == v5_.v5) {
      v4 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5_.v6 + v4))((__int64)v5_.v6);
  }
  return result;
}

__int64 game_facility_anonymous_1727be0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7[2];

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1104, 16, 0);
  v7[0] = 0;
  v7[1] = 0;
  GameRoutine_1661600((__int64)v2, 9, 3, v7);
  *v2 = game_facility_anonymous_ProcObeliskHero3Menu_vtable;
  v2[22] = game_menu_MenuInput_InputUnknown00_ptr_20b2960;
  v2[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20b2a30;
  ProcInst_657850((__int64)v2, (__int64)GameData_212c730,
                  "ProcObeliskHero3Menu", 1, a1);
  v4 = (_QWORD*)v2[32];
  v3 = (_QWORD*)v2[33];
  v2[42] = 0;
  while (v4 != v3) {
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
      v3 = (_QWORD*)v2[33];
    }
    ++v4;
  }
  v5 = v2[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    v2[43] = 0;
  }
  v2[33] = v2[32];
  v2[30] = v2[29];
  (*(void (**)(_QWORD*))(*v2 + 1024LL))(v2);
  return (*(__int64 (**)(_QWORD*))(*v2 + 1032LL))(v2);
}

__int64 game_facility_anonymous_1966da0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 184) == 1) {
    return (__int64)game_facility_anonymous_196a690(a1);
  }
  return a1;
}

char* game_facility_anonymous_196a690(__int64 a1)
{
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  char* result;
  char* v8;
  __int64 v9;

  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v5 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v2 + 1) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  result = game_util_Format("MID_LGV_Divination_Start_%s_m01",
                            GameData_211b388[v6 & 3]);
  if (*GameData_212d460[0] == 0) {
    v8 = result;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v9, v8, nullptr);
    return (char*)ProcInst_657850(v9, (__int64)GameData_2130228, "talk::Seq", 1,
                                  a1);
  }
  return result;
}

void game_facility_anonymous_196ace0(__int64 a1, unsigned __int8 a2)
{
  char* v3;
  int v4;
  __int64 v6;
  __int64 v7;
  struct {
    _WORD v8[8];
    char* v9;
  } v8_;

  v8_.v8[0] = 0;
  if (a2 <= 3u) {
    v3 = (char*)v8_.v8 + 1;
    GameRoutine_60a020((__int64)v8_.v8, GameData_211b3e8[a2]);
    v4 = v8_.v8[0] & 1;
    if ((v8_.v8[0] & 1) != 0) {
      v3 = v8_.v9;
    }
    if (*GameData_212d460[0] == 0 & v3 != nullptr) {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v6, v3, nullptr);
      ProcInst_657850(v6, (__int64)GameData_2130228, "talk::Seq", 1, a1);
      v4 = v8_.v8[0] & 1;
    }
    if (v4 != 0 && v8_.v9 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    (__int64)v8_.v9);
    }
  }
}

__int64 game_facility_anonymous_196b1e0(__int64 a1, _QWORD* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22704d0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22704d0) != 0) {
    GameData_226ffd0 = 18;
    GameData_226fff8 = 0;
    GameData_2270000 = 0;
    GameData_2270008 = 0;
    GameData_226ffd8 = 0;
    GameData_226ffe0 = 0;
    GameData_226ffe8 = 0;
    GameData_226fff0 = 0;
    GameData_2270038 = 0;
    GameData_2270010 = 3;
    GameData_2270040 = 0;
    GameData_2270048 = 0;
    GameData_2270018 = 0;
    GameData_2270020 = 0;
    GameData_2270028 = 0;
    GameData_2270030 = 0;
    GameData_2270050 = 8;
    GameData_2270098 = 0;
    GameData_22700a0 = (__int64)game_facility_anonymous_196c040_alt1;
    GameData_2270158 = 0;
    GameData_2270160 = (__int64)game_facility_anonymous_196c310_alt1;
    GameData_2270118 = 0;
    GameData_2270120 = (__int64)game_facility_anonymous_196c0e0;
    GameData_2270260 = (__int64)game_facility_anonymous_196c0e0;
    GameData_2270070 = 0;
    GameData_2270078 = 0;
    GameData_2270080 = 0;
    GameData_2270088 = 0;
    GameData_22700a8 = 0;
    GameData_22700b0 = 0;
    GameData_22700b8 = 0;
    GameData_22700d0 = 2;
    GameData_2270198 = 0;
    GameData_22701a0 = (__int64)game_facility_anonymous_196c360_alt1;
    GameData_2270210 = 2;
    GameData_2270330 = 2;
    GameData_2270350 = 2;
    GameData_2270370 = 2;
    GameData_22700c0 = 0;
    GameData_22700c8 = 0;
    GameData_22700f8 = 0;
    GameData_2270100 = 0;
    GameData_2270108 = 0;
    GameData_22700f0 = 0;
    GameData_22700e0 = 0;
    GameData_22700e8 = 0;
    GameData_22700d8 = 0;
    GameData_2270128 = 0;
    GameData_2270130 = 0;
    GameData_2270138 = 0;
    GameData_2270140 = 0;
    GameData_2270148 = 0;
    GameData_2270168 = 0;
    GameData_2270170 = 0;
    GameData_2270178 = 0;
    GameData_2270180 = 0;
    GameData_2270188 = 0;
    GameData_22701a8 = 0;
    GameData_22701b0 = 0;
    GameData_22701b8 = 0;
    GameData_22701c0 = 0;
    GameData_22701c8 = 0;
    GameData_22701d0 = 12;
    GameData_22701f8 = 0;
    GameData_2270200 = 0;
    GameData_2270208 = 0;
    GameData_22701f0 = 0;
    GameData_2270058 = 0;
    GameData_2270060 = (__int64)GameData_212d298;
    GameData_22701e8 = 0;
    GameData_22701e0 = 0;
    GameData_22701d8 = 0;
    GameData_2270218 = 0;
    GameData_2270220 = 0;
    GameData_2270228 = 0;
    GameData_2270230 = 1;
    GameData_2270238 = 0;
    GameData_2270240 = 0;
    GameData_2270248 = 0;
    GameData_2270090 = 13;
    GameData_2270110 = 13;
    GameData_2270150 = 13;
    GameData_2270190 = 13;
    GameData_2270250 = 13;
    GameData_2270258 = 0;
    GameData_2270268 = 0;
    GameData_2270270 = 0;
    GameData_2270278 = 0;
    GameData_2270280 = 0;
    GameData_2270288 = 0;
    GameData_2270290 = 21;
    GameData_2270298 = 0;
    GameData_22702a0 = (__int64)game_facility_anonymous_196c3c0;
    GameData_22702a8 = 0;
    GameData_22702b0 = 0;
    GameData_22702b8 = 0;
    GameData_22702c0 = 0;
    GameData_22702c8 = 0;
    GameData_22702d0 = 21;
    GameData_22702d8 = 0;
    GameData_22702e0 = (__int64)game_facility_anonymous_196c3c0;
    GameData_22702e8 = 0;
    GameData_22702f0 = 1;
    GameData_22702f8 = 0;
    GameData_2270300 = 0;
    GameData_2270308 = 0;
    GameData_2270310 = 12;
    GameData_2270328 = 0;
    GameData_2270320 = 0;
    GameData_2270318 = 0;
    GameData_2270338 = 0;
    GameData_2270340 = 0;
    GameData_2270348 = 0;
    GameData_2270358 = 0;
    GameData_2270360 = 0;
    GameData_2270368 = 0;
    GameData_2270378 = 0;
    GameData_2270380 = 0;
    GameData_2270388 = 0;
    GameData_2270390 = 10;
    GameData_2270398 = 0;
    GameData_22703d0 = 13;
    GameData_22703b0 = 0;
    GameData_22703b8 = 0;
    GameData_22703c0 = 0;
    GameData_22703c8 = 0;
    GameData_22703d8 = 0;
    GameData_22703e0 = (__int64)game_facility_anonymous_196c560_alt1;
    GameData_22703e8 = 0;
    GameData_22703f0 = 0;
    GameData_22703f8 = 0;
    GameData_2270400 = 0;
    GameData_2270408 = 0;
    GameData_2270410 = 3;
    GameData_22703a0 = (__int64)GameData_21324d8;
    GameData_2270438 = 0;
    GameData_2270440 = 0;
    GameData_2270448 = 0;
    GameData_2270430 = 0;
    GameData_2270428 = 0;
    GameData_2270420 = 0;
    GameData_2270418 = 0;
    GameData_2270450 = 8;
    GameData_2270458 = 0;
    GameData_2270470 = 0;
    GameData_2270478 = 0;
    GameData_2270480 = 0;
    GameData_2270488 = 0;
    GameData_2270490 = 0;
    GameData_22704b8 = 0;
    GameData_22704c0 = 0;
    GameData_22704c8 = 0;
    GameData_2270498 = 0;
    GameData_22704a0 = 0;
    GameData_22704a8 = 0;
    GameData_22704b0 = 0;
    GameData_2270460 = (__int64)GameData_212c710[0];
    __cxa_guard_release((__int64)&GameData_22704d0);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      272, 16, 0);
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
  *(_QWORD*)v5 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(v5 + 152) = GameData_211b678;
  v12 = GameData_212dce0[0];
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 184) = v12 + 16;
  *(_QWORD*)(v5 + 192) = 0;
  v14 = a2[1];
  v13 = a2[2];
  v15 = v13 - v14;
  if (v13 != v14) {
    if ((v15 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60();
    }
    v16 = fw_memory_HeapManager_Allocate(*v4, v13 - v14, 16, 0);
    v17 = v16 + v15;
    *(_QWORD*)(v5 + 192) = v16;
    *(_QWORD*)(v5 + 200) = v16;
    *(_QWORD*)(v5 + 208) = v16 + v15;
    GameRoutine_1a0b950(v16, v14, v15);
    *(_QWORD*)(v5 + 200) = v17;
  }
  v18 = a2[7];
  v19 = *(_QWORD*)((char*)a2 + 61);
  *(_QWORD*)(v5 + 232) = a2[6];
  *(_QWORD*)(v5 + 240) = v18;
  v21 = a2[4];
  v20 = a2[5];
  *(_QWORD*)(v5 + 245) = v19;
  *(_QWORD*)(v5 + 256) = 1;
  *(_QWORD*)(v5 + 216) = v21;
  *(_QWORD*)(v5 + 224) = v20;
  *(_DWORD*)(v5 + 264) = 2;
  return ProcInst_657850(v5, (__int64)&GameData_226ffd0, "ProcConversation", 1,
                         a1);
}

__int64 game_facility_anonymous_196c040(__int64 result)
{
  int v1;
  int v2;
  int v3;
  int v5;
  __int64 v6;
  __int16 v7;

  v1 = *(_DWORD*)(result + 248);
  if (v1 < 0) {
    v5 = 0;
    v6 = *(_QWORD*)(result + 8);
    if (v6 != 0) {
      goto LABEL_15;
    }
  }
  else {
    v2 = *(_DWORD*)(result + 260);
    v3 = *(_DWORD*)(result + 264);
    *(_DWORD*)(result + 256) = v1;
    if (v2 >= v3) {
      v2 = 0;
      *(_QWORD*)(result + 260) = 0x100000000LL;
      v3 = 1;
    }
    if (v1 > v3 | v2 > v1) {
      *(_DWORD*)(result + 256) = v2;
    }
    v5 = 1;
    v6 = *(_QWORD*)(result + 8);
    if (v6 != 0) {
      while (1) {
      LABEL_15:
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == v5) {
            v7 = *(_WORD*)(result + 136);
            *(_QWORD*)(result + 16) = v6;
            *(_WORD*)(result + 136) = v7 & 0xFF7F;
            return result;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          return result;
        }
        v6 += 64;
      }
    }
  }
  return result;
}

_DWORD* game_facility_anonymous_196c310(_DWORD* result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = result[66];
  v2 = result[65];
  v3 = 1 % (v1 - v2 + 1);
  v4 = result[64];
  v5 = v1 - v4;
  v6 = v4 + v3;
  v7 = v3 + v2 + ~v5;
  if (v5 >= v3) {
    v8 = v6;
  }
  else {
    v8 = v7;
  }
  result[64] = v8;
  return result;
}

__int64 game_facility_anonymous_196c360(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(result + 256) == 1 & v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 2) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

void game_facility_anonymous_196c560()
{
  int v0;
  int v1;
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  struct {
    __int16 v6;
    char v7;
  } v6_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      v2 = (__int64*)GameData_212dce8;
      v3 = (_QWORD*)SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
      if (v3 != nullptr) {
        v6_.v6 = 256;
        v6_.v7 = 1;
        SceneCharacter_1400a90(v3, (__int64)&v6_.v6);
      }
      v4 = (_QWORD*)SceneManager_138e5e0(*v2);
      if (v4 != nullptr) {
        v6_.v6 = 256;
        v6_.v7 = 1;
        SceneCharacter_1400a90(v4, (__int64)&v6_.v6);
      }
      v5 = (_QWORD*)SceneManager_138e5e0(*v2);
      if (v5 != nullptr) {
        v6_.v6 = 256;
        v6_.v7 = 1;
        SceneCharacter_1400a90(v5, (__int64)&v6_.v6);
      }
    }
  }
}

__int64 game_facility_anonymous_197c090(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2271248,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2271248) != 0) {
    GameData_2270ac8 = 18;
    GameData_2270b50 = 0;
    GameData_2270b58 = (__int64)GameRoutine_197c650;
    GameData_2270af0 = 0;
    GameData_2270af8 = 0;
    GameData_2270b00 = 0;
    GameData_2270ad0 = 0;
    GameData_2270ad8 = 0;
    GameData_2270ae0 = 0;
    GameData_2270ae8 = 0;
    GameData_2270b08 = 3;
    GameData_2270b30 = 0;
    GameData_2270b38 = 0;
    GameData_2270b40 = 0;
    GameData_2270b10 = 0;
    GameData_2270b18 = 0;
    GameData_2270b20 = 0;
    GameData_2270b28 = 0;
    GameData_2270b48 = 13;
    GameData_2270b60 = 0;
    GameData_2270b68 = 0;
    GameData_2270b70 = 0;
    GameData_2270b78 = 0;
    GameData_2270b80 = 0;
    GameData_2270b88 = 8;
    GameData_2270bb0 = 0;
    GameData_2270bb8 = 0;
    GameData_2270bc0 = 0;
    GameData_2270ba8 = 0;
    GameData_2270b98 = 0;
    GameData_2270ba0 = 0;
    GameData_2270b90 = (__int64)game_hub_d856f0_ptr_212dd38[0];
    GameData_2270bc8 = 19;
    GameData_2270bf0 = 0;
    GameData_2270bf8 = 0;
    GameData_2270c00 = 0;
    GameData_2270c08 = 10;
    GameData_2270bd0 = 0;
    GameData_2270bd8 = (__int64)GameData_212d060[0];
    GameData_2270be8 = 500;
    GameData_2270c28 = 0;
    GameData_2270c30 = 0;
    GameData_2270c38 = 0;
    GameData_2270c40 = 0;
    GameData_2270c48 = 8;
    GameData_2270c10 = 0;
    GameData_2270c18 = (__int64)GameData_212c720;
    GameData_2270c88 = 13;
    GameData_2270f48 = 13;
    GameData_2270d58 = (__int64)game_facility_anonymous_197c740;
    GameData_2270d98 = (__int64)game_facility_anonymous_197c740;
    GameData_2270c68 = 0;
    GameData_2270c70 = 0;
    GameData_2270c78 = 0;
    GameData_2270c80 = 0;
    GameData_2270ca0 = 0;
    GameData_2270ca8 = 0;
    GameData_2270cb0 = 0;
    GameData_2270cb8 = 0;
    GameData_2270cc0 = 0;
    GameData_2270cf0 = 0;
    GameData_2270cf8 = 0;
    GameData_2270d00 = 0;
    GameData_2270ce8 = 0;
    GameData_2270ce0 = 0;
    GameData_2270cd8 = 0;
    GameData_2270cd0 = 0;
    GameData_2270d08 = 2;
    GameData_2270d30 = 0;
    GameData_2270d38 = 0;
    GameData_2270d40 = 0;
    GameData_2270d10 = 0;
    GameData_2270d18 = 0;
    GameData_2270d20 = 0;
    GameData_2270d28 = 0;
    GameData_2270d48 = 21;
    GameData_2270d50 = 0;
    GameData_2270d60 = 0;
    GameData_2270d68 = 0;
    GameData_2270d70 = 0;
    GameData_2270d78 = 0;
    GameData_2270d80 = 0;
    GameData_2270d88 = 21;
    GameData_2270d90 = 0;
    GameData_2270da0 = 0;
    GameData_2270db0 = 0;
    GameData_2270db8 = 0;
    GameData_2270dc0 = 0;
    GameData_2270de0 = 0;
    GameData_2270dd8 = 0;
    GameData_2270dd0 = 0;
    GameData_2270de8 = 2;
    GameData_2270df0 = 0;
    GameData_2270df8 = 0;
    GameData_2270e00 = 0;
    GameData_2270e08 = 2;
    GameData_2270e10 = 0;
    GameData_2270e18 = 0;
    GameData_2270e20 = 0;
    GameData_2270e30 = 0;
    GameData_2270e38 = 0;
    GameData_2270e40 = 0;
    GameData_2270e48 = 21;
    GameData_2270e50 = 0;
    GameData_2270e58 = (__int64)game_facility_anonymous_197c920;
    GameData_2270e60 = 0;
    GameData_2270e68 = 0;
    GameData_2270e70 = 0;
    GameData_2270e78 = 0;
    GameData_2270e80 = 0;
    GameData_2270e88 = 21;
    GameData_2270e90 = 0;
    GameData_2270e98 = (__int64)game_facility_anonymous_197c920;
    GameData_2270ea0 = 0;
    GameData_2270eb0 = 0;
    GameData_2270eb8 = 0;
    GameData_2270ec0 = 0;
    GameData_2270ee0 = 0;
    GameData_2270ed8 = 0;
    GameData_2270ed0 = 0;
    GameData_2270ee8 = 2;
    GameData_2270ef0 = 0;
    GameData_2270ef8 = 0;
    GameData_2270f00 = 0;
    GameData_2270f08 = 2;
    GameData_2270f10 = 0;
    GameData_2270f18 = 0;
    GameData_2270f20 = 0;
    GameData_2270f28 = 2;
    GameData_2270f30 = 0;
    GameData_2270f38 = 0;
    GameData_2270f40 = 0;
    GameData_2270f50 = 0;
    GameData_2270f60 = 0;
    GameData_2270f68 = 0;
    GameData_2270f70 = 0;
    GameData_2270f78 = 0;
    GameData_2270f80 = 0;
    GameData_2270fa0 = 0;
    GameData_2270f98 = 0;
    GameData_2270f90 = 0;
    GameData_2270fb0 = 0;
    GameData_2270fb8 = 0;
    GameData_2270fc0 = 0;
    GameData_2270fc8 = 2;
    GameData_2270fd0 = 0;
    GameData_2270fd8 = 0;
    GameData_2270fe0 = 0;
    GameData_2270fe8 = 3;
    GameData_2270ff0 = 0;
    GameData_2270ff8 = 0;
    GameData_2271000 = 0;
    GameData_2271008 = 10;
    GameData_2271010 = 0;
    GameData_2270f58 = (__int64)game_facility_anonymous_197cac0_alt1;
    GameData_2270da8 = 1;
    GameData_2270e28 = 1;
    GameData_2270ea8 = 1;
    GameData_2270fa8 = 4;
    GameData_2270c50 = 0;
    GameData_2270c58 = (__int64)GameData_212d298;
    GameData_2270c90 = 0;
    GameData_2270c98 = (__int64)GameRoutine_197c6e0;
    GameData_2270cc8 = 12;
    GameData_2270dc8 = 12;
    GameData_2270ec8 = 12;
    GameData_2270f88 = 12;
    GameData_2271028 = 0;
    GameData_2271030 = 0;
    GameData_2271038 = 0;
    GameData_2271040 = 0;
    GameData_2271048 = 12;
    GameData_2271060 = 0;
    GameData_2271058 = 0;
    GameData_2271050 = 0;
    GameData_2271068 = 4;
    GameData_2271070 = 0;
    GameData_2271078 = 0;
    GameData_2271080 = 0;
    GameData_2271088 = 2;
    GameData_22710a0 = 0;
    GameData_2271098 = 0;
    GameData_2271090 = 0;
    GameData_22710a8 = 4;
    GameData_22710b0 = 0;
    GameData_22710b8 = 0;
    GameData_22710c0 = 0;
    GameData_22710c8 = 19;
    GameData_2271018 = (__int64)GameData_21324d8;
    GameData_22710d0 = 0;
    GameData_22710e8 = 500;
    GameData_22710f0 = 0;
    GameData_22710f8 = 0;
    GameData_2271100 = 0;
    GameData_2271108 = 10;
    GameData_2271110 = 0;
    GameData_2271118 = (__int64)GameData_212c720;
    GameData_2271128 = 0;
    GameData_2271130 = 0;
    GameData_2271138 = 0;
    GameData_2271140 = 0;
    GameData_2271148 = 8;
    GameData_22710d8 = (__int64)game_80a680_ptr_212c6d0[0];
    GameData_2271170 = 0;
    GameData_2271178 = 0;
    GameData_2271180 = 0;
    GameData_2271168 = 0;
    GameData_2271160 = 0;
    GameData_2271158 = 0;
    GameData_2271188 = 8;
    GameData_2271190 = 0;
    GameData_2271150 = (__int64)ProcHubSeq_d85570_ptr_212dd48[0];
    GameData_22711a8 = 0;
    GameData_22711b0 = 0;
    GameData_22711b8 = 0;
    GameData_22711c0 = 0;
    GameData_22711c8 = 3;
    GameData_22711f0 = 0;
    GameData_22711f8 = 0;
    GameData_2271200 = 0;
    GameData_2271208 = 0;
    GameData_2271230 = 0;
    GameData_2271238 = 0;
    GameData_2271240 = 0;
    GameData_22711e8 = 0;
    GameData_22711e0 = 0;
    GameData_22711d8 = 0;
    GameData_22711d0 = 0;
    GameData_2271228 = 0;
    GameData_2271220 = 0;
    GameData_2271218 = 0;
    GameData_2271210 = 0;
    GameData_2271198 = (__int64)GameData_212c710[0];
    __cxa_guard_release((__int64)&GameData_2271248);
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
  *(_QWORD*)v5 = game_facility_ProcFacilityScene_Destroy_ProcFacilityScene_ptr;
  *(_QWORD*)(v5 + 152) = ProcWork_Destructor_ptr;
  return ProcInst_657850(v5, (__int64)&GameData_2270ac8, "ProcWork", 1, a1);
}

__int64 game_facility_anonymous_197cac0(__int64 result)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;

  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    v3 = v2 & v1;
    v4 = *(_QWORD*)(result + 8);
    if (v3 == 0 & v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 3) {
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
  }
  return result;
}

#pragma GCC visibility pop
