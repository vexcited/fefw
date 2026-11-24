#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
void GameRoutine_6b87d0(__int64*, unsigned __int64);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_c3f7a0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_919f10();
void __attribute__((noreturn)) GameRoutine_c31680();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___memory_1989340(__int64* a1, _QWORD* a2,
                                                    __int64 a3,
                                                    unsigned __int64 a4);
void llvm_libcxx_21_libcxx_include___memory_198ad80(__int64 a1, int a2,
                                                    __int64 a3,
                                                    unsigned __int64 a4);
__int64 GameRoutine_2b0();
__int64 llvm_libcxx_21_libcxx_include___memory_a96fe4();

__int64 llvm_libcxx_21_libcxx_include___memory_a96fe4()
{
  return GameRoutine_2b0();
}

void llvm_libcxx_21_libcxx_include___memory_1989340(__int64* a1, _QWORD* a2,
                                                    __int64 a3,
                                                    unsigned __int64 a4)
{
  __int64* v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  _BYTE* v37;
  unsigned __int8* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  int v51;
  __int64* v52;
  __int64 v53;
  int* v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  __int64 v73;
  signed __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  int v86;
  unsigned __int64 v88;
  __int64* v89;
  struct {
    _QWORD v90[2];
    __int64 v91;
  } v90_;
  struct {
    __int64 v92;
    unsigned __int64 v93;
    char* v94;
  } v92_;
  struct {
    __int64 v95;
    unsigned __int64 v96;
    _QWORD* v97;
  } v95_;

  a1[6] = 0;
  v4 = a1 + 6;
  a1[7] = 0;
  a1[8] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  v7 = a2[9];
  v9 = a2[14];
  v8 = a2[15];
  v89 = a1 + 6;
  v84 = a2[8];
  if (v7 != 0) {
    if (v7 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_919f10();
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v7, 16, 0);
    v11 = v10 + 24 * v7;
    GameRoutine_1a0ba50(v10, 0, 24 * ((24 * v7 - 24) / 0x18) + 24);
    *a1 = v10;
    a1[1] = v10 + 24 * ((24 * v7 - 24) / 0x18) + 24;
    v4 = v89;
    a1[2] = v11;
  }
  LOWORD(v95_.v95) = 0;
  if (a4 != 0) {
    if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_119:
      String_60a1d0();
    }
    if (a4 >= 0x17) {
      if ((a4 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (a4 | 7) + 1;
      }
      v14 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
      v15 = v13 | 1;
      v4 = v89;
      v12 = (char*)v14;
      v90_.v90[1] = a4;
      v90_.v91 = v14;
      v90_.v90[0] = v15;
    }
    else {
      LOBYTE(v90_.v90[0]) = 2 * a4;
      v12 = (char*)v90_.v90 + 1;
    }
    GameRoutine_1a0b940((__int64)v12, a3, a4);
    v12[a4] = 0;
    v16 = (__int64*)GameRoutine_1a0a680((__int64)v90_.v90, 0, "[", 1u);
    v18 = v16[1];
    v17 = v16[2];
    v92_.v92 = *v16;
    v92_.v93 = v18;
    v92_.v94 = (char*)v17;
    v16[1] = 0;
    v16[2] = 0;
    *v16 = 0;
    v19 = (__int64*)GameRoutine_1a09ce0((__int64)&v92_.v92, "]", 1u);
    v20 = *v19;
    v21 = v19[1];
    v22 = (_QWORD*)v19[2];
    *v19 = 0;
    v19[1] = 0;
    v19[2] = 0;
    v95_.v95 = v20;
    v95_.v96 = v21;
    v95_.v97 = v22;
    if ((v92_.v92 & 1) != 0 && v92_.v94 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v92_.v94);
    }
    if ((v90_.v90[0] & 1) != 0 && v90_.v91 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v90_.v91);
    }
  }
  v85 = v7;
  v26 = a1[6];
  v25 = a1[7];
  v27 = 0xAAAAAAAAAAAAAAABLL * ((v25 - v26) >> 3);
  if (v8 <= v27) {
    if (v8 >= v27) {
      v29 = a1;
      v28 = a1[7];
    }
    else {
      v28 = v26 + 24 * v8;
      v29 = a1;
      if (v28 != v25) {
        v30 = a1[7];
        do {
          v31 = *(_BYTE*)(v30 - 24);
          v30 -= 24;
          if ((v31 & 1) != 0) {
            v32 = *(_QWORD*)(v25 - 8);
            if (v32 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v33 = 128;
              }
              else {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v33,
                                            v32);
            }
          }
          v25 = v30;
        } while (v30 != v28);
      }
      a1[7] = v28;
    }
  }
  else {
    GameRoutine_6b87d0(v4, v8 - v27);
    v28 = a1[7];
    v29 = a1;
  }
  v34 = *v4;
  if (v28 != *v4) {
    v35 = 1;
    v36 = 0;
    do {
      GameRoutine_60a020(v34 + 24 * v36, *(const char**)(v9 + 8 * v36));
      v38 = (unsigned __int8*)(*v4 + 24 * v36);
      v39 = *v38;
      if ((v39 & 1) != 0) {
        v40 = *((_QWORD*)v38 + 1);
      }
      else {
        v40 = v39 >> 1;
      }
      if (v40 != 0) {
        v37 = *((_BYTE**)v38 + 2);
        v41 = (v39 & 1) != 0 ? *((unsigned __int8**)v38 + 2) : v38 + 1;
        if (*v41 == 91) {
          if ((v95_.v95 & 1) != 0) {
            v42 = v95_.v96;
          }
          else {
            v42 = (unsigned __int64)(unsigned __int8)v95_.v95 >> 1;
          }
          if (v42 - 1 < v40) {
            v43 = (v95_.v95 & 1) != 0 ? v95_.v97
                                      : (__int64*)((char*)&v95_.v95 + 1);
            if (GameRoutine_1a09cf0((__int64)v41, (__int64)v43, v42) == 0) {
              v44 = v40 - v42;
              if (v40 - v42 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_119;
              }
              if (v44 >= 0x17) {
                if ((v44 | 7) == 0x17) {
                  v46 = 26;
                }
                else {
                  v46 = (v44 | 7) + 1;
                }
                v45 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v46, 16, 0);
                v92_.v93 = v44;
                v92_.v94 = v45;
                v92_.v92 = v46 | 1;
              }
              else {
                v45 = (char*)&v92_.v92 + 1;
                LOBYTE(v92_.v92) = 2 * v44;
                if (v40 == v42) {
                LABEL_68:
                  v45[v44] = 0;
                  v47 = *v89 + 24 * v36;
                  if ((*(_BYTE*)v47 & 1) != 0) {
                    v48 = *(_QWORD*)(v47 + 16);
                    if (v48 != 0) {
                      v49 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v49 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v48);
                    }
                  }
                  *(_QWORD*)v47 = v92_.v92;
                  *(_QWORD*)(v47 + 8) = v92_.v93;
                  *(_QWORD*)(v47 + 16) = v92_.v94;
                  goto LABEL_40;
                }
              }
              GameRoutine_1a0b940((__int64)v45, (__int64)&v41[v42], v44);
              goto LABEL_68;
            }
          }
          if ((v39 & 1) != 0) {
            *((_QWORD*)v38 + 1) = 0;
          }
          else {
            v37 = v38 + 1;
            *v38 = 0;
          }
          *v37 = 0;
        }
      }
    LABEL_40:
      v29 = a1;
      v4 = v89;
      v36 = v35++;
      v34 = a1[6];
    } while (0xAAAAAAAAAAAAAAABLL * ((a1[7] - v34) >> 3) > v36);
  }
  if (v85 != 0) {
    v50 = 0;
    v51 = 0;
    while (1) {
      v86 = v51;
      v88 = v50;
      v52 = (__int64*)(*v29 + 24 * v50);
      v53 = *v52;
      v54 = (int*)(v84 + 16 * v50);
      v55 = *v54;
      if (0xAAAAAAAAAAAAAAABLL * ((v52[2] - *v52) >> 3) < v55) {
        if ((v55 & 0x80000000) != 0) {
        LABEL_117:
          GameRoutine_64aa00();
        }
        v56 = 3 * v55;
        v57 = v52[1] - v53;
        v58 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v55, 16, 0);
        v59 = v58 + 8 * v56;
        GameRoutine_1a0b950(v58, v53, v57);
        *v52 = v58;
        v52[1] = v58 + v57;
        v50 = v88;
        v4 = v89;
        v52[2] = v59;
        if (v53 != 0) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v53);
        }
      }
      v61 = *v54;
      if (*v54 >= 1) {
        break;
      }
    LABEL_76:
      v50 = (unsigned int)(v86 + 1);
      v51 = v86 + 1;
      if (v85 <= v50) {
        goto LABEL_111;
      }
    }
    v62 = 0;
    while (1) {
      v67 = (__int64*)(*v4 + 24LL * *(int*)(*((_QWORD*)v54 + 1) + 4 * v62));
      v68 = *(unsigned __int8*)v67;
      v69 = v68 >> 1;
      if ((v68 & 1) != 0) {
        v69 = v67[1];
      }
      if (v69 == 0) {
        goto LABEL_87;
      }
      v70 = *v29 + 24 * v50;
      v72 = *(__int64**)(v70 + 8);
      v71 = *(_QWORD*)(v70 + 16);
      if ((unsigned __int64)v72 >= v71) {
        break;
      }
      if ((v68 & 1) != 0) {
        fw_text_String_CopyTerminated(*(__int64**)(v70 + 8), v67[2], v67[1]);
        v66 = v72 + 3;
      }
      else {
        v63 = *v67;
        v64 = v67[1];
        v65 = v67[2];
        v66 = v72 + 3;
        v72[1] = v64;
        v72[2] = v65;
        *v72 = v63;
      }
    LABEL_86:
      *(_QWORD*)(v70 + 8) = v66;
      v61 = *v54;
    LABEL_87:
      if (++v62 >= v61) {
        goto LABEL_76;
      }
    }
    v73 = *(_QWORD*)v70;
    v74 = (signed __int64)v72 - *(_QWORD*)v70;
    v75 = 1 - 0x5555555555555555LL * (v74 >> 3);
    if (v75 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_117;
    }
    v76 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v71 - v73) >> 3);
    if (2 * v76 > v75) {
      v75 = 2 * v76;
    }
    if (v76 >= 0x555555555555555LL) {
      v77 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v77 = v75;
    }
    if (v77 != 0) {
      if (v77 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210();
      }
      v78 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24 * v77,
                                           16, 0);
      v79 = (__int64*)(v78 + v74);
      if ((*(_BYTE*)v67 & 1) == 0) {
        goto LABEL_103;
      }
    }
    else {
      v78 = 0;
      v79 = (__int64*)v74;
      if ((v68 & 1) == 0) {
      LABEL_103:
        v80 = *v67;
        v81 = v67[2];
        v79[1] = v67[1];
        v79[2] = v81;
        *v79 = v80;
      LABEL_106:
        v66 = v79 + 3;
        GameRoutine_1a0b950((__int64)v79 - v74, v73, v74);
        *(_QWORD*)v70 = (char*)v79 - v74;
        *(_QWORD*)(v70 + 8) = v79 + 3;
        *(_QWORD*)(v70 + 16) = v78 + 24 * v77;
        if (v73 != 0) {
          v82 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v73);
        }
        v29 = a1;
        v50 = v88;
        v4 = v89;
        goto LABEL_86;
      }
    }
    fw_text_String_CopyTerminated(v79, v67[2], v67[1]);
    v73 = *(_QWORD*)v70;
    v74 = *(_QWORD*)(v70 + 8) - *(_QWORD*)v70;
    goto LABEL_106;
  }
LABEL_111:
  if ((v95_.v95 & 1) != 0 && v95_.v97 != nullptr) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v83,
                                  (__int64)v95_.v97);
  }
}

void llvm_libcxx_21_libcxx_include___memory_198ad80(__int64 a1, int a2,
                                                    __int64 a3,
                                                    unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  unsigned __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  int v32;
  __int64 v33;
  bool v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  bool v39;
  _QWORD* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  bool v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  float32x2_t* v50;
  float32x2_t v51;
  float v52;
  unsigned __int64 v53;
  float v54;
  float32x2_t** v55;
  __int64 v56;
  unsigned __int64 v57;
  float32x2_t* v58;
  float32x2_t v59;
  float32x2_t v60;
  float v61;
  float32x2_t* v62;
  float32x2_t v63;
  float32x2_t v64;
  float v65;
  float32x2_t v66;
  float32x2_t v67;
  float v68;
  float32x2_t* v69;
  float32x2_t v70;
  float32x2_t v71;
  float v72;
  unsigned __int64 v73;
  float32x2_t* v74;
  float32x2_t v75;
  float32x2_t v76;
  float v77;
  float v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  float32x2_t** v82;
  float v83;
  float v84;
  float v85;
  float v86;
  unsigned __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  struct {
    unsigned __int64 v111;
    int v112;
  } f_;
  int v113;

  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    return;
  }
  if ((*(_DWORD*)(a1 + 8) & 0xF) == 3 || a4 < 3) {
    return;
  }
  v6 = a4 - 1;
  v113 = -1;
  v8 = a4 & 3;
  if (a4 - 1 >= 3) {
    v82 = (float32x2_t**)(a3 + 16);
    v9 = 0;
    v10 = 0x1.fffffe0000000p+127f;
    do {
      v83 = LANES64((*(v82 - 2))[3]).n64_f32[0] + vaddv_f32((*(v82 - 2))[2]);
      if (v83 < v10) {
        v10 = v83;
        v113 = v9;
      }
      v84 = LANES64((*(v82 - 1))[3]).n64_f32[0] + vaddv_f32((*(v82 - 1))[2]);
      if (v84 < v10) {
        v10 = v84;
        v113 = v9 + 1;
      }
      v85 = LANES64((*v82)[3]).n64_f32[0] + vaddv_f32((*v82)[2]);
      if (v85 < v10) {
        v10 = v85;
        v113 = v9 + 2;
      }
      v86 = LANES64(v82[1][3]).n64_f32[0] + vaddv_f32(v82[1][2]);
      if (v86 < v10) {
        v10 = v86;
        v113 = v9 + 3;
      }
      v82 += 4;
      v9 += 4;
    } while ((a4 & 0xFFFFFFFFFFFFFFFCLL) != v9);
  }
  else {
    v9 = 0;
    v10 = 0x1.fffffe0000000p+127f;
  }
  v11 = *(_QWORD*)(a1 + 112);
  if ((a4 & 3) != 0) {
    do {
      v78 = *(float*)(*(_QWORD*)(a3 + 8 * v9) + 24LL) +
            vaddv_f32(*(float32x2_t*)(*(_QWORD*)(a3 + 8 * v9) + 16LL));
      if (v78 < v10) {
        v10 = v78;
        v113 = v9;
      }
      ++v9;
      --v8;
    } while (v8 != 0);
  }
  v12 = (__int64*)(v11 + 72LL * a2);
  v13 = *v12;
  v14 = v12[2];
  v12[1] = *v12;
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a4 > (v14 - v13) >> 2) {
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         4 * a4, 16, 0);
    *v12 = v16;
    v12[1] = v16;
    v12[2] = v16 + 4 * a4;
    if (v13 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v15 + v17, v13);
    }
  }
  GameRoutine_7d6200(v12, &v113);
  v18 = fw_memory_HeapManager_Allocate(
      *v15, ((v6 >> 3) & 0x1FFFFFFFFFFFFFF8LL) + 8, 16, 0);
  v19 = a4 >> 6;
  v20 = v18;
  if (a4 >= 0x40) {
    GameRoutine_1a0ba50(v18, 0, 8 * v19);
  }
  if ((a4 & 0x3F) != 0) {
    *(_QWORD*)(v20 + 8 * v19) &= ~(0xFFFFFFFFFFFFFFFFLL >> -(a4 & 0x3F));
  }
  v21 = a4 & 0x3F;
  if ((a4 & 0x3F) != 0) {
    v22 = (_QWORD*)(v20 + 8 * v19);
    v23 = v21 ^ 0x3F;
    v24 = 64 - v21;
    v25 = (64 - v21) & 3;
    if (v25 != 0) {
      v26 = v21 | 0xFFFFFFC0;
      do {
        v27 = 1LL << v21;
        v28 = v21 == 63;
        ++v26;
        if (v21 == 63) {
          v21 = 0;
        }
        else {
          ++v21;
        }
        *v22 &= ~v27;
        if (v28) {
          v29 = 8;
        }
        else {
          v29 = 0;
        }
        --v25;
        v22 = (_QWORD*)((char*)v22 + v29);
      } while (v25 != 0);
      v24 = -v26;
    }
    if (v23 >= 3) {
      do {
        v30 = 1LL << v21;
        v31 = v21 == 63;
        if (v21 == 63) {
          v32 = 0;
        }
        else {
          v32 = v21 + 1;
        }
        *v22 &= ~v30;
        v33 = v31;
        v34 = v32 == 63;
        v35 = &v22[v33];
        v36 = 1LL << v32;
        if (v32 == 63) {
          v37 = 0;
        }
        else {
          v37 = v32 + 1;
        }
        *v35 &= ~v36;
        v38 = v34;
        v39 = v37 == 63;
        v40 = &v35[v38];
        v41 = 1LL << v37;
        if (v37 == 63) {
          v42 = 0;
        }
        else {
          v42 = v37 + 1;
        }
        *v40 &= ~v41;
        v43 = v39;
        v44 = v42 == 63;
        v45 = &v40[v43];
        v46 = 1LL << v42;
        if (v42 == 63) {
          v21 = 0;
        }
        else {
          v21 = v42 + 1;
        }
        *v45 &= ~v46;
        v47 = v44;
        v24 -= 4;
        v22 = &v45[v47];
      } while (v24 != 0);
    }
  }
  v48 = v113;
  f_.v111 = a4;
  v49 = 0;
  *(_QWORD*)(v20 + (((unsigned __int64)v113 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |=
      1LL << v113;
  do {
    v50 = *(float32x2_t**)(a3 + 8LL * v48);
    f_.v112 = -1;
    PSEUDO_LOW_LANE64(v51, n64_u64, LANES64(v50[2]).n64_u64[0]);
    v52 = LANES64(v50[3]).n64_f32[0];
    if (v6 < 3) {
      v53 = 0;
      v54 = 0x1.fffffe0000000p+127f;
      if ((a4 & 3) == 0) {
        goto LABEL_57;
      }
    LABEL_76:
      v73 = a4 & 3;
      do {
        if (((*(_QWORD*)(v20 + 8 * (v53 >> 6)) >> v53) & 1) == 0) {
          v74 = *(float32x2_t**)(a3 + 8 * v53);
          LANES64(v75).n64_u64[0] =
              LANES64_OF(vsub_f32(v51, v74[2])).n64_u64[0];
          LANES64(v76).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(
                          COERCE_AS(float32x2_t,
                                    COERCE_UNSIGNED_INT(
                                        v52 - LANES64(v74[3]).n64_f32[0])),
                          COERCE_AS(float32x2_t,
                                    COERCE_UNSIGNED_INT(
                                        v52 - LANES64(v74[3]).n64_f32[0]))),
                      vmul_f32(v75, v75)))
                  .n64_u64[0];
          v77 = LANES64_OF(vsqrt_f32(vpadd_f32(v76, v76))).n64_f32[0];
          if (v77 < v54) {
            v54 = v77;
            f_.v112 = v53;
          }
        }
        ++v53;
        --v73;
      } while (v73 != 0);
      goto LABEL_57;
    }
    v55 = (float32x2_t**)(a3 + 16);
    v54 = 0x1.fffffe0000000p+127f;
    v56 = 3;
    do {
      v57 = *(_QWORD*)(v20 + 8 * ((unsigned __int64)(v56 - 3) >> 6));
      if (((v57 >> ((v56 - 3) & 0x3C)) & 1) == 0) {
        v58 = *(v55 - 2);
        LANES64(v59).n64_u64[0] = LANES64_OF(vsub_f32(v51, v58[2])).n64_u64[0];
        LANES64(v60).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v58[3]).n64_f32[0])),
                             COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v58[3]).n64_f32[0]))),
                    vmul_f32(v59, v59)))
                .n64_u64[0];
        v61 = LANES64_OF(vsqrt_f32(vpadd_f32(v60, v60))).n64_f32[0];
        if (v61 < v54) {
          v54 = v61;
          f_.v112 = v56 - 3;
        }
      }
      if (((v57 >> ((v56 - 2) & 0x3D)) & 1) == 0) {
        v62 = *(v55 - 1);
        LANES64(v63).n64_u64[0] = LANES64_OF(vsub_f32(v51, v62[2])).n64_u64[0];
        LANES64(v64).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v62[3]).n64_f32[0])),
                             COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v62[3]).n64_f32[0]))),
                    vmul_f32(v63, v63)))
                .n64_u64[0];
        v65 = LANES64_OF(vsqrt_f32(vpadd_f32(v64, v64))).n64_f32[0];
        if (v65 < v54) {
          v54 = v65;
          f_.v112 = v56 - 2;
        }
      }
      if (((v57 >> ((v56 - 1) & 0x3E)) & 1) == 0) {
        LANES64(v66).n64_u64[0] =
            LANES64_OF(vsub_f32(v51, (*v55)[2])).n64_u64[0];
        LANES64(v67).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(
                        COERCE_AS(float32x2_t,
                                  COERCE_UNSIGNED_INT(
                                      v52 - LANES64((*v55)[3]).n64_f32[0])),
                        COERCE_AS(float32x2_t,
                                  COERCE_UNSIGNED_INT(
                                      v52 - LANES64((*v55)[3]).n64_f32[0]))),
                    vmul_f32(v66, v66)))
                .n64_u64[0];
        v68 = LANES64_OF(vsqrt_f32(vpadd_f32(v67, v67))).n64_f32[0];
        if (v68 < v54) {
          v54 = v68;
          f_.v112 = v56 - 1;
        }
      }
      if (((v57 >> v56) & 1) == 0) {
        v69 = v55[1];
        LANES64(v70).n64_u64[0] = LANES64_OF(vsub_f32(v51, v69[2])).n64_u64[0];
        LANES64(v71).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v69[3]).n64_f32[0])),
                             COERCE_AS(float32x2_t,
                                       COERCE_UNSIGNED_INT(
                                           v52 - LANES64(v69[3]).n64_f32[0]))),
                    vmul_f32(v70, v70)))
                .n64_u64[0];
        v72 = LANES64_OF(vsqrt_f32(vpadd_f32(v71, v71))).n64_f32[0];
        if (v72 < v54) {
          v54 = v72;
          f_.v112 = v56;
        }
      }
      v56 += 4;
      v55 += 4;
    } while (v56 - (a4 & 0xFFFFFFFFFFFFFFFCLL) != 3);
    v53 = v56 - 3;
    if ((a4 & 3) != 0) {
      goto LABEL_76;
    }
  LABEL_57:
    GameRoutine_7d6200(v12, &f_.v112);
    v48 = f_.v112;
    ++v49;
    v113 = f_.v112;
    *(_QWORD*)(v20 + (((unsigned __int64)f_.v112 >> 3) &
                      0x1FFFFFFFFFFFFFF8LL)) |= 1LL << f_.v112;
  } while (v49 != v6);
  v79 = v12[3];
  v80 = a4;
  v81 = (v12[4] - v79) >> 2;
  if (a4 <= v81) {
    if (a4 < v81) {
      v12[4] = v79 + 4 * a4;
    }
  }
  else {
    GameRoutine_c3f7a0(v12 + 3, a4 - v81);
  }
  v87 = a4 & 7;
  if (v6 >= 7) {
    v88 = 0;
    do {
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88)) = v88;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 4)) = v88 + 1;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 8)) = v88 + 2;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 12)) = v88 + 3;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 16)) = v88 + 4;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 20)) = v88 + 5;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88 + 24)) = v88 + 6;
      v89 = v88 + 7;
      v90 = *v12 + 4 * v88;
      v88 += 8;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(v90 + 28)) = v89;
    } while (v88 != (a4 & 0xFFFFFFFFFFFFFFF8LL));
  }
  else {
    v88 = 0;
  }
  if ((a4 & 7) != 0) {
    do {
      --v87;
      *(_DWORD*)(v12[3] + 4LL * *(int*)(*v12 + 4 * v88)) = v88;
      ++v88;
    } while (v87 != 0);
  }
  v91 = (_QWORD*)v12[6];
  v92 = v12[8] - (_QWORD)v91;
  v12[7] = (__int64)v91;
  if (a4 > v92 >> 3) {
    v93 = fw_memory_g_heap_manager_ptr;
    v94 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * a4, 16, 0);
    v12[6] = v94;
    v12[7] = v94;
    v12[8] = v94 + 8 * a4;
    if (v91 != nullptr) {
      v95 = 128;
      if (*(_QWORD*)(*(_QWORD*)v93 + 200LL) == 0) {
        v95 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v93 + v95, (__int64)v91);
      v91 = (_QWORD*)v12[7];
    }
    else {
      v91 = (_QWORD*)v94;
    }
  }
  v96 = 0;
  do {
    v97 = *(int*)(*v12 + 4 * v96);
    v98 = v12[8];
    if ((unsigned __int64)v91 < v98) {
      *v91++ = *(_QWORD*)(a3 + 8 * v97);
    }
    else {
      v99 = v12[6];
      v100 = (unsigned __int64)v91 - v99;
      v101 = ((__int64)v91 - v99) >> 3;
      v102 = v101 + 1;
      if ((unsigned __int64)(v101 + 1) >> 61 != 0) {
        GameRoutine_c31680();
      }
      v103 = v98 - v99;
      if (v103 >> 2 > v102) {
        v102 = v103 >> 2;
      }
      if ((unsigned __int64)v103 >= 0x7FFFFFFFFFFFFFF8LL) {
        v104 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v104 = v102;
      }
      if (v104 != 0) {
        if (v104 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v105 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v104, 16, 0);
      }
      else {
        v105 = 0;
      }
      v106 = *(_QWORD*)(a3 + 8 * v97);
      v107 = v105 + 8 * v104;
      v108 = v105 + v100 - 8 * v101;
      *(_QWORD*)(v105 + v100) = v106;
      v91 = (_QWORD*)(v105 + v100 + 8);
      GameRoutine_1a0b950(v108, v99, v100);
      v12[6] = v108;
      v12[7] = (__int64)v91;
      v12[8] = v107;
      if (v99 != 0) {
        v109 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v109 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v99);
      }
      v80 = f_.v111;
    }
    ++v96;
    v12[7] = (__int64)v91;
  } while (v80 != v96);
  v110 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v110 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                                v20);
}

#pragma GCC visibility pop
