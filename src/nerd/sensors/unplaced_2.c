#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6fefc0(__int64 result, unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64, __int64,
                                  unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
    _QWORD);
unsigned __int64 nerd_sensors_6fea40_alt1(void* this_, __int64 a2, __int64 a3,
                                          unsigned __int64 a4);
__int64 memcpy_plt_alt1(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64);
__int64 nerd_gyro_pointing_6ff380_alt1(__int64 result, unsigned __int64);
__int64
nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt_alt1(
    __int64);
unsigned __int128 nerd_sensors_6fea40(void* this_);

unsigned __int128 nerd_sensors_6fea40(void* this_)
{

#pragma clang fp contract(off)
  char* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  char* v55;
  bool v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  _BYTE* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  char* v74;
  unsigned __int64 v75;
  _BYTE* v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  char* v88;
  char* v89;
  __int64 v90;
  unsigned __int64 v91;
  char* v92;
  unsigned __int64 v93;
  char* v94;
  __int64 v95;
  char v96;
  unsigned int v97;
  unsigned int v98;
  struct {
    _QWORD v101[3];
    int v102;
    int v103;
  } v101_;
  struct {
    _BYTE v104[3584];
    unsigned __int64 v105;
    __int64 v106;
    __int64 v107;
  } v104_;
  struct {
    _BYTE v108[768];
    unsigned __int64 v109;
    __int64 v110;
    __int64 v111;
  } v108_;
  double v112[24];
  unsigned __int128 result;

  v2 = (char*)this_ + 23832;
  memset_plt_alt1((__int64)&v101_.v103, 0, 0x11F4u);
  v3 = *((_QWORD*)this_ + 2979);
  v4 = *((_QWORD*)this_ + 2980);
  v5 = *((_QWORD*)this_ + 3432);
  v104_.v105 = 0;
  v104_.v106 = 0;
  v104_.v107 = 0;
  v101_.v101[0] = v3;
  v101_.v101[1] = v4;
  v101_.v101[2] = *((_QWORD*)this_ + 2981);
  LODWORD(v3) = *((_DWORD*)v2 + 6);
  v6 = v104_.v104;
  v101_.v102 = v3;
  SdkRoutine_6fefc0((__int64)v104_.v104, v5);
  v7 = *((_QWORD*)this_ + 3431);
  if (v7 == 0) {
    goto LABEL_28;
  }
  v8 = *((_QWORD*)this_ + 3433);
  v9 = *((_QWORD*)this_ + 3432);
  v10 = *((_QWORD*)this_ + 3431) & 3LL;
  if (v8 >= v7) {
    v11 = 0;
  }
  else {
    v11 = *((_QWORD*)this_ + 3432);
  }
  if (v7 < 4) {
    v12 = 0;
    if ((v7 & 3) == 0) {
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  v13 = 0;
  v12 = 0;
  v14 = (char*)this_ + 56 * v8 + 56 * v11 - 56 * v7;
  do {
    v15 = v8 - v7 + v11 + v12;
    v12 += 4;
    if (v15 >= v9) {
      v16 = v9;
    }
    else {
      v16 = 0;
    }
    v17 = &v14[v13 - 56 * v16];
    v18 = &v104_.v104[v13];
    v19 = *((_QWORD*)v17 + 2988);
    v20 = *((_QWORD*)v17 + 2984);
    v21 = *((_QWORD*)v17 + 2986);
    v18[4] = *((_QWORD*)v17 + 2987);
    v18[5] = v19;
    v22 = *((_QWORD*)v17 + 2983);
    v23 = *((_QWORD*)v17 + 2989);
    v24 = *((_QWORD*)v17 + 2985);
    *v18 = v22;
    v18[1] = v20;
    v18[2] = v24;
    v18[3] = v21;
    if (v15 + 1 >= v9) {
      v25 = v9;
    }
    else {
      v25 = 0;
    }
    v26 = &v14[v13 - 56 * v25];
    v27 = *((_QWORD*)v26 + 2990);
    v28 = *((_QWORD*)v26 + 2992);
    v18[8] = *((_QWORD*)v26 + 2991);
    v18[9] = v28;
    v29 = *((_QWORD*)v26 + 2993);
    v18[6] = v23;
    v18[7] = v27;
    v30 = *((_QWORD*)v26 + 2994);
    v31 = *((_QWORD*)v26 + 2995);
    v32 = *((_QWORD*)v26 + 2996);
    v18[12] = v31;
    v18[13] = v32;
    v33 = v15 + 2;
    v18[10] = v29;
    v18[11] = v30;
    v34 = v15 + 3;
    if (v33 >= v9) {
      v35 = v9;
    }
    else {
      v35 = 0;
    }
    v36 = v13 - 56 * v35;
    if (v34 >= v9) {
      v37 = v9;
    }
    else {
      v37 = 0;
    }
    v38 = v13 - 56 * v37;
    v13 += 224;
    v39 = &v14[v36];
    v40 = *((_QWORD*)v39 + 2998);
    v41 = *((_QWORD*)v39 + 2999);
    v42 = *((_QWORD*)v39 + 3000);
    v43 = *((_QWORD*)v39 + 3003);
    v44 = &v14[v38];
    v18[14] = *((_QWORD*)v39 + 2997);
    v18[15] = v40;
    v45 = *((_QWORD*)v39 + 3001);
    v46 = *((_QWORD*)v39 + 3002);
    v47 = *((_QWORD*)v44 + 3004);
    v18[16] = v41;
    v18[19] = v46;
    v18[20] = v43;
    v18[17] = v42;
    v18[18] = v45;
    v48 = *((_QWORD*)v44 + 3005);
    v49 = *((_QWORD*)v44 + 3006);
    v18[21] = v47;
    v50 = *((_QWORD*)v44 + 3009);
    v18[22] = v48;
    v18[23] = v49;
    v51 = *((_QWORD*)v44 + 3007);
    v52 = *((_QWORD*)v44 + 3010);
    v53 = *((_QWORD*)v44 + 3008);
    v18[26] = v50;
    v18[27] = v52;
    v18[24] = v51;
    v18[25] = v53;
  } while ((v7 & 0xFFFFFFFFFFFFFFFCLL) != v12);
  v6 = &v104_.v104[v13];
  if ((v7 & 3) != 0) {
  LABEL_23:
    v54 = v11 + v12 + v8 - v7;
    v55 = (char*)this_ + 56 * v54 + 23864;
    do {
      v56 = v54++ >= v9;
      if (v56) {
        v57 = v9;
      }
      else {
        v57 = 0;
      }
      --v10;
      v58 = &v55[-56 * v57];
      v55 += 56;
      v59 = *((_QWORD*)v58 + 5);
      v60 = *((_QWORD*)v58 + 6);
      v6[4] = *((_QWORD*)v58 + 4);
      v6[5] = v59;
      v61 = *(_QWORD*)v58;
      v62 = *((_QWORD*)v58 + 1);
      v6[6] = v60;
      *v6 = v61;
      v6[1] = v62;
      v63 = *((_QWORD*)v58 + 3);
      v6[2] = *((_QWORD*)v58 + 2);
      v6[3] = v63;
      v6 += 7;
    } while (v10 != 0);
  }
LABEL_28:
  v64 = *((_QWORD*)this_ + 3531);
  v65 = v108_.v108;
  v104_.v105 = v7;
  v108_.v109 = 0;
  v108_.v110 = 0;
  v108_.v111 = 0;
  nerd_gyro_pointing_6ff380_alt1((__int64)v108_.v108, v64);
  v66 = *((_QWORD*)this_ + 3530);
  if (v66 == 0) {
    goto LABEL_55;
  }
  v67 = *((_QWORD*)this_ + 3532);
  v68 = *((_QWORD*)this_ + 3531);
  v69 = *((_QWORD*)this_ + 3530) & 3LL;
  if (v67 >= v66) {
    v70 = 0;
  }
  else {
    v70 = *((_QWORD*)this_ + 3531);
  }
  if (v66 < 4) {
    v71 = 0;
    if ((v66 & 3) == 0) {
      goto LABEL_55;
    }
    goto LABEL_50;
  }
  v72 = v67 - v66 + v70;
  v73 = 0;
  v71 = 0;
  v74 = (char*)this_ + 12 * (v70 + v67) - 12 * v66;
  do {
    v75 = v72 + v71;
    v76 = &v108_.v108[v73];
    v71 += 4;
    if (v75 >= v68) {
      v77 = v68;
    }
    else {
      v77 = 0;
    }
    v78 = (char*)this_ + 12 * v72 + v73 + -12 * v77 + 27472;
    v79 = *(_QWORD*)v78;
    *((_DWORD*)v76 + 2) = *((_DWORD*)v78 + 2);
    *(_QWORD*)v76 = v79;
    if (v75 + 1 >= v68) {
      v80 = v68;
    }
    else {
      v80 = 0;
    }
    v81 = &v74[v73 + 27484 + -12 * v80];
    v82 = *(_QWORD*)v81;
    *((_DWORD*)v76 + 5) = *((_DWORD*)v81 + 2);
    v83 = v75 + 2;
    *(_QWORD*)(v76 + 12) = v82;
    v84 = v75 + 3;
    if (v83 >= v68) {
      v85 = v68;
    }
    else {
      v85 = 0;
    }
    v86 = v73 - 12 * v85;
    if (v84 >= v68) {
      v87 = v68;
    }
    else {
      v87 = 0;
    }
    v88 = &v74[v86];
    v89 = &v74[v73 + 27508 + -12 * v87];
    v73 += 48;
    *((_QWORD*)v76 + 3) = *((_QWORD*)v88 + 3437);
    *((_DWORD*)v76 + 8) = *((_DWORD*)v88 + 6876);
    LODWORD(v88) = *((_DWORD*)v89 + 2);
    v90 = *(_QWORD*)v89;
    *((_DWORD*)v76 + 11) = (_DWORD)v88;
    *(_QWORD*)(v76 + 36) = v90;
  } while ((v66 & 0xFFFFFFFFFFFFFFFCLL) != v71);
  v65 = &v108_.v108[v73];
  if ((v66 & 3) != 0) {
  LABEL_50:
    v91 = v70 + v71 + v67 - v66;
    v92 = (char*)this_ + 12 * v91 + 27472;
    do {
      v56 = v91++ >= v68;
      if (v56) {
        v93 = v68;
      }
      else {
        v93 = 0;
      }
      --v69;
      v94 = &v92[-12 * v93];
      v92 += 12;
      v95 = *(_QWORD*)v94;
      LODWORD(v94) = *((_DWORD*)v94 + 2);
      *(_QWORD*)v65 = v95;
      *((_DWORD*)v65 + 2) = (_DWORD)v94;
      v65 += 12;
    } while (v69 != 0);
  }
LABEL_55:
  v108_.v109 = v66;
  memcpy_plt_alt1((__int64)v112, (__int64)this_ + 28264, 0xC0u);
  v96 =
      nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt_alt1(
          (__int64)v101_.v101);
  *(float*)&v97 = v112[9];
  *(float*)&v98 = v112[10];
  *((_QWORD*)&result + 1) = v98;
  *(_QWORD*)&result = v96 & 1 | ((unsigned __int64)v97 << 32);
  return result;
}

#pragma GCC visibility pop
