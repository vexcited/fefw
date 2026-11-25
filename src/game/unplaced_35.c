#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_OWORD* GameRoutine_59fb40(_OWORD* result, __int64);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__int64 DrawInfo_576aa0(__int64, __int64);
__int64 DynamicRenderingTexture_576260(char*, __int64, _DWORD*, _DWORD*, int,
                                       __int64);
__int64 GameRoutine_10f4050(__int64, unsigned __int8*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_14a1240(_QWORD*, __int64, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_1a0a7c0(PSEUDO_X8, _QWORD, _QWORD);
extern const char GameData_1ac690d[];
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5a0070(__int64 result, __int64, float, float);
__int64 GameRoutine_5fd970(__int64, __int64, __int64, _DWORD*);
__int64 GameRoutine_5fdcb0(__int64 result, int);
__int64 GameRoutine_5fdce0(__int64 result, unsigned int);
__int64 GameRoutine_6034e0(int);
__int64 GameRoutine_6035a0(int);
__int64 GameRoutine_603640(int);
__int64 GameRoutine_6037e0(__int64, __int64);
__int64 GameRoutine_603c30(int);
__int64 GameRoutine_604000(__int64, int);
__int64 GameRoutine_6068a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6068b0(__int64, unsigned int, __int64);
__int64 GameRoutine_6068c0(void);
__int64 GameRoutine_6068d0(_QWORD);
__int64 GameRoutine_651410(__int64);
__int64 GameRoutine_f2f380(__int64 result);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_ui2d_5941d0(_QWORD*, _QWORD*, __int64, unsigned int, unsigned int,
                       char);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_playAt_ff4e0(__int64, __int64, __int64, unsigned int, unsigned int,
                         int, float, float, float, float, float);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool GameRoutine_6068e0(__int64*);
bool GameRoutine_606980(_QWORD*);
bool GameRoutine_fb1e50(__int64, const char*);
bool snd_hasSound(unsigned __int8*);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
extern _UNKNOWN* GameData_21a4400;
extern _UNKNOWN* GameData_21a4420;
extern _UNKNOWN* GameData_21a4428;
extern _UNKNOWN** GameData_212c420[10];
extern _UNKNOWN** GameData_2132130[5];
extern _UNKNOWN** GameData_2136290;
extern _UNKNOWN** GameData_2136648[11];
extern _UNKNOWN** GameData_2136650[10];
extern _UNKNOWN** GameData_2136658[9];
extern _UNKNOWN** GameData_2136660[8];
extern _UNKNOWN** GameData_2136668[7];
extern _UNKNOWN** GameData_21366a8[11];
extern _UNKNOWN** GameData_21366e8[3];
extern _UNKNOWN** GameData_21366f8;
extern _UNKNOWN** GameData_21369d0[2];
extern _UNKNOWN** GameData_21369d8;
extern _UNKNOWN** GameData_2136d48[2];
extern _UNKNOWN** GameData_2136d50;
extern _UNKNOWN** GameData_2136d80;
extern _UNKNOWN** GameData_2136dc8[3];
extern _UNKNOWN** GameData_2136dd0[2];
extern _UNKNOWN** GameData_2136de8[2];
extern _UNKNOWN** GameData_2136df0;
extern _UNKNOWN** GameData_2136e08[3];
extern _UNKNOWN** GameData_2136e10[2];
extern _UNKNOWN** GameData_2136e18;
extern _UNKNOWN** GameData_2136e38;
extern _UNKNOWN** GameData_2136fd8[4];
extern _UNKNOWN** GameData_2136ff0;
extern _UNKNOWN GameData_1b13cdc;
extern _UNKNOWN GameData_2166720;
extern _UNKNOWN GameData_21a5408;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a833d0;
extern __int64 (*snd_fnd_Vec3_vtable[])();
extern __int64* snd_s_target_ptr;
extern __int64 GameData_21c6978;
extern __int64 GameData_2265eb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_s_target;
extern char GameData_1a9f09e;
extern unsigned int GameData_1b331b8[6];
float Material_588c10(float*, float*);
float snd_fnd_calcDistanceTo(float*, float*);
int GameRoutine_1a09d30(const char*, const char*);
int __cxa_guard_acquire(__int64);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void* GameRoutine_603c40();
void GameRoutine_651250(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_592160(__int64 result, _QWORD* a2, __int64 a3);
long double game_592ee0(__int64 a1, __int64 a2, int a3);
__int64 game_5fca10(__int64 a1, __int64* a2, unsigned int* a3, __int64* a4,
                    __int64 a5);
__int64 game_604160(__int64 a1, __int64* a2, __int64 a3);
__int64 game_6063a0(__int64 a1, __int64* a2, __int64 a3, __int64* a4,
                    __int64 a5, __int64 a6);
__int64 game_606510(__int64 a1, __int64 a2, unsigned __int8* a3);
__int64 game_606690(__int64 a1, __int64 a2, unsigned __int8* a3);
__int64 game_6067b0(__int64 a1, __int64 a2, unsigned __int8* a3);
void game_14a20b0(__int64* a1);

__int64 game_592160(__int64 result, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  _BYTE* v3;
  __int64 v6;
  char v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int16 v67;
  __int16 v68;
  _QWORD v69[2];
  struct {
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
  } v70_;
  struct {
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
  } v76_;

  v3 = *(_BYTE**)(result + 88);
  v6 = result;
  if (v3 == nullptr || (*(_BYTE*)(result + 552) & 4) != 0) {
    v7 = v3[8];
    v8 = (_BYTE*)(result + 152);
  }
  else {
    v7 = v3[8];
    v8 = (_BYTE*)(result + 152);
    if ((v7 & 0x20) != 0 && (*(_BYTE*)(result + 152) & 1) != 0) {
      return result;
    }
  }
  v9 = a2[39];
  v10 = a2[41];
  v11 = a2[42];
  v76_.v88 = a2[40];
  v76_.v89 = v10;
  v12 = a2[37];
  v76_.v86 = a2[38];
  v76_.v87 = v9;
  v13 = a2[35];
  v76_.v84 = a2[36];
  v76_.v85 = v12;
  v14 = a2[33];
  v76_.v82 = a2[34];
  v76_.v83 = v13;
  v15 = a2[31];
  v76_.v80 = a2[32];
  v76_.v81 = v14;
  if ((v7 & 4) != 0 && (*(_DWORD*)(result + 212) & 0x80000000) == 0) {
    v16 = *(_BYTE*)(result + 552);
    v76_.v78 = 0;
    v76_.v79 = 0;
    v76_.v76 = 0;
    v76_.v77 = 0;
    v70_.v74 = 0;
    v70_.v75 = 0;
    v70_.v72 = 0;
    v70_.v73 = 0;
    v70_.v70 = 0;
    v70_.v71 = 0;
    if ((v16 & 4) == 0 && (v3[8] & 0x20) != 0) {
      (*(void (**)(__int64, __int64))(*a2 + 32LL))((__int64)a2, a3);
      v19 = *(_QWORD*)(v6 + 144) + 64LL;
      v69[0] = 0xFF000000FFLL;
      v69[1] = 0xFF000000FFLL;
      GameRoutine_5fd970(a3, v19, (__int64)v69, nullptr);
      (*(void (**)(__int64))(**(_QWORD**)(v6 + 144) + 32LL))(
          *(_QWORD*)(v6 + 144));
      {
        __typeof__(v20) z_ = (__typeof__(v20)){0};
        LOWORD(z_) = v67;
        v20 = z_;
      }
      {
        __typeof__(v21) z_ = (__typeof__(v21)){0};
        LOWORD(z_) = v68;
        v21 = z_;
      }
      GameRoutine_5a0070((__int64)&v70_.v70, (__int64)&v76_.v76, (float)v20,
                         (float)v21);
      v22 = v70_.v72;
      v23 = v70_.v74;
      v24 = v70_.v75;
      a2[35] = v70_.v73;
      a2[36] = v23;
      v25 = v70_.v70;
      v26 = v70_.v71;
      a2[31] = v19;
      a2[32] = v25;
      a2[33] = v26;
      a2[34] = v22;
      v27 = v76_.v78;
      a2[41] = v76_.v79;
      a2[42] = 0;
      v28 = v76_.v76;
      a2[39] = v76_.v77;
      a2[40] = v27;
      v29 = *a2;
      a2[37] = v24;
      a2[38] = v28;
      (*(void (**)(__int64, __int64))(v29 + 24))((__int64)a2, a3);
      v3 = *(_BYTE**)(v6 + 88);
      v18 = 1;
    }
    else {
      v17 = (unsigned __int8)v3[15];
      v18 = 6;
      if (v17 > 2) {
        if (v17 == 3) {
          v18 = 3;
        }
        else if (v17 == 4) {
          v18 = 5;
        }
      }
      else if (v17 == 1) {
        v18 = 8;
      }
      else if (v17 == 2) {
        v18 = 7;
      }
    }
    result = nn_ui2d_5941d0((_QWORD*)v6, a2, a3, 2u, v18, (v3[8] & 8) != 0);
    v3 = *(_BYTE**)(v6 + 88);
  }
  v30 = v3[8];
  if ((v30 & 2) != 0 && (*(_DWORD*)(v6 + 208) & 0x80000000) == 0) {
    v31 = *(_BYTE*)(v6 + 552);
    v76_.v78 = 0;
    v76_.v79 = 0;
    v76_.v76 = 0;
    v76_.v77 = 0;
    v70_.v74 = 0;
    v70_.v75 = 0;
    v70_.v72 = 0;
    v70_.v73 = 0;
    v70_.v70 = 0;
    v70_.v71 = 0;
    if ((v31 & 4) == 0 && (v3[8] & 0x20) != 0) {
      (*(void (**)(__int64, __int64))(*a2 + 32LL))((__int64)a2, a3);
      v34 = *(_QWORD*)(v6 + 136) + 64LL;
      v69[0] = 0xFF000000FFLL;
      v69[1] = 0xFF000000FFLL;
      GameRoutine_5fd970(a3, v34, (__int64)v69, nullptr);
      (*(void (**)(__int64))(**(_QWORD**)(v6 + 136) + 32LL))(
          *(_QWORD*)(v6 + 136));
      {
        __typeof__(v35) z_ = (__typeof__(v35)){0};
        LOWORD(z_) = v67;
        v35 = z_;
      }
      {
        __typeof__(v36) z_ = (__typeof__(v36)){0};
        LOWORD(z_) = v68;
        v36 = z_;
      }
      GameRoutine_5a0070((__int64)&v70_.v70, (__int64)&v76_.v76, (float)v35,
                         (float)v36);
      v37 = v70_.v72;
      v38 = v70_.v74;
      v39 = v70_.v75;
      a2[35] = v70_.v73;
      a2[36] = v38;
      v40 = v70_.v70;
      v41 = v70_.v71;
      a2[31] = v34;
      a2[32] = v40;
      a2[33] = v41;
      a2[34] = v37;
      v42 = v76_.v78;
      a2[41] = v76_.v79;
      a2[42] = 0;
      v43 = v76_.v76;
      a2[39] = v76_.v77;
      a2[40] = v42;
      v44 = *a2;
      a2[37] = v39;
      a2[38] = v43;
      (*(void (**)(__int64, __int64))(v44 + 24))((__int64)a2, a3);
      v3 = *(_BYTE**)(v6 + 88);
      v33 = 1;
    }
    else {
      v32 = (unsigned __int8)v3[14];
      v33 = 6;
      if (v32 > 2) {
        if (v32 == 3) {
          v33 = 3;
        }
        else if (v32 == 4) {
          v33 = 5;
        }
      }
      else if (v32 == 1) {
        v33 = 8;
      }
      else if (v32 == 2) {
        v33 = 7;
      }
    }
    result = nn_ui2d_5941d0((_QWORD*)v6, a2, a3, 1u, v33, (v3[8] & 8) != 0);
    v3 = *(_BYTE**)(v6 + 88);
    v30 = v3[8];
  }
  if ((v30 & 1) == 0 || (*(_DWORD*)(v6 + 204) & 0x80000000) != 0) {
    goto LABEL_52;
  }
  v45 = *(_BYTE*)(v6 + 552);
  v76_.v78 = 0;
  v76_.v79 = 0;
  v76_.v76 = 0;
  v76_.v77 = 0;
  v70_.v74 = 0;
  v70_.v75 = 0;
  v70_.v72 = 0;
  v70_.v73 = 0;
  v70_.v70 = 0;
  v70_.v71 = 0;
  if ((v45 & 4) != 0) {
    goto LABEL_41;
  }
  if ((v3[8] & 0x20) != 0) {
    (*(void (**)(__int64, __int64))(*a2 + 32LL))((__int64)a2, a3);
    v48 = *(_QWORD*)(v6 + 128) + 64LL;
    v69[0] = 0xFF000000FFLL;
    v69[1] = 0xFF000000FFLL;
    GameRoutine_5fd970(a3, v48, (__int64)v69, nullptr);
    (*(void (**)(__int64))(**(_QWORD**)(v6 + 128) + 32LL))(
        *(_QWORD*)(v6 + 128));
    {
      __typeof__(v49) z_ = (__typeof__(v49)){0};
      LOWORD(z_) = v67;
      v49 = z_;
    }
    {
      __typeof__(v50) z_ = (__typeof__(v50)){0};
      LOWORD(z_) = v68;
      v50 = z_;
    }
    GameRoutine_5a0070((__int64)&v70_.v70, (__int64)&v76_.v76, (float)v49,
                       (float)v50);
    v51 = v70_.v72;
    v52 = v70_.v74;
    v53 = v70_.v75;
    a2[35] = v70_.v73;
    a2[36] = v52;
    v54 = v70_.v70;
    v55 = v70_.v71;
    a2[31] = v48;
    a2[32] = v54;
    a2[33] = v55;
    a2[34] = v51;
    v56 = v76_.v78;
    a2[41] = v76_.v79;
    a2[42] = 0;
    v57 = v76_.v76;
    a2[39] = v76_.v77;
    a2[40] = v56;
    v58 = *a2;
    a2[37] = v53;
    a2[38] = v57;
    (*(void (**)(__int64, __int64))(v58 + 24))((__int64)a2, a3);
    v3 = *(_BYTE**)(v6 + 88);
    v47 = 1;
  }
  else {
  LABEL_41:
    v46 = (unsigned __int8)v3[13];
    v47 = 6;
    if (v46 > 2) {
      if (v46 == 3) {
        v47 = 3;
      }
      else if (v46 == 4) {
        v47 = 5;
      }
    }
    else if (v46 == 1) {
      v47 = 8;
    }
    else if (v46 == 2) {
      v47 = 7;
    }
  }
  result = nn_ui2d_5941d0((_QWORD*)v6, a2, a3, 0, v47, (v3[8] & 8) != 0);
  v3 = *(_BYTE**)(v6 + 88);
  if (v3 != nullptr) {
  LABEL_52:
    if ((*(_BYTE*)(v6 + 552) & 4) == 0 && (v3[8] & 0x20) != 0) {
      (*(void (**)(__int64, __int64))(*a2 + 32LL))((__int64)a2, a3);
      GameRoutine_5fdcb0(a3, 128);
      GameRoutine_5fdce0(a3, 0x20u);
      v59 = v76_.v82;
      v60 = v76_.v83;
      *v8 = 1;
      v61 = v76_.v84;
      v62 = v76_.v85;
      a2[35] = v60;
      a2[36] = v61;
      v63 = v76_.v80;
      v64 = v76_.v81;
      a2[31] = v15;
      a2[32] = v63;
      a2[33] = v64;
      a2[34] = v59;
      v65 = v76_.v88;
      a2[41] = v76_.v89;
      a2[42] = v11;
      v66 = v76_.v86;
      a2[39] = v76_.v87;
      a2[40] = v65;
      a2[37] = v62;
      a2[38] = v66;
      DrawInfo_576aa0((__int64)a2, a3);
      return (*(__int64 (**)(__int64, __int64))(*a2 + 24LL))((__int64)a2, a3);
    }
  }
  return result;
}

long double game_592ee0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  float v6;
  __int64 v7;
  float v8;
  unsigned int v9;
  float v10;
  float v11;
  __int64 v12;
  long double* v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  float v25;
  float v26;
  float v27;
  __int128 v28;
  long double result;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  struct {
    long double v34;
    __int128 v35;
    __int128 v36;
  } v34_;
  struct {
    float v37;
    float v38;
  } v37_;
  struct {
    float v39;
    float v40;
  } v39_;

  (*(void (**)(__int64))(**(_QWORD**)(a1 + 72) + 32LL))(*(_QWORD*)(a1 + 72));
  {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LOWORD(z_) = LOWORD(v34_.v34);
    v6 = z_;
  }
  v7 = *(_QWORD*)(a1 + 72);
  v8 = (float)LODWORD(v6);
  v39_.v39 = (float)LODWORD(v6);
  (*(void (**)(__int64, float))(*(_QWORD*)v7 + 32LL))(v7, v6);
  v9 = WORD1(v34_.v34);
  *(_QWORD*)&v34_.v35 = 0;
  *(_OWORD*)&v34_.v34 = (__typeof__(*(_OWORD*)&v34_.v34)){0};
  v10 = (float)v9;
  v11 = vcvts_n_f32_u32(v9, 1u);
  v12 = *(_QWORD*)(a2 + 200);
  v39_.v40 = v10;
  v13 = (long double*)(*(_QWORD*)(v12 + 56) + a3);
  v14 = *(_QWORD*)(a1 + 8);
  v37_.v37 = v8 * -0x1.0000000000000p-1f;
  v37_.v38 = v11;
  Material_588c10((float*)&v34_.v34, (float*)(v14 + 24));
  v15 = (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 4LL) & 1) == 0;
  v16 = 7;
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 4LL) & 1) == 0) {
    v16 = 9;
  }
  v17 = 8;
  LODWORD(v13[v16]) = LODWORD(v34_.v34);
  if (v15) {
    v17 = 10;
  }
  v18 = 116;
  if (v15) {
    v18 = 148;
  }
  v19 = 120;
  if (v15) {
    v19 = 152;
  }
  v20 = 124;
  if (v15) {
    v20 = 156;
  }
  v21 = 132;
  if (v15) {
    v21 = 164;
  }
  v22 = 136;
  if (v15) {
    v22 = 168;
  }
  v23 = 140;
  *(_DWORD*)((char*)v13 + v18) = DWORD1(v34_.v34);
  *(_DWORD*)((char*)v13 + v19) = 0;
  if (v15) {
    v23 = 172;
  }
  *(_DWORD*)((char*)v13 + v20) = DWORD2(v34_.v34);
  LODWORD(v13[v17]) = DWORDn(v34_.v34, sizeof(v34_.v34) / 4 - 1);
  *(_DWORD*)((char*)v13 + v21) = v34_.v35;
  *(_DWORD*)((char*)v13 + v22) = 0;
  *(_DWORD*)((char*)v13 + v23) = DWORD1(v34_.v35);
  DynamicRenderingTexture_576260((char*)a2, (__int64)v13, &v37_.v37, &v39_.v39,
                                 1, (__int64)&GameData_1b13cdc);
  v34_.v36 = (__typeof__(v34_.v36)){0};
  v34_.v35 = (__typeof__(v34_.v35)){0};
  *(_OWORD*)&v34_.v34 = (__typeof__(*(_OWORD*)&v34_.v34)){0};
  {
    __typeof__(v24) z_ = (__typeof__(v24)){0};
    LODWORD(z_) = 0;
    v24 = z_;
  }
  DWORD2(v24) = 0;
  v25 =
      0x1.0000000000000p+0f / (float)((float)(v37_.v37 + v39_.v39) - v37_.v37);
  v26 =
      0x1.0000000000000p+0f / (float)((float)(v37_.v38 - v39_.v40) - v37_.v38);
  v27 = -(float)((float)(v37_.v37 + (float)(v37_.v37 + v39_.v39)) * v25);
  DWORD1(v28) = 0;
  DWORD2(v28) = 0;
  *(float*)&v28 = v25 + v25;
  *((float*)&v28 + 3) = v27;
  *((float*)&v24 + 1) = v26 + v26;
  *((float*)&v24 + 3) =
      -(float)((float)(v37_.v38 + (float)(v37_.v38 - v39_.v40)) * v26);
  v32 = v24;
  v33 = v28;
  GameRoutine_59fb40(&v34_.v34, a2);
  *(_OWORD*)v13 = v33;
  *((_OWORD*)v13 + 1) = v32;
  *((_OWORD*)v13 + 2) = GameData_1a833d0;
  *((_OWORD*)v13 + 3) = GameData_1a82dc0;
  result = v34_.v34;
  v30 = v34_.v35;
  v31 = v34_.v36;
  v13[4] = v34_.v34;
  *((_OWORD*)v13 + 5) = v30;
  *((_OWORD*)v13 + 6) = v31;
  return result;
}

__int64 game_5fca10(__int64 a1, __int64* a2, unsigned int* a3, __int64* a4,
                    __int64 a5)
{
  __int64 result;
  _QWORD v11[8];

  memset(v11, 0, sizeof(v11));
  (*(void (**)(__int64))GameData_2136650[0])((__int64)v11);
  (*(void (**)(__int64, __int64))GameData_2136658[0])((__int64)v11, *a2);
  (*(void (**)(__int64, __int64, __int64, __int64))GameData_2136660[0])(
      (__int64)v11, *a4, a5, *a3);
  *(_QWORD*)(a1 + 8) = a1 + 16;
  (*(void (**)(__int64, __int64))GameData_2136668[0])(a1 + 16, (__int64)v11);
  result = (*(__int64 (**)(__int64))GameData_2136648[0])(*a4);
  *(_BYTE*)(a1 + 1) =
      ((unsigned int)result >> 1) & 2 | *(_BYTE*)(a1 + 1) & 0xFC;
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 game_604160(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v7;
  __int64* v8;
  void (**v9)(__int64);
  void (**v10)(__int64, __int64, __int64);
  unsigned int v11;
  char v13;
  _QWORD* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  __int64* v42;
  unsigned __int8 (**v43)(__int64);
  __int64 v44;
  void (*v45)(__int64, __int64, __int64);
  void (**v46)(__int64);
  __int64 v47;
  char v48;
  __int64 v49;
  unsigned __int64 v50;
  char v51;
  unsigned __int64 v52;
  unsigned int v53;
  int v54;
  __int64* v55;
  __int64* v56;
  unsigned int v57;
  __int64 v58;
  __int64* v59;
  int* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  int v68;
  unsigned int v69;
  unsigned int* v70;
  __int64 v71;
  _QWORD* v72;
  char* v73;
  int v74;
  __int64 (**v75)(__int64);
  char v76;
  __int64 v77;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  void (*v98)(__int64, __int64, __int64);
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  int v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned int v105;
  __int64 v106;
  unsigned int v107;
  __int64 v108;
  _QWORD* v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  void (**v113)(__int64);
  void (**v114)(__int64);
  __int64 v115;
  unsigned int v116;
  void (*v117)(__int64);
  __int64 v118;
  struct {
    _QWORD v119[2];
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    int v125;
    int v126;
  } v119_;
  _QWORD v127[3];
  _QWORD v128[6];
  struct {
    _QWORD v129[2];
    void* v130;
    __int64 v131;
    __int64 v132;
    void* v133;
    __int64 v134;
    __int64 v135;
    void* v136;
    __int64 v137;
    __int64 v138;
    void* v139;
    __int64 v140;
    __int64 v141;
    void* v142;
    __int64 v143;
    __int64 v144;
    void* v145;
    char gap296_[36];
    int v146;
  } v129_;
  struct {
    __int64 v147;
    __int64 v148;
    __int64 v149;
  } v147_;
  struct {
    __int64 v150;
    unsigned __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
    __int64 v166;
    __int64 v167;
    __int64 v168;
    __int64 v169;
    __int64 v170;
    __int64 v171;
    _QWORD* v172;
    _QWORD* v173;
    unsigned int v174;
    char gap556_[28];
    int* v175;
    char gap592_[8];
    __int64 v176;
    char gap608_[24];
    int v177;
  } v150_;
  struct {
    _QWORD v178[8];
    char gap736_[4];
    _DWORD v179[27];
  } v178_;

  v3 = a1 + 16;
  *(_QWORD*)(a1 + 8) = a1 + 16;
  *(_BYTE*)(a1 + 1) = *(_BYTE*)a3;
  if (*(_BYTE*)(a3 + 1) != 0) {
    if (*(_BYTE*)(a3 + 1) != 2) {
      return 1;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5408,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a5408) != 0) {
      GameRoutine_2b0();
      __cxa_guard_release((__int64)&GameData_21a5408);
    }
    nn_os_LockMutex((__int64)&GameData_2166720);
    v7 = GameRoutine_603c40();
    if (!GameRoutine_606980(v7)) {
      v8 = (__int64*)GameRoutine_603c40();
      GameRoutine_6068e0(v8);
    }
    v119_.v125 = 0;
    v119_.v123 = 0;
    v119_.v124 = 0;
    v119_.v121 = 0;
    v119_.v122 = 0;
    v119_.v119[1] = 0;
    v119_.v120 = 0;
    v9 = (void (**)(__int64))GameRoutine_603c40();
    v9[5]((__int64)v9);
    v118 = 0;
    v119_.v119[0] = 0;
    v10 = (void (**)(__int64, __int64, __int64))GameData_212c420[0];
    (*(void (**)(__int64, __int64, __int64))GameData_212c420[0])(
        *a2, 47, (__int64)v119_.v119 + 4);
    (*v10)(*a2, 46, (__int64)v119_.v119);
    (*v10)(*a2, 49, (__int64)&v118 + 4);
    (*v10)(*a2, 48, (__int64)&v118);
    if ((int)v119_.v120 <
            SDWORDn(v119_.v119[0], sizeof(v119_.v119[0]) / 4 - 1) ||
        (_DWORD)v119_.v120 ==
                DWORDn(v119_.v119[0], sizeof(v119_.v119[0]) / 4 - 1) &&
            SDWORDn(v119_.v120, sizeof(v119_.v120) / 4 - 1) <
                SDWORDn(v118, sizeof(v118) / 4 - 1) ||
        (int)v119_.v120 > SLODWORD(v119_.v119[0]) ||
        (_DWORD)v119_.v120 == LODWORD(v119_.v119[0]) &&
            SDWORDn(v119_.v120, sizeof(v119_.v120) / 4 - 1) > (int)v118 ||
        (GameRoutine_1a0ba50((__int64)&v147_.v147, 0, 0x150u),
         v43 = (unsigned __int8 (**)(__int64))GameRoutine_603c40(),
         v43[2]((__int64)&v147_.v147) == 0) ||
        v150_.v177 != 1) {
    LABEL_10:
      v11 = 3;
    LABEL_11:
      nn_os_UnlockMutex((__int64)&GameData_2166720);
      return v11;
    }
    v44 = *a2;
    v45 = *v10;
    v129_.v146 = 0;
    v45(v44, 125, (__int64)&v129_.v146);
    v46 = (void (**)(__int64))GameRoutine_603c40();
    v46[7]((__int64)v46);
    v47 = GameRoutine_1a0b950((__int64)&v150_.v150, (__int64)v129_.v129, 0xB0u);
    v150_.v151 = v150_.v151 & 0xFFFFFFFFFFFE0000LL | *(_BYTE*)a3 & 1 | 0x2214;
    v48 = GameRoutine_6068d0(v47);
    v49 = 0x20000;
    if ((v48 & 1) == 0) {
      v49 = 0;
    }
    v50 = v150_.v151 & 0xFFFFFFFFFFF9FFFFLL | v49;
    v51 = *(_BYTE*)a3;
    v150_.v151 = v50;
    if ((v51 & 1) != 0) {
      if (GameRoutine_604000(a3, 6) != 0) {
        v52 = 0x8000000000000000LL;
      }
      else {
        v52 = 0;
      }
      v50 = v150_.v151;
    }
    else {
      v52 = 0;
    }
    v67 = 0;
    LODWORD(v150_.v156) = 0;
    v150_.v155 = 0;
    v150_.v161 = 0;
    v129_.v144 = 0;
    v129_.v145 = nullptr;
    v150_.v150 = 0;
    v150_.v151 = v50 & 0x7FFFFFFFFFFFFFFFLL | v52;
    LODWORD(v150_.v162) = 0;
    v129_.v142 = nullptr;
    v129_.v143 = 0;
    v129_.v140 = 0;
    v129_.v141 = 0;
    v129_.v138 = 0;
    v129_.v139 = nullptr;
    v129_.v136 = nullptr;
    v129_.v137 = 0;
    v129_.v134 = 0;
    v129_.v135 = 0;
    v129_.v132 = 0;
    v129_.v133 = nullptr;
    v129_.v130 = nullptr;
    v129_.v131 = 0;
    v129_.v129[0] = 0;
    v129_.v129[1] = 0;
    memset(v128, 0, sizeof(v128));
    memset(v127, 0, sizeof(v127));
    v119_.v126 = 0;
    v150_.v172 = v128;
    v150_.v173 = v127;
    v150_.v175 = nullptr;
    v150_.v176 = 0;
    v150_.v174 = 0;
    LODWORD(v150_.v170) = v129_.v146;
    do {
      v70 = (unsigned int*)GameRoutine_604000(a3, v67);
      if (v70 != nullptr) {
        GameRoutine_60a060((char*)&v129_.v129[3 * v150_.v174],
                           *((_QWORD*)v70 + 1), *v70);
        v71 = v150_.v174;
        v72 = &v129_.v129[3 * v150_.v174];
        if ((*(_BYTE*)v72 & 1) != 0) {
          v73 = (char*)v72[2];
        }
        else {
          v73 = (char*)v72 + 1;
        }
        v128[v150_.v174] = v73;
        if (v67 == 6) {
          v74 = *(unsigned __int8*)(a3 + 3);
          *((_DWORD*)v127 + v71) = 8;
          v119_.v126 = GameRoutine_603c30(v74);
          v150_.v175 = &v119_.v126;
          v69 = v150_.v174;
        }
        else {
          v68 = GameRoutine_603640(v67);
          v69 = v150_.v174;
          *((_DWORD*)v127 + v150_.v174) = v68;
        }
        v150_.v174 = v69 + 1;
      }
      ++v67;
    } while (v67 != 9);
    v75 = (__int64 (**)(__int64))GameRoutine_603c40();
    v76 = v75[4]((__int64)&v147_.v147);
    v77 = v147_.v147;
    if (v76 == 0 | *(_BYTE*)(*(_QWORD*)v147_.v147 + 13LL) != 0) {
      goto LABEL_117;
    }
    if (*(_BYTE*)(*(_QWORD*)v147_.v147 + 12LL) == 0) {
      goto LABEL_117;
    }
    v79 = GameRoutine_651410(400);
    *(_QWORD*)(a1 + 216) = v79;
    *(_QWORD*)(v79 + 264) = 0;
    *(_QWORD*)(v79 + 272) = 0;
    v80 = v79;
    v81 = *(_QWORD*)(v77 + 8);
    v82 = GameRoutine_651410(*(unsigned int*)(v81 + 92));
    *(_QWORD*)(v80 + 272) = v82;
    if (v82 == 0) {
      goto LABEL_117;
    }
    v83 = v82;
    GameRoutine_1a0b950(v82, v81, *(unsigned int*)(v81 + 92));
    v84 = *(_DWORD*)(v83 + 100);
    memset(&v178_.v179[1], 0, 96);
    *(_DWORD*)(v80 + 376) = 0;
    *(_QWORD*)(v80 + 384) = 0;
    if (v84 < 1) {
      v96 = 4095;
    }
    else {
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      do {
        v89 = *(_DWORD*)(v83 + v85 + 176);
        if (v89 == 3) {
          *(_QWORD*)(v80 + 392) = v83 + v85 + 168;
        }
        else if (v89 == 0) {
          v90 = *(unsigned int*)(v83 + v85 + 224);
          v91 = *(unsigned int*)(v83 + v85 + 172);
          *(_QWORD*)&v178_.v179[2 * v88 + 13] = v90;
          v92 = v83 + v91;
          v87 = (v87 + v90 + 255) & 0xFFFFFFFFFFFFFF00LL;
          *(_QWORD*)&v178_.v179[2 * v88 + 1] =
              v92 + *(unsigned int*)(v83 + v85 + 220);
          v93 = v92 + *(unsigned int*)(v83 + v85 + 216);
          v94 = 16LL * v88++;
          *(_QWORD*)(v80 + 288 + v94) = v93;
          *(_DWORD*)(v80 + 376) = v88;
          v95 = *(unsigned int*)(v83 + v85 + 232);
          v83 = *(_QWORD*)(v80 + 272);
          if (*(_QWORD*)(v80 + 384) > v95) {
            v95 = *(_QWORD*)(v80 + 384);
          }
          *(_QWORD*)(v80 + 384) = v95;
        }
        ++v86;
        v85 += 152;
      } while (v86 < *(int*)(v83 + 100));
      v96 = v87 + 4095;
    }
    v97 = *a2;
    v98 = *v10;
    v178_.v179[0] = 0;
    v98(v97, 78, (__int64)v178_.v179);
    v99 = (v96 + v178_.v179[0]) & 0xFFFFFFFFFFFFF000LL;
    v100 = GameRoutine_651410(v99 + 4096);
    *(_QWORD*)(v80 + 256) = v100;
    if (v100 != 0) {
      v101 = (v100 + 4095) & 0xFFFFFFFFFFFFF000LL;
      v102 = *(_DWORD*)(v80 + 376);
      *(_QWORD*)(v80 + 264) = v101;
      if (v102 >= 1) {
        v103 = 0;
        do {
          v104 = *(_QWORD*)&v178_.v179[2 * v103 + 13];
          GameRoutine_1a0b950(v101, *(_QWORD*)&v178_.v179[2 * v103++ + 1],
                              v104);
          v101 = (v101 + v104 + 255) & 0xFFFFFFFFFFFFFF00LL;
        } while (v103 < *(int*)(v80 + 376));
      }
      v105 = GameRoutine_6068c0();
      v106 = *a2;
      v107 = v105;
      memset(v178_.v178, 0, sizeof(v178_.v178));
      (*(void (**)(__int64, __int64))GameData_21369d0[0])((__int64)v178_.v178,
                                                          v106);
      (*(void (**)(__int64))GameData_2136e08[0])((__int64)v178_.v178);
      ((void (*)(__int64, __int64))*GameData_2136e18)((__int64)v178_.v178,
                                                      v107);
      (*(void (**)(__int64, __int64, __int64))GameData_2136e10[0])(
          (__int64)v178_.v178, *(_QWORD*)(v80 + 264), v99);
      ((void (*)(__int64, __int64))*GameData_21369d8)(v80, (__int64)v178_.v178);
      v108 = ((__int64 (*)(__int64))*GameData_2136e38)(v80);
      if (*(int*)(v80 + 376) >= 1) {
        v109 = (_QWORD*)(v80 + 280);
        v110 = 0;
        v111 = 0;
        do {
          *v109 = v111 + v108;
          v109 += 2;
          v112 = *(_QWORD*)&v178_.v179[2 * v110++ + 13];
          v111 = (v112 + v111 + 255) & 0xFFFFFFFFFFFFFF00LL;
        } while (v110 < *(int*)(v80 + 376));
      }
      v11 = 0;
    }
    else {
    LABEL_117:
      v11 = 3;
    }
    if ((v129_.v143 & 1) != 0) {
      GameRoutine_651250((__int64)v129_.v145);
      if ((v129_.v140 & 1) == 0) {
      LABEL_120:
        if ((v129_.v137 & 1) == 0) {
          goto LABEL_121;
        }
        goto LABEL_128;
      }
    }
    else if ((v129_.v140 & 1) == 0) {
      goto LABEL_120;
    }
    GameRoutine_651250((__int64)v129_.v142);
    if ((v129_.v137 & 1) == 0) {
    LABEL_121:
      if ((v129_.v134 & 1) == 0) {
        goto LABEL_122;
      }
      goto LABEL_129;
    }
  LABEL_128:
    GameRoutine_651250((__int64)v129_.v139);
    if ((v129_.v134 & 1) == 0) {
    LABEL_122:
      if ((v129_.v131 & 1) == 0) {
        goto LABEL_123;
      }
      goto LABEL_130;
    }
  LABEL_129:
    GameRoutine_651250((__int64)v129_.v136);
    if ((v129_.v131 & 1) == 0) {
    LABEL_123:
      if ((v129_.v129[0] & 1) == 0) {
        goto LABEL_124;
      }
      goto LABEL_131;
    }
  LABEL_130:
    GameRoutine_651250((__int64)v129_.v133);
    if ((v129_.v129[0] & 1) == 0) {
    LABEL_124:
      v113 = (void (**)(__int64))GameRoutine_603c40();
      v113[3]((__int64)&v147_.v147);
      if (v11 != 0) {
        goto LABEL_11;
      }
      goto LABEL_132;
    }
  LABEL_131:
    GameRoutine_651250((__int64)v129_.v130);
    v114 = (void (**)(__int64))GameRoutine_603c40();
    v114[3]((__int64)&v147_.v147);
    if (v11 != 0) {
      goto LABEL_11;
    }
  LABEL_132:
    v115 = *(_QWORD*)(a1 + 216);
    v116 = *(_DWORD*)(v115 + 376);
    if (GameRoutine_604000(a3, 6) != 0) {
      *(_QWORD*)(a1 + 8) = v3;
      *(_QWORD*)(a1 + 16) = *(_QWORD*)(v115 + 280);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)(v115 + 288);
      *(_QWORD*)(a1 + 32) = 0;
      goto LABEL_135;
    }
    v150_.v161 = 0;
    v150_.v162 = 0;
    v150_.v159 = 0;
    v150_.v160 = 0;
    v150_.v157 = 0;
    v150_.v158 = 0;
    v150_.v155 = 0;
    v150_.v156 = 0;
    v150_.v153 = 0;
    v150_.v154 = 0;
    v150_.v151 = 0;
    v150_.v152 = 0;
    v147_.v149 = 0;
    v150_.v150 = 0;
    v117 = (void (*)(__int64))*GameData_2136d48[0];
    v147_.v147 = 0;
    v147_.v148 = 0;
    v117((__int64)&v147_.v147);
    ((void (*)(__int64, __int64))*GameData_2136d50)((__int64)&v147_.v147, *a2);
    ((void (*)(__int64, __int64, __int64))*GameData_2136d80)(
        (__int64)&v147_.v147, v116, v115 + 280);
    if ((*(unsigned __int8 (**)(__int64, __int64))GameData_2136dc8[0])(
            *(_QWORD*)(a1 + 8), (__int64)&v147_.v147) == 1) {
    LABEL_135:
      nn_os_UnlockMutex((__int64)&GameData_2166720);
      if ((*(_BYTE*)a3 & 1) != 0) {
        goto LABEL_71;
      }
    LABEL_67:
      if (GameRoutine_604000(a3, 5) != 0) {
        v66 = 32;
      }
      else {
        v66 = 223;
      }
      *(_DWORD*)(a1 + 4) = v66;
      goto LABEL_71;
    }
    goto LABEL_10;
  }
  if (GameRoutine_604000(a3, 6) == 0) {
    (*(void (**)(__int64, __int64))GameData_2136dd0[0])(*(_QWORD*)(a1 + 8),
                                                        *a2);
    if ((*(_BYTE*)a3 & 2) != 0) {
      v53 = 0;
      v54 = 0;
      v150_.v173 = nullptr;
      v150_.v172 = nullptr;
      v150_.v171 = 0;
      v150_.v170 = 0;
      v150_.v168 = 0;
      v150_.v169 = 0;
      v150_.v166 = 0;
      v150_.v167 = 0;
      v150_.v164 = 0;
      v150_.v165 = 0;
      v150_.v162 = 0;
      v150_.v163 = 0;
      v150_.v160 = 0;
      v150_.v161 = 0;
      v150_.v158 = 0;
      v150_.v159 = 0;
      v150_.v156 = 0;
      v150_.v157 = 0;
      v150_.v154 = 0;
      v150_.v155 = 0;
      v150_.v152 = 0;
      v150_.v153 = 0;
      v150_.v150 = 0;
      v150_.v151 = 0;
      v147_.v148 = 0;
      v147_.v149 = 0;
      v147_.v147 = 0;
      do {
        v55 = (__int64*)GameRoutine_604000(a3, v54);
        if (v55 != nullptr) {
          v56 = &v147_.v147 + 3 * (int)v53;
          v57 = v53 + 1;
          *v56 = *v55;
          v58 = v55[1];
          v56[1] = v58;
          v56[2] = v55[6];
          v59 = (__int64*)v55[4];
          if (v59 != nullptr) {
            v60 = (int*)*v59;
            GameRoutine_1a0b950(v58, *v59, *(int*)(*v59 + 20));
            v61 = v59[1];
            if (v61 != 0) {
              GameRoutine_1a0b950(v58 + v60[5], v61, v60[6]);
            }
            v62 = v59[4];
            if (v62 != 0) {
              GameRoutine_1a0b950(v58 + v60[8], v62, v60[7]);
            }
            v63 = v59[2];
            if (v63 != 0) {
              GameRoutine_1a0b950(v58 + v60[444], v63, v60[445]);
            }
            v64 = v59[3];
            if (v64 != 0) {
              GameRoutine_1a0b950(v58 + v60[498], v64, v60[499]);
            }
            v65 = v59[5];
            if (v65 != 0) {
              GameRoutine_1a0b950(v58 + v60[506], v65, v60[507]);
            }
          }
          v53 = v57;
        }
        ++v54;
      } while (v54 != 9);
      if (((unsigned __int8 (*)(__int64, __int64, __int64))*GameData_2136df0)(
              *(_QWORD*)(a1 + 8), v53, (__int64)&v147_.v147) != 0) {
        if ((*(_BYTE*)a3 & 2) == 0) {
          goto LABEL_66;
        }
        goto LABEL_65;
      }
      return 3;
    }
    v150_.v163 = 0;
    v150_.v164 = 0;
    v150_.v161 = 0;
    v150_.v162 = 0;
    v150_.v159 = 0;
    v150_.v160 = 0;
    v150_.v157 = 0;
    v150_.v158 = 0;
    v150_.v155 = 0;
    v150_.v156 = 0;
    v150_.v153 = 0;
    v150_.v154 = 0;
    v150_.v151 = 0;
    v150_.v152 = 0;
    v147_.v149 = 0;
    v150_.v150 = 0;
    v147_.v147 = 0;
    v147_.v148 = 0;
    v16 = (__int64*)GameRoutine_604000(a3, 0);
    if (v16 != nullptr) {
      v17 = v16[1];
      v18 = 1;
      v147_.v147 = *v16;
      v147_.v148 = v17;
      v19 = (__int64*)GameRoutine_604000(a3, 1);
      if (v19 == nullptr) {
        goto LABEL_22;
      }
    }
    else {
      v18 = 0;
      v19 = (__int64*)GameRoutine_604000(a3, 1);
      if (v19 == nullptr) {
      LABEL_22:
        v22 = (__int64*)GameRoutine_604000(a3, 2);
        if (v22 != nullptr) {
          v23 = v22[1];
          v24 = &v147_.v147 + 2 * v18++;
          *v24 = *v22;
          v24[1] = v23;
        }
        v25 = (__int64*)GameRoutine_604000(a3, 3);
        if (v25 != nullptr) {
          v26 = v25[1];
          v27 = &v147_.v147 + 2 * v18++;
          *v27 = *v25;
          v27[1] = v26;
        }
        v28 = (__int64*)GameRoutine_604000(a3, 4);
        if (v28 != nullptr) {
          v29 = v28[1];
          v30 = &v147_.v147 + 2 * v18++;
          *v30 = *v28;
          v30[1] = v29;
        }
        v31 = (__int64*)GameRoutine_604000(a3, 5);
        if (v31 != nullptr) {
          v32 = v31[1];
          v33 = &v147_.v147 + 2 * v18++;
          *v33 = *v31;
          v33[1] = v32;
        }
        v34 = (__int64*)GameRoutine_604000(a3, 6);
        if (v34 != nullptr) {
          v35 = v34[1];
          v36 = &v147_.v147 + 2 * v18++;
          *v36 = *v34;
          v36[1] = v35;
        }
        v37 = (__int64*)GameRoutine_604000(a3, 7);
        if (v37 != nullptr) {
          v38 = v37[1];
          v39 = &v147_.v147 + 2 * v18++;
          *v39 = *v37;
          v39[1] = v38;
        }
        v40 = (__int64*)GameRoutine_604000(a3, 8);
        if (v40 != nullptr) {
          v41 = v40[1];
          v42 = &v147_.v147 + 2 * v18++;
          *v42 = *v40;
          v42[1] = v41;
        }
        if ((*(unsigned __int8 (**)(__int64, __int64,
                                    __int64))GameData_2136de8[0])(
                *(_QWORD*)(a1 + 8), v18, (__int64)&v147_.v147) != 0) {
        LABEL_66:
          if ((*(_BYTE*)a3 & 1) == 0) {
            goto LABEL_67;
          }
          goto LABEL_71;
        }
        return 3;
      }
    }
    v20 = v19[1];
    v21 = &v147_.v147 + 2 * v18++;
    *v21 = *v19;
    v21[1] = v20;
    goto LABEL_22;
  }
  *(_QWORD*)(a1 + 8) = 0;
  v13 = *(_BYTE*)a3;
  v14 = (_QWORD*)GameRoutine_604000(a3, 6);
  if ((v13 & 2) != 0) {
    if (v14 != nullptr) {
      *(_QWORD*)(a1 + 8) = v3;
      *(_QWORD*)(a1 + 16) = *v14;
      *(_QWORD*)(a1 + 24) = v14[1];
      *(_QWORD*)(a1 + 32) = v14[6];
    }
  LABEL_65:
    *(_QWORD*)(a1 + 208) = *(_QWORD*)(a3 + 120);
    goto LABEL_66;
  }
  if (v14 == nullptr) {
    goto LABEL_66;
  }
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 16) = *v14;
  v15 = v14[1];
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = v15;
  *(_QWORD*)(a1 + 32) = 0;
  if ((*(_BYTE*)a3 & 1) == 0) {
    goto LABEL_67;
  }
LABEL_71:
  if (GameRoutine_604000(a3, 6) != 0) {
    *(_DWORD*)(a1 + 4) = 256;
  }
  *(_BYTE*)(a1 + 1) &= ~4u;
  *(_BYTE*)a1 = 1;
  return 0;
}

__int64 game_6063a0(__int64 a1, __int64* a2, __int64 a3, __int64* a4,
                    __int64 a5, __int64 a6)
{
  __int64 v6;
  void (*v12)(__int64, __int64);
  __int64 result;
  _QWORD v14[16];

  v6 = *a2;
  v12 = (void (*)(__int64, __int64))*GameData_21366a8[0];
  memset(v14, 0, sizeof(v14));
  v12((__int64)v14, v6);
  GameRoutine_6037e0((__int64)v14, a3);
  (*(void (**)(__int64, __int64, __int64))GameData_21366e8[0])((__int64)v14,
                                                               *a4, a5);
  if ((*(_BYTE*)(a3 + 16) & 0x20) != 0) {
    GameRoutine_6068a0(v14, a4, a5, a6);
  }
  *(_QWORD*)(a1 + 8) = a1 + 16;
  result =
      ((__int64 (*)(__int64, __int64))*GameData_21366f8)(a1 + 16, (__int64)v14);
  *(_BYTE*)(a1 + 1) &= ~1u;
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 game_606510(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  __int64 result;

  v4 = a1 + 24;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(*((_QWORD*)a3 + 6) + 8LL);
  *(_QWORD*)(a1 + 16) = v4;
  ((void (*)(__int64))GameData_21a4400)(v4);
  ((void (*)(__int64, __int64, __int64))*GameData_2136290)(
      *(_QWORD*)(a1 + 16), *((unsigned __int16*)a3 + 8),
      *((unsigned __int16*)a3 + 9));
  if (*a3 != 2) {
    (*(void (**)(__int64, __int64, __int64))GameData_2136fd8[0])(
        *(_QWORD*)(a1 + 16), *((unsigned int*)a3 + 8),
        *((unsigned int*)a3 + 9));
  }
  GameRoutine_6068b0(*(_QWORD*)(a1 + 16),
                     GameRoutine_6034e0(*((_DWORD*)a3 + 1)),
                     *(_QWORD*)(a1 + 8));
  ((void (*)(__int64, __int64, __int64, __int64, __int64))GameData_21a4420)(
      *(_QWORD*)(a1 + 16), GameData_1b331b8[a3[8]], GameData_1b331b8[a3[9]],
      GameData_1b331b8[a3[10]], GameData_1b331b8[a3[11]]);
  ((void (*)(__int64, __int64))GameData_21a4428)(*(_QWORD*)(a1 + 16),
                                                 a3[1] != 0);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = GameRoutine_6035a0(*a3);
  result = ((__int64 (*)(__int64, __int64))*GameData_2136ff0)(v6, v7);
  *(_BYTE*)(a1 + 1) &= ~1u;
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 game_606690(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  char v11;

  v4 = a1 + 24;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(*((_QWORD*)a3 + 3) + 8LL);
  *(_QWORD*)(a1 + 16) = v4;
  ((void (*)(__int64))GameData_21a4400)(v4);
  ((void (*)(__int64, __int64, __int64))*GameData_2136290)(
      *(_QWORD*)(a1 + 16), *((unsigned __int16*)a3 + 1), 1);
  (*(void (**)(__int64, __int64, __int64))GameData_2136fd8[0])(
      *(_QWORD*)(a1 + 16), *((unsigned int*)a3 + 2), *((unsigned int*)a3 + 3));
  v6 = *(_QWORD*)(a1 + 16);
  v7 = GameRoutine_6034e0(*((_DWORD*)a3 + 1));
  (*(void (**)(__int64, __int64))GameData_2132130[0])(v6, v7);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = GameRoutine_6035a0(*a3);
  result = ((__int64 (*)(__int64, __int64))*GameData_2136ff0)(v8, v9);
  v11 = *(_BYTE*)(a1 + 1);
  *(_BYTE*)a1 = 1;
  *(_BYTE*)(a1 + 1) = v11 & 0xFE;
  return result;
}

__int64 game_6067b0(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  __int64 result;
  char v9;

  v4 = a1 + 24;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(*((_QWORD*)a3 + 3) + 8LL);
  *(_QWORD*)(a1 + 16) = v4;
  ((void (*)(__int64))GameData_21a4400)(v4);
  ((void (*)(__int64, __int64, __int64))*GameData_2136290)(
      *(_QWORD*)(a1 + 16), *((unsigned __int16*)a3 + 1), 1);
  (*(void (**)(__int64, __int64, __int64))GameData_2136fd8[0])(
      *(_QWORD*)(a1 + 16), *((unsigned int*)a3 + 2), *((unsigned int*)a3 + 3));
  v6 = *(_QWORD*)(a1 + 16);
  v7 = GameRoutine_6035a0(*a3);
  result = ((__int64 (*)(__int64, __int64))*GameData_2136ff0)(v6, v7);
  v9 = *(_BYTE*)(a1 + 1);
  *(_BYTE*)a1 = 1;
  *(_BYTE*)(a1 + 1) = v9 & 0xFE;
  return result;
}

void game_14a20b0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  __int64 v27;
  unsigned __int8* v28;
  float v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int8* v37;
  int v38;
  float v39;
  _BYTE v40[16];
  float v41[6];
  struct {
    _QWORD v42[2];
    __int64 v43;
  } v42_;
  struct {
    __int128 v44;
    int v45;
  } v44_;
  struct {
    __int64 v46;
    int v47;
  } v46_;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*a1 == 0 || *(_DWORD*)(*a1 + 16) != *((_DWORD*)a1 + 2) ||
      (snd_fnd_WeakHandle_isValid(a1 + 2) & 1) != 0) {
    return;
  }
  v2 = *a1;
  v3 = a1;
  if (*a1 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(v2 + 24) + 90LL) & 1) == 0) {
      v4 = *(_DWORD*)(v2 + 16);
      *((_BYTE*)a1 + 106) = 0;
      if (*(_DWORD*)(v2 + 16) == v4 && *(int*)(v2 + 36) >= 1) {
        v5 = *(_QWORD*)(v2 + 40);
        if (v5 != 0) {
          if (*(float*)(v5 + 240) > 0x0.0p+0f) {
            *((_BYTE*)a1 + 93) = 1;
            return;
          }
          v6 = a1[12];
          *((_BYTE*)a1 + 93) = 0;
          if (v6 == 0) {
            goto LABEL_19;
          }
          if ((a1[13] & 1) != 0) {
            goto LABEL_19;
          }
          v7 = a1[1];
          v46_.v46 = 0;
          v46_.v47 = 0x2000;
          GameRoutine_112180((__int64)&v46_.v46, (__int64)(a1 + 2)),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          GameRoutine_14a1240(v42_.v42, v2, v7, (__int64)&v46_.v46),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          (**(void (***)(__int64, __int64))a1[12])(a1[12], (__int64)v42_.v42),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          *((_BYTE*)a1 + 104) = 1;
          GameRoutine_f2f380((__int64)v42_.v42),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v2 = *a1;
          v3 = a1;
          if (*a1 != 0) {
          LABEL_19:
            v8 = *(const char**)(*(_QWORD*)(v2 + 24) + 96LL);
            if (v8 != nullptr && (*((_BYTE*)v3 + 92) & 1) == 0 &&
                GameRoutine_1a09d30(v8, "invalid") != 0) {
              if (GameRoutine_fb1e50((__int64)(a1 + 7), &GameData_1a9f09e)) {
                v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                           8LL) +
                                64LL);
                if (v9 == 0) {
                  goto LABEL_37;
                }
                v10 = *(_QWORD*)(v9 + 96);
                if (v10 == 0 || *(_DWORD*)(v10 + 240) != 5) {
                LABEL_27:
                  *((_BYTE*)a1 + 93) = 1;
                  return;
                }
                v11 = (_QWORD*)(v9 + 120);
                while (1) {
                  v11 = (_QWORD*)*v11;
                  if (v11 == nullptr) {
                    break;
                  }
                  if (*(_DWORD*)(v11[5] + 240LL) != 5) {
                    goto LABEL_27;
                  }
                }
                GameRoutine_60a020(
                    (char*)a1 + 56,
                    *(const char**)(*(_QWORD*)(*a1 + 24) + 96LL)),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                GameRoutine_1a0a7c0((void*)(v42_.v42),
                                    (__int64)GameData_1ac690d,
                                    v10 + 64),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                GameRoutine_10f4050((__int64)(a1 + 7),
                                    (unsigned __int8*)v42_.v42),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                if ((v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
                  v12 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v12 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v42_.v43),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
                v13 = (a1[7] & 1) != 0 ? (unsigned __int8*)a1[9]
                                       : (unsigned __int8*)a1 + 57;
                if (!snd_hasSound(v13)) {
                LABEL_37:
                  GameRoutine_60a020(
                      (char*)a1 + 56,
                      *(const char**)(*(_QWORD*)(*a1 + 24) + 96LL)),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
              }
              v14 = (a1[7] & 1) != 0 ? (unsigned __int8*)a1[9]
                                     : (unsigned __int8*)a1 + 57;
              if (snd_hasSound(v14)) {
                v15 = *a1;
                if (*a1 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)a1 + 2)) {
                  v16 = *(_QWORD**)(v15 + 24);
                }
                else {
                  v16 = nullptr;
                }
                if (v16[1] == 0 && v16[3] != 0 && v16[12] != 0 &&
                    v16[10] != 0) {
                  (*(void (**)(__int64))(**(_QWORD**)(v15 + 40) + 136LL))(
                      *(_QWORD*)(v15 + 40)),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  if ((unsigned __int8)v44_.v45 == 1) {
                    v39 = *(float*)&v44_.v44;
                    v17 = *(_QWORD*)((char*)&v44_.v44 + 4);
                    if ((a1[7] & 1) != 0) {
                      v18 = (char*)a1[9];
                    }
                    else {
                      v18 = (char*)a1 + 57;
                    }
                    snd_Fade_Fade_10c830((__int64)v42_.v42, 0x0.0p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_playAt_ff4e0((__int64)&GameData_1a9f09e, (__int64)v18,
                                     (__int64)v42_.v42, 0, 0x10001u, 0, v39,
                                     *(float*)&v17, *((float*)&v17 + 1),
                                     0x0.0p+0f, 0x1.0000000000000p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    GameRoutine_112180((__int64)(a1 + 2), (__int64)v41),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_Fade_Destroy_Fade(v42_.v42),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  v19 = a1;
                }
                else {
                  if (*(_DWORD*)(v15 + 20) == 9) {
                    if ((a1[7] & 1) != 0) {
                      v20 = (char*)a1[9];
                    }
                    else {
                      v20 = (char*)a1 + 57;
                    }
                    snd_Fade_Fade_10c830((__int64)v42_.v42, 0x0.0p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_play_ff2d0((__int64)&GameData_1a9f09e, (__int64)v20,
                                   (__int64)v42_.v42, 0, 0x10001u, 0, 0x0.0p+0f,
                                   0x1.0000000000000p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_Fade_Destroy_Fade(v42_.v42),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    return;
                  }
                  v21 = *(_QWORD*)(v15 + 40);
                  v22 = 16;
                  if (*(_BYTE*)(v21 + 129) != 0) {
                    v22 = 112;
                  }
                  v23 = *(_OWORD*)(v21 + v22);
                  *((_QWORD*)&v44_.v44 + 1) = *(_QWORD*)(v21 + v22);
                  *(_QWORD*)&v44_.v44 = snd_fnd_Vec3_vtable;
                  v44_.v45 = DWORD2(v23);
                  Manager_1181f0((void*)((__int64)v42_.v42), GameData_2265eb0,
                                 -1),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v24 = snd_fnd_WeakHandle_get((__int64)v42_.v42),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  if (v24 != 0) {
                    v25 = v24 - 5592;
                  }
                  else {
                    v25 = 0;
                  }
                  (*(void (**)(__int64))(*(_QWORD*)(v25 + 40) + 1048LL))(v25 +
                                                                         40),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v26 = snd_fnd_calcDistanceTo(v41, (float*)&v44_.v44),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v27 = *snd_s_target_ptr;
                  if ((a1[7] & 1) != 0) {
                    v28 = (unsigned __int8*)a1[9];
                  }
                  else {
                    v28 = (unsigned __int8*)a1 + 57;
                  }
                  LODWORD(v42_.v42[0]) =
                      (unsigned int)snd_fnd_calcCrc32(v28, 0),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  DWORDn(v42_.v42[0],
                         sizeof(v42_.v42[0]) / 4 -
                             1) =
                      (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v28,
                                                             0),
                             v29 =
                                 COERCE_AS(__typeof__(v29),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                             v38 =
                                 COERCE_AS(__typeof__(v38),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v27 + 528LL))(
                      v27, (__int64)v42_.v42),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v19 = a1;
                  if (v26 <= v29 && (v30 = *a1, *a1 != 0) &&
                      *(_DWORD*)(v30 + 16) == *((_DWORD*)a1 + 2) &&
                      *(_BYTE*)(v30 + 33) == 1) {
                    if ((a1[7] & 1) != 0) {
                      v31 = (char*)a1[9];
                    }
                    else {
                      v31 = (char*)a1 + 57;
                    }
                    snd_Fade_Fade_10c830((__int64)v42_.v42, 0x0.0p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_playAt_ff5f0((__int64)&GameData_1a9f09e, (__int64)v31,
                                     (__int64)&v44_.v44, (__int64)v42_.v42, 0,
                                     0x10001u, 0, 0x0.0p+0f,
                                     0x1.0000000000000p+0f),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    GameRoutine_112180((__int64)(a1 + 2), (__int64)v40),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_Fade_Destroy_Fade(v42_.v42),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v19 = a1;
                  }
                  else if ((*((_BYTE*)a1 + 105) & 1) == 0) {
                    *(_WORD*)((char*)a1 + 105) = 257;
                  }
                }
                if ((snd_fnd_WeakHandle_isValid(v19 + 2) & 1) != 0) {
                  v32 = snd_fnd_WeakHandle_get((__int64)(a1 + 2)),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  (*(void (**)(__int64, __int64))(*(_QWORD*)(v32 - 5592) +
                                                  632LL))(v32 - 5592, 64),
                      v29 = COERCE_AS(__typeof__(v29),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v38 = COERCE_AS(__typeof__(v38),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v33 = snd_fnd_WeakHandle_get((__int64)(a1 + 2)),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  if (snd_fnd_WeakHandle_get(v33 + 256) != 0) {
                    v34 = snd_fnd_WeakHandle_get((__int64)(a1 + 2)),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    v35 = snd_fnd_WeakHandle_get(v34 + 256),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    (*(void (**)(__int64, __int64))(*(_QWORD*)(v35 - 5592) +
                                                    120LL))(v35 - 5592, 64),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                }
                *((_BYTE*)a1 + 85) = *(_BYTE*)(*(_QWORD*)(*a1 + 24) + 88LL);
                v36 = snd_s_target;
                if ((a1[7] & 1) != 0) {
                  v37 = (unsigned __int8*)a1[9];
                }
                else {
                  v37 = (unsigned __int8*)a1 + 57;
                }
                LODWORD(v42_.v42[0]) = (unsigned int)snd_fnd_calcCrc32(v37, 0),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                DWORDn(v42_.v42[0],
                       sizeof(v42_.v42[0]) / 4 -
                           1) =
                    (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v37, 0),
                           v29 = COERCE_AS(__typeof__(v29),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                           v38 = COERCE_AS(__typeof__(v38),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
                (*(void (**)(__int64, __int64))(*(_QWORD*)v36 + 528LL))(
                    v36, (__int64)v42_.v42),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                *((_DWORD*)a1 + 20) = v38;
              }
            }
          }
        }
      }
    }
  }
  else if ((*(((_BYTE*)0x58LL) + 2) & 1) == 0) {
    *((_BYTE*)a1 + 106) = 0;
  }
}

#pragma GCC visibility pop
