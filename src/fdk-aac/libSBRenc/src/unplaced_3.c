#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsbrEnc_EncodeIcc_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 nn_codec_FDKsbrEnc_EncodeIid_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD);
__int64 nn_codec_LdDataVector_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_calculateICC(__int64 result, int*, _DWORD*, __int64,
                              unsigned int*, int, int);
extern _DWORD SdkData_c36f04[15];
extern _DWORD SdkData_c36f40[4];
extern _UNKNOWN SdkData_c36f50;
extern void (*SdkData_e87c50[714])();
__int64 fdk_aac_libSBRenc_src_3e2e00_alt1(int* a1, _DWORD* a2, __int64 a3,
                                          unsigned __int64 a4, __int64 a5,
                                          int a6, int a7);
__int64 memcpy_plt_alt1(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64);
__int64 nn_codec_FDKmemclear_plt_alt1(__int64, unsigned int);
__int64 nn_codec_FDKmemcpy_plt_alt1(__int64, __int64, unsigned int);
__int64 nn_codec_FDKsbrEnc_EncodeIcc_plt_alt1(__int64, __int64, __int64, int,
                                              int, __int64);
__int64 nn_codec_LdDataVector_plt_alt1(__int64, __int64, int);
__int64 fdk_aac_libSBRenc_src_3e2e00(int* a1, _DWORD* a2, __int64 a3,
                                     unsigned int a4, __int64 a5, int a6,
                                     int a7);

__int64 fdk_aac_libSBRenc_src_3e2e00(int* a1, _DWORD* a2, __int64 a3,
                                     unsigned int a4, __int64 a5, int a6,
                                     int a7)
{
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  int* v21;
  int* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  _OWORD* v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  _QWORD* v31;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  _BYTE* v38;
  _BYTE* v39;
  _QWORD* v40;
  _QWORD* v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  char v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  int* v69;
  int* v70;
  int* v71;
  int* v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  _BYTE* v90;
  __int64 v91;
  _OWORD* v92;
  int* v93;
  _BYTE* v94;
  __int64 v95;
  __int64 v96;
  _DWORD* v97;
  int* v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  int v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  int v109;
  _DWORD* v110;
  int* v111;
  int* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  _BOOL4 v118;
  __int64 v119;
  unsigned int v120;
  __int64 v121;
  __int64 v122;
  _BOOL4 v123;
  __int64 v124;
  signed int v125;
  signed int v126;
  int* v127;
  int* v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  unsigned int v135;
  int v136;
  int v137;
  unsigned int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  unsigned int* v143;
  int* v144;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  __int64 v151;
  signed int v152;
  signed int v153;
  int* v154;
  int* v155;
  __int64 v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  unsigned int v162;
  int v163;
  int v164;
  unsigned int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int* v170;
  int* v171;
  __int64 v172;
  int v173;
  int v174;
  int v175;
  int v176;
  _OWORD* v178;
  int* v179;
  _BYTE* v180;
  _BYTE* v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  _DWORD* v185;
  int* v186;
  __int64 v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  int v197;
  _DWORD* v198;
  int* v199;
  int* v200;
  __int64 j;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64* v206;
  int* v207;
  _BYTE* v208;
  _BYTE* v209;
  __int64 v210;
  _BYTE* v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  int v220;
  _DWORD* v221;
  int* v222;
  __int64 i;
  int v224;
  int v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  int* v229;
  int v230;
  int* v231;
  __int64 v232;
  __int64 v233;
  int v234;
  _BYTE* v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  int* v239;
  int v240;
  int* v241;
  __int64 v242;
  __int64 v243;
  int v244;
  _BYTE* v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  int* v249;
  int v250;
  int* v251;
  __int64 v252;
  __int64 v253;
  int v254;
  _BYTE* v255;
  int* v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  int v264;
  __int64 v265;
  int v266;
  int v267;
  int v268;
  unsigned int v269;
  __int64 v270;
  unsigned int v271;
  unsigned int v272;
  unsigned int v273;
  unsigned int v274;
  unsigned int v275;
  unsigned int v276;
  unsigned int v277;
  unsigned int v278;
  unsigned int v279;
  unsigned int v280;
  unsigned int v281;
  unsigned int v282;
  bool v283;
  int v284;
  unsigned int v285;
  int v286;
  int v287;
  int v288;
  __int64 v289;
  int v290;
  __int64 v291;
  int v292;
  __int64 v293;
  int v294;
  int v295;
  int v296;
  int* v297;
  int v298;
  int v299;
  int v300;
  unsigned int v301;
  int v302;
  unsigned int v303;
  int v304;
  unsigned int v305;
  int v306;
  unsigned int v307;
  int v308;
  unsigned int v309;
  int v310;
  unsigned int v311;
  int v312;
  unsigned int v313;
  int v314;
  int v315;
  __int64 v316;
  unsigned __int64 v317;
  __int64 v318;
  __int64 v319;
  int v320;
  __int64 v321;
  int* v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int* v338;
  int v339;
  int v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  int* v344;
  int v345;
  int v346;
  int v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int* v360;
  int v361;
  int v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  int* v366;
  int v367;
  int v368;
  int v369;
  int v370;
  int v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  int v380;
  int v381;
  __int64 v382;
  int* v383;
  int v384;
  int v385;
  __int64 v386;
  __int64 v387;
  int* v388;
  int v389;
  int v390;
  int v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  int v398;
  int v399;
  int v400;
  int v401;
  int v402;
  int v403;
  int* v404;
  int v405;
  int v406;
  int v407;
  __int64 v408;
  int v409;
  _DWORD* v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  int* v416;
  int* v417;
  int v418;
  __int64 v419;
  int* v420;
  int* v421;
  int v422;
  int v423;
  unsigned int v424;
  int v425;
  unsigned int v426;
  unsigned int v427;
  unsigned int v428;
  unsigned int v429;
  unsigned int v430;
  int v431;
  unsigned int v432;
  unsigned int v433;
  unsigned int v434;
  unsigned int v435;
  unsigned int v436;
  unsigned int v437;
  int v438;
  unsigned int v439;
  unsigned int v440;
  unsigned int v441;
  unsigned int v442;
  unsigned int v443;
  unsigned int v444;
  int* v445;
  __int64 v446;
  int v447;
  _DWORD* v448;
  __int64 v449;
  __int64 v450;
  int* v451;
  int v452;
  int v453;
  int v454;
  int* v455;
  __int64 v456;
  int v457;
  _DWORD* v458;
  __int64 v459;
  int v460;
  _DWORD* v461;
  _DWORD* v462;
  __int64 v463;
  __int64 v464;
  unsigned int v465;
  int v466;
  int v467;
  __int64 v468;
  int v469;
  int* v470;
  int v471;
  _BOOL4 v473;
  _DWORD* v474;
  __int64 v475;
  int v476;
  int v477;
  _BOOL4 v479;
  int v480;
  _BOOL4 v481;
  int v482;
  _BOOL4 v483;
  __int64 v484;
  unsigned __int64 v485;
  __int64 v486;
  __int64 v487;
  _DWORD* v488;
  int* v489;
  __int64 v490;
  int v491;
  _DWORD* v492;
  int* v493;
  int v494;
  __int64 v495;
  __int64 v496;
  int* v497;
  _DWORD* v498;
  __int64 v499;
  int v500;
  _DWORD* v501;
  int* v502;
  int v503;
  __int64 v504;
  __int64 v505;
  int v506;
  int v507;
  unsigned int v508;
  __int64 v509;
  _BYTE* v510;
  _DWORD* v511;
  int v512;
  __int64 v513;
  int v514;
  int v515;
  int v516;
  __int64 v517;
  int v518;
  int v519;
  int v520;
  __int64 v521;
  _QWORD* v522;
  __int64* v523;
  int v524;
  __int64 v525;
  int v526;
  int v527;
  int* v528;
  int v529;
  _DWORD* v530;
  __int64 v531;
  unsigned int v532;
  _QWORD* v533;
  _BOOL4* v534;
  __int64 v535;
  int v536;
  __int64 v537;
  int v538;
  int v539;
  _BYTE* v540;
  _BOOL4* v541;
  __int64 k;
  int v543;
  int v544;
  __int64 v545;
  _DWORD* v546;
  __int64 v547;
  __int64 v548;
  int v549;
  int v550;
  int v551;
  int v552;
  int v553;
  int v554;
  int v555;
  int* v556;
  int v557;
  int* v558;
  _DWORD* v559;
  __int64 v560;
  int v561;
  _DWORD* v562;
  int* v563;
  int v564;
  __int64 v565;
  __int64 v566;
  int* v567;
  _DWORD* v568;
  __int64 v569;
  int v570;
  _DWORD* v571;
  int* v572;
  int v573;
  int* v574;
  __int64 v575;
  _DWORD* v576;
  _DWORD* v577;
  int* v578;
  __int64 v579;
  __int64 v580;
  int* v581;
  _DWORD* v582;
  int v583;
  _DWORD* v584;
  int* v585;
  __int64 v586;
  int v587;
  __int64 v588;
  __int64 v589;
  int* v590;
  __int64 v591;
  int v592;
  int v593;
  __int64 v594;
  int v595;
  int v596;
  int v597;
  int v598;
  __int64 v599;
  int* v600;
  __int64 v601;
  int* v602;
  int* v603;
  int* v604;
  unsigned int v608;
  signed int v609;
  unsigned __int64 v610;
  __int64 v611;
  __int64 v612;
  int* v613;
  _BYTE* v614;
  __int64 v615;
  unsigned int v616;
  _BOOL4 v617;
  __int64 v618;
  __int64 v619;
  unsigned __int64 v620;
  __int64 v621;
  __int64 v622;
  __int64 v624;
  __int64 v625;
  char v626;
  __int64 v627;
  int v628;
  __int64 v629;
  _BOOL4 v630;
  __int64 v631;
  int* v632;
  __int64 v633;
  _BYTE* v634;
  __int64* v635;
  __int64 v636;
  __int64 v637;
  _BYTE v638[16];
  __int64 v639;
  _BYTE v640[560];
  _QWORD v641[40];
  _OWORD v642[20];
  _QWORD v643[40];
  _QWORD v644[40];
  struct {
    __int64 v645;
    __int64 v646;
    int v647;
  } v645_;
  unsigned int v648[80];
  unsigned int v649[80];
  _BYTE v650[160];
  unsigned int v651[80];
  _BYTE v652[8];
  _BYTE v653[61];
  _BYTE v654[160];
  struct {
    __int64 v655;
    char gap2776_[60];
    _BOOL4 v656;
  } v655_;
  struct {
    __int64 v657;
    int v658;
    _BOOL4 v659;
  } v657_;
  struct {
    _BYTE v660[12];
    int v661;
  } v660_;
  _BYTE v662[16];
  struct {
    _BYTE v663[92];
    _BYTE v664[80];
    _BYTE v665[80];
    int v666;
  } v663_;
  _DWORD v667[82];

  v408 = COERCE_AS(__typeof__(v408),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v513 = COERCE_AS(__typeof__(v513),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v517 = COERCE_AS(__typeof__(v517),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v525 = COERCE_AS(__typeof__(v525),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  memset_plt_alt1((__int64)v652, 0, 0x140u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v11 = a1[221];
  v645_.v646 = 0;
  v645_.v645 = 0;
  v12 = a1[222];
  v612 = v11;
  v613 = a1;
  v637 = (unsigned int)v11;
  v13 = a1[223];
  if (a4 >= 4) {
    v14 = 4;
  }
  else {
    v14 = a4;
  }
  v615 = v14;
  v645_.v647 = 0;
  LODWORD(v645_.v645) = 0;
  v608 = a4;
  v15 = *((_DWORD*)SdkData_e87c50[0] + (unsigned int)v14);
  if (a4 != 0) {
    v16 = v14 + 1;
    DWORDn(v645_.v645, sizeof(v645_.v645) / 4 - 1) =
        (int)(((unsigned __int64)(v15 * (__int64)(a6 << 16)) >> 32) + 0x4000) >>
        15;
    if ((_DWORD)v615 != 1) {
      LODWORD(v645_.v646) =
          (int)(((unsigned __int64)(v15 * (__int64)(a6 << 17)) >> 32) +
                0x4000) >>
          15;
      if (v16 != 3) {
        DWORDn(v645_.v646, sizeof(v645_.v646) / 4 - 1) =
            (int)(((unsigned __int64)(v15 * (__int64)(196608 * a6)) >> 32) +
                  0x4000) >>
            15;
        if (v16 != 4) {
          v645_.v647 =
              (int)(((unsigned __int64)(v15 * (__int64)(a6 << 18)) >> 32) +
                    0x4000) >>
              15;
        }
      }
    }
  }
  memset_plt_alt1((__int64)v638, 0, 0x780u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (a4 == 0) {
    v18 = v637;
    v118 = (int)v637 > 0;
  LABEL_72:
    v630 = v118;
    goto LABEL_74;
  }
  v17 = (unsigned int)(v13 + v12);
  LODWORD(v18) = v637;
  v19 = 0;
  v622 = v17;
  v20 = v638;
  v21 = v613 + 273;
  v22 = v613 + 224;
  v23 = -(v637 & 0x7FFFFFF8);
  do {
    if ((int)v18 < 1) {
      goto LABEL_22;
    }
    if ((unsigned int)v637 < 8) {
      v28 = 0;
      if ((v637 & 7) == 0) {
        goto LABEL_22;
      }
    LABEL_20:
      v32 = v637 & 7;
      v33 = &v20[4 * v28];
      do {
        v33[400] = 1;
        v33[320] = 1;
        --v32;
        v33[80] = 1;
        *(_DWORD*)v33++ = 1;
      } while (v32 != 0);
      goto LABEL_22;
    }
    v29 = 0;
    v30 = v20;
    do {
      *((_QWORD*)v30 + 200) = 0x100000001LL;
      *((_DWORD*)v30 + 320) = 1;
      v29 -= 8;
      *((_DWORD*)v30 + 80) = 1;
      *(_DWORD*)v30 = 1;
      *(_QWORD*)(v30 + 4) = 0x100000001LL;
      *((_QWORD*)v30 + 201) = 0x100000001LL;
      *(_QWORD*)(v30 + 12) = 0x100000001LL;
      *((_QWORD*)v30 + 202) = 0x100000001LL;
      *(_QWORD*)(v30 + 20) = 0x100000001LL;
      *((_QWORD*)v30 + 203) = 0x100000001LL;
      *(_QWORD*)(v30 + 1284) = 0x100000001LL;
      *((_DWORD*)v30 + 327) = 1;
      *((_DWORD*)v30 + 87) = 1;
      *((_DWORD*)v30 + 7) = 1;
      *(_QWORD*)(v30 + 324) = 0x100000001LL;
      *(_QWORD*)(v30 + 1292) = 0x100000001LL;
      *(_QWORD*)(v30 + 332) = 0x100000001LL;
      *(_QWORD*)(v30 + 1300) = 0x100000001LL;
      v31 = v30 + 340;
      v30 += 32;
      *v31 = 0x100000001LL;
    } while (v23 != v29);
    v28 = -v29;
    if ((v637 & 7) != 0) {
      goto LABEL_20;
    }
  LABEL_22:
    v614 = v20;
    if ((int)v17 > 0) {
      v24 = v19 + 1;
      v34 = 0;
      v629 = v19 + 1;
      v631 = v19;
      v35 = *((int*)&v645_.v645 + v19);
      v36 = *((int*)&v645_.v645 + v19 + 1);
      v37 = v613[221] == 10;
      v626 = v37;
      v624 = v35;
      while (1) {
        v38 = &v638[80 * v19];
        v39 = &v640[80 * v19 + 240];
        v40 = &v643[10 * v19];
        v41 = &v644[10 * v19];
        v42 = v21[v34] >> v37;
        v43 = 4LL * v42;
        v44 = *(_DWORD*)&v38[v43];
        v45 = *(_DWORD*)&v39[v43];
        v46 = *(_DWORD*)((char*)v40 + v43);
        v47 = *(_DWORD*)((char*)v41 + v43);
        if ((int)v35 >= (int)v36) {
          ++v34;
          goto LABEL_25;
        }
        v48 = v22[v34++];
        v49 = v22[v34];
        if ((int)v48 < (int)v49) {
          break;
        }
      LABEL_25:
        *((_DWORD*)v40 + v42) = v46;
        *((_DWORD*)v41 + v42) = v47;
        *(_DWORD*)&v38[4 * v42] = v44 & ~(v44 >> 31);
        *(_DWORD*)&v39[4 * v42] = v45 & ~(v45 >> 31);
        if (v34 == v17) {
          goto LABEL_12;
        }
      }
      v634 = &v638[80 * v19];
      v50 = v49 - 1;
      v51 = v35;
      v52 = *((_BYTE*)v613 + v42 + 1336);
      v53 = *(_BYTE*)(a3 + v42);
      while (1) {
        v54 = (__int64*)(a5 + 32 * v51);
        v56 = *v54;
        v55 = v54[1];
        v57 = v54[2];
        v58 = v54[3];
        if ((((_BYTE)v49 - (_BYTE)v48) & 1) != 0) {
          v60 = *(_DWORD*)(v56 + 4 * v48) << v53;
          v61 = *(_DWORD*)(v55 + 4 * v48) << v53;
          v62 = *(_DWORD*)(v57 + 4 * v48) << v53;
          v63 = *(_DWORD*)(v58 + 4 * v48) << v53;
          v64 = (unsigned __int64)(v62 * (__int64)v62) >> 32;
          v44 +=
              (unsigned int)(((unsigned __int64)(v61 * (__int64)v61) >> 32) +
                             ((unsigned __int64)(v60 * (__int64)v60) >> 32)) >>
              v52;
          v65 = (unsigned __int64)(v62 * (__int64)v60) >> 32;
          v66 = (unsigned __int64)(v62 * (__int64)v61) >> 32;
          v45 += (unsigned int)(((unsigned __int64)(v63 * (__int64)v63) >> 32) +
                                v64) >>
                 v52;
          v67 = v63 * (__int64)v61;
          v59 = v48 + 1;
          v46 +=
              (signed __int32)(DWORDn(v67, sizeof(v67) / 4 - 1) + (int)v65) >>
              v52;
          v47 += (int)(v66 - ((unsigned __int64)(v63 * (__int64)v60) >> 32)) >>
                 v52;
          if (v50 != v48) {
          LABEL_34:
            v68 = v49 - v59;
            v69 = (int*)(v56 + 4 * v59 + 4);
            v70 = (int*)(v55 + 4 * v59 + 4);
            v71 = (int*)(v57 + 4 * v59 + 4);
            v72 = (int*)(v58 + 4 * v59 + 4);
            do {
              v68 -= 2;
              v73 = *(v69 - 1) << v53;
              v74 = *(v70 - 1) << v53;
              v75 = *(v71 - 1) << v53;
              v76 = *(v72 - 1) << v53;
              v77 = ((unsigned int)(((unsigned __int64)(v74 * (__int64)v74) >>
                                     32) +
                                    ((unsigned __int64)(v73 * (__int64)v73) >>
                                     32)) >>
                     v52) +
                    v44;
              v78 = v76 * (__int64)v74;
              v79 = ((unsigned int)(((unsigned __int64)(v76 * (__int64)v76) >>
                                     32) +
                                    ((unsigned __int64)(v75 * (__int64)v75) >>
                                     32)) >>
                     v52) +
                    v45;
              v80 = v75 * (__int64)v73;
              v81 = v76 * (__int64)v73;
              v82 = (unsigned __int64)(v75 * (__int64)v74) >> 32;
              v84 = *v70;
              v70 += 2;
              v83 = v84;
              v86 = *v71;
              v71 += 2;
              v85 = v86;
              LODWORD(v81) = v82 - DWORDn(v81, sizeof(v81) / 4 - 1);
              v87 = *v69;
              v69 += 2;
              LODWORD(v82) = v87;
              v88 = v83 << v53;
              v89 = *v72;
              v72 += 2;
              LODWORD(v82) = (_DWORD)v82 << v53;
              v44 = ((unsigned int)(((unsigned __int64)(v88 * (__int64)v88) >>
                                     32) +
                                    ((unsigned __int64)((int)v82 *
                                                        (__int64)(int)v82) >>
                                     32)) >>
                     v52) +
                    v77;
              v45 =
                  ((unsigned int)(((unsigned __int64)((v89 << v53) *
                                                      (__int64)(v89 << v53)) >>
                                   32) +
                                  ((unsigned __int64)((v85 << v53) *
                                                      (__int64)(v85 << v53)) >>
                                   32)) >>
                   v52) +
                  v79;
              v46 += ((int)(((unsigned __int64)((v89 << v53) * (__int64)v88) >>
                             32) +
                            ((unsigned __int64)((v85 << v53) *
                                                (__int64)(int)v82) >>
                             32)) >>
                      v52) +
                     ((signed __int32)(DWORDn(v78, sizeof(v78) / 4 - 1) +
                                       DWORDn(v80, sizeof(v80) / 4 - 1)) >>
                      v52);
              v47 += ((int)(((unsigned __int64)((v85 << v53) * (__int64)v88) >>
                             32) -
                            ((unsigned __int64)((v89 << v53) *
                                                (__int64)(int)v82) >>
                             32)) >>
                      v52) +
                     ((int)v81 >> v52);
            } while (v68 != 0);
          }
        }
        else {
          v59 = v48;
          if (v50 != v48) {
            goto LABEL_34;
          }
        }
        if (++v51 == v36) {
          v17 = v622;
          v21 = v613 + 273;
          v22 = v613 + 224;
          v37 = v626;
          v35 = v624;
          v38 = v634;
          v24 = v629;
          v19 = v631;
          goto LABEL_25;
        }
      }
    }
    v24 = v19 + 1;
  LABEL_12:
    v25 = 5 * v19;
    nn_codec_LdDataVector_plt_alt1((__int64)&v638[80 * v19],
                                   (__int64)&v641[10 * v19], v612),
        v408 = COERCE_AS(__typeof__(v408),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v513 = COERCE_AS(__typeof__(v513),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v517 = COERCE_AS(__typeof__(v517),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v525 = COERCE_AS(__typeof__(v525),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v26 = &v640[16 * v25 + 240];
    v27 = &v642[v25];
    v18 = v637;
    nn_codec_LdDataVector_plt_alt1((__int64)v26, (__int64)v27, v637),
        v408 = COERCE_AS(__typeof__(v408),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v513 = COERCE_AS(__typeof__(v513),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v517 = COERCE_AS(__typeof__(v517),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v525 = COERCE_AS(__typeof__(v525),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v23 = -(v637 & 0x7FFFFFF8);
    v19 = v24;
    v20 = v614 + 80;
  } while (v24 != v615);
  if ((int)v637 >= 1) {
    v90 = v652;
    v91 = 0;
    v92 = v642;
    v93 = (int*)v641;
    v94 = v653;
    while ((unsigned int)(v612 - 1) < 3) {
      v95 = 0;
      if ((v637 & 3) != 0) {
        goto LABEL_63;
      }
    LABEL_40:
      ++v91;
      v93 += 20;
      v94 += 80;
      v90 += 80;
      v92 += 5;
      if (v91 == v615) {
        v118 = true;
        goto LABEL_72;
      }
    }
    v96 = 0;
    v97 = v94;
    v98 = v93;
    do {
      v96 -= 4;
      v99 = v98[82];
      v100 = (unsigned __int64)(101008904 * (*v98 - (__int64)v98[80])) >> 32;
      if ((int)v100 <= -16777216) {
        LODWORD(v100) = -16777216;
      }
      v101 = (unsigned __int64)(101008904 * (v98[1] - (__int64)v98[81])) >> 32;
      if ((int)v100 >= 0xFFFFFF) {
        LODWORD(v100) = 0xFFFFFF;
      }
      v102 = (_DWORD)v100 << 7;
      if ((int)v101 <= -16777216) {
        LODWORD(v101) = -16777216;
      }
      if ((int)v101 >= 0xFFFFFF) {
        LODWORD(v101) = 0xFFFFFF;
      }
      *(v97 - 2) = v102;
      *(v97 - 1) = (_DWORD)v101 << 7;
      v103 = v98[3];
      v104 = v98[2] - v99;
      v105 = v98[83];
      v98 += 4;
      v106 = (unsigned __int64)(101008904 * v104) >> 32;
      v107 = 101008904 * (v103 - v105);
      if ((int)v106 <= -16777216) {
        LODWORD(v106) = -16777216;
      }
      v108 = DWORDn(v107, sizeof(v107) / 4 - 1);
      if ((int)v106 >= 0xFFFFFF) {
        LODWORD(v106) = 0xFFFFFF;
      }
      v109 = (_DWORD)v106 << 7;
      if ((int)v108 <= -16777216) {
        LODWORD(v108) = -16777216;
      }
      if ((int)v108 >= 0xFFFFFF) {
        LODWORD(v108) = 0xFFFFFF;
      }
      *(_DWORD*)v97 = v109;
      v97[1] = (_DWORD)v108 << 7;
      v97 += 4;
    } while (-(v637 & 0x7FFFFFFC) != v96);
    v95 = -v96;
    if ((v637 & 3) == 0) {
      goto LABEL_40;
    }
  LABEL_63:
    v110 = &v90[4 * v95];
    v111 = (int*)v92 + v95;
    v112 = &v93[v95];
    v113 = v637 & 3;
    do {
      v115 = *v112++;
      v114 = v115;
      v116 = *v111++;
      v117 = (unsigned __int64)(101008904 * (v114 - v116)) >> 32;
      if ((int)v117 <= -16777216) {
        LODWORD(v117) = -16777216;
      }
      if ((int)v117 >= 0xFFFFFF) {
        LODWORD(v117) = 0xFFFFFF;
      }
      --v113;
      *(_DWORD*)v110++ = (_DWORD)v117 << 7;
    } while (v113 != 0);
    goto LABEL_40;
  }
  v630 = false;
LABEL_74:
  memset_plt_alt1((__int64)v648, 0, 0x140u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LODWORD(v119) = v615;
  nn_codec_calculateICC((__int64)v641, (int*)v642, v643, (__int64)v644, v648,
                        v615, v18),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v608 >= 2) {
    v120 = v615;
    v620 = v18 - 1;
    v619 = v18 & 7;
    v617 = (v18 & 0x40) == 0;
    v121 = -(__int64)((unsigned int)v18 & 0xFFFFFFFC);
    v610 = (unsigned __int64)(22151168LL * (int)((_DWORD)v18 << 25)) >> 32;
    v611 = v18 & 3;
    v621 = v121;
    v618 = -(__int64)((unsigned int)v18 & 0xFFFFFFF8);
    v609 = (unsigned __int64)(9LL * (int)((_DWORD)v18 << 25)) >> 5;
    v122 = v611;
    while (1) {
      v123 = v617;
      if (!v630) {
        goto LABEL_108;
      }
      if (v620 >= 3) {
        break;
      }
      v124 = 0;
      v125 = 0;
      v126 = 0;
      if (v122 != 0) {
        goto LABEL_84;
      }
    LABEL_86:
      v123 = v126 <= (int)v610 & v125 <= v609;
      if (v120 >= 4 && v123) {
        if (v620 >= 3) {
          v154 = (int*)v651;
          v155 = (int*)&v655_.v655;
          v156 = 0;
          v152 = 0;
          v153 = 0;
          do {
            v156 -= 4;
            v157 = (*(v155 - 23) >> 1) - (*(v155 - 3) >> 1);
            v158 = (*(v155 - 22) >> 1) - (*(v155 - 2) >> 1);
            v159 = (*(v154 - 23) >> 1) - (*(v154 - 3) >> 1);
            v160 = *(v155 - 20);
            v161 = (*(v154 - 22) >> 1) - (*(v154 - 2) >> 1);
            v162 = v153 +
                   ((unsigned int)((unsigned __int64)(v157 * (__int64)v157) >>
                                   32) >>
                    4);
            v163 = (*(v155 - 21) >> 1) - (*(v155 - 1) >> 1);
            v164 = *(v154 - 20);
            v165 = v152 +
                   ((unsigned int)((unsigned __int64)(v159 * (__int64)v159) >>
                                   32) >>
                    4);
            v166 = (*(v154 - 21) >> 1) - (*(v154 - 1) >> 1);
            v168 = *v155;
            v155 += 4;
            v167 = v168;
            v169 = *v154;
            v154 += 4;
            v153 =
                v162 +
                ((unsigned int)((unsigned __int64)(v158 * (__int64)v158) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(v163 * (__int64)v163) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(((v160 >> 1) - (v167 >> 1)) *
                                                   (__int64)((v160 >> 1) -
                                                             (v167 >> 1))) >>
                                32) >>
                 4);
            v152 =
                v165 +
                ((unsigned int)((unsigned __int64)(v161 * (__int64)v161) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(v166 * (__int64)v166) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(((v164 >> 1) - (v169 >> 1)) *
                                                   (__int64)((v164 >> 1) -
                                                             (v169 >> 1))) >>
                                32) >>
                 4);
          } while (v121 != v156);
          v151 = -v156;
          if (v122 != 0) {
            goto LABEL_100;
          }
        }
        else {
          v151 = 0;
          v152 = 0;
          v153 = 0;
          if (v122 == 0) {
            goto LABEL_102;
          }
        LABEL_100:
          v170 = (int*)&v650[4 * v151 + 68];
          v171 = (int*)&v654[4 * v151 + 68];
          v172 = v122;
          do {
            v173 = *v171;
            v174 = v171[20];
            v175 = v170[20];
            --v172;
            ++v171;
            v176 = *v170++;
            v153 +=
                (unsigned int)((unsigned __int64)(((v173 >> 1) - (v174 >> 1)) *
                                                  (__int64)((v173 >> 1) -
                                                            (v174 >> 1))) >>
                               32) >>
                4;
            v152 +=
                (unsigned int)((unsigned __int64)(((v176 >> 1) - (v175 >> 1)) *
                                                  (__int64)((v176 >> 1) -
                                                            (v175 >> 1))) >>
                               32) >>
                4;
          } while (v172 != 0);
        }
      LABEL_102:
        v123 = v153 <= (int)v610 & v152 <= v609;
      }
    LABEL_108:
      if (!v123) {
        LODWORD(v119) = v120;
        goto LABEL_180;
      }
      v119 = v120 >> 1;
      v616 = v120;
      if (v120 >= 2) {
        v206 = &v639;
        v207 = (int*)v640;
        v208 = v638;
        v209 = v638;
        v210 = 0;
        v627 = v120 >> 1;
        while (1) {
          v632 = v207;
          v635 = v206;
          if (!v630) {
            v211 = &v640[80 * v210 + 240];
            goto LABEL_144;
          }
          if (v620 < 7) {
            break;
          }
          v218 = 0;
          do {
            v218 -= 8;
            *((_DWORD*)v206 - 4) = (*v207 >> 1) + (*(v207 - 20) >> 1);
            *((_DWORD*)v206 - 3) = (v207[1] >> 1) + (*(v207 - 19) >> 1);
            *((_DWORD*)v206 - 2) = (v207[2] >> 1) + (*(v207 - 18) >> 1);
            *((_DWORD*)v206 - 1) = (v207[3] >> 1) + (*(v207 - 17) >> 1);
            *(_DWORD*)v206 = (v207[4] >> 1) + (*(v207 - 16) >> 1);
            *((_DWORD*)v206 + 1) = (v207[5] >> 1) + (*(v207 - 15) >> 1);
            *((_DWORD*)v206 + 2) = (v207[6] >> 1) + (*(v207 - 14) >> 1);
            v219 = v207[7];
            v220 = *(v207 - 13);
            v207 += 8;
            *((_DWORD*)v206 + 3) = (v219 >> 1) + (v220 >> 1);
            v206 += 4;
          } while (v618 != v218);
          v217 = -v218;
          if (v619 != 0) {
            goto LABEL_152;
          }
        LABEL_154:
          if (v620 < 7) {
            v226 = 0;
            if (v619 == 0) {
              goto LABEL_162;
            }
          LABEL_160:
            v232 = 4 * v226;
            v233 = v619;
            do {
              --v233;
              v234 = (*(int*)&v208[v232 + 400] >> 1) +
                     (*(int*)&v208[v232 + 320] >> 1);
              v235 = &v209[v232];
              v232 += 4;
              *((_DWORD*)v235 + 80) = v234;
            } while (v233 != 0);
            goto LABEL_162;
          }
          v227 = 320;
          v228 = 0;
          do {
            v229 = (int*)&v208[v227];
            v228 -= 8;
            v230 = (*(int*)&v208[v227 + 80] >> 1) + (*(int*)&v208[v227] >> 1);
            v231 = (int*)&v209[v227];
            v227 += 32;
            *v231 = v230;
            v231[1] = (v229[21] >> 1) + (v229[1] >> 1);
            v231[2] = (v229[22] >> 1) + (v229[2] >> 1);
            v231[3] = (v229[23] >> 1) + (v229[3] >> 1);
            v231[4] = (v229[24] >> 1) + (v229[4] >> 1);
            v231[5] = (v229[25] >> 1) + (v229[5] >> 1);
            v231[6] = (v229[26] >> 1) + (v229[6] >> 1);
            v231[7] = (v229[27] >> 1) + (v229[7] >> 1);
          } while (v618 != v228);
          v226 = -v228;
          if (v619 != 0) {
            goto LABEL_160;
          }
        LABEL_162:
          if (v620 >= 7) {
            v237 = 1280;
            v238 = 0;
            do {
              v239 = (int*)&v208[v237];
              v238 -= 8;
              v240 = (*(int*)&v208[v237 + 80] >> 1) + (*(int*)&v208[v237] >> 1);
              v241 = (int*)&v209[v237];
              v237 += 32;
              *v241 = v240;
              v241[1] = (v239[21] >> 1) + (v239[1] >> 1);
              v241[2] = (v239[22] >> 1) + (v239[2] >> 1);
              v241[3] = (v239[23] >> 1) + (v239[3] >> 1);
              v241[4] = (v239[24] >> 1) + (v239[4] >> 1);
              v241[5] = (v239[25] >> 1) + (v239[5] >> 1);
              v241[6] = (v239[26] >> 1) + (v239[6] >> 1);
              v241[7] = (v239[27] >> 1) + (v239[7] >> 1);
            } while (v618 != v238);
            v236 = -v238;
            if (v619 == 0) {
              goto LABEL_170;
            }
          LABEL_168:
            v242 = 4 * v236;
            v243 = v619;
            do {
              --v243;
              v244 = (*(int*)&v208[v242 + 1360] >> 1) +
                     (*(int*)&v208[v242 + 1280] >> 1);
              v245 = &v209[v242];
              v242 += 4;
              *((_DWORD*)v245 + 320) = v244;
            } while (v243 != 0);
            goto LABEL_170;
          }
          v236 = 0;
          if (v619 != 0) {
            goto LABEL_168;
          }
        LABEL_170:
          if (v620 >= 7) {
            v247 = 1600;
            v248 = 0;
            do {
              v249 = (int*)&v208[v247];
              v248 -= 8;
              v250 = (*(int*)&v208[v247 + 80] >> 1) + (*(int*)&v208[v247] >> 1);
              v251 = (int*)&v209[v247];
              v247 += 32;
              *v251 = v250;
              v251[1] = (v249[21] >> 1) + (v249[1] >> 1);
              v251[2] = (v249[22] >> 1) + (v249[2] >> 1);
              v251[3] = (v249[23] >> 1) + (v249[3] >> 1);
              v251[4] = (v249[24] >> 1) + (v249[4] >> 1);
              v251[5] = (v249[25] >> 1) + (v249[5] >> 1);
              v251[6] = (v249[26] >> 1) + (v249[6] >> 1);
              v251[7] = (v249[27] >> 1) + (v249[7] >> 1);
            } while (v618 != v248);
            v246 = -v248;
            v211 = &v640[80 * v210 + 240];
            if (v619 == 0) {
              goto LABEL_144;
            }
          LABEL_176:
            v252 = 4 * v246;
            v253 = v619;
            do {
              --v253;
              v254 = (*(int*)&v208[v252 + 1680] >> 1) +
                     (*(int*)&v208[v252 + 1600] >> 1);
              v255 = &v209[v252];
              v252 += 4;
              *((_DWORD*)v255 + 400) = v254;
            } while (v253 != 0);
            goto LABEL_144;
          }
          v246 = 0;
          v211 = &v640[80 * v210 + 240];
          if (v619 != 0) {
            goto LABEL_176;
          }
        LABEL_144:
          v212 = 5 * v210;
          v213 = 2 * v210;
          v214 = v210;
          nn_codec_LdDataVector_plt_alt1((__int64)&v638[80 * v210],
                                         (__int64)&v641[10 * v210], v637),
              v408 = COERCE_AS(__typeof__(v408),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v513 = COERCE_AS(__typeof__(v513),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v517 = COERCE_AS(__typeof__(v517),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v525 = COERCE_AS(__typeof__(v525),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          nn_codec_LdDataVector_plt_alt1((__int64)v211, (__int64)&v642[v212],
                                         v637),
              v408 = COERCE_AS(__typeof__(v408),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v513 = COERCE_AS(__typeof__(v513),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v517 = COERCE_AS(__typeof__(v517),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v525 = COERCE_AS(__typeof__(v525),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v215 = 4 * v214;
          v210 = v214 + 1;
          v121 = v621;
          v209 += 80;
          v216 = *((_DWORD*)&v645_.v645 + v213);
          v119 = v627;
          v208 += 160;
          *(_DWORD*)((char*)&v645_.v645 + v215) = v216;
          v207 = v632 + 40;
          v206 = v635 + 10;
          if (v210 == v627) {
            goto LABEL_110;
          }
        }
        v217 = 0;
        if (v619 == 0) {
          goto LABEL_154;
        }
      LABEL_152:
        v221 = &v209[4 * v217];
        v222 = (int*)&v208[4 * v217];
        for (i = v619; i != 0; --i) {
          v224 = v222[20];
          v225 = *v222++;
          *(_DWORD*)v221++ = (v224 >> 1) + (v225 >> 1);
        }
        goto LABEL_154;
      }
    LABEL_110:
      v122 = v611;
      *((_DWORD*)&v645_.v645 + v119) = *((_DWORD*)&v645_.v645 + (v616 & 6));
      if (v630) {
        v179 = (int*)v641;
        v178 = v642;
        v180 = v653;
        v181 = v652;
        v182 = 0;
        while (v620 < 3) {
          v183 = 0;
          if (v611 != 0) {
            goto LABEL_135;
          }
        LABEL_112:
          ++v182;
          v179 += 20;
          v180 += 80;
          v181 += 80;
          v178 += 5;
          if (v182 == v119) {
            goto LABEL_76;
          }
        }
        v184 = 0;
        v185 = v180;
        v186 = v179;
        do {
          v184 -= 4;
          v187 = v186[82];
          v188 =
              (unsigned __int64)(101008904 * (*v186 - (__int64)v186[80])) >> 32;
          if ((int)v188 <= -16777216) {
            LODWORD(v188) = -16777216;
          }
          v189 =
              (unsigned __int64)(101008904 * (v186[1] - (__int64)v186[81])) >>
              32;
          if ((int)v188 >= 0xFFFFFF) {
            LODWORD(v188) = 0xFFFFFF;
          }
          v190 = (_DWORD)v188 << 7;
          if ((int)v189 <= -16777216) {
            LODWORD(v189) = -16777216;
          }
          if ((int)v189 >= 0xFFFFFF) {
            LODWORD(v189) = 0xFFFFFF;
          }
          *(v185 - 2) = v190;
          *(v185 - 1) = (_DWORD)v189 << 7;
          v191 = v186[3];
          v192 = v186[2] - v187;
          v193 = v186[83];
          v186 += 4;
          v194 = (unsigned __int64)(101008904 * v192) >> 32;
          v195 = 101008904 * (v191 - v193);
          if ((int)v194 <= -16777216) {
            LODWORD(v194) = -16777216;
          }
          v196 = DWORDn(v195, sizeof(v195) / 4 - 1);
          if ((int)v194 >= 0xFFFFFF) {
            LODWORD(v194) = 0xFFFFFF;
          }
          v197 = (_DWORD)v194 << 7;
          if ((int)v196 <= -16777216) {
            LODWORD(v196) = -16777216;
          }
          if ((int)v196 >= 0xFFFFFF) {
            LODWORD(v196) = 0xFFFFFF;
          }
          *(_DWORD*)v185 = v197;
          v185[1] = (_DWORD)v196 << 7;
          v185 += 4;
        } while (v121 != v184);
        v183 = -v184;
        if (v611 == 0) {
          goto LABEL_112;
        }
      LABEL_135:
        v198 = &v181[4 * v183];
        v199 = (int*)v178 + v183;
        v200 = &v179[v183];
        for (j = v611; j != 0; --j) {
          v203 = *v200++;
          v202 = v203;
          v204 = *v199++;
          v205 = (unsigned __int64)(101008904 * (v202 - v204)) >> 32;
          if ((int)v205 <= -16777216) {
            LODWORD(v205) = -16777216;
          }
          if ((int)v205 >= 0xFFFFFF) {
            LODWORD(v205) = 0xFFFFFF;
          }
          *(_DWORD*)v198++ = (_DWORD)v205 << 7;
        }
        goto LABEL_112;
      }
    LABEL_76:
      nn_codec_calculateICC((__int64)v641, (int*)v642, v643, (__int64)v644,
                            v648, v119, v637),
          v408 = COERCE_AS(__typeof__(v408),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v513 = COERCE_AS(__typeof__(v513),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v517 = COERCE_AS(__typeof__(v517),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v525 = COERCE_AS(__typeof__(v525),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v120 = v119;
      if (v616 <= 3) {
        goto LABEL_180;
      }
    }
    v127 = (int*)v650;
    v128 = (int*)v654;
    v129 = 0;
    v125 = 0;
    v126 = 0;
    do {
      v129 -= 4;
      v130 = (*(v128 - 23) >> 1) - (*(v128 - 3) >> 1);
      v131 = (*(v128 - 22) >> 1) - (*(v128 - 2) >> 1);
      v132 = (*(v127 - 23) >> 1) - (*(v127 - 3) >> 1);
      v133 = *(v128 - 20);
      v134 = (*(v127 - 22) >> 1) - (*(v127 - 2) >> 1);
      v135 =
          v126 +
          ((unsigned int)((unsigned __int64)(v130 * (__int64)v130) >> 32) >> 4);
      v136 = (*(v128 - 21) >> 1) - (*(v128 - 1) >> 1);
      v137 = *(v127 - 20);
      v138 =
          v125 +
          ((unsigned int)((unsigned __int64)(v132 * (__int64)v132) >> 32) >> 4);
      v139 = (*(v127 - 21) >> 1) - (*(v127 - 1) >> 1);
      v141 = *v128;
      v128 += 4;
      v140 = v141;
      v142 = *v127;
      v127 += 4;
      v126 = v135 +
             ((unsigned int)((unsigned __int64)(v131 * (__int64)v131) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(v136 * (__int64)v136) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(((v133 >> 1) - (v140 >> 1)) *
                                                (__int64)((v133 >> 1) -
                                                          (v140 >> 1))) >>
                             32) >>
              4);
      v125 = v138 +
             ((unsigned int)((unsigned __int64)(v134 * (__int64)v134) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(v139 * (__int64)v139) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(((v137 >> 1) - (v142 >> 1)) *
                                                (__int64)((v137 >> 1) -
                                                          (v142 >> 1))) >>
                             32) >>
              4);
    } while (v121 != v129);
    v124 = -v129;
    if (v122 == 0) {
      goto LABEL_86;
    }
  LABEL_84:
    v143 = &v648[v124];
    v144 = (int*)&v652[4 * v124];
    v145 = v122;
    do {
      v146 = *v144;
      v147 = v144[20];
      v148 = v143[20];
      --v145;
      ++v144;
      v149 = *v143++;
      v126 += (unsigned int)((unsigned __int64)(((v146 >> 1) - (v147 >> 1)) *
                                                (__int64)((v146 >> 1) -
                                                          (v147 >> 1))) >>
                             32) >>
              4;
      v125 += (unsigned int)((unsigned __int64)(((v149 >> 1) - (v148 >> 1)) *
                                                (__int64)((v149 >> 1) -
                                                          (v148 >> 1))) >>
                             32) >>
              4;
    } while (v145 != 0);
    goto LABEL_86;
  }
LABEL_180:
  v256 = v613;
  if (a7 != 0) {
    *(_QWORD*)(v613 + 217) = 0x140000000ALL;
    *(_QWORD*)(v613 + 219) = 0xA00000014LL;
  }
  v257 = v613[333];
  memset_plt_alt1((__int64)v667, 0, 0x140u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  memset_plt_alt1((__int64)v662, 0, 0x140u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v660_.v661 = 0;
  if ((_DWORD)v119 == 0) {
    *v613 = 0;
    v613[108] = 0;
    v613[218] = 20;
    v613[219] = 20;
    goto LABEL_557;
  }
  if (!v630) {
    v316 = v637;
    *v613 = 0;
    v262 = (unsigned int)v119;
    goto LABEL_439;
  }
  v636 = v257;
  v258 = 0;
  v259 = 0;
  LODWORD(v260) = 0;
  LODWORD(v261) = 0;
  v628 = v119;
  v262 = (unsigned int)v119;
  while (2) {
    v263 = v637;
    v264 = 0;
    v265 = v258;
    while (2) {
      v266 = *(_DWORD*)&v652[v265];
      v267 = v266 >> 1;
      v268 = (v266 >> 1) + 301989888;
      if (v268 < 0) {
        v268 = -301989888 - (v266 >> 1);
      }
      v269 = v267 + 419430400;
      if (v267 + 419430400 < 0) {
        v269 = -419430400 - (v266 >> 1);
      }
      if (v268 > v269) {
        v270 = 0;
        goto LABEL_246;
      }
      v271 = v267 + 234881024;
      if (v267 + 234881024 < 0) {
        v271 = -234881024 - v267;
      }
      if (v271 > v268) {
        v270 = 1;
        goto LABEL_246;
      }
      v272 = v267 + 167772160;
      if (v267 + 167772160 < 0) {
        v272 = -167772160 - v267;
      }
      if (v272 > v271) {
        v270 = 2;
        goto LABEL_246;
      }
      v273 = v267 + 117440512;
      if (v267 + 117440512 < 0) {
        v273 = -117440512 - v267;
      }
      if (v273 > v272) {
        v270 = 3;
        goto LABEL_246;
      }
      v274 = v267 + 0x4000000;
      if (v267 + 0x4000000 < 0) {
        v274 = -67108864 - v267;
      }
      if (v274 > v273) {
        v270 = 4;
        goto LABEL_246;
      }
      v275 = v267 + 0x2000000;
      if (v267 + 0x2000000 < 0) {
        v275 = -33554432 - v267;
      }
      if (v275 > v274) {
        v270 = 5;
        goto LABEL_246;
      }
      if (v267 >= 0) {
        v276 = v266 >> 1;
      }
      else {
        v276 = -v267;
      }
      if (v276 > v275) {
        v270 = 6;
        goto LABEL_246;
      }
      v277 = v267 - 0x2000000;
      if (v267 - 0x2000000 < 0) {
        v277 = 0x2000000 - v267;
      }
      if (v277 > v276) {
        v270 = 7;
        goto LABEL_246;
      }
      v278 = v267 - 0x4000000;
      if (v267 - 0x4000000 < 0) {
        v278 = 0x4000000 - v267;
      }
      if (v278 > v277) {
        v270 = 8;
        goto LABEL_246;
      }
      v279 = v267 - 117440512;
      if (v267 - 117440512 < 0) {
        v279 = 117440512 - v267;
      }
      if (v279 > v278) {
        v270 = 9;
        goto LABEL_246;
      }
      v280 = v267 - 167772160;
      if (v267 - 167772160 < 0) {
        v280 = 167772160 - v267;
      }
      if (v280 > v279) {
        v270 = 10;
        goto LABEL_246;
      }
      v281 = v267 - 234881024;
      if (v267 - 234881024 < 0) {
        v281 = 234881024 - v267;
      }
      if (v281 > v280) {
        v270 = 11;
        goto LABEL_246;
      }
      v282 = v267 - 301989888;
      if (v267 - 301989888 < 0) {
        v282 = 301989888 - v267;
      }
      if (v282 > v281) {
        v270 = 12;
        goto LABEL_246;
      }
      v284 = v267 - 419430400;
      v283 = v267 - 419430400 < 0;
      v285 = 419430400 - v267;
      if (!v283) {
        v285 = v284;
      }
      if (v285 <= v282) {
        v286 = 7;
        v270 = 14;
      }
      else {
        v270 = 13;
      LABEL_246:
        v286 = v270 - 7;
      }
      v287 = SdkData_c36f04[v270];
      *(_DWORD*)&v662[v265] = v286;
      v265 += 4;
      v288 = v266 - v287;
      if (v288 < 0) {
        v288 = -v288;
      }
      --v263;
      v264 += (unsigned int)v288 >> 6;
      if (v263 != 0) {
        continue;
      }
      break;
    }
    v289 = 0;
    v290 = 0;
    do {
      v296 = *(_DWORD*)&v652[80 * v259 + 4 * v289];
      v291 = -1;
      v297 = (int*)&SdkData_c36f50;
      v298 = v296 >> 1;
      while (1) {
        v299 = v298 - (*(v297 - 3) >> 1);
        v300 = v298 - (*(v297 - 4) >> 1);
        if (v299 >= 0) {
          v301 = v298 - (*(v297 - 3) >> 1);
        }
        else {
          v301 = (*(v297 - 3) >> 1) - v298;
        }
        if (v300 < 0) {
          v300 = (*(v297 - 4) >> 1) - v298;
        }
        if (v301 > v300) {
          LODWORD(v291) = v291 + 1;
        LABEL_253:
          v292 = v291 - 15;
          v293 = (unsigned int)v291;
          goto LABEL_254;
        }
        v302 = v298 - (*(v297 - 2) >> 1);
        if (v302 >= 0) {
          v303 = v298 - (*(v297 - 2) >> 1);
        }
        else {
          v303 = (*(v297 - 2) >> 1) - v298;
        }
        if (v299 < 0) {
          v299 = (*(v297 - 3) >> 1) - v298;
        }
        if (v303 > v299) {
          LODWORD(v291) = v291 + 2;
          goto LABEL_253;
        }
        v304 = v298 - (*(v297 - 1) >> 1);
        if (v304 >= 0) {
          v305 = v298 - (*(v297 - 1) >> 1);
        }
        else {
          v305 = (*(v297 - 1) >> 1) - v298;
        }
        if (v302 < 0) {
          v302 = (*(v297 - 2) >> 1) - v298;
        }
        if (v305 > v302) {
          LODWORD(v291) = v291 + 3;
          goto LABEL_253;
        }
        v306 = v298 - (*v297 >> 1);
        if (v306 >= 0) {
          v307 = v298 - (*v297 >> 1);
        }
        else {
          v307 = (*v297 >> 1) - v298;
        }
        if (v304 < 0) {
          v304 = (*(v297 - 1) >> 1) - v298;
        }
        if (v307 > v304) {
          LODWORD(v291) = v291 + 4;
          goto LABEL_253;
        }
        v308 = v298 - (v297[1] >> 1);
        if (v308 >= 0) {
          v309 = v298 - (v297[1] >> 1);
        }
        else {
          v309 = (v297[1] >> 1) - v298;
        }
        if (v306 < 0) {
          v306 = (*v297 >> 1) - v298;
        }
        if (v309 > v306) {
          LODWORD(v291) = v291 + 5;
          goto LABEL_253;
        }
        v310 = v298 - (v297[2] >> 1);
        if (v310 >= 0) {
          v311 = v298 - (v297[2] >> 1);
        }
        else {
          v311 = (v297[2] >> 1) - v298;
        }
        if (v308 < 0) {
          v308 = (v297[1] >> 1) - v298;
        }
        if (v311 > v308) {
          LODWORD(v291) = v291 + 6;
          goto LABEL_253;
        }
        if (v291 == 23) {
          break;
        }
        v312 = v298 - (v297[3] >> 1);
        if (v312 >= 0) {
          v313 = v298 - (v297[3] >> 1);
        }
        else {
          v313 = (v297[3] >> 1) - v298;
        }
        if (v310 < 0) {
          v310 = (v297[2] >> 1) - v298;
        }
        if (v313 > v310) {
          LODWORD(v291) = v291 + 7;
          goto LABEL_253;
        }
        v314 = v297[4];
        v291 += 8;
        v297 += 8;
        v315 = v298 - (v314 >> 1);
        if (v315 < 0) {
          v315 = -v315;
        }
        if (v312 < 0) {
          v312 = -v312;
        }
        if (v315 > (unsigned int)v312) {
          goto LABEL_253;
        }
      }
      v292 = 15;
      v293 = 30;
    LABEL_254:
      v294 = SdkData_c36f40[v293];
      v667[20 * v259 + v289++] = v292;
      v295 = v296 - v294;
      if (v295 < 0) {
        v295 = -v295;
      }
      v290 += (unsigned int)v295 >> 6;
    } while (v289 != v637);
    v260 = (unsigned int)(v264 + v260);
    v261 = (unsigned int)(v290 + v261);
    ++v259;
    v258 += 80;
    if (v259 != (unsigned int)v119) {
      continue;
    }
    break;
  }
  v316 = v637;
  v256 = v613;
  v317 = v637 - 1;
  v318 = v637 & 7;
  *v613 = 0;
  if ((unsigned __int64)(v637 - 1) >= 7) {
    v321 = 0;
    v320 = 0;
    v322 = (int*)v663_.v663;
    do {
      v323 = *(v322 - 4);
      v324 = *(v322 - 3);
      v321 -= 8;
      if (v323 < 0) {
        v323 = -v323;
      }
      v325 = v323 + v320;
      if (v324 >= 0) {
        v326 = *(v322 - 3);
      }
      else {
        v326 = -v324;
      }
      v327 = *(v322 - 2);
      v328 = *(v322 - 1);
      if (v327 < 0) {
        v327 = -v327;
      }
      v329 = v327 + v326 + v325;
      if (v328 >= 0) {
        v330 = *(v322 - 1);
      }
      else {
        v330 = -v328;
      }
      v331 = *v322;
      v332 = v322[1];
      if (*v322 < 0) {
        v331 = -v331;
      }
      v333 = v331 + v330;
      if (v332 >= 0) {
        v334 = v322[1];
      }
      else {
        v334 = -v332;
      }
      v335 = v334 + v333 + v329;
      v336 = v322[2];
      v337 = v322[3];
      v322 += 8;
      if (v336 < 0) {
        v336 = -v336;
      }
      if (v337 < 0) {
        v337 = -v337;
      }
      v320 = v337 + v336 + v335;
    } while (-(__int64)((unsigned int)v637 & 0xFFFFFFF8) != v321);
    v319 = -v321;
    if ((v637 & 7) != 0) {
      goto LABEL_341;
    }
  }
  else {
    v319 = 0;
    v320 = 0;
    if ((v637 & 7) == 0) {
      goto LABEL_345;
    }
  LABEL_341:
    v338 = (int*)&v662[4 * v319];
    do {
      v340 = *v338++;
      v339 = v340;
      if (v340 < 0) {
        v339 = -v339;
      }
      --v318;
      v320 += v339;
    } while (v318 != 0);
  }
LABEL_345:
  if ((_DWORD)v119 != 1) {
    v341 = v637 & 7;
    if (v317 >= 7) {
      v343 = 0;
      v344 = (int*)v663_.v664;
      do {
        v345 = *(v344 - 7);
        v346 = *(v344 - 6);
        v343 -= 8;
        if (v345 < 0) {
          v345 = -v345;
        }
        v347 = v345 + v320;
        if (v346 >= 0) {
          v348 = *(v344 - 6);
        }
        else {
          v348 = -v346;
        }
        v349 = *(v344 - 5);
        v350 = *(v344 - 4);
        if (v349 < 0) {
          v349 = -v349;
        }
        v351 = v349 + v348 + v347;
        if (v350 >= 0) {
          v352 = *(v344 - 4);
        }
        else {
          v352 = -v350;
        }
        v353 = *(v344 - 3);
        v354 = *(v344 - 2);
        if (v353 < 0) {
          v353 = -v353;
        }
        v355 = v353 + v352;
        if (v354 >= 0) {
          v356 = *(v344 - 2);
        }
        else {
          v356 = -v354;
        }
        v357 = v356 + v355 + v351;
        v358 = *(v344 - 1);
        v359 = *v344;
        v344 += 8;
        if (v358 < 0) {
          v358 = -v358;
        }
        if (v359 < 0) {
          v359 = -v359;
        }
        v320 = v359 + v358 + v357;
      } while (-(__int64)((unsigned int)v637 & 0xFFFFFFF8) != v343);
      v342 = -v343;
      if ((v637 & 7) != 0) {
        goto LABEL_371;
      }
    }
    else {
      v342 = 0;
      if ((v637 & 7) == 0) {
        goto LABEL_375;
      }
    LABEL_371:
      v360 = (int*)&v663_.v663[4 * v342 + 64];
      do {
        v362 = *v360++;
        v361 = v362;
        if (v362 < 0) {
          v361 = -v361;
        }
        --v341;
        v320 += v361;
      } while (v341 != 0);
    }
  LABEL_375:
    if ((_DWORD)v119 != 2) {
      v363 = v637 & 7;
      if (v317 >= 7) {
        v365 = 0;
        v366 = (int*)v663_.v665;
        do {
          v367 = *(v366 - 7);
          v368 = *(v366 - 6);
          v365 -= 8;
          if (v367 < 0) {
            v367 = -v367;
          }
          v369 = v367 + v320;
          if (v368 >= 0) {
            v370 = *(v366 - 6);
          }
          else {
            v370 = -v368;
          }
          v371 = *(v366 - 5);
          v372 = *(v366 - 4);
          if (v371 < 0) {
            v371 = -v371;
          }
          v373 = v371 + v370 + v369;
          if (v372 >= 0) {
            v374 = *(v366 - 4);
          }
          else {
            v374 = -v372;
          }
          v375 = *(v366 - 3);
          v376 = *(v366 - 2);
          if (v375 < 0) {
            v375 = -v375;
          }
          v377 = v375 + v374;
          if (v376 >= 0) {
            v378 = *(v366 - 2);
          }
          else {
            v378 = -v376;
          }
          v379 = v378 + v377 + v373;
          v380 = *(v366 - 1);
          v381 = *v366;
          v366 += 8;
          if (v380 < 0) {
            v380 = -v380;
          }
          if (v381 < 0) {
            v381 = -v381;
          }
          v320 = v381 + v380 + v379;
        } while (-(__int64)((unsigned int)v637 & 0xFFFFFFF8) != v365);
        v364 = -v365;
      }
      else {
        v364 = 0;
      }
      if ((v637 & 7) != 0) {
        v382 = v637 & 7;
        v383 = (int*)&v663_.v664[4 * v364 + 52];
        do {
          v385 = *v383++;
          v384 = v385;
          if (v385 < 0) {
            v384 = -v384;
          }
          --v382;
          v320 += v384;
        } while (v382 != 0);
      }
      if ((_DWORD)v119 != 3) {
        if (v317 >= 7) {
          v387 = 0;
          v388 = &v663_.v666;
          do {
            v389 = *(v388 - 7);
            v390 = *(v388 - 6);
            v387 -= 8;
            if (v389 < 0) {
              v389 = -v389;
            }
            v391 = v389 + v320;
            if (v390 >= 0) {
              v392 = *(v388 - 6);
            }
            else {
              v392 = -v390;
            }
            v393 = *(v388 - 5);
            v394 = *(v388 - 4);
            if (v393 < 0) {
              v393 = -v393;
            }
            v395 = v393 + v392 + v391;
            if (v394 >= 0) {
              v396 = *(v388 - 4);
            }
            else {
              v396 = -v394;
            }
            v397 = *(v388 - 3);
            v398 = *(v388 - 2);
            if (v397 < 0) {
              v397 = -v397;
            }
            v399 = v397 + v396;
            if (v398 >= 0) {
              v400 = *(v388 - 2);
            }
            else {
              v400 = -v398;
            }
            v401 = v400 + v399 + v395;
            v402 = *(v388 - 1);
            v403 = *v388;
            v388 += 8;
            if (v402 < 0) {
              v402 = -v402;
            }
            if (v403 < 0) {
              v403 = -v403;
            }
            v320 = v403 + v402 + v401;
          } while (-(__int64)((unsigned int)v637 & 0xFFFFFFF8) != v387);
          v386 = -v387;
        }
        else {
          v386 = 0;
        }
        if ((v637 & 7) != 0) {
          v404 = (int*)&v663_.v665[4 * v386 + 52];
          do {
            v406 = *v404++;
            v405 = v406;
            if (v406 < 0) {
              v405 = -v405;
            }
            --v363;
            v320 += v405;
          } while (v363 != 0);
        }
      }
    }
  }
  if (v320 <= (int)(((unsigned __int64)(1503238528LL *
                                        (((int)v637 * (int)v119) << 16)) >>
                     32) +
                    0x4000) >>
      15) {
  LABEL_439:
    v256[218] = 20;
    v410 = v256 + 4;
    v411 = (__int64)(v256 + 8);
    do {
      *(_DWORD*)v410++ = 0;
      nn_codec_FDKmemclear_plt_alt1(v411, 4 * v316),
          v408 = COERCE_AS(__typeof__(v408),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v513 = COERCE_AS(__typeof__(v513),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v517 = COERCE_AS(__typeof__(v517),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v525 = COERCE_AS(__typeof__(v525),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      --v262;
      v411 += 80;
    } while (v262 != 0);
    goto LABEL_441;
  }
  v625 = v260;
  v633 = v261;
  *v613 = 1;
  v407 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v662, 0, (unsigned int)v637, 0, 0,
                                          &v660_.v661, &SdkData_c36f50),
  v408 = COERCE_AS(__typeof__(v408),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v513 = COERCE_AS(__typeof__(v513),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v517 = COERCE_AS(__typeof__(v517),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v525 = COERCE_AS(__typeof__(v525),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v613[218] > 19 || v613[3] == 1) {
    v409 = 0x7FFFFF;
  }
  else {
    v506 = v407;
    v409 = nn_codec_FDKsbrEnc_EncodeIid_plt(
        0, v662, v613 + 88, (unsigned int)v637, 0, 1, &v660_.v661, v408),
    v408 = COERCE_AS(__typeof__(v408),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v513 = COERCE_AS(__typeof__(v513),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v517 = COERCE_AS(__typeof__(v517),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v525 = COERCE_AS(__typeof__(v525),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v407 = v506;
  }
  memset(v660_.v660, 0, sizeof(v660_.v660));
  if (v409 >= v407) {
    v507 = v407;
  }
  else {
    v507 = v409;
  }
  v657_.v659 = v409 <= v407;
  if ((_DWORD)v119 == 1) {
    v508 = v637;
  }
  else {
    v508 = v637;
    v509 = (unsigned int)v119 - 1LL;
    v510 = v662;
    v511 = v660_.v660;
    do {
      v512 = nn_codec_FDKsbrEnc_EncodeIid_plt(
          0, v510 + 80, 0, (unsigned int)v612, 0, 0, &v660_.v661, v408),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v514 = nn_codec_FDKsbrEnc_EncodeIid_plt(
          0, v510 + 80, v510, (unsigned int)v637, 0, 1, &v660_.v661, v513),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v510 += 80;
      if (v514 >= v512) {
        v515 = v512;
      }
      else {
        v515 = v514;
      }
      --v509;
      *(_DWORD*)v511++ = v514 <= v512;
      v507 += v515;
    } while (v509 != 0);
  }
  v516 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v667, 0, v508, 1, 0, &v660_.v661,
                                          v408),
  v408 = COERCE_AS(__typeof__(v408),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v513 = COERCE_AS(__typeof__(v513),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v517 = COERCE_AS(__typeof__(v517),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v525 = COERCE_AS(__typeof__(v525),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v613[218] <= 19 && v613[3] != 0) {
    v518 = v516;
    v519 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v667, v613 + 88, v508, 1, 1,
                                            &v660_.v661, v517),
    v408 = COERCE_AS(__typeof__(v408),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v513 = COERCE_AS(__typeof__(v513),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v517 = COERCE_AS(__typeof__(v517),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v525 = COERCE_AS(__typeof__(v525),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v516 = v518;
  }
  else {
    v519 = 0x7FFFFF;
  }
  v657_.v658 = 0;
  v657_.v657 = 0;
  if (v519 >= v516) {
    v520 = v516;
  }
  else {
    v520 = v519;
  }
  v655_.v656 = v519 <= v516;
  if ((_DWORD)v119 != 1) {
    v521 = (unsigned int)v119 - 1LL;
    v522 = v667;
    v523 = &v657_.v657;
    do {
      v524 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v522 + 10, 0, v508, 1, 0,
                                              &v660_.v661, v517),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v526 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v522 + 10, v522, v637, 1, 1,
                                              &v660_.v661, v525),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v508 = v637;
      v522 += 10;
      if (v526 >= v524) {
        v527 = v524;
      }
      else {
        v527 = v526;
      }
      --v521;
      *(_DWORD*)v523 = v526 <= v524;
      v523 = (__int64*)((char*)v523 + 4);
      v520 += v527;
    } while (v521 != 0);
  }
  if (v520 == v507) {
    LODWORD(v119) = v628;
    v528 = v613;
    if ((unsigned int)v633 >= (unsigned int)v625) {
      v529 = 0x7FFFFF;
    }
    else {
      v529 = v507;
    }
    if ((unsigned int)v633 < (unsigned int)v625) {
      v507 = 0x7FFFFF;
    }
    v530 = v613 + 4;
    v531 = (__int64)(v613 + 8);
    v532 = 4 * v508;
    if (v529 < v507) {
      goto LABEL_664;
    }
  LABEL_677:
    v540 = v662;
    v541 = &v657_.v659;
    v528[2] = 0;
    for (k = v262; k != 0; --k) {
      v543 = *v541++;
      *(_DWORD*)v530++ = v543;
      nn_codec_FDKmemcpy_plt_alt1(v531, (__int64)v540, v532),
          v408 = COERCE_AS(__typeof__(v408),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v513 = COERCE_AS(__typeof__(v513),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v517 = COERCE_AS(__typeof__(v517),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v525 = COERCE_AS(__typeof__(v525),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v540 += 80;
      v531 += 80;
    }
  }
  else {
    v528 = v613;
    LODWORD(v119) = v628;
    v537 = ((unsigned __int64)(v633 * v636) >> 31) & 0xFFFFFFFE;
    v538 = (104857 * (int)v612 * v628) >> 1;
    if ((int)(v538 + ((unsigned int)v633 >> 1)) >> 1 > (int)v537) {
      LODWORD(v537) = (int)(v538 + ((unsigned int)v633 >> 1)) >> 1;
    }
    if ((int)v537 < (int)((unsigned int)v625 >> 2)) {
      v530 = v613 + 4;
      v531 = (__int64)(v613 + 8);
      v532 = 4 * v508;
      if (v520 < 0x7FFFFF) {
        goto LABEL_664;
      }
      goto LABEL_677;
    }
    v539 = (int)(v538 + ((unsigned int)v625 >> 1)) >> 1;
    if (v539 <= (int)(((unsigned __int64)(v625 * v636) >> 31) & 0xFFFFFFFE)) {
      v539 = ((unsigned __int64)(v625 * v636) >> 31) & 0xFFFFFFFE;
    }
    if (v539 < (int)((unsigned int)v633 >> 2)) {
      v520 = 0x7FFFFF;
    }
    v530 = v613 + 4;
    v531 = (__int64)(v613 + 8);
    v532 = 4 * v508;
    if (v520 >= v507) {
      goto LABEL_677;
    }
  LABEL_664:
    v533 = v667;
    v534 = &v655_.v656;
    v535 = v262;
    v528[2] = 1;
    do {
      v536 = *v534++;
      *(_DWORD*)v530++ = v536;
      nn_codec_FDKmemcpy_plt_alt1(v531, (__int64)v533, v532),
          v408 = COERCE_AS(__typeof__(v408),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v513 = COERCE_AS(__typeof__(v513),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v517 = COERCE_AS(__typeof__(v517),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v525 = COERCE_AS(__typeof__(v525),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      --v535;
      v533 += 10;
      v531 += 80;
    } while (v535 != 0);
  }
  v256 = v613;
  v544 = v613[218];
  if ((unsigned int)v119 >= 8) {
    v316 = v637;
    v546 = v613 + 6;
    v547 = 0;
    v548 = -(__int64)((unsigned int)v262 & 0xFFFFFFF8);
    while (1) {
      if (*(v546 - 2) == 1) {
        v549 = v544 + 1;
        v613[218] = v549;
        if (*(v546 - 1) != 1) {
          goto LABEL_686;
        }
      LABEL_694:
        v550 = v549 + 1;
        v613[218] = v550;
        if (*(_DWORD*)v546 == 1) {
          goto LABEL_695;
        }
      LABEL_687:
        v551 = 0;
        v613[218] = 0;
        if (v546[1] != 1) {
          goto LABEL_688;
        }
      LABEL_696:
        v552 = v551 + 1;
        v613[218] = v552;
        if (v546[2] == 1) {
          goto LABEL_697;
        }
      LABEL_689:
        v553 = 0;
        v613[218] = 0;
        if (v546[3] != 1) {
          goto LABEL_690;
        }
      LABEL_698:
        v554 = v553 + 1;
        v613[218] = v554;
        if (v546[4] == 1) {
          goto LABEL_699;
        }
      LABEL_691:
        v555 = 0;
        v613[218] = 0;
        if (v546[5] != 1) {
          goto LABEL_700;
        }
      LABEL_683:
        v544 = v555 + 1;
        v547 -= 8;
        v546 += 8;
        v613[218] = v544;
        if (v548 == v547) {
          goto LABEL_701;
        }
      }
      else {
        v549 = 0;
        v613[218] = 0;
        if (*(v546 - 1) == 1) {
          goto LABEL_694;
        }
      LABEL_686:
        v550 = 0;
        v613[218] = 0;
        if (*(_DWORD*)v546 != 1) {
          goto LABEL_687;
        }
      LABEL_695:
        v551 = v550 + 1;
        v613[218] = v551;
        if (v546[1] == 1) {
          goto LABEL_696;
        }
      LABEL_688:
        v552 = 0;
        v613[218] = 0;
        if (v546[2] != 1) {
          goto LABEL_689;
        }
      LABEL_697:
        v553 = v552 + 1;
        v613[218] = v553;
        if (v546[3] == 1) {
          goto LABEL_698;
        }
      LABEL_690:
        v554 = 0;
        v613[218] = 0;
        if (v546[4] != 1) {
          goto LABEL_691;
        }
      LABEL_699:
        v555 = v554 + 1;
        v613[218] = v555;
        if (v546[5] == 1) {
          goto LABEL_683;
        }
      LABEL_700:
        v544 = 0;
        v547 -= 8;
        v546 += 8;
        v613[218] = 0;
        if (v548 == v547) {
        LABEL_701:
          v545 = -v547;
          if ((v262 & 7) != 0) {
            goto LABEL_702;
          }
          goto LABEL_441;
        }
      }
    }
  }
  v316 = v637;
  v545 = 0;
  if ((v262 & 7) != 0) {
  LABEL_702:
    v556 = &v613[v545 + 4];
    do {
      v557 = *v556++;
      if (v557 == 1) {
        ++v544;
      }
      else {
        v544 = 0;
      }
      --v262;
      v613[218] = v544;
    } while (v262 != 0);
  }
LABEL_441:
  v412 = (__int64)(v256 + 116);
  v667[0] = 0;
  if (v630) {
    v413 = 0;
    v414 = (unsigned int)v119;
    v415 = (__int64)(v256 + 196);
    v416 = v256 + 117;
    v417 = (int*)v649;
    do {
      v419 = 0;
      if (v316 != 1) {
        v420 = v416;
        v421 = v417;
        do {
          v423 = *(v421 - 1) >> 1;
          v424 = v423 - 1006096063;
          if (v423 - 1006096063 < 0) {
            v424 = 1006096063 - v423;
          }
          if (v424 <= 0x3FFFFFFF - v423) {
            v426 = v423 - 903210175;
            if (v423 - 903210175 < 0) {
              v426 = 903210175 - v423;
            }
            if (v426 <= v424) {
              v427 = v423 - 645232959;
              if (v423 - 645232959 < 0) {
                v427 = 645232959 - v423;
              }
              if (v427 <= v426) {
                v428 = v423 - 394750432;
                if (v423 - 394750432 < 0) {
                  v428 = 394750432 - v423;
                }
                if (v428 <= v427) {
                  if (v423 >= 0) {
                    v429 = *(v421 - 1) >> 1;
                  }
                  else {
                    v429 = -v423;
                  }
                  if (v429 <= v428) {
                    v430 = v423 + 632433920;
                    if (v423 + 632433920 < 0) {
                      v430 = -v430;
                    }
                    if (v430 <= v429) {
                      if (v423 + 0x40000000 <= v430) {
                        v425 = 7;
                      }
                      else {
                        v425 = 6;
                      }
                    }
                    else {
                      v425 = 5;
                    }
                  }
                  else {
                    v425 = 4;
                  }
                }
                else {
                  v425 = 3;
                }
              }
              else {
                v425 = 2;
              }
            }
            else {
              v425 = 1;
            }
          }
          else {
            v425 = 0;
          }
          *(v420 - 1) = v425;
          v431 = *v421 >> 1;
          v432 = v431 - 1006096063;
          if (v431 - 1006096063 < 0) {
            v432 = 1006096063 - v431;
          }
          if (v432 > 0x3FFFFFFF - v431) {
            v422 = 0;
          }
          else {
            v433 = v431 - 903210175;
            if (v431 - 903210175 < 0) {
              v433 = 903210175 - v431;
            }
            if (v433 <= v432) {
              v434 = v431 - 645232959;
              if (v431 - 645232959 < 0) {
                v434 = 645232959 - v431;
              }
              if (v434 <= v433) {
                v435 = v431 - 394750432;
                if (v431 - 394750432 < 0) {
                  v435 = 394750432 - v431;
                }
                if (v435 <= v434) {
                  if (v431 >= 0) {
                    v436 = *v421 >> 1;
                  }
                  else {
                    v436 = -v431;
                  }
                  if (v436 <= v435) {
                    v437 = v431 + 632433920;
                    if (v431 + 632433920 < 0) {
                      v437 = -v437;
                    }
                    if (v437 <= v436) {
                      if (v431 + 0x40000000 <= v437) {
                        v422 = 7;
                      }
                      else {
                        v422 = 6;
                      }
                    }
                    else {
                      v422 = 5;
                    }
                  }
                  else {
                    v422 = 4;
                  }
                }
                else {
                  v422 = 3;
                }
              }
              else {
                v422 = 2;
              }
            }
            else {
              v422 = 1;
            }
          }
          v421 += 2;
          *v420 = v422;
          v420 += 2;
          v419 -= 2;
        } while (-(__int64)((unsigned int)v316 & 0xFFFFFFFE) != v419);
        v419 = -v419;
      }
      if ((v316 & 1) != 0) {
        v438 = (int)v648[20 * v413 + v419] >> 1;
        v439 = v438 - 1006096063;
        if (v438 - 1006096063 < 0) {
          v439 = 1006096063 - v438;
        }
        if (v439 > 0x3FFFFFFF - v438) {
          v418 = 0;
        }
        else {
          v440 = v438 - 903210175;
          if (v438 - 903210175 < 0) {
            v440 = 903210175 - v438;
          }
          if (v440 <= v439) {
            v441 = v438 - 645232959;
            if (v438 - 645232959 < 0) {
              v441 = 645232959 - v438;
            }
            if (v441 <= v440) {
              v442 = v438 - 394750432;
              if (v438 - 394750432 < 0) {
                v442 = 394750432 - v438;
              }
              if (v442 <= v441) {
                if (v438 >= 0) {
                  v443 = (int)v648[20 * v413 + v419] >> 1;
                }
                else {
                  v443 = -v438;
                }
                if (v443 <= v442) {
                  v444 = v438 + 632433920;
                  if (v438 + 632433920 < 0) {
                    v444 = -v444;
                  }
                  if (v444 <= v443) {
                    if (v438 + 0x40000000 <= v444) {
                      v418 = 7;
                    }
                    else {
                      v418 = 6;
                    }
                  }
                  else {
                    v418 = 5;
                  }
                }
                else {
                  v418 = 4;
                }
              }
              else {
                v418 = 3;
              }
            }
            else {
              v418 = 2;
            }
          }
          else {
            v418 = 1;
          }
        }
        *(_DWORD*)(v412 + 80 * v413 + 4 * v419) = v418;
      }
      ++v413;
      v417 += 20;
      v416 += 20;
    } while (v413 != (unsigned int)v119);
    v445 = v256 + 123;
    v446 = 0;
    v447 = 0;
    v256[108] = 0;
    v448 = v256 + 116;
    while (2) {
      if ((unsigned __int64)(v316 - 1) >= 7) {
        v450 = 0;
        v451 = v445;
        do {
          v450 -= 8;
          v452 = *(v451 - 2) + *(v451 - 3) + *(v451 - 4) + *(v451 - 5) +
                 *(v451 - 6) + *(v451 - 7) + v447;
          v453 = *(v451 - 1);
          v454 = *v451;
          v451 += 8;
          v447 = v454 + v453 + v452;
        } while (-(__int64)((unsigned int)v316 & 0xFFFFFFF8) != v450);
        v449 = -v450;
        if ((v316 & 7) != 0) {
          goto LABEL_543;
        }
      }
      else {
        v449 = 0;
        if ((v316 & 7) == 0) {
          goto LABEL_536;
        }
      LABEL_543:
        v455 = &v448[v449];
        v456 = v316 & 7;
        do {
          v457 = *v455++;
          --v456;
          v447 += v457;
        } while (v456 != 0);
      }
    LABEL_536:
      ++v446;
      v445 += 20;
      v448 += 20;
      if (v446 != (unsigned int)v119) {
        continue;
      }
      break;
    }
    if (v447 > ((((int)v316 * (int)v119) << 16 >> 2) + 0x4000) >> 15) {
      v256[108] = 1;
      v458 = v256 + 112;
      while (1) {
        v459 = v412;
        v460 = nn_codec_FDKsbrEnc_EncodeIcc_plt_alt1(0, v412, 0, v637, 0,
                                                     (__int64)v667),
        v408 = COERCE_AS(__typeof__(v408),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v513 = COERCE_AS(__typeof__(v513),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v517 = COERCE_AS(__typeof__(v517),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v525 = COERCE_AS(__typeof__(v525),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v613[219] > 19) {
          if (v460 <= 0x7FFFFF) {
            goto LABEL_548;
          }
        LABEL_553:
          *(_DWORD*)v458++ = 1;
          --v414;
          v412 = v459 + 80;
          ++v613[219];
          v415 = v459;
          if (v414 == 0) {
            goto LABEL_557;
          }
        }
        else {
          if (v460 > (int)nn_codec_FDKsbrEnc_EncodeIcc_plt_alt1(
                         0, v459, v415, v637, 1, (__int64)v667)) {
            goto LABEL_553;
          }
        LABEL_548:
          *(_DWORD*)v458++ = 0;
          --v414;
          v412 = v459 + 80;
          v613[219] = 0;
          v415 = v459;
          if (v414 == 0) {
            goto LABEL_557;
          }
        }
      }
    }
  }
  else {
    v256[108] = 0;
    v414 = (unsigned int)v119;
  }
  v256[219] = 20;
  v461 = v256 + 112;
  do {
    *(_DWORD*)v461++ = 0;
    nn_codec_FDKmemclear_plt_alt1(v412, 4 * v316),
        v408 = COERCE_AS(__typeof__(v408),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v513 = COERCE_AS(__typeof__(v513),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v517 = COERCE_AS(__typeof__(v517),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v525 = COERCE_AS(__typeof__(v525),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    --v414;
    v412 += 80;
  } while (v414 != 0);
LABEL_557:
  if (v613[217] <= 9 && v613[2] == v613[3] && v613[110] == v613[111] &&
      *v613 == v613[1] && v613[108] == v613[109]) {
    v462 = a2;
    *(_DWORD*)a2 = 0;
    v463 = v637;
    v464 = v612;
    if (v613[220] > 9) {
      goto LABEL_597;
    }
  }
  else {
    v462 = a2;
    *(_DWORD*)a2 = 1;
    v613[217] = 0;
    v463 = v637;
    v464 = v612;
    if (v613[220] > 9) {
      goto LABEL_597;
    }
  }
  if (v613[2] != 0) {
    v465 = 3;
  }
  else {
    v465 = 2;
  }
  v466 = v465 * v463 + 3;
  if ((int)(v465 * v463) >= 0) {
    v466 = v465 * v463;
  }
  if ((_DWORD)v119 == 1 && v613[216] == 1) {
    v467 = v466 >> 2;
    v468 = 1;
    v469 = 0;
    v470 = v613;
    do {
      v471 = v470[8] - v470[88];
      if (v471 < 0) {
        v471 = v470[88] - v470[8];
      }
      v469 += v471;
      v473 = v471 <= v465 & v469 <= v467;
      if (v468 >= v464) {
        break;
      }
      ++v468;
      ++v470;
    } while (v473);
    if (v473) {
      v474 = v613 + 116;
      v475 = 1;
      v476 = 0;
      do {
        v477 = *(int*)v474 - v474[80];
        if (v477 < 0) {
          v477 = v474[80] - *(int*)v474;
        }
        v476 += v477;
        v479 = (unsigned int)v477 < 3 && v476 <= (int)v464 / 2;
        if (v475 >= v464) {
          break;
        }
        ++v475;
        ++v474;
      } while (v479);
      if (v479) {
        v462[7] = 0;
        ++v613[220];
        return 0;
      }
    }
    v613[220] = 0;
  }
  else {
  LABEL_597:
    v613[220] = 0;
    if ((_DWORD)v119 == 0) {
      return 0;
    }
  }
  if ((_DWORD)v463 == 20) {
    v480 = 4;
  }
  else {
    v480 = 3;
  }
  v462[1] = *v613;
  if (v613[2] == 1) {
    v481 = v480;
  }
  else {
    v481 = v463 == 20;
  }
  v462[2] = v481;
  v462[3] = v613[108];
  v482 = v613[110];
  *(_QWORD*)(v462 + 5) = 0;
  v462[7] = v119;
  if (v482 == 1) {
    v483 = v480;
  }
  else {
    v483 = v463 == 20;
  }
  v484 = (unsigned int)(v119 - 1);
  v462[4] = v483;
  if ((int)v119 >= 1) {
    memcpy_plt_alt1((__int64)(v462 + 8), (__int64)&v645_.v645 + 4,
                    4LL * (unsigned int)v119),
        v408 = COERCE_AS(__typeof__(v408),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v513 = COERCE_AS(__typeof__(v513),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v517 = COERCE_AS(__typeof__(v517),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v525 = COERCE_AS(__typeof__(v525),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v485 = v463 - 1;
    v462[12] = v613[4];
    if (!v630) {
      goto LABEL_619;
    }
    v486 = v463 & 7;
    if (v485 >= 7) {
      v488 = v462 + 23;
      v489 = v613 + 15;
      v490 = 0;
      do {
        v490 -= 8;
        *(v488 - 7) = *(v489 - 7);
        *(v488 - 6) = *(v489 - 6);
        *(v488 - 5) = *(v489 - 5);
        *(v488 - 4) = *(v489 - 4);
        *(v488 - 3) = *(v489 - 3);
        *(v488 - 2) = *(v489 - 2);
        *(v488 - 1) = *(v489 - 1);
        v491 = *v489;
        v489 += 8;
        *(_DWORD*)v488 = v491;
        v488 += 8;
      } while (-(__int64)((unsigned int)v463 & 0xFFFFFFF8) != v490);
      v487 = -v490;
      if ((v463 & 7) != 0) {
        goto LABEL_617;
      }
    }
    else {
      v487 = 0;
      if ((v463 & 7) == 0) {
        goto LABEL_619;
      }
    LABEL_617:
      v492 = &v462[v487 + 16];
      v493 = &v613[v487 + 8];
      do {
        v494 = *v493++;
        --v486;
        *(_DWORD*)v492++ = v494;
      } while (v486 != 0);
    }
  LABEL_619:
    if ((_DWORD)v119 != 1) {
      v462[13] = v613[5];
      if (v630) {
        v495 = v463 & 7;
        if (v485 >= 7) {
          v497 = v613 + 35;
          v498 = v462 + 43;
          v499 = 0;
          do {
            v499 -= 8;
            *(v498 - 7) = *(v497 - 7);
            *(v498 - 6) = *(v497 - 6);
            *(v498 - 5) = *(v497 - 5);
            *(v498 - 4) = *(v497 - 4);
            *(v498 - 3) = *(v497 - 3);
            *(v498 - 2) = *(v497 - 2);
            *(v498 - 1) = *(v497 - 1);
            v500 = *v497;
            v497 += 8;
            *(_DWORD*)v498 = v500;
            v498 += 8;
          } while (-(__int64)((unsigned int)v463 & 0xFFFFFFF8) != v499);
          v496 = -v499;
        }
        else {
          v496 = 0;
        }
        if ((v463 & 7) != 0) {
          v501 = &v462[v496 + 36];
          v502 = &v613[v496 + 28];
          do {
            v503 = *v502++;
            --v495;
            *(_DWORD*)v501++ = v503;
          } while (v495 != 0);
        }
      }
      if ((_DWORD)v119 != 2) {
        v462[14] = v613[6];
        if (v630) {
          v504 = v463 & 7;
          if (v485 >= 7) {
            v558 = v613 + 55;
            v559 = v462 + 63;
            v560 = 0;
            do {
              v560 -= 8;
              *(v559 - 7) = *(v558 - 7);
              *(v559 - 6) = *(v558 - 6);
              *(v559 - 5) = *(v558 - 5);
              *(v559 - 4) = *(v558 - 4);
              *(v559 - 3) = *(v558 - 3);
              *(v559 - 2) = *(v558 - 2);
              *(v559 - 1) = *(v558 - 1);
              v561 = *v558;
              v558 += 8;
              *(_DWORD*)v559 = v561;
              v559 += 8;
            } while (-(__int64)((unsigned int)v463 & 0xFFFFFFF8) != v560);
            v505 = -v560;
          }
          else {
            v505 = 0;
          }
          if ((v463 & 7) != 0) {
            v562 = &v462[v505 + 56];
            v563 = &v613[v505 + 48];
            do {
              v564 = *v563++;
              --v504;
              *(_DWORD*)v562++ = v564;
            } while (v504 != 0);
          }
        }
        if ((_DWORD)v119 != 3) {
          v462[15] = v613[7];
          if (v630) {
            v565 = v463 & 7;
            if (v485 >= 7) {
              v567 = v613 + 75;
              v568 = v462 + 83;
              v569 = 0;
              do {
                v569 -= 8;
                *(v568 - 7) = *(v567 - 7);
                *(v568 - 6) = *(v567 - 6);
                *(v568 - 5) = *(v567 - 5);
                *(v568 - 4) = *(v567 - 4);
                *(v568 - 3) = *(v567 - 3);
                *(v568 - 2) = *(v567 - 2);
                *(v568 - 1) = *(v567 - 1);
                v570 = *v567;
                v567 += 8;
                *(_DWORD*)v568 = v570;
                v568 += 8;
              } while (-(__int64)((unsigned int)v463 & 0xFFFFFFF8) != v569);
              v566 = -v569;
            }
            else {
              v566 = 0;
            }
            if ((v463 & 7) != 0) {
              v571 = &v462[v566 + 76];
              v572 = &v613[v566 + 68];
              do {
                v573 = *v572++;
                --v565;
                *(_DWORD*)v571++ = v573;
              } while (v565 != 0);
            }
          }
        }
      }
    }
    v574 = v613 + 116;
    v575 = 0;
    v576 = v462 + 120;
    v577 = v462 + 127;
    v578 = v613 + 123;
    while (2) {
      v462[v575 + 116] = v613[v575 + 112];
      if (v630) {
        if (v485 >= 7) {
          v580 = 0;
          v581 = v578;
          v582 = v577;
          do {
            v580 -= 8;
            *(v582 - 7) = *(v581 - 7);
            *(v582 - 6) = *(v581 - 6);
            *(v582 - 5) = *(v581 - 5);
            *(v582 - 4) = *(v581 - 4);
            *(v582 - 3) = *(v581 - 3);
            *(v582 - 2) = *(v581 - 2);
            *(v582 - 1) = *(v581 - 1);
            v583 = *v581;
            v581 += 8;
            *(_DWORD*)v582 = v583;
            v582 += 8;
          } while (-(__int64)((unsigned int)v463 & 0xFFFFFFF8) != v580);
          v579 = -v580;
          if ((v463 & 7) != 0) {
            goto LABEL_733;
          }
        }
        else {
          v579 = 0;
          if ((v463 & 7) == 0) {
            goto LABEL_725;
          }
        LABEL_733:
          v584 = &v576[v579];
          v585 = &v574[v579];
          v586 = v463 & 7;
          do {
            v587 = *v585++;
            --v586;
            *(_DWORD*)v584++ = v587;
          } while (v586 != 0);
        }
      }
    LABEL_725:
      ++v575;
      v577 += 20;
      v578 += 20;
      v576 += 20;
      v574 += 20;
      if (v575 == (unsigned int)v119) {
        break;
      }
      continue;
    }
  }
  nn_codec_FDKmemclear_plt_alt1((__int64)(v462 + 224), 0x140u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *((_QWORD*)v462 + 111) = 0;
  *((_QWORD*)v462 + 110) = 0;
  *((_QWORD*)v462 + 162) = 0;
  *((_QWORD*)v462 + 163) = 0;
  nn_codec_FDKmemclear_plt_alt1((__int64)(v462 + 304), 0x50u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nn_codec_FDKmemclear_plt_alt1((__int64)(v462 + 408), 0x50u),
      v408 = COERCE_AS(__typeof__(v408),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v513 = COERCE_AS(__typeof__(v513),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v517 = COERCE_AS(__typeof__(v517),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v525 = COERCE_AS(__typeof__(v525),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v462[96] = v613[88];
  v462[200] = v613[196];
  v462[97] = v613[89];
  v462[201] = v613[197];
  v462[98] = v613[90];
  v462[202] = v613[198];
  v462[99] = v613[91];
  v462[203] = v613[199];
  v462[100] = v613[92];
  v462[204] = v613[200];
  v462[101] = v613[93];
  v462[205] = v613[201];
  v462[102] = v613[94];
  v462[206] = v613[202];
  v462[103] = v613[95];
  v462[207] = v613[203];
  v462[104] = v613[96];
  v462[208] = v613[204];
  v462[105] = v613[97];
  v462[209] = v613[205];
  v462[106] = v613[98];
  v462[210] = v613[206];
  v462[107] = v613[99];
  v462[211] = v613[207];
  v462[108] = v613[100];
  v462[212] = v613[208];
  v462[109] = v613[101];
  v462[213] = v613[209];
  v462[110] = v613[102];
  v462[214] = v613[210];
  v462[111] = v613[103];
  v462[215] = v613[211];
  v462[112] = v613[104];
  v462[216] = v613[212];
  v462[113] = v613[105];
  v462[217] = v613[213];
  v462[114] = v613[106];
  v462[218] = v613[214];
  v462[115] = v613[107];
  v462[219] = v613[215];
  v613[216] = v119;
  v613[1] = *v613;
  v613[109] = v613[108];
  v613[3] = v613[2];
  v613[111] = v613[110];
  if (!v630) {
    return 0;
  }
  if ((unsigned int)(v463 - 1) >= 7) {
    v589 = 0;
    v590 = v613;
    v591 = 20 * v484;
    do {
      v589 -= 8;
      v592 = v590[v591 + 9];
      v590[88] = v590[v591 + 8];
      v593 = v590[v591 + 116];
      v590[89] = v592;
      v594 = *(_QWORD*)&v590[v591 + 10];
      v590[196] = v593;
      v595 = v590[v591 + 117];
      *((_QWORD*)v590 + 45) = v594;
      v590[197] = v595;
      *((_QWORD*)v590 + 99) = *(_QWORD*)&v590[v591 + 118];
      LODWORD(v594) = v590[v591 + 13];
      v590[92] = v590[v591 + 12];
      v596 = v590[v591 + 120];
      v590[93] = v594;
      v590[200] = v596;
      v590[201] = v590[v591 + 121];
      LODWORD(v594) = v590[v591 + 15];
      v590[94] = v590[v591 + 14];
      v597 = v590[v591 + 122];
      v598 = v590[v591 + 123];
      v590[95] = v594;
      v590[202] = v597;
      v590[203] = v598;
      v590 += 8;
    } while (-(v463 & 0x7FFFFFF8) != v589);
    v588 = -v589;
    if ((v463 & 7) != 0) {
      goto LABEL_743;
    }
  }
  else {
    v588 = 0;
    if ((v463 & 7) == 0) {
      return 0;
    }
  LABEL_743:
    v599 = v588;
    v600 = &v613[v588];
    v601 = 0;
    v602 = &v613[20 * (unsigned int)v484 + v599];
    do {
      v603 = &v602[v601];
      v604 = &v600[v601++];
      v604[88] = v603[8];
      v604[196] = v603[116];
    } while ((v463 & 7) != v601);
  }
  return 0;
}

#pragma GCC visibility pop
