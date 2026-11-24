#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 process_data_context_main();
__int64 process_data_crank_post();
__int64 process_data_simple_main_457c0();
__int64 jdmainct_44e80(__int64 result, int a2);

__int64 jdmainct_44e80(__int64 result, int a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;

  v2 = *(_QWORD*)(result + 584);
  if (a2 == 2) {
    *(_QWORD*)(v2 + 8) = process_data_crank_post;
  }
  else if (a2 != 0) {
    *(_DWORD*)(*(_QWORD*)result + 40LL) = 3;
    return (**(__int64 (***)(__int64))result)(result);
  }
  else if (*(_DWORD*)(*(_QWORD*)(result + 640) + 16LL) != 0) {
    *(_QWORD*)(v2 + 8) = process_data_context_main;
    if (*(int*)(result + 64) >= 1) {
      v3 = *(_DWORD*)(result + 424);
      v4 = *(_QWORD*)(result + 584);
      v5 = *(_QWORD*)(result + 312);
      v6 = 0;
      v7 = v3 + 2;
      while (1) {
        v8 = *(_QWORD*)(v4 + 16 + 8 * v6);
        v9 = (unsigned int)((signed __int32)(*(int*)(v5 + 36) *
                                             *(int*)(v5 + 12)) /
                            (signed __int32)*(_DWORD*)(result + 424));
        v10 = *(__int64**)(*(_QWORD*)(v4 + 104) + 8 * v6);
        v11 = *(_QWORD*)(*(_QWORD*)(v4 + 112) + 8 * v6);
        v12 = v9 * v7;
        if ((int)v9 * v7 < 1) {
          goto LABEL_16;
        }
        if (v12 < 8) {
          break;
        }
        v15 = v10 + 4;
        v16 = (__int64*)(v11 + 32);
        v17 = (__int64*)(v8 + 32);
        v18 = 0;
        do {
          v19 = *(v17 - 4);
          v18 -= 8;
          *(v16 - 4) = v19;
          *(v15 - 4) = v19;
          v20 = *(v17 - 3);
          *(v16 - 3) = v20;
          *(v15 - 3) = v20;
          v21 = *(v17 - 2);
          *(v16 - 2) = v21;
          *(v15 - 2) = v21;
          v22 = *(v17 - 1);
          *(v16 - 1) = v22;
          *(v15 - 1) = v22;
          v23 = *v17;
          *v16 = *v17;
          *v15 = v23;
          v24 = v17[1];
          v16[1] = v24;
          v15[1] = v24;
          v25 = v17[2];
          v16[2] = v25;
          v15[2] = v25;
          v26 = v17[3];
          v17 += 8;
          v16[3] = v26;
          v15[3] = v26;
          v15 += 8;
          v16 += 8;
        } while (-(__int64)(v12 & 0x7FFFFFF8) != v18);
        v13 = -v18;
        v14 = v12 & 7;
        if (v14 != 0) {
          goto LABEL_14;
        }
      LABEL_16:
        if ((int)v9 < 1) {
          goto LABEL_6;
        }
        v31 = (int)v9 * v3;
        v32 = (int)v9 * (v3 - 2);
        if (2 * (int)v9 <= 1) {
          v33 = 1;
        }
        else {
          v33 = 2 * v9;
        }
        if (2 * (int)v9 >= 8) {
          v36 = 0;
          v37 = (_QWORD*)(v8 + 32 + 8 * v32);
          v38 = (_QWORD*)(v11 + 32 + 8 * v32);
          v39 = (_QWORD*)(v8 + 32 + 8 * v31);
          v40 = (_QWORD*)(v11 + 32 + 8 * v31);
          do {
            v36 -= 8;
            *(v38 - 4) = *(v39 - 4);
            *(v40 - 4) = *(v37 - 4);
            *(v38 - 3) = *(v39 - 3);
            *(v40 - 3) = *(v37 - 3);
            *(v38 - 2) = *(v39 - 2);
            *(v40 - 2) = *(v37 - 2);
            *(v38 - 1) = *(v39 - 1);
            *(v40 - 1) = *(v37 - 1);
            *v38 = *v39;
            *v40 = *v37;
            v38[1] = v39[1];
            v40[1] = v37[1];
            v38[2] = v39[2];
            v40[2] = v37[2];
            v41 = v39[3];
            v39 += 8;
            v38[3] = v41;
            v38 += 8;
            v42 = v37[3];
            v37 += 8;
            v40[3] = v42;
            v40 += 8;
          } while (-(__int64)(v33 & 0xFFFFFFF8) != v36);
          v34 = -v36;
          v35 = v33 & 7;
          if (v35 == 0) {
            goto LABEL_28;
          }
        LABEL_26:
          v43 = v34 + v32;
          v44 = v34 + v31;
          do {
            --v35;
            *(_QWORD*)(v11 + 8 * v43) = *(_QWORD*)(v8 + 8 * v44);
            v45 = *(_QWORD*)(v8 + 8 * v43);
            v8 += 8;
            *(_QWORD*)(v11 + 8 * v44) = v45;
            v11 += 8;
          } while (v35 != 0);
          goto LABEL_28;
        }
        v34 = 0;
        v35 = v33 & 7;
        if (v35 != 0) {
          goto LABEL_26;
        }
      LABEL_28:
        v46 = *v10;
        if ((unsigned int)v9 >= 8) {
          v49 = 0;
          v50 = &v10[-v9 + 4];
          do {
            *(v50 - 4) = v46;
            *(v50 - 3) = v46;
            *(v50 - 2) = v46;
            *(v50 - 1) = v46;
            v49 -= 8;
            *v50 = v46;
            v50[1] = v46;
            v50[2] = v46;
            v50[3] = v46;
            v50 += 8;
          } while (-(v9 & 0x7FFFFFF8) != v49);
          v47 = -v49;
          v48 = v9 & 7;
          if ((v9 & 7) == 0) {
            goto LABEL_6;
          }
        LABEL_34:
          v51 = &v10[v47 - v9];
          do {
            *v51++ = v46;
            --v48;
          } while (v48 != 0);
          goto LABEL_6;
        }
        v47 = 0;
        v48 = v9 & 7;
        if ((v9 & 7) != 0) {
          goto LABEL_34;
        }
      LABEL_6:
        ++v6;
        v5 += 96;
        if (v6 >= *(int*)(result + 64)) {
          goto LABEL_39;
        }
      }
      v13 = 0;
      v14 = v12 & 7;
      if (v14 == 0) {
        goto LABEL_16;
      }
    LABEL_14:
      v27 = &v10[v13];
      v28 = (_QWORD*)(v11 + 8 * v13);
      v29 = (__int64*)(v8 + 8 * v13);
      do {
        v30 = *v29++;
        --v14;
        *v28++ = v30;
        *v27++ = v30;
      } while (v14 != 0);
      goto LABEL_16;
    }
  LABEL_39:
    *(_QWORD*)(v2 + 120) = 0;
    *(_DWORD*)(v2 + 132) = 0;
    *(_QWORD*)(v2 + 96) = 0;
  }
  else {
    *(_QWORD*)(v2 + 8) = process_data_simple_main_457c0;
    *(_QWORD*)(v2 + 96) = 0;
  }
  return result;
}

#pragma GCC visibility pop
