#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a270(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2f0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8, __int64, _QWORD*,
                                            __int64);
__int64 SdkRoutine_87a260(__int64);
__int64 SdkRoutine_87a2d0(__int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
_QWORD* math_717820(unsigned __int64* a1, __int64* a2);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2);

_QWORD* math_717820(unsigned __int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float* v30;
  float* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  float* v38;
  unsigned __int64 v39;
  float v40;
  float v41;
  float* v42;
  __int64 v43;
  float* v44;
  __int64 v45;
  float v46;
  __int64 v47;
  float* v48;
  float* v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64 v55;
  float* v56;
  unsigned __int64 v57;
  float v58;
  float v59;
  float* v60;
  __int64 v61;
  float* v62;
  __int64 v63;
  float v64;
  __int64 v65;
  float* v66;
  float* v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  __int64 v73;
  float* v74;
  unsigned __int64 v75;
  float v76;
  float v77;
  __int64 v78;
  _DWORD* v79;
  __int64* v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  char* v92;
  __int64* v93;
  _DWORD* v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  int* v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  char* v113;
  __int64* v114;
  _DWORD* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  int* v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  char* v133;
  __int64* v134;
  unsigned __int64 v135;
  _DWORD* v136;
  __int64 v137;
  _QWORD* v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  _DWORD* v145;
  int v146;
  int v147;
  int v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  __int64 v153;
  __int64 v154;
  int v155;
  int v156;
  __int64 v157;
  __int64* v158;
  unsigned __int64 v159;
  _DWORD* v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  _DWORD* v166;
  __int64* v167;
  __int64 v168;
  int v169;
  int v170;
  int v171;
  __int64 v172;
  int v173;
  int v174;
  int v175;
  __int64 v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  _DWORD* v183;
  __int64* v184;
  __int64 v185;
  int v186;
  char v188;
  _BYTE v189[3616];
  struct {
    char v190[8];
    unsigned __int64 v191;
  } v190_;
  struct {
    _QWORD v192[2];
    char gap7616_[4];
    _BYTE v193[136];
    _BYTE v194[120];
    int v195;
  } v192_;
  _BYTE v196[368];
  _QWORD v197[2];
  _QWORD v198[2];
  struct {
    _QWORD v199[26];
    unsigned __int64 v200;
  } v199_;
  unsigned __int64 v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  struct {
    unsigned __int64 v204;
    unsigned __int64 v205;
    __int64 v206;
    _QWORD v207[13];
    __int64 v208;
    char gap8744_[20];
    int v209;
    char gap8768_[88];
    __int64 v210;
    char gap8864_[20];
    int v211;
  } v204_;

  v2 = a2[1];
  v201 = *a2;
  v4 = a2[2];
  v202 = v2;
  v203 = v4;
  v201 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v201);
  v202 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v202);
  v5 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v203);
  v6 = v201;
  v7 = v202;
  v8 = *a1;
  v204_.v207[0] = 0;
  v204_.v206 = 0;
  v204_.v205 = 0;
  v204_.v204 = 0;
  v204_.v207[1] = 0;
  v203 = v5;
  v204_.v207[2] = v8;
  if (v8 != 0) {
    memset_plt((__int64)&v204_.v204, 0, v8);
  }
  v197[0] = 0;
  v197[1] = 0;
  v198[0] = 0;
  v198[1] = 0;
  memset(v199_.v199, 0, 136);
  *((_BYTE*)&v204_.v204 + v6) = 1;
  *((_BYTE*)&v204_.v204 + v7) = 1;
  *((_BYTE*)&v204_.v204 + v5) = 1;
  memset(&v199_.v199[17], 0, 72);
  v199_.v200 = v8 - 3;
  if (v8 != 3) {
    memset_plt((__int64)v197, 0, 8 * (v8 - 3));
    if (v8 == 0) {
      goto LABEL_32;
    }
  }
  v9 = v8 & 7;
  if (v8 - 1 >= 7) {
    v12 = 3;
    v11 = 0;
    while (1) {
      v13 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v203 + v12 + 5) & 1) != 0) {
        if ((*(v13 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v197[v11++] = v12 - 3;
        if ((*(v13 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v204_.v204 + v12 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v197[v11++] = v12 - 2;
      if ((*((_BYTE*)&v204_.v204 + v12 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v204_.v204 + v12) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v197[v11++] = v12 - 1;
      if ((*((_BYTE*)&v204_.v204 + v12) & 1) != 0) {
      LABEL_14:
        v14 = (char*)&v204_.v204 + v12;
        if ((*((_BYTE*)&v204_.v204 + v12 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v197[v11++] = v12;
      v14 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v204_.v204 + v12 + 1) & 1) != 0) {
      LABEL_15:
        if ((v14[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v197[v11++] = v12 + 1;
      if ((v14[2] & 1) != 0) {
      LABEL_16:
        v15 = (char*)&v204_.v204 + v12;
        if ((*((_BYTE*)&v204_.v204 + v12 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v197[v11++] = v12 + 2;
      v15 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v204_.v204 + v12 + 3) & 1) != 0) {
      LABEL_17:
        if ((v15[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v197[v11++] = v12 + 3;
      if ((v15[4] & 1) == 0) {
      LABEL_26:
        v197[v11++] = v12 + 4;
      }
    LABEL_9:
      v12 += 8;
      if (v12 - (v8 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v10 = v12 - 3;
        if ((v8 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v10 = 0;
  v11 = 0;
  if ((v8 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v204_.v204 + v10) & 1) == 0) {
        v197[v11++] = v10;
      }
      ++v10;
      --v9;
    } while (v9 != 0);
  }
LABEL_32:
  v16 = a1 + 2;
  v17 = v199_.v200;
  v204_.v204 = v199_.v200;
  memset_plt((__int64)&v204_.v205, 0, 0x168u);
  if (v17 != 0) {
    v18 = 33 * v6;
    v19 = v17 & 7;
    if (v17 >= 8) {
      v78 = 0;
      v79 = (_DWORD*)&v204_.v206 + 1;
      v80 = v199_.v199;
      do {
        v78 -= 8;
        v81 = *((_DWORD*)v16 + *(v80 - 3) + v18);
        v82 = *((_DWORD*)v16 + *(v80 - 2) + v18);
        v83 = *((_DWORD*)v16 + *(v80 - 1) + v18);
        v84 = *v80;
        v85 = v80[1];
        *(v79 - 3) = *((_DWORD*)v16 + *(v80 - 4) + v18);
        *(v79 - 2) = v81;
        v86 = *((_DWORD*)v16 + v84 + v18);
        v87 = *((_DWORD*)v16 + v85 + v18);
        v88 = v80[2];
        v89 = v80[3];
        *(v79 - 1) = v82;
        *(_DWORD*)v79 = v83;
        v80 += 8;
        v90 = *((_DWORD*)v16 + v88 + v18);
        v79[1] = v86;
        v79[2] = v87;
        v91 = *((_DWORD*)v16 + v89 + v18);
        v79[3] = v90;
        v79[4] = v91;
        v79 += 8;
      } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v78);
      v20 = -v78;
      if ((v17 & 7) == 0) {
      LABEL_77:
        v96 = 33 * v7;
        v97 = v17 & 7;
        if (v17 >= 8) {
          v99 = 0;
          v100 = v199_.v199;
          v101 = &v204_.v209;
          do {
            v99 -= 8;
            v102 = *((_DWORD*)v16 + *(v100 - 3) + v96);
            v103 = *((_DWORD*)v16 + *(v100 - 2) + v96);
            v104 = *((_DWORD*)v16 + *(v100 - 1) + v96);
            v105 = *v100;
            v106 = v100[1];
            *(v101 - 7) = *((_DWORD*)v16 + *(v100 - 4) + v96);
            *(v101 - 6) = v102;
            v107 = *((_DWORD*)v16 + v105 + v96);
            v108 = *((_DWORD*)v16 + v106 + v96);
            v109 = v100[2];
            v110 = v100[3];
            *(v101 - 5) = v103;
            *(v101 - 4) = v104;
            v100 += 8;
            v111 = *((_DWORD*)v16 + v109 + v96);
            *(v101 - 3) = v107;
            *(v101 - 2) = v108;
            v112 = *((_DWORD*)v16 + v110 + v96);
            *(v101 - 1) = v111;
            *v101 = v112;
            v101 += 8;
          } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v99);
          v98 = -v99;
          if ((v17 & 7) == 0) {
          LABEL_85:
            v117 = 33 * v5;
            if (v17 >= 8) {
              v119 = 0;
              v120 = v199_.v199;
              v121 = &v204_.v211;
              do {
                v119 -= 8;
                v122 = *((_DWORD*)v16 + *(v120 - 3) + v117);
                v123 = *((_DWORD*)v16 + *(v120 - 2) + v117);
                v124 = *((_DWORD*)v16 + *(v120 - 1) + v117);
                v125 = *v120;
                v126 = v120[1];
                *(v121 - 7) = *((_DWORD*)v16 + *(v120 - 4) + v117);
                *(v121 - 6) = v122;
                v127 = *((_DWORD*)v16 + v125 + v117);
                v128 = *((_DWORD*)v16 + v126 + v117);
                v129 = v120[2];
                v130 = v120[3];
                *(v121 - 5) = v123;
                *(v121 - 4) = v124;
                v120 += 8;
                v131 = *((_DWORD*)v16 + v129 + v117);
                *(v121 - 3) = v127;
                *(v121 - 2) = v128;
                v132 = *((_DWORD*)v16 + v130 + v117);
                *(v121 - 1) = v131;
                *v121 = v132;
                v121 += 8;
              } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v119);
              v118 = -v119;
              if ((v17 & 7) == 0) {
                goto LABEL_93;
              }
            }
            else {
              v118 = 0;
              if ((v17 & 7) == 0) {
              LABEL_93:
                memcpy_plt((__int64)v192_.v192, (__int64)&v204_.v204, 0x170u);
                v204_.v204 = v17;
                v204_.v205 = v17;
                memset_plt((__int64)&v204_.v206, 0, 0xE10u);
                v138 = v204_.v207;
                v139 = 0;
                v140 = 0;
                while (1) {
                  v141 = 33LL * v197[v140];
                  if (v17 >= 8) {
                    break;
                  }
                  v142 = 0;
                  if ((v17 & 7) != 0) {
                    goto LABEL_101;
                  }
                LABEL_94:
                  ++v140;
                  v138 += 15;
                  v139 += 30;
                  if (v140 == v17) {
                    goto LABEL_37;
                  }
                }
                v143 = 0;
                v144 = v199_.v199;
                v145 = v138;
                do {
                  v143 -= 8;
                  v146 = *((_DWORD*)v16 + *(v144 - 3) + v141);
                  v147 = *((_DWORD*)v16 + *(v144 - 2) + v141);
                  v148 = *((_DWORD*)v16 + *(v144 - 1) + v141);
                  v149 = *v144;
                  v150 = v144[1];
                  *(v145 - 2) = *((_DWORD*)v16 + *(v144 - 4) + v141);
                  *(v145 - 1) = v146;
                  v151 = *((_DWORD*)v16 + v149 + v141);
                  v152 = *((_DWORD*)v16 + v150 + v141);
                  v153 = v144[2];
                  v154 = v144[3];
                  *(_DWORD*)v145 = v147;
                  v145[1] = v148;
                  v144 += 8;
                  v155 = *((_DWORD*)v16 + v153 + v141);
                  v145[2] = v151;
                  v145[3] = v152;
                  v156 = *((_DWORD*)v16 + v154 + v141);
                  v145[4] = v155;
                  v145[5] = v156;
                  v145 += 8;
                } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v143);
                v142 = -v143;
                if ((v17 & 7) == 0) {
                  goto LABEL_94;
                }
              LABEL_101:
                v157 = v142 + v139;
                v158 = &v197[v142];
                v159 = v17 & 7;
                v160 = (_DWORD*)&v204_.v207[-1] + v157;
                do {
                  v161 = *v158++;
                  --v159;
                  *(_DWORD*)v160++ = *((_DWORD*)v16 + v161 + v141);
                } while (v159 != 0);
                goto LABEL_94;
              }
            }
            v133 = (char*)&v204_.v204 + 4 * v118;
            v134 = &v197[v118];
            v135 = v17 & 7;
            v136 = v133 + 248;
            do {
              v137 = *v134++;
              --v135;
              *(_DWORD*)v136++ = *((_DWORD*)v16 + v137 + v117);
            } while (v135 != 0);
            goto LABEL_93;
          }
        }
        else {
          v98 = 0;
          if ((v17 & 7) == 0) {
            goto LABEL_85;
          }
        }
        v113 = (char*)&v204_.v204 + 4 * v98;
        v114 = &v197[v98];
        v115 = v113 + 128;
        do {
          v116 = *v114++;
          --v97;
          *(_DWORD*)v115++ = *((_DWORD*)v16 + v116 + v96);
        } while (v97 != 0);
        goto LABEL_85;
      }
    }
    else {
      v20 = 0;
      if ((v17 & 7) == 0) {
        goto LABEL_77;
      }
    }
    v92 = (char*)&v204_.v204 + 4 * v20;
    v93 = &v197[v20];
    v94 = v92 + 8;
    do {
      v95 = *v93++;
      --v19;
      *(_DWORD*)v94++ = *((_DWORD*)v16 + v95 + v18);
    } while (v19 != 0);
    goto LABEL_77;
  }
  memcpy_plt((__int64)v192_.v192, (__int64)&v204_.v204, 0x170u);
  memset_plt((__int64)&v204_.v204, 0, 0xE20u);
LABEL_37:
  memcpy_plt((__int64)v189, (__int64)&v204_.v204, 0xE20u);
  SdkRoutine_87a260((__int64)v189);
  memcpy_plt((__int64)v190_.v190, (__int64)v189, 0xE20u);
  v21 = v190_.v191;
  v204_.v204 = v190_.v191;
  memset_plt((__int64)&v204_.v205, 0, 0x168u);
  if (v21 != 0) {
    v22 = v192_.v192[0];
    if (v192_.v192[0] != 0) {
      v23 = v192_.v192[0] & 7;
      v24 = (float*)v190_.v190;
      v25 = 0;
      v26 = -(__int64)(v192_.v192[0] & 0xFFFFFFFFFFFFFFF8LL);
      while (v22 < 8) {
        v27 = 0;
        v28 = 0x0.0p+0f;
        if (v23 != 0) {
          goto LABEL_47;
        }
      LABEL_40:
        *((float*)&v204_.v205 + v25++) = v28;
        ++v24;
        if (v25 == v21) {
          v42 = (float*)v190_.v190;
          v43 = 0;
          while (v22 < 8) {
            v45 = 0;
            v46 = 0x0.0p+0f;
            if ((v22 & 7) != 0) {
              goto LABEL_58;
            }
          LABEL_51:
            v44 = (float*)&v204_.v205 + v43++;
            ++v42;
            v44[30] = v46;
            if (v43 == v21) {
              v60 = (float*)v190_.v190;
              v61 = 0;
              while (v22 < 8) {
                v63 = 0;
                v64 = 0x0.0p+0f;
                if ((v22 & 7) != 0) {
                  goto LABEL_69;
                }
              LABEL_62:
                v62 = (float*)&v204_.v205 + v61++;
                ++v60;
                v62[60] = v64;
                if (v61 == v21) {
                  goto LABEL_105;
                }
              }
              v64 = 0x0.0p+0f;
              v65 = 0;
              v66 = (float*)&v192_.v195;
              v67 = v60;
              do {
                v65 -= 8;
                v68 =
                    (float)((float)((float)((float)((float)(v64 +
                                                            (float)(*(v66 - 7) *
                                                                    v67[4])) +
                                                    (float)(*(v66 - 6) *
                                                            v67[34])) +
                                            (float)(*(v66 - 5) * v67[64])) +
                                    (float)(*(v66 - 4) * v67[94])) +
                            (float)(*(v66 - 3) * v67[124])) +
                    (float)(*(v66 - 2) * v67[154]);
                v69 = *(v66 - 1);
                v70 = *v66;
                v66 += 8;
                v71 = v68 + (float)(v69 * v67[184]);
                v72 = v67[214];
                v67 += 240;
                v64 = v71 + (float)(v70 * v72);
              } while (-(__int64)(v22 & 0xFFFFFFFFFFFFFFF8LL) != v65);
              v63 = -v65;
              if ((v22 & 7) == 0) {
                goto LABEL_62;
              }
            LABEL_69:
              v73 = 120 * v63 + 16;
              v74 = (float*)&v192_.v194[4 * v63 + 92];
              v75 = v22 & 7;
              do {
                v76 = *v74++;
                v77 = *(float*)((char*)v60 + v73);
                v73 += 120;
                --v75;
                v64 = v64 + (float)(v76 * v77);
              } while (v75 != 0);
              goto LABEL_62;
            }
          }
          v46 = 0x0.0p+0f;
          v47 = 0;
          v48 = (float*)v192_.v194;
          v49 = v42;
          do {
            v47 -= 8;
            v50 =
                (float)((float)((float)((float)((float)(v46 +
                                                        (float)(*(v48 - 7) *
                                                                v49[4])) +
                                                (float)(*(v48 - 6) * v49[34])) +
                                        (float)(*(v48 - 5) * v49[64])) +
                                (float)(*(v48 - 4) * v49[94])) +
                        (float)(*(v48 - 3) * v49[124])) +
                (float)(*(v48 - 2) * v49[154]);
            v51 = *(v48 - 1);
            v52 = *v48;
            v48 += 8;
            v53 = v50 + (float)(v51 * v49[184]);
            v54 = v49[214];
            v49 += 240;
            v46 = v53 + (float)(v52 * v54);
          } while (-(__int64)(v22 & 0xFFFFFFFFFFFFFFF8LL) != v47);
          v45 = -v47;
          if ((v22 & 7) == 0) {
            goto LABEL_51;
          }
        LABEL_58:
          v55 = 120 * v45 + 16;
          v56 = (float*)&v192_.v193[4 * v45 + 108];
          v57 = v22 & 7;
          do {
            v58 = *v56++;
            v59 = *(float*)((char*)v42 + v55);
            v55 += 120;
            --v57;
            v46 = v46 + (float)(v58 * v59);
          } while (v57 != 0);
          goto LABEL_51;
        }
      }
      v28 = 0x0.0p+0f;
      v29 = 0;
      v30 = (float*)v192_.v193;
      v31 = v24;
      do {
        v29 -= 8;
        v32 = (float)((float)((float)((float)((float)(v28 + (float)(*(v30 - 3) *
                                                                    v31[4])) +
                                              (float)(*(v30 - 2) * v31[34])) +
                                      (float)(*(v30 - 1) * v31[64])) +
                              (float)(*v30 * v31[94])) +
                      (float)(v30[1] * v31[124])) +
              (float)(v30[2] * v31[154]);
        v33 = v30[3];
        v34 = v30[4];
        v30 += 8;
        v35 = v32 + (float)(v33 * v31[184]);
        v36 = v31[214];
        v31 += 240;
        v28 = v35 + (float)(v34 * v36);
      } while (v26 != v29);
      v27 = -v29;
      if (v23 == 0) {
        goto LABEL_40;
      }
    LABEL_47:
      v37 = 120 * v27 + 16;
      v38 = (float*)&v192_.v192[1] + v27;
      v39 = v22 & 7;
      do {
        v40 = *v38++;
        v41 = *(float*)((char*)v24 + v37);
        v37 += 120;
        --v39;
        v28 = v28 + (float)(v40 * v41);
      } while (v39 != 0);
      goto LABEL_40;
    }
    v162 = 4 * v21;
    memset_plt((__int64)&v204_.v205, 0, v162);
    memset_plt((__int64)&v204_.v208, 0, v162);
    memset_plt((__int64)&v204_.v210, 0, v162);
  }
LABEL_105:
  memcpy_plt((__int64)v196, (__int64)&v204_.v204, 0x170u);
  v204_.v204 = v17;
  memset_plt((__int64)&v204_.v205, 0, 0x168u);
  if (v17 != 0) {
    v163 = v17 & 3;
    if (v17 < 4) {
      v164 = 0;
      if ((v17 & 3) == 0) {
        goto LABEL_114;
      }
      goto LABEL_112;
    }
    v165 = 0;
    v166 = (_DWORD*)v204_.v207 + 1;
    v167 = v198;
    do {
      v165 -= 4;
      v168 = 33 * *(v167 - 2);
      v169 = *((_DWORD*)v16 + v168 + v6);
      v170 = *((_DWORD*)v16 + v168 + v7);
      v171 = *((_DWORD*)v16 + v168 + v5);
      v172 = 33 * *(v167 - 1);
      *(v166 - 5) = v169;
      *(v166 - 4) = v170;
      v173 = *((_DWORD*)v16 + v172 + v6);
      v174 = *((_DWORD*)v16 + v172 + v7);
      v175 = *((_DWORD*)v16 + v172 + v5);
      v176 = *v167;
      v177 = v167[1];
      v167 += 4;
      v176 *= 33;
      *(v166 - 3) = v171;
      *(v166 - 2) = v173;
      *(v166 - 1) = v174;
      *(_DWORD*)v166 = v175;
      v178 = *((_DWORD*)v16 + v176 + v5);
      v179 = *((_DWORD*)v16 + v176 + v7);
      v180 = *((_DWORD*)v16 + 33 * v177 + v6);
      v166[1] = *((_DWORD*)v16 + v176 + v6);
      v166[2] = v179;
      v181 = *((_DWORD*)v16 + 33 * v177 + v7);
      v166[3] = v178;
      v166[4] = v180;
      v182 = *((_DWORD*)v16 + 33 * v177 + v5);
      v166[5] = v181;
      v166[6] = v182;
      v166 += 12;
    } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFFCLL) != v165);
    v164 = -v165;
    if ((v17 & 3) != 0) {
    LABEL_112:
      v183 = (_DWORD*)&v204_.v207[-1] + 3 * v164;
      v184 = &v197[v164];
      do {
        v185 = *v184++;
        --v163;
        v186 = *((_DWORD*)v16 + 33 * v185 + v7);
        *(v183 - 2) = *((_DWORD*)v16 + 33 * v185 + v6);
        *(v183 - 1) = v186;
        *(_DWORD*)v183 = *((_DWORD*)v16 + 33 * v185 + v5);
        v183 += 3;
      } while (v163 != 0);
    }
  }
LABEL_114:
  memcpy_plt((__int64)&v188, (__int64)&v204_.v204, 0x170u);
  return X8CALL_X0(void*, SdkRoutine_87a270((void*)(&v204_.v204), v196, &v188));
}

__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  unsigned __int64* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  _DWORD* v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  _DWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  float* v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  _DWORD* v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  _QWORD* result;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  _BYTE v89[656];
  _BYTE v90[2936];
  _BYTE v91[656];
  _QWORD v92[82];
  __int64 v93;
  _QWORD v94[3];
  struct {
    _QWORD v95[23];
    unsigned __int64 v96;
  } v95_;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  struct {
    unsigned __int64 v103;
    unsigned __int64 v104;
    unsigned __int64 v105;
    unsigned __int64 v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
  } v103_;
  struct {
    unsigned __int64 v109;
    unsigned __int64 v110;
    __int64 v111;
    _QWORD v112[364];
    unsigned __int64 v113;
    _QWORD v114[2];
    char gap8200_[4];
    float v115[157];
  } v109_;

  v4 = a2[3];
  v99 = a2[2];
  v100 = v4;
  v6 = a2[5];
  v101 = a2[4];
  v102 = v6;
  v7 = a2[1];
  v97 = *a2;
  v98 = v7;
  v97 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v97);
  v98 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v98);
  v99 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v99);
  v100 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v100);
  v101 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v101);
  v8 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v102);
  v9 = *a1;
  v109_.v112[0] = 0;
  v109_.v111 = 0;
  v109_.v110 = 0;
  v109_.v109 = 0;
  v109_.v112[1] = 0;
  v103_.v104 = v98;
  v103_.v103 = v97;
  v102 = v8;
  v103_.v108 = v8;
  v109_.v112[2] = v9;
  v103_.v107 = v101;
  v103_.v105 = v99;
  v103_.v106 = v100;
  if (v9 != 0) {
    memset_plt((__int64)&v109_.v109, 0, v9);
  }
  v10 = v103_.v103;
  v11 = v103_.v104;
  v12 = v103_.v105;
  v13 = v103_.v106;
  v14 = v103_.v107;
  v15 = v103_.v108;
  v93 = 0;
  memset(v94, 0, sizeof(v94));
  memset(v95_.v95, 0, sizeof(v95_.v95));
  *((_BYTE*)&v109_.v109 + v103_.v103) = 1;
  *((_BYTE*)&v109_.v109 + v11) = 1;
  *((_BYTE*)&v109_.v109 + v12) = 1;
  *((_BYTE*)&v109_.v109 + v13) = 1;
  *((_BYTE*)&v109_.v109 + v14) = 1;
  *((_BYTE*)&v109_.v109 + v15) = 1;
  v95_.v96 = v9 - 6;
  if (v9 != 6) {
    memset_plt((__int64)&v93, 0, 8 * (v9 - 6));
    if (v9 == 0) {
      goto LABEL_32;
    }
  }
  v16 = v9 & 7;
  if (v9 - 1 >= 7) {
    v19 = 3;
    v18 = 0;
    while (1) {
      v20 = (char*)&v109_.v109 + v19;
      if ((*((_BYTE*)&v103_.v108 + v19 + 5) & 1) != 0) {
        if ((*(v20 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v94[v18++ - 1] = v19 - 3;
        if ((*(v20 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v109_.v109 + v19 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v94[v18++ - 1] = v19 - 2;
      if ((*((_BYTE*)&v109_.v109 + v19 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v109_.v109 + v19) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v94[v18++ - 1] = v19 - 1;
      if ((*((_BYTE*)&v109_.v109 + v19) & 1) != 0) {
      LABEL_14:
        v21 = (char*)&v109_.v109 + v19;
        if ((*((_BYTE*)&v109_.v109 + v19 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v94[v18++ - 1] = v19;
      v21 = (char*)&v109_.v109 + v19;
      if ((*((_BYTE*)&v109_.v109 + v19 + 1) & 1) != 0) {
      LABEL_15:
        if ((v21[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v94[v18++ - 1] = v19 + 1;
      if ((v21[2] & 1) != 0) {
      LABEL_16:
        v22 = (char*)&v109_.v109 + v19;
        if ((*((_BYTE*)&v109_.v109 + v19 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v94[v18++ - 1] = v19 + 2;
      v22 = (char*)&v109_.v109 + v19;
      if ((*((_BYTE*)&v109_.v109 + v19 + 3) & 1) != 0) {
      LABEL_17:
        if ((v22[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v94[v18++ - 1] = v19 + 3;
      if ((v22[4] & 1) == 0) {
      LABEL_26:
        v94[v18++ - 1] = v19 + 4;
      }
    LABEL_9:
      v19 += 8;
      if (v19 - (v9 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v17 = v19 - 3;
        if ((v9 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v17 = 0;
  v18 = 0;
  if ((v9 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v109_.v109 + v17) & 1) == 0) {
        v94[v18++ - 1] = v17;
      }
      ++v17;
      --v16;
    } while (v16 != 0);
  }
LABEL_32:
  v23 = a1 + 2;
  v24 = *(float*)&a1[17 * v10 + 2];
  v25 = *(float*)&a1[17 * v11 + 2];
  v26 = *(float*)&a1[17 * v12 + 2];
  v27 = *(float*)&a1[17 * v13 + 2];
  v28 = *(float*)&a1[17 * v14 + 2];
  v29 = *(float*)&a1[17 * v15 + 2];
  math_71ec60((void*)((__int64)v91), (__int64)a1, &v103_.v103, (__int64)&v93);
  v30 = v95_.v96;
  v109_.v112[363] = 0;
  v109_.v109 = v95_.v96;
  v109_.v110 = v95_.v96;
  memset_plt((__int64)&v109_.v111, 0, 0xB64u);
  if (v30 != 0) {
    v31 = v109_.v112;
    v32 = 0;
    v33 = 0;
    while (1) {
      v34 = 33 * v94[v33 - 1];
      if (v30 >= 8) {
        break;
      }
      v35 = 0;
      if ((v30 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_34:
      ++v33;
      v31 = (_QWORD*)((char*)v31 + 108);
      v32 += 27;
      if (v33 == v30) {
        goto LABEL_44;
      }
    }
    v36 = 0;
    v37 = v95_.v95;
    v38 = v31;
    do {
      v36 -= 8;
      v39 = *((_DWORD*)v23 + *(v37 - 3) + v34);
      v40 = *((_DWORD*)v23 + *(v37 - 2) + v34);
      v41 = *((_DWORD*)v23 + *(v37 - 1) + v34);
      v43 = *v37;
      v42 = v37[1];
      *(v38 - 2) = *((_DWORD*)v23 + *(v37 - 4) + v34);
      *(v38 - 1) = v39;
      v44 = *((_DWORD*)v23 + v43 + v34);
      v45 = *((_DWORD*)v23 + v42 + v34);
      v47 = v37[2];
      v46 = v37[3];
      *(_DWORD*)v38 = v40;
      v38[1] = v41;
      v37 += 8;
      v48 = *((_DWORD*)v23 + v47 + v34);
      v38[2] = v44;
      v38[3] = v45;
      v49 = *((_DWORD*)v23 + v46 + v34);
      v38[4] = v48;
      v38[5] = v49;
      v38 += 8;
    } while (-(__int64)(v30 & 0xFFFFFFFFFFFFFFF8LL) != v36);
    v35 = -v36;
    if ((v30 & 7) == 0) {
      goto LABEL_34;
    }
  LABEL_41:
    v50 = v35 + v32;
    v51 = &v94[v35 - 1];
    v52 = v30 & 7;
    v53 = (_DWORD*)&v109_.v112[-1] + v50;
    do {
      v54 = *v51++;
      --v52;
      *(_DWORD*)v53++ = *((_DWORD*)v23 + v54 + v34);
    } while (v52 != 0);
    goto LABEL_34;
  }
LABEL_44:
  memcpy_plt((__int64)v90, (__int64)&v109_.v109, 0xB78u);
  SdkRoutine_87a2d0((__int64)v90);
  memcpy_plt((__int64)&v109_.v109, (__int64)v90, 0xB78u);
  SdkRoutine_87a2e0((void*)(v92), v91, &v109_.v109);
  v55 = v95_.v96;
  v109_.v113 = v95_.v96;
  memset_plt((__int64)v109_.v114, 0, 0x288u);
  if (v55 != 0) {
    v56 = v103_.v103;
    v57 = v103_.v104;
    v58 = v103_.v105;
    v59 = v103_.v106;
    v60 = v103_.v107;
    v61 = v103_.v108;
    if (v55 == 1) {
      v62 = 0;
    LABEL_50:
      v78 = &v109_.v114[3 * v62];
      v79 = 33 * v94[v62 - 1];
      v80 = *((_DWORD*)v23 + v79 + v57);
      *(_DWORD*)v78 = *((_DWORD*)v23 + v79 + v56);
      v78[1] = v80;
      v81 = *((_DWORD*)v23 + v79 + v59);
      v78[2] = *((_DWORD*)v23 + v79 + v58);
      v78[3] = v81;
      v82 = *((_DWORD*)v23 + v79 + v61);
      v78[4] = *((_DWORD*)v23 + v79 + v60);
      v78[5] = v82;
      goto LABEL_51;
    }
    v63 = 0;
    v64 = v94;
    v65 = v109_.v115;
    do {
      v67 = *(v64 - 1);
      v66 = *v64;
      v63 -= 2;
      v64 += 2;
      v67 *= 33;
      v68 = *((_DWORD*)v23 + v67 + v58);
      v69 = *((_DWORD*)v23 + v67 + v57);
      v70 = *((_DWORD*)v23 + v67 + v59);
      v71 = *((_DWORD*)v23 + v67 + v60);
      *(v65 - 5) = *((float*)v23 + v67 + v56);
      *((_DWORD*)v65 - 4) = v69;
      v72 = *((_DWORD*)v23 + v67 + v61);
      *((_DWORD*)v65 - 3) = v68;
      *((_DWORD*)v65 - 2) = v70;
      *((_DWORD*)v65 - 1) = v71;
      *(_DWORD*)v65 = v72;
      v73 = *((_DWORD*)v23 + 33 * v66 + v57);
      v74 = *((_DWORD*)v23 + 33 * v66 + v58);
      v75 = *((_DWORD*)v23 + 33 * v66 + v59);
      v65[1] = *((float*)v23 + 33 * v66 + v56);
      *((_DWORD*)v65 + 2) = v73;
      v76 = *((_DWORD*)v23 + 33 * v66 + v60);
      v77 = *((_DWORD*)v23 + 33 * v66 + v61);
      *((_DWORD*)v65 + 3) = v74;
      *((_DWORD*)v65 + 4) = v75;
      *((_DWORD*)v65 + 5) = v76;
      *((_DWORD*)v65 + 6) = v77;
      v65 += 12;
    } while (-(__int64)(v55 & 0xFFFFFFFFFFFFFFFELL) != v63);
    v62 = -v63;
    if ((v55 & 1) != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  memcpy_plt((__int64)v89, (__int64)&v109_.v113, 0x290u);
  result = X8CALL_X0(void*, SdkRoutine_87a2f0((void*)(&v109_.v113), v92, v89));
  v84 = sqrtf(v25 - v109_.v115[0]);
  v85 = sqrtf(v26 - v109_.v115[7]);
  v86 = sqrtf(v27 - v109_.v115[14]);
  v87 = sqrtf(v28 - v109_.v115[21]);
  v88 = sqrtf(v29 - v109_.v115[28]);
  *a3 = sqrtf(v24 - *(float*)&v109_.v113);
  a3[1] = v84;
  a3[2] = v85;
  a3[3] = v86;
  a3[4] = v87;
  a3[5] = v88;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
