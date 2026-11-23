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

#pragma GCC visibility pop
