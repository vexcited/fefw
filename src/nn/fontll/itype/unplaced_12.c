#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fix_fnt_plt(_QWORD, _QWORD);
__int64 load_fnt_plt(_QWORD, _QWORD);
extern unsigned __int8 SdkData_c3c564[256];
__int64 nn_fontll_itype_422c20(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4, int a5);
__int64 nn_fontll_itype_423c00(__int64 a1, unsigned int a2);
__int64 ScaleFuncCall_plt(int, __int64, unsigned int);
__int64 SdkRoutine_432e00();
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_fontll_itype_432db0();
__int64 nn_fontll_itype_432de0();
__int64 nn_fontll_itype_432df0();
__int64 nn_fontll_itype_432e10();
__int64 nn_fontll_itype_432e50();
__int64 varmul_64_plt(int, int, char);
extern __int64 SdkData_e880d8;
int setjmp_plt(__int64);
__int64 nn_fontll_itype_432c00(__int64 a1, unsigned __int8* a2,
                               unsigned __int64 a3, __int64 a4);

__int64 nn_fontll_itype_422c20(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4, int a5)
{
  unsigned int v7;
  __int64 result;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int* v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  int v20;
  unsigned __int16* v21;
  unsigned __int16 v22;
  unsigned __int16* v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  __int16 v33;
  unsigned int v34;
  unsigned __int16* v35;
  unsigned int v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned __int8* v43;
  int v44;
  __int64 v45;
  unsigned __int8* v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned __int16* v53;
  __int64 v54;
  int v55;
  __int16 v56;
  unsigned int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  __int16 v62;
  unsigned int v63;
  unsigned __int16* v64;
  unsigned __int16* v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  __int16 v71;
  unsigned int v72;
  unsigned __int16* v73;
  unsigned __int16* v74;
  unsigned int v75;
  int v76;
  int v77;
  int v78;
  unsigned int v79;
  __int64 v80;
  unsigned __int16* v81;
  int v82;
  unsigned __int16* v83;
  unsigned __int16* v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  bool i;
  bool v91;
  unsigned int v92;
  __int64 v94;
  unsigned int v95;
  int v96;
  __int16 v97;
  int v98;
  int v99;
  unsigned __int16* v100;
  unsigned int v101;
  unsigned __int64 v102;
  unsigned int v104;
  unsigned int v106;
  unsigned int v107;

  v7 = a3;
  if (a3 != 0) {
    if (*(_QWORD*)(a2 + 56) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v11 = *(unsigned __int16*)(a1 + 64);
    v12 = *(unsigned __int16*)(a1 + 66);
    if ((v12 & v11) == 0xFFFF) {
      v20 = 0;
    LABEL_39:
      *(_DWORD*)(a1 + 72) = v20;
      return 0;
    }
    if (*(_QWORD*)(a2 + 56) == 0) {
      goto LABEL_10;
    }
    if ((unsigned int)fix_fnt_plt(a1, a2) != 0) {
      return 0;
    }
    v13 = *(_QWORD*)(a2 + 56);
    if (v13 == 0) {
    LABEL_10:
      if ((unsigned int)load_fnt_plt(a1, a2) != 0) {
        return 0;
      }
      v13 = *(_QWORD*)(a2 + 56);
    }
    v14 = *(_QWORD*)(v13 + 80);
    if (*(_WORD*)(v14 + 2) == 0) {
    LABEL_38:
      v20 = 402;
      goto LABEL_39;
    }
    v15 = __rev16(*(unsigned __int16*)(v14 + 2));
    v16 = (unsigned int*)(v14 + 8);
    while (v11 != bswap32(*((unsigned __int16*)v16 - 2)) >> 16 ||
           v12 != bswap32(*((unsigned __int16*)v16 - 1)) >> 16) {
      --v15;
      v16 += 2;
      if (v15 == 0) {
        goto LABEL_38;
      }
    }
    v17 = *v16;
    if (*v16 != 0) {
      v18 = 0;
    }
    else {
      v18 = 402;
    }
    *(_DWORD*)(a1 + 72) = v18;
    if (v17 == 0) {
      return 0;
    }
    v7 = bswap32(v17);
    if (*(_QWORD*)(a2 + 56) != 0) {
    LABEL_3:
      if ((unsigned int)fix_fnt_plt(a1, a2) != 0) {
        return 0;
      }
      v19 = *(_QWORD*)(a2 + 56);
      if (v19 != 0) {
        goto LABEL_28;
      }
    }
  }
  if ((unsigned int)load_fnt_plt(a1, a2) != 0) {
    return 0;
  }
  v19 = *(_QWORD*)(a2 + 56);
LABEL_28:
  v21 = (unsigned __int16*)(*(_QWORD*)(v19 + 80) + v7);
  v22 = __rev16(*v21);
  if (a4 >= 0x10000 && v22 <= 7u) {
    v20 = 406;
    goto LABEL_39;
  }
  result = 0;
  if (v22 <= 5u) {
    if (v22 <= 3u) {
      if (v22 != 0) {
        if (v22 != 2) {
          return result;
        }
        v23 = &v21[BYTE1(a4)];
        v24 = bswap32(v23[259]);
        v25 = (unsigned __int8)a4 - HIWORD(v24);
        if ((unsigned __int8)a4 < HIWORD(v24) ||
            v25 >= bswap32(v23[260]) >> 16) {
          return 0;
        }
        v26 = v23[261];
        v27 = v23[(bswap32(v23[262]) >> 17) + 262 + v25];
        v28 = __rev16(v26) + (bswap32(v27) >> 16);
        goto LABEL_216;
      }
      if (a4 <= 0xFF) {
        return *((unsigned __int8*)v21 + a4 + 6);
      }
      return 0;
    }
    if (v22 != 4) {
      v31 = 2 << (__rev16(v21[5]) - 1);
      v32 = (unsigned __int64)(bswap32(v21[3]) >> 16) >> 1;
      if (v21[5] != 0) {
        v33 = v31;
      }
      else {
        v33 = 0;
      }
      v34 = (unsigned __int16)(v33 & 0xFFFE) >> ((v33 & 0xFFFE) == (_DWORD)v32);
      v35 = v21 + 7;
      v36 = v21[v34 + 7];
      v37 = ~v34;
      v38 = v34 >> 1;
      v39 = (__int64)&v21[v32 + 8];
      v40 = v37 + v32;
      if (a4 <= bswap32(v36) >> 16) {
        v41 = 0;
      }
      else {
        v41 = v40;
      }
      if (v38 <= 255) {
        if (v38 <= 15) {
          if (v38 == 2) {
          LABEL_293:
            if (a4 > bswap32(v35[v41 + 1]) >> 16) {
              v41 += 2;
            }
            goto LABEL_295;
          }
          if (v38 == 4) {
          LABEL_291:
            if (a4 > bswap32(v35[v41 + 3]) >> 16) {
              v41 += 4;
            }
            goto LABEL_293;
          }
          if (v38 != 8) {
            goto LABEL_295;
          }
        LABEL_289:
          if (a4 > bswap32(v35[v41 + 7]) >> 16) {
            v41 += 8;
          }
          goto LABEL_291;
        }
        if (v38 <= 63) {
          if (v38 == 16) {
          LABEL_287:
            if (a4 > bswap32(v35[v41 + 15]) >> 16) {
              v41 += 16;
            }
            goto LABEL_289;
          }
          if (v38 != 32) {
            goto LABEL_295;
          }
        LABEL_285:
          if (a4 > bswap32(v35[v41 + 31]) >> 16) {
            v41 += 32;
          }
          goto LABEL_287;
        }
        if (v38 == 64) {
        LABEL_283:
          if (a4 > bswap32(v35[v41 + 63]) >> 16) {
            v41 += 64;
          }
          goto LABEL_285;
        }
        if (v38 != 128) {
          goto LABEL_295;
        }
      LABEL_281:
        if (a4 > bswap32(v35[v41 + 127]) >> 16) {
          v41 += 128;
        }
        goto LABEL_283;
      }
      if (v38 <= 2047) {
        if (v38 == 256) {
        LABEL_279:
          if (a4 > bswap32(v35[v41 + 255]) >> 16) {
            v41 += 256;
          }
          goto LABEL_281;
        }
        if (v38 == 512) {
        LABEL_277:
          if (a4 > bswap32(v35[v41 + 511]) >> 16) {
            v41 += 512;
          }
          goto LABEL_279;
        }
        if (v38 != 1024) {
          goto LABEL_295;
        }
      LABEL_275:
        if (a4 > bswap32(v35[v41 + 1023]) >> 16) {
          v41 += 1024;
        }
        goto LABEL_277;
      }
      if (v38 >= 0x2000) {
        if (v38 != 0x2000) {
          if (v38 != 0x4000) {
            do {
            LABEL_295:
              v94 = (unsigned __int16)v41++;
              v95 = v35[v94];
            } while (a4 > bswap32(v95) >> 16);
            v96 = *(char*)(v39 + v94);
            v97 = __rev16(v95);
            if (v96 >= 0) {
              LOWORD(v98) = *(char*)(v39 + v94);
            }
            else {
              v98 = -v96;
            }
            v99 = a4 - (unsigned __int16)(v97 - v98 + 1);
            if (v99 < 0) {
              return 0;
            }
            v100 = (unsigned __int16*)(v39 + 2 * v94 + v32);
            v101 = __rev16(*v100);
            if (v96 >= 1) {
              return v101 + a4;
            }
            v50 = v100[v99 + ((unsigned __int16)(v101 & 0xFFFE) >> 1)];
            return __rev16(v50);
          }
          if (a4 > bswap32(v35[v41 + 0x3FFF]) >> 16) {
            v41 += 0x4000;
          }
        }
        if (a4 > bswap32(v35[v41 + 0x1FFF]) >> 16) {
          v41 += 0x2000;
        }
      }
      else {
        if (v38 == 2048) {
        LABEL_273:
          if (a4 > bswap32(v35[v41 + 2047]) >> 16) {
            v41 += 2048;
          }
          goto LABEL_275;
        }
        if (v38 != 4096) {
          goto LABEL_295;
        }
      }
      if (a4 > bswap32(v35[v41 + 4095]) >> 16) {
        v41 += 4096;
      }
      goto LABEL_273;
    }
    v51 = v21[5];
    v52 = v21[3];
    v53 = v21 + 7;
    v54 = bswap32(v52) >> 17;
    v55 = 2 << (__rev16(v51) - 1);
    if (v51 != 0) {
      v56 = v55;
    }
    else {
      v56 = 0;
    }
    v57 = v56 & 0xFFFE;
    v58 = v57 >> (v57 == (_DWORD)v54) >> 1;
    if (a4 <= bswap32(v53[v57 >> (v57 == (_DWORD)v54)]) >> 16) {
      v59 = 0;
    }
    else {
      v59 = ~(v57 >> (v57 == (_DWORD)v54)) + v54;
    }
    if (v58 <= 255) {
      if (v58 <= 15) {
        if (v58 == 2) {
        LABEL_209:
          if (a4 > bswap32(v53[v59 + 1]) >> 16) {
            v59 += 2;
          }
          goto LABEL_211;
        }
        if (v58 == 4) {
        LABEL_207:
          if (a4 > bswap32(v53[v59 + 3]) >> 16) {
            v59 += 4;
          }
          goto LABEL_209;
        }
        if (v58 != 8) {
          goto LABEL_211;
        }
      LABEL_205:
        if (a4 > bswap32(v53[v59 + 7]) >> 16) {
          v59 += 8;
        }
        goto LABEL_207;
      }
      if (v58 <= 63) {
        if (v58 == 16) {
        LABEL_203:
          if (a4 > bswap32(v53[v59 + 15]) >> 16) {
            v59 += 16;
          }
          goto LABEL_205;
        }
        if (v58 != 32) {
          goto LABEL_211;
        }
      LABEL_201:
        if (a4 > bswap32(v53[v59 + 31]) >> 16) {
          v59 += 32;
        }
        goto LABEL_203;
      }
      if (v58 == 64) {
      LABEL_199:
        if (a4 > bswap32(v53[v59 + 63]) >> 16) {
          v59 += 64;
        }
        goto LABEL_201;
      }
      if (v58 != 128) {
        goto LABEL_211;
      }
    LABEL_197:
      if (a4 > bswap32(v53[v59 + 127]) >> 16) {
        v59 += 128;
      }
      goto LABEL_199;
    }
    if (v58 <= 2047) {
      if (v58 == 256) {
      LABEL_195:
        if (a4 > bswap32(v53[v59 + 255]) >> 16) {
          v59 += 256;
        }
        goto LABEL_197;
      }
      if (v58 == 512) {
      LABEL_193:
        if (a4 > bswap32(v53[v59 + 511]) >> 16) {
          v59 += 512;
        }
        goto LABEL_195;
      }
      if (v58 != 1024) {
        goto LABEL_211;
      }
    LABEL_191:
      if (a4 > bswap32(v53[v59 + 1023]) >> 16) {
        v59 += 1024;
      }
      goto LABEL_193;
    }
    if (v58 >= 0x2000) {
      if (v58 != 0x2000) {
        if (v58 != 0x4000) {
          do {
          LABEL_211:
            v80 = (unsigned __int16)v59++;
          } while (a4 > bswap32(v53[v80]) >> 16);
          v81 = &v53[(unsigned int)v54 + 1 + v80];
          v82 = a4 - (bswap32(*v81) >> 16);
          if (v82 < 0) {
            return 0;
          }
          v83 = &v81[v54];
          v84 = &v83[v54];
          v85 = *v83;
          v86 = *v84;
          v87 = __rev16(v85);
          if (bswap32(v86) >> 16 <= 1) {
            return v87 + a4;
          }
          v27 = v84[v82 + ((__rev16(v86) & 0xFFFE) >> 1)];
          v28 = v87 + (bswap32(v27) >> 16);
        LABEL_216:
          if (v27 != 0) {
            return v28;
          }
          else {
            return 0;
          }
        }
        if (a4 > bswap32(v53[v59 + 0x3FFF]) >> 16) {
          v59 += 0x4000;
        }
      }
      if (a4 > bswap32(v53[v59 + 0x1FFF]) >> 16) {
        v59 += 0x2000;
      }
    }
    else {
      if (v58 == 2048) {
      LABEL_189:
        if (a4 > bswap32(v53[v59 + 2047]) >> 16) {
          v59 += 2048;
        }
        goto LABEL_191;
      }
      if (v58 != 4096) {
        goto LABEL_211;
      }
    }
    if (a4 > bswap32(v53[v59 + 4095]) >> 16) {
      v59 += 4096;
    }
    goto LABEL_189;
  }
  if (v22 <= 0xBu) {
    if (v22 == 6) {
      v49 = a4 - (bswap32(v21[3]) >> 16);
      if ((v49 & 0x80000000) != 0 || v49 >= bswap32(v21[4]) >> 16) {
        return 0;
      }
      v50 = v21[v49 + 5];
      return __rev16(v50);
    }
    if (v22 != 8) {
      return result;
    }
    v29 = _byteswap_ulong(*((_DWORD*)v21 + 2051));
    if (((*((unsigned __int8*)v21 + 8204) << 24) |
         (*((unsigned __int8*)v21 + 8205) << 16)) != 0) {
      if (*((_BYTE*)v21 + 8204) != 0) {
        v30 = SdkData_c3c564[*((unsigned __int8*)v21 + 8204)] + 24;
      }
      else {
        v30 = SdkData_c3c564[*((unsigned __int8*)v21 + 8205)] + 16;
      }
    }
    else if (v29 >= 0x100) {
      v30 = SdkData_c3c564[*((unsigned __int8*)v21 + 8206)] + 8;
    }
    else {
      v30 = SdkData_c3c564[v29];
    }
    if (v30 != 0) {
      v71 = 2 << (v30 - 1);
    }
    else {
      v71 = 0;
    }
    v72 = (unsigned __int16)(v71 & 0xFFFE) >> (v29 == (v71 & 0xFFFE));
    v73 = v21 + 4104;
    v74 = v21 + 4106;
    v75 = 3 * v72;
    v76 = ~v72;
    v77 = v72 >> 1;
    v78 = 3 * (v29 + v76);
    if (bswap32(*(_DWORD*)&v74[2 * v75]) >= a4) {
      v79 = 0;
    }
    else {
      v79 = v78;
    }
    if (v77 <= 255) {
      if (v77 <= 15) {
        switch (v77) {
        case 2:
        LABEL_335:
          if (bswap32(*(_DWORD*)&v74[2 * v79 + 6]) < a4) {
            v79 += 6;
          }
          break;
        case 4:
        LABEL_333:
          if (bswap32(*(_DWORD*)&v74[2 * v79 + 18]) < a4) {
            v79 += 12;
          }
          goto LABEL_335;
        case 8:
        LABEL_331:
          if (bswap32(*(_DWORD*)&v74[2 * v79 + 42]) < a4) {
            v79 += 24;
          }
          goto LABEL_333;
        default:
          break;
        }
      LABEL_337:
        v88 = (unsigned __int64)&v73[2 * v79 + 2];
        v102 = (unsigned __int64)&v73[6 * v29 - 4];
        for (i = a4 > bswap32(*(_DWORD*)v88);
             i && v88<v102; i = a4> bswap32(v104)) {
          v104 = *(_DWORD*)(v88 + 12);
          v88 += 12LL;
        }
      LABEL_346:
        result = 0;
        if (!i) {
          v106 = bswap32(*(_DWORD*)(v88 - 4));
          v91 = a4 >= v106;
          v107 = a4 - v106;
          if (v91) {
            return v107 + (bswap32(*(unsigned __int16*)(v88 + 6)) >> 16);
          }
        }
        return result;
      }
      if (v77 <= 63) {
        if (v77 == 16) {
        LABEL_329:
          if (bswap32(*(_DWORD*)&v74[2 * v79 + 90]) < a4) {
            v79 += 48;
          }
          goto LABEL_331;
        }
        if (v77 != 32) {
          goto LABEL_337;
        }
      LABEL_327:
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 186]) < a4) {
          v79 += 96;
        }
        goto LABEL_329;
      }
      if (v77 == 64) {
      LABEL_325:
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 378]) < a4) {
          v79 += 192;
        }
        goto LABEL_327;
      }
      if (v77 != 128) {
        goto LABEL_337;
      }
    LABEL_323:
      if (bswap32(*(_DWORD*)&v74[2 * v79 + 762]) < a4) {
        v79 += 384;
      }
      goto LABEL_325;
    }
    if (v77 <= 2047) {
      if (v77 == 256) {
      LABEL_321:
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 1530]) < a4) {
          v79 += 768;
        }
        goto LABEL_323;
      }
      if (v77 == 512) {
      LABEL_319:
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 3066]) < a4) {
          v79 += 1536;
        }
        goto LABEL_321;
      }
      if (v77 != 1024) {
        goto LABEL_337;
      }
    LABEL_317:
      if (bswap32(*(_DWORD*)&v74[2 * v79 + 6138]) < a4) {
        v79 += 3072;
      }
      goto LABEL_319;
    }
    if (v77 >= 0x2000) {
      if (v77 != 0x2000) {
        if (v77 != 0x4000) {
          goto LABEL_337;
        }
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 98298]) < a4) {
          v79 += 49152;
        }
      }
      if (bswap32(*(_DWORD*)&v74[2 * v79 + 49146]) < a4) {
        v79 += 24576;
      }
    }
    else {
      if (v77 == 2048) {
      LABEL_315:
        if (bswap32(*(_DWORD*)&v74[2 * v79 + 12282]) < a4) {
          v79 += 6144;
        }
        goto LABEL_317;
      }
      if (v77 != 4096) {
        goto LABEL_337;
      }
    }
    if (bswap32(*(_DWORD*)&v74[2 * v79 + 24570]) < a4) {
      v79 += 12288;
    }
    goto LABEL_315;
  }
  if (v22 == 12) {
    v60 = _byteswap_ulong(*((_DWORD*)v21 + 3));
    if (((*((unsigned __int8*)v21 + 12) << 24) |
         (*((unsigned __int8*)v21 + 13) << 16)) != 0) {
      if (*((_BYTE*)v21 + 12) != 0) {
        v61 = SdkData_c3c564[*((unsigned __int8*)v21 + 12)] + 24;
      }
      else {
        v61 = SdkData_c3c564[*((unsigned __int8*)v21 + 13)] + 16;
      }
    }
    else if (v60 >= 0x100) {
      v61 = SdkData_c3c564[*((unsigned __int8*)v21 + 14)] + 8;
    }
    else {
      v61 = SdkData_c3c564[v60];
    }
    if (v61 != 0) {
      v62 = 2 << (v61 - 1);
    }
    else {
      v62 = 0;
    }
    v63 = (unsigned __int16)(v62 & 0xFFFE) >> (v60 == (v62 & 0xFFFE));
    v64 = v21 + 8;
    v65 = v21 + 10;
    v66 = 3 * v63;
    v67 = ~v63;
    v68 = v63 >> 1;
    v69 = 3 * (v60 + v67);
    if (bswap32(*(_DWORD*)&v65[2 * v66]) >= a4) {
      v70 = 0;
    }
    else {
      v70 = v69;
    }
    if (v68 <= 255) {
      if (v68 <= 15) {
        switch (v68) {
        case 2:
        LABEL_250:
          if (bswap32(*(_DWORD*)&v65[2 * v70 + 6]) < a4) {
            v70 += 6;
          }
          break;
        case 4:
        LABEL_248:
          if (bswap32(*(_DWORD*)&v65[2 * v70 + 18]) < a4) {
            v70 += 12;
          }
          goto LABEL_250;
        case 8:
        LABEL_246:
          if (bswap32(*(_DWORD*)&v65[2 * v70 + 42]) < a4) {
            v70 += 24;
          }
          goto LABEL_248;
        default:
          break;
        }
      LABEL_252:
        v88 = (unsigned __int64)&v64[2 * v70 + 2];
        v89 = (unsigned __int64)&v64[6 * v60 - 4];
        i = a4 > bswap32(*(_DWORD*)v88);
        v91 = !i || v88 >= v89;
        if (!v91) {
          do {
            v92 = *(_DWORD*)(v88 + 12);
            v88 += 12LL;
            i = a4 > bswap32(v92);
          } while (i && v88 < v89);
        }
        goto LABEL_346;
      }
      if (v68 <= 63) {
        if (v68 == 16) {
        LABEL_244:
          if (bswap32(*(_DWORD*)&v65[2 * v70 + 90]) < a4) {
            v70 += 48;
          }
          goto LABEL_246;
        }
        if (v68 != 32) {
          goto LABEL_252;
        }
      LABEL_242:
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 186]) < a4) {
          v70 += 96;
        }
        goto LABEL_244;
      }
      if (v68 == 64) {
      LABEL_240:
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 378]) < a4) {
          v70 += 192;
        }
        goto LABEL_242;
      }
      if (v68 != 128) {
        goto LABEL_252;
      }
    LABEL_238:
      if (bswap32(*(_DWORD*)&v65[2 * v70 + 762]) < a4) {
        v70 += 384;
      }
      goto LABEL_240;
    }
    if (v68 <= 2047) {
      if (v68 == 256) {
      LABEL_236:
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 1530]) < a4) {
          v70 += 768;
        }
        goto LABEL_238;
      }
      if (v68 == 512) {
      LABEL_234:
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 3066]) < a4) {
          v70 += 1536;
        }
        goto LABEL_236;
      }
      if (v68 != 1024) {
        goto LABEL_252;
      }
    LABEL_232:
      if (bswap32(*(_DWORD*)&v65[2 * v70 + 6138]) < a4) {
        v70 += 3072;
      }
      goto LABEL_234;
    }
    if (v68 >= 0x2000) {
      if (v68 != 0x2000) {
        if (v68 != 0x4000) {
          goto LABEL_252;
        }
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 98298]) < a4) {
          v70 += 49152;
        }
      }
      if (bswap32(*(_DWORD*)&v65[2 * v70 + 49146]) < a4) {
        v70 += 24576;
      }
    }
    else {
      if (v68 == 2048) {
      LABEL_230:
        if (bswap32(*(_DWORD*)&v65[2 * v70 + 12282]) < a4) {
          v70 += 6144;
        }
        goto LABEL_232;
      }
      if (v68 != 4096) {
        goto LABEL_252;
      }
    }
    if (bswap32(*(_DWORD*)&v65[2 * v70 + 24570]) < a4) {
      v70 += 12288;
    }
    goto LABEL_230;
  }
  if (v22 == 14) {
    v42 = bswap32(*(_DWORD*)(v21 + 3));
    if (v42 != 0) {
      v43 = (unsigned __int8*)(v21 + 5);
      while (v42 != 0) {
        v44 = (*v43 << 16) | (v43[1] << 8) | v43[2];
        if (v44 == a5) {
          v45 = bswap32(*(_DWORD*)(v43 + 7));
          if ((_DWORD)v45 == 0) {
            return 0;
          }
          v46 = (unsigned __int8*)v21 + v45 + 4;
          v47 = bswap32(*(_DWORD*)((char*)v21 + v45)) + 1;
          while (1) {
            --v47;
            v43 = v46;
            if (v47 == 0) {
            LABEL_72:
              result = 0;
              goto LABEL_64;
            }
            v48 = (*v46 << 16) | (v46[1] << 8) | v46[2];
            if (v48 == a4) {
              break;
            }
            v46 += 5;
            if (v48 > a4) {
              goto LABEL_72;
            }
          }
          v43 = v46 + 3;
          result = __rev16(*(unsigned __int16*)(v46 + 3));
        }
        else {
          v43 += 11;
        }
      LABEL_64:
        --v42;
        if (v44 == a5) {
          return result;
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 nn_fontll_itype_423c00(__int64 a1, unsigned int a2)
{
  int v2;
  __int64 v5;
  unsigned int* v6;
  unsigned int v8;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int16* v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned __int16 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned __int16* v23;
  unsigned __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int16 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned __int16 v34;
  unsigned __int16 v35;
  __int64 v36;
  __int16 v37;
  unsigned int v38;
  unsigned __int16* v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  unsigned __int16* v45;
  unsigned int v46;
  unsigned int* v47;
  unsigned __int64 v48;
  unsigned int v49;
  unsigned int v50;

  if (*(_WORD*)(a1 + 64) != 3) {
    return 0xFFFF;
  }
  v2 = *(unsigned __int16*)(a1 + 66);
  if (v2 != 10 && v2 != 1) {
    return 0xFFFF;
  }
  v5 = *(_QWORD*)(a1 + 16);
  if (v5 == 0) {
    *(_DWORD*)(a1 + 72) = 305;
    return 0;
  }
  if (*(_WORD*)(v5 + 32) == 0) {
  LABEL_113:
    v10 = 0xFFFF;
    goto LABEL_114;
  }
  v6 = *(unsigned int**)(a1 + 32);
  v8 = 0;
  while (1) {
    v11 = *(_QWORD*)v6;
    v12 = *(_QWORD*)(*(_QWORD*)v6 + 56LL);
    if (v12 == 0) {
      *(_DWORD*)(a1 + 72) = 303;
      return 0xFFFF;
    }
    if (a2 <= *(unsigned __int16*)(v11 + 40)) {
      return 0xFFFF;
    }
    v13 = v6[4];
    if ((_DWORD)v13 == 0) {
      return 0xFFFF;
    }
    if (*(_QWORD*)(v12 + 56) == 0) {
      goto LABEL_21;
    }
    if ((unsigned int)fix_fnt_plt(a1, *(_QWORD*)(*(_QWORD*)v6 + 56LL)) != 0) {
      return 0xFFFF;
    }
    v14 = *(_QWORD*)(v12 + 56);
    if (v14 == 0) {
    LABEL_21:
      if ((unsigned int)load_fnt_plt(a1, v12) != 0) {
        return 0xFFFF;
      }
      v14 = *(_QWORD*)(v12 + 56);
    }
    v15 = (unsigned __int16*)(*(_QWORD*)(v14 + 80) + v13);
    v16 = *v15;
    if (v16 != 3072) {
      break;
    }
    v10 = a2 - *(unsigned __int16*)(v11 + 40);
    if (v10 == 0) {
      goto LABEL_114;
    }
    v20 = _byteswap_ulong(*((_DWORD*)v15 + 3));
    if (((*((unsigned __int8*)v15 + 12) << 24) |
         (*((unsigned __int8*)v15 + 13) << 16)) != 0) {
      if (*((_BYTE*)v15 + 12) != 0) {
        v21 = SdkData_c3c564[*((unsigned __int8*)v15 + 12)] + 24;
      }
      else {
        v21 = SdkData_c3c564[*((unsigned __int8*)v15 + 13)] + 16;
      }
    }
    else if (v20 >= 0x100) {
      v21 = SdkData_c3c564[*((unsigned __int8*)v15 + 14)] + 8;
    }
    else {
      v21 = SdkData_c3c564[v20];
    }
    if (v21 != 0) {
      v37 = 2 << (v21 - 1);
    }
    else {
      v37 = 0;
    }
    v38 = (unsigned __int16)(v37 & 0xFFFE) >> (v20 == (v37 & 0xFFFE));
    v39 = v15 + 10;
    v40 = 3 * v38;
    v41 = ~v38;
    v42 = v38 >> 1;
    v43 = 3 * (v20 + v41);
    if (bswap32(*(_DWORD*)&v15[2 * v40 + 10]) >= v10) {
      v44 = 0;
    }
    else {
      v44 = v43;
    }
    if (v42 > 255) {
      if (v42 <= 2047) {
        switch (v42) {
        case 256:
          goto LABEL_90;
        case 512:
          goto LABEL_88;
        case 1024:
          goto LABEL_86;
        default:
          break;
        }
      }
      else if (v42 >= 0x2000) {
        if (v42 == 0x2000) {
          goto LABEL_80;
        }
        if (v42 == 0x4000) {
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 98298]) < v10) {
            v44 += 49152;
          }
        LABEL_80:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 49146]) < v10) {
            v44 += 24576;
          }
        LABEL_82:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 24570]) < v10) {
            v44 += 12288;
          }
        LABEL_84:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 12282]) < v10) {
            v44 += 6144;
          }
        LABEL_86:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 6138]) < v10) {
            v44 += 3072;
          }
        LABEL_88:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 3066]) < v10) {
            v44 += 1536;
          }
        LABEL_90:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 1530]) < v10) {
            v44 += 768;
          }
        LABEL_92:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 762]) < v10) {
            v44 += 384;
          }
        LABEL_94:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 378]) < v10) {
            v44 += 192;
          }
        LABEL_96:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 186]) < v10) {
            v44 += 96;
          }
        LABEL_98:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 90]) < v10) {
            v44 += 48;
          }
        LABEL_100:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 42]) < v10) {
            v44 += 24;
          }
        LABEL_102:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 18]) < v10) {
            v44 += 12;
          }
        LABEL_104:
          if (bswap32(*(_DWORD*)&v39[2 * v44 + 6]) < v10) {
            v44 += 6;
          }
        }
      }
      else {
        if (v42 == 2048) {
          goto LABEL_84;
        }
        if (v42 == 4096) {
          goto LABEL_82;
        }
      }
    }
    else if (v42 <= 15) {
      switch (v42) {
      case 2:
        goto LABEL_104;
      case 4:
        goto LABEL_102;
      case 8:
        goto LABEL_100;
      default:
        break;
      }
    }
    else if (v42 > 63) {
      if (v42 == 64) {
        goto LABEL_94;
      }
      if (v42 == 128) {
        goto LABEL_92;
      }
    }
    else {
      if (v42 == 16) {
        goto LABEL_98;
      }
      if (v42 == 32) {
        goto LABEL_96;
      }
    }
    v45 = v15 + 8;
    v46 = 3 * v20 - 3;
    v47 = (unsigned int*)&v45[2 * v44];
    v48 = (unsigned __int64)&v45[2 * v46 + 2];
    while ((unsigned __int64)v47 < v48) {
      v49 = bswap32(v47[2]);
      if (v10 >= v49) {
        v50 = bswap32(*v47);
        if (v10 <= v49 - v50 + bswap32(v47[1])) {
          v10 = v10 - v49 + v50;
          goto LABEL_13;
        }
      }
      v47 += 3;
    }
  LABEL_14:
    ++v8;
    v6 += 6;
    if (v8 >= *(unsigned __int16*)(*(_QWORD*)(a1 + 16) + 32LL)) {
      goto LABEL_113;
    }
  }
  if (v16 != 1024) {
    goto LABEL_14;
  }
  v17 = *(unsigned __int16*)(v11 + 40);
  if (v17 == (unsigned __int16)a2) {
    v10 = 0;
    goto LABEL_13;
  }
  v18 = bswap32(v15[3]);
  if (HIWORD(v18) < 2u) {
  LABEL_27:
    v19 = -1;
    goto LABEL_28;
  }
  v22 = v18 >> 17;
  v23 = v15 + 7;
  v24 = a2 - v17;
  v25 = 0;
  v26 = 2LL * (unsigned int)v22;
  v27 = (__int64)&v23[(unsigned __int64)v26 / 2 + 1];
  v28 = v27 + v26;
  v29 = v27 + v26 + v26;
  while (2) {
    v30 = *(unsigned __int16*)(v28 + 2 * v25);
    if (*(_WORD*)(v28 + 2 * v25) != 0) {
      if (v24 >=
          (unsigned int)(unsigned __int16)((bswap32(*(
                                                unsigned __int16*)(v27 +
                                                                   2 * v25)) >>
                                            16) +
                                           (bswap32(v30) >> 16))) {
        v31 = __rev16(v30);
        if (v24 <=
            (unsigned int)(unsigned __int16)(v31 + (bswap32(v23[v25]) >> 16))) {
          v10 = (unsigned __int16)(v24 - v31);
          goto LABEL_13;
        }
      }
      goto LABEL_36;
    }
    v32 = *(unsigned __int16*)(v27 + 2 * v25);
    v33 = v23[v25];
    if (bswap32(v32) >> 16 > bswap32(v33) >> 16) {
    LABEL_36:
      if (++v25 == v22) {
        goto LABEL_27;
      }
      continue;
    }
    break;
  }
  v19 = __rev16(v32);
  v34 = __rev16(v33);
  v35 = 0;
  v36 = v29 + 2 * v25 +
        ((bswap32(*(unsigned __int16*)(v29 + 2 * v25)) >> 16) & 0xFFFE);
  while (v24 != bswap32(*(unsigned __int16*)(v36 + 2LL * v35)) >> 16) {
    ++v19;
    ++v35;
    if (v19 > (unsigned int)v34) {
      goto LABEL_36;
    }
  }
LABEL_28:
  v10 = v19;
LABEL_13:
  if (v10 == 0xFFFF) {
    goto LABEL_14;
  }
LABEL_114:
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0xFFFF;
  }
  else {
    return v10;
  }
}

__int64 nn_fontll_itype_432c00(__int64 a1, unsigned __int8* a2,
                               unsigned __int64 a3, __int64 a4)
{
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  void (*v12)(_QWORD*, __int64);
  int v14;
  int v15;
  _QWORD v16[4];
  struct {
    __int16 v17;
    char gap34_[6];
    __int64 v18;
    unsigned __int8* v19;
    __int64 v20;
    __int64 v21;
    char gap72_[4];
    int v22;
    char gap80_[10];
    unsigned __int8 v23;
    char gap91_[1];
    __int16 v24;
    char gap94_[2];
    __int64 (*v25)();
    __int64 (*v26)();
    __int64 (*v27)();
    __int64 (*v28)();
    __int64 (*v29)();
  } v17_;
  __int64 v30;

  memset_plt((__int64)&v17_.v17, 0, 0x1A0u);
  v17_.v20 = a1;
  v17_.v21 = a4;
  v17_.v22 = 0;
  v17_.v19 = nullptr;
  v16[0] = a1 + 88;
  v16[1] = a1 + 88;
  v17_.v17 = 0x4000;
  v16[2] = a1 + 88;
  v16[3] = 0x400000004000LL;
  v17_.v24 = 0x4000;
  v17_.v25 = nn_fontll_itype_432db0;
  v17_.v26 = nn_fontll_itype_432de0;
  v8 = *(unsigned __int8*)(a4 + 289);
  v17_.v27 = nn_fontll_itype_432de0;
  if (v8 == 1) {
    goto LABEL_2;
  }
  if (*(unsigned __int16*)(a4 + 34) < 2u) {
  LABEL_8:
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  if (*(_BYTE*)(a4 + 276) != 0) {
    v17_.v28 = nn_fontll_itype_432df0;
    v17_.v29 = SdkRoutine_432e00;
  }
  else {
    v14 = *(_DWORD*)(a4 + 40);
    v15 = *(_DWORD*)(a4 + 280);
    v17_.v28 = nn_fontll_itype_432e10;
    v17_.v29 = nn_fontll_itype_432e50;
    if ((int)varmul_64_plt(v14, v15, 16) <= 0x10000 ||
        (int)varmul_64_plt(*(_DWORD*)(a4 + 40), *(_DWORD*)(a4 + 284), 16) <
            65537) {
      goto LABEL_8;
    }
  }
  if (*(_BYTE*)(a4 + 288) == 0 && *(_WORD*)(a4 + 160) != 0) {
    *(_DWORD*)(a4 + 120) = ScaleFuncCall_plt(*(_DWORD*)(a4 + 272), a4 + 256,
                                             *(__int16*)(a4 + 160));
  }
LABEL_2:
  v17_.v18 = *(_QWORD*)(a4 + 8);
  v9 = setjmp_plt((__int64)&v30);
  v10 = v9;
  if (v9 == 0) {
    if ((unsigned __int64)a2 < a3) {
      v11 = SdkData_e880d8;
      do {
        v17_.v19 = a2 + 1;
        v12 = *(void (**)(_QWORD*, __int64))(v11 + 8LL * *a2);
        v17_.v23 = *a2;
        v12(v16, v10);
        a2 = v17_.v19;
      } while ((unsigned __int64)v17_.v19 < a3);
    }
    goto LABEL_8;
  }
  return (unsigned int)v10;
}

#pragma GCC visibility pop
