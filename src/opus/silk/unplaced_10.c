#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_4cbc0(__int64, __int64, __int64, __int64, __int64, int*, int,
                        int);
__int64 opus_silk_4e380(__int64 result, int, int);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
extern _UNKNOWN MovieData_a5d8e;
extern _UNKNOWN MovieData_a5d92;
extern _UNKNOWN MovieData_a5d96;
unsigned __int64 MovieRoutine_44d00(__int64, int);
__int64 opus_silk_4be00(__int64 a1, int* a2, __int64 a3, int a4);

__int64 opus_silk_4be00(__int64 a1, int* a2, __int64 a3, int a4)
{
  __int64 v4;
  int v5;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  __int64 v19;
  char* v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  char v37;
  unsigned int v38;
  int v39;
  char v40;
  char v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  __int64 result;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int16* v55;
  int v56;
  int v57;
  unsigned __int64 v58;
  int v59;
  unsigned __int64 v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  char* v69;
  int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  int v76;
  signed int v77;
  signed int v78;
  signed int v79;
  signed int v80;
  signed int v81;
  __int64 v82;
  char* v83;
  __int64 v84;
  int v85;
  char* v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  int v95;
  int v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char* v102;
  char* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  int v110;
  char* v111;
  __int64 v112;
  int v113;
  int v114;
  int v115;
  char* v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  char* v123;
  int v124;
  int v125;
  int v126;
  signed int v127;
  int v128;
  int v129;
  int* v130;
  __int64 v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int16* v136;
  __int64 v137;
  char* v138;
  int v139;
  unsigned __int64 v140;
  int v141;
  int v142;
  unsigned __int64 v143;
  __int64 v144;
  char* v145;
  __int16* v146;
  int v147;
  int v148;
  int v149;
  char* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  int* v156;
  struct {
    __int64 v157;
    __int64 v158;
    int* v159;
    __int64 v160;
    char gap32_[4];
    int v161;
    int v162;
    int v163;
    char* v164;
    int v165;
    int v166;
    unsigned __int64 v167;
    char gap72_[4];
    int v168;
    _QWORD* v169;
    char* v170;
    __int64 v171;
    int v172[2];
    __int64 v173;
    __int64 v174;
    __int64 v175;
    __int64 v176;
    __int64 v177;
  } f_;
  __int64 v178;

  v4 = *(int*)(a1 + 2336);
  v5 = *(_DWORD*)(a1 + 2328);
  LODWORD(f_.v170) = a4;
  f_.v160 = a3;
  v8 = 4LL * (v5 + (int)v4);
  v9 = (char*)&f_.v157 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = 2 * v4;
  v11 = (char*)&f_.v157 - ((2 * v4 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)(*(int*)(a1 + 4272) >> 6);
  f_.v172[0] = *(int*)(a1 + 4268) >> 6;
  f_.v172[1] = v12;
  LODWORD(v4) = *(_DWORD*)(a1 + 2376);
  f_.v171 = v12;
  if ((_DWORD)v4 != 0) {
    *(_QWORD*)(a1 + 4226) = 0;
    *(_QWORD*)(a1 + 4234) = 0;
    *(_QWORD*)(a1 + 4210) = 0;
    *(_QWORD*)(a1 + 4218) = 0;
  }
  f_.v177 = 0;
  v178 = 0;
  f_.v173 = 0;
  f_.v174 = 0;
  f_.v175 = 0;
  f_.v176 = 0;
  memset_plt((__int64)v11, 0, v10);
  opus_silk_4cbc0((__int64)&f_.v177 + 4, (__int64)&v178 + 4, (__int64)&f_.v177,
                  (__int64)&v178, a1 + 4, f_.v172, *(_DWORD*)(a1 + 2332),
                  *(_DWORD*)(a1 + 2324));
  f_.v159 = a2;
  f_.v169 = (_QWORD*)(a1 + 4);
  v13 = *(_DWORD*)(a1 + 4280);
  if (SDWORDn(f_.v177, sizeof(f_.v177) / 4 - 1) >> v178 >= (int)f_.v177 >>
      SBYTE4(v178)) {
    v14 = *(int*)(a1 + 4284) * v13;
  }
  else {
    v14 = (v13 - 1) * *(int*)(a1 + 4284);
  }
  v15 = *(_DWORD*)(a1 + 2340);
  LOWORD(v16) = *(_WORD*)(a1 + 4252);
  if (v14 <= 128) {
    v17 = 128;
  }
  else {
    v17 = v14;
  }
  v18 = *(_DWORD*)(a1 + 4184);
  if (v18 >= 1) {
    v18 = 1;
  }
  v19 = 2LL * v18;
  f_.v162 = *(__int16*)((char*)&MovieData_a5d96 + v19);
  if (*(_DWORD*)(a1 + 4188) == 2) {
    v20 = (char*)&MovieData_a5d92;
  }
  else {
    v20 = (char*)&MovieData_a5d8e;
  }
  v21 = *(__int16*)&v20[v19];
  v22 = *(unsigned __int16*)&v20[v19];
  opus_silk_4e380(a1 + 4210, v15, 64881);
  v23 = *(int*)(a1 + 2340);
  memcpy_plt((__int64)&f_.v173, a1 + 4210, 2 * v23);
  v24 = *(_DWORD*)(a1 + 4184);
  f_.v168 = v17;
  if (v24 != 0) {
    f_.v167 = v22;
  }
  else if (*(_DWORD*)(a1 + 4188) == 2) {
    v25 = *(_WORD*)(a1 + 4206);
    v26 = *(_WORD*)(a1 + 4200) + *(_WORD*)(a1 + 4202);
    v27 = *(_WORD*)(a1 + 4204);
    f_.v167 = v22;
    v28 = (__int16)(0x4000 - *(_WORD*)(a1 + 4208) - (v26 + v27 + v25));
    if (v28 <= 3277) {
      v28 = 3277;
    }
    v16 = (unsigned int)(*(__int16*)(a1 + 4264) * v28) >> 14;
  }
  else {
    v29 = MovieRoutine_44d00(a1 + 4210, v23);
    LODWORD(v23) = *(_DWORD*)(a1 + 2340);
    LOWORD(v16) = 0x4000;
    if (v29 <= 0x400000) {
      v30 = 0x400000;
    }
    else {
      v30 = v29;
    }
    if (v30 >= 0x8000000) {
      v30 = 0x8000000;
    }
    f_.v167 = (unsigned __int64)(8 * v30 * (__int64)v21) >> 30;
  }
  v31 = *(_DWORD*)(a1 + 2336);
  v32 = *(_DWORD*)(a1 + 4248);
  v33 = ((*(int*)(a1 + 4196) >> 7) + 1) >> 1;
  v34 = v31 - v23 - v33 - 2;
  silk_LPC_analysis_filter((__int64)&v11[2LL * v34], a1 + 2LL * v34 + 1348,
                           (__int16*)&f_.v173, 2 - (-(int)v23 - v33), v23);
  v35 = *(_DWORD*)(a1 + 4272);
  if (v35 >= 0) {
    v36 = *(_DWORD*)(a1 + 4272);
  }
  else {
    v36 = -v35;
  }
  v37 = __clz((unsigned int)(v36));
  v38 = HIWORD(v36);
  v39 = ((unsigned __int64)((int)((unsigned __int64)-(
                                      __int64)((((__int64)(0x1FFFFFFF /
                                                           (v35 << (v37 - 1) >>
                                                            16))
                                                 << 19) *
                                                (v35 << (v37 - 1))) &
                                               0xFFFFFFF800000000LL) >>
                                  32) *
                            (__int64)(0x1FFFFFFF / (v35 << (v37 - 1) >> 16))) >>
         16) +
        ((0x1FFFFFFF / (v35 << (v37 - 1) >> 16)) << 16);
  v40 = 16 - v37;
  v41 = v37 - 16;
  v42 = (int)0x80000000 >> v41;
  v43 = v39 >> v40;
  if (v39 > (int)0x80000000 >> v41) {
    v42 = v39;
  }
  if (v39 <= (int)(0x7FFFFFFFu >> v41)) {
    v44 = v42;
  }
  else {
    v44 = 0x7FFFFFFFu >> v41;
  }
  v45 = v44 << v41;
  if (v38 != 0) {
    v46 = v43;
  }
  else {
    v46 = v45;
  }
  result =
      memset_plt((__int64)&f_.v157 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0, v8);
  v48 = *(int*)(a1 + 2336);
  v49 = f_.v162;
  v50 = *(int*)(a1 + 2340) + (__int64)v34;
  if ((int)v50 < (int)v48) {
    if (v46 >= 0x3FFFFFFF) {
      v51 = 0x3FFFFFFF;
    }
    else {
      v51 = v46;
    }
    v52 = ((_BYTE)v48 - ((unsigned __int8)*(int*)(a1 + 2340) + (_BYTE)v34)) & 7;
    if ((((_BYTE)v48 - ((unsigned __int8)*(int*)(a1 + 2340) + (_BYTE)v34)) &
         7) != 0) {
      v53 = *(int*)(a1 + 2340) + (__int64)v34;
      do {
        --v52;
        *(_DWORD*)&v9[4 * v53] =
            (unsigned __int64)(*(__int16*)&v11[2 * v53] * (__int64)v51) >> 16;
        ++v53;
      } while (v52 != 0);
      if ((unsigned __int64)(v50 - v48) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_49;
      }
    }
    else {
      v53 = *(int*)(a1 + 2340) + (__int64)v34;
      if ((unsigned __int64)(v50 - v48) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_49;
      }
    }
    v54 = &v9[4 * v53 + 16];
    v55 = (__int16*)&v11[2 * v53 + 8];
    do {
      v56 = *(v55 - 2);
      v53 += 8;
      v57 = *(v55 - 1);
      v58 = (unsigned __int64)(*(v55 - 3) * (__int64)v51) >> 16;
      *((_DWORD*)v54 - 4) = (unsigned __int64)(*(v55 - 4) * (__int64)v51) >> 16;
      *((_DWORD*)v54 - 3) = v58;
      v59 = *v55;
      *((_DWORD*)v54 - 2) = (unsigned __int64)(v56 * (__int64)v51) >> 16;
      *((_DWORD*)v54 - 1) = (unsigned __int64)(v57 * (__int64)v51) >> 16;
      v60 = (unsigned __int64)(v55[1] * (__int64)v51) >> 16;
      *(_DWORD*)v54 = (unsigned __int64)(v59 * (__int64)v51) >> 16;
      *((_DWORD*)v54 + 1) = v60;
      v61 = v55[2];
      LODWORD(v60) = v55[3];
      v55 += 8;
      *((_DWORD*)v54 + 2) = (unsigned __int64)(v61 * (__int64)v51) >> 16;
      *((_DWORD*)v54 + 3) = (unsigned __int64)((int)v60 * (__int64)v51) >> 16;
      v54 += 32;
    } while (v53 < v48);
  }
LABEL_49:
  v62 = *(_DWORD*)(a1 + 2324);
  f_.v158 = v48;
  LODWORD(f_.v170) = v62;
  if (v62 >= 1) {
    LODWORD(result) = *(_DWORD*)(a1 + 4196);
    v63 = 0;
    v64 = *(unsigned __int16*)(a1 + 4200);
    v65 = *(unsigned __int16*)(a1 + 4202);
    v66 = *(unsigned __int16*)(a1 + 4204);
    v67 = *(unsigned __int16*)(a1 + 4206);
    v68 = *(unsigned __int16*)(a1 + 4208);
    v69 = (char*)f_.v169 + 4 * (unsigned int)(f_.v168 - 128);
    v70 = *(_DWORD*)(a1 + 2332);
    f_.v164 = v9 + 8;
    v71 = *(unsigned __int8*)(a1 + 2789);
    f_.v163 = v70;
    f_.v168 = v71;
    LODWORD(f_.v167) = (__int16)f_.v167;
    f_.v166 = 4608 * *(__int16*)(a1 + 2316);
    LODWORD(f_.v169) = v70 & 3;
    f_.v161 = v70 & 0x7FFFFFFC;
    while (1) {
      if (v70 >= 1) {
        v77 = v64 << 16;
        v78 = v65 << 16;
        v79 = v66 << 16;
        v80 = v67 << 16;
        v81 = v68 << 16;
        v82 = v31;
        if ((unsigned int)v70 >= 4) {
          break;
        }
        v83 = &f_.v164[4 * (v31 - v33)];
        if ((_DWORD)f_.v169 != 0) {
          goto LABEL_65;
        }
      LABEL_51:
        v70 = f_.v163;
        v31 = v82;
      }
      v72 = f_.v167;
      ++v63;
      v64 = (unsigned int)((__int16)v64 * v49) >> 15;
      *(_WORD*)(a1 + 4200) = v64;
      v65 = (unsigned int)((__int16)v65 * v49) >> 15;
      *(_WORD*)(a1 + 4202) = v65;
      v66 = (unsigned int)((__int16)v66 * v49) >> 15;
      *(_WORD*)(a1 + 4204) = v66;
      v67 = (unsigned int)((__int16)v67 * v49) >> 15;
      *(_WORD*)(a1 + 4206) = v67;
      v68 = (unsigned int)((__int16)v68 * v49) >> 15;
      v73 = (__int16)v16 * v72;
      v74 = f_.v168;
      *(_WORD*)(a1 + 4208) = v68;
      v75 = v73 >> 15;
      if (v74 != 0) {
        LOWORD(v16) = v75;
      }
      v76 = result + ((unsigned __int64)(655LL * (int)result) >> 16);
      if (v76 >= f_.v166) {
        result = (unsigned int)f_.v166;
      }
      else {
        result = (unsigned int)v76;
      }
      *(_DWORD*)(a1 + 4196) = result;
      v33 = (((int)result >> 7) + 1) >> 1;
      if (v63 == (_DWORD)f_.v170) {
        goto LABEL_68;
      }
    }
    v84 = -4LL * v33;
    v85 = f_.v161;
    f_.v165 = v33;
    v86 = &f_.v164[4LL * v31];
    do {
      v82 += 4;
      v85 -= 4;
      v87 = 196314165 * v32 + 907633515;
      v88 = v87 >> 25;
      v89 = 196314165 * v87 + 907633515;
      *((_DWORD*)v86 - 2) =
          4 *
          (((((v78 * (__int64)*(int*)&v86[v84 - 4]) & 0xFFFFFFFF00000000LL) +
             v77 * (__int64)*(int*)&v86[v84] +
             ((v79 * (__int64)*(int*)&v86[v84 - 8]) & 0xFFFFFFFF00000000LL) +
             ((v80 * (__int64)*(int*)&v86[v84 - 12]) & 0xFFFFFFFF00000000LL) +
             ((v81 * (__int64)*(int*)&v86[v84 - 16]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v69[4 * v88] * (__int64)(__int16)v16) >>
            16));
      v90 = v89 >> 25;
      v91 = 196314165 * v89 + 907633515;
      *((_DWORD*)v86 - 1) =
          4 *
          (((((v78 * (__int64)*(int*)&v86[v84]) & 0xFFFFFFFF00000000LL) +
             v77 * (__int64)*(int*)&v86[v84 + 4] +
             ((v79 * (__int64)*(int*)&v86[v84 - 4]) & 0xFFFFFFFF00000000LL) +
             ((v80 * (__int64)*(int*)&v86[v84 - 8]) & 0xFFFFFFFF00000000LL) +
             ((v81 * (__int64)*(int*)&v86[v84 - 12]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v69[4 * v90] * (__int64)(__int16)v16) >>
            16));
      *(_DWORD*)v86 =
          4 *
          (((((v78 * (__int64)*(int*)&v86[v84 + 4]) & 0xFFFFFFFF00000000LL) +
             v77 * (__int64)*(int*)&v86[v84 + 8] +
             ((v79 * (__int64)*(int*)&v86[v84]) & 0xFFFFFFFF00000000LL) +
             ((v80 * (__int64)*(int*)&v86[v84 - 4]) & 0xFFFFFFFF00000000LL) +
             ((v81 * (__int64)*(int*)&v86[v84 - 8]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v69[4 * (v91 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
      v32 = 196314165 * v91 + 907633515;
      *((_DWORD*)v86 + 1) =
          4 *
          (((((v78 * (__int64)*(int*)&v86[v84 + 8]) & 0xFFFFFFFF00000000LL) +
             v77 * (__int64)*(int*)&v86[v84 + 12] +
             ((v79 * (__int64)*(int*)&v86[v84 + 4]) & 0xFFFFFFFF00000000LL) +
             ((v80 * (__int64)*(int*)&v86[v84]) & 0xFFFFFFFF00000000LL) +
             ((v81 * (__int64)*(int*)&v86[v84 - 4]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v69[4 * (v32 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
      v86 += 16;
    } while (v85 != 0);
    v49 = f_.v162;
    v83 = &v86[-4 * f_.v165];
    if ((_DWORD)f_.v169 == 0) {
      goto LABEL_51;
    }
  LABEL_65:
    v92 = (int)f_.v169;
    do {
      v32 = 196314165 * v32 + 907633515;
      --v92;
      v93 = (v79 * (__int64)*((int*)v83 - 2)) & 0xFFFFFFFF00000000LL;
      v94 = ((v78 * (__int64)*((int*)v83 - 1)) & 0xFFFFFFFF00000000LL) +
            v77 * (__int64)*(int*)v83;
      v95 = *((_DWORD*)v83 - 4);
      v96 = *((_DWORD*)v83 - 3);
      v83 += 4;
      *(_DWORD*)&v9[4 * v82++] =
          4 *
          (((v94 + v93 + ((v80 * (__int64)v96) & 0xFFFFFFFF00000000LL) +
             ((v81 * (__int64)v95) & 0x3FFFFFFF00000000LL) + 0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v69[4 * (v32 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
    } while (v92 != 0);
    goto LABEL_51;
  }
LABEL_68:
  v97 = (_QWORD*)(a1 + 1284);
  v98 = f_.v158;
  v99 = *(_QWORD*)(a1 + 1292);
  v100 = *(_QWORD*)(a1 + 1316);
  v101 = *(_QWORD*)(a1 + 1324);
  v102 = &v9[4 * f_.v158];
  *((_QWORD*)v102 - 8) = *(_QWORD*)(a1 + 1284);
  v103 = v102 - 64;
  v104 = *(_QWORD*)(a1 + 1332);
  v105 = *(_QWORD*)(a1 + 1340);
  *((_QWORD*)v102 - 3) = v101;
  *((_QWORD*)v102 - 2) = v104;
  v106 = *(_QWORD*)(a1 + 1300);
  v107 = *(_QWORD*)(a1 + 1308);
  *((_QWORD*)v102 - 1) = v105;
  *((_QWORD*)v102 - 5) = v107;
  *((_QWORD*)v102 - 4) = v100;
  v108 = *(int*)(a1 + 2328);
  *((_QWORD*)v102 - 7) = v99;
  *((_QWORD*)v102 - 6) = v106;
  if ((unsigned int)v108 > 0) {
    f_.v169 = (_QWORD*)(a1 + 1284);
    v109 = (__int16)f_.v173;
    v110 = SWORD1(f_.v173);
    v111 = &v9[4 * v98];
    v112 = 0;
    v113 = SWORD2(f_.v173);
    v114 = SHIWORD(f_.v173);
    v115 = (__int16)f_.v174;
    v116 = v111 - 4;
    v117 = SWORD1(f_.v174);
    v118 = SWORD2(f_.v174);
    v119 = SHIWORD(f_.v174);
    v120 = (__int16)f_.v175;
    v121 = SWORD1(f_.v175);
    v122 = f_.v160;
    f_.v165 = v33;
    v123 = v111 - 72;
    f_.v170 = (char*)&f_.v177 + 2;
    while (1) {
      v130 = (int*)&v103[4 * v112];
      v131 = *(unsigned int*)(a1 + 2340);
      v132 = ((unsigned __int64)(v109 * (__int64)v130[15]) >> 16) +
             ((int)v131 >> 1) +
             ((unsigned __int64)(v110 * (__int64)v130[14]) >> 16) +
             ((unsigned __int64)(v113 * (__int64)v130[13]) >> 16) +
             ((unsigned __int64)(v114 * (__int64)v130[12]) >> 16) +
             ((unsigned __int64)(v115 * (__int64)v130[11]) >> 16) +
             ((unsigned __int64)(v117 * (__int64)v130[10]) >> 16) +
             ((unsigned __int64)(v118 * (__int64)v130[9]) >> 16) +
             ((unsigned __int64)(v119 * (__int64)v130[8]) >> 16) +
             ((unsigned __int64)(v120 * (__int64)v130[7]) >> 16) +
             ((unsigned __int64)(v121 * (__int64)v130[6]) >> 16);
      if ((int)v131 < 11) {
        goto LABEL_70;
      }
      v133 = v131 - 10;
      if ((unsigned int)(v131 - 11) < 7) {
        break;
      }
      v136 = (__int16*)f_.v170;
      v137 = 10;
      v138 = v123;
      do {
        v139 =
            v132 +
            ((unsigned __int64)(*(v136 - 7) * (__int64)*((int*)v138 + 7)) >>
             16) +
            ((unsigned __int64)(*(v136 - 6) *
                                (__int64)*(
                                    int*)&v102[4 * v112 +
                                               4 * (v137 ^
                                                    0x3FFFFFFFFFFFFFFELL)]) >>
             16) +
            ((unsigned __int64)(*(v136 - 5) * (__int64)*((int*)v138 + 5)) >>
             16) +
            ((unsigned __int64)(*(v136 - 4) * (__int64)*((int*)v138 + 4)) >>
             16) +
            ((unsigned __int64)(*(v136 - 3) * (__int64)*((int*)v138 + 3)) >>
             16);
        v140 = *(v136 - 2) * (__int64)*((int*)v138 + 2);
        v142 = *(_DWORD*)v138;
        v141 = *((_DWORD*)v138 + 1);
        v138 -= 32;
        v143 = *(v136 - 1) * (__int64)v141;
        v134 = v137 + 8;
        LODWORD(v140) = (v140 >> 16) + (v143 >> 16);
        LODWORD(v143) = *v136;
        v136 += 8;
        v132 =
            v139 + v140 + ((unsigned __int64)((int)v143 * (__int64)v142) >> 16);
        v144 = v137 - 2;
        v137 += 8;
      } while (v144 != (v133 & 0xFFFFFFFFFFFFFFF8LL));
      v122 = f_.v160;
      v135 = v133 & 7;
      if ((v133 & 7) != 0) {
        goto LABEL_94;
      }
    LABEL_70:
      v124 = *(_DWORD*)&v102[4 * v112];
      if (v132 <= -134217728) {
        v125 = -134217728;
      }
      else {
        v125 = v132;
      }
      if (v125 >= 0x7FFFFFF) {
        v125 = 0x7FFFFFF;
      }
      v126 = 16 * v125;
      result = (unsigned int)(v124 + 16 * v125);
      if (v124 + 16 * v125 < 0) {
        if ((v124 | v126) <= -1) {
          v127 = v124 + 16 * v125;
        }
        else {
          v127 = 0x7FFFFFFF;
        }
      }
      else if ((v124 & v126) < 0 != __OFADD__(v124, 16 * v125)) {
        v127 = 0x80000000;
      }
      else {
        v127 = v124 + 16 * v125;
      }
      v128 = f_.v171;
      *(_DWORD*)&v102[4 * v112] = v127;
      v123 += 4;
      v116 += 4;
      v129 =
          (((int)((unsigned __int64)(v128 * (__int64)v127) >> 16) >> 7) + 1) >>
          1;
      if (v129 <= -32768) {
        v129 = -32768;
      }
      if (v129 >= 0x7FFF) {
        LOWORD(v129) = 0x7FFF;
      }
      *(_WORD*)(v122 + 2 * v112++) = v129;
      v108 = *(int*)(a1 + 2328);
      if (v112 >= v108) {
        v33 = f_.v165;
        v97 = f_.v169;
        goto LABEL_98;
      }
    }
    v134 = 10;
    v135 = v133 & 7;
    if ((v133 & 7) == 0) {
      goto LABEL_70;
    }
  LABEL_94:
    v145 = &v116[-4 * v134];
    v146 = (__int16*)&f_.v173 + v134;
    do {
      v148 = *(_DWORD*)v145;
      v145 -= 4;
      v147 = v148;
      v149 = *v146++;
      --v135;
      v132 += (unsigned __int64)(v149 * (__int64)v147) >> 16;
    } while (v135 != 0);
    goto LABEL_70;
  }
LABEL_98:
  v150 = &v103[4 * v108];
  *(_DWORD*)(a1 + 4248) = v32;
  *(_WORD*)(a1 + 4252) = v16;
  v151 = *((_QWORD*)v150 + 5);
  v97[4] = *((_QWORD*)v150 + 4);
  v97[5] = v151;
  v152 = *((_QWORD*)v150 + 7);
  v97[6] = *((_QWORD*)v150 + 6);
  v97[7] = v152;
  v153 = *((_QWORD*)v150 + 1);
  *v97 = *(_QWORD*)v150;
  v97[1] = v153;
  v155 = *((_QWORD*)v150 + 2);
  v154 = *((_QWORD*)v150 + 3);
  v97[2] = v155;
  v97[3] = v154;
  v156 = f_.v159;
  *f_.v159 = v33;
  v156[1] = v33;
  v156[2] = v33;
  v156[3] = v33;
  return result;
}

#pragma GCC visibility pop
