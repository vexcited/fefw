#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);
unsigned __int8 CudaDriverRoutine_9aa30(__int64);
unsigned __int8 CudaDriverRoutine_9ad80(__int64);
unsigned __int8 CudaDriverRoutine_9adc0(__int64);
unsigned __int8 CudaDriverRoutine_9adf0(__int64);
__int64 nvidia_53250(__int64* a1);

__int64 nvidia_53250(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int128 v4;
  int v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int128 v16;
  __int128 v17;
  __int16 v18;
  __int128 v19;
  char v20;
  __int64 v21;
  int v22;
  __int128 v23;
  int v24;
  __int128 v25;
  int v26;
  float32x2_t v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int64 v30;
  int v31;
  unsigned int v32;
  __int128 v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  struct __attribute__((packed)) {
    __int128 v41;
    __int64 v42;
    __int128 v43;
    int v44;
    char gap44_[4];
    char v45;
    char gap49_[7];
    __int128 v46;
    char v47;
    char gap73_[7];
    char v48;
    char gap81_[7];
    __int128 v49;
    char v50;
    char gap105_[7];
    char v51;
    char gap113_[7];
    __int128 v52;
    char v53;
    char gap137_[7];
    char v54;
    char gap145_[7];
    __int128 v55;
    char v56;
    char gap169_[7];
    char v57;
    char gap177_[7];
    __int128 v58;
    char v59;
    char gap201_[7];
    char v60;
    char gap209_[7];
    __int128 v61;
    char v62;
    char gap233_[7];
    char v63;
    char gap241_[7];
    __int128 v64;
    char v65;
    char gap265_[7];
    char v66;
    char gap273_[7];
    __int64 v67;
    __int64 v68;
    char v69;
    char gap297_[7];
    __int16 v70;
    __int16 v71;
    __int128 v72;
    __int128 v73;
    int v74;
    char v75;
    char v76;
    char gap346_[6];
    __int128 v77;
    __int64 v78;
    __int64 v79;
    __int16 v80;
    int v81;
    char gap390_[2];
    char v82;
    char gap393_[7];
    __int64 v83;
    int v84;
    char gap412_[4];
    char v85;
    char gap417_[7];
    __int64 v86;
    int v87;
    char gap436_[4];
    char v88;
    char gap441_[7];
    __int128 v89;
    char v90;
    char gap465_[3];
    int v91;
    int v92;
    char gap476_[4];
    char v93;
    char gap481_[7];
    __int128 v94;
    char v95;
    char gap505_[3];
    int v96;
    int v97;
    char gap516_[44];
    __int64 v98;
    char v99;
    char gap569_[3];
    unsigned __int64 v100;
    unsigned int v101;
    int v102;
    __int128 v103;
    int v104;
    __int64 v105;
    char v106;
  } g_;

  if (a1 == nullptr) {
    return 1;
  }
  v1 = *a1;
  if (*a1 == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v1 + 64);
  memset_plt((__int64)&g_.v44, 0, 0x248u);
  v4 = *((_OWORD*)a1 + 1);
  g_.v44 = *((_DWORD*)a1 + 14);
  v5 = *((unsigned __int8*)a1 + 64);
  g_.v41 = v4;
  *(_QWORD*)&v4 = a1[4];
  g_.v45 = v5;
  g_.v42 = v4;
  g_.v43 = *(_OWORD*)(a1 + 5);
  if (v5 != 0) {
    v6 = *(_OWORD*)(a1 + 9);
    g_.v47 = *((_BYTE*)a1 + 88);
    g_.v46 = v6;
  }
  g_.v48 = *((_BYTE*)a1 + 96);
  if (g_.v48 != 0) {
    v7 = *(_OWORD*)(a1 + 13);
    g_.v50 = *((_BYTE*)a1 + 120);
    g_.v49 = v7;
  }
  g_.v51 = *((_BYTE*)a1 + 128);
  if (g_.v51 != 0) {
    v8 = *(_OWORD*)(a1 + 17);
    g_.v53 = *((_BYTE*)a1 + 152);
    g_.v52 = v8;
  }
  g_.v54 = *((_BYTE*)a1 + 160);
  if (g_.v54 != 0) {
    v9 = *(_OWORD*)(a1 + 21);
    g_.v56 = *((_BYTE*)a1 + 184);
    g_.v55 = v9;
  }
  g_.v57 = *((_BYTE*)a1 + 192);
  if (g_.v57 != 0) {
    v10 = *(_OWORD*)(a1 + 25);
    g_.v59 = *((_BYTE*)a1 + 216);
    g_.v58 = v10;
  }
  g_.v60 = *((_BYTE*)a1 + 224);
  if (g_.v60 != 0) {
    v11 = *(_OWORD*)(a1 + 29);
    g_.v62 = *((_BYTE*)a1 + 248);
    g_.v61 = v11;
  }
  g_.v63 = *((_BYTE*)a1 + 256);
  if (g_.v63 != 0) {
    v12 = *(_OWORD*)(a1 + 33);
    g_.v65 = *((_BYTE*)a1 + 280);
    g_.v64 = v12;
  }
  g_.v66 = *((_BYTE*)a1 + 288);
  if (g_.v66 != 0) {
    v13 = a1[38];
    g_.v67 = a1[37];
    g_.v68 = v13;
    g_.v69 = *((_BYTE*)a1 + 312);
  }
  v14 = *((unsigned __int16*)a1 + 160);
  v15 = *((unsigned __int16*)a1 + 161);
  if (v14 <= 2) {
    LOWORD(v14) = 2;
  }
  v16 = *(_OWORD*)((char*)a1 + 324);
  v17 = *(_OWORD*)((char*)a1 + 340);
  g_.v70 = v14;
  if (v15 <= 1) {
    v18 = 1;
  }
  else {
    v18 = v15;
  }
  g_.v71 = v18;
  g_.v72 = v16;
  g_.v73 = v17;
  v19 = *(_OWORD*)(a1 + 45);
  g_.v74 = *((_DWORD*)a1 + 89);
  v20 = *(_DWORD*)(v3 + 3160);
  g_.v77 = v19;
  g_.v75 = v20;
  g_.v76 = *(_DWORD*)(v3 + 3164);
  if (!CudaDriverRoutine_9aa30(v3)) {
    g_.v78 = a1[47];
  }
  v21 = a1[48];
  g_.v80 = *((_WORD*)a1 + 196);
  v22 = *(_DWORD*)((char*)a1 + 394);
  g_.v79 = v21;
  g_.v81 = v22;
  g_.v82 = *((_BYTE*)a1 + 400);
  if (g_.v82 != 0) {
    g_.v83 = a1[51];
    g_.v84 = a1[52] & 0x1F;
  }
  g_.v85 = *((_BYTE*)a1 + 424);
  if (g_.v85 != 0) {
    CudaDriverRoutine_9ad80(v3);
    g_.v86 = a1[54];
    g_.v87 = a1[55] & 0x1F;
  }
  g_.v88 = *((_BYTE*)a1 + 448);
  if (g_.v88 != 0) {
    v23 = *(_OWORD*)(a1 + 57);
    g_.v90 = *((_BYTE*)a1 + 472);
    v24 = *((_DWORD*)a1 + 119);
    g_.v89 = v23;
    g_.v91 = v24;
    g_.v92 = *((_DWORD*)a1 + 120);
  }
  g_.v93 = *((_BYTE*)a1 + 488);
  if (g_.v93 != 0) {
    v25 = *((_OWORD*)a1 + 31);
    g_.v95 = *((_BYTE*)a1 + 512);
    v26 = *((_DWORD*)a1 + 129);
    g_.v94 = v25;
    g_.v96 = v26;
    g_.v97 = *((_DWORD*)a1 + 130);
  }
  LANES64(v27).n64_u64[0] =
      LANES64_OF(vld1_dup_f32((const float*)(v3 + 4156))).n64_u64[0];
  v28 = *(_DWORD*)(v3 + 4152);
  g_.v98 = a1[71];
  g_.v99 = *((_BYTE*)a1 + 576);
  v29 = *((_DWORD*)a1 + 147);
  if (v29 >= v28) {
    v29 = v28;
  }
  v30 = LANES64_OF(vmax_u32(*(uint32x2_t*)((char*)a1 + 580), v27)).n64_u64[0];
  g_.v101 = v29;
  v31 = *((_DWORD*)a1 + 148);
  g_.v100 = v30;
  g_.v102 = v31 & 0x310;
  if (CudaDriverRoutine_9ad80(v3)) {
    v32 = *((_DWORD*)a1 + 152);
    v33 = *(_OWORD*)((char*)a1 + 596);
    g_.v104 = *((_DWORD*)a1 + 153);
    v34 = *((_BYTE*)a1 + 624);
    g_.v103 = v33;
    *(_QWORD*)&v33 = a1[77];
    v35 = *((_DWORD*)a1 + 155);
    g_.v106 = v34;
    g_.v105 = v33;
    if (CudaDriverRoutine_9adf0(v3)) {
      if (v35 >= 0x80) {
        v36 = 128;
      }
      else {
        v36 = v35;
      }
      if (v32 >= 0x80) {
        v37 = 128;
      }
      else {
        v37 = v32;
      }
      v35 = v36 >> 1;
      v32 = v37 >> 1;
      DWORDn(g_.v105, sizeof(g_.v105) / 4 - 1) = v36 >> 1;
      DWORDn(g_.v103, sizeof(g_.v103) / 4 - 1) = v37 >> 1;
    }
    if (CudaDriverRoutine_9adc0(v3)) {
      if (v35 >= 0x80) {
        v38 = 128;
      }
      else {
        v38 = v35;
      }
      if (v32 >= 0x80) {
        v39 = 128;
      }
      else {
        v39 = v32;
      }
      DWORDn(g_.v105, sizeof(g_.v105) / 4 - 1) = v38 >> 1;
      DWORDn(g_.v103, sizeof(g_.v103) / 4 - 1) = v39 >> 1;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)(v1 + 64) + 18696LL))(
      a1[1], (__int64)&g_.v41);
  return 0;
}

#pragma GCC visibility pop
