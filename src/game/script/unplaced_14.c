#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_cb4e70(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_cb5190(_QWORD* result, _QWORD*);
__int64* GameRoutine_eabe20(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* HubCharacterNatives_cb40c0(__int64*, __int64*);
__int64* HubCharacterNatives_cb4210(__int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fd4080[])();
extern __int64 (*GameData_1fd4100[])();
extern __int64 (*GameData_1fee6a0[3])();
extern __int64 (*decltype_c81af0_ptr_1fee688[6])();
extern __int64 (*game_cmdbtl_CmdBtlDieAfterEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlDieBeforeEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlDieTalkEvent_vtable[])();
extern __int64 GameData_212d240;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* game_hub_g_motions;
void GameRoutine_f47e80(__int64, int, __int64*);
void __attribute__((noreturn)) GameRoutine_c8c1e0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_script_cab8c0(_QWORD* a1);
void game_script_ed0c20(int a1, unsigned __int8* a2, unsigned int a3,
                        unsigned __int8* a4, __int64* a5);
const char* game_script_108c3c0(int a1);

void game_script_cab8c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12[4];
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 v15;
    char gap88_[24];
    __int64* v16;
  } v15_;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v1 = a1[95];
  v2 = a1[96];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v1 != 0 && *(_BYTE*)(v1 + 272) == 1 && *(_QWORD*)(v1 + 264) != 0) {
    BYTE5(v12[2]) = 0;
    HIWORD(v12[2]) = 0;
    v13_.v14 = nullptr;
    v15_.v16 = nullptr;
    v17_.v18 = nullptr;
    strcpy((char*)v12, "(MID_HubMenu_SubQues");
    v19_.v20 = v19_.v19;
    v19_.v19[0] = GameData_1fd4080;
    v19_.v19[1] = a1;
    GameRoutine_cb4e70(v19_.v19, v17_.v17);
    if (v19_.v20 == v19_.v19) {
      v4 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_11;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v4))((__int64)v19_.v20);
  LABEL_11:
    v19_.v20 = v19_.v19;
    v19_.v19[0] = GameData_1fd4100;
    v19_.v19[1] = a1;
    GameRoutine_cb5190(v19_.v19, v13_.v13);
    if (v19_.v20 == v19_.v19) {
      v5 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_16;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v5))((__int64)v19_.v20);
  LABEL_16:
    v6 = a1[147];
    if (v6 >= a1[148]) {
      v7 = HubCharacterNatives_cb40c0(a1 + 146, v12);
    }
    else {
      HubCharacterNatives_cb4210((__int64*)a1[147], v12);
      v7 = (__int64*)(v6 + 176);
    }
    a1[147] = v7;
    if (v17_.v18 == v17_.v17) {
      v8 = 32;
    }
    else {
      if (v17_.v18 == nullptr) {
        goto LABEL_24;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v17_.v18 + v8))((__int64)v17_.v18);
  LABEL_24:
    if (v15_.v16 == &v15_.v15) {
      v9 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_29;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v9))((__int64)v15_.v16);
  LABEL_29:
    if (v13_.v14 == v13_.v13) {
      v10 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
      LABEL_34:
        if ((v12[0] & 1) != 0 && v12[2] != 0) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v12[2]);
        }
        goto LABEL_39;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v13_.v14 + v10))((__int64)v13_.v14);
    goto LABEL_34;
  }
LABEL_39:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
}

void game_script_ed0c20(int a1, unsigned __int8* a2, unsigned int a3,
                        unsigned __int8* a4, __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 (*v28)();
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 (*v34)();
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 (*v40)();
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 (*v46)();
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 (*v52)();
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
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
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
  struct {
    __int64 v107;
    unsigned __int64 v108;
  } v107_;
  struct {
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    unsigned __int64 v113;
  } v109_;
  struct {
    __int64 v114;
    unsigned __int64 v115;
    __int64 v116;
  } v114_;
  struct {
    __int64 v117;
    unsigned __int64 v118;
  } v117_;
  struct {
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    unsigned __int64 v123;
  } v119_;
  struct {
    __int64 v124;
    unsigned __int64 v125;
    __int64 v126;
  } v124_;
  struct {
    __int64 v127;
    unsigned __int64 v128;
  } v127_;
  struct {
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    unsigned __int64 v133;
  } v129_;
  struct {
    __int64 v134;
    unsigned __int64 v135;
    __int64 v136;
  } v134_;
  struct {
    __int64 v137;
    unsigned __int64 v138;
    __int64 v139;
  } v137_;
  struct {
    __int64 v140;
    __int64 v141;
    __int64 v142;
    unsigned __int64 v143;
  } v140_;
  struct {
    __int64 v144;
    unsigned __int64 v145;
    __int64 v146;
  } v144_;
  struct {
    __int64 v147;
    unsigned __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    unsigned __int64 v153;
  } v147_;
  struct {
    __int64 v154;
    unsigned __int64 v155;
    __int64 v156;
  } v154_;
  _QWORD v157[2];

  v5 = *a2;
  v144_.v145 = 0;
  v144_.v146 = 0;
  v144_.v144 = 0;
  v137_.v137 = 0;
  v137_.v138 = 0;
  v137_.v139 = 0;
  v140_.v140 = 0;
  v10 = v5 >> 1;
  v11 = (v5 & 1) == 0;
  v12 = *((_QWORD*)a2 + 1);
  v13 = *((_QWORD*)a2 + 2);
  v140_.v141 = 0;
  v140_.v142 = 0;
  if (v11) {
    v14 = v10;
  }
  else {
    v14 = v12;
  }
  if (v11) {
    v15 = (__int64)(a2 + 1);
  }
  else {
    v15 = v13;
  }
  GameRoutine_60a060((char*)&v137_.v137, v15, v14);
  v140_.v143 = a3 | 0xFFFFFFFF00000000LL;
  v16 = *a4;
  if ((v16 & 1) != 0) {
    v17 = *((_QWORD*)a4 + 1);
  }
  else {
    v17 = v16 >> 1;
  }
  if ((v16 & 1) != 0) {
    v18 = *((_QWORD*)a4 + 2);
  }
  else {
    v18 = (__int64)(a4 + 1);
  }
  GameRoutine_60a060((char*)&v144_.v144, v18, v17);
  if (&v140_.v140 != a5) {
    GameRoutine_eabe20(&v140_.v140, *a5, a5[1], (a5[1] - *a5) >> 5);
  }
  v19 = *(_QWORD*)GameData_212d240;
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  if (a1 == 8) {
    if ((v137_.v137 & 1) != 0) {
      fw_text_String_CopyTerminated(&v107_.v107, v137_.v139, v137_.v138);
    }
    else {
      v107_.v107 = v137_.v137;
      v107_.v108 = v137_.v138;
      v109_.v109 = v137_.v139;
    }
    v29 = v140_.v140;
    v30 = v140_.v141;
    v109_.v111 = 0;
    v109_.v112 = 0;
    v31 = v140_.v141 - v140_.v140;
    v109_.v110 = 0;
    if (v140_.v141 != v140_.v140) {
      if (v31 < 0) {
        goto LABEL_227;
      }
      v32 =
          fw_memory_HeapManager_Allocate(*v20, v140_.v141 - v140_.v140, 16, 0);
      v109_.v110 = v32;
      v109_.v111 = v32;
      v109_.v112 = v32 + v31;
      do {
        *(_BYTE*)v32 = 0;
        *(_DWORD*)(v32 + 24) = -1;
        v33 = *(_DWORD*)(v29 + 24);
        if (v33 != -1) {
          v34 = GameData_1fee6a0[(unsigned int)v33];
          v147_.v147 = v32;
          ((void (*)(__int64*, __int64))v34)(&v147_.v147, v29);
          *(_DWORD*)(v32 + 24) = v33;
        }
        v29 += 32;
        v32 += 32;
      } while (v29 != v30);
      v109_.v111 = v32;
    }
    v109_.v113 = v140_.v143;
    if ((v144_.v144 & 1) != 0) {
      fw_text_String_CopyTerminated(&v114_.v114, v144_.v146, v144_.v145);
      if ((v107_.v107 & 1) != 0) {
        goto LABEL_44;
      }
    }
    else {
      v114_.v114 = v144_.v144;
      v114_.v115 = v144_.v145;
      v114_.v116 = v144_.v146;
      if ((v107_.v107 & 1) != 0) {
      LABEL_44:
        fw_text_String_CopyTerminated(&v147_.v147, v109_.v109, v107_.v108);
      LABEL_69:
        v47 = v109_.v110;
        v48 = v109_.v111;
        v147_.v151 = 0;
        v147_.v152 = 0;
        v49 = v109_.v111 - v109_.v110;
        v147_.v150 = 0;
        if (v109_.v111 != v109_.v110) {
          if (v49 < 0) {
            goto LABEL_227;
          }
          v50 = fw_memory_HeapManager_Allocate(*v20, v109_.v111 - v109_.v110,
                                               16, 0);
          v147_.v150 = v50;
          v147_.v151 = v50;
          v147_.v152 = v50 + v49;
          do {
            *(_BYTE*)v50 = 0;
            *(_DWORD*)(v50 + 24) = -1;
            v51 = *(_DWORD*)(v47 + 24);
            if (v51 != -1) {
              v52 = GameData_1fee6a0[(unsigned int)v51];
              v157[0] = v50;
              ((void (*)(_QWORD*, __int64))v52)(v157, v47);
              *(_DWORD*)(v50 + 24) = v51;
            }
            v47 += 32;
            v50 += 32;
          } while (v47 != v48);
          v147_.v151 = v50;
        }
        v147_.v153 = v109_.v113;
        if ((v114_.v114 & 1) != 0) {
          fw_text_String_CopyTerminated(&v154_.v154, v114_.v116, v114_.v115);
        }
        else {
          v154_.v154 = v114_.v114;
          v154_.v155 = v114_.v115;
          v154_.v156 = v114_.v116;
        }
        GameRoutine_f47e80((__int64)v21, 8, &v147_.v147);
        if ((v154_.v154 & 1) != 0 && v154_.v156 != 0) {
          v64 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free(*v20 + v64, v154_.v156);
        }
        v65 = v147_.v150;
        if (v147_.v150 != 0) {
          v66 = v147_.v151;
          if (v147_.v150 == v147_.v151) {
            goto LABEL_152;
          }
          do {
            v67 = *(unsigned int*)(v66 - 8);
            v68 = v66 - 32;
            if ((_DWORD)v67 != -1) {
              ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr_1fee688[v67])(
                  v157, v66 - 32);
            }
            *(_DWORD*)(v66 - 8) = -1;
            v66 -= 32;
          } while (v68 != v65);
          v147_.v151 = v65;
          v65 = v147_.v150;
          if (v147_.v150 != 0) {
          LABEL_152:
            v83 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v83, v65);
          }
        }
        if ((v147_.v147 & 1) != 0 && v147_.v149 != 0) {
          v84 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free(*v20 + v84, v147_.v149);
        }
        *v21 = game_cmdbtl_CmdBtlDieTalkEvent_vtable;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v19 + 8) + 24LL))(v19 + 8,
                                                                     v21);
        if ((v114_.v114 & 1) != 0 && v114_.v116 != 0) {
          v85 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v85 = 56;
          }
          nn_mem_StandardAllocator_Free(*v20 + v85, v114_.v116);
        }
        v86 = v109_.v110;
        v69 = &v109_.v109;
        if (v109_.v110 != 0) {
          v87 = v109_.v111;
          if (v109_.v110 == v109_.v111) {
            goto LABEL_172;
          }
          do {
            v88 = *(unsigned int*)(v87 - 8);
            v89 = v87 - 32;
            if ((_DWORD)v88 != -1) {
              ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fee688[v88])(
                  &v147_.v147, v87 - 32);
            }
            *(_DWORD*)(v87 - 8) = -1;
            v87 -= 32;
          } while (v89 != v86);
          v109_.v111 = v86;
          v86 = v109_.v110;
          if (v109_.v110 != 0) {
          LABEL_172:
            v90 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v90 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v90, v86);
          }
        }
        if ((v107_.v107 & 1) != 0) {
          goto LABEL_202;
        }
        goto LABEL_206;
      }
    }
    v147_.v147 = v107_.v107;
    v147_.v148 = v107_.v108;
    v147_.v149 = v109_.v109;
    goto LABEL_69;
  }
  if (a1 == 7) {
    if ((v137_.v137 & 1) != 0) {
      fw_text_String_CopyTerminated(&v117_.v117, v137_.v139, v137_.v138);
    }
    else {
      v117_.v117 = v137_.v137;
      v117_.v118 = v137_.v138;
      v119_.v119 = v137_.v139;
    }
    v23 = v140_.v140;
    v24 = v140_.v141;
    v119_.v121 = 0;
    v119_.v122 = 0;
    v25 = v140_.v141 - v140_.v140;
    v119_.v120 = 0;
    if (v140_.v141 != v140_.v140) {
      if (v25 < 0) {
        goto LABEL_227;
      }
      v26 =
          fw_memory_HeapManager_Allocate(*v20, v140_.v141 - v140_.v140, 16, 0);
      v119_.v120 = v26;
      v119_.v121 = v26;
      v119_.v122 = v26 + v25;
      do {
        *(_BYTE*)v26 = 0;
        *(_DWORD*)(v26 + 24) = -1;
        v27 = *(_DWORD*)(v23 + 24);
        if (v27 != -1) {
          v28 = GameData_1fee6a0[(unsigned int)v27];
          v147_.v147 = v26;
          ((void (*)(__int64*, __int64))v28)(&v147_.v147, v23);
          *(_DWORD*)(v26 + 24) = v27;
        }
        v23 += 32;
        v26 += 32;
      } while (v23 != v24);
      v119_.v121 = v26;
    }
    v119_.v123 = v140_.v143;
    if ((v144_.v144 & 1) != 0) {
      fw_text_String_CopyTerminated(&v124_.v124, v144_.v146, v144_.v145);
      if ((v117_.v117 & 1) != 0) {
        goto LABEL_33;
      }
    }
    else {
      v124_.v124 = v144_.v144;
      v124_.v125 = v144_.v145;
      v124_.v126 = v144_.v146;
      if ((v117_.v117 & 1) != 0) {
      LABEL_33:
        fw_text_String_CopyTerminated(&v147_.v147, v119_.v119, v117_.v118);
      LABEL_58:
        v41 = v119_.v120;
        v42 = v119_.v121;
        v147_.v151 = 0;
        v147_.v152 = 0;
        v43 = v119_.v121 - v119_.v120;
        v147_.v150 = 0;
        if (v119_.v121 == v119_.v120) {
          goto LABEL_65;
        }
        if ((v43 & 0x8000000000000000LL) == 0) {
          v44 = fw_memory_HeapManager_Allocate(*v20, v119_.v121 - v119_.v120,
                                               16, 0);
          v147_.v150 = v44;
          v147_.v151 = v44;
          v147_.v152 = v44 + v43;
          do {
            *(_BYTE*)v44 = 0;
            *(_DWORD*)(v44 + 24) = -1;
            v45 = *(_DWORD*)(v41 + 24);
            if (v45 != -1) {
              v46 = GameData_1fee6a0[(unsigned int)v45];
              v157[0] = v44;
              ((void (*)(_QWORD*, __int64))v46)(v157, v41);
              *(_DWORD*)(v44 + 24) = v45;
            }
            v41 += 32;
            v44 += 32;
          } while (v41 != v42);
          v147_.v151 = v44;
        LABEL_65:
          v147_.v153 = v119_.v123;
          if ((v124_.v124 & 1) != 0) {
            fw_text_String_CopyTerminated(&v154_.v154, v124_.v126, v124_.v125);
          }
          else {
            v154_.v154 = v124_.v124;
            v154_.v155 = v124_.v125;
            v154_.v156 = v124_.v126;
          }
          GameRoutine_f47e80((__int64)v21, 7, &v147_.v147);
          if ((v154_.v154 & 1) != 0 && v154_.v156 != 0) {
            v59 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v59, v154_.v156);
          }
          v60 = v147_.v150;
          if (v147_.v150 != 0) {
            v61 = v147_.v151;
            if (v147_.v150 == v147_.v151) {
              goto LABEL_126;
            }
            do {
              v62 = *(unsigned int*)(v61 - 8);
              v63 = v61 - 32;
              if ((_DWORD)v62 != -1) {
                ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr_1fee688[v62])(
                    v157, v61 - 32);
              }
              *(_DWORD*)(v61 - 8) = -1;
              v61 -= 32;
            } while (v63 != v60);
            v147_.v151 = v60;
            v60 = v147_.v150;
            if (v147_.v150 != 0) {
            LABEL_126:
              v75 = 128;
              if (*(_QWORD*)(*v20 + 200) == 0) {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free(*v20 + v75, v60);
            }
          }
          if ((v147_.v147 & 1) != 0 && v147_.v149 != 0) {
            v76 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v76, v147_.v149);
          }
          *v21 = game_cmdbtl_CmdBtlDieAfterEvent_vtable;
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v19 + 8) + 24LL))(v19 + 8,
                                                                       v21);
          if ((v124_.v124 & 1) != 0 && v124_.v126 != 0) {
            v77 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v77 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v77, v124_.v126);
          }
          v78 = v119_.v120;
          v69 = &v119_.v119;
          if (v119_.v120 != 0) {
            v79 = v119_.v121;
            if (v119_.v120 == v119_.v121) {
              goto LABEL_146;
            }
            do {
              v80 = *(unsigned int*)(v79 - 8);
              v81 = v79 - 32;
              if ((_DWORD)v80 != -1) {
                ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fee688[v80])(
                    &v147_.v147, v79 - 32);
              }
              *(_DWORD*)(v79 - 8) = -1;
              v79 -= 32;
            } while (v81 != v78);
            v119_.v121 = v78;
            v78 = v119_.v120;
            if (v119_.v120 != 0) {
            LABEL_146:
              v82 = 128;
              if (*(_QWORD*)(*v20 + 200) == 0) {
                v82 = 56;
              }
              nn_mem_StandardAllocator_Free(*v20 + v82, v78);
            }
          }
          if ((v117_.v117 & 1) == 0) {
            goto LABEL_206;
          }
        LABEL_202:
          if (*v69 != 0) {
            v99 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v99 = 56;
            }
            nn_mem_StandardAllocator_Free(*v20 + v99, *v69);
          }
          goto LABEL_206;
        }
      LABEL_227:
        GameRoutine_c8c1e0();
      }
    }
    v147_.v147 = v117_.v117;
    v147_.v148 = v117_.v118;
    v147_.v149 = v119_.v119;
    goto LABEL_58;
  }
  v22 = v20;
  if ((v137_.v137 & 1) != 0) {
    fw_text_String_CopyTerminated(&v127_.v127, v137_.v139, v137_.v138);
  }
  else {
    v127_.v127 = v137_.v137;
    v127_.v128 = v137_.v138;
    v129_.v129 = v137_.v139;
  }
  v35 = v140_.v140;
  v36 = v140_.v141;
  v129_.v131 = 0;
  v129_.v132 = 0;
  v37 = v140_.v141 - v140_.v140;
  v129_.v130 = 0;
  if (v140_.v141 != v140_.v140) {
    if (v37 < 0) {
      goto LABEL_227;
    }
    v38 = fw_memory_HeapManager_Allocate(*v22, v140_.v141 - v140_.v140, 16, 0);
    v129_.v130 = v38;
    v129_.v131 = v38;
    v129_.v132 = v38 + v37;
    do {
      *(_BYTE*)v38 = 0;
      *(_DWORD*)(v38 + 24) = -1;
      v39 = *(_DWORD*)(v35 + 24);
      if (v39 != -1) {
        v40 = GameData_1fee6a0[(unsigned int)v39];
        v147_.v147 = v38;
        ((void (*)(__int64*, __int64))v40)(&v147_.v147, v35);
        *(_DWORD*)(v38 + 24) = v39;
      }
      v35 += 32;
      v38 += 32;
    } while (v35 != v36);
    v129_.v131 = v38;
  }
  v129_.v133 = v140_.v143;
  if ((v144_.v144 & 1) != 0) {
    fw_text_String_CopyTerminated(&v134_.v134, v144_.v146, v144_.v145);
    if ((v127_.v127 & 1) != 0) {
      goto LABEL_55;
    }
  LABEL_79:
    v147_.v147 = v127_.v127;
    v147_.v148 = v127_.v128;
    v147_.v149 = v129_.v129;
    goto LABEL_80;
  }
  v134_.v134 = v144_.v144;
  v134_.v135 = v144_.v145;
  v134_.v136 = v144_.v146;
  if ((v127_.v127 & 1) == 0) {
    goto LABEL_79;
  }
LABEL_55:
  fw_text_String_CopyTerminated(&v147_.v147, v129_.v129, v127_.v128);
LABEL_80:
  v53 = v129_.v130;
  v54 = v129_.v131;
  v147_.v151 = 0;
  v147_.v152 = 0;
  v55 = v129_.v131 - v129_.v130;
  v147_.v150 = 0;
  if (v129_.v131 != v129_.v130) {
    if (v55 < 0) {
      goto LABEL_227;
    }
    v56 = fw_memory_HeapManager_Allocate(*v22, v129_.v131 - v129_.v130, 16, 0);
    v147_.v150 = v56;
    v147_.v151 = v56;
    v147_.v152 = v56 + v55;
    do {
      *(_BYTE*)v56 = 0;
      *(_DWORD*)(v56 + 24) = -1;
      v57 = *(_DWORD*)(v53 + 24);
      if (v57 != -1) {
        v58 = GameData_1fee6a0[(unsigned int)v57];
        v157[0] = v56;
        ((void (*)(_QWORD*, __int64))v58)(v157, v53);
        *(_DWORD*)(v56 + 24) = v57;
      }
      v53 += 32;
      v56 += 32;
    } while (v53 != v54);
    v147_.v151 = v56;
  }
  v147_.v153 = v129_.v133;
  if ((v134_.v134 & 1) != 0) {
    fw_text_String_CopyTerminated(&v154_.v154, v134_.v136, v134_.v135);
  }
  else {
    v154_.v154 = v134_.v134;
    v154_.v155 = v134_.v135;
    v154_.v156 = v134_.v136;
  }
  v20 = v22;
  GameRoutine_f47e80((__int64)v21, 6, &v147_.v147);
  v69 = &v129_.v129;
  if ((v154_.v154 & 1) != 0 && v154_.v156 != 0) {
    v70 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*v22 + v70, v154_.v156);
  }
  v71 = v147_.v150;
  if (v147_.v150 != 0) {
    v72 = v147_.v151;
    if (v147_.v150 == v147_.v151) {
      goto LABEL_178;
    }
    do {
      v73 = *(unsigned int*)(v72 - 8);
      v74 = v72 - 32;
      if ((_DWORD)v73 != -1) {
        ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr_1fee688[v73])(
            v157, v72 - 32);
      }
      *(_DWORD*)(v72 - 8) = -1;
      v72 -= 32;
    } while (v74 != v71);
    v147_.v151 = v71;
    v71 = v147_.v150;
    if (v147_.v150 != 0) {
    LABEL_178:
      v91 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v91, v71);
    }
  }
  if ((v147_.v147 & 1) != 0 && v147_.v149 != 0) {
    v92 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*v22 + v92, v147_.v149);
  }
  *v21 = game_cmdbtl_CmdBtlDieBeforeEvent_vtable;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v19 + 8) + 24LL))(v19 + 8, v21);
  if ((v134_.v134 & 1) != 0 && v134_.v136 != 0) {
    v93 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v93 = 56;
    }
    nn_mem_StandardAllocator_Free(*v22 + v93, v134_.v136);
  }
  v94 = v129_.v130;
  if (v129_.v130 != 0) {
    v95 = v129_.v131;
    if (v129_.v130 == v129_.v131) {
      goto LABEL_198;
    }
    do {
      v96 = *(unsigned int*)(v95 - 8);
      v97 = v95 - 32;
      if ((_DWORD)v96 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fee688[v96])(
            &v147_.v147, v95 - 32);
      }
      *(_DWORD*)(v95 - 8) = -1;
      v95 -= 32;
    } while (v97 != v94);
    v129_.v131 = v94;
    v94 = v129_.v130;
    if (v129_.v130 != 0) {
    LABEL_198:
      v98 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v98 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v98, v94);
    }
  }
  if ((v127_.v127 & 1) != 0) {
    goto LABEL_202;
  }
LABEL_206:
  if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
    v100 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free(*v20 + v100, v144_.v146);
  }
  v101 = v140_.v140;
  if (v140_.v140 != 0) {
    v102 = v140_.v141;
    if (v140_.v140 == v140_.v141) {
      goto LABEL_218;
    }
    do {
      v103 = *(unsigned int*)(v102 - 8);
      v104 = v102 - 32;
      if ((_DWORD)v103 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fee688[v103])(
            &v147_.v147, v102 - 32);
      }
      *(_DWORD*)(v102 - 8) = -1;
      v102 -= 32;
    } while (v104 != v101);
    v140_.v141 = v101;
    v101 = v140_.v140;
    if (v140_.v140 != 0) {
    LABEL_218:
      v105 = 128;
      if (*(_QWORD*)(*v20 + 200) == 0) {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free(*v20 + v105, v101);
    }
  }
  if ((v137_.v137 & 1) != 0 && v137_.v139 != 0) {
    v106 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v106 = 56;
    }
    nn_mem_StandardAllocator_Free(*v20 + v106, v137_.v139);
  }
}

const char* game_script_108c3c0(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  const char* v8;
  __int64 v10;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v10 = v5[1];
            if (v10 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_35;
              }
            }
            else if ((v10 & v2) != v3) {
              goto LABEL_21;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_35:
              v6 = *((_DWORD*)v5 + 5);
              goto LABEL_21;
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              goto LABEL_21;
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            goto LABEL_21;
          }
        }
      }
    }
  }
  v6 = 639;
LABEL_21:
  v8 = (&game_hub_g_motions)[5 * v6];
  if (v8 == nullptr || *v8 == 45) {
    v8 = "Null";
    if (a1 == 1525034596) {
      v8 = "Attack*";
    }
    if (a1 == 143741767) {
      v8 = "Evasion*";
    }
    if (a1 == -270062627) {
      return "Damage*";
    }
  }
  return v8;
}

#pragma GCC visibility pop
