#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_df060(__int64);
__int64 CudaDriverStub_12dd30(_QWORD);
__int64 CudaDriverStub_12e470(void);
extern _UNKNOWN* CudaDriverData_1422ff8;
extern _UNKNOWN* CudaDriverData_14231f0;
extern _UNKNOWN CudaDriverData_135d880;
extern __int128 CudaDriverData_1115ef0;
extern __int64 CudaDriverData_14348c0[];
extern char CudaDriverData_1440710;
extern int CudaDriverData_1434ac0;
long double CudaDriverRoutine_1b86c0(unsigned __int64, _OWORD*);
unsigned __int64 CudaDriverRoutine_1b8800(unsigned __int64 result,
                                          unsigned __int8);
__int64 nvidia_1b7d80(unsigned int a1, __int64 a2, __int64 a3);
void nvidia_36680(__int64 a1, __int64 a2, unsigned int* a3);
__int64 nvidia_50960(__int64 a1);
__int64 nvidia_1222e0(__int64 a1, unsigned int a2);
__int64 nvidia_1c2c40(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7);
__int64 nvidia_1f4790(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7);
__int64 nvidia_218740(__int64 result, __int64 a2, __int64* a3);
__int64 nvidia_21ad30(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, unsigned int a6, __int64 a7, __int64 a8);
__int64 nvidia_23ec50(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7);

void nvidia_36680(__int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *a3;
  if ((unsigned int)v3 < a3[1] && (*(_BYTE*)(a2 + 13848) & 3) == 2) {
    v4 = *((_QWORD*)a3 + 1);
    *a3 = v3 + 1;
    *(_QWORD*)(v4 + 8 * v3) = a2;
  }
}

__int64 nvidia_50960(__int64 a1)
{
  if (a1 == 0) {
    return 400;
  }
  GameRoutine_105c00();
  return 0;
}

__int64 nvidia_1222e0(__int64 a1, unsigned int a2)
{
  __int64 v2;

  if (a2 > 6) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 232);
  *(_DWORD*)(v2 + 82088) = a2;
  return 0;
}

__int64 nvidia_1b7d80(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char* v11;
  char v12;
  unsigned __int8 v13;
  unsigned __int8 v14;
  unsigned __int64 v15;
  unsigned int v16;
  unsigned __int8 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned __int8 v22;
  unsigned __int64 v23;
  void* v24;
  void* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  int v29;
  int v30;
  unsigned __int8 v31;
  unsigned __int8 v32;
  unsigned __int8 v33;
  unsigned __int8 v34;
  unsigned __int8 v35;
  unsigned __int8 v36;
  unsigned __int8 v37;
  struct {
    char gap0_[8];
    char v38;
    char gap9_[3];
    char v39;
    char gap13_[3];
    char v40;
    char gap17_[3];
    char v41;
    char gap21_[3];
    char v42;
    char gap25_[3];
    char v43;
    char gap29_[3];
    char v44;
    char gap33_[3];
    char v45;
    char gap37_[3];
    char v46;
    char gap41_[3];
    char v47;
    char gap45_[3];
    char v48;
    char gap49_[3];
    char v49;
    char gap53_[3];
    char v50;
    char gap57_[3];
    char v51;
    char gap61_[3];
    char v52;
    char gap65_[3];
    char v53;
    char gap69_[3];
    _OWORD* v54;
    char gap80_[4];
    unsigned __int8 v55;
    char gap85_[3];
    unsigned __int8 v56;
    char gap89_[3];
    unsigned __int8 v57;
    char gap93_[3];
    unsigned __int8 v58;
    char gap97_[3];
    unsigned __int8 v59;
    char gap101_[3];
    unsigned __int8 v60;
    char gap105_[3];
    unsigned __int8 v61;
    char gap109_[3];
    unsigned __int8 v62;
    char gap113_[23];
    unsigned __int64 v63;
    union {
      unsigned __int64 v64;
      int v65;
    };
    union {
      __int64 v66;
      __int64 v67;
    };
    char v68;
    char v69;
    char v70;
    char v71;
    char v72;
    char v73;
    char v74;
    char v75;
    char v76;
    char v77;
    char v78;
    char v79;
    char v80;
    char v81;
    char v82;
    char v83;
    _QWORD v84[6];
    __int64 v85;
    __int64 v86;
    __int16 v87;
  } f_;
  unsigned __int8 v88[24];

  result = CudaDriverRoutine_df060(0);
  if ((_DWORD)result == 0) {
    if (CudaDriverData_1440710 != 0) {
      v7 = 0;
    }
    else {
      v7 = a1;
    }
    if (CudaDriverData_1440710 != 0) {
      v8 = 0;
    }
    else {
      v8 = a2;
    }
    if (v7 % 0xA >= 2) {
      f_.v66 = v8;
      v9 = 139;
      v10 = 13;
      f_.v54 = (_OWORD*)a3;
      do {
        v11 = (char*)&CudaDriverData_135d880 + v10;
        {
          v12 = v11[16];
          __asm__ volatile("" ::"r"(v12));
        }
        {
          v13 = *v11 ^ v9 ^ v12;
          __asm__ volatile("" ::"r"(v13));
        }
        {
          v14 = v11[32] ^ v11[48] ^ v12;
          __asm__ volatile("" ::"r"(v14));
        }
        v10 = v13 & 0xF;
        v9 ^= ~v14;
        *(&f_.v68 + (v13 >> 4)) = v14;
      } while ((_DWORD)v10 != 13);
      f_.v84[0] = 0;
      f_.v84[1] = 0;
      f_.v85 = 0;
      f_.v86 = 0;
      f_.v87 = 0;
      f_.v53 = f_.v68;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v68 ^ 0x36);
      f_.v52 = f_.v69;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v69 ^ 0x36);
      f_.v51 = f_.v70;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v70 ^ 0x36);
      f_.v50 = f_.v71;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v71 ^ 0x36);
      f_.v49 = f_.v72;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v72 ^ 0x36);
      f_.v48 = f_.v73;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v73 ^ 0x36);
      f_.v47 = f_.v74;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v74 ^ 0x36);
      f_.v46 = f_.v75;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v75 ^ 0x36);
      f_.v45 = f_.v76;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v76 ^ 0x36);
      f_.v44 = f_.v77;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v77 ^ 0x36);
      f_.v43 = f_.v78;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v78 ^ 0x36);
      f_.v42 = f_.v79;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v79 ^ 0x36);
      f_.v41 = f_.v80;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v80 ^ 0x36);
      f_.v40 = f_.v81;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v81 ^ 0x36);
      f_.v39 = f_.v82;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v82 ^ 0x36);
      f_.v38 = f_.v83;
      v15 = CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v83 ^ 0x36u);
      v16 = CudaDriverStub_12dd30(v15);
      v17 = v16;
      v18 = v16 >> 8;
      v19 = HIWORD(v16);
      v20 = HIBYTE(v16);
      v21 = CudaDriverStub_12e470();
      v22 = v21;
      v23 = v21 >> 8;
      f_.v63 = v21 >> 16;
      f_.v64 = v21 >> 24;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0x3Au);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0x2Fu);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v7);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(v7));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(v7));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(v7));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v17);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v18);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v19);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v20);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v22);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v23);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v63);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v64);
      v24 = CudaDriverData_1422ff8;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int8)CudaDriverData_1422ff8);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE3(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE4(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE5(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE6(v24));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(v24));
      v25 = CudaDriverData_14231f0;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int8)CudaDriverData_14231f0);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE3(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE4(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE5(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE6(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(v25));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int8)nvidia_1b7d80);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int16)nvidia_1b7d80 >> 8);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned int)nvidia_1b7d80 >> 16);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned int)nvidia_1b7d80 >> 24);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, 0);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int64)nvidia_1b7d80 >> 48);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                               (unsigned __int64)nvidia_1b7d80 >> 56);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v66);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE3(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE4(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE5(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE6(f_.v66));
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(f_.v66));
      v26 = (unsigned int)CudaDriverData_1434ac0;
      if (CudaDriverData_1434ac0 != 0) {
        v27 = CudaDriverData_14348c0;
        do {
          {
            v28 = *v27++;
            __asm__ volatile("" ::"r"(v28));
          }
          f_.v67 = v26;
          {
            v29 = *(_DWORD*)(v28 + 3184);
            __asm__ volatile("" ::"r"(v29));
          }
          {
            v30 = *(_DWORD*)(v28 + 3176);
            __asm__ volatile("" ::"r"(v30));
          }
          {
            v31 = *(_BYTE*)(v28 + 3079);
            __asm__ volatile("" ::"r"(v31));
          }
          {
            v32 = *(_BYTE*)(v28 + 3080);
            __asm__ volatile("" ::"r"(v32));
          }
          {
            v33 = *(_BYTE*)(v28 + 3081);
            __asm__ volatile("" ::"r"(v33));
          }
          {
            v34 = *(_BYTE*)(v28 + 3082);
            __asm__ volatile("" ::"r"(v34));
          }
          {
            v35 = *(_BYTE*)(v28 + 3083);
            __asm__ volatile("" ::"r"(v35));
          }
          {
            v36 = *(_BYTE*)(v28 + 3084);
            __asm__ volatile("" ::"r"(v36));
          }
          {
            v37 = *(_BYTE*)(v28 + 3085);
            __asm__ volatile("" ::"r"(v37));
          }
          {
            f_.v65 = *(_DWORD*)(v28 + 3180);
            __asm__ volatile("" ::"r"(f_.v65));
          }
          {
            f_.v55 = *(_BYTE*)(v28 + 3086);
            __asm__ volatile("" ::"r"(f_.v55));
          }
          {
            f_.v56 = *(_BYTE*)(v28 + 3087);
            __asm__ volatile("" ::"r"(f_.v56));
          }
          {
            f_.v57 = *(_BYTE*)(v28 + 3088);
            __asm__ volatile("" ::"r"(f_.v57));
          }
          {
            f_.v58 = *(_BYTE*)(v28 + 3089);
            __asm__ volatile("" ::"r"(f_.v58));
          }
          {
            f_.v59 = *(_BYTE*)(v28 + 3090);
            __asm__ volatile("" ::"r"(f_.v59));
          }
          {
            f_.v60 = *(_BYTE*)(v28 + 3091);
            __asm__ volatile("" ::"r"(f_.v60));
          }
          {
            f_.v61 = *(_BYTE*)(v28 + 3092);
            __asm__ volatile("" ::"r"(f_.v61));
          }
          {
            f_.v62 = *(_BYTE*)(v28 + 3093);
            __asm__ volatile("" ::"r"(f_.v62));
          }
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84,
                                   *(_BYTE*)(v28 + 3078));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v31);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v32);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v33);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v34);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v35);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v36);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v37);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v55);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v56);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v57);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v58);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v59);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v60);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v61);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v62);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v29);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(v29));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(v29));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(v29));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v30);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(v30));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(v30));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(v30));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v65);
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE1(f_.v65));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, BYTE2(f_.v65));
          CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, HIBYTE(f_.v65));
          v26 = f_.v67 - 1;
        } while (f_.v67 != 1);
      }
      CudaDriverRoutine_1b86c0((unsigned __int64)f_.v84, v88);
      f_.v84[0] = 0;
      f_.v84[1] = 0;
      f_.v85 = 0;
      f_.v86 = 0;
      f_.v87 = 0;
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v53 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v52 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v51 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v50 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v49 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v48 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v47 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v46 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v45 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v44 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v43 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v42 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v41 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v40 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v39 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, f_.v38 ^ 0x5C);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[0]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[1]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[2]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[3]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[4]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[5]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[6]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[7]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[8]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[9]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[10]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[11]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[12]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[13]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[14]);
      CudaDriverRoutine_1b8800((unsigned __int64)f_.v84, v88[15]);
      CudaDriverRoutine_1b86c0((unsigned __int64)f_.v84, v88);
      *f_.v54 = *(_OWORD*)v88;
      return 0;
    }
    else {
      *(_OWORD*)a3 = CudaDriverData_1115ef0;
      if (v7 % 0xA == 1) {
        *(_BYTE*)(a3 + 7) = 24;
      }
    }
  }
  return result;
}

__int64 nvidia_1c2c40(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;

  if (a2 > 1) {
    if (a2 == 2) {
      result = 4;
      v11 = (unsigned int)(a1 - 7);
      v8 = 0;
      v9 = 24064LL * a3 + 376LL * a4 + 16;
      switch (v11) {
      case 0LL:
        goto LABEL_24;
      case 1LL:
        goto LABEL_16;
      case 2LL:
        result = 4;
        v8 = 8;
        goto LABEL_24;
      case 3LL:
        result = 4;
        v8 = 12;
        goto LABEL_24;
      case 4LL:
        result = 4;
        v8 = 16;
        goto LABEL_24;
      case 5LL:
        result = 4;
        v8 = 20;
        goto LABEL_24;
      case 6LL:
        result = 4;
        v8 = 24;
        goto LABEL_24;
      case 7LL:
        result = 4;
        v8 = 28;
        goto LABEL_24;
      case 9LL:
        result = 4;
        v8 = 32;
        goto LABEL_24;
      case 10LL:
        result = 4;
        v8 = 36;
        goto LABEL_24;
      case 11LL:
        result = 4;
        v8 = 40;
        goto LABEL_24;
      case 12LL:
        result = 4;
        v8 = 44;
        goto LABEL_24;
      case 13LL:
        result = 4;
        v8 = 48;
        goto LABEL_24;
      case 14LL:
        result = 4;
        v8 = 52;
        goto LABEL_24;
      case 15LL:
        result = 4;
        v8 = 56;
        goto LABEL_24;
      case 16LL:
        result = 4;
        v8 = 60;
        goto LABEL_24;
      case 17LL:
        result = 4;
        v8 = 64;
        goto LABEL_24;
      case 18LL:
        result = 4;
        v8 = 68;
        goto LABEL_24;
      case 20LL:
        result = 4;
        v8 = 72;
        goto LABEL_24;
      case 22LL:
        result = 4;
        v8 = 76;
        goto LABEL_24;
      case 23LL:
        result = 4;
        v8 = 80;
        goto LABEL_24;
      case 25LL:
        result = 4;
        v8 = 84;
        goto LABEL_24;
      case 26LL:
        result = 4;
        v8 = 88;
        goto LABEL_24;
      case 27LL:
        result = 4;
        v8 = 92;
        goto LABEL_24;
      case 29LL:
        result = 4;
        v8 = 96;
        goto LABEL_24;
      case 30LL:
        result = 4;
        v8 = 100;
        goto LABEL_24;
      case 31LL:
        result = 4;
        v8 = 104;
        goto LABEL_24;
      case 32LL:
        result = 4;
        v8 = 108;
        goto LABEL_24;
      case 34LL:
        result = 4;
        v8 = 368;
        goto LABEL_24;
      case 39LL:
        result = 4;
        v8 = 372;
        goto LABEL_24;
      default:
        return result;
      }
    }
    else {
      if (a2 != 3) {
        goto LABEL_11;
      }
      result = 4;
      v9 = 24064LL * a3 + 376LL * a4 + 8LL * a5 + 128;
      if (a1 == 44) {
        v8 = 0;
        goto LABEL_24;
      }
      if (a1 == 45) {
      LABEL_16:
        v8 = 4;
        result = 4;
      LABEL_24:
        *a6 = v8;
        *a7 = result;
        *a6 += v9;
        return 0;
      }
    }
  }
  else {
    if (a2 != 0) {
      if (a2 == 1) {
        if (a1 != 6) {
          return 4;
        }
        v8 = 0;
        v9 = 8LL * a3 + 866320;
        goto LABEL_22;
      }
    LABEL_11:
      *a6 = 0;
      *a7 = 0;
      return 4;
    }
    result = 4;
    switch (a1) {
    case 0:
      v8 = 0;
      v9 = 0;
      goto LABEL_24;
    case 3:
      v8 = 8;
      v9 = 0;
    LABEL_22:
      result = 8;
      goto LABEL_24;
    case 1:
      v9 = 0;
      goto LABEL_16;
    default:
      break;
    }
  }
  return result;
}

__int64 nvidia_1f4790(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a2 > 1) {
    if (a2 == 2) {
      result = 4;
      v11 = (unsigned int)(a1 - 7);
      v10 = 0;
      v9 = 48640LL * a3 + 380LL * a4 + 16;
      switch (v11) {
      case 0LL:
        goto LABEL_21;
      case 1LL:
        goto LABEL_15;
      case 2LL:
        result = 4;
        v10 = 8;
        goto LABEL_21;
      case 3LL:
        result = 4;
        v10 = 12;
        goto LABEL_21;
      case 4LL:
        result = 4;
        v10 = 16;
        goto LABEL_21;
      case 5LL:
        result = 4;
        v10 = 20;
        goto LABEL_21;
      case 6LL:
        result = 4;
        v10 = 24;
        goto LABEL_21;
      case 7LL:
        result = 4;
        v10 = 28;
        goto LABEL_21;
      case 9LL:
        result = 4;
        v10 = 32;
        goto LABEL_21;
      case 10LL:
        result = 4;
        v10 = 36;
        goto LABEL_21;
      case 11LL:
        result = 4;
        v10 = 40;
        goto LABEL_21;
      case 12LL:
        result = 4;
        v10 = 44;
        goto LABEL_21;
      case 13LL:
        result = 4;
        v10 = 48;
        goto LABEL_21;
      case 14LL:
        result = 4;
        v10 = 52;
        goto LABEL_21;
      case 15LL:
        result = 4;
        v10 = 56;
        goto LABEL_21;
      case 16LL:
        result = 4;
        v10 = 60;
        goto LABEL_21;
      case 17LL:
        result = 4;
        v10 = 64;
        goto LABEL_21;
      case 18LL:
        result = 4;
        v10 = 68;
        goto LABEL_21;
      case 20LL:
        result = 4;
        v10 = 72;
        goto LABEL_21;
      case 22LL:
        result = 4;
        v10 = 76;
        goto LABEL_21;
      case 23LL:
        result = 4;
        v10 = 80;
        goto LABEL_21;
      case 25LL:
        result = 4;
        v10 = 84;
        goto LABEL_21;
      case 26LL:
        result = 4;
        v10 = 88;
        goto LABEL_21;
      case 27LL:
        result = 4;
        v10 = 92;
        goto LABEL_21;
      case 29LL:
        result = 4;
        v10 = 96;
        goto LABEL_21;
      case 30LL:
        result = 4;
        v10 = 100;
        goto LABEL_21;
      case 31LL:
        result = 4;
        v10 = 104;
        goto LABEL_21;
      case 32LL:
        result = 4;
        v10 = 108;
        goto LABEL_21;
      case 34LL:
        result = 4;
        v10 = 368;
        goto LABEL_21;
      case 39LL:
        result = 4;
        v10 = 372;
        goto LABEL_21;
      case 40LL:
        result = 1;
        v10 = 376;
        goto LABEL_21;
      case 41LL:
        result = 1;
        v10 = 377;
        goto LABEL_21;
      default:
        return result;
      }
    }
    else {
      if (a2 != 3) {
      LABEL_10:
        *a6 = 0;
        *a7 = 0;
        return 4;
      }
      result = 4;
      v9 = 48640LL * a3 + 380LL * a4 + 8LL * a5 + 128;
      if (a1 == 44) {
        v10 = 0;
        goto LABEL_21;
      }
      if (a1 == 45) {
      LABEL_15:
        v10 = 4;
        result = 4;
      LABEL_21:
        *a6 = v10;
        *a7 = result;
        *a6 += v9;
        return 0;
      }
    }
  }
  else {
    if (a2 != 0) {
      if (a2 == 1) {
        return 4;
      }
      goto LABEL_10;
    }
    result = 4;
    switch (a1) {
    case 0:
      v10 = 0;
      v9 = 0;
      goto LABEL_21;
    case 3:
      v10 = 8;
      result = 8;
      v9 = 0;
      goto LABEL_21;
    case 1:
      v9 = 0;
      goto LABEL_15;
    default:
      break;
    }
  }
  return result;
}

__int64 nvidia_218740(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;

  v3 = *a3;
  if (*a3 < (unsigned __int64)a3[1]) {
    *(_QWORD*)(a3[2] + 8 * v3) = result;
    v3 = *a3;
  }
  *a3 = v3 + 1;
  return result;
}

__int64 nvidia_21ad30(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, unsigned int a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;

  if (a2 == 0) {
    return 201;
  }
  if (a6 > 2) {
    return 1;
  }
  *a1 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64, _QWORD,
                        _QWORD, __int64, __int64, __int64))(
      *(_QWORD*)(a2 + 64) + 19216LL))(*a1, a2, a3, a4, a5, 0, 2 - a6, a8, v8,
                                      v9);
  return 0;
}

__int64 nvidia_23ec50(int a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, __int64* a6, __int64* a7)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a2 > 1) {
    if (a2 == 2) {
      result = 4;
      v11 = (unsigned int)(a1 - 7);
      v9 = 42496LL * a3 + 664LL * a4 + 16;
      v10 = 584;
      switch (v11) {
      case 0LL:
        goto LABEL_21;
      case 2LL:
        result = 4;
        v10 = 544;
        goto LABEL_21;
      case 3LL:
        result = 4;
        v10 = 548;
        goto LABEL_21;
      case 4LL:
        result = 4;
        v10 = 552;
        goto LABEL_21;
      case 5LL:
        result = 4;
        v10 = 556;
        goto LABEL_21;
      case 6LL:
        result = 4;
        v10 = 560;
        goto LABEL_21;
      case 7LL:
        result = 4;
        v10 = 564;
        goto LABEL_21;
      case 8LL:
        result = 8;
        v10 = 536;
        goto LABEL_21;
      case 10LL:
        result = 4;
        v10 = 524;
        goto LABEL_21;
      case 11LL:
        result = 4;
        v10 = 528;
        goto LABEL_21;
      case 12LL:
        result = 4;
        v10 = 532;
        goto LABEL_21;
      case 13LL:
        result = 4;
        v10 = 576;
        goto LABEL_21;
      case 14LL:
        result = 4;
        v10 = 588;
        goto LABEL_21;
      case 15LL:
        result = 4;
        v10 = 592;
        goto LABEL_21;
      case 16LL:
        result = 4;
        v10 = 596;
        goto LABEL_21;
      case 17LL:
        result = 4;
        v10 = 580;
        goto LABEL_21;
      case 18LL:
        result = 4;
        v10 = 612;
        goto LABEL_21;
      case 19LL:
        result = 8;
        v10 = 616;
        goto LABEL_21;
      case 20LL:
        result = 4;
        v10 = 608;
        goto LABEL_21;
      case 21LL:
        result = 8;
        v10 = 568;
        goto LABEL_21;
      case 24LL:
        result = 8;
        v10 = 624;
        goto LABEL_21;
      case 27LL:
        result = 4;
        v10 = 632;
        goto LABEL_21;
      case 28LL:
        result = 8;
        v10 = 600;
        goto LABEL_21;
      case 34LL:
        result = 4;
        v10 = 512;
        goto LABEL_21;
      case 35LL:
        result = 4;
        v10 = 516;
        goto LABEL_21;
      case 39LL:
        result = 4;
        v10 = 636;
        goto LABEL_21;
      case 40LL:
        result = 1;
        v10 = 660;
        goto LABEL_21;
      case 41LL:
        result = 1;
        v10 = 661;
        goto LABEL_21;
      case 42LL:
        result = 4;
        v10 = 640;
        goto LABEL_21;
      case 43LL:
        result = 4;
        v10 = 644;
        goto LABEL_21;
      case 44LL:
        result = 8;
        v10 = 648;
        goto LABEL_21;
      case 45LL:
        result = 4;
        v10 = 656;
        goto LABEL_21;
      default:
        return result;
      }
    }
    else {
      if (a2 != 3) {
      LABEL_10:
        *a6 = 0;
        *a7 = 0;
        return 4;
      }
      result = 4;
      v9 = 42496LL * a3 + 664LL * a4 + 16LL * a5 + 16;
      if (a1 == 44) {
        v10 = 0;
        goto LABEL_21;
      }
      if (a1 == 45) {
      LABEL_15:
        v10 = 4;
        result = 4;
      LABEL_21:
        *a6 = v10;
        *a7 = result;
        *a6 += v9;
        return 0;
      }
    }
  }
  else {
    if (a2 != 0) {
      if (a2 == 1) {
        return 4;
      }
      goto LABEL_10;
    }
    result = 4;
    switch (a1) {
    case 0:
      v10 = 0;
      v9 = 0;
      goto LABEL_21;
    case 3:
      v10 = 8;
      result = 8;
      v9 = 0;
      goto LABEL_21;
    case 1:
      v9 = 0;
      goto LABEL_15;
    default:
      break;
    }
  }
  return result;
}

#pragma GCC visibility pop
