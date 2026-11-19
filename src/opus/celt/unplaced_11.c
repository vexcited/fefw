#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_pitch_xcorr_c(__int16*, __int64, __int64, int, unsigned int);
__int64 find_best_pitch(__int64 result, __int64, int, int, __int64, char,
                        unsigned int);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_celt_3b720(__int64 a1, __int64 a2, int a3, int a4, _DWORD* a5);

__attribute__((no_builtin("memset", "memcpy", "memmove")))
__int64 opus_celt_3b720(__int64 a1, __int64 a2, int a3, int a4, _DWORD* a5)
{
  int v5;
  int v7;
  unsigned __int64 v10;
  __int16* v11;
  int v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _WORD* v19;
  _WORD* v20;
  __int64 v21;
  __int16 v22;
  __int16* v23;
  __int16* v24;
  __int16 v25;
  __int64 v26;
  __int64 v27;
  _WORD* v28;
  __int64 v29;
  _WORD* v30;
  __int16 v31;
  char* v32;
  __int16* v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  __int16* v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int16* v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int16* v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  char* v68;
  int v69;
  int v70;
  unsigned int v71;
  char v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int16* v76;
  __int64 v77;
  __int16* v78;
  __int64 v79;
  __int64 v80;
  __int16* v81;
  __int64 v82;
  char* v83;
  unsigned int v84;
  __int64 v85;
  int v86;
  signed int v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  __int16* v92;
  int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int16* v99;
  __int16* v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  __int16* v108;
  __int16* v109;
  __int64 v110;
  int v111;
  int v112;
  int v113;
  __int64 result;
  int v115;
  _DWORD* v116;
  char* v117;
  int v118;
  int v119;
  int v120;
  struct {
    __int64 v121;
    _DWORD* v122;
    __int64 v123;
  } v121_;
  _DWORD v124[2];

  v5 = a3 >> 2;
  v7 = a4 + a3;
  v121_.v122 = a5;
  v121_.v123 = a2;
  v10 = 2LL * (a3 >> 2);
  v11 = (__int16*)((char*)&v121_.v121 - ((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt((__int64)v11, 0, v10);
  v12 = v7 >> 2;
  v13 = 2LL * (v7 >> 2);
  v14 = (char*)&v121_.v121 - ((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (unsigned int)(a4 >> 1);
  v16 = (char*)&v121_.v121 - ((4LL * (int)v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if (v5 >= 1) {
    v17 = v5 & 7;
    if ((unsigned int)v5 < 8) {
      v18 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v19 = v11 + 4;
    v20 = (_WORD*)(a1 + 16);
    v21 = 0;
    do {
      v21 -= 8;
      *(v19 - 4) = *(v20 - 8);
      *(v19 - 3) = *(v20 - 6);
      *(v19 - 2) = *(v20 - 4);
      *(v19 - 1) = *(v20 - 2);
      *v19 = *v20;
      v19[1] = v20[2];
      v19[2] = v20[4];
      v22 = v20[6];
      v20 += 16;
      v19[3] = v22;
      v19 += 8;
    } while (-(__int64)(v5 & 0x7FFFFFF8) != v21);
    v18 = -v21;
    if ((v5 & 7) != 0) {
    LABEL_8:
      v23 = &v11[v18];
      v24 = (__int16*)(a1 + 4 * v18);
      do {
        v25 = *v24;
        v24 += 2;
        --v17;
        *v23++ = v25;
      } while (v17 != 0);
    }
  }
LABEL_10:
  memset_plt((__int64)&v121_.v121 - ((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0,
             v13);
  if (v12 < 1) {
    goto LABEL_19;
  }
  v26 = v12 & 7;
  if ((unsigned int)v12 < 8) {
    v27 = 0;
    if ((v12 & 7) == 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v28 = v14 + 8;
  v29 = 0;
  v30 = (_WORD*)(v121_.v123 + 16);
  do {
    v29 -= 8;
    *(v28 - 4) = *(v30 - 8);
    *(v28 - 3) = *(v30 - 6);
    *(v28 - 2) = *(v30 - 4);
    *(v28 - 1) = *(v30 - 2);
    *v28 = *v30;
    v28[1] = v30[2];
    v28[2] = v30[4];
    v31 = v30[6];
    v30 += 16;
    v28[3] = v31;
    v28 += 8;
  } while (-(__int64)(v12 & 0x7FFFFFF8) != v29);
  v27 = -v29;
  if ((v12 & 7) != 0) {
  LABEL_17:
    v32 = &v14[2 * v27];
    v33 = (__int16*)(v121_.v123 + 4 * v27);
    do {
      v34 = *v33;
      v33 += 2;
      --v26;
      *(_WORD*)v32 = v34;
      v32 += 2;
    } while (v26 != 0);
  }
LABEL_19:
  if (v5 < 1) {
    v39 = 0;
    if (v12 >= 1) {
      goto LABEL_70;
    }
  LABEL_24:
    v40 = 0;
    v41 = 0;
    goto LABEL_115;
  }
  v35 = v5 & 7;
  if ((unsigned int)v5 < 8) {
    v36 = 0;
    LOWORD(v37) = 0;
    LOWORD(v38) = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_66;
    }
    goto LABEL_60;
  }
  v42 = v11 + 4;
  v43 = 0;
  LOWORD(v37) = 0;
  LOWORD(v38) = 0;
  do {
    v44 = *(v42 - 4);
    v38 = (__int16)v38;
    v37 = (__int16)v37;
    v43 -= 8;
    if ((__int16)v38 <= v44) {
      v38 = *(v42 - 4);
    }
    if ((__int16)v37 >= v44) {
      v37 = *(v42 - 4);
    }
    v45 = *(v42 - 3);
    if (v38 <= v45) {
      v38 = *(v42 - 3);
    }
    if (v37 >= v45) {
      v37 = *(v42 - 3);
    }
    v46 = *(v42 - 2);
    if (v38 <= v46) {
      v38 = *(v42 - 2);
    }
    if (v37 >= v46) {
      v37 = *(v42 - 2);
    }
    v47 = *(v42 - 1);
    if (v38 <= v47) {
      v38 = *(v42 - 1);
    }
    if (v37 >= v47) {
      v37 = *(v42 - 1);
    }
    v48 = *v42;
    if (v38 <= v48) {
      v38 = *v42;
    }
    if (v37 >= v48) {
      v37 = *v42;
    }
    v49 = v42[1];
    if (v38 <= v49) {
      v38 = v42[1];
    }
    if (v37 >= v49) {
      v37 = v42[1];
    }
    v50 = v42[2];
    if (v38 <= v50) {
      v38 = v42[2];
    }
    if (v37 >= v50) {
      v37 = v42[2];
    }
    v51 = v42[3];
    v42 += 8;
    if (v38 <= v51) {
      LOWORD(v38) = v51;
    }
    if (v37 >= v51) {
      LOWORD(v37) = v51;
    }
  } while (-(__int64)(v5 & 0x7FFFFFF8) != v43);
  v36 = -v43;
  if ((v5 & 7) != 0) {
  LABEL_60:
    v52 = &v11[v36];
    do {
      v54 = *v52++;
      v53 = v54;
      if ((__int16)v38 <= v54) {
        LOWORD(v38) = v53;
      }
      if ((__int16)v37 >= v53) {
        LOWORD(v37) = v53;
      }
      --v35;
    } while (v35 != 0);
  }
LABEL_66:
  v39 = (unsigned __int16)v38;
  v37 = (__int16)v37;
  if (((int)(v39 + v37) < 0) ^ __OFADD__(v39, v37) | (v39 + v37 == 0)) {
    v39 = -(__int16)v37;
  }
  if (v12 < 1) {
    goto LABEL_24;
  }
LABEL_70:
  v55 = v12 & 7;
  if ((unsigned int)v12 >= 8) {
    v58 = (__int16*)(v14 + 8);
    v59 = 0;
    LOWORD(v41) = 0;
    LOWORD(v57) = 0;
    do {
      v60 = *(v58 - 4);
      v57 = (__int16)v57;
      v41 = (__int16)v41;
      v59 -= 8;
      if ((__int16)v57 <= v60) {
        v57 = *(v58 - 4);
      }
      if ((__int16)v41 >= v60) {
        v41 = *(v58 - 4);
      }
      v61 = *(v58 - 3);
      if (v57 <= v61) {
        v57 = *(v58 - 3);
      }
      if (v41 >= v61) {
        v41 = *(v58 - 3);
      }
      v62 = *(v58 - 2);
      if (v57 <= v62) {
        v57 = *(v58 - 2);
      }
      if (v41 >= v62) {
        v41 = *(v58 - 2);
      }
      v63 = *(v58 - 1);
      if (v57 <= v63) {
        v57 = *(v58 - 1);
      }
      if (v41 >= v63) {
        v41 = *(v58 - 1);
      }
      v64 = *v58;
      if (v57 <= v64) {
        v57 = *v58;
      }
      if (v41 >= v64) {
        v41 = *v58;
      }
      v65 = v58[1];
      if (v57 <= v65) {
        v57 = v58[1];
      }
      if (v41 >= v65) {
        v41 = v58[1];
      }
      v66 = v58[2];
      if (v57 <= v66) {
        v57 = v58[2];
      }
      if (v41 >= v66) {
        v41 = v58[2];
      }
      v67 = v58[3];
      v58 += 8;
      if (v57 <= v67) {
        LOWORD(v57) = v67;
      }
      if (v41 >= v67) {
        LOWORD(v41) = v67;
      }
    } while (-(__int64)(v12 & 0x7FFFFFF8) != v59);
    v56 = -v59;
    if ((v12 & 7) == 0) {
      goto LABEL_114;
    }
    goto LABEL_108;
  }
  v56 = 0;
  LOWORD(v41) = 0;
  LOWORD(v57) = 0;
  if ((v12 & 7) != 0) {
  LABEL_108:
    v68 = &v14[2 * v56];
    do {
      v70 = *(__int16*)v68;
      v68 += 2;
      v69 = v70;
      if ((__int16)v57 <= v70) {
        LOWORD(v57) = v69;
      }
      if ((__int16)v41 >= v69) {
        LOWORD(v41) = v69;
      }
      --v55;
    } while (v55 != 0);
  }
LABEL_114:
  v40 = (unsigned __int16)v57;
  v41 = (__int16)v41;
LABEL_115:
  if (((int)(v40 + v41) < 0) ^ __OFADD__(v40, v41) | (v40 + v41 == 0)) {
    v40 = -v41;
  }
  if (v39 <= v40) {
    v39 = v40;
  }
  if (v39 <= 1) {
    v39 = 1;
  }
  v71 = __clz((unsigned int)(v39));
  if ((v71 ^ 0x1C) < 0xC) {
    v75 = 0;
    goto LABEL_143;
  }
  v72 = 20 - v71;
  if (v5 >= 1) {
    v73 = v5 & 7;
    if ((unsigned int)v5 < 8) {
      v74 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_133;
      }
      goto LABEL_131;
    }
    v76 = v11 + 4;
    v77 = 0;
    do {
      v77 -= 8;
      *(v76 - 4) >>= v72;
      *(v76 - 3) >>= v72;
      *(v76 - 2) >>= v72;
      *(v76 - 1) >>= v72;
      *v76 >>= v72;
      v76[1] >>= v72;
      v76[2] >>= v72;
      v76[3] >>= v72;
      v76 += 8;
    } while (-(__int64)(v5 & 0x7FFFFFF8) != v77);
    v74 = -v77;
    if ((v5 & 7) != 0) {
    LABEL_131:
      v78 = &v11[v74];
      do {
        --v73;
        *v78++ >>= v72;
      } while (v73 != 0);
    }
  }
LABEL_133:
  if (v12 >= 1) {
    v79 = v12 & 7;
    if ((unsigned int)v12 >= 8) {
      v81 = (__int16*)(v14 + 8);
      v82 = 0;
      do {
        v82 -= 8;
        *(v81 - 4) >>= v72;
        *(v81 - 3) >>= v72;
        *(v81 - 2) >>= v72;
        *(v81 - 1) >>= v72;
        *v81 >>= v72;
        v81[1] >>= v72;
        v81[2] >>= v72;
        v81[3] >>= v72;
        v81 += 8;
      } while (-(__int64)(v12 & 0x7FFFFFF8) != v82);
      v80 = -v82;
      if ((v12 & 7) == 0) {
        goto LABEL_142;
      }
    }
    else {
      v80 = 0;
      if ((v12 & 7) == 0) {
        goto LABEL_142;
      }
    }
    v83 = &v14[2 * v80];
    do {
      --v79;
      *(_WORD*)v83 = *(__int16*)v83 >> v72;
      v83 += 2;
    } while (v79 != 0);
  }
LABEL_142:
  v75 = 2 * v72;
LABEL_143:
  memset_plt((__int64)v16, 0, 4LL * (int)v15);
  v84 = celt_pitch_xcorr_c(v11, (__int64)v14, (__int64)v16, v5, a4 >> 2);
  find_best_pitch((__int64)v16, (__int64)v14, v5, a4 >> 2, (__int64)v124, 0,
                  v84);
  if ((int)v15 > 0) {
    v85 = v121_.v123;
    v86 = a3 >> 1;
    v87 = 1;
    v88 = 0;
    v89 = (a3 >> 1) & 7LL;
    v90 = 2 * v124[0];
    v91 = 2 * v124[1];
    v92 = (__int16*)(v121_.v123 + 8);
    while (1) {
      v95 = v88 - v90;
      *(_DWORD*)&v16[4 * v88] = 0;
      if ((int)v88 - v90 < 0) {
        v95 = v90 - v88;
      }
      if (v95 >= 3) {
        v96 = v88 - v91;
        if ((int)v88 - v91 < 0) {
          v96 = v91 - v88;
        }
        if (v96 > 2) {
          goto LABEL_152;
        }
      }
      if (v86 < 1) {
        v93 = 0;
        goto LABEL_146;
      }
      if ((unsigned int)v86 < 8) {
        break;
      }
      v98 = 0;
      v93 = 0;
      v99 = (__int16*)(a1 + 8);
      v100 = v92;
      do {
        v98 -= 8;
        v101 = ((*(v100 - 2) * *(v99 - 2)) >> v75) +
               ((*(v100 - 3) * *(v99 - 3)) >> v75) +
               ((*(v100 - 4) * *(v99 - 4)) >> v75) + v93;
        v102 = v100[3];
        v103 = ((v100[1] * v99[1]) >> v75) + ((*v100 * *v99) >> v75) +
               ((*(v100 - 1) * *(v99 - 1)) >> v75);
        v104 = v100[2];
        v100 += 8;
        v105 = v103 + v101;
        v106 = v104 * v99[2];
        v107 = v99[3];
        v99 += 8;
        v93 = ((v102 * v107) >> v75) + (v106 >> v75) + v105;
      } while (-(__int64)((a3 >> 1) & 0x7FFFFFF8) != v98);
      v97 = -v98;
      if (v89 != 0) {
        goto LABEL_166;
      }
    LABEL_146:
      if (v93 <= -1) {
        v94 = -1;
      }
      else {
        v94 = v93;
      }
      if (v87 <= v93) {
        v87 = v93;
      }
      *(_DWORD*)&v16[4 * v88] = v94;
    LABEL_152:
      ++v88;
      ++v92;
      v85 += 2;
      if (v88 == v15) {
        goto LABEL_170;
      }
    }
    v97 = 0;
    v93 = 0;
    if (v89 == 0) {
      goto LABEL_146;
    }
  LABEL_166:
    v108 = (__int16*)(v85 + 2 * v97);
    v109 = (__int16*)(a1 + 2 * v97);
    v110 = v86 & 7;
    do {
      v112 = *v109++;
      v111 = v112;
      v113 = *v108++;
      --v110;
      v93 += (v113 * v111) >> v75;
    } while (v110 != 0);
    goto LABEL_146;
  }
  v86 = a3 >> 1;
  v87 = 1;
LABEL_170:
  result = find_best_pitch((__int64)v16, v121_.v123, v86, v15, (__int64)v124,
                           v75 | 1u, v87);
  v115 = 0;
  if ((signed __int32)v124[0] < 1) {
    v116 = v121_.v122;
  }
  else {
    v116 = v121_.v122;
    if ((signed __int32)v124[0] < (int)v15 - 1) {
      v117 = &v16[4 * v124[0]];
      v118 = *((_DWORD*)v117 - 1);
      v119 = *(_DWORD*)v117;
      v120 = *((_DWORD*)v117 + 1);
      if (v120 - v118 <=
          (int)((unsigned __int64)(22938LL * (v119 - v118)) >> 15)) {
        v115 = v118 - v120 >
               (int)((unsigned __int64)(22938LL * (v119 - v120)) >> 15);
      }
      else {
        v115 = -1;
      }
    }
  }
  *(_DWORD*)v116 = v115 + 2 * v124[0];
  return result;
}

#pragma GCC visibility pop
