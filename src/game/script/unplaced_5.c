#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__int64* GameHr_eabe20(__int64* result, __int64, __int64, unsigned __int64);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_cb2f70(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_d85900(_QWORD);
__int64 GameRoutine_d859a0(_QWORD);
__int64 GameRoutine_f6bb90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fedf48[])();
extern __int64 (*GameData_1fee6a0[3])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_cmdbtl_CmdBtlTurnBeginAfterEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlTurnBeginBeforeEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlTurnEndEvent_vtable[])();
extern __int64* GameData_212c890[3];
extern __int64* GameData_212ea58;
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212d240;
extern __int64 GameData_212dc58[3];
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
void GameRoutine_f96b20();
void __attribute__((noreturn)) GameRoutine_c8c1e0();
void memory_eaeda0(__int64, int, __int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
unsigned __int64 game_script_cc1a00_alt1(__int64 a1);
__int64 game_script_eb0090(__int64 a1);
void game_script_ecc660(int a1, unsigned __int8* a2, unsigned int a3,
                        unsigned int a4, int a5, unsigned __int8* a6,
                        __int64* a7);
__int64 GameRoutine_d85900_alt1(__int64 result);
__int64 GameRoutine_d859a0_alt1(__int64);
__int64 GameRoutine_f6bb90_alt1(__int64, __int64*, int, char, char);
__int64 game_HashString_alt1(__int64 result);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
void game_script_cc1a00(__int64 a1);

void game_script_cc1a00(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, __int64);
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38[3];
  __int64 v39;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    v7 = game_HashString_alt1(v6);
    if (v7 != 0) {
      v8 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v8 != 0 & *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v10 = v8 - 1;
        if ((v8 & (v8 - 1)) != 0) {
          v11 = v7;
          if (v7 >= v8) {
            v11 = v7 % v8;
          }
        }
        else {
          v11 = v10 & v7;
        }
        v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v11);
        if (v12 != nullptr) {
          v13 = (_QWORD*)*v12;
          if (v13 != nullptr) {
            if ((v8 & v10) == 0) {
              while (1) {
                v15 = v13[1];
                if (v15 == v7) {
                  if (v13[2] == v7) {
                    goto LABEL_30;
                  }
                }
                else if ((v15 & v10) != v11) {
                  goto LABEL_41;
                }
                v13 = (_QWORD*)*v13;
                if (v13 == nullptr) {
                  goto LABEL_41;
                }
              }
            }
            do {
              v14 = v13[1];
              if (v14 == v7) {
                if (v13[2] == v7) {
                LABEL_30:
                  if (v13[3] != 0) {
                    v39 = v13[3];
                    if (game_hub_ProcHubSeqView_instance_ != 0) {
                      v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
                      do {
                        v17 = v16;
                        v16 = *(_QWORD*)(v16 + 40);
                      } while (v16 != 0);
                    }
                    else {
                      v17 = 0;
                    }
                    GameRoutine_f6bb90_alt1(v17, &v39, 2, 0, 0);
                    strcpy((char*)v38, " JoinPersonCreate");
                    GameRoutine_d85900_alt1((__int64)v38);
                    if ((v38[0] & 1) != 0 && v38[2] != 0) {
                      v18 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v18 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v38[2]);
                    }
                  }
                  break;
                }
              }
              else {
                if (v14 >= v8) {
                  v14 %= v8;
                }
                if (v14 != v11) {
                  break;
                }
              }
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
          }
        }
      }
    }
  }
LABEL_41:
  strcpy((char*)v38, " JoinPersonCreate");
  v19 = GameRoutine_d859a0_alt1((__int64)v38);
  v20 = *v2;
  v21 = *(
      _QWORD*)(v20 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v21 != 0) {
    v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
  }
  else {
    v22 = 0;
  }
  v23 = *(_QWORD*)(v22 + 24);
  v24 = *(void (**)(__int64, __int64))(*(_QWORD*)v23 + 448LL);
  if ((v19 & 1) == 0) {
    v24(v23, 1);
    v25 = *(_QWORD**)(v22 + 2240);
    *(_QWORD*)(v22 + 2240) = 0;
    if (v25 == (_QWORD*)(v22 + 2208)) {
      v26 = 32;
    }
    else {
      if (v25 == nullptr) {
        goto LABEL_51;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    goto LABEL_51;
  }
  v24(v23, 0);
LABEL_51:
  if ((v38[0] & 1) != 0 && v38[2] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v38[2]);
  }
  if ((v19 & 1) == 0) {
    v28 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    v29 = game_HashString_alt1(v28);
    if (v29 != 0) {
      v30 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v30 != 0 & *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v32 = v30 - 1;
        if ((v30 & (v30 - 1)) != 0) {
          v33 = v29;
          if (v29 >= v30) {
            v33 = v29 % v30;
          }
        }
        else {
          v33 = v32 & v29;
        }
        v34 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v33);
        if (v34 != nullptr) {
          v35 = (_QWORD*)*v34;
          if (v35 != nullptr) {
            if ((v30 & v32) == 0) {
              while (1) {
                v37 = v35[1];
                if (v37 == v29) {
                  if (v35[2] == v29) {
                    goto LABEL_85;
                  }
                }
                else if ((v37 & v32) != v33) {
                  return;
                }
                v35 = (_QWORD*)*v35;
                if (v35 == nullptr) {
                  return;
                }
              }
            }
            do {
              v36 = v35[1];
              if (v36 == v29) {
                if (v35[2] == v29) {
                LABEL_85:
                  if (v35[3] != 0) {
                    ((void (*)(_QWORD))GameRoutine_f96b20)(
                        *(_QWORD*)GameData_212dc58[0]);
                  }
                  return;
                }
              }
              else {
                if (v36 >= v30) {
                  v36 %= v30;
                }
                if (v36 != v33) {
                  return;
                }
              }
              v35 = (_QWORD*)*v35;
            } while (v35 != nullptr);
          }
        }
      }
    }
  }
}

__int64 game_script_eb0090(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  unsigned int v16;
  // One object keeps the original's frame offsets of these locals.
  struct {
    char gapm_[8];
    struct {
      __int64 v17;
      __int64 v18;
      __int64 v19;
    } v17_;
    struct {
      _BYTE v20[32];
      _BYTE* v21;
    } v20_;
    char gap0_[8];
    struct {
      __int64 v22;
      __int64 v23;
    } v22_;
  } f_;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  f_.v22_.v22 = 0;
  f_.v22_.v23 = 0;
  v7 = (_QWORD*)*GameData_212ea58;
  if ((*(_BYTE*)a1 & 1) != 0) {
    GameRoutine_cb2f70(&f_.v17_.v17, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8));
  }
  else {
    v8 = *(_QWORD*)(a1 + 8);
    f_.v17_.v17 = *(_QWORD*)a1;
    f_.v17_.v18 = v8;
    f_.v17_.v19 = *(_QWORD*)(a1 + 16);
  }
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  f_.v20_.v21 = v9;
  *v9 = GameData_1fedf48;
  v9[1] = &f_.v22_.v22;
  v10 = f_.v17_.v17;
  v11 = f_.v17_.v18;
  f_.v17_.v17 = 0;
  f_.v17_.v18 = 0;
  v9[2] = v10;
  v9[3] = v11;
  v12 = f_.v17_.v19;
  f_.v17_.v19 = 0;
  v9[4] = v12;
  CmdbtlPartyNatives_e9a800(v7, (__int64)f_.v20_.v20);
  if (f_.v20_.v21 == f_.v20_.v20) {
    v13 = 32;
  }
  else {
    if (f_.v20_.v21 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v20_.v21 + v13))((__int64)f_.v20_.v21);
LABEL_17:
  if ((f_.v17_.v17 & 1) != 0) {
    GameRoutine_25ec90(f_.v17_.v19, f_.v17_.v17 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (f_.v22_.v22 != 0) {
    result = *(unsigned int*)(f_.v22_.v22 + 8);
    v15 = f_.v22_.v23;
    if (f_.v22_.v23 == 0) {
      return result;
    }
  }
  else {
    result = 0xFFFFFFFFLL;
    v15 = f_.v22_.v23;
    if (f_.v22_.v23 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    return v16;
  }
  return result;
}

void game_script_ecc660(int a1, unsigned __int8* a2, unsigned int a3,
                        unsigned int a4, int a5, unsigned __int8* a6,
                        __int64* a7)
{
  // Keeps the original frame offsets, a7 may point at v147.
  struct {
    struct {
      __int64 v144;
      unsigned __int64 v145;
      __int64 v146;
    } v144_;
    struct {
      __int64 v147;
      __int64 v148;
      __int64 v149;
      unsigned __int64 v150;
      int v151;
    } v147_;
    struct {
      __int64 v152;
      unsigned __int64 v153;
      __int64 v154;
    } v152_;
    char pad[96];
  } fr;
  unsigned __int64 v7;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 (*v32)();
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 (*v38)();
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 (*v44)();
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 (*v50)();
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 (*v56)();
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 (*v62)();
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
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
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  struct {
    __int64 v111;
    unsigned __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    unsigned __int64 v117;
    int v118;
  } v111_;
  struct {
    __int64 v119;
    unsigned __int64 v120;
    __int64 v121;
  } v119_;
  struct {
    __int64 v122;
    unsigned __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    unsigned __int64 v128;
    int v129;
  } v122_;
  struct {
    __int64 v130;
    unsigned __int64 v131;
    __int64 v132;
  } v130_;
  struct {
    __int64 v133;
    unsigned __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    unsigned __int64 v139;
    int v140;
  } v133_;
  struct {
    __int64 v141;
    unsigned __int64 v142;
    __int64 v143;
  } v141_;
  struct {
    __int64 v155;
    unsigned __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    unsigned __int64 v161;
    int v162;
  } v155_;
  struct {
    __int64 v163;
    unsigned __int64 v164;
    __int64 v165;
  } v163_;
  _QWORD v166[2];

  {
    v7 = *a2;
    __asm__ volatile("" ::"r"(v7));
  }
  fr.v152_.v153 = 0;
  fr.v152_.v154 = 0;
  fr.v152_.v152 = 0;
  fr.v144_.v144 = 0;
  fr.v144_.v145 = 0;
  fr.v144_.v146 = 0;
  fr.v147_.v147 = 0;
  v14 = v7 >> 1;
  v15 = (v7 & 1) == 0;
  {
    v16 = *((_QWORD*)a2 + 1);
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = *((_QWORD*)a2 + 2);
    __asm__ volatile("" ::"r"(v17));
  }
  fr.v147_.v148 = 0;
  fr.v147_.v149 = 0;
  if (v15) {
    v18 = v14;
  }
  else {
    v18 = v16;
  }
  if (v15) {
    v19 = (__int64)(a2 + 1);
  }
  else {
    v19 = v17;
  }
  GameRoutine_60a060((char*)&fr.v144_.v144, v19, v18);
  {
    v20 = *a6;
    __asm__ volatile("" ::"r"(v20));
  }
  fr.v147_.v150 = __PAIR64__(a4, a3);
  fr.v147_.v151 = a5;
  if ((v20 & 1) != 0) {
    v21 = *((_QWORD*)a6 + 1);
    __asm__ volatile("" ::"r"(v21));
  }
  else {
    v21 = v20 >> 1;
  }
  if ((v20 & 1) != 0) {
    v22 = *((_QWORD*)a6 + 2);
    __asm__ volatile("" ::"r"(v22));
  }
  else {
    v22 = (__int64)(a6 + 1);
  }
  GameRoutine_60a060((char*)&fr.v152_.v152, v22, v21);
  if (&fr.v147_.v147 != a7) {
    GameHr_eabe20(&fr.v147_.v147, *a7, a7[1], (a7[1] - *a7) >> 5);
  }
  {
    v23 = *(_QWORD*)GameData_212d240;
    __asm__ volatile("" ::"r"(v23));
  }
  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  if (a1 == 5) {
    if ((fr.v144_.v144 & 1) != 0) {
      fw_text_String_CopyTerminated(&v111_.v111, fr.v144_.v146, fr.v144_.v145);
    }
    else {
      v111_.v111 = fr.v144_.v144;
      v111_.v112 = fr.v144_.v145;
      v111_.v113 = fr.v144_.v146;
    }
    v33 = fr.v147_.v147;
    v34 = fr.v147_.v148;
    v111_.v115 = 0;
    v111_.v116 = 0;
    v35 = fr.v147_.v148 - fr.v147_.v147;
    v111_.v114 = 0;
    if (fr.v147_.v148 != fr.v147_.v147) {
      if (v35 < 0) {
        goto LABEL_227;
      }
      v36 = fw_memory_HeapManager_Allocate(*v24, fr.v147_.v148 - fr.v147_.v147,
                                           16, 0);
      v111_.v114 = v36;
      v111_.v115 = v36;
      v111_.v116 = v36 + v35;
      do {
        *(_BYTE*)v36 = 0;
        *(_DWORD*)(v36 + 24) = -1;
        {
          v37 = *(_DWORD*)(v33 + 24);
          __asm__ volatile("" ::"r"(v37));
        }
        if (v37 != -1) {
          v38 = GameData_1fee6a0[(unsigned int)v37];
          v155_.v155 = v36;
          ((void (*)(__int64*, __int64))v38)(&v155_.v155, v33);
          *(_DWORD*)(v36 + 24) = v37;
        }
        v33 += 32;
        v36 += 32;
      } while (v33 != v34);
      v111_.v115 = v36;
    }
    v111_.v117 = fr.v147_.v150;
    v111_.v118 = fr.v147_.v151;
    if ((fr.v152_.v152 & 1) != 0) {
      fw_text_String_CopyTerminated(&v119_.v119, fr.v152_.v154, fr.v152_.v153);
      if ((v111_.v111 & 1) != 0) {
        goto LABEL_44;
      }
    }
    else {
      v119_.v119 = fr.v152_.v152;
      v119_.v120 = fr.v152_.v153;
      v119_.v121 = fr.v152_.v154;
      if ((v111_.v111 & 1) != 0) {
      LABEL_44:
        fw_text_String_CopyTerminated(&v155_.v155, v111_.v113, v111_.v112);
      LABEL_69:
        v51 = v111_.v114;
        v52 = v111_.v115;
        v155_.v159 = 0;
        v155_.v160 = 0;
        v53 = v111_.v115 - v111_.v114;
        v155_.v158 = 0;
        if (v111_.v115 != v111_.v114) {
          if (v53 < 0) {
            goto LABEL_227;
          }
          v54 = fw_memory_HeapManager_Allocate(*v24, v111_.v115 - v111_.v114,
                                               16, 0);
          v155_.v158 = v54;
          v155_.v159 = v54;
          v155_.v160 = v54 + v53;
          do {
            *(_BYTE*)v54 = 0;
            *(_DWORD*)(v54 + 24) = -1;
            {
              v55 = *(_DWORD*)(v51 + 24);
              __asm__ volatile("" ::"r"(v55));
            }
            if (v55 != -1) {
              v56 = GameData_1fee6a0[(unsigned int)v55];
              v166[0] = v54;
              ((void (*)(_QWORD*, __int64))v56)(v166, v51);
              *(_DWORD*)(v54 + 24) = v55;
            }
            v51 += 32;
            v54 += 32;
          } while (v51 != v52);
          v155_.v159 = v54;
        }
        v155_.v161 = v111_.v117;
        v155_.v162 = v111_.v118;
        if ((v119_.v119 & 1) != 0) {
          fw_text_String_CopyTerminated(&v163_.v163, v119_.v121, v119_.v120);
        }
        else {
          v163_.v163 = v119_.v119;
          v163_.v164 = v119_.v120;
          v163_.v165 = v119_.v121;
        }
        memory_eaeda0((__int64)v25, 5, &v155_.v155);
        if ((v163_.v163 & 1) != 0 && v163_.v165 != 0) {
          v68 = 128;
          if (*(_QWORD*)(*v24 + 200) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v24 + v68, v163_.v165);
        }
        v69 = v155_.v158;
        if (v155_.v158 != 0) {
          v70 = v155_.v159;
          if (v155_.v158 == v155_.v159) {
            goto LABEL_152;
          }
          do {
            {
              v71 = *(unsigned int*)(v70 - 8);
              __asm__ volatile("" ::"r"(v71));
            }
            v72 = v70 - 32;
            if ((_DWORD)v71 != -1) {
              ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr[v71])(v166,
                                                                     v70 - 32);
            }
            *(_DWORD*)(v70 - 8) = -1;
            v70 -= 32;
          } while (v72 != v69);
          v155_.v159 = v69;
          v69 = v155_.v158;
          if (v155_.v158 != 0) {
          LABEL_152:
            v87 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v87 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v87, v69);
          }
        }
        if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
          v88 = 128;
          if (*(_QWORD*)(*v24 + 200) == 0) {
            v88 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v24 + v88, v155_.v157);
        }
        *v25 = game_cmdbtl_CmdBtlTurnEndEvent_vtable;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v23 + 8) + 24LL))(v23 + 8,
                                                                     v25);
        if ((v119_.v119 & 1) != 0 && v119_.v121 != 0) {
          v89 = 128;
          if (*(_QWORD*)(*v24 + 200) == 0) {
            v89 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v24 + v89, v119_.v121);
        }
        v90 = v111_.v114;
        v73 = &v111_.v113;
        if (v111_.v114 != 0) {
          v91 = v111_.v115;
          if (v111_.v114 == v111_.v115) {
            goto LABEL_172;
          }
          do {
            {
              v92 = *(unsigned int*)(v91 - 8);
              __asm__ volatile("" ::"r"(v92));
            }
            v93 = v91 - 32;
            if ((_DWORD)v92 != -1) {
              ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v92])(
                  &v155_.v155, v91 - 32);
            }
            *(_DWORD*)(v91 - 8) = -1;
            v91 -= 32;
          } while (v93 != v90);
          v111_.v115 = v90;
          v90 = v111_.v114;
          if (v111_.v114 != 0) {
          LABEL_172:
            v94 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v94 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v94, v90);
          }
        }
        if ((v111_.v111 & 1) != 0) {
          goto LABEL_202;
        }
        goto LABEL_206;
      }
    }
    v155_.v155 = v111_.v111;
    v155_.v156 = v111_.v112;
    v155_.v157 = v111_.v113;
    goto LABEL_69;
  }
  if (a1 == 4) {
    if ((fr.v144_.v144 & 1) != 0) {
      fw_text_String_CopyTerminated(&v122_.v122, fr.v144_.v146, fr.v144_.v145);
    }
    else {
      v122_.v122 = fr.v144_.v144;
      v122_.v123 = fr.v144_.v145;
      v122_.v124 = fr.v144_.v146;
    }
    v27 = fr.v147_.v147;
    v28 = fr.v147_.v148;
    v122_.v126 = 0;
    v122_.v127 = 0;
    v29 = fr.v147_.v148 - fr.v147_.v147;
    v122_.v125 = 0;
    if (fr.v147_.v148 != fr.v147_.v147) {
      if (v29 < 0) {
        goto LABEL_227;
      }
      v30 = fw_memory_HeapManager_Allocate(*v24, fr.v147_.v148 - fr.v147_.v147,
                                           16, 0);
      v122_.v125 = v30;
      v122_.v126 = v30;
      v122_.v127 = v30 + v29;
      do {
        *(_BYTE*)v30 = 0;
        *(_DWORD*)(v30 + 24) = -1;
        {
          v31 = *(_DWORD*)(v27 + 24);
          __asm__ volatile("" ::"r"(v31));
        }
        if (v31 != -1) {
          v32 = GameData_1fee6a0[(unsigned int)v31];
          v155_.v155 = v30;
          ((void (*)(__int64*, __int64))v32)(&v155_.v155, v27);
          *(_DWORD*)(v30 + 24) = v31;
        }
        v27 += 32;
        v30 += 32;
      } while (v27 != v28);
      v122_.v126 = v30;
    }
    v122_.v128 = fr.v147_.v150;
    v122_.v129 = fr.v147_.v151;
    if ((fr.v152_.v152 & 1) != 0) {
      fw_text_String_CopyTerminated(&v130_.v130, fr.v152_.v154, fr.v152_.v153);
      if ((v122_.v122 & 1) != 0) {
        goto LABEL_33;
      }
    }
    else {
      v130_.v130 = fr.v152_.v152;
      v130_.v131 = fr.v152_.v153;
      v130_.v132 = fr.v152_.v154;
      if ((v122_.v122 & 1) != 0) {
      LABEL_33:
        fw_text_String_CopyTerminated(&v155_.v155, v122_.v124, v122_.v123);
      LABEL_58:
        v45 = v122_.v125;
        v46 = v122_.v126;
        v155_.v159 = 0;
        v155_.v160 = 0;
        v47 = v122_.v126 - v122_.v125;
        v155_.v158 = 0;
        if (v122_.v126 == v122_.v125) {
          goto LABEL_65;
        }
        if ((v47 & 0x8000000000000000LL) == 0) {
          v48 = fw_memory_HeapManager_Allocate(*v24, v122_.v126 - v122_.v125,
                                               16, 0);
          v155_.v158 = v48;
          v155_.v159 = v48;
          v155_.v160 = v48 + v47;
          do {
            *(_BYTE*)v48 = 0;
            *(_DWORD*)(v48 + 24) = -1;
            {
              v49 = *(_DWORD*)(v45 + 24);
              __asm__ volatile("" ::"r"(v49));
            }
            if (v49 != -1) {
              v50 = GameData_1fee6a0[(unsigned int)v49];
              v166[0] = v48;
              ((void (*)(_QWORD*, __int64))v50)(v166, v45);
              *(_DWORD*)(v48 + 24) = v49;
            }
            v45 += 32;
            v48 += 32;
          } while (v45 != v46);
          v155_.v159 = v48;
        LABEL_65:
          v155_.v161 = v122_.v128;
          v155_.v162 = v122_.v129;
          if ((v130_.v130 & 1) != 0) {
            fw_text_String_CopyTerminated(&v163_.v163, v130_.v132, v130_.v131);
          }
          else {
            v163_.v163 = v130_.v130;
            v163_.v164 = v130_.v131;
            v163_.v165 = v130_.v132;
          }
          memory_eaeda0((__int64)v25, 4, &v155_.v155);
          if ((v163_.v163 & 1) != 0 && v163_.v165 != 0) {
            v63 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v63 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v63, v163_.v165);
          }
          v64 = v155_.v158;
          if (v155_.v158 != 0) {
            v65 = v155_.v159;
            if (v155_.v158 == v155_.v159) {
              goto LABEL_126;
            }
            do {
              {
                v66 = *(unsigned int*)(v65 - 8);
                __asm__ volatile("" ::"r"(v66));
              }
              v67 = v65 - 32;
              if ((_DWORD)v66 != -1) {
                ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr[v66])(
                    v166, v65 - 32);
              }
              *(_DWORD*)(v65 - 8) = -1;
              v65 -= 32;
            } while (v67 != v64);
            v155_.v159 = v64;
            v64 = v155_.v158;
            if (v155_.v158 != 0) {
            LABEL_126:
              v79 = 128;
              if (*(_QWORD*)(*v24 + 200) == 0) {
                v79 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v24 + v79, v64);
            }
          }
          if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
            v80 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v80, v155_.v157);
          }
          *v25 = game_cmdbtl_CmdBtlTurnBeginAfterEvent_vtable;
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v23 + 8) + 24LL))(v23 + 8,
                                                                       v25);
          if ((v130_.v130 & 1) != 0 && v130_.v132 != 0) {
            v81 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v81 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v81, v130_.v132);
          }
          v82 = v122_.v125;
          v73 = &v122_.v124;
          if (v122_.v125 != 0) {
            v83 = v122_.v126;
            if (v122_.v125 == v122_.v126) {
              goto LABEL_146;
            }
            do {
              {
                v84 = *(unsigned int*)(v83 - 8);
                __asm__ volatile("" ::"r"(v84));
              }
              v85 = v83 - 32;
              if ((_DWORD)v84 != -1) {
                ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v84])(
                    &v155_.v155, v83 - 32);
              }
              *(_DWORD*)(v83 - 8) = -1;
              v83 -= 32;
            } while (v85 != v82);
            v122_.v126 = v82;
            v82 = v122_.v125;
            if (v122_.v125 != 0) {
            LABEL_146:
              v86 = 128;
              if (*(_QWORD*)(*v24 + 200) == 0) {
                v86 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v24 + v86, v82);
            }
          }
          if ((v122_.v122 & 1) == 0) {
            goto LABEL_206;
          }
        LABEL_202:
          if (*v73 != 0) {
            v103 = 128;
            if (*(_QWORD*)(*v24 + 200) == 0) {
              v103 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v24 + v103, *v73);
          }
          goto LABEL_206;
        }
      LABEL_227:
        GameRoutine_c8c1e0();
      }
    }
    v155_.v155 = v122_.v122;
    v155_.v156 = v122_.v123;
    v155_.v157 = v122_.v124;
    goto LABEL_58;
  }
  v26 = v24;
  if ((fr.v144_.v144 & 1) != 0) {
    fw_text_String_CopyTerminated(&v133_.v133, fr.v144_.v146, fr.v144_.v145);
  }
  else {
    v133_.v133 = fr.v144_.v144;
    v133_.v134 = fr.v144_.v145;
    v133_.v135 = fr.v144_.v146;
  }
  v39 = fr.v147_.v147;
  v40 = fr.v147_.v148;
  v133_.v137 = 0;
  v133_.v138 = 0;
  v41 = fr.v147_.v148 - fr.v147_.v147;
  v133_.v136 = 0;
  if (fr.v147_.v148 != fr.v147_.v147) {
    if (v41 < 0) {
      goto LABEL_227;
    }
    v42 = fw_memory_HeapManager_Allocate(*v26, fr.v147_.v148 - fr.v147_.v147,
                                         16, 0);
    v133_.v136 = v42;
    v133_.v137 = v42;
    v133_.v138 = v42 + v41;
    do {
      *(_BYTE*)v42 = 0;
      *(_DWORD*)(v42 + 24) = -1;
      {
        v43 = *(_DWORD*)(v39 + 24);
        __asm__ volatile("" ::"r"(v43));
      }
      if (v43 != -1) {
        v44 = GameData_1fee6a0[(unsigned int)v43];
        v155_.v155 = v42;
        ((void (*)(__int64*, __int64))v44)(&v155_.v155, v39);
        *(_DWORD*)(v42 + 24) = v43;
      }
      v39 += 32;
      v42 += 32;
    } while (v39 != v40);
    v133_.v137 = v42;
  }
  v133_.v139 = fr.v147_.v150;
  v133_.v140 = fr.v147_.v151;
  if ((fr.v152_.v152 & 1) != 0) {
    fw_text_String_CopyTerminated(&v141_.v141, fr.v152_.v154, fr.v152_.v153);
    if ((v133_.v133 & 1) != 0) {
      goto LABEL_55;
    }
  LABEL_79:
    v155_.v155 = v133_.v133;
    v155_.v156 = v133_.v134;
    v155_.v157 = v133_.v135;
    goto LABEL_80;
  }
  v141_.v141 = fr.v152_.v152;
  v141_.v142 = fr.v152_.v153;
  v141_.v143 = fr.v152_.v154;
  if ((v133_.v133 & 1) == 0) {
    goto LABEL_79;
  }
LABEL_55:
  fw_text_String_CopyTerminated(&v155_.v155, v133_.v135, v133_.v134);
LABEL_80:
  v57 = v133_.v136;
  v58 = v133_.v137;
  v155_.v159 = 0;
  v155_.v160 = 0;
  v59 = v133_.v137 - v133_.v136;
  v155_.v158 = 0;
  if (v133_.v137 != v133_.v136) {
    if (v59 < 0) {
      goto LABEL_227;
    }
    v60 = fw_memory_HeapManager_Allocate(*v26, v133_.v137 - v133_.v136, 16, 0);
    v155_.v158 = v60;
    v155_.v159 = v60;
    v155_.v160 = v60 + v59;
    do {
      *(_BYTE*)v60 = 0;
      *(_DWORD*)(v60 + 24) = -1;
      {
        v61 = *(_DWORD*)(v57 + 24);
        __asm__ volatile("" ::"r"(v61));
      }
      if (v61 != -1) {
        v62 = GameData_1fee6a0[(unsigned int)v61];
        v166[0] = v60;
        ((void (*)(_QWORD*, __int64))v62)(v166, v57);
        *(_DWORD*)(v60 + 24) = v61;
      }
      v57 += 32;
      v60 += 32;
    } while (v57 != v58);
    v155_.v159 = v60;
  }
  v155_.v161 = v133_.v139;
  v155_.v162 = v133_.v140;
  if ((v141_.v141 & 1) != 0) {
    fw_text_String_CopyTerminated(&v163_.v163, v141_.v143, v141_.v142);
  }
  else {
    v163_.v163 = v141_.v141;
    v163_.v164 = v141_.v142;
    v163_.v165 = v141_.v143;
  }
  v24 = v26;
  memory_eaeda0((__int64)v25, 3, &v155_.v155);
  v73 = &v133_.v135;
  if ((v163_.v163 & 1) != 0 && v163_.v165 != 0) {
    v74 = 128;
    if (*(_QWORD*)(*v26 + 200) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v26 + v74, v163_.v165);
  }
  v75 = v155_.v158;
  if (v155_.v158 != 0) {
    v76 = v155_.v159;
    if (v155_.v158 == v155_.v159) {
      goto LABEL_178;
    }
    do {
      {
        v77 = *(unsigned int*)(v76 - 8);
        __asm__ volatile("" ::"r"(v77));
      }
      v78 = v76 - 32;
      if ((_DWORD)v77 != -1) {
        ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr[v77])(v166, v76 - 32);
      }
      *(_DWORD*)(v76 - 8) = -1;
      v76 -= 32;
    } while (v78 != v75);
    v155_.v159 = v75;
    v75 = v155_.v158;
    if (v155_.v158 != 0) {
    LABEL_178:
      v95 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v95 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v26 + v95, v75);
    }
  }
  if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
    v96 = 128;
    if (*(_QWORD*)(*v26 + 200) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v26 + v96, v155_.v157);
  }
  *v25 = game_cmdbtl_CmdBtlTurnBeginBeforeEvent_vtable;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v23 + 8) + 24LL))(v23 + 8, v25);
  if ((v141_.v141 & 1) != 0 && v141_.v143 != 0) {
    v97 = 128;
    if (*(_QWORD*)(*v26 + 200) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v26 + v97, v141_.v143);
  }
  v98 = v133_.v136;
  if (v133_.v136 != 0) {
    v99 = v133_.v137;
    if (v133_.v136 == v133_.v137) {
      goto LABEL_198;
    }
    do {
      {
        v100 = *(unsigned int*)(v99 - 8);
        __asm__ volatile("" ::"r"(v100));
      }
      v101 = v99 - 32;
      if ((_DWORD)v100 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v100])(&v155_.v155,
                                                                 v99 - 32);
      }
      *(_DWORD*)(v99 - 8) = -1;
      v99 -= 32;
    } while (v101 != v98);
    v133_.v137 = v98;
    v98 = v133_.v136;
    if (v133_.v136 != 0) {
    LABEL_198:
      v102 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v102 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v26 + v102, v98);
    }
  }
  if ((v133_.v133 & 1) != 0) {
    goto LABEL_202;
  }
LABEL_206:
  if ((fr.v152_.v152 & 1) != 0 && fr.v152_.v154 != 0) {
    v104 = 128;
    if (*(_QWORD*)(*v24 + 200) == 0) {
      v104 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v24 + v104, fr.v152_.v154);
  }
  v105 = fr.v147_.v147;
  if (fr.v147_.v147 != 0) {
    v106 = fr.v147_.v148;
    if (fr.v147_.v147 == fr.v147_.v148) {
      goto LABEL_218;
    }
    do {
      {
        v107 = *(unsigned int*)(v106 - 8);
        __asm__ volatile("" ::"r"(v107));
      }
      v108 = v106 - 32;
      if ((_DWORD)v107 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v107])(&v155_.v155,
                                                                 v106 - 32);
      }
      *(_DWORD*)(v106 - 8) = -1;
      v106 -= 32;
    } while (v108 != v105);
    fr.v147_.v148 = v105;
    v105 = fr.v147_.v147;
    if (fr.v147_.v147 != 0) {
    LABEL_218:
      v109 = 128;
      if (*(_QWORD*)(*v24 + 200) == 0) {
        v109 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v24 + v109, v105);
    }
  }
  if ((fr.v144_.v144 & 1) != 0 && fr.v144_.v146 != 0) {
    v110 = 128;
    if (*(_QWORD*)(*v24 + 200) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v24 + v110, fr.v144_.v146);
  }
}

#pragma GCC visibility pop
