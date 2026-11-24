#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_hub_cbbcc0(PSEUDO_X8, __int64, int,
                                                _QWORD*);
__attribute__((swiftcall)) void std___1_to_string_1a0abd0(PSEUDO_X8, _QWORD);
__int64* GameHr_cb2b00(__int64* result, __int64, __int64, unsigned __int64);
__int64 GameHr_918ce0(__int64*, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_d6aa20(__int64);
__int64 GameRoutine_e149a0(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_hub_d6a700(unsigned __int64*, __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_1fd3e18[21])();
extern __int64 (*GameData_1fd4180[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc68;
extern __int64 GameData_21ec7c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int sprintf(__int64, const char*, ...);
void GameHr_cacc00(__int64);
void GameRoutine_d68860(__int64, char, __int64, __int64, __int64, __int64,
                        __int64, __int64, double, double, double, double,
                        double, double, double, double, ...);
void __attribute__((noreturn)) GameRoutine_919020();
void game_d58680(__int64, _QWORD*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_script_cac400(PSEUDO_X8 x8_, __int64 a1,
                                                   int a2);
void game_script_d661b0(__int64 a1, double a2, double a3, double a4, double a5,
                        double a6, double a7, double a8, double a9, __int64 a10,
                        __int64 a11, __int64 a12, __int64 a13, __int64 a14,
                        __int64 a15, __int64 a16);

__attribute__((swiftcall)) void game_script_cac400(PSEUDO_X8 x8_, __int64 a1,
                                                   int a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v6;
  float v7;
  int v8;
  int v9;
  float v10;
  char v11;
  float v12;
  __int64 v13;
  char* v14;
  _DWORD* v15;
  _QWORD* v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64* v32;
  unsigned __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  atomic_ullong* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 (*v58)();
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  struct {
    __int64 v70;
    __int64 v71;
    __int64 v72;
  } v70_;
  struct {
    _QWORD* v73;
    __int64 v74;
  } v73_;
  struct {
    unsigned __int64 v75[11];
    __int64 v76;
  } v75_;
  struct {
    __int64 v77[2];
    char* v78;
  } v77_;
  struct {
    _QWORD v79[6];
    char v80;
  } v79_;
  __int64 v81;
  struct {
    _QWORD v82[57];
    char v83;
    char gap1857_[7];
    char v84;
    char gap1865_[63];
    char v85;
    char gap1929_[7];
    char v86;
    char gap1937_[63];
    char v87;
  } v82_;
  __int64 v88;
  struct {
    __int128 v89;
    char* v90;
  } v89_;
  struct {
    __int64 v91;
    __int64 v92;
    char gap2344_[8];
    int v93;
    char gap2356_[244];
    int v94;
    char gap2604_[3];
    char v95;
  } v91_;

  v89_.v90 = nullptr;
  v6 = (char*)&v89_.v89 + 1;
  v89_.v89 = (__typeof__(v89_.v89)){0};
  if (a2 != 0) {
    v7 = 0x1.e000000000000p+3f;
    v8 = 1;
    v9 = 0;
    qmemcpy((char*)&v89_.v89 + 1, "CharacterAmes", 13);
    v10 = *(float*)(*(_QWORD*)(a1 + 24) + 528LL);
    v11 = 26;
  }
  else {
    v8 = *(unsigned __int8*)(a1 + 1331);
    v7 = 0x1.2000000000000p+2f;
    v9 = 1;
    BYTE9(v89_.v89) = 114;
    *(_QWORD*)((char*)&v89_.v89 + 1) = *(_QWORD*)"Character";
    v10 = *(float*)(*(_QWORD*)(a1 + 24) + 528LL);
    v11 = 18;
  }
  v12 = v10 + v7;
  LOBYTE(v89_.v89) = v11;
  v79_.v80 = 0;
  __builtin_memset(v79_.v79, 0, sizeof(v79_.v79));
  v82_.v83 = 0;
  v82_.v84 = 0;
  v82_.v85 = 0;
  v82_.v86 = 0;
  v82_.v87 = 0;
  memset((__int64)&v88, 0, 0x128u);
  memset((__int64)&v81, 0, 0x1C1u);
  v13 = *(_QWORD*)(a1 + 40);
  if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    v13 = *(_BYTE*)(a1 + 32) >> 1;
  }
  if (v13 != 0) {
    if (v13 == 4) {
      v14 = *(const char**)(a1 + 48);
      v15 = (_DWORD*)(a1 + 33);
      if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
        v15 = *(_DWORD**)(a1 + 48);
      }
      if (*(_DWORD*)v15 == 1819047278) {
        goto LABEL_21;
      }
    }
    else {
      v14 = *(const char**)(a1 + 48);
    }
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v20 = v14;
    }
    else {
      v20 = (const char*)(a1 + 33);
    }
  }
  else {
    v16 = *(_QWORD**)(a1 + 16);
    if (v16 == nullptr || (v17 = (_BYTE*)v16[4]) == nullptr || *v17 == 0) {
    LABEL_21:
      v20 = &GameData_1a9f09e;
      goto LABEL_26;
    }
    v18 = v16[36];
    if (v18 == 0 || (v19 = GameRoutine_975940(v18)) == 0 ||
        (v20 = *(const char**)(v19 + 72)) == nullptr) {
      v20 = (const char*)v16[4];
      if (v20 == nullptr) {
        v21 = v16[8];
        if (v21 != 0) {
          v20 = *(const char**)(v21 + 32);
        }
        else {
          v20 = &GameData_1a9f09e;
        }
      }
    }
  }
LABEL_26:
  GameRoutine_60a020((__int64)v82_.v82, v20);
  LODWORD(v82_.v82[3]) = v9;
  *((float*)&v82_.v82[5] + 1) = v12;
  v82_.v82[6] = 0x40000000;
  if ((v89_.v89 & 1) != 0) {
    v6 = v89_.v90;
  }
  v22 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v23 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v23 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  std___1_to_string_1a0abd0((void*)(v77_.v77), *(_QWORD*)(a1 + 264));
  if ((v77_.v77[0] & 1) != 0) {
    v24 = v77_.v78;
  }
  else {
    v24 = (char*)v77_.v77 + 1;
  }
  sprintf((__int64)&v91_.v91, "%s::%s", v6, v24);
  sprintf((__int64)v75_.v75, "%s=%s", v23, (const char*)&v91_.v91);
  GameRoutine_60a020((__int64)v79_.v79, (const char*)v75_.v75);
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v77_.v77[0] & 1) != 0 && v77_.v78 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v77_.v78);
  }
  v27 = *(unsigned __int8*)(*(_QWORD*)v22 + 64LL);
  v28 = (v27 & 1) == 0;
  v29 = v27 >> 1;
  if (v28) {
    v30 = *(_QWORD*)v22 + 65LL;
  }
  else {
    v30 = *(_QWORD*)(*(_QWORD*)v22 + 80LL);
  }
  if (v28) {
    v31 = v29;
  }
  else {
    v31 = *(_QWORD*)(*(_QWORD*)v22 + 72LL);
  }
  GameRoutine_e149a0((__int64)v79_.v79, v30, v31);
  game_hub_d6a700(v75_.v75, (__int64)v79_.v79);
  v32 = *(unsigned __int64**)(GameData_21ec7c0 + 24);
  v33 = *(unsigned __int64**)(GameData_21ec7c0 + 32);
  if (v32 == v33) {
  LABEL_48:
    v34 = 0;
    v35 = 0;
  }
  else {
    while (1) {
      v34 = *v32;
      if (*(_QWORD*)(*v32 + 264) == *(_QWORD*)(a1 + 264)) {
        break;
      }
      v32 += 2;
      if (v32 == v33) {
        goto LABEL_48;
      }
    }
    v35 = v32[1];
    if (v35 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  v36 = v75_.v76;
  v75_.v75[10] = v34;
  v75_.v76 = v35;
  if (v36 != 0) {
    std___1___shared_weak_count___release_weak(v36);
  }
  if ((*(_BYTE*)(*(_QWORD*)v22 + 88LL) & 1) != 0) {
    fw_text_String_CopyTerminated(v77_.v77, *(_QWORD*)(*(_QWORD*)v22 + 104LL),
                                  *(_QWORD*)(*(_QWORD*)v22 + 96LL));
  }
  else {
    v37 = *(_QWORD*)(*(_QWORD*)v22 + 96LL);
    v38 = *(_QWORD*)(*(_QWORD*)v22 + 104LL);
    v77_.v77[0] = *(_QWORD*)(*(_QWORD*)v22 + 88LL);
    v77_.v77[1] = v37;
    v77_.v78 = (char*)v38;
  }
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate(*v25, 1808, 16, 0);
  v40 = v39 + 4;
  v41 = (__int64)v39;
  v39[2] = 0;
  *v39 = GameData_1fd4180;
  v39[1] = 0;
  v42 = (atomic_ullong*)(v39 + 1);
  game_d58680((__int64)(v39 + 4), v75_.v75, v77_.v77);
  *a3 = 0;
  a3[1] = 0;
  v73_.v73 = v40;
  v73_.v74 = v41;
  v43 = *(_QWORD*)GameData_212dc68;
  atomic_fetch_add_explicit(v42, 1u, memory_order_relaxed);
  game_hub_cbbcc0((void*)(&v91_.v91), v43, 1, &v73_.v73);
  v44 = v91_.v91;
  v45 = v91_.v92;
  if (v91_.v92 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v91_.v92 + 16), 1u,
                              memory_order_relaxed);
    *a3 = v44;
    a3[1] = v45;
    v46 = a3 + 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      std___1___shared_weak_count___release_weak(v45);
    }
  }
  else {
    *a3 = v91_.v91;
    a3[1] = 0;
    v46 = a3 + 1;
  }
  v47 = v73_.v74;
  if (v73_.v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73_.v74 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v47);
  }
  v48 = *(_QWORD*)(a1 + 264);
  v70_.v71 = 0;
  v70_.v72 = 0;
  v70_.v70 = 0;
  v91_.v91 = v48;
  v91_.v93 = 1;
  v70_.v71 = GameHr_918ce0(&v70_.v70, (__int64)&v91_.v91);
  if (v91_.v93 != -1) {
    ((void (*)(char*, __int64*))GameData_1fd3de0[v91_.v93])(&v91_.v95,
                                                            &v91_.v91);
  }
  if (*v46 != 0) {
    v49 = std___1___shared_weak_count_lock(*v46);
    if (v49 != 0) {
      v50 = *a3;
      v51 = v49;
      if (*a3 != 0) {
        if (a2 != 0) {
          *(_DWORD*)(v50 + 1760) |= 0x200u;
        }
        v52 = v70_.v70;
        v53 = v70_.v71;
        v54 = v70_.v71 - v70_.v70;
        if (v70_.v71 == v70_.v70) {
          v55 = 0;
          v56 = 0;
        }
        else {
          v69 = v49;
          v91_.v94 = v8;
          if (v54 < 0) {
            GameRoutine_919020();
          }
          v55 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v54, 16, 0);
          v56 = v55;
          do {
            *(_BYTE*)v56 = 0;
            *(_DWORD*)(v56 + 24) = -1;
            v57 = *(_DWORD*)(v52 + 24);
            if (v57 != -1) {
              v58 = GameData_1fd3e18[(unsigned int)v57];
              v91_.v91 = v56;
              ((void (*)(__int64*, __int64))v58)(&v91_.v91, v52);
              *(_DWORD*)(v56 + 24) = v57;
            }
            v52 += 32;
            v56 += 32;
          } while (v52 != v53);
          LOBYTE(v8) = v91_.v94;
          v51 = v69;
        }
        GameHr_cb2b00((__int64*)(v50 + 1248), v55, v56, (v56 - v55) >> 5);
        v25 = &fw_memory_g_heap_manager;
        if (v55 != 0) {
          if (v55 != v56) {
            do {
              v59 = *(unsigned int*)(v56 - 8);
              v60 = v56 - 32;
              if ((_DWORD)v59 != -1) {
                ((void (*)(__int64*, __int64))GameData_1fd3de0[v59])(&v91_.v91,
                                                                     v56 - 32);
              }
              *(_DWORD*)(v56 - 8) = -1;
              v56 -= 32;
            } while (v60 != v55);
          }
          v25 = (__int64*)fw_memory_g_heap_manager_ptr;
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v55);
        }
        *(_BYTE*)(v50 + 1752) = v8 & 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
        std___1___shared_weak_count___release_weak(v51);
      }
    }
  }
  v62 = v70_.v70;
  if (v70_.v70 != 0) {
    v63 = v70_.v71;
    if (v70_.v70 == v70_.v71) {
      goto LABEL_97;
    }
    do {
      v64 = *(unsigned int*)(v63 - 8);
      v65 = v63 - 32;
      if ((_DWORD)v64 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fd3de0[v64])(&v91_.v91,
                                                             v63 - 32);
      }
      *(_DWORD*)(v63 - 8) = -1;
      v63 -= 32;
    } while (v65 != v62);
    v70_.v71 = v62;
    v62 = v70_.v70;
    if (v70_.v70 != 0) {
    LABEL_97:
      v66 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v66, v62);
    }
  }
  if (atomic_fetch_add(v42, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v77_.v77[0] & 1) == 0) {
      goto LABEL_108;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak(v41);
    if ((v77_.v77[0] & 1) == 0) {
      goto LABEL_108;
    }
  }
  if (v77_.v78 != nullptr) {
    v67 = 128;
    if (*(_QWORD*)(*v25 + 200) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*v25 + v67, (__int64)v77_.v78);
  }
LABEL_108:
  GameRoutine_d6aa20((__int64)v75_.v75);
  GameHr_cacc00((__int64)v79_.v79);
  if ((v89_.v89 & 1) != 0 && v89_.v90 != nullptr) {
    v68 = 128;
    if (*(_QWORD*)(*v25 + 200) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*v25 + v68, (__int64)v89_.v90);
  }
}

void game_script_d661b0(__int64 a1, double a2, double a3, double a4, double a5,
                        double a6, double a7, double a8, double a9, __int64 a10,
                        __int64 a11, __int64 a12, __int64 a13, __int64 a14,
                        __int64 a15, __int64 a16)
{

#pragma clang fp contract(off)
  GameRoutine_d68860(a1, 0, a11, a12, a13, a14, a15, a16, a2, a3, a4, a5, a6,
                     a7, a8, a9);
}

#pragma GCC visibility pop
