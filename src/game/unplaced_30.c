#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_dc0960(PSEUDO_X8, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_1378560(__int64, _QWORD*, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_fdb730(__int64, __int64*);
__int64 GameRoutine_fdbe30(__int64, __int64*);
__int64 GameRoutine_fdc080(__int64, __int64*);
__int64 GameRoutine_fdc660(__int64, __int64*);
__int64 GameRoutine_fe1260();
__int64 GameSituation_906320(__int64, __int64*, __int64);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 SpecialSeqProcs_fdb330(__int64, __int64*);
__int64 SpecialSeqProcs_fdba50(__int64, __int64*);
__int64 SpecialSeqProcs_fdc2d0(__int64, __int64*);
__int64 SpecialSeqProcs_fdc8b0(__int64, __int64*);
__int64 SpecialSeqProcs_fdf8e0();
__int64 SpecialSeqProcs_fdfb40();
__int64 SpecialSeqProcs_fdfdc0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_1195900(__int64, __int64, __int64, unsigned __int64, __int64*,
                     __int64);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_fdccb0();
__int64 game_fdce40();
__int64 game_fdd0d0();
__int64 game_fdd260_alt1();
__int64 game_fdd2c0();
__int64 game_menu_anonymous_fdd4e0();
__int64 game_menu_anonymous_fdd660();
__int64 game_menu_anonymous_fdd870();
__int64 game_menu_anonymous_fdda00();
__int64 game_menu_anonymous_fdda60();
__int64 game_menu_anonymous_fddbe0();
__int64 game_menu_anonymous_fddc40();
__int64 game_menu_anonymous_fdddc0();
__int64 game_menu_anonymous_fddec0();
__int64 game_menu_anonymous_fde060();
__int64 game_menu_anonymous_fde2a0();
__int64 game_menu_anonymous_fde550();
__int64 game_menu_anonymous_fde6e0();
__int64 game_menu_anonymous_fde990();
__int64 game_menu_anonymous_fdeb20();
__int64 game_menu_anonymous_fdecc0();
__int64 game_menu_anonymous_fdef70();
__int64 game_menu_anonymous_fdf100();
__int64 game_menu_anonymous_fdf3b0();
__int64 game_menu_anonymous_fdf540();
__int64 game_menu_anonymous_fdf6c0();
__int64 game_menu_anonymous_fdf9b0();
__int64 game_menu_anonymous_fdfc30();
__int64 game_menu_anonymous_fdfeb0();
__int64 game_menu_anonymous_fe0040();
__int64 game_menu_anonymous_fe0140();
__int64 game_menu_anonymous_fe02c0();
__int64 game_menu_anonymous_fe0360();
__int64 game_menu_anonymous_fe0580();
__int64 game_menu_anonymous_fe07b0();
__int64 game_menu_anonymous_fe0960();
__int64 game_menu_anonymous_fe0b70();
__int64 game_menu_anonymous_fe0d20();
__int64 save_18d3a00(__int64);
__int64 save_Task_Mount(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
char* game_ffe140(unsigned int, const char*);
const char* GameRoutine_8a1ae0(const char* result);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_212e1f0;
extern _UNKNOWN GameData_1a91e66;
extern _UNKNOWN GameData_2000158;
extern _UNKNOWN GameData_222e7b0;
extern _UNKNOWN GameData_222ec38;
extern _UNKNOWN GameData_222f4c0;
extern _UNKNOWN GameData_222f908;
extern _UNKNOWN GameData_222fc50;
extern _UNKNOWN GameData_222ff98;
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*GameData_1fed708[3])();
extern __int64 (*GameData_20b12b8[])();
extern __int64 (*ProcTrainingMotion_Destructor_197bc00_ptr[])();
extern __int64 (*ProcTrainingMotion_Destructor_197bd40_ptr[])();
extern __int64 (*decltype_c81af0_ptr_1fed6f0[6])();
extern __int64 (*game_facility_anonymous_CancelMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_GazeBranchMenu_vtable[])();
extern __int64 (*game_facility_anonymous_GazeMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTrainingMotion_vtable[])();
extern __int64 (*game_facility_anonymous_ProcUnitSelectMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20b1388[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20e58d0[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20e6cd8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20ab028[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20e5800[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20e6c08[])();
extern __int64 (*game_menu__fe5ef0_ptr[])();
extern __int64 (*game_menu_anonymous_MajSeqProc_vtable[])();
extern __int64 (*game_menu_anonymous_ProcProcurement_vtable[])();
extern __int64 (*game_menu_anonymous_ProcQuestBoard_vtable[])();
extern __int64 (*game_menu_anonymous_TiaSeqProc_vtable[])();
extern __int64 (*game_menu_anonymous_VenSeqProc_vtable[])();
extern __int64 (*game_menu_anonymous_YanSeqProc_vtable[])();
extern __int64 (*game_menu_anonymous_ZacSeqProc_vtable[])();
extern __int64* GameData_212d6a8;
extern __int64* GameData_2131450[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d6e8;
extern __int64 GameData_212eb28;
extern __int64 GameData_2131678;
extern __int64 GameData_22190c0;
extern __int64 GameData_222e478;
extern __int64 GameData_222e480;
extern __int64 GameData_222e488;
extern __int64 GameData_222e498;
extern __int64 GameData_222e4a8;
extern __int64 GameData_222e4b8;
extern __int64 GameData_222e4c0;
extern __int64 GameData_222e4c8;
extern __int64 GameData_222e4d8;
extern __int64 GameData_222e4e8;
extern __int64 GameData_222e4f8;
extern __int64 GameData_222e500;
extern __int64 GameData_222e508;
extern __int64 GameData_222e518;
extern __int64 GameData_222e528;
extern __int64 GameData_222e538;
extern __int64 GameData_222e540;
extern __int64 GameData_222e548;
extern __int64 GameData_222e558;
extern __int64 GameData_222e568;
extern __int64 GameData_222e578;
extern __int64 GameData_222e580;
extern __int64 GameData_222e588;
extern __int64 GameData_222e598;
extern __int64 GameData_222e5a8;
extern __int64 GameData_222e5b8;
extern __int64 GameData_222e5c0;
extern __int64 GameData_222e5c8;
extern __int64 GameData_222e5d8;
extern __int64 GameData_222e5e8;
extern __int64 GameData_222e5f8;
extern __int64 GameData_222e600;
extern __int64 GameData_222e608;
extern __int64 GameData_222e618;
extern __int64 GameData_222e628;
extern __int64 GameData_222e638;
extern __int64 GameData_222e640;
extern __int64 GameData_222e648;
extern __int64 GameData_222e658;
extern __int64 GameData_222e668;
extern __int64 GameData_222e678;
extern __int64 GameData_222e680;
extern __int64 GameData_222e688;
extern __int64 GameData_222e698;
extern __int64 GameData_222e6a8;
extern __int64 GameData_222e6b8;
extern __int64 GameData_222e6c0;
extern __int64 GameData_222e6c8;
extern __int64 GameData_222e6d8;
extern __int64 GameData_222e6e8;
extern __int64 GameData_222e6f8;
extern __int64 GameData_222e700;
extern __int64 GameData_222e708;
extern __int64 GameData_222e718;
extern __int64 GameData_222e728;
extern __int64 GameData_222e738;
extern __int64 GameData_222e740;
extern __int64 GameData_222e748;
extern __int64 GameData_222e758;
extern __int64 GameData_222e768;
extern __int64 GameData_222e778;
extern __int64 GameData_222e780;
extern __int64 GameData_222e788;
extern __int64 GameData_222e798;
extern __int64 GameData_222e7a8;
extern __int64 GameData_222e7c0;
extern __int64 GameData_222e7c8;
extern __int64 GameData_222e7d0;
extern __int64 GameData_222e7e0;
extern __int64 GameData_222e7f0;
extern __int64 GameData_222e800;
extern __int64 GameData_222e808;
extern __int64 GameData_222e810;
extern __int64 GameData_222e820;
extern __int64 GameData_222e830;
extern __int64 GameData_222e840;
extern __int64 GameData_222e848;
extern __int64 GameData_222e850;
extern __int64 GameData_222e860;
extern __int64 GameData_222e870;
extern __int64 GameData_222e880;
extern __int64 GameData_222e888;
extern __int64 GameData_222e890;
extern __int64 GameData_222e8a0;
extern __int64 GameData_222e8b0;
extern __int64 GameData_222e8c0;
extern __int64 GameData_222e8c8;
extern __int64 GameData_222e8d0;
extern __int64 GameData_222e8e0;
extern __int64 GameData_222e8f0;
extern __int64 GameData_222e900;
extern __int64 GameData_222e908;
extern __int64 GameData_222e910;
extern __int64 GameData_222e920;
extern __int64 GameData_222e930;
extern __int64 GameData_222e940;
extern __int64 GameData_222e948;
extern __int64 GameData_222e950;
extern __int64 GameData_222e960;
extern __int64 GameData_222e970;
extern __int64 GameData_222e980;
extern __int64 GameData_222e988;
extern __int64 GameData_222e990;
extern __int64 GameData_222e9a0;
extern __int64 GameData_222e9b0;
extern __int64 GameData_222e9c0;
extern __int64 GameData_222e9c8;
extern __int64 GameData_222e9d0;
extern __int64 GameData_222e9e0;
extern __int64 GameData_222e9f0;
extern __int64 GameData_222ea00;
extern __int64 GameData_222ea08;
extern __int64 GameData_222ea10;
extern __int64 GameData_222ea20;
extern __int64 GameData_222ea30;
extern __int64 GameData_222ea40;
extern __int64 GameData_222ea48;
extern __int64 GameData_222ea50;
extern __int64 GameData_222ea60;
extern __int64 GameData_222ea70;
extern __int64 GameData_222ea80;
extern __int64 GameData_222ea88;
extern __int64 GameData_222ea90;
extern __int64 GameData_222eaa0;
extern __int64 GameData_222eab0;
extern __int64 GameData_222eac0;
extern __int64 GameData_222eac8;
extern __int64 GameData_222ead0;
extern __int64 GameData_222eae0;
extern __int64 GameData_222eaf0;
extern __int64 GameData_222eb00;
extern __int64 GameData_222eb08;
extern __int64 GameData_222eb10;
extern __int64 GameData_222eb20;
extern __int64 GameData_222eb30;
extern __int64 GameData_222eb40;
extern __int64 GameData_222eb48;
extern __int64 GameData_222eb50;
extern __int64 GameData_222eb60;
extern __int64 GameData_222eb70;
extern __int64 GameData_222eb80;
extern __int64 GameData_222eb88;
extern __int64 GameData_222eb90;
extern __int64 GameData_222eba0;
extern __int64 GameData_222ebb0;
extern __int64 GameData_222ebc0;
extern __int64 GameData_222ebc8;
extern __int64 GameData_222ebd0;
extern __int64 GameData_222ebe0;
extern __int64 GameData_222ebf0;
extern __int64 GameData_222ec00;
extern __int64 GameData_222ec08;
extern __int64 GameData_222ec10;
extern __int64 GameData_222ec20;
extern __int64 GameData_222ec30;
extern __int64 GameData_222ec48;
extern __int64 GameData_222ec50;
extern __int64 GameData_222ec58;
extern __int64 GameData_222ec68;
extern __int64 GameData_222ec78;
extern __int64 GameData_222ec88;
extern __int64 GameData_222ec90;
extern __int64 GameData_222ec98;
extern __int64 GameData_222eca8;
extern __int64 GameData_222ecb8;
extern __int64 GameData_222ecc8;
extern __int64 GameData_222ecd0;
extern __int64 GameData_222ecd8;
extern __int64 GameData_222ece8;
extern __int64 GameData_222ecf8;
extern __int64 GameData_222ed08;
extern __int64 GameData_222ed10;
extern __int64 GameData_222ed18;
extern __int64 GameData_222ed28;
extern __int64 GameData_222ed38;
extern __int64 GameData_222ed48;
extern __int64 GameData_222ed50;
extern __int64 GameData_222ed58;
extern __int64 GameData_222ed68;
extern __int64 GameData_222ed78;
extern __int64 GameData_222ed88;
extern __int64 GameData_222ed90;
extern __int64 GameData_222ed98;
extern __int64 GameData_222eda8;
extern __int64 GameData_222edb8;
extern __int64 GameData_222edc8;
extern __int64 GameData_222edd0;
extern __int64 GameData_222edd8;
extern __int64 GameData_222ede8;
extern __int64 GameData_222edf8;
extern __int64 GameData_222ee08;
extern __int64 GameData_222ee10;
extern __int64 GameData_222ee18;
extern __int64 GameData_222ee28;
extern __int64 GameData_222ee38;
extern __int64 GameData_222ee48;
extern __int64 GameData_222ee50;
extern __int64 GameData_222ee58;
extern __int64 GameData_222ee68;
extern __int64 GameData_222ee78;
extern __int64 GameData_222ee88;
extern __int64 GameData_222ee90;
extern __int64 GameData_222ee98;
extern __int64 GameData_222eea8;
extern __int64 GameData_222eeb8;
extern __int64 GameData_222eec8;
extern __int64 GameData_222eed0;
extern __int64 GameData_222eed8;
extern __int64 GameData_222eee8;
extern __int64 GameData_222eef8;
extern __int64 GameData_222ef08;
extern __int64 GameData_222ef10;
extern __int64 GameData_222ef18;
extern __int64 GameData_222ef28;
extern __int64 GameData_222ef38;
extern __int64 GameData_222ef48;
extern __int64 GameData_222ef50;
extern __int64 GameData_222ef58;
extern __int64 GameData_222ef68;
extern __int64 GameData_222ef78;
extern __int64 GameData_222ef88;
extern __int64 GameData_222ef90;
extern __int64 GameData_222ef98;
extern __int64 GameData_222efa8;
extern __int64 GameData_222efb8;
extern __int64 GameData_222efc8;
extern __int64 GameData_222efd0;
extern __int64 GameData_222efd8;
extern __int64 GameData_222efe8;
extern __int64 GameData_222eff8;
extern __int64 GameData_222f008;
extern __int64 GameData_222f010;
extern __int64 GameData_222f018;
extern __int64 GameData_222f028;
extern __int64 GameData_222f038;
extern __int64 GameData_222f048;
extern __int64 GameData_222f050;
extern __int64 GameData_222f058;
extern __int64 GameData_222f068;
extern __int64 GameData_222f078;
extern __int64 GameData_222f088;
extern __int64 GameData_222f090;
extern __int64 GameData_222f098;
extern __int64 GameData_222f0a8;
extern __int64 GameData_222f0b8;
extern __int64 GameData_222f0c8;
extern __int64 GameData_222f0d0;
extern __int64 GameData_222f0d8;
extern __int64 GameData_222f0e8;
extern __int64 GameData_222f0f8;
extern __int64 GameData_222f108;
extern __int64 GameData_222f110;
extern __int64 GameData_222f118;
extern __int64 GameData_222f128;
extern __int64 GameData_222f138;
extern __int64 GameData_222f148;
extern __int64 GameData_222f150;
extern __int64 GameData_222f158;
extern __int64 GameData_222f168;
extern __int64 GameData_222f178;
extern __int64 GameData_222f188;
extern __int64 GameData_222f190;
extern __int64 GameData_222f198;
extern __int64 GameData_222f1a8;
extern __int64 GameData_222f1b8;
extern __int64 GameData_222f1c8;
extern __int64 GameData_222f1d0;
extern __int64 GameData_222f1d8;
extern __int64 GameData_222f1e8;
extern __int64 GameData_222f1f8;
extern __int64 GameData_222f208;
extern __int64 GameData_222f210;
extern __int64 GameData_222f218;
extern __int64 GameData_222f228;
extern __int64 GameData_222f238;
extern __int64 GameData_222f248;
extern __int64 GameData_222f250;
extern __int64 GameData_222f258;
extern __int64 GameData_222f268;
extern __int64 GameData_222f278;
extern __int64 GameData_222f288;
extern __int64 GameData_222f290;
extern __int64 GameData_222f298;
extern __int64 GameData_222f2a8;
extern __int64 GameData_222f2b8;
extern __int64 GameData_222f2c8;
extern __int64 GameData_222f2d0;
extern __int64 GameData_222f2d8;
extern __int64 GameData_222f2e8;
extern __int64 GameData_222f2f8;
extern __int64 GameData_222f308;
extern __int64 GameData_222f310;
extern __int64 GameData_222f318;
extern __int64 GameData_222f328;
extern __int64 GameData_222f338;
extern __int64 GameData_222f348;
extern __int64 GameData_222f350;
extern __int64 GameData_222f358;
extern __int64 GameData_222f368;
extern __int64 GameData_222f378;
extern __int64 GameData_222f388;
extern __int64 GameData_222f390;
extern __int64 GameData_222f398;
extern __int64 GameData_222f3a8;
extern __int64 GameData_222f3b8;
extern __int64 GameData_222f3c8;
extern __int64 GameData_222f3d0;
extern __int64 GameData_222f3d8;
extern __int64 GameData_222f3e8;
extern __int64 GameData_222f3f8;
extern __int64 GameData_222f408;
extern __int64 GameData_222f410;
extern __int64 GameData_222f418;
extern __int64 GameData_222f428;
extern __int64 GameData_222f438;
extern __int64 GameData_222f448;
extern __int64 GameData_222f450;
extern __int64 GameData_222f458;
extern __int64 GameData_222f468;
extern __int64 GameData_222f478;
extern __int64 GameData_222f488;
extern __int64 GameData_222f490;
extern __int64 GameData_222f498;
extern __int64 GameData_222f4a8;
extern __int64 GameData_222f4b8;
extern __int64 GameData_222f4d0;
extern __int64 GameData_222f4d8;
extern __int64 GameData_222f4e0;
extern __int64 GameData_222f4f0;
extern __int64 GameData_222f500;
extern __int64 GameData_222f510;
extern __int64 GameData_222f518;
extern __int64 GameData_222f520;
extern __int64 GameData_222f530;
extern __int64 GameData_222f540;
extern __int64 GameData_222f550;
extern __int64 GameData_222f558;
extern __int64 GameData_222f560;
extern __int64 GameData_222f570;
extern __int64 GameData_222f580;
extern __int64 GameData_222f590;
extern __int64 GameData_222f598;
extern __int64 GameData_222f5a0;
extern __int64 GameData_222f5b0;
extern __int64 GameData_222f5c0;
extern __int64 GameData_222f5d0;
extern __int64 GameData_222f5d8;
extern __int64 GameData_222f5e0;
extern __int64 GameData_222f5f0;
extern __int64 GameData_222f600;
extern __int64 GameData_222f610;
extern __int64 GameData_222f618;
extern __int64 GameData_222f620;
extern __int64 GameData_222f630;
extern __int64 GameData_222f640;
extern __int64 GameData_222f650;
extern __int64 GameData_222f658;
extern __int64 GameData_222f660;
extern __int64 GameData_222f670;
extern __int64 GameData_222f680;
extern __int64 GameData_222f690;
extern __int64 GameData_222f698;
extern __int64 GameData_222f6a0;
extern __int64 GameData_222f6b0;
extern __int64 GameData_222f6c0;
extern __int64 GameData_222f6d0;
extern __int64 GameData_222f6d8;
extern __int64 GameData_222f6e0;
extern __int64 GameData_222f6f0;
extern __int64 GameData_222f700;
extern __int64 GameData_222f710;
extern __int64 GameData_222f718;
extern __int64 GameData_222f720;
extern __int64 GameData_222f730;
extern __int64 GameData_222f740;
extern __int64 GameData_222f750;
extern __int64 GameData_222f758;
extern __int64 GameData_222f760;
extern __int64 GameData_222f770;
extern __int64 GameData_222f780;
extern __int64 GameData_222f790;
extern __int64 GameData_222f798;
extern __int64 GameData_222f7a0;
extern __int64 GameData_222f7b0;
extern __int64 GameData_222f7c0;
extern __int64 GameData_222f7d0;
extern __int64 GameData_222f7d8;
extern __int64 GameData_222f7e0;
extern __int64 GameData_222f7f0;
extern __int64 GameData_222f800;
extern __int64 GameData_222f810;
extern __int64 GameData_222f818;
extern __int64 GameData_222f820;
extern __int64 GameData_222f830;
extern __int64 GameData_222f840;
extern __int64 GameData_222f850;
extern __int64 GameData_222f858;
extern __int64 GameData_222f860;
extern __int64 GameData_222f870;
extern __int64 GameData_222f880;
extern __int64 GameData_222f890;
extern __int64 GameData_222f898;
extern __int64 GameData_222f8a0;
extern __int64 GameData_222f8b0;
extern __int64 GameData_222f8c0;
extern __int64 GameData_222f8d0;
extern __int64 GameData_222f8d8;
extern __int64 GameData_222f8e0;
extern __int64 GameData_222f8f0;
extern __int64 GameData_222f900;
extern __int64 GameData_222f918;
extern __int64 GameData_222f920;
extern __int64 GameData_222f928;
extern __int64 GameData_222f938;
extern __int64 GameData_222f948;
extern __int64 GameData_222f958;
extern __int64 GameData_222f960;
extern __int64 GameData_222f968;
extern __int64 GameData_222f978;
extern __int64 GameData_222f988;
extern __int64 GameData_222f998;
extern __int64 GameData_222f9a0;
extern __int64 GameData_222f9a8;
extern __int64 GameData_222f9b8;
extern __int64 GameData_222f9c8;
extern __int64 GameData_222f9d8;
extern __int64 GameData_222f9e0;
extern __int64 GameData_222f9e8;
extern __int64 GameData_222f9f8;
extern __int64 GameData_222fa08;
extern __int64 GameData_222fa18;
extern __int64 GameData_222fa20;
extern __int64 GameData_222fa28;
extern __int64 GameData_222fa38;
extern __int64 GameData_222fa48;
extern __int64 GameData_222fa58;
extern __int64 GameData_222fa60;
extern __int64 GameData_222fa68;
extern __int64 GameData_222fa78;
extern __int64 GameData_222fa88;
extern __int64 GameData_222fa98;
extern __int64 GameData_222faa0;
extern __int64 GameData_222faa8;
extern __int64 GameData_222fab8;
extern __int64 GameData_222fac8;
extern __int64 GameData_222fad8;
extern __int64 GameData_222fae0;
extern __int64 GameData_222fae8;
extern __int64 GameData_222faf8;
extern __int64 GameData_222fb08;
extern __int64 GameData_222fb18;
extern __int64 GameData_222fb20;
extern __int64 GameData_222fb28;
extern __int64 GameData_222fb38;
extern __int64 GameData_222fb48;
extern __int64 GameData_222fb58;
extern __int64 GameData_222fb60;
extern __int64 GameData_222fb68;
extern __int64 GameData_222fb78;
extern __int64 GameData_222fb88;
extern __int64 GameData_222fb98;
extern __int64 GameData_222fba0;
extern __int64 GameData_222fba8;
extern __int64 GameData_222fbb8;
extern __int64 GameData_222fbc8;
extern __int64 GameData_222fbd8;
extern __int64 GameData_222fbe0;
extern __int64 GameData_222fbe8;
extern __int64 GameData_222fbf8;
extern __int64 GameData_222fc08;
extern __int64 GameData_222fc18;
extern __int64 GameData_222fc20;
extern __int64 GameData_222fc28;
extern __int64 GameData_222fc38;
extern __int64 GameData_222fc48;
extern __int64 GameData_222fc60;
extern __int64 GameData_222fc68;
extern __int64 GameData_222fc70;
extern __int64 GameData_222fc80;
extern __int64 GameData_222fc90;
extern __int64 GameData_222fca0;
extern __int64 GameData_222fca8;
extern __int64 GameData_222fcb0;
extern __int64 GameData_222fcc0;
extern __int64 GameData_222fcd0;
extern __int64 GameData_222fce0;
extern __int64 GameData_222fce8;
extern __int64 GameData_222fcf0;
extern __int64 GameData_222fd00;
extern __int64 GameData_222fd10;
extern __int64 GameData_222fd20;
extern __int64 GameData_222fd28;
extern __int64 GameData_222fd30;
extern __int64 GameData_222fd40;
extern __int64 GameData_222fd50;
extern __int64 GameData_222fd60;
extern __int64 GameData_222fd68;
extern __int64 GameData_222fd70;
extern __int64 GameData_222fd80;
extern __int64 GameData_222fd90;
extern __int64 GameData_222fda0;
extern __int64 GameData_222fda8;
extern __int64 GameData_222fdb0;
extern __int64 GameData_222fdc0;
extern __int64 GameData_222fdd0;
extern __int64 GameData_222fde0;
extern __int64 GameData_222fde8;
extern __int64 GameData_222fdf0;
extern __int64 GameData_222fe00;
extern __int64 GameData_222fe10;
extern __int64 GameData_222fe20;
extern __int64 GameData_222fe28;
extern __int64 GameData_222fe30;
extern __int64 GameData_222fe40;
extern __int64 GameData_222fe50;
extern __int64 GameData_222fe60;
extern __int64 GameData_222fe68;
extern __int64 GameData_222fe70;
extern __int64 GameData_222fe80;
extern __int64 GameData_222fe90;
extern __int64 GameData_222fea0;
extern __int64 GameData_222fea8;
extern __int64 GameData_222feb0;
extern __int64 GameData_222fec0;
extern __int64 GameData_222fed0;
extern __int64 GameData_222fee0;
extern __int64 GameData_222fee8;
extern __int64 GameData_222fef0;
extern __int64 GameData_222ff00;
extern __int64 GameData_222ff10;
extern __int64 GameData_222ff20;
extern __int64 GameData_222ff28;
extern __int64 GameData_222ff30;
extern __int64 GameData_222ff40;
extern __int64 GameData_222ff50;
extern __int64 GameData_222ff60;
extern __int64 GameData_222ff68;
extern __int64 GameData_222ff70;
extern __int64 GameData_222ff80;
extern __int64 GameData_222ff90;
extern __int64 GameData_2262ae0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char** GameData_212fbf8;
extern char GameData_1a9f09e;
extern char GameData_222e470;
extern char GameData_222e4b0;
extern char GameData_222e4f0;
extern char GameData_222e530;
extern char GameData_222e570;
extern char GameData_222e5b0;
extern char GameData_222e5f0;
extern char GameData_222e630;
extern char GameData_222e670;
extern char GameData_222e6b0;
extern char GameData_222e6f0;
extern char GameData_222e730;
extern char GameData_222e770;
extern char GameData_222e7b8;
extern char GameData_222e7f8;
extern char GameData_222e838;
extern char GameData_222e878;
extern char GameData_222e8b8;
extern char GameData_222e8f8;
extern char GameData_222e938;
extern char GameData_222e978;
extern char GameData_222e9b8;
extern char GameData_222e9f8;
extern char GameData_222ea38;
extern char GameData_222ea78;
extern char GameData_222eab8;
extern char GameData_222eaf8;
extern char GameData_222eb38;
extern char GameData_222eb78;
extern char GameData_222ebb8;
extern char GameData_222ebf8;
extern char GameData_222ec40;
extern char GameData_222ec80;
extern char GameData_222ecc0;
extern char GameData_222ed00;
extern char GameData_222ed40;
extern char GameData_222ed80;
extern char GameData_222edc0;
extern char GameData_222ee00;
extern char GameData_222ee40;
extern char GameData_222ee80;
extern char GameData_222eec0;
extern char GameData_222ef00;
extern char GameData_222ef40;
extern char GameData_222ef80;
extern char GameData_222efc0;
extern char GameData_222f000;
extern char GameData_222f040;
extern char GameData_222f080;
extern char GameData_222f0c0;
extern char GameData_222f100;
extern char GameData_222f140;
extern char GameData_222f180;
extern char GameData_222f1c0;
extern char GameData_222f200;
extern char GameData_222f240;
extern char GameData_222f280;
extern char GameData_222f2c0;
extern char GameData_222f300;
extern char GameData_222f340;
extern char GameData_222f380;
extern char GameData_222f3c0;
extern char GameData_222f400;
extern char GameData_222f440;
extern char GameData_222f480;
extern char GameData_222f4c8;
extern char GameData_222f508;
extern char GameData_222f548;
extern char GameData_222f588;
extern char GameData_222f5c8;
extern char GameData_222f608;
extern char GameData_222f648;
extern char GameData_222f688;
extern char GameData_222f6c8;
extern char GameData_222f708;
extern char GameData_222f748;
extern char GameData_222f788;
extern char GameData_222f7c8;
extern char GameData_222f808;
extern char GameData_222f848;
extern char GameData_222f888;
extern char GameData_222f8c8;
extern char GameData_222f910;
extern char GameData_222f950;
extern char GameData_222f990;
extern char GameData_222f9d0;
extern char GameData_222fa10;
extern char GameData_222fa50;
extern char GameData_222fa90;
extern char GameData_222fad0;
extern char GameData_222fb10;
extern char GameData_222fb50;
extern char GameData_222fb90;
extern char GameData_222fbd0;
extern char GameData_222fc10;
extern char GameData_222fc58;
extern char GameData_222fc98;
extern char GameData_222fcd8;
extern char GameData_222fd18;
extern char GameData_222fd58;
extern char GameData_222fd98;
extern char GameData_222fdd8;
extern char GameData_222fe18;
extern char GameData_222fe58;
extern char GameData_222fe98;
extern char GameData_222fed8;
extern char GameData_222ff18;
extern char GameData_222ff58;
extern int GameData_21668e0;
extern int GameData_222e468;
extern int GameData_222e490;
extern int GameData_222e4a0;
extern int GameData_222e4d0;
extern int GameData_222e4e0;
extern int GameData_222e510;
extern int GameData_222e520;
extern int GameData_222e550;
extern int GameData_222e560;
extern int GameData_222e590;
extern int GameData_222e5a0;
extern int GameData_222e5d0;
extern int GameData_222e5e0;
extern int GameData_222e610;
extern int GameData_222e620;
extern int GameData_222e650;
extern int GameData_222e660;
extern int GameData_222e690;
extern int GameData_222e6a0;
extern int GameData_222e6d0;
extern int GameData_222e6e0;
extern int GameData_222e710;
extern int GameData_222e720;
extern int GameData_222e750;
extern int GameData_222e760;
extern int GameData_222e790;
extern int GameData_222e7a0;
extern int GameData_222e7d8;
extern int GameData_222e7e8;
extern int GameData_222e818;
extern int GameData_222e828;
extern int GameData_222e858;
extern int GameData_222e868;
extern int GameData_222e898;
extern int GameData_222e8a8;
extern int GameData_222e8d8;
extern int GameData_222e8e8;
extern int GameData_222e918;
extern int GameData_222e928;
extern int GameData_222e958;
extern int GameData_222e968;
extern int GameData_222e998;
extern int GameData_222e9a8;
extern int GameData_222e9d8;
extern int GameData_222e9e8;
extern int GameData_222ea18;
extern int GameData_222ea28;
extern int GameData_222ea58;
extern int GameData_222ea68;
extern int GameData_222ea98;
extern int GameData_222eaa8;
extern int GameData_222ead8;
extern int GameData_222eae8;
extern int GameData_222eb18;
extern int GameData_222eb28;
extern int GameData_222eb58;
extern int GameData_222eb68;
extern int GameData_222eb98;
extern int GameData_222eba8;
extern int GameData_222ebd8;
extern int GameData_222ebe8;
extern int GameData_222ec18;
extern int GameData_222ec28;
extern int GameData_222ec60;
extern int GameData_222ec70;
extern int GameData_222eca0;
extern int GameData_222ecb0;
extern int GameData_222ece0;
extern int GameData_222ecf0;
extern int GameData_222ed20;
extern int GameData_222ed30;
extern int GameData_222ed60;
extern int GameData_222ed70;
extern int GameData_222eda0;
extern int GameData_222edb0;
extern int GameData_222ede0;
extern int GameData_222edf0;
extern int GameData_222ee20;
extern int GameData_222ee30;
extern int GameData_222ee60;
extern int GameData_222ee70;
extern int GameData_222eea0;
extern int GameData_222eeb0;
extern int GameData_222eee0;
extern int GameData_222eef0;
extern int GameData_222ef20;
extern int GameData_222ef30;
extern int GameData_222ef60;
extern int GameData_222ef70;
extern int GameData_222efa0;
extern int GameData_222efb0;
extern int GameData_222efe0;
extern int GameData_222eff0;
extern int GameData_222f020;
extern int GameData_222f030;
extern int GameData_222f060;
extern int GameData_222f070;
extern int GameData_222f0a0;
extern int GameData_222f0b0;
extern int GameData_222f0e0;
extern int GameData_222f0f0;
extern int GameData_222f120;
extern int GameData_222f130;
extern int GameData_222f160;
extern int GameData_222f170;
extern int GameData_222f1a0;
extern int GameData_222f1b0;
extern int GameData_222f1e0;
extern int GameData_222f1f0;
extern int GameData_222f220;
extern int GameData_222f230;
extern int GameData_222f260;
extern int GameData_222f270;
extern int GameData_222f2a0;
extern int GameData_222f2b0;
extern int GameData_222f2e0;
extern int GameData_222f2f0;
extern int GameData_222f320;
extern int GameData_222f330;
extern int GameData_222f360;
extern int GameData_222f370;
extern int GameData_222f3a0;
extern int GameData_222f3b0;
extern int GameData_222f3e0;
extern int GameData_222f3f0;
extern int GameData_222f420;
extern int GameData_222f430;
extern int GameData_222f460;
extern int GameData_222f470;
extern int GameData_222f4a0;
extern int GameData_222f4b0;
extern int GameData_222f4e8;
extern int GameData_222f4f8;
extern int GameData_222f528;
extern int GameData_222f538;
extern int GameData_222f568;
extern int GameData_222f578;
extern int GameData_222f5a8;
extern int GameData_222f5b8;
extern int GameData_222f5e8;
extern int GameData_222f5f8;
extern int GameData_222f628;
extern int GameData_222f638;
extern int GameData_222f668;
extern int GameData_222f678;
extern int GameData_222f6a8;
extern int GameData_222f6b8;
extern int GameData_222f6e8;
extern int GameData_222f6f8;
extern int GameData_222f728;
extern int GameData_222f738;
extern int GameData_222f768;
extern int GameData_222f778;
extern int GameData_222f7a8;
extern int GameData_222f7b8;
extern int GameData_222f7e8;
extern int GameData_222f7f8;
extern int GameData_222f828;
extern int GameData_222f838;
extern int GameData_222f868;
extern int GameData_222f878;
extern int GameData_222f8a8;
extern int GameData_222f8b8;
extern int GameData_222f8e8;
extern int GameData_222f8f8;
extern int GameData_222f930;
extern int GameData_222f940;
extern int GameData_222f970;
extern int GameData_222f980;
extern int GameData_222f9b0;
extern int GameData_222f9c0;
extern int GameData_222f9f0;
extern int GameData_222fa00;
extern int GameData_222fa30;
extern int GameData_222fa40;
extern int GameData_222fa70;
extern int GameData_222fa80;
extern int GameData_222fab0;
extern int GameData_222fac0;
extern int GameData_222faf0;
extern int GameData_222fb00;
extern int GameData_222fb30;
extern int GameData_222fb40;
extern int GameData_222fb70;
extern int GameData_222fb80;
extern int GameData_222fbb0;
extern int GameData_222fbc0;
extern int GameData_222fbf0;
extern int GameData_222fc00;
extern int GameData_222fc30;
extern int GameData_222fc40;
extern int GameData_222fc78;
extern int GameData_222fc88;
extern int GameData_222fcb8;
extern int GameData_222fcc8;
extern int GameData_222fcf8;
extern int GameData_222fd08;
extern int GameData_222fd38;
extern int GameData_222fd48;
extern int GameData_222fd78;
extern int GameData_222fd88;
extern int GameData_222fdb8;
extern int GameData_222fdc8;
extern int GameData_222fdf8;
extern int GameData_222fe08;
extern int GameData_222fe38;
extern int GameData_222fe48;
extern int GameData_222fe78;
extern int GameData_222fe88;
extern int GameData_222feb8;
extern int GameData_222fec8;
extern int GameData_222fef8;
extern int GameData_222ff08;
extern int GameData_222ff38;
extern int GameData_222ff48;
extern int GameData_222ff78;
extern int GameData_222ff88;
extern int game_script_hub_talk_g_choice_menu_result;
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
int GameRoutine_1a09d30(const char*, const char*);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_1494e30(__int64);
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_717660();
void GameRoutine_fd7500(unsigned int*, unsigned int*, __int64, char);
void ProcRunEvent_1006d40(__int64);
void TelopFacilityOpen_fd5700(__int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) GameRoutine_c8c1e0();
void __attribute__((noreturn)) GameRoutine_fd58a0();
void __attribute__((noreturn)) GameRoutine_fd58c0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void __cxa_guard_release(__int64);
void game_fd58e0(unsigned int*, unsigned int*, __int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void nn_os_YieldThread();
bool game_4762b0(__int64 a1, __int64 a2, float* a3, float* a4, float* a5,
                 __int64 a6, __int64 a7);
__int64 game_7f2420(__int64 a1, __int64 a2);
bool game_7f25a0(__int64 a1, __int64 a2);
__int64 game_7f2600(__int64 a1, __int64 a2);
__int64 game_90c6a4();
__int64 game_989ca4();
__int64 game_9cf484();
void game_eab880(__int64 a1);
void game_fd4a20(__int64 a1);
__int64 game_fd9d20(__int64 a1, __int64* a2, __int64 a3);
__int64 game_fdd260(__int64 result);
__int64 game_13742f4();
void game_170c850(__int64 a1);
void game_1720da0(__int64 a1);
__int64 game_17e3c94();
__int64 game_1844220(__int64 a1);
__int64 game_1963b44();
__int64 game_197ac60(__int64 a1, __int64 a2);

bool game_4762b0(__int64 a1, __int64 a2, float* a3, float* a4, float* a5,
                 __int64 a6, __int64 a7)
{
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
  unsigned int v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;

  v7 = a3[4];
  v8 = a3[5];
  v9 = a3[6];
  v10 = (float)(v8 - a4[5]) + (float)(v8 - a4[5]);
  v11 = (float)(v7 - a4[4]) + (float)(v7 - a4[4]);
  v12 = (float)(v9 - a4[6]) + (float)(v9 - a4[6]);
  v14 = a4[2];
  v13 = a4[3];
  v15 = *a4;
  v16 = a4[1];
  v17 = (float)((float)(PSEUDO_UNFUSED(v10 * v16)) + (float)(*a4 * v11)) +
        (float)(v14 * v12);
  v18 = -(
      float)((float)((float)(v16 * v12) - (float)(PSEUDO_UNFUSED(v14 * v10))) *
             v13);
  v19 = *(float*)(a1 + 8);
  v20 =
      v18 + (float)(v11 * (float)((float)(v13 * v13) + -0x1.0000000000000p-1f));
  v21 = *a5;
  v22 = (float)(v20 + (float)(*a4 * v17)) - v19;
  if (v22 <= *a5) {
    v23 = *(_DWORD*)(a7 + 20480);
    if (v23 <= 0xFF) {
      *(_DWORD*)(a7 + 20480) = v23 + 1;
      v24 = a7 + 80LL * v23;
      *(_DWORD*)(v24 + 52) = -1;
      v25 = (float)(PSEUDO_UNFUSED((float)(v15 + v15) * v14)) -
            (float)(v16 * (float)(v13 + v13));
      v26 = (float)(PSEUDO_UNFUSED(v16 * (float)(v15 + v15))) +
            (float)(v14 * (float)(v13 + v13));
      *(float*)(v24 + 8) = v25;
      *(float*)(v24 + 12) = v22;
      v27 =
          (float)((float)(v13 * (float)(v13 + v13)) + -0x1.0000000000000p+0f) +
          (float)(v15 * (float)(v15 + v15));
      *(float*)v24 = v27;
      *(float*)(v24 + 4) = v26;
      *(float*)(v24 + 16) = v7 - (float)(PSEUDO_UNFUSED(v27 * v19));
      *(float*)(v24 + 20) = v8 - (float)(PSEUDO_UNFUSED(v26 * v19));
      *(float*)(v24 + 24) = v9 - (float)(PSEUDO_UNFUSED(v19 * v25));
    }
  }
  return v22 <= v21;
}

__int64 game_7f2420(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 result;
  _QWORD* v8;

  v2 = *(_QWORD**)a1;
  v3 = *(_QWORD**)(a1 + 8);
  if (*(_QWORD**)a1 == v3) {
  LABEL_7:
    v5 = *(_QWORD**)(a1 + 24);
    v6 = *(_QWORD**)(a1 + 32);
    if (v5 == v6) {
      return 1;
    }
    result = 1;
    while (1) {
      v8 = *(_QWORD**)(*(_QWORD*)(a2 + 24) + 8 * (*v5 & 0xFFFLL));
      if (v8 != nullptr) {
        break;
      }
    LABEL_9:
      v5 += 2;
      if (v5 == v6) {
        return result;
      }
    }
    while (*v8 != *v5) {
      v8 = (_QWORD*)v8[1];
      if (v8 == nullptr) {
        goto LABEL_9;
      }
    }
  }
  else {
    while (1) {
      v4 = *(_QWORD**)(*(_QWORD*)(a2 + 24) + 8 * (*v2 & 0xFFFLL));
      if (v4 == nullptr) {
        break;
      }
      while (*v4 != *v2) {
        v4 = (_QWORD*)v4[1];
        if (v4 == nullptr) {
          return 0;
        }
      }
      v2 += 2;
      if (v2 == v3) {
        goto LABEL_7;
      }
    }
  }
  return 0;
}

bool game_7f25a0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _BOOL8 result;

  v2 = *(_QWORD**)a1;
  v3 = *(_QWORD**)(a1 + 8);
  if (*(_QWORD**)a1 == v3) {
    return true;
  }
  do {
    v4 = *(_QWORD**)(*(_QWORD*)(a2 + 24) + 8 * (*v2 & 0xFFFLL));
    result = v4 != nullptr;
    if (v4 == nullptr) {
      break;
    }
    while (*v4 != *v2) {
      v4 = (_QWORD*)v4[1];
      if (v4 == nullptr) {
        return false;
      }
    }
    v2 += 2;
  } while (v2 != v3);
  return result;
}

__int64 game_7f2600(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;

  v2 = *(_QWORD**)(a1 + 24);
  v3 = *(_QWORD**)(a1 + 32);
  if (v2 == v3) {
    return 1;
  }
  while (1) {
    v4 = *(_QWORD**)(*(_QWORD*)(a2 + 24) + 8 * (*v2 & 0xFFFLL));
    if (v4 != nullptr) {
      break;
    }
  LABEL_3:
    v2 += 2;
    if (v2 == v3) {
      return 1;
    }
  }
  while (*v4 != *v2) {
    v4 = (_QWORD*)v4[1];
    if (v4 == nullptr) {
      goto LABEL_3;
    }
  }
  return 0;
}

__int64 game_90c6a4() { return GameRoutine_2b0(); }

__int64 game_989ca4() { return GameRoutine_2b0(); }

__int64 game_9cf484() { return GameRoutine_2b0(); }

void game_eab880(__int64 a1)
{
  char* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 (*v12)();
  char v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64 v24;

  v2 = *(const char**)(a1 + 152);
  v3 = *(_QWORD*)GameData_212eb28;
  v4 = GameRoutine_1a09c70(v2);
  v21_.v21 = 0;
  v21_.v22 = 0;
  v21_.v23 = 0;
  v5 = *(_QWORD*)(a1 + 160);
  v6 = *(_QWORD*)(a1 + 168);
  v7 = v4;
  v8 = v6 - v5;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 != v5) {
    if (v8 < 0) {
      GameRoutine_c8c1e0();
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v6 - v5, 16, 0);
    v21_.v21 = v10;
    v21_.v23 = v10 + v8;
    do {
      *(_BYTE*)v10 = 0;
      *(_DWORD*)(v10 + 24) = -1;
      v11 = *(_DWORD*)(v5 + 24);
      if (v11 != -1) {
        v12 = GameData_1fed708[v11];
        v24 = v10;
        ((void (*)(__int64*, __int64))v12)(&v24, v5);
        *(_DWORD*)(v10 + 24) = v11;
      }
      v5 += 32;
      v10 += 32;
    } while (v5 != v6);
    v21_.v22 = v10;
    v9 = &fw_memory_g_heap_manager;
  }
  v13 = game_1195900(v3 + 8, a1, (__int64)v2, v7, &v21_.v21, 0);
  v14 = v21_.v21;
  v15 = v13;
  if (v21_.v21 != 0) {
    v16 = v21_.v22;
    if (v21_.v21 == v21_.v22) {
      goto LABEL_15;
    }
    do {
      v17 = *(unsigned int*)(v16 - 8);
      v18 = v16 - 32;
      if ((_DWORD)v17 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fed6f0[v17])(
            &v24, v16 - 32);
      }
      *(_DWORD*)(v16 - 8) = -1;
      v16 -= 32;
    } while (v18 != v14);
    v21_.v22 = v14;
    v14 = v21_.v21;
    if (v21_.v21 != 0) {
    LABEL_15:
      v19 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v19, v14);
    }
  }
  if ((v15 & 1) == 0) {
    v20 = *(_QWORD*)(a1 + 8);
    if (v20 == 0) {
      return;
    }
    while (1) {
      if (*(_BYTE*)v20 == 2) {
        if (*(_DWORD*)(v20 + 32) == 0) {
          *(_QWORD*)(a1 + 16) = v20;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v20 == 0) {
        return;
      }
      v20 += 64;
    }
  }
  if (GameData_22190c0 != 0) {
    ProcRunEvent_1006d40(GameData_22190c0);
  }
}

void game_fd4a20(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  char** v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned int* v34;
  unsigned int* v35;
  unsigned __int64 v36;
  signed __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  bool v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  _DWORD* v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 i;
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  char v62;
  __int64 v63;
  unsigned __int64 v64;
  char* v65;
  char* v66;
  unsigned int* v67;
  unsigned int* v68;
  unsigned int* v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  unsigned int* v81;
  signed __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  _DWORD* v90;
  __int64* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned int* v96;
  unsigned int* v97;
  unsigned int* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned int* v103;
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
  char v114;
  __int64 v115;
  __int64 v116;
  __int64* v118;
  __int64* v119;
  unsigned __int64 v120;
  struct {
    __int64 v121;
    unsigned __int64 v122;
    char* v123;
  } v121_;
  __int64 v124;
  struct {
    __int64 v125;
    char* v126;
    char* v127;
  } v125_;
  struct {
    __int64 v128;
    unsigned __int64 v129;
    char* v130;
  } v128_;
  struct {
    __int64 v131;
    __int64 v132;
  } v131_;
  struct {
    unsigned int* v133;
    unsigned int* v134;
    unsigned __int64 v135;
    char* v136;
    char* v137;
    unsigned __int64 v138;
  } v133_;

  v1 = *(__int64**)(a1 + 176);
  v118 = *(__int64**)(a1 + 184);
  if (v118 != v1) {
    v133_.v137 = nullptr;
    v133_.v138 = 0;
    v133_.v135 = 0;
    v133_.v136 = nullptr;
    v133_.v133 = nullptr;
    v133_.v134 = nullptr;
    while (1) {
      v4 = *(_QWORD*)(*v1 + 24);
      if ((*(_BYTE*)v4 & 1) != 0) {
        v5 = *(_QWORD*)(v4 + 16);
      }
      else {
        v5 = v4 + 1;
      }
      v125_.v125 = v5;
      v124 = game_HashString(v5);
      game_VariableManager_SetFlag((__int64)&v124, 1);
      v6 = *(const char**)(*v1 + 32);
      v7 = GameRoutine_1a09c70(v6);
      if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_206:
        String_60a1d0();
      }
      v8 = v7;
      if (v7 >= 0x17) {
        break;
      }
      v9 = (char*)&v124 + 1;
      LOBYTE(v124) = 2 * v7;
      if (v7 != 0) {
        goto LABEL_19;
      }
    LABEL_20:
      v9[v8] = 0;
      v11 = 0;
      v12 = v124;
      v13 = (__int64)v125_.v126;
      v14 = (const char**)GameData_212fbf8;
      if ((v124 & 1) != 0) {
        v15 = v125_.v126;
      }
      else {
        v15 = (char*)&v124 + 1;
      }
      if ((v124 & 1) != 0) {
        v16 = v125_.v125;
      }
      else {
        v16 = (unsigned __int8)v124 >> 1;
      }
      do {
        v18 = *v14;
        v14 += 2;
        v17 = (__int64)v18;
        v19 = GameRoutine_1a09c70(v18);
        if (v19 == v16) {
          if (v19 == -1) {
            String_60a230();
          }
          if (GameRoutine_1a09cf0((__int64)v15, v17, v19) == 0) {
            v120 = 0x100000000LL - v11;
            if ((v12 & 1) == 0) {
              goto LABEL_37;
            }
            goto LABEL_33;
          }
        }
        --v11;
      } while (v11 != -32);
      v120 = 0;
      if ((v12 & 1) != 0) {
      LABEL_33:
        if (v13 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v13);
        }
      }
    LABEL_37:
      if (DWORDn(v120, sizeof(v120) / 4 - 1) != 0) {
        game_dc0960((void*)(&v131_.v131), *v1);
        v21 = v131_.v131;
        v22 = v131_.v132;
        v119 = v1;
        if (v131_.v132 != v131_.v131) {
          v23 = 0;
          v24 = 0;
          v25 = (__int64*)fw_memory_g_heap_manager_ptr;
          do {
            v125_.v126 = nullptr;
            v125_.v127 = nullptr;
            v125_.v125 = 0;
            LODWORD(v124) = v120;
            v26 = (__int64*)(v21 + v23);
            if ((__int64*)(v21 + v23) != &v125_.v125) {
              if ((*(_BYTE*)v26 & 1) != 0) {
                GameRoutine_64df20(&v125_.v125, *(_QWORD*)(v21 + v23 + 16),
                                   *(_QWORD*)(v21 + v23 + 8));
              }
              else {
                v27 = *v26;
                v28 = v26[1];
                v29 = v26[2];
                v125_.v126 = (char*)v28;
                v125_.v127 = (const char*)v29;
                v125_.v125 = v27;
              }
            }
            v30 = v133_.v137;
            if ((unsigned __int64)v133_.v137 >= v133_.v138) {
              v35 = (unsigned int*)v133_.v136;
              v36 = v133_.v137 - v133_.v136;
              v37 = (v133_.v137 - v133_.v136) >> 5;
              v38 = v37 + 1;
              if ((unsigned __int64)(v37 + 1) >> 59 != 0) {
                GameRoutine_fd58a0();
              }
              v39 = v133_.v138 - (_QWORD)v133_.v136;
              if ((__int64)(v133_.v138 - (_QWORD)v133_.v136) >> 4 > v38) {
                v38 = v39 >> 4;
              }
              v40 = (unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFE0LL;
              v41 = 0x7FFFFFFFFFFFFFFLL;
              if (!v40) {
                v41 = v38;
              }
              if (v41 >> 59 != 0) {
              LABEL_208:
                GameRoutine_60a210();
              }
              v42 = 32 * v41;
              v43 = fw_memory_HeapManager_Allocate(*v25, 32 * v41, 16, 0);
              v44 = v43 + v36;
              v45 = v43;
              v46 = (_DWORD*)(v43 + v36);
              *(_DWORD*)v46 = v124;
              v47 = (__int64*)(v46 + 2);
              if ((v125_.v125 & 1) != 0) {
                fw_text_String_CopyTerminated(v47, (__int64)v125_.v127,
                                              (unsigned __int64)v125_.v126);
              }
              else {
                v48 = (unsigned __int64)v125_.v126;
                *v47 = v125_.v125;
                v47[1] = v48;
                v47[2] = (__int64)v125_.v127;
              }
              v49 = v45 + v42;
              v34 = (unsigned int*)(v44 + 32);
              GameRoutine_1a0b950(v44 - 32 * v37, (__int64)v35, v36);
              v133_.v136 = (char*)(v44 - 32 * v37);
              v133_.v138 = v49;
              v25 = &fw_memory_g_heap_manager;
              if (v35 != nullptr) {
                v50 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v50 = 56;
                }
                nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v50,
                                              (__int64)v35);
              }
            }
            else {
              *(_DWORD*)v133_.v137 = v124;
              v31 = (__int64*)(v30 + 8);
              if ((v125_.v125 & 1) != 0) {
                fw_text_String_CopyTerminated(v31, (__int64)v125_.v127,
                                              (unsigned __int64)v125_.v126);
                v34 = (unsigned int*)(v30 + 32);
              }
              else {
                v32 = v125_.v125;
                v33 = (__int64)v125_.v127;
                v34 = (unsigned int*)(v30 + 32);
                *((_QWORD*)v30 + 2) = v125_.v126;
                *((_QWORD*)v30 + 3) = v33;
                *v31 = v32;
              }
            }
            v133_.v137 = (char*)v34;
            if ((v125_.v125 & 1) != 0 && v125_.v127 != nullptr) {
              v51 = 128;
              if (*(_QWORD*)(*v25 + 200) == 0) {
                v51 = 56;
              }
              nn_mem_StandardAllocator_Free(*v25 + v51, (__int64)v125_.v127);
            }
            v21 = v131_.v131;
            v22 = v131_.v132;
            ++v24;
            v23 += 24;
          } while (0xAAAAAAAAAAAAAAABLL * ((v131_.v132 - v131_.v131) >> 3) >
                   v24);
          v1 = v119;
        }
        if (v22 != v21) {
          for (i = 0;
               0xAAAAAAAAAAAAAAABLL * ((v131_.v132 - v131_.v131) >> 3) > i;
               ++i) {
            v128_.v129 = 0;
            v128_.v130 = nullptr;
            v125_.v127 = nullptr;
            v128_.v128 = 0;
            v53 = (__int64*)(v21 + 24 * i);
            v125_.v125 = 0;
            v125_.v126 = nullptr;
            LODWORD(v124) = v120;
            if (&v125_.v125 != v53) {
              if ((*(_BYTE*)v53 & 1) != 0) {
                GameRoutine_64df20(&v125_.v125, v53[2], v53[1]);
              }
              else {
                v54 = *v53;
                v55 = v53[1];
                v56 = v53[2];
                v125_.v126 = (char*)v55;
                v125_.v127 = (const char*)v56;
                v125_.v125 = v54;
              }
            }
            if (*(_QWORD*)(*v1 + 72) != 0) {
              v57 = *(const char**)(*v1 + 72);
            }
            else {
              v57 = &GameData_1a9f09e;
            }
            v58 = GameRoutine_1a09c70(v57);
            if (v58 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_206;
            }
            v59 = v58;
            if (v58 >= 0x17) {
              if ((v58 | 7) == 0x17) {
                v61 = 26;
              }
              else {
                v61 = (v58 | 7) + 1;
              }
              v60 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v61, 16, 0);
              v121_.v122 = v59;
              v121_.v123 = v60;
              v121_.v121 = v61 | 1;
            }
            else {
              v60 = (char*)&v121_.v121 + 1;
              LOBYTE(v121_.v121) = 2 * v58;
              if (v58 == 0) {
                goto LABEL_87;
              }
            }
            GameRoutine_1a0b940((__int64)v60, (__int64)v57, v59);
          LABEL_87:
            v62 = v128_.v128;
            v60[v59] = 0;
            if ((v62 & 1) != 0 && v128_.v130 != nullptr) {
              v63 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v63 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                  (__int64)v128_.v130);
            }
            v128_.v129 = v121_.v122;
            v128_.v130 = v121_.v123;
            v128_.v128 = v121_.v121;
            if ((v121_.v121 & 1) != 0) {
              v64 = v128_.v129;
            }
            else {
              v64 = (unsigned __int64)(unsigned __int8)v128_.v128 >> 1;
            }
            if (v64 != 0) {
              if ((v128_.v128 & 1) == 0) {
                goto LABEL_97;
              }
              goto LABEL_112;
            }
            v65 = (char*)&v125_.v125 + 1;
            if ((v125_.v125 & 1) != 0) {
              v65 = v125_.v127;
            }
            if ((int)v124 <= 7) {
              if ((_DWORD)v124 == 0) {
                v66 = *((char**)&GameData_2000158 +
                        (unsigned __int8)GameRoutine_8a1ae0(v65));
                goto LABEL_111;
              }
              if ((_DWORD)v124 == 3) {
                v66 = "MID_Shop_Legion";
                goto LABEL_111;
              }
            }
            else {
              if ((_DWORD)v124 == 8) {
                v66 = "MID_HubMenu_Temple";
                goto LABEL_111;
              }
              v66 = "MID_HubMenu_ClassExaminer";
              if ((_DWORD)v124 == 9) {
                goto LABEL_111;
              }
              if ((_DWORD)v124 == 27) {
                v66 = "MID_HubMenu_Procurement";
                goto LABEL_111;
              }
            }
            v66 = game_ffe140(v124, v65);
          LABEL_111:
            GameRoutine_60a020((__int64)&v128_.v128, v66);
            if ((v128_.v128 & 1) == 0) {
            LABEL_97:
              v121_.v121 = v128_.v128;
              v121_.v122 = v128_.v129;
              v121_.v123 = v128_.v130;
              goto LABEL_113;
            }
          LABEL_112:
            fw_text_String_CopyTerminated(&v121_.v121, (__int64)v128_.v130,
                                          v128_.v129);
          LABEL_113:
            v68 = v133_.v133;
            v67 = v133_.v134;
            v69 = v133_.v133;
            if (v133_.v133 != v133_.v134) {
              v69 = v133_.v133;
              if ((v121_.v121 & 1) != 0) {
                v70 = v121_.v122;
              }
              else {
                v70 = (unsigned __int8)v121_.v121 >> 1;
              }
              if ((v121_.v121 & 1) != 0) {
                v71 = (__int64)v121_.v123;
                v69 = v133_.v133;
                while (1) {
                  v75 = *((unsigned __int8*)v69 + 32);
                  v76 = *((_QWORD*)v69 + 5);
                  if ((v75 & 1) == 0) {
                    v76 = v75 >> 1;
                  }
                  if (v70 == v76) {
                    v77 = (v75 & 1) != 0 ? *((_QWORD*)v69 + 6)
                                         : (__int64)v69 + 33;
                    if (GameRoutine_1a09cf0(v71, v77, v70) == 0) {
                      break;
                    }
                  }
                  v69 += 14;
                  if (v69 == v67) {
                    goto LABEL_137;
                  }
                }
              }
              else {
                while (1) {
                  v72 = *((unsigned __int8*)v69 + 32);
                  v73 = *((_QWORD*)v69 + 5);
                  if ((v72 & 1) == 0) {
                    v73 = v72 >> 1;
                  }
                  if (v70 == v73) {
                    v74 = (v72 & 1) != 0 ? *((_QWORD*)v69 + 6)
                                         : (__int64)v69 + 33;
                    if (GameRoutine_1a09cf0((__int64)&v121_.v121 + 1, v74,
                                            v70) == 0) {
                      break;
                    }
                  }
                  v69 += 14;
                  if (v69 == v67) {
                    goto LABEL_137;
                  }
                }
              }
            }
            if (v69 != v67) {
              goto LABEL_176;
            }
          LABEL_137:
            if ((unsigned __int64)v67 >= v133_.v135) {
              v82 = (char*)v67 - (char*)v68;
              v83 = 0x6DB6DB6DB6DB6DB7LL * (((char*)v67 - (char*)v68) >> 3) + 1;
              if (v83 > 0x492492492492492LL) {
                GameRoutine_fd58c0();
              }
              v84 = fw_memory_g_heap_manager_ptr;
              if (0xDB6DB6DB6DB6DB6ELL *
                      ((__int64)(v133_.v135 - (_QWORD)v68) >> 3) >
                  v83) {
                v83 = 0xDB6DB6DB6DB6DB6ELL *
                      ((__int64)(v133_.v135 - (_QWORD)v68) >> 3);
              }
              if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                                     ((__int64)(v133_.v135 - (_QWORD)v68) >>
                                      3)) >= 0x249249249249249LL) {
                v85 = 0x492492492492492LL;
              }
              else {
                v85 = v83;
              }
              if (v85 > 0x492492492492492LL) {
                goto LABEL_208;
              }
              v86 = 56 * v85;
              v87 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v85, 16, 0);
              v88 = (__int64*)(v87 + v82);
              v89 = v87;
              v90 = (_DWORD*)(v87 + v82);
              *(_DWORD*)v90 = v124;
              v91 = (__int64*)(v90 + 2);
              if ((v125_.v125 & 1) != 0) {
                fw_text_String_CopyTerminated(v91, (__int64)v125_.v127,
                                              (unsigned __int64)v125_.v126);
                if ((v128_.v128 & 1) == 0) {
                  goto LABEL_154;
                }
              LABEL_150:
                fw_text_String_CopyTerminated(v88 + 4, (__int64)v128_.v130,
                                              v128_.v129);
              }
              else {
                v92 = (unsigned __int64)v125_.v126;
                *v91 = v125_.v125;
                v91[1] = v92;
                v91[2] = (__int64)v125_.v127;
                if ((v128_.v128 & 1) != 0) {
                  goto LABEL_150;
                }
              LABEL_154:
                v95 = v128_.v129;
                v88[4] = v128_.v128;
                v88[5] = v95;
                v88[6] = (__int64)v128_.v130;
              }
              v96 = (unsigned int*)((char*)v88 - v82);
              if (v68 != v67) {
                v97 = v68;
                v98 = v96;
                do {
                  *v98 = *v97;
                  v99 = *((_QWORD*)v97 + 1);
                  v100 = *((_QWORD*)v97 + 3);
                  *((_QWORD*)v98 + 2) = *((_QWORD*)v97 + 2);
                  *((_QWORD*)v98 + 3) = v100;
                  *((_QWORD*)v98 + 1) = v99;
                  *((_QWORD*)v97 + 2) = 0;
                  *((_QWORD*)v97 + 3) = 0;
                  *((_QWORD*)v97 + 1) = 0;
                  v101 = *((_QWORD*)v97 + 4);
                  v102 = *((_QWORD*)v97 + 6);
                  *((_QWORD*)v98 + 5) = *((_QWORD*)v97 + 5);
                  *((_QWORD*)v98 + 6) = v102;
                  *((_QWORD*)v98 + 4) = v101;
                  *((_QWORD*)v97 + 5) = 0;
                  *((_QWORD*)v97 + 6) = 0;
                  *((_QWORD*)v97 + 4) = 0;
                  v97 += 14;
                  v98 += 14;
                } while (v97 != v67);
                v103 = v68;
                do {
                  if ((v103[8] & 1) != 0) {
                    v104 = *((_QWORD*)v103 + 6);
                    if (v104 != 0) {
                      v105 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v84 + 200LL) == 0) {
                        v105 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v84 + v105, v104);
                    }
                  }
                  if ((v103[2] & 1) != 0) {
                    v106 = *((_QWORD*)v103 + 3);
                    if (v106 != 0) {
                      v107 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v84 + 200LL) == 0) {
                        v107 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v84 + v107, v106);
                    }
                  }
                  v103 += 14;
                } while (v103 != v67);
              }
              v81 = (unsigned int*)(v88 + 7);
              v133_.v133 = v96;
              v133_.v135 = v89 + v86;
              if (v68 != nullptr) {
                v108 = 128;
                if (*(_QWORD*)(*(_QWORD*)v84 + 200LL) == 0) {
                  v108 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v84 + v108,
                                              (__int64)v68);
              }
              v1 = v119;
              goto LABEL_175;
            }
            *v67 = v124;
            v78 = (__int64*)(v67 + 2);
            if ((v125_.v125 & 1) != 0) {
              fw_text_String_CopyTerminated(v78, (__int64)v125_.v127,
                                            (unsigned __int64)v125_.v126);
              if ((v128_.v128 & 1) == 0) {
              LABEL_152:
                v93 = v128_.v128;
                v94 = (__int64)v128_.v130;
                v81 = v67 + 14;
                *((_QWORD*)v67 + 5) = v128_.v129;
                *((_QWORD*)v67 + 6) = v94;
                *((_QWORD*)v67 + 4) = v93;
                goto LABEL_175;
              }
            }
            else {
              v79 = v125_.v125;
              v80 = (__int64)v125_.v127;
              *((_QWORD*)v67 + 2) = v125_.v126;
              *((_QWORD*)v67 + 3) = v80;
              *v78 = v79;
              if ((v128_.v128 & 1) == 0) {
                goto LABEL_152;
              }
            }
            fw_text_String_CopyTerminated((__int64*)v67 + 4,
                                          (__int64)v128_.v130, v128_.v129);
            v81 = v67 + 14;
          LABEL_175:
            v133_.v134 = v81;
          LABEL_176:
            if ((v121_.v121 & 1) != 0 && v121_.v123 != nullptr) {
              v109 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v109 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                  (__int64)v121_.v123);
            }
            if ((v128_.v128 & 1) != 0 && v128_.v130 != nullptr) {
              v110 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v110 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                  (__int64)v128_.v130);
            }
            if ((v125_.v125 & 1) != 0 && v125_.v127 != nullptr) {
              v111 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v111 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v111,
                  (__int64)v125_.v127);
            }
            v21 = v131_.v131;
          }
        }
        if (v133_.v136 != v133_.v137) {
          game_fd58e0(
              (unsigned int*)v133_.v136, (unsigned int*)v133_.v137,
              (2 *
               __clz((unsigned long long)((v133_.v137 - v133_.v136) >> 5))) ^
                  0x7E,
              1);
        }
        if (v133_.v133 != v133_.v134) {
          GameRoutine_fd7500(
              v133_.v133, v133_.v134,
              (2 * __clz((unsigned long long)(0x6DB6DB6DB6DB6DB7LL *
                                              (((char*)v133_.v134 -
                                                (char*)v133_.v133) >>
                                               3)))) ^
                  0x7E,
              1);
        }
        v2 = v131_.v131;
        if (v131_.v131 != 0) {
          v112 = v131_.v132;
          if (v131_.v131 == v131_.v132) {
            goto LABEL_4;
          }
          v113 = v131_.v132;
          do {
            v114 = *(_BYTE*)(v113 - 24);
            v113 -= 24;
            if ((v114 & 1) != 0) {
              v115 = *(_QWORD*)(v112 - 8);
              if (v115 != 0) {
                v116 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v116 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v115);
              }
            }
            v112 = v113;
          } while (v113 != v2);
          v131_.v132 = v2;
          v2 = v131_.v131;
          if (v131_.v131 != 0) {
          LABEL_4:
            v3 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v3 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
          }
        }
      }
      if (++v1 == v118) {
        GameRoutine_1378560(a1, &v133_.v133,
                            (__int64)"SE_SYS_Telop_NoticeNewAction");
        TelopFacilityOpen_fd5700((__int64*)&v133_.v133);
        return;
      }
    }
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v125_.v125 = v8;
    v125_.v126 = v9;
    v124 = v10 | 1;
  LABEL_19:
    GameRoutine_1a0b940((__int64)v9, (__int64)v6, v8);
    goto LABEL_20;
  }
}

__int64 game_fd9d20(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v5;
  __int64 result;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    char gap16_[48];
    __int64 v19;
  } v18_;

  v5 = *a2;
  v18_.v18[0] = 0;
  v18_.v18[1] = v5;
  result =
      GameSituation_906320(game_GameModeData_instance_ + 136, v18_.v18, a3);
  if (*(_WORD*)(v18_.v19 + 104) != 0) {
    v7 = **(const char***)(v18_.v19 + 112);
    if (GameRoutine_1a09d30(v7, "Sim") != 0) {
      if (GameRoutine_1a09d30(v7, "Yan") != 0) {
        if (GameRoutine_1a09d30(v7, "Zac") != 0) {
          if (GameRoutine_1a09d30(v7, "Maj") == 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222f908,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_222f908) != 0) {
              GameData_222f5a8 = 1;
              GameData_222f508 = 13;
              GameData_222f510 = 0;
              GameData_222f518 = (__int64)SpecialSeqProcs_fdf8e0;
              GameData_222f5c8 = 13;
              GameData_222f608 = 13;
              GameData_222f6c8 = 13;
              GameData_222f708 = 13;
              GameData_222f7c8 = 13;
              GameData_222f808 = 13;
              GameData_222f5d0 = 0;
              GameData_222f5d8 = (__int64)game_menu_anonymous_fdf9b0;
              GameData_222f4c8 = 2;
              GameData_222f4f0 = 0;
              GameData_222f4f8 = 0;
              GameData_222f500 = 0;
              GameData_222f4d0 = 0;
              GameData_222f4d8 = 0;
              GameData_222f4e0 = 0;
              GameData_222f4e8 = 0;
              GameData_222f520 = 0;
              GameData_222f528 = 0;
              GameData_222f610 = 0;
              GameData_222f618 = (__int64)SpecialSeqProcs_fdfb40;
              GameData_222f530 = 0;
              GameData_222f538 = 0;
              GameData_222f540 = 0;
              GameData_222f548 = 12;
              GameData_222f550 = 0;
              GameData_222f558 = 0;
              GameData_222f560 = 0;
              GameData_222f568 = 4;
              GameData_222f570 = 0;
              GameData_222f578 = 0;
              GameData_222f6d8 = (__int64)game_menu_anonymous_fdfc30;
              GameData_222f580 = 0;
              GameData_222f588 = 2;
              GameData_222f590 = 0;
              GameData_222f598 = 0;
              GameData_222f5a0 = 0;
              GameData_222f5b0 = 0;
              GameData_222f5b8 = 0;
              GameData_222f5c0 = 0;
              GameData_222f5e0 = 0;
              GameData_222f5e8 = 0;
              GameData_222f718 = (__int64)SpecialSeqProcs_fdfdc0;
              GameData_222f5f0 = 0;
              GameData_222f5f8 = 0;
              GameData_222f600 = 0;
              GameData_222f620 = 0;
              GameData_222f628 = 0;
              GameData_222f630 = 0;
              GameData_222f638 = 0;
              GameData_222f640 = 0;
              GameData_222f648 = 12;
              GameData_222f658 = 0;
              GameData_222f660 = 0;
              GameData_222f7a8 = 3;
              GameData_222f650 = 0;
              GameData_222f668 = 4;
              GameData_222f670 = 0;
              GameData_222f678 = 0;
              GameData_222f680 = 0;
              GameData_222f688 = 2;
              GameData_222f690 = 0;
              GameData_222f698 = 0;
              GameData_222f6a0 = 0;
              GameData_222f6a8 = 2;
              GameData_222f6b0 = 0;
              GameData_222f6b8 = 0;
              GameData_222f6c0 = 0;
              GameData_222f6d0 = 0;
              GameData_222f6e0 = 0;
              GameData_222f6e8 = 0;
              GameData_222f6f0 = 0;
              GameData_222f6f8 = 0;
              GameData_222f700 = 0;
              GameData_222f710 = 0;
              GameData_222f720 = 0;
              GameData_222f728 = 0;
              GameData_222f730 = 0;
              GameData_222f738 = 0;
              GameData_222f740 = 0;
              GameData_222f748 = 12;
              GameData_222f760 = 0;
              GameData_222f758 = 0;
              GameData_222f750 = 0;
              GameData_222f768 = 4;
              GameData_222f770 = 0;
              GameData_222f778 = 0;
              GameData_222f780 = 0;
              GameData_222f788 = 2;
              GameData_222f790 = 0;
              GameData_222f798 = 0;
              GameData_222f7a0 = 0;
              GameData_222f7b0 = 0;
              GameData_222f7b8 = 0;
              GameData_222f7c0 = 0;
              GameData_222f7d0 = 0;
              GameData_222f7d8 = (__int64)game_menu_anonymous_fdfeb0;
              GameData_222f7e0 = 0;
              GameData_222f7e8 = 0;
              GameData_222f7f0 = 0;
              GameData_222f7f8 = 0;
              GameData_222f800 = 0;
              GameData_222f810 = 0;
              GameData_222f818 = (__int64)game_menu_anonymous_fe0040;
              GameData_222f820 = 0;
              GameData_222f828 = 0;
              GameData_222f830 = 0;
              GameData_222f838 = 0;
              GameData_222f840 = 0;
              GameData_222f848 = 12;
              GameData_222f860 = 0;
              GameData_222f858 = 0;
              GameData_222f850 = 0;
              GameData_222f868 = 4;
              GameData_222f870 = 0;
              GameData_222f878 = 0;
              GameData_222f880 = 0;
              GameData_222f888 = 2;
              GameData_222f890 = 0;
              GameData_222f898 = 0;
              GameData_222f8a0 = 0;
              GameData_222f8a8 = 4;
              GameData_222f8b0 = 0;
              GameData_222f8b8 = 0;
              GameData_222f8c0 = 0;
              GameData_222f8c8 = 0;
              GameData_222f8f0 = 0;
              GameData_222f8f8 = 0;
              GameData_222f900 = 0;
              GameData_222f8e8 = 0;
              GameData_222f8e0 = 0;
              GameData_222f8d8 = 0;
              GameData_222f8d0 = 0;
              __cxa_guard_release((__int64)&GameData_222f908);
            }
            v8 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
            v15 = GameData_212c608[0];
            *(_QWORD*)(v8 + 96) = 0;
            *(_QWORD*)(v8 + 104) = 0;
            *(_QWORD*)(v8 + 112) = 0;
            *(_QWORD*)(v8 + 120) = 0;
            *(_QWORD*)(v8 + 128) = 0;
            *(_WORD*)(v8 + 136) = 0;
            *(_QWORD*)(v8 + 16) = 0;
            *(_QWORD*)(v8 + 24) = "NULL";
            *(_QWORD*)(v8 + 138) = 0;
            *(_QWORD*)(v8 + 144) = 0;
            *(_QWORD*)(v8 + 32) = 0;
            *(_QWORD*)(v8 + 40) = 0;
            *(_QWORD*)(v8 + 48) = 0;
            *(_QWORD*)(v8 + 56) = 0;
            *(_QWORD*)(v8 + 64) = 0;
            *(_QWORD*)(v8 + 72) = 0;
            *(_QWORD*)(v8 + 80) = 0;
            *(_QWORD*)(v8 + 88) = 0;
            *(_QWORD*)v8 = v15 + 16;
            *(_QWORD*)(v8 + 8) = 0;
            game_ProcInst_Register(v8);
            *(_BYTE*)(v8 + 160) = 0;
            *(_BYTE*)(v8 + 168) = 0;
            v10 = &GameData_222f4c8;
            v11 = "MajSeqProc";
            *(_BYTE*)(v8 + 172) = 0;
            *(_DWORD*)(v8 + 164) = 1;
            *(_QWORD*)(v8 + 152) = *a2;
            GameData_222e468 = 0;
            *(_QWORD*)v8 = game_menu_anonymous_MajSeqProc_vtable;
            *(_QWORD*)(v8 + 176) = &GameData_1a91e66;
            return ProcInst_657850(v8, (__int64)v10, v11, 1, a1);
          }
          if (GameRoutine_1a09d30(v7, "Ven") != 0) {
            if (GameRoutine_1a09d30(v7, "Tia") != 0) {
              if (GameRoutine_1a09d30(v7, "Fab") == 0) {
                return SpecialSeqProcs_fdb330(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Bon") == 0) {
                return GameRoutine_fdb730(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Tob") == 0) {
                return SpecialSeqProcs_fdba50(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Buc") == 0) {
                return GameRoutine_fdbe30(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Gat") == 0) {
                return GameRoutine_fdc080(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Urs") == 0) {
                return SpecialSeqProcs_fdc2d0(a1, a2);
              }
              if (GameRoutine_1a09d30(v7, "Die") == 0) {
                return GameRoutine_fdc660(a1, a2);
              }
              result = GameRoutine_1a09d30(v7, "Sar");
              if ((_DWORD)result == 0) {
                return SpecialSeqProcs_fdc8b0(a1, a2);
              }
              return result;
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222ff98,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_222ff98) != 0) {
              GameData_222fca0 = 0;
              GameData_222fca8 = (__int64)game_menu_anonymous_fe07b0;
              GameData_222fd78 = 1;
              GameData_222fc98 = 13;
              GameData_222fcd8 = 13;
              GameData_222fd98 = 13;
              GameData_222fdd8 = 13;
              GameData_222fe98 = 13;
              GameData_222fc58 = 2;
              GameData_222fce0 = 0;
              GameData_222fce8 = (__int64)game_menu_anonymous_fe0960;
              GameData_222fda0 = 0;
              GameData_222fda8 = (__int64)game_menu_anonymous_fe0b70;
              GameData_222fc80 = 0;
              GameData_222fc88 = 0;
              GameData_222fc90 = 0;
              GameData_222fc60 = 0;
              GameData_222fc68 = 0;
              GameData_222fc70 = 0;
              GameData_222fc78 = 0;
              GameData_222fcb0 = 0;
              GameData_222fcb8 = 0;
              GameData_222fcc0 = 0;
              GameData_222fcc8 = 0;
              GameData_222fcd0 = 0;
              GameData_222fcf0 = 0;
              GameData_222fcf8 = 0;
              GameData_222fd00 = 0;
              GameData_222fd08 = 0;
              GameData_222fd10 = 0;
              GameData_222fd18 = 12;
              GameData_222fd28 = 0;
              GameData_222fd30 = 0;
              GameData_222fd20 = 0;
              GameData_222fd38 = 3;
              GameData_222fd40 = 0;
              GameData_222fd48 = 0;
              GameData_222fd50 = 0;
              GameData_222fd58 = 2;
              GameData_222fd60 = 0;
              GameData_222fd68 = 0;
              GameData_222fd70 = 0;
              GameData_222fd80 = 0;
              GameData_222fd88 = 0;
              GameData_222fd90 = 0;
              GameData_222fdb0 = 0;
              GameData_222fdb8 = 0;
              GameData_222fdc0 = 0;
              GameData_222fdc8 = 0;
              GameData_222fdd0 = 0;
              GameData_222fde0 = 0;
              GameData_222fde8 = (__int64)game_menu_anonymous_fe0d20;
              GameData_222fdf0 = 0;
              GameData_222fdf8 = 0;
              GameData_222fe00 = 0;
              GameData_222fe08 = 0;
              GameData_222fe10 = 0;
              GameData_222fe18 = 12;
              GameData_222fe28 = 0;
              GameData_222fe30 = 0;
              GameData_222fe20 = 0;
              GameData_222fe38 = 3;
              GameData_222fe40 = 0;
              GameData_222fe48 = 0;
              GameData_222fe50 = 0;
              GameData_222fe58 = 2;
              GameData_222fe60 = 0;
              GameData_222fe68 = 0;
              GameData_222fe70 = 0;
              GameData_222fe78 = 2;
              GameData_222fe80 = 0;
              GameData_222fe88 = 0;
              GameData_222fe90 = 0;
              GameData_222fea0 = 0;
              GameData_222fea8 = (__int64)GameRoutine_fe1260;
              GameData_222feb0 = 0;
              GameData_222feb8 = 0;
              GameData_222fec0 = 0;
              GameData_222fec8 = 0;
              GameData_222fed0 = 0;
              GameData_222fed8 = 12;
              GameData_222fef0 = 0;
              GameData_222fee8 = 0;
              GameData_222fee0 = 0;
              GameData_222fef8 = 3;
              GameData_222ff00 = 0;
              GameData_222ff08 = 0;
              GameData_222ff10 = 0;
              GameData_222ff18 = 2;
              GameData_222ff20 = 0;
              GameData_222ff28 = 0;
              GameData_222ff30 = 0;
              GameData_222ff38 = 3;
              GameData_222ff40 = 0;
              GameData_222ff48 = 0;
              GameData_222ff50 = 0;
              GameData_222ff58 = 0;
              GameData_222ff80 = 0;
              GameData_222ff88 = 0;
              GameData_222ff90 = 0;
              GameData_222ff78 = 0;
              GameData_222ff70 = 0;
              GameData_222ff68 = 0;
              GameData_222ff60 = 0;
              __cxa_guard_release((__int64)&GameData_222ff98);
            }
            v8 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
            v17 = GameData_212c608[0];
            *(_QWORD*)(v8 + 96) = 0;
            *(_QWORD*)(v8 + 104) = 0;
            *(_QWORD*)(v8 + 112) = 0;
            *(_QWORD*)(v8 + 120) = 0;
            *(_QWORD*)(v8 + 128) = 0;
            *(_WORD*)(v8 + 136) = 0;
            *(_QWORD*)(v8 + 16) = 0;
            *(_QWORD*)(v8 + 24) = "NULL";
            *(_QWORD*)(v8 + 138) = 0;
            *(_QWORD*)(v8 + 144) = 0;
            *(_QWORD*)(v8 + 32) = 0;
            *(_QWORD*)(v8 + 40) = 0;
            *(_QWORD*)(v8 + 48) = 0;
            *(_QWORD*)(v8 + 56) = 0;
            *(_QWORD*)(v8 + 64) = 0;
            *(_QWORD*)(v8 + 72) = 0;
            *(_QWORD*)(v8 + 80) = 0;
            *(_QWORD*)(v8 + 88) = 0;
            *(_QWORD*)v8 = v17 + 16;
            *(_QWORD*)(v8 + 8) = 0;
            game_ProcInst_Register(v8);
            *(_BYTE*)(v8 + 160) = 0;
            *(_BYTE*)(v8 + 168) = 0;
            v10 = &GameData_222fc58;
            v11 = "TiaSeqProc";
            *(_BYTE*)(v8 + 172) = 0;
            *(_DWORD*)(v8 + 164) = 1;
            *(_QWORD*)(v8 + 152) = *a2;
            GameData_222e468 = 0;
            v12 = game_menu_anonymous_TiaSeqProc_vtable;
          }
          else {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222fc50,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_222fc50) != 0) {
              GameData_222f950 = 13;
              GameData_222f958 = 0;
              GameData_222f960 = (__int64)game_menu_anonymous_fe0140;
              GameData_222f990 = 13;
              GameData_222fa30 = 1;
              GameData_222fa50 = 13;
              GameData_222fa90 = 13;
              GameData_222fb50 = 13;
              GameData_222f910 = 2;
              GameData_222f938 = 0;
              GameData_222f940 = 0;
              GameData_222f948 = 0;
              GameData_222f918 = 0;
              GameData_222f920 = 0;
              GameData_222f928 = 0;
              GameData_222f930 = 0;
              GameData_222f968 = 0;
              GameData_222f970 = 0;
              GameData_222f978 = 0;
              GameData_222f980 = 0;
              GameData_222f988 = 0;
              GameData_222f998 = 0;
              GameData_222f9a0 = (__int64)game_menu_anonymous_fe02c0;
              GameData_222f9a8 = 0;
              GameData_222f9b0 = 0;
              GameData_222f9b8 = 0;
              GameData_222f9c0 = 0;
              GameData_222f9c8 = 0;
              GameData_222f9d0 = 12;
              GameData_222f9e0 = 0;
              GameData_222f9e8 = 0;
              GameData_222f9d8 = 0;
              GameData_222f9f0 = 3;
              GameData_222f9f8 = 0;
              GameData_222fa00 = 0;
              GameData_222fa08 = 0;
              GameData_222fa10 = 2;
              GameData_222fa18 = 0;
              GameData_222fa20 = 0;
              GameData_222fa28 = 0;
              GameData_222fa38 = 0;
              GameData_222fa40 = 0;
              GameData_222fa48 = 0;
              GameData_222fa58 = 0;
              GameData_222fa60 = (__int64)game_menu_anonymous_fe0360;
              GameData_222fa68 = 0;
              GameData_222fa70 = 0;
              GameData_222fa78 = 0;
              GameData_222fa80 = 0;
              GameData_222fa88 = 0;
              GameData_222fa98 = 0;
              GameData_222faa0 = (__int64)game_menu_anonymous_fe02c0;
              GameData_222faa8 = 0;
              GameData_222fab0 = 0;
              GameData_222fab8 = 0;
              GameData_222fac0 = 0;
              GameData_222fac8 = 0;
              GameData_222fad0 = 12;
              GameData_222fae0 = 0;
              GameData_222fae8 = 0;
              GameData_222fad8 = 0;
              GameData_222faf0 = 3;
              GameData_222faf8 = 0;
              GameData_222fb00 = 0;
              GameData_222fb08 = 0;
              GameData_222fb10 = 2;
              GameData_222fb18 = 0;
              GameData_222fb20 = 0;
              GameData_222fb28 = 0;
              GameData_222fb30 = 2;
              GameData_222fb38 = 0;
              GameData_222fb40 = 0;
              GameData_222fb48 = 0;
              GameData_222fb58 = 0;
              GameData_222fb60 = (__int64)game_menu_anonymous_fe0580;
              GameData_222fb68 = 0;
              GameData_222fb70 = 0;
              GameData_222fb78 = 0;
              GameData_222fb80 = 0;
              GameData_222fb88 = 0;
              GameData_222fb90 = 12;
              GameData_222fba8 = 0;
              GameData_222fba0 = 0;
              GameData_222fb98 = 0;
              GameData_222fbb0 = 3;
              GameData_222fbb8 = 0;
              GameData_222fbc0 = 0;
              GameData_222fbc8 = 0;
              GameData_222fbd0 = 2;
              GameData_222fbd8 = 0;
              GameData_222fbe0 = 0;
              GameData_222fbe8 = 0;
              GameData_222fbf0 = 3;
              GameData_222fbf8 = 0;
              GameData_222fc00 = 0;
              GameData_222fc08 = 0;
              GameData_222fc10 = 0;
              GameData_222fc38 = 0;
              GameData_222fc40 = 0;
              GameData_222fc48 = 0;
              GameData_222fc30 = 0;
              GameData_222fc28 = 0;
              GameData_222fc20 = 0;
              GameData_222fc18 = 0;
              __cxa_guard_release((__int64)&GameData_222fc50);
            }
            v8 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
            v16 = GameData_212c608[0];
            *(_QWORD*)(v8 + 96) = 0;
            *(_QWORD*)(v8 + 104) = 0;
            *(_QWORD*)(v8 + 112) = 0;
            *(_QWORD*)(v8 + 120) = 0;
            *(_QWORD*)(v8 + 128) = 0;
            *(_WORD*)(v8 + 136) = 0;
            *(_QWORD*)(v8 + 16) = 0;
            *(_QWORD*)(v8 + 24) = "NULL";
            *(_QWORD*)(v8 + 138) = 0;
            *(_QWORD*)(v8 + 144) = 0;
            *(_QWORD*)(v8 + 32) = 0;
            *(_QWORD*)(v8 + 40) = 0;
            *(_QWORD*)(v8 + 48) = 0;
            *(_QWORD*)(v8 + 56) = 0;
            *(_QWORD*)(v8 + 64) = 0;
            *(_QWORD*)(v8 + 72) = 0;
            *(_QWORD*)(v8 + 80) = 0;
            *(_QWORD*)(v8 + 88) = 0;
            *(_QWORD*)v8 = v16 + 16;
            *(_QWORD*)(v8 + 8) = 0;
            game_ProcInst_Register(v8);
            *(_BYTE*)(v8 + 160) = 0;
            *(_BYTE*)(v8 + 168) = 0;
            v10 = &GameData_222f910;
            v11 = "VenSeqProc";
            *(_BYTE*)(v8 + 172) = 0;
            *(_DWORD*)(v8 + 176) = 0;
            *(_DWORD*)(v8 + 164) = 1;
            *(_QWORD*)(v8 + 152) = *a2;
            GameData_222e468 = 0;
            v12 = game_menu_anonymous_VenSeqProc_vtable;
          }
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222f4c0,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_222f4c0) != 0) {
            GameData_222ed60 = 1;
            GameData_222ec88 = 0;
            GameData_222ec90 = (__int64)game_menu_anonymous_fddec0;
            GameData_222ec80 = 13;
            GameData_222ecc0 = 13;
            GameData_222ed80 = 13;
            GameData_222ee40 = 13;
            GameData_222ee80 = 13;
            GameData_222ef20 = 3;
            GameData_222ed88 = 0;
            GameData_222ed90 = (__int64)game_menu_anonymous_fde2a0;
            GameData_222ecc8 = 0;
            GameData_222ecd0 = (__int64)game_menu_anonymous_fde060;
            GameData_222ef40 = 13;
            GameData_222ef80 = 13;
            GameData_222f040 = 13;
            GameData_222f080 = 13;
            GameData_222f140 = 13;
            GameData_222f180 = 13;
            GameData_222ee50 = (__int64)game_menu_anonymous_fde550;
            GameData_222f240 = 13;
            GameData_222f300 = 13;
            GameData_222f3c0 = 13;
            GameData_222ec40 = 2;
            GameData_222ec68 = 0;
            GameData_222ec70 = 0;
            GameData_222ec78 = 0;
            GameData_222ee90 = (__int64)game_menu_anonymous_fde6e0;
            GameData_222ef90 = (__int64)game_menu_anonymous_fde6e0;
            GameData_222ec48 = 0;
            GameData_222ec50 = 0;
            GameData_222ec58 = 0;
            GameData_222ec60 = 0;
            GameData_222ec98 = 0;
            GameData_222eca0 = 0;
            GameData_222eca8 = 0;
            GameData_222ecb0 = 0;
            GameData_222ecb8 = 0;
            GameData_222ecd8 = 0;
            GameData_222f020 = 4;
            GameData_222ece0 = 0;
            GameData_222ece8 = 0;
            GameData_222ecf0 = 0;
            GameData_222ecf8 = 0;
            GameData_222ed00 = 12;
            GameData_222ed10 = 0;
            GameData_222ed18 = 0;
            GameData_222ed08 = 0;
            GameData_222ed20 = 9;
            GameData_222ed28 = 0;
            GameData_222f050 = (__int64)game_menu_anonymous_fdeb20;
            GameData_222ed30 = 0;
            GameData_222ed38 = 0;
            GameData_222ed40 = 2;
            GameData_222ed48 = 0;
            GameData_222ed50 = 0;
            GameData_222ed58 = 0;
            GameData_222ed68 = 0;
            GameData_222ed70 = 0;
            GameData_222ed78 = 0;
            GameData_222ed98 = 0;
            GameData_222f090 = (__int64)game_menu_anonymous_fdecc0;
            GameData_222eda0 = 0;
            GameData_222eda8 = 0;
            GameData_222edb0 = 0;
            GameData_222edb8 = 0;
            GameData_222edc0 = 12;
            GameData_222edd0 = 0;
            GameData_222edd8 = 0;
            GameData_222edc8 = 0;
            GameData_222ede0 = 9;
            GameData_222ede8 = 0;
            GameData_222edf0 = 0;
            GameData_222f120 = 5;
            GameData_222edf8 = 0;
            GameData_222ee00 = 2;
            GameData_222ee08 = 0;
            GameData_222ee10 = 0;
            GameData_222ee18 = 0;
            GameData_222ee20 = 2;
            GameData_222ee28 = 0;
            GameData_222ee30 = 0;
            GameData_222ee38 = 0;
            GameData_222ee48 = 0;
            GameData_222f150 = (__int64)game_menu_anonymous_fdef70;
            GameData_222ee58 = 0;
            GameData_222ee60 = 0;
            GameData_222ee68 = 0;
            GameData_222ee70 = 0;
            GameData_222ee78 = 0;
            GameData_222ee88 = 0;
            GameData_222ee98 = 0;
            GameData_222eea0 = 0;
            GameData_222eea8 = 0;
            GameData_222f190 = (__int64)game_menu_anonymous_fdf100;
            GameData_222eeb0 = 0;
            GameData_222eeb8 = 0;
            GameData_222eec0 = 12;
            GameData_222eed8 = 0;
            GameData_222eed0 = 0;
            GameData_222eec8 = 0;
            GameData_222eee0 = 9;
            GameData_222eee8 = 0;
            GameData_222eef0 = 0;
            GameData_222eef8 = 0;
            GameData_222f220 = 6;
            GameData_222ef00 = 2;
            GameData_222ef08 = 0;
            GameData_222ef10 = 0;
            GameData_222ef18 = 0;
            GameData_222ef28 = 0;
            GameData_222ef30 = 0;
            GameData_222ef38 = 0;
            GameData_222ef48 = 0;
            GameData_222ef50 = (__int64)game_menu_anonymous_fde990;
            GameData_222f250 = (__int64)game_menu_anonymous_fdf3b0;
            GameData_222ef58 = 0;
            GameData_222ef60 = 0;
            GameData_222ef68 = 0;
            GameData_222ef70 = 0;
            GameData_222ef78 = 0;
            GameData_222ef88 = 0;
            GameData_222ef98 = 0;
            GameData_222efa0 = 0;
            GameData_222efa8 = 0;
            GameData_222efb0 = 0;
            GameData_222f2e0 = 7;
            GameData_222efb8 = 0;
            GameData_222efc0 = 12;
            GameData_222efd8 = 0;
            GameData_222efd0 = 0;
            GameData_222efc8 = 0;
            GameData_222efe0 = 9;
            GameData_222efe8 = 0;
            GameData_222eff0 = 0;
            GameData_222eff8 = 0;
            GameData_222f310 = (__int64)game_menu_anonymous_fdf540;
            GameData_222f000 = 2;
            GameData_222f008 = 0;
            GameData_222f010 = 0;
            GameData_222f018 = 0;
            GameData_222f028 = 0;
            GameData_222f030 = 0;
            GameData_222f038 = 0;
            GameData_222f048 = 0;
            GameData_222f058 = 0;
            GameData_222f060 = 0;
            GameData_222f068 = 0;
            GameData_222f070 = 0;
            GameData_222f078 = 0;
            GameData_222f088 = 0;
            GameData_222f098 = 0;
            GameData_222f0a0 = 0;
            GameData_222f0a8 = 0;
            GameData_222f0b0 = 0;
            GameData_222f0b8 = 0;
            GameData_222f0c0 = 12;
            GameData_222f0d8 = 0;
            GameData_222f0d0 = 0;
            GameData_222f0c8 = 0;
            GameData_222f0e0 = 9;
            GameData_222f0e8 = 0;
            GameData_222f0f0 = 0;
            GameData_222f0f8 = 0;
            GameData_222f100 = 2;
            GameData_222f108 = 0;
            GameData_222f110 = 0;
            GameData_222f118 = 0;
            GameData_222f128 = 0;
            GameData_222f130 = 0;
            GameData_222f138 = 0;
            GameData_222f148 = 0;
            GameData_222f158 = 0;
            GameData_222f160 = 0;
            GameData_222f168 = 0;
            GameData_222f170 = 0;
            GameData_222f178 = 0;
            GameData_222f188 = 0;
            GameData_222f198 = 0;
            GameData_222f1a0 = 0;
            GameData_222f1a8 = 0;
            GameData_222f1b0 = 0;
            GameData_222f1b8 = 0;
            GameData_222f1c0 = 12;
            GameData_222f1d8 = 0;
            GameData_222f1d0 = 0;
            GameData_222f1c8 = 0;
            GameData_222f1e0 = 9;
            GameData_222f1e8 = 0;
            GameData_222f1f0 = 0;
            GameData_222f1f8 = 0;
            GameData_222f200 = 2;
            GameData_222f208 = 0;
            GameData_222f210 = 0;
            GameData_222f218 = 0;
            GameData_222f228 = 0;
            GameData_222f230 = 0;
            GameData_222f238 = 0;
            GameData_222f248 = 0;
            GameData_222f258 = 0;
            GameData_222f260 = 0;
            GameData_222f268 = 0;
            GameData_222f270 = 0;
            GameData_222f278 = 0;
            GameData_222f280 = 12;
            GameData_222f298 = 0;
            GameData_222f290 = 0;
            GameData_222f288 = 0;
            GameData_222f2a0 = 9;
            GameData_222f2a8 = 0;
            GameData_222f2b0 = 0;
            GameData_222f2b8 = 0;
            GameData_222f2c0 = 2;
            GameData_222f2c8 = 0;
            GameData_222f2d0 = 0;
            GameData_222f2d8 = 0;
            GameData_222f2e8 = 0;
            GameData_222f2f0 = 0;
            GameData_222f2f8 = 0;
            GameData_222f308 = 0;
            GameData_222f318 = 0;
            GameData_222f320 = 0;
            GameData_222f328 = 0;
            GameData_222f330 = 0;
            GameData_222f338 = 0;
            GameData_222f340 = 12;
            GameData_222f358 = 0;
            GameData_222f350 = 0;
            GameData_222f348 = 0;
            GameData_222f360 = 9;
            GameData_222f368 = 0;
            GameData_222f370 = 0;
            GameData_222f378 = 0;
            GameData_222f380 = 2;
            GameData_222f398 = 0;
            GameData_222f390 = 0;
            GameData_222f388 = 0;
            GameData_222f3a0 = 8;
            GameData_222f3a8 = 0;
            GameData_222f3b0 = 0;
            GameData_222f3b8 = 0;
            GameData_222f3c8 = 0;
            GameData_222f3d0 = (__int64)game_menu_anonymous_fdf6c0;
            GameData_222f3d8 = 0;
            GameData_222f3e0 = 0;
            GameData_222f3e8 = 0;
            GameData_222f3f0 = 0;
            GameData_222f3f8 = 0;
            GameData_222f400 = 12;
            GameData_222f418 = 0;
            GameData_222f410 = 0;
            GameData_222f408 = 0;
            GameData_222f420 = 9;
            GameData_222f428 = 0;
            GameData_222f430 = 0;
            GameData_222f438 = 0;
            GameData_222f440 = 2;
            GameData_222f458 = 0;
            GameData_222f450 = 0;
            GameData_222f448 = 0;
            GameData_222f460 = 9;
            GameData_222f468 = 0;
            GameData_222f470 = 0;
            GameData_222f478 = 0;
            GameData_222f480 = 0;
            GameData_222f4a8 = 0;
            GameData_222f4b0 = 0;
            GameData_222f4b8 = 0;
            GameData_222f4a0 = 0;
            GameData_222f498 = 0;
            GameData_222f490 = 0;
            GameData_222f488 = 0;
            __cxa_guard_release((__int64)&GameData_222f4c0);
          }
          v8 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
          v14 = GameData_212c608[0];
          *(_QWORD*)(v8 + 96) = 0;
          *(_QWORD*)(v8 + 104) = 0;
          *(_QWORD*)(v8 + 112) = 0;
          *(_QWORD*)(v8 + 120) = 0;
          *(_QWORD*)(v8 + 128) = 0;
          *(_WORD*)(v8 + 136) = 0;
          *(_QWORD*)(v8 + 16) = 0;
          *(_QWORD*)(v8 + 24) = "NULL";
          *(_QWORD*)(v8 + 138) = 0;
          *(_QWORD*)(v8 + 144) = 0;
          *(_QWORD*)(v8 + 32) = 0;
          *(_QWORD*)(v8 + 40) = 0;
          *(_QWORD*)(v8 + 48) = 0;
          *(_QWORD*)(v8 + 56) = 0;
          *(_QWORD*)(v8 + 64) = 0;
          *(_QWORD*)(v8 + 72) = 0;
          *(_QWORD*)(v8 + 80) = 0;
          *(_QWORD*)(v8 + 88) = 0;
          *(_QWORD*)v8 = v14 + 16;
          *(_QWORD*)(v8 + 8) = 0;
          game_ProcInst_Register(v8);
          *(_BYTE*)(v8 + 160) = 0;
          *(_BYTE*)(v8 + 168) = 0;
          v10 = &GameData_222ec40;
          v11 = "ZacSeqProc";
          *(_BYTE*)(v8 + 172) = 0;
          *(_DWORD*)(v8 + 164) = 1;
          *(_QWORD*)(v8 + 152) = *a2;
          GameData_222e468 = 0;
          v12 = game_menu_anonymous_ZacSeqProc_vtable;
        }
      }
      else {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222ec38,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_222ec38) != 0) {
          GameData_222e8d8 = 1;
          GameData_222e800 = 0;
          GameData_222e808 = (__int64)game_menu_anonymous_fdd4e0;
          GameData_222e7f8 = 13;
          GameData_222e838 = 13;
          GameData_222e8f8 = 13;
          GameData_222e938 = 13;
          GameData_222e9f8 = 13;
          GameData_222ea38 = 13;
          GameData_222eaf8 = 13;
          GameData_222eb38 = 13;
          GameData_222e900 = 0;
          GameData_222e908 = (__int64)game_menu_anonymous_fdd870;
          GameData_222e840 = 0;
          GameData_222e848 = (__int64)game_menu_anonymous_fdd660;
          GameData_222e7b8 = 2;
          GameData_222e7e0 = 0;
          GameData_222e7e8 = 0;
          GameData_222e7f0 = 0;
          GameData_222e7c0 = 0;
          GameData_222e7c8 = 0;
          GameData_222e940 = 0;
          GameData_222e948 = (__int64)game_menu_anonymous_fdda00;
          GameData_222e7d0 = 0;
          GameData_222e7d8 = 0;
          GameData_222e810 = 0;
          GameData_222e818 = 0;
          GameData_222e820 = 0;
          GameData_222e828 = 0;
          GameData_222e830 = 0;
          GameData_222e850 = 0;
          GameData_222e858 = 0;
          GameData_222ea08 = (__int64)game_menu_anonymous_fdda60;
          GameData_222e860 = 0;
          GameData_222e868 = 0;
          GameData_222e870 = 0;
          GameData_222e878 = 12;
          GameData_222e888 = 0;
          GameData_222e890 = 0;
          GameData_222e880 = 0;
          GameData_222e898 = 4;
          GameData_222e8a0 = 0;
          GameData_222e8a8 = 0;
          GameData_222ea48 = (__int64)game_menu_anonymous_fddbe0;
          GameData_222e8b0 = 0;
          GameData_222e8b8 = 2;
          GameData_222e8c0 = 0;
          GameData_222e8c8 = 0;
          GameData_222e8d0 = 0;
          GameData_222e8e0 = 0;
          GameData_222e8e8 = 0;
          GameData_222e8f0 = 0;
          GameData_222e910 = 0;
          GameData_222e918 = 0;
          GameData_222e920 = 0;
          GameData_222ead8 = 3;
          GameData_222e928 = 0;
          GameData_222e930 = 0;
          GameData_222e950 = 0;
          GameData_222e958 = 0;
          GameData_222e960 = 0;
          GameData_222e968 = 0;
          GameData_222e970 = 0;
          GameData_222e978 = 12;
          GameData_222e988 = 0;
          GameData_222e990 = 0;
          GameData_222e980 = 0;
          GameData_222e998 = 4;
          GameData_222e9a0 = 0;
          GameData_222e9a8 = 0;
          GameData_222e9b0 = 0;
          GameData_222e9b8 = 2;
          GameData_222e9c0 = 0;
          GameData_222e9c8 = 0;
          GameData_222e9d0 = 0;
          GameData_222e9d8 = 2;
          GameData_222e9e0 = 0;
          GameData_222e9e8 = 0;
          GameData_222e9f0 = 0;
          GameData_222ea00 = 0;
          GameData_222ea10 = 0;
          GameData_222ea18 = 0;
          GameData_222ea20 = 0;
          GameData_222ea28 = 0;
          GameData_222ea30 = 0;
          GameData_222ea40 = 0;
          GameData_222ea50 = 0;
          GameData_222ea58 = 0;
          GameData_222ea60 = 0;
          GameData_222ea68 = 0;
          GameData_222ea70 = 0;
          GameData_222ea78 = 12;
          GameData_222ea90 = 0;
          GameData_222ea88 = 0;
          GameData_222ea80 = 0;
          GameData_222ea98 = 4;
          GameData_222eaa0 = 0;
          GameData_222eaa8 = 0;
          GameData_222eab0 = 0;
          GameData_222eab8 = 2;
          GameData_222eac0 = 0;
          GameData_222eac8 = 0;
          GameData_222ead0 = 0;
          GameData_222eae0 = 0;
          GameData_222eae8 = 0;
          GameData_222eaf0 = 0;
          GameData_222eb00 = 0;
          GameData_222eb08 = (__int64)game_menu_anonymous_fddc40;
          GameData_222eb10 = 0;
          GameData_222eb18 = 0;
          GameData_222eb20 = 0;
          GameData_222eb28 = 0;
          GameData_222eb30 = 0;
          GameData_222eb40 = 0;
          GameData_222eb48 = (__int64)game_menu_anonymous_fdddc0;
          GameData_222eb50 = 0;
          GameData_222eb58 = 0;
          GameData_222eb60 = 0;
          GameData_222eb68 = 0;
          GameData_222eb70 = 0;
          GameData_222eb78 = 12;
          GameData_222eb90 = 0;
          GameData_222eb88 = 0;
          GameData_222eb80 = 0;
          GameData_222eb98 = 4;
          GameData_222eba0 = 0;
          GameData_222eba8 = 0;
          GameData_222ebb0 = 0;
          GameData_222ebb8 = 2;
          GameData_222ebc0 = 0;
          GameData_222ebc8 = 0;
          GameData_222ebd0 = 0;
          GameData_222ebd8 = 4;
          GameData_222ebe0 = 0;
          GameData_222ebe8 = 0;
          GameData_222ebf0 = 0;
          GameData_222ebf8 = 0;
          GameData_222ec20 = 0;
          GameData_222ec28 = 0;
          GameData_222ec30 = 0;
          GameData_222ec18 = 0;
          GameData_222ec10 = 0;
          GameData_222ec08 = 0;
          GameData_222ec00 = 0;
          __cxa_guard_release((__int64)&GameData_222ec38);
        }
        v8 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
        v13 = GameData_212c608[0];
        *(_QWORD*)(v8 + 96) = 0;
        *(_QWORD*)(v8 + 104) = 0;
        *(_QWORD*)(v8 + 112) = 0;
        *(_QWORD*)(v8 + 120) = 0;
        *(_QWORD*)(v8 + 128) = 0;
        *(_WORD*)(v8 + 136) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_QWORD*)(v8 + 24) = "NULL";
        *(_QWORD*)(v8 + 138) = 0;
        *(_QWORD*)(v8 + 144) = 0;
        *(_QWORD*)(v8 + 32) = 0;
        *(_QWORD*)(v8 + 40) = 0;
        *(_QWORD*)(v8 + 48) = 0;
        *(_QWORD*)(v8 + 56) = 0;
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 0;
        *(_QWORD*)(v8 + 80) = 0;
        *(_QWORD*)(v8 + 88) = 0;
        *(_QWORD*)v8 = v13 + 16;
        *(_QWORD*)(v8 + 8) = 0;
        game_ProcInst_Register(v8);
        *(_BYTE*)(v8 + 160) = 0;
        *(_BYTE*)(v8 + 168) = 0;
        v10 = &GameData_222e7b8;
        v11 = "YanSeqProc";
        *(_BYTE*)(v8 + 172) = 0;
        *(_DWORD*)(v8 + 164) = 1;
        *(_QWORD*)(v8 + 152) = *a2;
        GameData_222e468 = 0;
        v12 = game_menu_anonymous_YanSeqProc_vtable;
      }
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_222e7b0,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_222e7b0) != 0) {
        GameData_222e4b8 = 0;
        GameData_222e4c0 = (__int64)game_fdccb0;
        GameData_222e590 = 1;
        GameData_222e4b0 = 13;
        GameData_222e4f0 = 13;
        GameData_222e5b0 = 13;
        GameData_222e5f0 = 13;
        GameData_222e6b0 = 13;
        GameData_222e470 = 2;
        GameData_222e4f8 = 0;
        GameData_222e500 = (__int64)game_fdce40;
        GameData_222e5b8 = 0;
        GameData_222e5c0 = (__int64)game_fdd0d0;
        GameData_222e498 = 0;
        GameData_222e4a0 = 0;
        GameData_222e4a8 = 0;
        GameData_222e478 = 0;
        GameData_222e480 = 0;
        GameData_222e488 = 0;
        GameData_222e490 = 0;
        GameData_222e4c8 = 0;
        GameData_222e4d0 = 0;
        GameData_222e4d8 = 0;
        GameData_222e4e0 = 0;
        GameData_222e4e8 = 0;
        GameData_222e508 = 0;
        GameData_222e510 = 0;
        GameData_222e518 = 0;
        GameData_222e520 = 0;
        GameData_222e528 = 0;
        GameData_222e530 = 12;
        GameData_222e540 = 0;
        GameData_222e548 = 0;
        GameData_222e538 = 0;
        GameData_222e550 = 3;
        GameData_222e558 = 0;
        GameData_222e560 = 0;
        GameData_222e568 = 0;
        GameData_222e570 = 2;
        GameData_222e578 = 0;
        GameData_222e580 = 0;
        GameData_222e588 = 0;
        GameData_222e598 = 0;
        GameData_222e5a0 = 0;
        GameData_222e5a8 = 0;
        GameData_222e5c8 = 0;
        GameData_222e5d0 = 0;
        GameData_222e5d8 = 0;
        GameData_222e5e0 = 0;
        GameData_222e5e8 = 0;
        GameData_222e5f8 = 0;
        GameData_222e600 = (__int64)game_fdd260_alt1;
        GameData_222e608 = 0;
        GameData_222e610 = 0;
        GameData_222e618 = 0;
        GameData_222e620 = 0;
        GameData_222e628 = 0;
        GameData_222e630 = 12;
        GameData_222e640 = 0;
        GameData_222e648 = 0;
        GameData_222e638 = 0;
        GameData_222e650 = 3;
        GameData_222e658 = 0;
        GameData_222e660 = 0;
        GameData_222e668 = 0;
        GameData_222e670 = 2;
        GameData_222e678 = 0;
        GameData_222e680 = 0;
        GameData_222e688 = 0;
        GameData_222e690 = 2;
        GameData_222e698 = 0;
        GameData_222e6a0 = 0;
        GameData_222e6a8 = 0;
        GameData_222e6b8 = 0;
        GameData_222e6c0 = (__int64)game_fdd2c0;
        GameData_222e6c8 = 0;
        GameData_222e6d0 = 0;
        GameData_222e6d8 = 0;
        GameData_222e6e0 = 0;
        GameData_222e6e8 = 0;
        GameData_222e6f0 = 12;
        GameData_222e708 = 0;
        GameData_222e700 = 0;
        GameData_222e6f8 = 0;
        GameData_222e710 = 3;
        GameData_222e718 = 0;
        GameData_222e720 = 0;
        GameData_222e728 = 0;
        GameData_222e730 = 2;
        GameData_222e738 = 0;
        GameData_222e740 = 0;
        GameData_222e748 = 0;
        GameData_222e750 = 3;
        GameData_222e758 = 0;
        GameData_222e760 = 0;
        GameData_222e768 = 0;
        GameData_222e770 = 0;
        GameData_222e798 = 0;
        GameData_222e7a0 = 0;
        GameData_222e7a8 = 0;
        GameData_222e790 = 0;
        GameData_222e788 = 0;
        GameData_222e780 = 0;
        GameData_222e778 = 0;
        __cxa_guard_release((__int64)&GameData_222e7b0);
      }
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
      v9 = GameData_212c608[0];
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 104) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = 0;
      *(_QWORD*)(v8 + 128) = 0;
      *(_WORD*)(v8 + 136) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 24) = "NULL";
      *(_QWORD*)(v8 + 138) = 0;
      *(_QWORD*)(v8 + 144) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_QWORD*)(v8 + 80) = 0;
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)v8 = v9 + 16;
      *(_QWORD*)(v8 + 8) = 0;
      game_ProcInst_Register(v8);
      v10 = &GameData_222e470;
      v11 = "SimSeqProc";
      *(_BYTE*)(v8 + 160) = 0;
      *(_BYTE*)(v8 + 168) = 0;
      *(_BYTE*)(v8 + 172) = 0;
      *(_DWORD*)(v8 + 164) = 1;
      *(_QWORD*)(v8 + 152) = *a2;
      GameData_222e468 = 0;
      v12 = game_menu__fe5ef0_ptr;
    }
    *(_QWORD*)v8 = v12;
    return ProcInst_657850(v8, (__int64)v10, v11, 1, a1);
  }
  return result;
}

__int64 game_fdd260(__int64 result)
{
  __int64 v1;

  if (game_script_hub_talk_g_choice_menu_result == 1) {
    GameData_222e468 = 1;
  }
  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 3) {
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

__int64 game_13742f4() { return GameRoutine_2b0(); }

void game_170c850(__int64 a1)
{
  int v1;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  if (GameData_2262ae0 == 0) {
    return;
  }
  v3 = LayoutAccessor_155fbe0((__int64*)(GameData_2262ae0 + 168),
                              "L_BranchMenu");
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1056, 16, 0);
  v6 = v3[1];
  v18_.v18 = 0;
  v18_.v19 = 0;
  if (v6 != 0) {
    v18_.v19 = std___1___shared_weak_count_lock(v6);
    if (v18_.v19 != 0) {
      v18_.v18 = *v3;
    }
  }
  if (v3[2] == 0) {
    goto LABEL_20;
  }
  v7 = v3[1];
  if (v7 == 0) {
    goto LABEL_20;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_15;
  }
  v9 = *v3;
  if (*v3 != 0) {
    v1 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v1 == 0) {
      v10 = 0;
    }
    v11 = v10 != v3[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
    LABEL_15:
      v12 = v3[1];
      if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
        goto LABEL_17;
      }
    LABEL_20:
      v13 = 0;
      goto LABEL_21;
    }
  }
  else {
    v14 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v14);
    if (v11) {
      goto LABEL_15;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_20;
  }
LABEL_17:
  v13 = v3[2];
LABEL_21:
  BasicMenu_16dcd30((__int64)v5, (__int64)"GazeBranchMenu", &v18_.v18, v13);
  v15 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  *v5 = game_facility_anonymous_GazeBranchMenu_vtable;
  v5[22] = game_menu_MenuInput_InputUnknown00_ptr_20ab028;
  ProcInst_657850((__int64)v5, (__int64)GameData_212c730, "GazeBranchMenu", 1,
                  a1);
  v16 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0);
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_BYTE*)(v16 + 17) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_BYTE*)(v16 + 82) = 1;
  *(_WORD*)(v16 + 80) = 257;
  *(_QWORD*)v16 = game_facility_anonymous_GazeMenuItem_vtable;
  *(_QWORD*)(v16 + 8) = 0;
  BasicMenuCursor_16e0c00(v5, v16);
  v17 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0);
  *(_QWORD*)(v17 + 72) = 0;
  *(_QWORD*)(v17 + 80) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_BYTE*)(v17 + 17) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_WORD*)(v17 + 80) = 257;
  *(_BYTE*)(v17 + 82) = 1;
  *(_QWORD*)v17 = game_facility_anonymous_CancelMenuItem_vtable;
  *(_QWORD*)(v17 + 8) = 0;
  BasicMenuCursor_16e0c00(v5, v17);
}

void game_1720da0(__int64 a1)
{
  int v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  unsigned int* v14;
  unsigned int v15;
  unsigned int v16;
  _QWORD* v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;

  v2 = GameData_21668e0++;
  if (v2 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v13 = *(_QWORD**)GameData_212d6e8;
    save_Task_Mount(**(_QWORD**)GameData_212d6e8);
    v14 = (unsigned int*)(*v13 + 804LL);
    v15 = atomic_load(v14);
    if (v15 != 0) {
      do {
        nn_os_YieldThread();
        v16 = atomic_load(v14);
      } while (v16 != 0);
    }
  }
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1104, 16, 0);
  v21_.v21 = 0;
  v21_.v22 = 0;
  BasicMenu_16dcd30(v4, (__int64)"ObelistkHero2Menu", &v21_.v21, 0);
  v5 = GameData_212d6a8;
  v6 = v21_.v22;
  *(_QWORD*)v4 = GameData_212d6a8 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 143;
  *(_QWORD*)(v4 + 1056) = v5 + 169;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *v3;
  *(_QWORD*)(v4 + 1064) = 0;
  *(_BYTE*)(v4 + 1072) = 0;
  *(_QWORD*)v4 = game_facility_anonymous_ProcUnitSelectMenu_vtable;
  *(_QWORD*)(v4 + 176) = GameData_20b12b8;
  *(_QWORD*)(v4 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20b1388;
  v8 = fw_memory_HeapManager_Allocate(v7, 296, 16, 0);
  *(_QWORD*)(v8 + 16) = 0;
  v9 = GameData_2131678;
  *(_DWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_DWORD*)(v8 + 48) = 0x2000;
  *(_DWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_WORD*)(v8 + 80) = 0;
  *(_WORD*)(v8 + 116) = 0;
  *(_WORD*)(v8 + 136) = 0;
  *(_BYTE*)(v8 + 160) = 0;
  *(_BYTE*)(v8 + 288) = 0;
  *(_QWORD*)(v8 + 272) = 0;
  *(_QWORD*)(v8 + 280) = 0;
  *(_QWORD*)(v8 + 256) = 0;
  *(_QWORD*)(v8 + 264) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_QWORD*)(v8 + 248) = 0;
  *(_QWORD*)(v8 + 224) = 0;
  *(_QWORD*)(v8 + 232) = 0;
  *(_QWORD*)(v8 + 208) = 0;
  *(_QWORD*)(v8 + 216) = 0;
  *(_QWORD*)(v8 + 192) = 0;
  *(_QWORD*)(v8 + 200) = 0;
  *(_QWORD*)(v8 + 176) = 0;
  *(_QWORD*)(v8 + 184) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_DWORD*)(v8 + 127) = 0;
  *(_QWORD*)(v4 + 1088) = v8;
  *(_QWORD*)v8 = v9 + 16;
  *(_QWORD*)(v8 + 8) = 0;
  *(_WORD*)(v8 + 108) = 256;
  *(_DWORD*)(v8 + 112) = -1082130432;
  *(_DWORD*)(v8 + 292) = 2;
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(v4 + 1080) = v8 + 24;
  GameRoutine_717660();
  ProcInst_657850(v4, (__int64)GameData_212c730, "ProcUnitSelectMenu", 1, a1);
  v11 = *(_QWORD**)(v4 + 256);
  v10 = *(_QWORD**)(v4 + 264);
  *(_QWORD*)(v4 + 336) = 0;
  while (v11 != v10) {
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
      v10 = *(_QWORD**)(v4 + 264);
    }
    ++v11;
  }
  v12 = *(_QWORD*)(v4 + 344);
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    *(_QWORD*)(v4 + 344) = 0;
  }
  *(_QWORD*)(v4 + 264) = *(_QWORD*)(v4 + 256);
  *(_QWORD*)(v4 + 240) = *(_QWORD*)(v4 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1024LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1032LL))(v4);
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v17 = *(_QWORD**)GameData_212d6e8;
    save_18d3a00(**(_QWORD**)GameData_212d6e8);
    v18 = (unsigned int*)(*v17 + 804LL);
    v19 = atomic_load(v18);
    if (v19 != 0) {
      do {
        nn_os_YieldThread();
        v20 = atomic_load(v18);
      } while (v20 != 0);
    }
  }
}

__int64 game_17e3c94() { return GameRoutine_2b0(); }

__int64 game_1844220(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    __int64 v15;
    __int64 v16;
    char gap16_[28];
    int v17;
  } v15_;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  GameRoutine_1a0ba50(v2, 0, 0x430u);
  v15_.v15 = 0;
  v15_.v16 = 0;
  BasicMenu_16dcd30(v2, (__int64)"QuestBoard", &v15_.v15, 0);
  v3 = GameData_212d6a8;
  v4 = v15_.v16;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_BYTE*)(v2 + 1064) = 0;
  *(_QWORD*)(v2 + 656) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  *(_QWORD*)v2 = game_menu_anonymous_ProcQuestBoard_vtable;
  v15_.v17 = 0;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20e58d0;
  v5 = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20e5800;
  *(_QWORD*)(v2 + 792) = v5;
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40((__int64*)(v2 + 784), 1u, &v15_.v17);
  v6 = *(_QWORD*)(v2 + 816);
  v7 = *(_QWORD*)(v2 + 808);
  v15_.v17 = 0;
  v9 = v6 - v7;
  v8 = v9 == 0;
  v10 = v9 >> 2;
  if (v8) {
    GameRoutine_6e5a40((__int64*)(v2 + 808), 1 - v10, &v15_.v17);
  }
  else if (v10 >= 2) {
    *(_QWORD*)(v2 + 816) = v7 + 4;
  }
  *(_QWORD*)v2 = game_menu_anonymous_ProcProcurement_vtable;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20e6c08;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20e6cd8;
  ProcInst_657850(v2, (__int64)GameData_212c730, "ProcProcurement", 1, a1);
  v12 = *(_QWORD**)(v2 + 256);
  v11 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v12 != v11) {
    if (*v12 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v12 + 8LL))(*v12);
      v11 = *(_QWORD**)(v2 + 264);
    }
    ++v12;
  }
  v13 = *(_QWORD*)(v2 + 344);
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
  return v2;
}

__int64 game_1963b44() { return GameRoutine_2b0(); }

__int64 game_197ac60(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      472, 16, 0);
  GameRoutine_1494e30(v5);
  *(_QWORD*)v5 = game_facility_anonymous_ProcTrainingMotion_vtable;
  *(_QWORD*)(v5 + 152) = ProcTrainingMotion_Destructor_197bc00_ptr;
  v6 = GameData_2131450[0];
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 184) = ProcTrainingMotion_Destructor_197bd40_ptr;
  *(_QWORD*)(v5 + 192) = v6 + 2;
  *(_QWORD*)(v5 + 200) = v6 + 8;
  *(_QWORD*)(v5 + 208) = 0;
  v8 = *(_QWORD*)(a2 + 16);
  v7 = *(_QWORD*)(a2 + 24);
  v9 = v7 - v8;
  if (v7 != v8) {
    if ((v9 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60();
    }
    v10 = fw_memory_HeapManager_Allocate(*v4, v7 - v8, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(v5 + 208) = v10;
    *(_QWORD*)(v5 + 216) = v10;
    *(_QWORD*)(v5 + 224) = v10 + v9;
    GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(v5 + 216) = v11;
  }
  v12 = *(_QWORD*)(a2 + 64);
  v13 = *(_DWORD*)(a2 + 72);
  *(_QWORD*)(v5 + 248) = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(v5 + 256) = v12;
  v15 = *(_QWORD*)(a2 + 40);
  v14 = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v5 + 264) = v13;
  v16 = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v5 + 232) = v15;
  *(_QWORD*)(v5 + 240) = v14;
  LODWORD(v14) = *(_DWORD*)(a2 + 88);
  LODWORD(v15) = *(_DWORD*)(a2 + 92);
  *(_QWORD*)(v5 + 272) = v16;
  *(_DWORD*)(v5 + 280) = v14;
  *(_DWORD*)(v5 + 284) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 100);
  *(_DWORD*)(v5 + 288) = *(_DWORD*)(a2 + 96);
  *(_DWORD*)(v5 + 292) = v15;
  v17 = *(_QWORD*)(a2 + 160);
  *(_QWORD*)(v5 + 344) = *(_QWORD*)(a2 + 152);
  *(_QWORD*)(v5 + 352) = v17;
  *(_QWORD*)(v5 + 296) = *(_QWORD*)(a2 + 104);
  *(_DWORD*)(v5 + 304) = *(_DWORD*)(a2 + 112);
  *(_QWORD*)(v5 + 308) = *(_QWORD*)(a2 + 116);
  *(_QWORD*)(v5 + 316) = *(_QWORD*)(a2 + 124);
  LODWORD(v15) = *(_DWORD*)(a2 + 136);
  *(_DWORD*)(v5 + 324) = *(_DWORD*)(a2 + 132);
  *(_DWORD*)(v5 + 328) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v5 + 332) = *(_DWORD*)(a2 + 140);
  LODWORD(v14) = *(_DWORD*)(a2 + 148);
  *(_DWORD*)(v5 + 336) = v15;
  *(_DWORD*)(v5 + 340) = v14;
  *(_QWORD*)(v5 + 368) = *(_QWORD*)(a2 + 176);
  LODWORD(v15) = *(_DWORD*)(a2 + 188);
  *(_DWORD*)(v5 + 376) = *(_DWORD*)(a2 + 184);
  *(_DWORD*)(v5 + 380) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 196);
  *(_DWORD*)(v5 + 384) = *(_DWORD*)(a2 + 192);
  v18 = *(_QWORD*)(a2 + 248);
  v19 = *(_QWORD*)(a2 + 256);
  *(_DWORD*)(v5 + 388) = v15;
  *(_QWORD*)(v5 + 440) = v18;
  *(_QWORD*)(v5 + 448) = v19;
  LODWORD(v15) = *(_DWORD*)(a2 + 204);
  *(_DWORD*)(v5 + 392) = *(_DWORD*)(a2 + 200);
  *(_DWORD*)(v5 + 396) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 212);
  *(_DWORD*)(v5 + 400) = *(_DWORD*)(a2 + 208);
  *(_DWORD*)(v5 + 404) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 220);
  *(_DWORD*)(v5 + 408) = *(_DWORD*)(a2 + 216);
  *(_DWORD*)(v5 + 412) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 228);
  *(_DWORD*)(v5 + 416) = *(_DWORD*)(a2 + 224);
  *(_DWORD*)(v5 + 420) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 236);
  *(_DWORD*)(v5 + 424) = *(_DWORD*)(a2 + 232);
  *(_DWORD*)(v5 + 428) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 244);
  *(_DWORD*)(v5 + 432) = *(_DWORD*)(a2 + 240);
  v20 = *(_QWORD*)(a2 + 272);
  *(_DWORD*)(v5 + 436) = v15;
  *(_QWORD*)(v5 + 464) = v20;
  return ProcInst_657850(v5, (__int64)GameData_212e1f0, "ProcTrainingMotion", 1,
                         a1);
}

#pragma GCC visibility pop
