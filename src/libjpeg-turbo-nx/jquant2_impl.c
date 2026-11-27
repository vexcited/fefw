#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fill_inverse_cmap(void);
__int64 pass2_fs_dither(__int64 result, __int64 a2, __int64 a3, int a4);
__int64 SdkHr_55f20(__int64 result, __int64 a2, __int64 a3, int a4);

__int64 SdkHr_55f20(__int64 result, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  unsigned __int64 v10;
  __int16 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  __int16 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;

  if (a4 >= 1) {
    v4 = *(_DWORD*)(result + 144);
    if (v4 != 0) {
      v5 = v4 - 1;
      v6 = 0;
      v7 = *(_QWORD*)(*(_QWORD*)(result + 656) + 48LL);
      do {
        v8 = *(unsigned __int8**)(a2 + 8 * v6);
        if ((v4 & 7) != 0) {
          v9 = v4 & 7;
          do {
            v10 = *v8;
            v11 = v8[1];
            v12 = v8[2];
            v8 += 3;
            v13 = *(_QWORD*)(v7 + 8 * (v10 >> 3)) + ((16 * v11) & 0xFC0);
            v14 = (v12 >> 2) & 0x3E;
            v15 = *(unsigned __int16*)(v13 + v14);
            if (((v15 + 1) & 0x10000) != 0) {
              result = *(unsigned __int16*)(v13 + v14);
            }
            else {
              result = (unsigned int)(v15 + 1);
            }
            --v9;
            *(_WORD*)(v13 + v14) = result;
          } while (v9 != 0);
          v16 = v4 & 0xFFFFFFF8;
          if (v5 >= 7) {
            do {
            LABEL_14:
              v17 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)*v8 >> 3)) +
                    ((16 * v8[1]) & 0xFC0);
              v18 = ((unsigned __int64)v8[2] >> 2) & 0x3E;
              v19 = *(unsigned __int16*)(v17 + v18);
              if (((v19 + 1) & 0x10000) == 0) {
                LOWORD(v19) = v19 + 1;
              }
              *(_WORD*)(v17 + v18) = v19;
              v20 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[3] >> 3)) +
                    ((16 * v8[4]) & 0xFC0);
              v21 = ((unsigned __int64)v8[5] >> 2) & 0x3E;
              v22 = *(unsigned __int16*)(v20 + v21);
              if (((v22 + 1) & 0x10000) == 0) {
                LOWORD(v22) = v22 + 1;
              }
              *(_WORD*)(v20 + v21) = v22;
              v23 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[6] >> 3)) +
                    ((16 * v8[7]) & 0xFC0);
              v24 = ((unsigned __int64)v8[8] >> 2) & 0x3E;
              v25 = *(unsigned __int16*)(v23 + v24);
              if (((v25 + 1) & 0x10000) == 0) {
                LOWORD(v25) = v25 + 1;
              }
              *(_WORD*)(v23 + v24) = v25;
              v26 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[9] >> 3)) +
                    ((16 * v8[10]) & 0xFC0);
              v27 = ((unsigned __int64)v8[11] >> 2) & 0x3E;
              v28 = *(unsigned __int16*)(v26 + v27);
              if (((v28 + 1) & 0x10000) == 0) {
                LOWORD(v28) = v28 + 1;
              }
              *(_WORD*)(v26 + v27) = v28;
              v29 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[12] >> 3)) +
                    ((16 * v8[13]) & 0xFC0);
              v30 = ((unsigned __int64)v8[14] >> 2) & 0x3E;
              v31 = *(unsigned __int16*)(v29 + v30);
              if (((v31 + 1) & 0x10000) == 0) {
                LOWORD(v31) = v31 + 1;
              }
              *(_WORD*)(v29 + v30) = v31;
              v32 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[15] >> 3)) +
                    ((16 * v8[16]) & 0xFC0);
              v33 = ((unsigned __int64)v8[17] >> 2) & 0x3E;
              v34 = *(unsigned __int16*)(v32 + v33);
              if (((v34 + 1) & 0x10000) == 0) {
                LOWORD(v34) = v34 + 1;
              }
              *(_WORD*)(v32 + v33) = v34;
              v35 = *(_QWORD*)(v7 + 8 * ((unsigned __int64)v8[18] >> 3)) +
                    ((16 * v8[19]) & 0xFC0);
              v36 = ((unsigned __int64)v8[20] >> 2) & 0x3E;
              v37 = *(unsigned __int16*)(v35 + v36);
              if (((v37 + 1) & 0x10000) == 0) {
                LOWORD(v37) = v37 + 1;
              }
              *(_WORD*)(v35 + v36) = v37;
              v38 = v8[21];
              v39 = v8[22];
              v40 = v8[23];
              v8 += 24;
              v41 = *(_QWORD*)(v7 + 8 * (v38 >> 3)) + ((16 * v39) & 0xFC0);
              v42 = (v40 >> 2) & 0x3E;
              v43 = *(unsigned __int16*)(v41 + v42);
              if (((v43 + 1) & 0x10000) != 0) {
                result = *(unsigned __int16*)(v41 + v42);
              }
              else {
                result = (unsigned int)(v43 + 1);
              }
              v16 -= 8;
              *(_WORD*)(v41 + v42) = result;
            } while (v16 != 0);
          }
        }
        else {
          v16 = v4;
          if (v5 >= 7) {
            goto LABEL_14;
          }
        }
        ++v6;
      } while (v6 != a4);
    }
  }
  return result;
}

__int64 pass2_fs_dither(__int64 result, __int64 a2, __int64 a3, int a4)
{
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  unsigned __int8* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  _WORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _WORD* v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int16 v78;
  __int16 v79;
  _BYTE* v80;
  __int64 v81;
  __int16 v82;
  __int16 v83;
  __int16 v84;
  __int16 v85;

  if (a4 >= 1) {
    v4 = *(_DWORD*)(result + 144);
    v5 = *(_QWORD*)(result + 656);
    v6 = 3 * v4;
    v7 = (unsigned int)(3 * v4 + 3);
    if (v4 != 0) {
      v8 = *(__int64**)(result + 168);
      v9 = *(_QWORD*)(v5 + 48);
      v10 = *(_QWORD*)(result + 440);
      v11 = 0;
      v12 = *(_QWORD*)(v5 + 80);
      v66 = (unsigned int)(v6 + 3);
      v67 = *(_QWORD*)(result + 656);
      v65 = *(_DWORD*)(result + 144);
      v13 = v8[2];
      v14 = *v8;
      v15 = v8[1];
      v74 = v12;
      v75 = v10;
      v62 = (unsigned int)(v6 - 3);
      v63 = (unsigned int)(v4 - 1);
      v64 = (unsigned int)a4;
      v72 = v15;
      v73 = v9;
      v71 = v13;
      do {
        v70 = v11;
        v16 = *(_QWORD*)(a2 + 8 * v11);
        v17 = *(_BYTE**)(a3 + 8 * v11);
        if (*(_DWORD*)(v5 + 72) != 0) {
          v18 = 0;
          v19 = -3;
          v20 = -1;
          v17 += v63;
          v16 += v62;
          v21 = *(_QWORD*)(v5 + 64) + 2 * v7;
        }
        else {
          v21 = *(_QWORD*)(v5 + 64);
          v18 = 1;
          v20 = 1;
          v19 = 3;
        }
        *(_DWORD*)(v5 + 72) = v18;
        v22 = (_WORD*)(v21 + 2);
        v23 = (unsigned __int8*)(v16 + 2);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        LOWORD(v27) = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        v81 = v19;
        v76 = v20;
        v77 = v19;
        do {
          v84 = v29;
          v85 = v30;
          v82 = v27;
          v83 = v28;
          v37 = &v22[v81];
          v38 =
              *(unsigned __int8*)(v10 +
                                  *(int*)(v12 +
                                          4LL * ((v24 + (__int16)v22[v81 - 1] +
                                                  8) >>
                                                 4)) +
                                  (unsigned __int64)*(v23 - 2));
          v39 = *(
              unsigned __int8*)(v10 +
                                *(int*)(v12 +
                                        4LL * ((v25 + (__int16)v22[v81] + 8) >>
                                               4)) +
                                (unsigned __int64)*(v23 - 1));
          v40 =
              *(unsigned __int8*)(v10 +
                                  *(int*)(v12 +
                                          4LL * ((v26 + (__int16)v22[v81 + 1] +
                                                  8) >>
                                                 4)) +
                                  (unsigned __int64)*v23);
          v41 = (_WORD*)(*(_QWORD*)(v9 + 8 * (v38 >> 3)) + (v39 >> 2 << 6) +
                         2 * (v40 >> 3));
          v42 = (unsigned __int16)*v41;
          if (*v41 == 0) {
            v43 = result;
            v80 = v17;
            v44 = v14;
            v78 = v32;
            v79 = v31;
            fill_inverse_cmap();
            v32 = v78;
            v31 = v79;
            v10 = v75;
            v20 = v76;
            v14 = v44;
            result = v43;
            v17 = v80;
            v12 = v74;
            v9 = v73;
            v19 = v77;
            v42 = (unsigned __int16)*v41;
            v13 = v71;
            v15 = v72;
          }
          v33 = v42 - 1LL;
          --v4;
          v23 += v19;
          *v17 = v33;
          v17 += v20;
          v34 = v38 - *(unsigned __int8*)(v14 + v33);
          v35 = *(unsigned __int8*)(v15 + v33);
          v27 = v39 - v35;
          v36 = v40 - *(unsigned __int8*)(v13 + v33);
          v29 = 5 * v34 + v32;
          *(v22 - 1) = 3 * (v38 - *(unsigned __int8*)(v14 + v33)) + v84;
          v22[1] = 3 * v36 + v31;
          *v22 = 3 * (v39 - v35) + v85;
          v30 = 5 * (v39 - v35) + v82;
          v22 = (_WORD*)((char*)v22 + v81 * 2);
          v24 = 7 * v34;
          v25 = 7 * v27;
          v28 = v36;
          v31 = 5 * v36 + v83;
          v32 = v34;
          v26 = 7 * v36;
        } while (v4 != 0);
        v7 = v66;
        v5 = v67;
        v11 = v70 + 1;
        v4 = v65;
        *(v37 - 1) = v29;
        *v37 = v30;
        v37[1] = v31;
      } while (v70 + 1 != v64);
    }
    else {
      v45 = a4 & 3;
      if ((unsigned int)a4 >= 4) {
        v46 = a4 & 0x7FFFFFFC;
        do {
          v47 = *(_DWORD*)(v5 + 72);
          if (v47 != 0) {
            v48 = (unsigned int)(3 * v4 + 3);
          }
          else {
            v48 = 0;
          }
          v49 = *(_QWORD*)(v5 + 64) + 2 * v48;
          *(_DWORD*)(v5 + 72) = v47 == 0;
          *(_DWORD*)v49 = 0;
          *(_WORD*)(v49 + 4) = 0;
          v50 = *(_QWORD*)(v5 + 64);
          if (*(_DWORD*)(v5 + 72) != 0) {
            v51 = (unsigned int)(3 * v4 + 3);
          }
          else {
            v51 = 0;
          }
          *(_DWORD*)(v5 + 72) = *(_DWORD*)(v5 + 72) == 0;
          v52 = v50 + 2 * v51;
          *(_DWORD*)v52 = 0;
          *(_WORD*)(v52 + 4) = 0;
          v53 = *(_DWORD*)(v5 + 72);
          if (v53 != 0) {
            v54 = (unsigned int)(3 * v4 + 3);
          }
          else {
            v54 = 0;
          }
          v55 = *(_QWORD*)(v5 + 64) + 2 * v54;
          *(_DWORD*)(v5 + 72) = v53 == 0;
          *(_DWORD*)v55 = 0;
          *(_WORD*)(v55 + 4) = 0;
          v56 = *(_DWORD*)(v5 + 72);
          if (v56 != 0) {
            v57 = (unsigned int)(3 * v4 + 3);
          }
          else {
            v57 = 0;
          }
          v46 -= 4;
          v58 = *(_QWORD*)(v5 + 64) + 2 * v57;
          *(_DWORD*)(v5 + 72) = v56 == 0;
          *(_DWORD*)v58 = 0;
          *(_WORD*)(v58 + 4) = 0;
        } while (v46 != 0);
      }
      if ((a4 & 3) != 0) {
        do {
          v59 = *(_DWORD*)(v5 + 72);
          if (v59 != 0) {
            v60 = (unsigned int)(3 * v4 + 3);
          }
          else {
            v60 = 0;
          }
          --v45;
          v61 = *(_QWORD*)(v5 + 64) + 2 * v60;
          *(_DWORD*)(v5 + 72) = v59 == 0;
          *(_DWORD*)v61 = 0;
          *(_WORD*)(v61 + 4) = 0;
        } while (v45 != 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
