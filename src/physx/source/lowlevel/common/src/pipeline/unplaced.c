#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 physx_source_lowlevel_common_src_pipeline_3b2680(__int64 result,
                                                         unsigned int a2,
                                                         unsigned int* a3,
                                                         __int64 a4);
__int64 physx_source_lowlevel_common_src_pipeline_3b28e0(__int64 result,
                                                         unsigned int a2,
                                                         __int64 a3,
                                                         __int64 a4);
__int64 physx_source_lowlevel_common_src_pipeline_3b2c80(__int64 result,
                                                         __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4);
__int64 physx_source_lowlevel_common_src_pipeline_3b2f40(__int64 result,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4);
__int64 physx_source_lowlevel_common_src_pipeline_3b3240(__int64 result,
                                                         __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4);
__int64 physx_source_lowlevel_common_src_pipeline_3b3500(__int64 result,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4);

__int64 physx_source_lowlevel_common_src_pipeline_3b2680(__int64 result,
                                                         unsigned int a2,
                                                         unsigned int* a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int16* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  _WORD* v16;
  __int16 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  __int64 v22;
  _WORD* v23;
  __int64 v24;
  _WORD* v25;
  unsigned int* v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  _WORD* v30;
  _WORD* v31;

  if (*(unsigned __int16*)(result + 96) > 1u) {
    v8 = a3[5120];
    if (v8 == 0) {
      return result;
    }
    v9 = *(__int16**)(result + 88);
    v10 = *(_QWORD*)(*(_QWORD*)(result + 80) + 80LL);
    if (v10 != 0) {
      v11 = v8 & 7;
      if (v8 >= 8) {
        v20 = 0;
        v21 = a3;
        v22 = -(__int64)(v8 & 0xFFFFFFF8);
        v23 = (_WORD*)(a4 + 2LL * a2 + 16);
        do {
          v20 -= 8;
          *(v23 - 8) = v9[*(unsigned __int16*)(v10 + 2LL * v21[13])];
          *(v23 - 6) = v9[*(unsigned __int16*)(v10 + 2LL * v21[33])];
          *(v23 - 4) = v9[*(unsigned __int16*)(v10 + 2LL * v21[53])];
          *(v23 - 2) = v9[*(unsigned __int16*)(v10 + 2LL * v21[73])];
          *v23 = v9[*(unsigned __int16*)(v10 + 2LL * v21[93])];
          v23[2] = v9[*(unsigned __int16*)(v10 + 2LL * v21[113])];
          v23[4] = v9[*(unsigned __int16*)(v10 + 2LL * v21[133])];
          v24 = v21[153];
          v21 += 160;
          v23[6] = v9[*(unsigned __int16*)(v10 + 2 * v24)];
          v23 += 16;
        } while (v22 != v20);
        v12 = -v20;
        if (v11 == 0) {
          return result;
        }
      }
      else {
        v12 = 0;
        if ((v8 & 7) == 0) {
          return result;
        }
      }
      v25 = (_WORD*)(a4 + 4 * v12 + 2LL * a2);
      v26 = &a3[20 * v12 + 13];
      do {
        v27 = *v26;
        v26 += 20;
        --v11;
        *v25 = v9[*(unsigned __int16*)(v10 + 2LL * v27)];
        v25 += 2;
      } while (v11 != 0);
      return result;
    }
    v17 = *v9;
    v18 = v8 & 7;
    if (v8 >= 8) {
      v28 = 0;
      v29 = -(__int64)(v8 & 0xFFFFFFF8);
      v30 = (_WORD*)(a4 + 2LL * a2 + 16);
      do {
        *(v30 - 8) = v17;
        *(v30 - 6) = v17;
        v28 -= 8;
        *(v30 - 4) = v17;
        *(v30 - 2) = v17;
        *v30 = v17;
        v30[2] = v17;
        v30[4] = v17;
        v30[6] = v17;
        v30 += 16;
      } while (v29 != v28);
      v19 = -v28;
      if (v18 == 0) {
        return result;
      }
    }
    else {
      v19 = 0;
      if ((v8 & 7) == 0) {
        return result;
      }
    }
    v31 = (_WORD*)(a4 + 4 * v19 + 2LL * a2);
    do {
      *v31 = v17;
      v31 += 2;
      --v18;
    } while (v18 != 0);
    return result;
  }
  v4 = a3[5120];
  if (v4 == 0) {
    return result;
  }
  v5 = *(_WORD*)(result + 34);
  v6 = v4 & 7;
  if (v4 < 8) {
    v7 = 0;
    if ((v4 & 7) == 0) {
      return result;
    }
    goto LABEL_14;
  }
  v13 = 0;
  v14 = -(__int64)(v4 & 0xFFFFFFF8);
  v15 = (_WORD*)(a4 + 2LL * a2 + 16);
  do {
    *(v15 - 8) = v5;
    *(v15 - 6) = v5;
    v13 -= 8;
    *(v15 - 4) = v5;
    *(v15 - 2) = v5;
    *v15 = v5;
    v15[2] = v5;
    v15[4] = v5;
    v15[6] = v5;
    v15 += 16;
  } while (v14 != v13);
  v7 = -v13;
  if (v6 != 0) {
  LABEL_14:
    v16 = (_WORD*)(a4 + 4 * v7 + 2LL * a2);
    do {
      *v16 = v5;
      v16 += 2;
      --v6;
    } while (v6 != 0);
  }
  return result;
}

__int64 physx_source_lowlevel_common_src_pipeline_3b28e0(__int64 result,
                                                         unsigned int a2,
                                                         __int64 a3, __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  _WORD* v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  _WORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _WORD* v33;
  unsigned int* v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;

  if (*(unsigned __int16*)(result + 80) > 1u) {
    v8 = *(_DWORD*)(a3 + 20480);
    if (v8 == 0) {
      return result;
    }
    v9 = *(_QWORD*)(result + 72);
    v10 = v8 & 3;
    v11 = *(_QWORD*)(*(_QWORD*)(result + 48) + 64LL);
    if (v8 >= 4) {
      v17 = (unsigned int*)(a3 + 212);
      v18 = 0;
      v19 = -(__int64)(v8 & 0xFFFFFFFC);
      v20 = (_WORD*)(a4 + 2LL * a2 + 8);
      do {
        v21 = *(v17 - 40);
        v18 -= 4;
        v22 = (2 * v21) & 0x1FFFFFFFCLL;
        if ((v21 & 1) != 0) {
          v23 = 3;
        }
        else {
          v23 = 2;
        }
        *(v20 - 4) = *(_WORD*)(v9 + 2LL * (*(_BYTE*)(v11 + v22 + v23) & 0x7F));
        v24 = *(v17 - 20);
        v25 = (2 * v24) & 0x1FFFFFFFCLL;
        if ((v24 & 1) != 0) {
          v26 = 3;
        }
        else {
          v26 = 2;
        }
        *(v20 - 2) = *(_WORD*)(v9 + 2LL * (*(_BYTE*)(v11 + v25 + v26) & 0x7F));
        v27 = *v17;
        v28 = (2 * v27) & 0x1FFFFFFFCLL;
        if ((v27 & 1) != 0) {
          v29 = 3;
        }
        else {
          v29 = 2;
        }
        *v20 = *(_WORD*)(v9 + 2LL * (*(_BYTE*)(v11 + v28 + v29) & 0x7F));
        v30 = v17[20];
        v17 += 80;
        v31 = (2 * v30) & 0x1FFFFFFFCLL;
        if ((v30 & 1) != 0) {
          v32 = 3;
        }
        else {
          v32 = 2;
        }
        v20[2] = *(_WORD*)(v9 + 2LL * (*(_BYTE*)(v11 + v31 + v32) & 0x7F));
        v20 += 8;
      } while (v19 != v18);
      v12 = -v18;
      if (v10 == 0) {
        return result;
      }
    }
    else {
      v12 = 0;
      if ((v8 & 3) == 0) {
        return result;
      }
    }
    v33 = (_WORD*)(a4 + 4 * v12 + 2LL * a2);
    v34 = (unsigned int*)(a3 + 80 * v12 + 52);
    do {
      v35 = *v34;
      v34 += 20;
      v36 = (2LL * v35) & 0x1FFFFFFFCLL;
      if ((v35 & 1) != 0) {
        v37 = 3;
      }
      else {
        v37 = 2;
      }
      --v10;
      *v33 = *(_WORD*)(v9 + 2LL * (*(_BYTE*)(v11 + v36 + v37) & 0x7F));
      v33 += 2;
    } while (v10 != 0);
    return result;
  }
  v4 = *(_DWORD*)(a3 + 20480);
  if (v4 == 0) {
    return result;
  }
  v5 = *(_WORD*)(result + 34);
  v6 = v4 & 7;
  if (v4 < 8) {
    v7 = 0;
    if ((v4 & 7) == 0) {
      return result;
    }
    goto LABEL_13;
  }
  v13 = 0;
  v14 = -(__int64)(v4 & 0xFFFFFFF8);
  v15 = (_WORD*)(a4 + 2LL * a2 + 16);
  do {
    *(v15 - 8) = v5;
    *(v15 - 6) = v5;
    v13 -= 8;
    *(v15 - 4) = v5;
    *(v15 - 2) = v5;
    *v15 = v5;
    v15[2] = v5;
    v15[4] = v5;
    v15[6] = v5;
    v15 += 16;
  } while (v14 != v13);
  v7 = -v13;
  if (v6 != 0) {
  LABEL_13:
    v16 = (_WORD*)(a4 + 4 * v7 + 2LL * a2);
    do {
      *v16 = v5;
      v16 += 2;
      --v6;
    } while (v6 != 0);
  }
  return result;
}

__int64 physx_source_lowlevel_common_src_pipeline_3b2c80(__int64 result,
                                                         __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int16 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int16* v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int64 v20;
  _WORD* v21;
  __int64 v22;
  __int16 v23;
  __int16 v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16* v30;
  _WORD* v31;
  __int64 v32;
  unsigned int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int* v37;
  _WORD* v38;
  unsigned int* v39;
  unsigned int v40;

  if (*(unsigned __int16*)(a2 + 96) > 1u) {
    v9 = a3[5120];
    if (v9 == 0) {
      return result;
    }
    v10 = *(__int16**)(a2 + 88);
    v11 = v9 & 7;
    v12 = *(_QWORD*)(*(_QWORD*)(a2 + 80) + 80LL);
    v13 = *(_WORD*)(result + 34);
    if (v12 != 0) {
      if (v9 >= 8) {
        v31 = (_WORD*)(a4 + 16);
        v32 = 0;
        v33 = a3;
        v34 = -(__int64)(v9 & 0xFFFFFFF8);
        do {
          v35 = v33[13];
          *(v31 - 8) = v13;
          v32 -= 8;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2 * v35)];
          *(v31 - 6) = v13;
          *(v31 - 7) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[33])];
          *(v31 - 4) = v13;
          *(v31 - 5) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[53])];
          *(v31 - 2) = v13;
          *(v31 - 3) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[73])];
          *v31 = v13;
          *(v31 - 1) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[93])];
          v31[2] = v13;
          v31[1] = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[113])];
          v31[4] = v13;
          v31[3] = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[133])];
          v31[6] = v13;
          v31[5] = v35;
          v36 = v33[153];
          v33 += 160;
          v31[7] = v10[*(unsigned __int16*)(v12 + 2 * v36)];
          v31 += 16;
        } while (v34 != v32);
        v14 = -v32;
        if (v11 == 0) {
          return result;
        }
      }
      else {
        v14 = 0;
        if (v11 == 0) {
          return result;
        }
      }
      v37 = &a3[20 * v14];
      v38 = (_WORD*)(a4 + 4 * v14 + 2);
      v39 = v37 + 13;
      do {
        v40 = *v39;
        v39 += 20;
        *(v38 - 1) = v13;
        --v11;
        *v38 = v10[*(unsigned __int16*)(v12 + 2LL * v40)];
        v38 += 2;
      } while (v11 != 0);
      return result;
    }
    v19 = 0;
    if (v9 >= 8) {
      v20 = v9 & 0xFFFFFFF8;
      v21 = (_WORD*)(a4 + 16);
      v22 = -v20;
      do {
        *(v21 - 8) = v13;
        v19 -= 8;
        v23 = *v10;
        *(v21 - 6) = v13;
        *(v21 - 7) = v23;
        v24 = *v10;
        *(v21 - 4) = v13;
        *(v21 - 5) = v24;
        v25 = *v10;
        *(v21 - 2) = v13;
        *(v21 - 3) = v25;
        v26 = *v10;
        *v21 = v13;
        *(v21 - 1) = v26;
        v27 = *v10;
        v21[2] = v13;
        v21[1] = v27;
        v28 = *v10;
        v21[4] = v13;
        v21[3] = v28;
        v29 = *v10;
        v21[6] = v13;
        v21[5] = v29;
        v21[7] = *v10;
        v21 += 16;
      } while (v22 != v19);
      v19 = -v19;
    }
    if (v11 != 0) {
      v30 = (__int16*)(a4 + 4 * v19 + 2);
      do {
        *(v30 - 1) = v13;
        --v11;
        *v30 = *v10;
        v30 += 2;
      } while (v11 != 0);
    }
  }
  else {
    v4 = a3[5120];
    if (v4 == 0) {
      return result;
    }
    v5 = *(_WORD*)(result + 34);
    v6 = *(_WORD*)(a2 + 34);
    v7 = v4 & 7;
    if (v4 < 8) {
      v8 = 0;
      if ((v4 & 7) == 0) {
        return result;
      }
      goto LABEL_14;
    }
    v15 = (_WORD*)(a4 + 16);
    v16 = 0;
    v17 = -(__int64)(v4 & 0xFFFFFFF8);
    do {
      *(v15 - 8) = v5;
      *(v15 - 7) = v6;
      v16 -= 8;
      *(v15 - 6) = v5;
      *(v15 - 5) = v6;
      *(v15 - 4) = v5;
      *(v15 - 3) = v6;
      *(v15 - 2) = v5;
      *(v15 - 1) = v6;
      *v15 = v5;
      v15[1] = v6;
      v15[2] = v5;
      v15[3] = v6;
      v15[4] = v5;
      v15[5] = v6;
      v15[6] = v5;
      v15[7] = v6;
      v15 += 16;
    } while (v17 != v16);
    v8 = -v16;
    if (v7 != 0) {
    LABEL_14:
      v18 = (_WORD*)(a4 + 4 * v8 + 2);
      do {
        *(v18 - 1) = v5;
        *v18 = v6;
        v18 += 2;
        --v7;
      } while (v7 != 0);
    }
  }
  return result;
}

__int64 physx_source_lowlevel_common_src_pipeline_3b2f40(__int64 result,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int16 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  unsigned int* v19;
  _WORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _WORD* v39;
  unsigned int* v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;

  if (*(unsigned __int16*)(a2 + 80) > 1u) {
    v9 = *(_DWORD*)(a3 + 20480);
    if (v9 == 0) {
      return result;
    }
    v10 = *(_QWORD*)(a2 + 72);
    v11 = *(_WORD*)(result + 34);
    v12 = v9 & 3;
    v13 = *(_QWORD*)(*(_QWORD*)(a2 + 48) + 64LL);
    if (v9 >= 4) {
      v19 = (unsigned int*)(a3 + 212);
      v20 = (_WORD*)(a4 + 8);
      v21 = 0;
      v22 = -(__int64)(v9 & 0xFFFFFFFC);
      do {
        v23 = *(v19 - 40);
        *(v20 - 4) = v11;
        v21 -= 4;
        v24 = (2 * v23) & 0x1FFFFFFFCLL;
        if ((v23 & 1) != 0) {
          v25 = 3;
        }
        else {
          v25 = 2;
        }
        v26 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v24 + v25) & 0x7F));
        *(v20 - 2) = v11;
        *(v20 - 3) = v26;
        v27 = *(v19 - 20);
        v28 = (2 * v27) & 0x1FFFFFFFCLL;
        if ((v27 & 1) != 0) {
          v29 = 3;
        }
        else {
          v29 = 2;
        }
        v30 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v28 + v29) & 0x7F));
        *v20 = v11;
        *(v20 - 1) = v30;
        v31 = *v19;
        v32 = (2 * v31) & 0x1FFFFFFFCLL;
        if ((v31 & 1) != 0) {
          v33 = 3;
        }
        else {
          v33 = 2;
        }
        v34 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v32 + v33) & 0x7F));
        v20[2] = v11;
        v20[1] = v34;
        v35 = v19[20];
        v19 += 80;
        v36 = (2 * v35) & 0x1FFFFFFFCLL;
        if ((v35 & 1) != 0) {
          v37 = 3;
        }
        else {
          v37 = 2;
        }
        v20[3] = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v36 + v37) & 0x7F));
        v20 += 8;
      } while (v22 != v21);
      v14 = -v21;
      if (v12 == 0) {
        return result;
      }
    }
    else {
      v14 = 0;
      if (v12 == 0) {
        return result;
      }
    }
    v38 = a3 + 80 * v14;
    v39 = (_WORD*)(a4 + 4 * v14 + 2);
    v40 = (unsigned int*)(v38 + 52);
    do {
      v41 = *v40;
      v40 += 20;
      *(v39 - 1) = v11;
      v42 = (2LL * v41) & 0x1FFFFFFFCLL;
      if ((v41 & 1) != 0) {
        v43 = 3;
      }
      else {
        v43 = 2;
      }
      --v12;
      *v39 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v42 + v43) & 0x7F));
      v39 += 2;
    } while (v12 != 0);
    return result;
  }
  v4 = *(_DWORD*)(a3 + 20480);
  if (v4 == 0) {
    return result;
  }
  v5 = *(_WORD*)(result + 34);
  v6 = *(_WORD*)(a2 + 34);
  v7 = v4 & 7;
  if (v4 < 8) {
    v8 = 0;
    if ((v4 & 7) == 0) {
      return result;
    }
    goto LABEL_13;
  }
  v15 = (_WORD*)(a4 + 16);
  v16 = 0;
  v17 = -(__int64)(v4 & 0xFFFFFFF8);
  do {
    *(v15 - 8) = v5;
    *(v15 - 7) = v6;
    v16 -= 8;
    *(v15 - 6) = v5;
    *(v15 - 5) = v6;
    *(v15 - 4) = v5;
    *(v15 - 3) = v6;
    *(v15 - 2) = v5;
    *(v15 - 1) = v6;
    *v15 = v5;
    v15[1] = v6;
    v15[2] = v5;
    v15[3] = v6;
    v15[4] = v5;
    v15[5] = v6;
    v15[6] = v5;
    v15[7] = v6;
    v15 += 16;
  } while (v17 != v16);
  v8 = -v16;
  if (v7 != 0) {
  LABEL_13:
    v18 = (_WORD*)(a4 + 4 * v8 + 2);
    do {
      *(v18 - 1) = v5;
      *v18 = v6;
      v18 += 2;
      --v7;
    } while (v7 != 0);
  }
  return result;
}

__int64 physx_source_lowlevel_common_src_pipeline_3b3240(__int64 result,
                                                         __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int16 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int16* v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int64 v20;
  _WORD* v21;
  __int64 v22;
  __int16 v23;
  __int16 v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16* v30;
  _WORD* v31;
  __int64 v32;
  unsigned int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int* v37;
  _WORD* v38;
  unsigned int* v39;
  unsigned int v40;

  if (*(unsigned __int16*)(result + 96) > 1u) {
    v9 = a3[5120];
    if (v9 == 0) {
      return result;
    }
    v10 = *(__int16**)(result + 88);
    v11 = v9 & 7;
    v12 = *(_QWORD*)(*(_QWORD*)(result + 80) + 80LL);
    v13 = *(_WORD*)(result + 34);
    if (v12 != 0) {
      if (v9 >= 8) {
        v31 = (_WORD*)(a4 + 16);
        v32 = 0;
        v33 = a3;
        v34 = -(__int64)(v9 & 0xFFFFFFF8);
        do {
          v35 = v33[13];
          *(v31 - 8) = v13;
          v32 -= 8;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2 * v35)];
          *(v31 - 6) = v13;
          *(v31 - 7) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[33])];
          *(v31 - 4) = v13;
          *(v31 - 5) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[53])];
          *(v31 - 2) = v13;
          *(v31 - 3) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[73])];
          *v31 = v13;
          *(v31 - 1) = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[93])];
          v31[2] = v13;
          v31[1] = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[113])];
          v31[4] = v13;
          v31[3] = v35;
          LOWORD(v35) = v10[*(unsigned __int16*)(v12 + 2LL * v33[133])];
          v31[6] = v13;
          v31[5] = v35;
          v36 = v33[153];
          v33 += 160;
          v31[7] = v10[*(unsigned __int16*)(v12 + 2 * v36)];
          v31 += 16;
        } while (v34 != v32);
        v14 = -v32;
        if (v11 == 0) {
          return result;
        }
      }
      else {
        v14 = 0;
        if (v11 == 0) {
          return result;
        }
      }
      v37 = &a3[20 * v14];
      v38 = (_WORD*)(a4 + 4 * v14 + 2);
      v39 = v37 + 13;
      do {
        v40 = *v39;
        v39 += 20;
        *(v38 - 1) = v13;
        --v11;
        *v38 = v10[*(unsigned __int16*)(v12 + 2LL * v40)];
        v38 += 2;
      } while (v11 != 0);
      return result;
    }
    v19 = 0;
    if (v9 >= 8) {
      v20 = v9 & 0xFFFFFFF8;
      v21 = (_WORD*)(a4 + 16);
      v22 = -v20;
      do {
        *(v21 - 8) = v13;
        v19 -= 8;
        v23 = *v10;
        *(v21 - 6) = v13;
        *(v21 - 7) = v23;
        v24 = *v10;
        *(v21 - 4) = v13;
        *(v21 - 5) = v24;
        v25 = *v10;
        *(v21 - 2) = v13;
        *(v21 - 3) = v25;
        v26 = *v10;
        *v21 = v13;
        *(v21 - 1) = v26;
        v27 = *v10;
        v21[2] = v13;
        v21[1] = v27;
        v28 = *v10;
        v21[4] = v13;
        v21[3] = v28;
        v29 = *v10;
        v21[6] = v13;
        v21[5] = v29;
        v21[7] = *v10;
        v21 += 16;
      } while (v22 != v19);
      v19 = -v19;
    }
    if (v11 != 0) {
      v30 = (__int16*)(a4 + 4 * v19 + 2);
      do {
        *(v30 - 1) = v13;
        --v11;
        *v30 = *v10;
        v30 += 2;
      } while (v11 != 0);
    }
  }
  else {
    v4 = a3[5120];
    if (v4 == 0) {
      return result;
    }
    v5 = *(_WORD*)(result + 34);
    v6 = *(_WORD*)(a2 + 34);
    v7 = v4 & 7;
    if (v4 < 8) {
      v8 = 0;
      if ((v4 & 7) == 0) {
        return result;
      }
      goto LABEL_14;
    }
    v15 = (_WORD*)(a4 + 16);
    v16 = 0;
    v17 = -(__int64)(v4 & 0xFFFFFFF8);
    do {
      *(v15 - 8) = v5;
      *(v15 - 7) = v6;
      v16 -= 8;
      *(v15 - 6) = v5;
      *(v15 - 5) = v6;
      *(v15 - 4) = v5;
      *(v15 - 3) = v6;
      *(v15 - 2) = v5;
      *(v15 - 1) = v6;
      *v15 = v5;
      v15[1] = v6;
      v15[2] = v5;
      v15[3] = v6;
      v15[4] = v5;
      v15[5] = v6;
      v15[6] = v5;
      v15[7] = v6;
      v15 += 16;
    } while (v17 != v16);
    v8 = -v16;
    if (v7 != 0) {
    LABEL_14:
      v18 = (_WORD*)(a4 + 4 * v8 + 2);
      do {
        *(v18 - 1) = v5;
        *v18 = v6;
        v18 += 2;
        --v7;
      } while (v7 != 0);
    }
  }
  return result;
}

__int64 physx_source_lowlevel_common_src_pipeline_3b3500(__int64 result,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int16 v5;
  __int16 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  unsigned int* v19;
  _WORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _WORD* v39;
  unsigned int* v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;

  if (*(unsigned __int16*)(a2 + 80) > 1u) {
    v9 = *(_DWORD*)(a3 + 20480);
    if (v9 == 0) {
      return result;
    }
    v10 = *(_QWORD*)(a2 + 72);
    v11 = *(_WORD*)(result + 34);
    v12 = v9 & 3;
    v13 = *(_QWORD*)(*(_QWORD*)(a2 + 48) + 64LL);
    if (v9 >= 4) {
      v19 = (unsigned int*)(a3 + 212);
      v20 = (_WORD*)(a4 + 8);
      v21 = 0;
      v22 = -(__int64)(v9 & 0xFFFFFFFC);
      do {
        v23 = *(v19 - 40);
        *(v20 - 4) = v11;
        v21 -= 4;
        v24 = (2 * v23) & 0x1FFFFFFFCLL;
        if ((v23 & 1) != 0) {
          v25 = 3;
        }
        else {
          v25 = 2;
        }
        v26 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v24 + v25) & 0x7F));
        *(v20 - 2) = v11;
        *(v20 - 3) = v26;
        v27 = *(v19 - 20);
        v28 = (2 * v27) & 0x1FFFFFFFCLL;
        if ((v27 & 1) != 0) {
          v29 = 3;
        }
        else {
          v29 = 2;
        }
        v30 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v28 + v29) & 0x7F));
        *v20 = v11;
        *(v20 - 1) = v30;
        v31 = *v19;
        v32 = (2 * v31) & 0x1FFFFFFFCLL;
        if ((v31 & 1) != 0) {
          v33 = 3;
        }
        else {
          v33 = 2;
        }
        v34 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v32 + v33) & 0x7F));
        v20[2] = v11;
        v20[1] = v34;
        v35 = v19[20];
        v19 += 80;
        v36 = (2 * v35) & 0x1FFFFFFFCLL;
        if ((v35 & 1) != 0) {
          v37 = 3;
        }
        else {
          v37 = 2;
        }
        v20[3] = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v36 + v37) & 0x7F));
        v20 += 8;
      } while (v22 != v21);
      v14 = -v21;
      if (v12 == 0) {
        return result;
      }
    }
    else {
      v14 = 0;
      if (v12 == 0) {
        return result;
      }
    }
    v38 = a3 + 80 * v14;
    v39 = (_WORD*)(a4 + 4 * v14 + 2);
    v40 = (unsigned int*)(v38 + 52);
    do {
      v41 = *v40;
      v40 += 20;
      *(v39 - 1) = v11;
      v42 = (2LL * v41) & 0x1FFFFFFFCLL;
      if ((v41 & 1) != 0) {
        v43 = 3;
      }
      else {
        v43 = 2;
      }
      --v12;
      *v39 = *(_WORD*)(v10 + 2LL * (*(_BYTE*)(v13 + v42 + v43) & 0x7F));
      v39 += 2;
    } while (v12 != 0);
    return result;
  }
  v4 = *(_DWORD*)(a3 + 20480);
  if (v4 == 0) {
    return result;
  }
  v5 = *(_WORD*)(result + 34);
  v6 = *(_WORD*)(a2 + 34);
  v7 = v4 & 7;
  if (v4 < 8) {
    v8 = 0;
    if ((v4 & 7) == 0) {
      return result;
    }
    goto LABEL_13;
  }
  v15 = (_WORD*)(a4 + 16);
  v16 = 0;
  v17 = -(__int64)(v4 & 0xFFFFFFF8);
  do {
    *(v15 - 8) = v5;
    *(v15 - 7) = v6;
    v16 -= 8;
    *(v15 - 6) = v5;
    *(v15 - 5) = v6;
    *(v15 - 4) = v5;
    *(v15 - 3) = v6;
    *(v15 - 2) = v5;
    *(v15 - 1) = v6;
    *v15 = v5;
    v15[1] = v6;
    v15[2] = v5;
    v15[3] = v6;
    v15[4] = v5;
    v15[5] = v6;
    v15[6] = v5;
    v15[7] = v6;
    v15 += 16;
  } while (v17 != v16);
  v8 = -v16;
  if (v7 != 0) {
  LABEL_13:
    v18 = (_WORD*)(a4 + 4 * v8 + 2);
    do {
      *(v18 - 1) = v5;
      *v18 = v6;
      v18 += 2;
      --v7;
    } while (v7 != 0);
  }
  return result;
}

#pragma GCC visibility pop
