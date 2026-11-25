#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void TroopMgr_134bbe0(PSEUDO_X8, __int64);
__int64 GameRoutine_14c6ac0();
__int64 GameRoutine_14c6b80();
__int64 GameRoutine_14c7180();
__int64 GameRoutine_14c8b10();
__int64 GameRoutine_14c9af0();
__int64 GameRoutine_14c9b00();
__int64 GameRoutine_14c9ec0();
__int64 GameRoutine_14ca320();
__int64 GameRoutine_14ca330();
__int64 GameRoutine_14cb170();
__int64 GameRoutine_14cd0c0(__int64, __int64);
__int64 GameRoutine_1546f80();
__int64 GameRoutine_17b8e80(__int64, char);
__int64 LayoutAccessor_1555150(__int64, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Message_16f9b50(__int64, __int64*, __int64*);
__int64 ProcGmapPhaseSeq_14c6e20();
__int64 ProcGmapPhaseSeq_14c6e70();
__int64 ProcGmapPhaseSeq_14c7300();
__int64 ProcGmapPhaseSeq_14c75b0();
__int64 ProcGmapPhaseSeq_14c7610();
__int64 ProcGmapPhaseSeq_14c77a0();
__int64 ProcGmapPhaseSeq_14c7b50();
__int64 ProcGmapPhaseSeq_14c7e30();
__int64 ProcGmapPhaseSeq_14c7eb0();
__int64 ProcGmapPhaseSeq_14c8ac0();
__int64 ProcGmapPhaseSeq_14c8ba0();
__int64 ProcGmapPhaseSeq_14c9220();
__int64 ProcGmapPhaseSeq_14c92a0();
__int64 ProcGmapPhaseSeq_14c9540();
__int64 ProcGmapPhaseSeq_14c9620();
__int64 ProcGmapPhaseSeq_14c9820();
__int64 ProcGmapPhaseSeq_14c9b20();
__int64 ProcGmapPhaseSeq_14c9d40();
__int64 ProcGmapPhaseSeq_14c9e20();
__int64 ProcGmapPhaseSeq_14c9ed0();
__int64 ProcGmapPhaseSeq_14c9fa0();
__int64 ProcGmapPhaseSeq_14ca030();
__int64 ProcGmapPhaseSeq_14ca100();
__int64 ProcGmapPhaseSeq_14ca180();
__int64 ProcGmapPhaseSeq_14ca250();
__int64 ProcGmapPhaseSeq_14ca340();
__int64 ProcGmapPhaseSeq_14ca660();
__int64 ProcGmapPhaseSeq_14ca830();
__int64 ProcGmapPhaseSeq_14caa60();
__int64 ProcGmapPhaseSeq_14cabc0();
__int64 ProcGmapPhaseSeq_14cad00();
__int64 ProcGmapPhaseSeq_14caee0();
__int64 ProcGmapPhaseSeq_14cb0d0();
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_809ba0(__int64, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_gmap_14c6c60_alt1();
__int64 game_gmap_14c7e20_alt1();
__int64 game_gmap_14c7ee0_alt1();
__int64 game_gmap_14c7f20_alt1();
__int64 game_gmap_14ca6b0_alt1();
__int64 game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(__int64, char);
__int64 game_gmap_ProcGmapMove_CheckContinueMove();
__int64 game_gmap_ProcGmapPhaseSeq_CalcBeforeSpotMenu();
__int64 game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma();
__int64 game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto();
__int64 game_gmap_ProcGmapPhaseSeq_CycleGrowPart3();
__int64 game_gmap_ProcGmapPhaseSeq_EndOtherPhase();
__int64 game_gmap_ProcGmapPhaseSeq_FreeCursorTick();
bool GmapSituation_14db2f0();
char* GameRoutine_adf970(__int64, char);
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1acc6e7;
extern _UNKNOWN GameData_22506d8;
extern _UNKNOWN GameData_2257008;
extern __int64 (*GameData_212d0e0[17])();
extern __int64 (*GameData_2130e18)();
extern __int64 (*GameData_21316d0[2])();
extern __int64 (*GameData_21316d8)();
extern __int64 (*RelianceCheck_19a8080_ptr_212dd40[3])();
extern __int64 (*TroopMgr_134a480_ptr[12])();
extern __int64 (*game_gmap_ProcGmapMove_vtable[])();
extern __int64 (*game_gmap_ProcGmapPhaseSeq_vtable[])();
extern __int64* GameData_212c790;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2131678;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1668;
extern __int64 GameData_22416c0;
extern __int64 GameData_224ece0;
extern __int64 GameData_224ece8;
extern __int64 GameData_224ecf0;
extern __int64 GameData_224ed00;
extern __int64 GameData_224ed10;
extern __int64 GameData_224ed20;
extern __int64 GameData_224ed28;
extern __int64 GameData_224ed30;
extern __int64 GameData_224ed40;
extern __int64 GameData_224ed50;
extern __int64 GameData_224ed60;
extern __int64 GameData_224ed68;
extern __int64 GameData_224ed70;
extern __int64 GameData_224ed80;
extern __int64 GameData_224ed90;
extern __int64 GameData_224eda0;
extern __int64 GameData_224eda8;
extern __int64 GameData_224edb0;
extern __int64 GameData_224edc0;
extern __int64 GameData_224edd0;
extern __int64 GameData_224ede0;
extern __int64 GameData_224ede8;
extern __int64 GameData_224edf0;
extern __int64 GameData_224ee00;
extern __int64 GameData_224ee10;
extern __int64 GameData_224ee20;
extern __int64 GameData_224ee28;
extern __int64 GameData_224ee30;
extern __int64 GameData_224ee40;
extern __int64 GameData_224ee50;
extern __int64 GameData_224ee60;
extern __int64 GameData_224ee68;
extern __int64 GameData_224ee70;
extern __int64 GameData_224ee80;
extern __int64 GameData_224ee90;
extern __int64 GameData_224eea0;
extern __int64 GameData_224eea8;
extern __int64 GameData_224eeb0;
extern __int64 GameData_224eec0;
extern __int64 GameData_224eed0;
extern __int64 GameData_224eee0;
extern __int64 GameData_224eee8;
extern __int64 GameData_224eef0;
extern __int64 GameData_224ef00;
extern __int64 GameData_224ef10;
extern __int64 GameData_224ef20;
extern __int64 GameData_224ef28;
extern __int64 GameData_224ef30;
extern __int64 GameData_224ef40;
extern __int64 GameData_224ef50;
extern __int64 GameData_224ef60;
extern __int64 GameData_224ef68;
extern __int64 GameData_224ef70;
extern __int64 GameData_224ef80;
extern __int64 GameData_224ef90;
extern __int64 GameData_224efa0;
extern __int64 GameData_224efa8;
extern __int64 GameData_224efb0;
extern __int64 GameData_224efc0;
extern __int64 GameData_224efd0;
extern __int64 GameData_224efe0;
extern __int64 GameData_224efe8;
extern __int64 GameData_224eff0;
extern __int64 GameData_224f000;
extern __int64 GameData_224f010;
extern __int64 GameData_224f020;
extern __int64 GameData_224f028;
extern __int64 GameData_224f030;
extern __int64 GameData_224f040;
extern __int64 GameData_224f050;
extern __int64 GameData_224f060;
extern __int64 GameData_224f068;
extern __int64 GameData_224f070;
extern __int64 GameData_224f080;
extern __int64 GameData_224f090;
extern __int64 GameData_224f0a0;
extern __int64 GameData_224f0a8;
extern __int64 GameData_224f0c0;
extern __int64 GameData_224f0d0;
extern __int64 GameData_224f0e0;
extern __int64 GameData_224f0e8;
extern __int64 GameData_224f0f0;
extern __int64 GameData_224f100;
extern __int64 GameData_224f110;
extern __int64 GameData_224f120;
extern __int64 GameData_224f128;
extern __int64 GameData_224f140;
extern __int64 GameData_224f150;
extern __int64 GameData_224f160;
extern __int64 GameData_224f168;
extern __int64 GameData_224f170;
extern __int64 GameData_224f180;
extern __int64 GameData_224f190;
extern __int64 GameData_224f1a0;
extern __int64 GameData_224f1a8;
extern __int64 GameData_224f1b0;
extern __int64 GameData_224f1c0;
extern __int64 GameData_224f1d0;
extern __int64 GameData_224f1e0;
extern __int64 GameData_224f1e8;
extern __int64 GameData_224f1f0;
extern __int64 GameData_224f200;
extern __int64 GameData_224f210;
extern __int64 GameData_224f220;
extern __int64 GameData_224f228;
extern __int64 GameData_224f230;
extern __int64 GameData_224f240;
extern __int64 GameData_224f250;
extern __int64 GameData_224f260;
extern __int64 GameData_224f268;
extern __int64 GameData_224f270;
extern __int64 GameData_224f280;
extern __int64 GameData_224f290;
extern __int64 GameData_224f2a0;
extern __int64 GameData_224f2a8;
extern __int64 GameData_224f2b0;
extern __int64 GameData_224f2c0;
extern __int64 GameData_224f2d0;
extern __int64 GameData_224f2e0;
extern __int64 GameData_224f2e8;
extern __int64 GameData_224f2f0;
extern __int64 GameData_224f300;
extern __int64 GameData_224f310;
extern __int64 GameData_224f320;
extern __int64 GameData_224f328;
extern __int64 GameData_224f330;
extern __int64 GameData_224f340;
extern __int64 GameData_224f350;
extern __int64 GameData_224f360;
extern __int64 GameData_224f368;
extern __int64 GameData_224f370;
extern __int64 GameData_224f380;
extern __int64 GameData_224f390;
extern __int64 GameData_224f3a0;
extern __int64 GameData_224f3a8;
extern __int64 GameData_224f3b0;
extern __int64 GameData_224f3c0;
extern __int64 GameData_224f3d0;
extern __int64 GameData_224f3e0;
extern __int64 GameData_224f3e8;
extern __int64 GameData_224f3f0;
extern __int64 GameData_224f400;
extern __int64 GameData_224f410;
extern __int64 GameData_224f420;
extern __int64 GameData_224f428;
extern __int64 GameData_224f430;
extern __int64 GameData_224f440;
extern __int64 GameData_224f450;
extern __int64 GameData_224f460;
extern __int64 GameData_224f468;
extern __int64 GameData_224f470;
extern __int64 GameData_224f480;
extern __int64 GameData_224f490;
extern __int64 GameData_224f4a0;
extern __int64 GameData_224f4a8;
extern __int64 GameData_224f4b0;
extern __int64 GameData_224f4c0;
extern __int64 GameData_224f4d0;
extern __int64 GameData_224f4e0;
extern __int64 GameData_224f4e8;
extern __int64 GameData_224f4f0;
extern __int64 GameData_224f500;
extern __int64 GameData_224f510;
extern __int64 GameData_224f520;
extern __int64 GameData_224f528;
extern __int64 GameData_224f530;
extern __int64 GameData_224f540;
extern __int64 GameData_224f550;
extern __int64 GameData_224f560;
extern __int64 GameData_224f568;
extern __int64 GameData_224f570;
extern __int64 GameData_224f580;
extern __int64 GameData_224f590;
extern __int64 GameData_224f5a0;
extern __int64 GameData_224f5a8;
extern __int64 GameData_224f5b0;
extern __int64 GameData_224f5c0;
extern __int64 GameData_224f5d0;
extern __int64 GameData_224f5e0;
extern __int64 GameData_224f5e8;
extern __int64 GameData_224f5f0;
extern __int64 GameData_224f600;
extern __int64 GameData_224f610;
extern __int64 GameData_224f620;
extern __int64 GameData_224f628;
extern __int64 GameData_224f630;
extern __int64 GameData_224f640;
extern __int64 GameData_224f650;
extern __int64 GameData_224f660;
extern __int64 GameData_224f668;
extern __int64 GameData_224f670;
extern __int64 GameData_224f680;
extern __int64 GameData_224f690;
extern __int64 GameData_224f6a0;
extern __int64 GameData_224f6a8;
extern __int64 GameData_224f6b0;
extern __int64 GameData_224f6c0;
extern __int64 GameData_224f6d0;
extern __int64 GameData_224f6e0;
extern __int64 GameData_224f6e8;
extern __int64 GameData_224f6f0;
extern __int64 GameData_224f700;
extern __int64 GameData_224f710;
extern __int64 GameData_224f720;
extern __int64 GameData_224f728;
extern __int64 GameData_224f730;
extern __int64 GameData_224f740;
extern __int64 GameData_224f750;
extern __int64 GameData_224f760;
extern __int64 GameData_224f768;
extern __int64 GameData_224f770;
extern __int64 GameData_224f780;
extern __int64 GameData_224f790;
extern __int64 GameData_224f7a0;
extern __int64 GameData_224f7a8;
extern __int64 GameData_224f7b0;
extern __int64 GameData_224f7c0;
extern __int64 GameData_224f7d0;
extern __int64 GameData_224f7e0;
extern __int64 GameData_224f7e8;
extern __int64 GameData_224f7f0;
extern __int64 GameData_224f800;
extern __int64 GameData_224f810;
extern __int64 GameData_224f820;
extern __int64 GameData_224f828;
extern __int64 GameData_224f830;
extern __int64 GameData_224f840;
extern __int64 GameData_224f850;
extern __int64 GameData_224f860;
extern __int64 GameData_224f868;
extern __int64 GameData_224f870;
extern __int64 GameData_224f880;
extern __int64 GameData_224f890;
extern __int64 GameData_224f8a0;
extern __int64 GameData_224f8a8;
extern __int64 GameData_224f8b0;
extern __int64 GameData_224f8c0;
extern __int64 GameData_224f8d0;
extern __int64 GameData_224f8e0;
extern __int64 GameData_224f8e8;
extern __int64 GameData_224f8f0;
extern __int64 GameData_224f900;
extern __int64 GameData_224f910;
extern __int64 GameData_224f920;
extern __int64 GameData_224f928;
extern __int64 GameData_224f930;
extern __int64 GameData_224f940;
extern __int64 GameData_224f950;
extern __int64 GameData_224f960;
extern __int64 GameData_224f968;
extern __int64 GameData_224f970;
extern __int64 GameData_224f980;
extern __int64 GameData_224f990;
extern __int64 GameData_224f9a0;
extern __int64 GameData_224f9a8;
extern __int64 GameData_224f9b0;
extern __int64 GameData_224f9c0;
extern __int64 GameData_224f9d0;
extern __int64 GameData_224f9e0;
extern __int64 GameData_224f9e8;
extern __int64 GameData_224f9f0;
extern __int64 GameData_224fa00;
extern __int64 GameData_224fa10;
extern __int64 GameData_224fa20;
extern __int64 GameData_224fa28;
extern __int64 GameData_224fa30;
extern __int64 GameData_224fa40;
extern __int64 GameData_224fa50;
extern __int64 GameData_224fa60;
extern __int64 GameData_224fa68;
extern __int64 GameData_224fa70;
extern __int64 GameData_224fa80;
extern __int64 GameData_224fa90;
extern __int64 GameData_224faa0;
extern __int64 GameData_224faa8;
extern __int64 GameData_224fab0;
extern __int64 GameData_224fac0;
extern __int64 GameData_224fad0;
extern __int64 GameData_224fae0;
extern __int64 GameData_224fae8;
extern __int64 GameData_224faf0;
extern __int64 GameData_224fb00;
extern __int64 GameData_224fb10;
extern __int64 GameData_224fb20;
extern __int64 GameData_224fb28;
extern __int64 GameData_224fb30;
extern __int64 GameData_224fb40;
extern __int64 GameData_224fb50;
extern __int64 GameData_224fb60;
extern __int64 GameData_224fb68;
extern __int64 GameData_224fb70;
extern __int64 GameData_224fb80;
extern __int64 GameData_224fb90;
extern __int64 GameData_224fba0;
extern __int64 GameData_224fba8;
extern __int64 GameData_224fbb0;
extern __int64 GameData_224fbc0;
extern __int64 GameData_224fbd0;
extern __int64 GameData_224fbe0;
extern __int64 GameData_224fbe8;
extern __int64 GameData_224fbf0;
extern __int64 GameData_224fc00;
extern __int64 GameData_224fc10;
extern __int64 GameData_224fc20;
extern __int64 GameData_224fc28;
extern __int64 GameData_224fc30;
extern __int64 GameData_224fc40;
extern __int64 GameData_224fc50;
extern __int64 GameData_224fc60;
extern __int64 GameData_224fc68;
extern __int64 GameData_224fc70;
extern __int64 GameData_224fc80;
extern __int64 GameData_224fc90;
extern __int64 GameData_224fca0;
extern __int64 GameData_224fca8;
extern __int64 GameData_224fcb0;
extern __int64 GameData_224fcc0;
extern __int64 GameData_224fcd0;
extern __int64 GameData_224fce0;
extern __int64 GameData_224fce8;
extern __int64 GameData_224fcf0;
extern __int64 GameData_224fd00;
extern __int64 GameData_224fd10;
extern __int64 GameData_224fd20;
extern __int64 GameData_224fd28;
extern __int64 GameData_224fd30;
extern __int64 GameData_224fd40;
extern __int64 GameData_224fd50;
extern __int64 GameData_224fd60;
extern __int64 GameData_224fd68;
extern __int64 GameData_224fd70;
extern __int64 GameData_224fd80;
extern __int64 GameData_224fd90;
extern __int64 GameData_224fda0;
extern __int64 GameData_224fda8;
extern __int64 GameData_224fdb0;
extern __int64 GameData_224fdc0;
extern __int64 GameData_224fdd0;
extern __int64 GameData_224fde0;
extern __int64 GameData_224fde8;
extern __int64 GameData_224fdf0;
extern __int64 GameData_224fe00;
extern __int64 GameData_224fe10;
extern __int64 GameData_224fe20;
extern __int64 GameData_224fe28;
extern __int64 GameData_224fe30;
extern __int64 GameData_224fe40;
extern __int64 GameData_224fe50;
extern __int64 GameData_224fe60;
extern __int64 GameData_224fe68;
extern __int64 GameData_224fe70;
extern __int64 GameData_224fe80;
extern __int64 GameData_224fe90;
extern __int64 GameData_224fea0;
extern __int64 GameData_224fea8;
extern __int64 GameData_224feb0;
extern __int64 GameData_224fec0;
extern __int64 GameData_224fed0;
extern __int64 GameData_224fee0;
extern __int64 GameData_224fee8;
extern __int64 GameData_224fef0;
extern __int64 GameData_224ff00;
extern __int64 GameData_224ff10;
extern __int64 GameData_224ff20;
extern __int64 GameData_224ff28;
extern __int64 GameData_224ff30;
extern __int64 GameData_224ff40;
extern __int64 GameData_224ff50;
extern __int64 GameData_224ff60;
extern __int64 GameData_224ff68;
extern __int64 GameData_224ff70;
extern __int64 GameData_224ff80;
extern __int64 GameData_224ff90;
extern __int64 GameData_224ffa0;
extern __int64 GameData_224ffa8;
extern __int64 GameData_224ffb0;
extern __int64 GameData_224ffc0;
extern __int64 GameData_224ffd0;
extern __int64 GameData_224ffe0;
extern __int64 GameData_224ffe8;
extern __int64 GameData_224fff0;
extern __int64 GameData_2250000;
extern __int64 GameData_2250010;
extern __int64 GameData_2250020;
extern __int64 GameData_2250028;
extern __int64 GameData_2250030;
extern __int64 GameData_2250040;
extern __int64 GameData_2250050;
extern __int64 GameData_2250060;
extern __int64 GameData_2250068;
extern __int64 GameData_2250070;
extern __int64 GameData_2250080;
extern __int64 GameData_2250090;
extern __int64 GameData_22500a0;
extern __int64 GameData_22500a8;
extern __int64 GameData_22500b0;
extern __int64 GameData_22500c0;
extern __int64 GameData_22500d0;
extern __int64 GameData_22500e0;
extern __int64 GameData_22500e8;
extern __int64 GameData_22500f0;
extern __int64 GameData_2250100;
extern __int64 GameData_2250110;
extern __int64 GameData_2250120;
extern __int64 GameData_2250128;
extern __int64 GameData_2250130;
extern __int64 GameData_2250140;
extern __int64 GameData_2250150;
extern __int64 GameData_2250160;
extern __int64 GameData_2250168;
extern __int64 GameData_2250170;
extern __int64 GameData_2250180;
extern __int64 GameData_2250190;
extern __int64 GameData_22501a0;
extern __int64 GameData_22501a8;
extern __int64 GameData_22501b0;
extern __int64 GameData_22501c0;
extern __int64 GameData_22501d0;
extern __int64 GameData_22501e0;
extern __int64 GameData_22501e8;
extern __int64 GameData_22501f0;
extern __int64 GameData_2250200;
extern __int64 GameData_2250210;
extern __int64 GameData_2250220;
extern __int64 GameData_2250228;
extern __int64 GameData_2250230;
extern __int64 GameData_2250240;
extern __int64 GameData_2250250;
extern __int64 GameData_2250260;
extern __int64 GameData_2250268;
extern __int64 GameData_2250270;
extern __int64 GameData_2250280;
extern __int64 GameData_2250290;
extern __int64 GameData_22502a0;
extern __int64 GameData_22502a8;
extern __int64 GameData_22502b0;
extern __int64 GameData_22502c0;
extern __int64 GameData_22502d0;
extern __int64 GameData_22502e0;
extern __int64 GameData_22502e8;
extern __int64 GameData_22502f0;
extern __int64 GameData_2250300;
extern __int64 GameData_2250310;
extern __int64 GameData_2250320;
extern __int64 GameData_2250328;
extern __int64 GameData_2250330;
extern __int64 GameData_2250340;
extern __int64 GameData_2250350;
extern __int64 GameData_2250360;
extern __int64 GameData_2250368;
extern __int64 GameData_2250370;
extern __int64 GameData_2250380;
extern __int64 GameData_2250390;
extern __int64 GameData_22503a0;
extern __int64 GameData_22503a8;
extern __int64 GameData_22503b0;
extern __int64 GameData_22503c0;
extern __int64 GameData_22503d0;
extern __int64 GameData_22503e0;
extern __int64 GameData_22503e8;
extern __int64 GameData_22503f0;
extern __int64 GameData_2250400;
extern __int64 GameData_2250410;
extern __int64 GameData_2250420;
extern __int64 GameData_2250428;
extern __int64 GameData_2250430;
extern __int64 GameData_2250440;
extern __int64 GameData_2250450;
extern __int64 GameData_2250460;
extern __int64 GameData_2250468;
extern __int64 GameData_2250470;
extern __int64 GameData_2250480;
extern __int64 GameData_2250490;
extern __int64 GameData_22504a0;
extern __int64 GameData_22504a8;
extern __int64 GameData_22504b0;
extern __int64 GameData_22504c0;
extern __int64 GameData_22504d0;
extern __int64 GameData_22504e0;
extern __int64 GameData_22504e8;
extern __int64 GameData_22504f0;
extern __int64 GameData_2250500;
extern __int64 GameData_2250510;
extern __int64 GameData_2250520;
extern __int64 GameData_2250528;
extern __int64 GameData_2250530;
extern __int64 GameData_2250540;
extern __int64 GameData_2250550;
extern __int64 GameData_2250560;
extern __int64 GameData_2250568;
extern __int64 GameData_2250570;
extern __int64 GameData_2250580;
extern __int64 GameData_2250590;
extern __int64 GameData_22505a0;
extern __int64 GameData_22505a8;
extern __int64 GameData_22505b0;
extern __int64 GameData_22505c0;
extern __int64 GameData_22505d0;
extern __int64 GameData_22505e0;
extern __int64 GameData_22505e8;
extern __int64 GameData_22505f0;
extern __int64 GameData_2250600;
extern __int64 GameData_2250610;
extern __int64 GameData_2250620;
extern __int64 GameData_2250628;
extern __int64 GameData_2250630;
extern __int64 GameData_2250640;
extern __int64 GameData_2250650;
extern __int64 GameData_2250660;
extern __int64 GameData_2250668;
extern __int64 GameData_2250670;
extern __int64 GameData_2250680;
extern __int64 GameData_2250690;
extern __int64 GameData_22506a0;
extern __int64 GameData_22506a8;
extern __int64 GameData_22506b0;
extern __int64 GameData_22506c0;
extern __int64 GameData_22506d0;
extern __int64 GameData_22506e0;
extern __int64 GameData_2256d38;
extern __int64 GameData_2256f10;
extern __int64 GameData_2256f18;
extern __int64 GameData_2256f20;
extern __int64 GameData_2256f30;
extern __int64 GameData_2256f40;
extern __int64 GameData_2256f50;
extern __int64 GameData_2256f58;
extern __int64 GameData_2256f60;
extern __int64 GameData_2256f70;
extern __int64 GameData_2256f80;
extern __int64 GameData_2256f90;
extern __int64 GameData_2256f98;
extern __int64 GameData_2256fa0;
extern __int64 GameData_2256fb0;
extern __int64 GameData_2256fc0;
extern __int64 GameData_2256fd0;
extern __int64 GameData_2256fd8;
extern __int64 GameData_2256fe0;
extern __int64 GameData_2256ff0;
extern __int64 GameData_2257000;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern char GameData_224ecd8;
extern char GameData_224ed18;
extern char GameData_224ed58;
extern char GameData_224ed98;
extern char GameData_224edd8;
extern char GameData_224ee18;
extern char GameData_224ee58;
extern char GameData_224ee98;
extern char GameData_224eed8;
extern char GameData_224ef18;
extern char GameData_224ef58;
extern char GameData_224ef98;
extern char GameData_224efd8;
extern char GameData_224f018;
extern char GameData_224f058;
extern char GameData_224f098;
extern char GameData_224f0d8;
extern char GameData_224f118;
extern char GameData_224f158;
extern char GameData_224f198;
extern char GameData_224f1d8;
extern char GameData_224f218;
extern char GameData_224f258;
extern char GameData_224f298;
extern char GameData_224f2d8;
extern char GameData_224f318;
extern char GameData_224f358;
extern char GameData_224f398;
extern char GameData_224f3d8;
extern char GameData_224f418;
extern char GameData_224f458;
extern char GameData_224f498;
extern char GameData_224f4d8;
extern char GameData_224f518;
extern char GameData_224f558;
extern char GameData_224f598;
extern char GameData_224f5d8;
extern char GameData_224f618;
extern char GameData_224f658;
extern char GameData_224f698;
extern char GameData_224f6d8;
extern char GameData_224f718;
extern char GameData_224f758;
extern char GameData_224f798;
extern char GameData_224f7d8;
extern char GameData_224f818;
extern char GameData_224f858;
extern char GameData_224f898;
extern char GameData_224f8d8;
extern char GameData_224f918;
extern char GameData_224f958;
extern char GameData_224f998;
extern char GameData_224f9d8;
extern char GameData_224fa18;
extern char GameData_224fa58;
extern char GameData_224fa98;
extern char GameData_224fad8;
extern char GameData_224fb18;
extern char GameData_224fb58;
extern char GameData_224fb98;
extern char GameData_224fbd8;
extern char GameData_224fc18;
extern char GameData_224fc58;
extern char GameData_224fc98;
extern char GameData_224fcd8;
extern char GameData_224fd18;
extern char GameData_224fd58;
extern char GameData_224fd98;
extern char GameData_224fdd8;
extern char GameData_224fe18;
extern char GameData_224fe58;
extern char GameData_224fe98;
extern char GameData_224fed8;
extern char GameData_224ff18;
extern char GameData_224ff58;
extern char GameData_224ff98;
extern char GameData_224ffd8;
extern char GameData_2250018;
extern char GameData_2250058;
extern char GameData_2250098;
extern char GameData_22500d8;
extern char GameData_2250118;
extern char GameData_2250158;
extern char GameData_2250198;
extern char GameData_22501d8;
extern char GameData_2250218;
extern char GameData_2250258;
extern char GameData_2250298;
extern char GameData_22502d8;
extern char GameData_2250318;
extern char GameData_2250358;
extern char GameData_2250398;
extern char GameData_22503d8;
extern char GameData_2250418;
extern char GameData_2250458;
extern char GameData_2250498;
extern char GameData_22504d8;
extern char GameData_2250518;
extern char GameData_2250558;
extern char GameData_2250598;
extern char GameData_22505d8;
extern char GameData_2250618;
extern char GameData_2250658;
extern char GameData_2250698;
extern char GameData_2256f08;
extern char GameData_2256f48;
extern char GameData_2256f88;
extern char GameData_2256fc8;
extern int GameData_224ecf8;
extern int GameData_224ed08;
extern int GameData_224ed38;
extern int GameData_224ed48;
extern int GameData_224ed78;
extern int GameData_224ed88;
extern int GameData_224edb8;
extern int GameData_224edc8;
extern int GameData_224edf8;
extern int GameData_224ee08;
extern int GameData_224ee38;
extern int GameData_224ee48;
extern int GameData_224ee78;
extern int GameData_224ee88;
extern int GameData_224eeb8;
extern int GameData_224eec8;
extern int GameData_224eef8;
extern int GameData_224ef08;
extern int GameData_224ef38;
extern int GameData_224ef48;
extern int GameData_224ef78;
extern int GameData_224ef88;
extern int GameData_224efb8;
extern int GameData_224efc8;
extern int GameData_224eff8;
extern int GameData_224f008;
extern int GameData_224f038;
extern int GameData_224f048;
extern int GameData_224f078;
extern int GameData_224f088;
extern int GameData_224f0b8;
extern int GameData_224f0c8;
extern int GameData_224f0f8;
extern int GameData_224f108;
extern int GameData_224f138;
extern int GameData_224f148;
extern int GameData_224f178;
extern int GameData_224f188;
extern int GameData_224f1b8;
extern int GameData_224f1c8;
extern int GameData_224f1f8;
extern int GameData_224f208;
extern int GameData_224f238;
extern int GameData_224f248;
extern int GameData_224f278;
extern int GameData_224f288;
extern int GameData_224f2b8;
extern int GameData_224f2c8;
extern int GameData_224f2f8;
extern int GameData_224f308;
extern int GameData_224f338;
extern int GameData_224f348;
extern int GameData_224f378;
extern int GameData_224f388;
extern int GameData_224f3b8;
extern int GameData_224f3c8;
extern int GameData_224f3f8;
extern int GameData_224f408;
extern int GameData_224f438;
extern int GameData_224f448;
extern int GameData_224f478;
extern int GameData_224f488;
extern int GameData_224f4b8;
extern int GameData_224f4c8;
extern int GameData_224f4f8;
extern int GameData_224f508;
extern int GameData_224f538;
extern int GameData_224f548;
extern int GameData_224f578;
extern int GameData_224f588;
extern int GameData_224f5b8;
extern int GameData_224f5c8;
extern int GameData_224f5f8;
extern int GameData_224f608;
extern int GameData_224f638;
extern int GameData_224f648;
extern int GameData_224f678;
extern int GameData_224f688;
extern int GameData_224f6b8;
extern int GameData_224f6c8;
extern int GameData_224f6f8;
extern int GameData_224f708;
extern int GameData_224f738;
extern int GameData_224f748;
extern int GameData_224f778;
extern int GameData_224f788;
extern int GameData_224f7b8;
extern int GameData_224f7c8;
extern int GameData_224f7f8;
extern int GameData_224f808;
extern int GameData_224f838;
extern int GameData_224f848;
extern int GameData_224f878;
extern int GameData_224f888;
extern int GameData_224f8b8;
extern int GameData_224f8c8;
extern int GameData_224f8f8;
extern int GameData_224f908;
extern int GameData_224f938;
extern int GameData_224f948;
extern int GameData_224f978;
extern int GameData_224f988;
extern int GameData_224f9b8;
extern int GameData_224f9c8;
extern int GameData_224f9f8;
extern int GameData_224fa08;
extern int GameData_224fa38;
extern int GameData_224fa48;
extern int GameData_224fa78;
extern int GameData_224fa88;
extern int GameData_224fab8;
extern int GameData_224fac8;
extern int GameData_224faf8;
extern int GameData_224fb08;
extern int GameData_224fb38;
extern int GameData_224fb48;
extern int GameData_224fb78;
extern int GameData_224fb88;
extern int GameData_224fbb8;
extern int GameData_224fbc8;
extern int GameData_224fbf8;
extern int GameData_224fc08;
extern int GameData_224fc38;
extern int GameData_224fc48;
extern int GameData_224fc78;
extern int GameData_224fc88;
extern int GameData_224fcb8;
extern int GameData_224fcc8;
extern int GameData_224fcf8;
extern int GameData_224fd08;
extern int GameData_224fd38;
extern int GameData_224fd48;
extern int GameData_224fd78;
extern int GameData_224fd88;
extern int GameData_224fdb8;
extern int GameData_224fdc8;
extern int GameData_224fdf8;
extern int GameData_224fe08;
extern int GameData_224fe38;
extern int GameData_224fe48;
extern int GameData_224fe78;
extern int GameData_224fe88;
extern int GameData_224feb8;
extern int GameData_224fec8;
extern int GameData_224fef8;
extern int GameData_224ff08;
extern int GameData_224ff38;
extern int GameData_224ff48;
extern int GameData_224ff78;
extern int GameData_224ff88;
extern int GameData_224ffb8;
extern int GameData_224ffc8;
extern int GameData_224fff8;
extern int GameData_2250008;
extern int GameData_2250038;
extern int GameData_2250048;
extern int GameData_2250078;
extern int GameData_2250088;
extern int GameData_22500b8;
extern int GameData_22500c8;
extern int GameData_22500f8;
extern int GameData_2250108;
extern int GameData_2250138;
extern int GameData_2250148;
extern int GameData_2250178;
extern int GameData_2250188;
extern int GameData_22501b8;
extern int GameData_22501c8;
extern int GameData_22501f8;
extern int GameData_2250208;
extern int GameData_2250238;
extern int GameData_2250248;
extern int GameData_2250278;
extern int GameData_2250288;
extern int GameData_22502b8;
extern int GameData_22502c8;
extern int GameData_22502f8;
extern int GameData_2250308;
extern int GameData_2250338;
extern int GameData_2250348;
extern int GameData_2250378;
extern int GameData_2250388;
extern int GameData_22503b8;
extern int GameData_22503c8;
extern int GameData_22503f8;
extern int GameData_2250408;
extern int GameData_2250438;
extern int GameData_2250448;
extern int GameData_2250478;
extern int GameData_2250488;
extern int GameData_22504b8;
extern int GameData_22504c8;
extern int GameData_22504f8;
extern int GameData_2250508;
extern int GameData_2250538;
extern int GameData_2250548;
extern int GameData_2250578;
extern int GameData_2250588;
extern int GameData_22505b8;
extern int GameData_22505c8;
extern int GameData_22505f8;
extern int GameData_2250608;
extern int GameData_2250638;
extern int GameData_2250648;
extern int GameData_2250678;
extern int GameData_2250688;
extern int GameData_22506b8;
extern int GameData_22506c8;
extern int GameData_2256f28;
extern int GameData_2256f38;
extern int GameData_2256f68;
extern int GameData_2256f78;
extern int GameData_2256fa8;
extern int GameData_2256fb8;
extern int GameData_2256fe8;
extern int GameData_2256ff8;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void GameRoutine_8791a0(__int64);
void GameSubquestData_125e460(__int64, __int64);
void __cxa_guard_release(__int64);
void game_gmap_17bd0e0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gmap_882680(__int64 a1);
__int64 game_gmap_885130(__int64 a1);
__int64 game_gmap_14c5490(__int64 a1, char a2);
void game_gmap_14c6c60(__int64 a1);
bool game_gmap_14c7e20(__int64 a1);
void game_gmap_14c7ee0(__int64 a1);
__int64 game_gmap_14c7f20(__int64 result);
__int64 game_gmap_14c8b20();
__int64 game_gmap_14ca6b0(__int64 result);
__int64 game_gmap_1521a40(__int64 result);
__int64 game_gmap_1535ec0(__int64 result);
__int64 game_gmap_15368e0(__int64 result);
__int64 game_gmap_1536b00(__int64 result);
__int64 game_gmap_1546930(__int64 result, __int64 a2);
__int64 game_gmap_1550640(__int64 result);
__int64 game_gmap_15508c0(__int64 result);

__int64 game_gmap_882680(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19[5];

  if (*(_BYTE*)(a1 + 309) != 1) {
    return 0;
  }
  v19[3] = v1;
  v19[4] = v2;
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        goto LABEL_14;
      }
    }
  LABEL_9:
    v10 = a1;
    v11 = game_gmap_SpotMgr_GetCurrentSpot();
    if (v11 == nullptr) {
      goto LABEL_25;
    }
    goto LABEL_15;
  }
  if (v5 == v6) {
    goto LABEL_9;
  }
  while (1) {
    v7 = *v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_9;
    }
  }
LABEL_14:
  v10 = a1;
  v11 = *(unsigned int**)v7;
  if (*(_QWORD*)v7 == 0) {
  LABEL_25:
    v18 = 0;
    return v18 & 1;
  }
LABEL_15:
  TroopMgr_134bbe0((void*)(v19), (__int64)v11);
  v12 = v19[0];
  if (v19[0] == v19[1]) {
  LABEL_19:
    v16 = 1;
    if (v19[0] == 0) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v13 = (__int64*)v19[0];
  v14 = v10;
  while (1) {
    v15 = *v13++;
    if (*(_QWORD*)(v15 + 8) == 0) {
      break;
    }
    if (v13 == (__int64*)v19[1]) {
      goto LABEL_19;
    }
  }
  v16 = 0;
  *(_DWORD*)(v14 + 152) = 13;
  if (v12 != 0) {
  LABEL_20:
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v12);
  }
LABEL_23:
  if (v16 == 0) {
    goto LABEL_25;
  }
  v18 = *(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 129LL) ^ 1;
  return v18 & 1;
}

__int64 game_gmap_885130(__int64 a1)
{
  int v1;

  v1 = *(unsigned __int8*)(a1 + 310);
  if (v1 == 1) {
    *(_BYTE*)(a1 + 310) = 0;
  }
  return game_gmap_14c5490(a1, v1);
}

__int64 game_gmap_14c5490(__int64 a1, char a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22506d8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22506d8) != 0) {
    GameData_224eeb8 = 1;
    GameData_224ece0 = 0;
    GameData_224ece8 = (__int64)GameRoutine_14c6ac0;
    GameData_224ecf0 = 0;
    GameData_224ecf8 = 0;
    GameData_224ed00 = 0;
    GameData_224f068 = (__int64)game_gmap_14c7e20_alt1;
    GameData_224ecd8 = 13;
    GameData_224ed08 = 0;
    GameData_224eee8 = (__int64)ProcGmapPhaseSeq_14c7300;
    GameData_224ed20 = 0;
    GameData_224ed28 = (__int64)GameRoutine_14c6b80;
    GameData_224ed10 = 0;
    GameData_224ed18 = 13;
    GameData_224ef28 = (__int64)ProcGmapPhaseSeq_14c75b0;
    GameData_224ed60 = 0;
    GameData_224ed68 = (__int64)game_gmap_14c6c60_alt1;
    GameData_224ed30 = 0;
    GameData_224ed38 = 0;
    GameData_224ed40 = 0;
    GameData_224ed48 = 0;
    GameData_224ed50 = 0;
    GameData_224ef68 = (__int64)ProcGmapPhaseSeq_14c7610;
    GameData_224eda0 = 0;
    GameData_224eda8 =
        (__int64)game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma;
    GameData_224ed58 = 13;
    GameData_224ed70 = 0;
    GameData_224ed78 = 0;
    GameData_224ed80 = 0;
    GameData_224ed88 = 0;
    GameData_224ed90 = 0;
    GameData_224efa8 = (__int64)ProcGmapPhaseSeq_14c77a0;
    GameData_224ede0 = 0;
    GameData_224ede8 = (__int64)ProcGmapPhaseSeq_14c6e20;
    GameData_224ed98 = 13;
    GameData_224edb0 = 0;
    GameData_224edb8 = 0;
    GameData_224edc0 = 0;
    GameData_224edc8 = 0;
    GameData_224edd0 = 0;
    GameData_224efe8 = (__int64)ProcGmapPhaseSeq_14c7b50;
    GameData_224ee20 = 0;
    GameData_224ee28 = (__int64)ProcGmapPhaseSeq_14c6e70;
    GameData_224edd8 = 13;
    GameData_224edf0 = 0;
    GameData_224edf8 = 0;
    GameData_224ee00 = 0;
    GameData_224ee08 = 0;
    GameData_224ee10 = 0;
    GameData_224f028 =
        (__int64)game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto;
    GameData_224ee18 = 13;
    GameData_224ee30 = 0;
    GameData_224ee38 = 0;
    GameData_224ee40 = 0;
    GameData_224ee48 = 0;
    GameData_224ee50 = 0;
    GameData_224ee58 = 13;
    GameData_224ee60 = 0;
    GameData_224ee68 = (__int64)GameRoutine_14c7180;
    GameData_224ee70 = 0;
    GameData_224ee78 = 0;
    GameData_224ee80 = 0;
    GameData_224ee88 = 0;
    GameData_224ee90 = 0;
    GameData_224ee98 = 2;
    GameData_224eea8 = 0;
    GameData_224eeb0 = 0;
    GameData_224eea0 = 0;
    GameData_224eec0 = 0;
    GameData_224eec8 = 0;
    GameData_224eed0 = 0;
    GameData_224eed8 = 13;
    GameData_224eee0 = 0;
    GameData_224eef0 = 0;
    GameData_224eef8 = 0;
    GameData_224ef00 = 0;
    GameData_224ef08 = 0;
    GameData_224ef10 = 0;
    GameData_224ef18 = 13;
    GameData_224ef20 = 0;
    GameData_224ef30 = 0;
    GameData_224ef38 = 0;
    GameData_224ef40 = 0;
    GameData_224ef48 = 0;
    GameData_224ef50 = 0;
    GameData_224ef58 = 13;
    GameData_224ef60 = 0;
    GameData_224ef70 = 0;
    GameData_224ef78 = 0;
    GameData_224ef80 = 0;
    GameData_224ef88 = 0;
    GameData_224ef90 = 0;
    GameData_224ef98 = 13;
    GameData_224efa0 = 0;
    GameData_224efb0 = 0;
    GameData_224efb8 = 0;
    GameData_224efc0 = 0;
    GameData_224efc8 = 0;
    GameData_224efd0 = 0;
    GameData_224efd8 = 14;
    GameData_224efe0 = 0;
    GameData_224eff0 = 0;
    GameData_224eff8 = 0;
    GameData_224f000 = 0;
    GameData_224f008 = 0;
    GameData_224f010 = 0;
    GameData_224f018 = 14;
    GameData_224f020 = 0;
    GameData_224f030 = 0;
    GameData_224f038 = 0;
    GameData_224f040 = 0;
    GameData_224f048 = 0;
    GameData_224f050 = 0;
    GameData_224f058 = 15;
    GameData_224f060 = 0;
    GameData_224f070 = 0;
    GameData_224f078 = 0;
    GameData_224f080 = 0;
    GameData_224f088 = 0;
    GameData_224f090 = 0;
    GameData_224f098 = 8;
    GameData_224f0a0 = 0;
    GameData_224f0a8 = (__int64)TroopMgr_134a480_ptr[0];
    GameData_224f0b8 = 0;
    GameData_224f0c0 = 0;
    GameData_224f0c8 = 0;
    GameData_224f0d0 = 0;
    GameData_224f0d8 = 13;
    GameData_224f0e0 = 0;
    GameData_224f0f0 = 0;
    GameData_224f0f8 = 0;
    GameData_224f0e8 = (__int64)ProcGmapPhaseSeq_14c7e30;
    GameData_224f100 = 0;
    GameData_224f108 = 0;
    GameData_224f110 = 0;
    GameData_224f118 = 8;
    GameData_224f120 = 0;
    GameData_224f138 = 0;
    GameData_224f140 = 0;
    GameData_224f148 = 0;
    GameData_224f150 = 0;
    GameData_224f158 = 13;
    GameData_224f160 = 0;
    GameData_224f168 = (__int64)GameRoutine_14c7180;
    GameData_224f170 = 0;
    GameData_224f178 = 0;
    GameData_224f180 = 0;
    GameData_224f188 = 0;
    GameData_224f190 = 0;
    GameData_224f198 = 2;
    GameData_224f1b0 = 0;
    GameData_224f1a8 = 0;
    GameData_224f1a0 = 0;
    GameData_224f1b8 = 2;
    GameData_224f1c0 = 0;
    GameData_224f1c8 = 0;
    GameData_224f1d0 = 0;
    GameData_224f1d8 = 13;
    GameData_224f1e0 = 0;
    GameData_224f1f0 = 0;
    GameData_224f1f8 = 0;
    GameData_224f200 = 0;
    GameData_224f208 = 0;
    GameData_224f210 = 0;
    GameData_224f218 = 13;
    GameData_224f220 = 0;
    GameData_224f230 = 0;
    GameData_224f238 = 0;
    GameData_224f240 = 0;
    GameData_224f248 = 0;
    GameData_224f250 = 0;
    GameData_224f258 = 13;
    GameData_224f260 = 0;
    GameData_224f270 = 0;
    GameData_224f278 = 0;
    GameData_224f280 = 0;
    GameData_224f288 = 0;
    GameData_224f290 = 0;
    GameData_224f298 = 14;
    GameData_224f2a0 = 0;
    GameData_224f2b0 = 0;
    GameData_224f2b8 = 0;
    GameData_224f2c0 = 0;
    GameData_224f2c8 = 0;
    GameData_224f2d0 = 0;
    GameData_224f2d8 = 13;
    GameData_224f2e0 = 0;
    GameData_224f2f0 = 0;
    GameData_224f2f8 = 0;
    GameData_224f300 = 0;
    GameData_224f128 = (__int64)GameData_2130e18;
    GameData_224f308 = 0;
    GameData_224f310 = 0;
    GameData_224f318 = 13;
    GameData_224f320 = 0;
    GameData_224f328 = (__int64)GameRoutine_14c7180;
    GameData_224f330 = 0;
    GameData_224f338 = 0;
    GameData_224f340 = 0;
    GameData_224f348 = 0;
    GameData_224f1e8 = (__int64)ProcGmapPhaseSeq_14c7eb0;
    GameData_224f350 = 0;
    GameData_224f358 = 2;
    GameData_224f370 = 0;
    GameData_224f368 = 0;
    GameData_224f360 = 0;
    GameData_224f380 = 0;
    GameData_224f388 = 0;
    GameData_224f390 = 0;
    GameData_224f398 = 8;
    GameData_224f228 = (__int64)game_gmap_14c7ee0_alt1;
    GameData_224f268 = (__int64)game_gmap_14c7f20_alt1;
    GameData_224f2a8 = (__int64)game_gmap_ProcGmapPhaseSeq_FreeCursorTick;
    GameData_224f2e8 = (__int64)ProcGmapPhaseSeq_14c8ac0;
    GameData_224f378 = 3;
    GameData_224f8a8 = (__int64)ProcGmapPhaseSeq_14c9620;
    GameData_224f3c0 = 0;
    GameData_224f9e8 = (__int64)ProcGmapPhaseSeq_14c9b20;
    GameData_224f3a0 = (__int64)GameData_21316d0[0];
    GameData_224f478 = 4;
    GameData_224f578 = 5;
    GameData_224f5a8 = (__int64)GameRoutine_14c8b10;
    GameData_224f638 = 6;
    GameData_224f668 = (__int64)game_gmap_14c8b20;
    GameData_224f6a8 = (__int64)ProcGmapPhaseSeq_14c8ba0;
    GameData_224f6e8 = (__int64)game_gmap_ProcGmapPhaseSeq_CalcBeforeSpotMenu;
    GameData_224f768 = (__int64)ProcGmapPhaseSeq_14c9220;
    GameData_224f7a8 = (__int64)ProcGmapPhaseSeq_14c92a0;
    GameData_224f838 = 7;
    GameData_224f868 = (__int64)ProcGmapPhaseSeq_14c9540;
    GameData_224f8e8 = (__int64)ProcGmapPhaseSeq_14c9820;
    GameData_224f968 = (__int64)GameRoutine_14c9af0;
    GameData_224f9a8 = (__int64)GameRoutine_14c9b00;
    GameData_224fa20 = (__int64)RelianceCheck_19a8080_ptr_212dd40[0];
    GameData_224f728 = (__int64)ProcGmapPhaseSeq_14c7e30;
    GameData_224f928 = (__int64)ProcGmapPhaseSeq_14c7e30;
    GameData_224fce0 = 0;
    GameData_224fcf0 = 0;
    GameData_224fcf8 = 0;
    GameData_224fd00 = 0;
    GameData_224fd08 = 0;
    GameData_224fd18 = 13;
    GameData_224fec0 = 0;
    GameData_224fec8 = 0;
    GameData_224fcd0 = 0;
    GameData_224fd10 = 0;
    GameData_224f3b8 = 0;
    GameData_224f3d8 = 13;
    GameData_224fc60 = 0;
    GameData_224fc70 = 0;
    GameData_224fc78 = 0;
    GameData_224fc80 = 0;
    GameData_224fe70 = 0;
    GameData_224fe78 = 0;
    GameData_224fe80 = 0;
    GameData_224fe88 = 0;
    GameData_224fe90 = 0;
    GameData_224feb0 = 0;
    GameData_224fea8 = 0;
    GameData_224fea0 = 0;
    GameData_224fde0 = 0;
    GameData_224fe30 = 0;
    GameData_224fc88 = 0;
    GameData_224fc90 = 0;
    GameData_224fe38 = 0;
    GameData_224fe40 = 0;
    GameData_224fe48 = 0;
    GameData_224fe50 = 0;
    GameData_224fe60 = 0;
    GameData_224fe68 = (__int64)GameRoutine_14c7180;
    GameData_224fdf0 = 0;
    GameData_224fdf8 = 0;
    GameData_224fe00 = 0;
    GameData_224fe08 = 0;
    GameData_224fe10 = 0;
    GameData_224fe20 = 0;
    GameData_224fd80 = 0;
    GameData_224fd88 = 0;
    GameData_224fd90 = 0;
    GameData_224fda0 = 0;
    GameData_224fdb0 = 0;
    GameData_224fdb8 = 0;
    GameData_224fdc0 = 0;
    GameData_224fdc8 = 0;
    GameData_224fdd0 = 0;
    GameData_224f3c8 = 0;
    GameData_224f3d0 = 0;
    GameData_224fd20 = 0;
    GameData_224fd28 = (__int64)GameRoutine_14c7180;
    GameData_224fd30 = 0;
    GameData_224fd38 = 0;
    GameData_224fd40 = 0;
    GameData_224fd48 = 0;
    GameData_224fd50 = 0;
    GameData_224fd70 = 0;
    GameData_224fd68 = 0;
    GameData_224fd60 = 0;
    GameData_224f3a8 = 0;
    GameData_224f3b0 = 0;
    GameData_224fcc0 = 0;
    GameData_224fcc8 = 0;
    GameData_224fc98 = 13;
    GameData_224fca0 = 0;
    GameData_224fcb0 = 0;
    GameData_224fcb8 = 0;
    GameData_224f3e0 = 0;
    GameData_224fc00 = 0;
    GameData_224fc08 = 0;
    GameData_224fc10 = 0;
    GameData_224fc18 = 13;
    GameData_224fc20 = 0;
    GameData_224fc30 = 0;
    GameData_224fc38 = 0;
    GameData_224fc40 = 0;
    GameData_224fc48 = 0;
    GameData_224fc50 = 0;
    GameData_224fc58 = 13;
    GameData_224f3e8 = (__int64)GameRoutine_14c7180;
    GameData_224fbb0 = 0;
    GameData_224fba8 = 0;
    GameData_224fba0 = 0;
    GameData_224fbc0 = 0;
    GameData_224fbc8 = 0;
    GameData_224fbd0 = 0;
    GameData_224fbd8 = 13;
    GameData_224fbe0 = 0;
    GameData_224fbf0 = 0;
    GameData_224fbf8 = 0;
    GameData_224fb40 = 0;
    GameData_224fb48 = 0;
    GameData_224fb50 = 0;
    GameData_224fb58 = 13;
    GameData_224fb60 = 0;
    GameData_224fb68 = (__int64)GameRoutine_14c7180;
    GameData_224fb70 = 0;
    GameData_224fb78 = 0;
    GameData_224fb80 = 0;
    GameData_224fb88 = 0;
    GameData_224fb90 = 0;
    GameData_224fb98 = 2;
    GameData_224f3f0 = 0;
    GameData_224faf0 = 0;
    GameData_224fae8 = 0;
    GameData_224fae0 = 0;
    GameData_224faf8 = 8;
    GameData_224fb00 = 0;
    GameData_224fb08 = 0;
    GameData_224fb10 = 0;
    GameData_224fb18 = 13;
    GameData_224fb20 = 0;
    GameData_224fb30 = 0;
    GameData_224fb38 = 0;
    GameData_224fa68 = 0;
    GameData_224fa70 = 0;
    GameData_224fa78 = 0;
    GameData_224fa98 = 13;
    GameData_224faa0 = 0;
    GameData_224faa8 = (__int64)GameRoutine_14c7180;
    GameData_224fab0 = 0;
    GameData_224fab8 = 0;
    GameData_224fac0 = 0;
    GameData_224fac8 = 0;
    GameData_224fad0 = 0;
    GameData_224fad8 = 2;
    GameData_224f3f8 = 0;
    GameData_224f400 = 0;
    GameData_224fa40 = 0;
    GameData_224fa48 = 0;
    GameData_224fa50 = 0;
    GameData_224fa38 = 0;
    GameData_224fa30 = 0;
    GameData_224fa28 = 0;
    GameData_224fa58 = 8;
    GameData_224fa80 = 0;
    GameData_224fa88 = 0;
    GameData_224fa90 = 0;
    GameData_224f408 = 0;
    GameData_224f9c0 = 0;
    GameData_224f9c8 = 0;
    GameData_224f9d0 = 0;
    GameData_224f9d8 = 13;
    GameData_224f9e0 = 0;
    GameData_224f9f0 = 0;
    GameData_224f9f8 = 0;
    GameData_224fa00 = 0;
    GameData_224fa08 = 0;
    GameData_224fa10 = 0;
    GameData_224fa18 = 8;
    GameData_224f410 = 0;
    GameData_224f960 = 0;
    GameData_224f970 = 0;
    GameData_224f978 = 0;
    GameData_224f980 = 0;
    GameData_224f988 = 0;
    GameData_224f990 = 0;
    GameData_224f998 = 13;
    GameData_224f9a0 = 0;
    GameData_224f9b0 = 0;
    GameData_224f9b8 = 0;
    GameData_224f908 = 0;
    GameData_224f910 = 0;
    GameData_224f918 = 13;
    GameData_224f920 = 0;
    GameData_224f930 = 0;
    GameData_224f938 = 0;
    GameData_224f940 = 0;
    GameData_224f948 = 0;
    GameData_224f950 = 0;
    GameData_224f958 = 13;
    GameData_224f430 = 0;
    GameData_224f8b0 = 0;
    GameData_224f8b8 = 0;
    GameData_224f8c0 = 0;
    GameData_224f8c8 = 0;
    GameData_224f8d0 = 0;
    GameData_224f8d8 = 13;
    GameData_224f8e0 = 0;
    GameData_224f8f0 = 0;
    GameData_224f8f8 = 0;
    GameData_224f900 = 0;
    GameData_224f428 = 0;
    GameData_224f848 = 0;
    GameData_224f850 = 0;
    GameData_224f858 = 14;
    GameData_224f860 = 0;
    GameData_224f870 = 0;
    GameData_224f878 = 0;
    GameData_224f880 = 0;
    GameData_224f888 = 0;
    GameData_224f890 = 0;
    GameData_224f898 = 13;
    GameData_224f8a0 = 0;
    GameData_224f420 = 0;
    GameData_224f7e8 = (__int64)GameRoutine_14c7180;
    GameData_224f7f0 = 0;
    GameData_224f7f8 = 0;
    GameData_224f800 = 0;
    GameData_224f808 = 0;
    GameData_224f810 = 0;
    GameData_224f818 = 2;
    GameData_224f830 = 0;
    GameData_224f828 = 0;
    GameData_224f820 = 0;
    GameData_224f840 = 0;
    GameData_224f438 = 2;
    GameData_224f788 = 0;
    GameData_224f790 = 0;
    GameData_224f798 = 13;
    GameData_224f7a0 = 0;
    GameData_224f7b0 = 0;
    GameData_224f7b8 = 0;
    GameData_224f7c0 = 0;
    GameData_224f7c8 = 0;
    GameData_224f7d0 = 0;
    GameData_224f7d8 = 13;
    GameData_224f7e0 = 0;
    GameData_224f440 = 0;
    GameData_224f448 = 0;
    GameData_224f730 = 0;
    GameData_224f738 = 0;
    GameData_224f740 = 0;
    GameData_224f748 = 0;
    GameData_224f750 = 0;
    GameData_224f758 = 13;
    GameData_224f760 = 0;
    GameData_224f770 = 0;
    GameData_224f778 = 0;
    GameData_224f780 = 0;
    GameData_224f450 = 0;
    GameData_224f6c8 = 0;
    GameData_224f6d0 = 0;
    GameData_224f6d8 = 13;
    GameData_224f6e0 = 0;
    GameData_224f6f0 = 0;
    GameData_224f6f8 = 0;
    GameData_224f700 = 0;
    GameData_224f708 = 0;
    GameData_224f710 = 0;
    GameData_224f718 = 13;
    GameData_224f720 = 0;
    GameData_224f458 = 2;
    GameData_224f460 = 0;
    GameData_224f670 = 0;
    GameData_224f678 = 0;
    GameData_224f680 = 0;
    GameData_224f688 = 0;
    GameData_224f690 = 0;
    GameData_224f698 = 14;
    GameData_224f6a0 = 0;
    GameData_224f6b0 = 0;
    GameData_224f6b8 = 0;
    GameData_224f6c0 = 0;
    GameData_224f468 = 0;
    GameData_224f608 = 0;
    GameData_224f610 = 0;
    GameData_224f618 = 2;
    GameData_224f630 = 0;
    GameData_224f628 = 0;
    GameData_224f620 = 0;
    GameData_224f640 = 0;
    GameData_224f648 = 0;
    GameData_224f650 = 0;
    GameData_224f658 = 13;
    GameData_224f660 = 0;
    GameData_224f470 = 0;
    GameData_224f5b0 = 0;
    GameData_224f5b8 = 0;
    GameData_224f5c0 = 0;
    GameData_224f5c8 = 0;
    GameData_224f5d0 = 0;
    GameData_224f5d8 = 13;
    GameData_224f5e0 = 0;
    GameData_224f5e8 = (__int64)GameRoutine_14c7180;
    GameData_224f5f0 = 0;
    GameData_224f5f8 = 0;
    GameData_224f600 = 0;
    GameData_224f480 = 0;
    GameData_224f548 = 0;
    GameData_224f550 = 0;
    GameData_224f558 = 2;
    GameData_224f570 = 0;
    GameData_224f568 = 0;
    GameData_224f560 = 0;
    GameData_224f580 = 0;
    GameData_224f588 = 0;
    GameData_224f590 = 0;
    GameData_224f598 = 13;
    GameData_224f5a0 = 0;
    GameData_224fd58 = 2;
    GameData_224f418 = 12;
    GameData_224f488 = 0;
    GameData_224f4f0 = 0;
    GameData_224f4f8 = 0;
    GameData_224f500 = 0;
    GameData_224f508 = 0;
    GameData_224f510 = 0;
    GameData_224f518 = 12;
    GameData_224f530 = 0;
    GameData_224f528 = 0;
    GameData_224fd78 = 10;
    GameData_224f520 = 0;
    GameData_224f538 = 2;
    GameData_224f540 = 0;
    GameData_224f490 = 0;
    GameData_224f498 = 8;
    GameData_224fd98 = 13;
    GameData_224fa60 = (__int64)GameData_212d0e0[0];
    GameData_224fe98 = 2;
    GameData_224fb28 = (__int64)ProcGmapPhaseSeq_14c9d40;
    GameData_224feb8 = 11;
    GameData_224fbb8 = 9;
    GameData_224fdd8 = 13;
    GameData_224fc28 = (__int64)GameRoutine_14c9ec0;
    GameData_224fe58 = 13;
    GameData_224fc68 = (__int64)ProcGmapPhaseSeq_14c9ed0;
    GameData_224fde8 = (__int64)ProcGmapPhaseSeq_14ca100;
    GameData_224fca8 = (__int64)ProcGmapPhaseSeq_14c9fa0;
    GameData_224fe18 = 13;
    GameData_224fcd8 = 13;
    GameData_224fda8 = (__int64)ProcGmapPhaseSeq_14c9e20;
    GameData_224fbe8 = (__int64)ProcGmapPhaseSeq_14c9e20;
    GameData_224fe28 = (__int64)ProcGmapPhaseSeq_14ca030;
    GameData_224fce8 = (__int64)ProcGmapPhaseSeq_14ca030;
    GameData_2250378 = 15;
    GameData_2250238 = 14;
    GameData_224f4e8 = (__int64)GameRoutine_14c7180;
    GameData_224ff68 = (__int64)GameRoutine_14c7180;
    GameData_22500a8 = (__int64)GameRoutine_14c7180;
    GameData_22501e8 = (__int64)GameRoutine_14c7180;
    GameData_2250328 = (__int64)GameRoutine_14c7180;
    GameData_22505e8 = (__int64)GameRoutine_14c7180;
    GameData_224f4d8 = 13;
    GameData_22500f8 = 13;
    GameData_224f4c8 = 0;
    GameData_224f4d0 = 0;
    GameData_224f4b8 = 0;
    GameData_224f4b0 = 0;
    GameData_224f4a8 = 0;
    GameData_224f4e0 = 0;
    GameData_224f4c0 = 0;
    GameData_224fed0 = 0;
    GameData_224fee0 = 0;
    GameData_224fef0 = 0;
    GameData_224fef8 = 0;
    GameData_224ff00 = 0;
    GameData_224ff08 = 0;
    GameData_224ff10 = 0;
    GameData_224ff20 = 0;
    GameData_224ff28 = (__int64)ProcGmapPhaseSeq_14ca030;
    GameData_224ff30 = 0;
    GameData_224ff38 = 0;
    GameData_224ff40 = 0;
    GameData_224ff48 = 0;
    GameData_224ff50 = 0;
    GameData_224ff60 = 0;
    GameData_224ff70 = 0;
    GameData_224ff78 = 0;
    GameData_224ff80 = 0;
    GameData_224ff88 = 0;
    GameData_224ff90 = 0;
    GameData_224ffb0 = 0;
    GameData_224ffa8 = 0;
    GameData_224ffa0 = 0;
    GameData_224ffb8 = 12;
    GameData_224ffc0 = 0;
    GameData_224ffc8 = 0;
    GameData_224ffd0 = 0;
    GameData_224ffe0 = 0;
    GameData_224ffe8 = (__int64)ProcGmapPhaseSeq_14c9e20;
    GameData_224fff0 = 0;
    GameData_224fff8 = 0;
    GameData_2250000 = 0;
    GameData_2250008 = 0;
    GameData_2250010 = 0;
    GameData_2250020 = 0;
    GameData_2250030 = 0;
    GameData_2250038 = 0;
    GameData_2250040 = 0;
    GameData_2250048 = 0;
    GameData_2250050 = 0;
    GameData_2250060 = 0;
    GameData_2250068 = (__int64)ProcGmapPhaseSeq_14ca030;
    GameData_2250070 = 0;
    GameData_2250078 = 0;
    GameData_2250080 = 0;
    GameData_2250088 = 0;
    GameData_2250090 = 0;
    GameData_22500a0 = 0;
    GameData_22500b0 = 0;
    GameData_22500b8 = 0;
    GameData_22500c0 = 0;
    GameData_22500c8 = 0;
    GameData_22500d0 = 0;
    GameData_22500f0 = 0;
    GameData_22500e8 = 0;
    GameData_22500e0 = 0;
    GameData_2250100 = 0;
    GameData_2250108 = 0;
    GameData_2250110 = 0;
    GameData_2250120 = 0;
    GameData_2250128 = (__int64)ProcGmapPhaseSeq_14c9e20;
    GameData_2250130 = 0;
    GameData_2250138 = 0;
    GameData_2250140 = 0;
    GameData_2250398 = 13;
    GameData_2250258 = 13;
    GameData_2250618 = 2;
    GameData_2250148 = 0;
    GameData_2250150 = 0;
    GameData_2250160 = 0;
    GameData_2250170 = 0;
    GameData_22503a8 = (__int64)ProcGmapPhaseSeq_14ca660;
    GameData_2250268 = (__int64)GameRoutine_14ca330;
    GameData_2250638 = 16;
    GameData_2250178 = 0;
    GameData_2250180 = 0;
    GameData_2250188 = 0;
    GameData_2250190 = 0;
    GameData_22501a0 = 0;
    GameData_22501a8 = (__int64)ProcGmapPhaseSeq_14ca030;
    GameData_22503d8 = 13;
    GameData_2250298 = 13;
    GameData_2250658 = 13;
    GameData_22501b0 = 0;
    GameData_22501b8 = 0;
    GameData_22501c0 = 0;
    GameData_22501c8 = 0;
    GameData_22501d0 = 0;
    GameData_224f4a0 = (__int64)GameData_21316d8;
    GameData_22503e8 = (__int64)game_gmap_14ca6b0_alt1;
    GameData_22502a8 = (__int64)ProcGmapPhaseSeq_14ca340;
    GameData_22501e0 = 0;
    GameData_22501f0 = 0;
    GameData_22501f8 = 0;
    GameData_2250200 = 0;
    GameData_2250208 = 0;
    GameData_2250210 = 0;
    GameData_224fed8 = 13;
    GameData_2250418 = 13;
    GameData_22502d8 = 13;
    GameData_2250230 = 0;
    GameData_2250228 = 0;
    GameData_2250220 = 0;
    GameData_224fee8 = (__int64)ProcGmapPhaseSeq_14ca180;
    GameData_2250428 = (__int64)game_gmap_ProcGmapPhaseSeq_CycleGrowPart3;
    GameData_22502e8 = (__int64)game_gmap_ProcGmapPhaseSeq_EndOtherPhase;
    GameData_2250240 = 0;
    GameData_2250248 = 0;
    GameData_2250250 = 0;
    GameData_2250260 = 0;
    GameData_2250270 = 0;
    GameData_2250278 = 0;
    GameData_224ff18 = 13;
    GameData_2250458 = 13;
    GameData_2250318 = 13;
    GameData_2250280 = 0;
    GameData_2250288 = 0;
    GameData_2250290 = 0;
    GameData_22502a0 = 0;
    GameData_22502b0 = 0;
    GameData_224ff58 = 13;
    GameData_2250468 = (__int64)ProcGmapPhaseSeq_14ca830;
    GameData_22502b8 = 0;
    GameData_22502c0 = 0;
    GameData_22502c8 = 0;
    GameData_22502d0 = 0;
    GameData_22502e0 = 0;
    GameData_22502f0 = 0;
    GameData_22502f8 = 0;
    GameData_2250300 = 0;
    GameData_224ff98 = 2;
    GameData_2250498 = 13;
    GameData_2250308 = 0;
    GameData_2250310 = 0;
    GameData_2250320 = 0;
    GameData_2250330 = 0;
    GameData_2250338 = 0;
    GameData_2250340 = 0;
    GameData_2250348 = 0;
    GameData_224ffd8 = 13;
    GameData_22504a8 = (__int64)ProcGmapPhaseSeq_14caa60;
    GameData_2250350 = 0;
    GameData_2250358 = 2;
    GameData_2250370 = 0;
    GameData_2250368 = 0;
    GameData_2250360 = 0;
    GameData_2250380 = 0;
    GameData_2250388 = 0;
    GameData_2250390 = 0;
    GameData_2250018 = 13;
    GameData_22504d8 = 13;
    GameData_22503a0 = 0;
    GameData_22503b0 = 0;
    GameData_22503b8 = 0;
    GameData_22503c0 = 0;
    GameData_22503c8 = 0;
    GameData_22503d0 = 0;
    GameData_2250028 = (__int64)ProcGmapPhaseSeq_14ca250;
    GameData_22504e8 = (__int64)ProcGmapPhaseSeq_14cabc0;
    GameData_22503e0 = 0;
    GameData_22503f0 = 0;
    GameData_22503f8 = 0;
    GameData_2250400 = 0;
    GameData_2250408 = 0;
    GameData_2250410 = 0;
    GameData_2250420 = 0;
    GameData_2250430 = 0;
    GameData_2250058 = 13;
    GameData_2250518 = 13;
    GameData_2250438 = 0;
    GameData_2250440 = 0;
    GameData_2250448 = 0;
    GameData_2250450 = 0;
    GameData_2250460 = 0;
    GameData_2250470 = 0;
    GameData_2250478 = 0;
    GameData_2250098 = 13;
    GameData_2250528 = (__int64)ProcGmapPhaseSeq_14cad00;
    GameData_2250480 = 0;
    GameData_2250488 = 0;
    GameData_2250490 = 0;
    GameData_22504a0 = 0;
    GameData_22504b0 = 0;
    GameData_22504b8 = 0;
    GameData_22504c0 = 0;
    GameData_22504c8 = 0;
    GameData_22500d8 = 2;
    GameData_2250558 = 13;
    GameData_22504d0 = 0;
    GameData_22504e0 = 0;
    GameData_22504f0 = 0;
    GameData_22504f8 = 0;
    GameData_2250500 = 0;
    GameData_2250508 = 0;
    GameData_2250510 = 0;
    GameData_2250118 = 13;
    GameData_2250568 = (__int64)ProcGmapPhaseSeq_14caee0;
    GameData_2250520 = 0;
    GameData_2250530 = 0;
    GameData_2250538 = 0;
    GameData_2250540 = 0;
    GameData_2250548 = 0;
    GameData_2250550 = 0;
    GameData_2250560 = 0;
    GameData_2250570 = 0;
    GameData_2250158 = 13;
    GameData_2250598 = 13;
    GameData_2250578 = 0;
    GameData_2250580 = 0;
    GameData_2250588 = 0;
    GameData_2250590 = 0;
    GameData_22505a0 = 0;
    GameData_22505b0 = 0;
    GameData_2250168 = (__int64)GameRoutine_14ca320;
    GameData_22505a8 = (__int64)ProcGmapPhaseSeq_14cb0d0;
    GameData_22505b8 = 0;
    GameData_22505c0 = 0;
    GameData_22505c8 = 0;
    GameData_22505d0 = 0;
    GameData_22505e0 = 0;
    GameData_22505f0 = 0;
    GameData_22505f8 = 0;
    GameData_2250600 = 0;
    GameData_2250198 = 13;
    GameData_22505d8 = 13;
    GameData_2250608 = 0;
    GameData_2250610 = 0;
    GameData_2250630 = 0;
    GameData_2250628 = 0;
    GameData_2250620 = 0;
    GameData_2250640 = 0;
    GameData_2250648 = 0;
    GameData_2250650 = 0;
    GameData_2250660 = 0;
    GameData_22501d8 = 13;
    GameData_2250670 = 0;
    GameData_2250678 = 0;
    GameData_2250680 = 0;
    GameData_2250688 = 0;
    GameData_2250690 = 0;
    GameData_22506c0 = 0;
    GameData_22506c8 = 0;
    GameData_22506d0 = 0;
    GameData_2250668 = (__int64)GameRoutine_14cb170;
    GameData_2250218 = 2;
    GameData_22506b8 = 0;
    GameData_22506b0 = 0;
    GameData_22506a8 = 0;
    GameData_22506a0 = 0;
    GameData_2250698 = 0;
    __cxa_guard_release((__int64)&GameData_22506d8);
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
  v7 = *v4;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_DWORD*)(v5 + 208) = 0;
  *(_BYTE*)(v5 + 212) = a2 & 1;
  GameData_22506e0 = v5;
  *(_QWORD*)v5 = game_gmap_ProcGmapPhaseSeq_vtable;
  *(_BYTE*)(v5 + 213) = (a2 & 1) == 0;
  v8 = fw_memory_HeapManager_Allocate(v7, 296, 16, 0);
  *(_DWORD*)(v8 + 48) = 0x2000;
  v9 = GameData_2131678;
  *(_WORD*)(v8 + 108) = 256;
  *(_QWORD*)(v8 + 8) = 0;
  *(_QWORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_DWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_WORD*)(v8 + 80) = 0;
  *(_DWORD*)(v8 + 112) = -1082130432;
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
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)v8 = v9 + 16;
  *(_DWORD*)(v8 + 292) = 2;
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(v5 + 216) = v8 + 24;
  *(_QWORD*)(v5 + 224) = v8;
  return ProcInst_657850(v5, (__int64)&GameData_224ecd8, "ProcGmapPhaseSeq", 1,
                         a1);
}

void game_gmap_14c6c60(__int64 a1)
{
  GameSubquestData_125e460(*(_QWORD*)GameData_212c7b0[0], a1);
}

bool game_gmap_14c7e20(__int64 a1) { return *(_QWORD*)(a1 + 232) != 0; }

void game_gmap_14c7ee0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 213) == 1) {
    GameRoutine_8791a0(a1);
    *(_BYTE*)(a1 + 213) = 0;
  }
}

__int64 game_gmap_14c7f20(__int64 result)
{
  bool v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_DWORD*)(GameData_21f1618 + 152) != 0) {
    *(_DWORD*)(result + 152) = 16;
  }
  else if (*(_DWORD*)(result + 152) == 0) {
    v1 = GmapSituation_14db2f0();
    v2 = GameData_21f1668;
    if (v1) {
      v3 = *(_QWORD*)(GameData_21f1668 + 8);
      if (*(_BYTE*)(v3 + 5833) == 1) {
        game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(v3, 0);
        v2 = GameData_21f1668;
      }
    }
    v4 = *(_QWORD*)(v2 + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v4 + 16), 1);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v4 + 5856) |= 0x10000u;
    game_gmap_17bd0e0(*(_QWORD*)(GameData_21f1668 + 8));
    result = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(*(_QWORD*)(*GameData_212c790 + 8) + 56LL) = -1;
    *(_BYTE*)(*(_QWORD*)(GameData_21f1668 + 8) + 5844LL) = 0;
  }
  return result;
}

__int64 game_gmap_14c8b20()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  return UnitActor_81a540(v4 + 112, 0x723D4B8u, (__int64)GameData_212ceb8);
}

__int64 game_gmap_14ca6b0(__int64 result)
{
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return LayoutAccessor_1555150(result, 1);
  }
  return result;
}

__int64 game_gmap_1521a40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  int v6;

  v1 = *(_QWORD*)(result + 160);
  v2 = *(_QWORD*)(result + 168);
  if (v1 != v2) {
    while (1) {
      v3 = *(_QWORD*)(*(_QWORD*)v1 + 96LL);
      if (v3 != 0 && *(_BYTE*)(v3 + 32) == 1) {
        v4 = *(_DWORD*)(GameData_22416c0 + 48);
        v5 = __OFSUB__(v4, 1);
        v6 = v4 - 1;
        if (v6 < 0 == v5) {
          break;
        }
      }
      v1 += 8;
      if (v1 == v2) {
        return result;
      }
    }
    *(_DWORD*)(GameData_22416c0 + 48) = v6;
  }
  return result;
}

__int64 game_gmap_1535ec0(__int64 result)
{
  if (*(_BYTE*)(result + 152) == 1) {
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      return game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-1f);
    }
  }
  return result;
}

__int64 game_gmap_15368e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  __int64 v4[2];
  __int64 v5[2];

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = *(_QWORD*)(*(_QWORD*)(result + 168) + 56LL);
    if (v1 != 0) {
      v2 = result;
      v3 = GameRoutine_adf970(v1, 0);
      v4[0] = (__int64)"MID_Gmap_ShowOpenSpot_Message";
      v4[1] = 29;
      v5[0] = (__int64)v3;
      v5[1] = GameRoutine_1a09c70(v3);
      return Message_16f9b50(v2, v4, v5);
    }
  }
  return result;
}

__int64 game_gmap_1536b00(__int64 result)
{
  unsigned int* v1;
  __int64 v2;
  unsigned int* v3;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = *(unsigned int**)(*(_QWORD*)(result + 168) + 56LL);
    if (v1 != nullptr) {
      v2 = result;
      v3 = game_gmap_SpotMgr_FindSpot(v1);
      return GameRoutine_14cd0c0(v2, (__int64)v3);
    }
  }
  return result;
}

__int64 game_gmap_1546930(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8[2];

  if (a2 != 0) {
    v3 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2257008,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2257008) != 0) {
      GameData_2256f08 = 13;
      GameData_2256f20 = 0;
      GameData_2256f28 = 0;
      GameData_2256f30 = 0;
      GameData_2256f38 = 0;
      GameData_2256f40 = 0;
      GameData_2256f60 = 0;
      GameData_2256f68 = 0;
      GameData_2256f70 = 0;
      GameData_2256f78 = 0;
      GameData_2256f80 = 0;
      GameData_2256f90 = 0;
      GameData_2256f98 = 0;
      GameData_2256fa0 = 0;
      GameData_2256fb0 = 0;
      GameData_2256fb8 = 0;
      GameData_2256fc0 = 0;
      GameData_2256fc8 = 0;
      GameData_2256f10 = 0;
      GameData_2256f18 = (__int64)GameRoutine_1546f80;
      GameData_2256ff0 = 0;
      GameData_2256ff8 = 0;
      GameData_2257000 = 0;
      GameData_2256fd0 = 0;
      GameData_2256fd8 = 0;
      GameData_2256fe0 = 0;
      GameData_2256fe8 = 0;
      GameData_2256f48 = 14;
      GameData_2256f50 = 0;
      GameData_2256f58 = (__int64)game_gmap_ProcGmapMove_CheckContinueMove;
      GameData_2256f88 = 2;
      GameData_2256fa8 = 4;
      __cxa_guard_release((__int64)&GameData_2257008);
    }
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        240, 16, 0);
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
    game_ProcInst_Register(v4);
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    GameData_2256d38 = v4;
    v8[1] = (unsigned __int64)&GameData_1acc6e7;
    *(_QWORD*)v4 = game_gmap_ProcGmapMove_vtable;
    v8[0] = game_HashString((__int64)&GameData_1acc6e7);
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v7 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v8);
      if (v7 != 0) {
        v6 = *(_DWORD*)(v7 + 32);
      }
      else {
        v6 = 0;
      }
    }
    *(_DWORD*)(v4 + 208) = v6;
    *(_QWORD*)(v4 + 224) = a2;
    *(_QWORD*)(v4 + 212) = 0x40000000;
    return ProcInst_657850(v4, (__int64)&GameData_2256f08, "ProcGmapMove", 1,
                           v3);
  }
  return result;
}

__int64 game_gmap_1550640(__int64 result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  v1 = *(__int64**)(result + 208);
  v2 = *(__int64**)(result + 216);
  if (v1 == v2) {
  LABEL_4:
    v4 = *(__int64**)(result + 184);
    v5 = *(__int64**)(result + 192);
    if (v4 == v5) {
    LABEL_7:
      v7 = *(unsigned __int8**)(result + 16);
      if (v7 != nullptr) {
        v8 = *v7;
        v9 = v8 > 0x10;
        v10 = (1 << v8) & 0x1CE00;
        if (!v9 & v10 != 0) {
          *(_WORD*)(result + 136) |= 0x80u;
        }
      }
      *(_WORD*)(result + 136) |= 8u;
    }
    else {
      while (1) {
        v6 = *v4++;
        if (*(float*)(v6 + 276) != *(float*)(v6 + 272)) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_7;
        }
      }
    }
  }
  else {
    while (1) {
      v3 = *v1++;
      if (*(float*)(v3 + 276) != *(float*)(v3 + 272)) {
        break;
      }
      if (v1 == v2) {
        goto LABEL_4;
      }
    }
  }
  return result;
}

__int64 game_gmap_15508c0(__int64 result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64* v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = *(__int64**)(result + 184);
  v2 = *(__int64**)(result + 192);
  if (v1 == v2) {
  LABEL_4:
    v4 = *(unsigned __int8**)(result + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 & v7 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  else {
    while (1) {
      v3 = *v1++;
      if (*(float*)(v3 + 276) != *(float*)(v3 + 272)) {
        break;
      }
      if (v1 == v2) {
        goto LABEL_4;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
