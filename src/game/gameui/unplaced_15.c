#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_145f5d0(_QWORD* result, _QWORD*);
__int64* GameRoutine_15a2880(__int64* result, __int64*, __int64*, __int64*);
__int64 game_gameui_15dfa40(__int64, __int64, char, __int64, char);
__int64 game_gameui_UnitUtil_GetPrevDefault(__int64, _QWORD*, char);
bool game_gameui_15a2a40(__int64*, __int64*);
extern __int64 (*GameData_205c0f8[])();
extern __int64 GameData_2259500;
__int64 game_gameui_15a19e0(__int64 result, __int64* a2, __int64 a3, char a4);
__int64 game_gameui_15dff80(__int64 a1, char a2, _QWORD* a3, char a4);

__int64 game_gameui_15a19e0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  bool v63;
  bool v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
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
  int v85;
  __int64 v86;
  int v87;
  __int64* v88;
  bool v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  signed __int64 v98;
  signed __int64 v99;
  signed __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  bool v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  __int64 v132;

  v7 = (__int64*)result;
LABEL_2:
  v8 = v7;
  while (1) {
    v7 = v8;
    v9 = ((__int64)a2 - (__int64)v8) >> 3;
    if (v9 <= 2) {
      if ((unsigned __int64)v9 < 2) {
        return result;
      }
      if (v9 == 2) {
        v81 = *(a2 - 1);
        v82 = *v8;
        if (*(unsigned __int16*)(v81 + 16) +
                10000 * (6 - *(unsigned __int8*)(v81 + 49)) <
            *(unsigned __int16*)(*v8 + 16) +
                10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
          *v8 = v81;
          *(a2 - 1) = v82;
        }
        return result;
      }
      goto LABEL_10;
    }
    if (v9 == 3) {
      break;
    }
    if (v9 == 4) {
      return (__int64)GameRoutine_15a2880(v8, v8 + 1, v8 + 2, a2 - 1);
    }
    if (v9 == 5) {
      result = (__int64)GameRoutine_15a2880(v8, v8 + 1, v8 + 2, v8 + 3);
      v75 = *(a2 - 1);
      v76 = v8[3];
      if (*(unsigned __int16*)(v75 + 16) +
              10000 * (6 - *(unsigned __int8*)(v75 + 49)) <
          *(unsigned __int16*)(v76 + 16) +
              10000 * (6 - *(unsigned __int8*)(v76 + 49))) {
        v8[3] = v75;
        *(a2 - 1) = v76;
        v78 = v8[2];
        v77 = v8[3];
        if (*(unsigned __int16*)(v77 + 16) +
                10000 * (6 - *(unsigned __int8*)(v77 + 49)) <
            *(unsigned __int16*)(v78 + 16) +
                10000 * (6 - *(unsigned __int8*)(v78 + 49))) {
          v8[2] = v77;
          v8[3] = v78;
          v79 = v8[1];
          if (*(unsigned __int16*)(v77 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v77 + 49)) <
              *(unsigned __int16*)(v79 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v79 + 49))) {
            v8[1] = v77;
            v8[2] = v79;
            v80 = *v8;
            if (*(unsigned __int16*)(v77 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v77 + 49)) <
                *(unsigned __int16*)(*v8 + 16) +
                    10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
              *v8 = v77;
              v8[1] = v80;
            }
          }
        }
      }
      return result;
    }
  LABEL_10:
    if (v9 <= 23) {
      v88 = v8 + 1;
      v90 = v8 == a2 | v88 == a2;
      if ((a4 & 1) != 0) {
        if (!v90) {
          v91 = 8;
          v92 = v8;
          do {
            v95 = *v92;
            v94 = v92[1];
            v92 = v88;
            if (*(unsigned __int16*)(v94 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v94 + 49)) <
                *(unsigned __int16*)(v95 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v95 + 49))) {
              v96 = v91;
              do {
                v97 = v96 - 8;
                *(__int64*)((char*)v8 + v96) = v95;
                if (v96 == 8) {
                  v93 = v8;
                  goto LABEL_126;
                }
                v95 = *(__int64*)((char*)v8 + v96 - 16);
                v96 -= 8;
              } while (*(unsigned __int16*)(v94 + 16) +
                           10000 * (6 - *(unsigned __int8*)(v94 + 49)) <
                       *(unsigned __int16*)(v95 + 16) +
                           10000 * (6 - *(unsigned __int8*)(v95 + 49)));
              v93 = (__int64*)((char*)v8 + v97);
            LABEL_126:
              *v93 = v94;
            }
            v88 = v92 + 1;
            v91 += 8;
          } while (v92 + 1 != a2);
        }
      }
      else if (!v90) {
        do {
          v130 = *v7;
          v129 = v7[1];
          v7 = v88;
          if (*(unsigned __int16*)(v129 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v129 + 49)) <
              *(unsigned __int16*)(v130 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v130 + 49))) {
            v131 = v88;
            do {
              *v131 = v130;
              v130 = *(v131 - 2);
              --v131;
            } while (*(unsigned __int16*)(v129 + 16) +
                         10000 * (6 - *(unsigned __int8*)(v129 + 49)) <
                     *(unsigned __int16*)(v130 + 16) +
                         10000 * (6 - *(unsigned __int8*)(v130 + 49)));
            *v131 = v129;
          }
          ++v88;
        } while (v7 + 1 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if (v8 != a2) {
        v98 = (unsigned __int64)(v9 - 2) >> 1;
        v99 = v98;
        do {
          v100 = v99;
          if (v98 >= v99) {
            v101 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v102 = 2 * v99 + 2;
            v103 = &v8[v101];
            v104 = *v103;
            if (v102 < v9 &&
                *(unsigned __int16*)(v104 + 16) +
                        10000 * (6 - *(unsigned __int8*)(v104 + 49)) <
                    *(unsigned __int16*)(v103[1] + 16) +
                        10000 * (6 - *(unsigned __int8*)(v103[1] + 49))) {
              v104 = v103[1];
              ++v103;
              v101 = 2 * v100 + 2;
            }
            v105 = &v8[v100];
            v106 = *v105;
            if (*(unsigned __int16*)(v104 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v104 + 49)) >=
                *(unsigned __int16*)(*v105 + 16) +
                    10000 * (6 - *(unsigned __int8*)(*v105 + 49))) {
              do {
                v107 = v103;
                *v105 = v104;
                if (v98 < v101) {
                  break;
                }
                v108 = (2 * v101) | 1;
                v109 = 2 * v101 + 2;
                v103 = &v8[v108];
                v104 = *v103;
                if (v109 < v9 &&
                    *(unsigned __int16*)(v104 + 16) +
                            10000 * (6 - *(unsigned __int8*)(v104 + 49)) <
                        *(unsigned __int16*)(v103[1] + 16) +
                            10000 * (6 - *(unsigned __int8*)(v103[1] + 49))) {
                  v104 = v103[1];
                  ++v103;
                  v108 = v109;
                }
                v105 = v107;
                v101 = v108;
              } while (*(unsigned __int16*)(v104 + 16) +
                           10000 * (6 - *(unsigned __int8*)(v104 + 49)) >=
                       *(unsigned __int16*)(v106 + 16) +
                           10000 * (6 - *(unsigned __int8*)(v106 + 49)));
              *v107 = v106;
            }
          }
          v99 = v100 - 1;
        } while (v100 != 0);
        do {
          v111 = *v8;
          v112 = 0;
          v113 = v8;
          do {
            v118 = &v113[v112];
            result = 2 * v112;
            v117 = v118 + 1;
            v116 = v118[1];
            v119 = (2 * v112) | 1;
            v112 = 2 * v112 + 2;
            if (v112 < v9) {
              v115 = v118[2];
              v114 = v118 + 2;
              result = v115;
              if (*(unsigned __int16*)(v116 + 16) +
                      10000 * (6 - *(unsigned __int8*)(v116 + 49)) >=
                  *(unsigned __int16*)(v115 + 16) +
                      10000 * (6 - *(unsigned __int8*)(v115 + 49))) {
                v112 = v119;
              }
              else {
                v116 = result;
                v117 = v114;
              }
            }
            else {
              v112 = v119;
            }
            *v113 = v116;
            v113 = v117;
          } while (v112 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
          if (v117 == --a2) {
            *v117 = v111;
          }
          else {
            *v117 = *a2;
            *a2 = v111;
            v120 = ((char*)v117 - (char*)v8 + 8) >> 3;
            v110 = v120 < 2;
            v121 = v120 - 2;
            if (!v110) {
              v122 = v121 >> 1;
              v123 = *v117;
              v124 = &v8[v122];
              v125 = *v124;
              result = 6 - (unsigned int)*(unsigned __int8*)(*v117 + 49);
              if (*(unsigned __int16*)(*v124 + 16) +
                      10000 * (6 - *(unsigned __int8*)(*v124 + 49)) <
                  *(unsigned __int16*)(*v117 + 16) + 10000 * (int)result) {
                do {
                  v126 = v124;
                  *v117 = v125;
                  if (v122 == 0) {
                    break;
                  }
                  v122 = (v122 - 1) >> 1;
                  v124 = &v8[v122];
                  v125 = *v124;
                  result = 6 - (unsigned int)*(unsigned __int8*)(v123 + 49);
                  v117 = v126;
                } while (*(unsigned __int16*)(*v124 + 16) +
                             10000 * (6 - *(unsigned __int8*)(*v124 + 49)) <
                         *(unsigned __int16*)(v123 + 16) + 10000 * (int)result);
                *v126 = v123;
              }
            }
          }
          v110 = v9-- <= 2;
        } while (!v110);
      }
      return result;
    }
    v10 = &v8[(unsigned __int64)v9 >> 1];
    if ((unsigned __int64)v9 >= 0x81) {
      v11 = *v10;
      v12 = *v8;
      v13 = *(unsigned __int16*)(*v10 + 16) +
            10000 * (6 - *(unsigned __int8*)(*v10 + 49));
      v14 = *(a2 - 1);
      v15 = *(unsigned __int16*)(v14 + 16) +
            10000 * (6 - *(unsigned __int8*)(v14 + 49));
      if (v13 >= *(unsigned __int16*)(*v8 + 16) +
                     10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
        if (v15 < v13) {
          *v10 = v14;
          *(a2 - 1) = v11;
          v21 = *v8;
          if (*(unsigned __int16*)(*v10 + 16) +
                  10000 * (6 - *(unsigned __int8*)(*v10 + 49)) <
              *(unsigned __int16*)(*v8 + 16) +
                  10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
            *v8 = *v10;
            *v10 = v21;
          }
        }
      }
      else {
        if (v15 < v13) {
          *v8 = v14;
          goto LABEL_27;
        }
        *v8 = v11;
        *v10 = v12;
        v23 = *(a2 - 1);
        if (*(unsigned __int16*)(v23 + 16) +
                10000 * (6 - *(unsigned __int8*)(v23 + 49)) <
            *(unsigned __int16*)(v12 + 16) +
                10000 * (6 - *(unsigned __int8*)(v12 + 49))) {
          *v10 = v23;
        LABEL_27:
          *(a2 - 1) = v12;
        }
      }
      v24 = *(v10 - 1);
      v25 = v8[1];
      v26 = *(unsigned __int16*)(v24 + 16) +
            10000 * (6 - *(unsigned __int8*)(v24 + 49));
      v27 = *(a2 - 2);
      v28 = *(unsigned __int16*)(v27 + 16) +
            10000 * (6 - *(unsigned __int8*)(v27 + 49));
      if (v26 >= *(unsigned __int16*)(v25 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v25 + 49))) {
        if (v28 < v26) {
          *(v10 - 1) = v27;
          *(a2 - 2) = v24;
          v29 = *(v10 - 1);
          v30 = v8[1];
          if (*(unsigned __int16*)(v29 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v29 + 49)) <
              *(unsigned __int16*)(v30 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v30 + 49))) {
            v8[1] = v29;
            *(v10 - 1) = v30;
          }
        }
      }
      else {
        if (v28 < v26) {
          v8[1] = v27;
          goto LABEL_39;
        }
        v8[1] = v24;
        *(v10 - 1) = v25;
        v32 = *(a2 - 2);
        if (*(unsigned __int16*)(v32 + 16) +
                10000 * (6 - *(unsigned __int8*)(v32 + 49)) <
            *(unsigned __int16*)(v25 + 16) +
                10000 * (6 - *(unsigned __int8*)(v25 + 49))) {
          *(v10 - 1) = v32;
        LABEL_39:
          *(a2 - 2) = v25;
        }
      }
      v33 = v10[1];
      v34 = v8[2];
      v35 = *(unsigned __int16*)(v33 + 16) +
            10000 * (6 - *(unsigned __int8*)(v33 + 49));
      v36 = *(a2 - 3);
      v37 = *(unsigned __int16*)(v36 + 16) +
            10000 * (6 - *(unsigned __int8*)(v36 + 49));
      if (v35 >= *(unsigned __int16*)(v34 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v34 + 49))) {
        if (v37 < v35) {
          v10[1] = v36;
          *(a2 - 3) = v33;
          v38 = v10[1];
          v39 = v8[2];
          if (*(unsigned __int16*)(v38 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v38 + 49)) <
              *(unsigned __int16*)(v39 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v39 + 49))) {
            v8[2] = v38;
            v10[1] = v39;
          }
        }
      }
      else {
        if (v37 < v35) {
          v8[2] = v36;
          goto LABEL_48;
        }
        v8[2] = v33;
        v10[1] = v34;
        v40 = *(a2 - 3);
        if (*(unsigned __int16*)(v40 + 16) +
                10000 * (6 - *(unsigned __int8*)(v40 + 49)) <
            *(unsigned __int16*)(v34 + 16) +
                10000 * (6 - *(unsigned __int8*)(v34 + 49))) {
          v10[1] = v40;
        LABEL_48:
          *(a2 - 3) = v34;
        }
      }
      v41 = *(v10 - 1);
      v42 = *v10;
      v43 = *(unsigned __int16*)(*v10 + 16) +
            10000 * (6 - *(unsigned __int8*)(*v10 + 49));
      v44 = v10[1];
      v45 = *(unsigned __int16*)(v44 + 16) +
            10000 * (6 - *(unsigned __int8*)(v44 + 49));
      if (v43 >= *(unsigned __int16*)(v41 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v41 + 49))) {
        if (v45 >= v43) {
        LABEL_55:
          v41 = v42;
        }
        else {
          *v10 = v44;
          v10[1] = v42;
          if (*(unsigned __int16*)(v44 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v44 + 49)) >=
              *(unsigned __int16*)(v41 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v41 + 49))) {
            goto LABEL_58;
          }
          *(v10 - 1) = v44;
          *v10 = v41;
        }
      }
      else {
        if (v45 < v43) {
          *(v10 - 1) = v44;
          v10[1] = v41;
          goto LABEL_55;
        }
        *(v10 - 1) = v42;
        *v10 = v41;
        if (*(unsigned __int16*)(v44 + 16) +
                10000 * (6 - *(unsigned __int8*)(v44 + 49)) <
            *(unsigned __int16*)(v41 + 16) +
                10000 * (6 - *(unsigned __int8*)(v41 + 49))) {
          *v10 = v44;
          v10[1] = v41;
        LABEL_58:
          v41 = v44;
        }
      }
      v46 = *v8;
      *v8 = v41;
      *v10 = v46;
      goto LABEL_60;
    }
    v16 = *v8;
    v17 = *v10;
    v18 = *(unsigned __int16*)(*v8 + 16) +
          10000 * (6 - *(unsigned __int8*)(*v8 + 49));
    v19 = *(a2 - 1);
    v20 = *(unsigned __int16*)(v19 + 16) +
          10000 * (6 - *(unsigned __int8*)(v19 + 49));
    if (v18 >= *(unsigned __int16*)(*v10 + 16) +
                   10000 * (6 - *(unsigned __int8*)(*v10 + 49))) {
      if (v20 < v18) {
        *v8 = v19;
        *(a2 - 1) = v16;
        v22 = *v10;
        if (*(unsigned __int16*)(*v8 + 16) +
                10000 * (6 - *(unsigned __int8*)(*v8 + 49)) <
            *(unsigned __int16*)(*v10 + 16) +
                10000 * (6 - *(unsigned __int8*)(*v10 + 49))) {
          *v10 = *v8;
          *v8 = v22;
        }
      }
      goto LABEL_60;
    }
    if (v20 < v18) {
      *v10 = v19;
    LABEL_36:
      *(a2 - 1) = v17;
      goto LABEL_60;
    }
    *v10 = v16;
    *v8 = v17;
    v31 = *(a2 - 1);
    if (*(unsigned __int16*)(v31 + 16) +
            10000 * (6 - *(unsigned __int8*)(v31 + 49)) <
        *(unsigned __int16*)(v17 + 16) +
            10000 * (6 - *(unsigned __int8*)(v17 + 49))) {
      *v8 = v31;
      goto LABEL_36;
    }
  LABEL_60:
    v47 = *v8;
    --a3;
    if ((a4 & 1) != 0) {
      v48 = *(unsigned __int16*)(v47 + 16) +
            10000 * (6 - *(unsigned __int8*)(v47 + 49));
    LABEL_63:
      v49 = 0;
      do {
        v50 = &v8[v49++];
        v51 = v50[1];
      } while (*(unsigned __int16*)(v51 + 16) +
                   10000 * (6 - *(unsigned __int8*)(v51 + 49)) <
               v48);
      v52 = &v8[v49];
      v53 = a2;
      if (v49 == 1) {
        v53 = a2;
        do {
          if (v52 >= v53) {
            break;
          }
          v55 = *--v53;
        } while (*(unsigned __int16*)(v55 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v55 + 49)) >=
                 v48);
      }
      else {
        do {
          v54 = *--v53;
        } while (*(unsigned __int16*)(v54 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v54 + 49)) >=
                 v48);
      }
      if (v52 >= v53) {
        v62 = v52 - 1;
        if (v8 == v52 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v62;
        goto LABEL_81;
      }
      v56 = *v53;
      v57 = &v8[v49];
      v58 = v53;
      do {
        *v57 = v56;
        *v58 = v51;
        v59 = *(unsigned __int16*)(v47 + 16) +
              10000 * (6 - *(unsigned __int8*)(v47 + 49));
        do {
          v60 = v57[1];
          ++v57;
          v51 = v60;
        } while (*(unsigned __int16*)(v60 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v60 + 49)) <
                 v59);
        do {
          v61 = *--v58;
          v56 = v61;
        } while (*(unsigned __int16*)(v61 + 16) +
                     10000 * (6 - *(unsigned __int8*)(v61 + 49)) >=
                 v59);
      } while (v57 < v58);
      v62 = v57 - 1;
      if (v8 != v57 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v62 = v47;
      if (v52 < v53) {
        goto LABEL_84;
      }
      v63 = game_gameui_15a2a40(v8, v62);
      v8 = v62 + 1;
      v64 = v63;
      result =
          ((__int64 (*)(__int64*, __int64*))game_gameui_15a2a40)(v62 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v62;
        if (!v64) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v64) {
      LABEL_84:
        result = game_gameui_15a19e0((__int64)v7, v62, a3, a4 & 1);
        a4 = 0;
        v8 = v62 + 1;
      }
    }
    else {
      v48 = *(unsigned __int16*)(v47 + 16) +
            10000 * (6 - *(unsigned __int8*)(v47 + 49));
      if (*(unsigned __int16*)(*(v8 - 1) + 16) +
              10000 * (6 - *(unsigned __int8*)(*(v8 - 1) + 49)) <
          v48) {
        goto LABEL_63;
      }
      if (v48 >= *(unsigned __int16*)(*(a2 - 1) + 16) +
                     10000 * (6 - *(unsigned __int8*)(*(a2 - 1) + 49))) {
        v66 = (unsigned __int64)(v8 + 1);
        do {
          v8 = (__int64*)v66;
          if (v66 >= (unsigned __int64)a2) {
            break;
          }
          v66 += 8LL;
        } while (v48 >= *(unsigned __int16*)(*v8 + 16) +
                            10000 * (6 - *(unsigned __int8*)(*v8 + 49)));
      }
      else {
        do {
          v65 = v8[1];
          ++v8;
        } while (v48 >= *(unsigned __int16*)(v65 + 16) +
                            10000 * (6 - *(unsigned __int8*)(v65 + 49)));
      }
      v67 = a2;
      if (v8 < a2) {
        v67 = a2;
        do {
          v68 = *--v67;
        } while (v48 < *(unsigned __int16*)(v68 + 16) +
                           10000 * (6 - *(unsigned __int8*)(v68 + 49)));
      }
      if (v8 < v67) {
        v69 = *v8;
        v70 = *v67;
        do {
          *v8 = v70;
          *v67 = v69;
          v71 = *(unsigned __int16*)(v47 + 16) +
                10000 * (6 - *(unsigned __int8*)(v47 + 49));
          do {
            v72 = v8[1];
            ++v8;
            v69 = v72;
          } while (v71 >= *(unsigned __int16*)(v72 + 16) +
                              10000 * (6 - *(unsigned __int8*)(v72 + 49)));
          do {
            v73 = *--v67;
            v70 = v73;
          } while (v71 < *(unsigned __int16*)(v73 + 16) +
                             10000 * (6 - *(unsigned __int8*)(v73 + 49)));
        } while (v8 < v67);
      }
      v74 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v74;
      }
      a4 = 0;
      *v74 = v47;
    }
  }
  v83 = *v8;
  v84 = v8[1];
  v85 = *(unsigned __int16*)(v84 + 16) +
        10000 * (6 - *(unsigned __int8*)(v84 + 49));
  v86 = *(a2 - 1);
  v87 = *(unsigned __int16*)(v86 + 16) +
        10000 * (6 - *(unsigned __int8*)(v86 + 49));
  if (v85 >= *(unsigned __int16*)(*v8 + 16) +
                 10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
    if (v87 < v85) {
      v8[1] = v86;
      *(a2 - 1) = v84;
      v128 = *v8;
      v127 = v8[1];
      if (*(unsigned __int16*)(v127 + 16) +
              10000 * (6 - *(unsigned __int8*)(v127 + 49)) <
          *(unsigned __int16*)(*v8 + 16) +
              10000 * (6 - *(unsigned __int8*)(*v8 + 49))) {
        *v8 = v127;
        v8[1] = v128;
      }
    }
  }
  else {
    if (v87 >= v85) {
      *v8 = v84;
      v8[1] = v83;
      v132 = *(a2 - 1);
      if (*(unsigned __int16*)(v132 + 16) +
              10000 * (6 - *(unsigned __int8*)(v132 + 49)) >=
          *(unsigned __int16*)(v83 + 16) +
              10000 * (6 - *(unsigned __int8*)(v83 + 49))) {
        return result;
      }
      v8[1] = v132;
    }
    else {
      *v8 = v86;
    }
    *(a2 - 1) = v83;
  }
  return result;
}

__int64 game_gameui_15dff80(__int64 a1, char a2, _QWORD* a3, char a4)
{
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v5 = a3[4];
  if (v5 == 0) {
    v19_.v19[0] = GameData_205c0f8;
    v19_.v20 = v19_.v19;
    GameRoutine_145f5d0(v19_.v19, a3);
    if (v19_.v20 == v19_.v19) {
      v9 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
      LABEL_7:
        v5 = a3[4];
        goto LABEL_8;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v9))((__int64)v19_.v20);
    goto LABEL_7;
  }
LABEL_8:
  v10 = *(_QWORD*)(GameData_2259500 - 8);
  if (v10 != 0) {
    if (v5 != 0) {
      if ((_QWORD*)v5 == a3) {
        v17_.v18 = v17_.v17;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(
            v5, (__int64)v17_.v17);
      }
      else {
        v17_.v18 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      }
    }
    else {
      v17_.v18 = nullptr;
    }
    v11 = game_gameui_15dfa40(v10, a1, a2 & 1, (__int64)v17_.v17, a4 & 1);
    v12 = v17_.v18;
    if (v17_.v18 != v17_.v17) {
      goto LABEL_18;
    }
  LABEL_23:
    v13 = 32;
    goto LABEL_24;
  }
  if (v5 != 0) {
    if ((_QWORD*)v5 == a3) {
      v15_.v16 = v15_.v15;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5,
                                                            (__int64)v15_.v15);
    }
    else {
      v15_.v16 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v15_.v16 = nullptr;
  }
  v11 = game_gameui_UnitUtil_GetPrevDefault(a1, v15_.v15, a4 & 1);
  v12 = v15_.v16;
  if (v15_.v16 == v15_.v15) {
    goto LABEL_23;
  }
LABEL_18:
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  }
  return v11;
}

#pragma GCC visibility pop
