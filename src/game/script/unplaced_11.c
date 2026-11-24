#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__n128 GameRoutine_eaea00(__int64, int, __int64*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
char** GameRoutine_eabe20(char** result, __int64, __int64, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fee6a0[3])();
extern __int64 (*decltype_c81af0_ptr_1fee688[6])();
extern __int64 (*game_cmdbtl_CmdBtlBattleAfterEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlBattleBeforeEvent_vtable[])();
extern __int64 (*game_cmdbtl_CmdBtlBattleTalkEvent_vtable[])();
extern __int64 GameData_212d240;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_c8c1e0();
__n128 game_script_ecea00(int a1, unsigned __int8* a2, int a3,
                          unsigned __int8* a4, __int64* a5);

__n128 game_script_ecea00(int a1, unsigned __int8* a2, int a3,
                          unsigned __int8* a4, __int64* a5)
{

#pragma clang fp contract(off)
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
  char* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 (*v28)();
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 (*v34)();
  char* v35;
  char* v36;
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
  __n128 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __n128 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __n128 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __n128 result;
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
  char* v105;
  char* v106;
  __int64 v107;
  char* v108;
  __int64 v109;
  __int64 v110;
  struct {
    __int64 v111;
    unsigned __int64 v112;
  } v111_;
  struct {
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    int v117;
  } v113_;
  struct {
    __int64 v118;
    unsigned __int64 v119;
    __int64 v120;
  } v118_;
  struct {
    __int64 v121;
    unsigned __int64 v122;
  } v121_;
  struct {
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    int v127;
  } v123_;
  struct {
    __int64 v128;
    unsigned __int64 v129;
    __int64 v130;
  } v128_;
  struct {
    __int64 v131;
    unsigned __int64 v132;
  } v131_;
  struct {
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    int v137;
  } v133_;
  struct {
    __int64 v138;
    unsigned __int64 v139;
    __int64 v140;
  } v138_;
  struct {
    __int64 v141;
    unsigned __int64 v142;
    __int64 v143;
  } v141_;
  struct {
    char* v144;
    char* v145;
    __int64 v146;
    int v147;
  } v144_;
  struct {
    __int64 v148;
    unsigned __int64 v149;
    __int64 v150;
  } v148_;
  struct {
    __int64 v151;
    unsigned __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    int v157;
  } v151_;
  struct {
    __int64 v158;
    unsigned __int64 v159;
    __int64 v160;
  } v158_;
  _QWORD v161[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *a2;
  v148_.v149 = 0;
  v148_.v150 = 0;
  v148_.v148 = 0;
  v141_.v141 = 0;
  v141_.v142 = 0;
  v141_.v143 = 0;
  v144_.v144 = nullptr;
  v10 = v5 >> 1;
  v11 = (v5 & 1) == 0;
  v12 = *((_QWORD*)a2 + 1);
  v13 = *((_QWORD*)a2 + 2);
  v144_.v145 = nullptr;
  v144_.v146 = 0;
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
  GameRoutine_60a060((char*)&v141_.v141, v15, v14),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = *a4;
  v144_.v147 = a3;
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
  GameRoutine_60a060((char*)&v148_.v148, v18, v17),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (&v144_.v144 != (char**)a5) {
    GameRoutine_eabe20(&v144_.v144, *a5, a5[1], (a5[1] - *a5) >> 5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v19 = *(_QWORD*)GameData_212d240;
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a1 == 11) {
    if ((v141_.v141 & 1) != 0) {
      fw_text_String_CopyTerminated(&v111_.v111, v141_.v143, v141_.v142),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v111_.v111 = v141_.v141;
      v111_.v112 = v141_.v142;
      v113_.v113 = v141_.v143;
    }
    v29 = v144_.v144;
    v30 = v144_.v145;
    v113_.v115 = 0;
    v113_.v116 = 0;
    v31 = v144_.v145 - v144_.v144;
    v113_.v114 = 0;
    if (v144_.v145 != v144_.v144) {
      if (v31 < 0) {
        goto LABEL_227;
      }
      v32 =
          fw_memory_HeapManager_Allocate(*v20, v144_.v145 - v144_.v144, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v113_.v114 = v32;
      v113_.v115 = v32;
      v113_.v116 = v32 + v31;
      do {
        *(_BYTE*)v32 = 0;
        *(_DWORD*)(v32 + 24) = -1;
        v33 = *((_DWORD*)v29 + 6);
        if (v33 != -1) {
          v34 = GameData_1fee6a0[(unsigned int)v33];
          v151_.v151 = v32;
          ((void (*)(__int64*, char*))v34)(&v151_.v151, v29),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_DWORD*)(v32 + 24) = v33;
        }
        v29 += 32;
        v32 += 32;
      } while (v29 != v30);
      v113_.v115 = v32;
    }
    v113_.v117 = v144_.v147;
    if ((v148_.v148 & 1) != 0) {
      fw_text_String_CopyTerminated(&v118_.v118, v148_.v150, v148_.v149),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v111_.v111 & 1) != 0) {
        goto LABEL_44;
      }
    }
    else {
      v118_.v118 = v148_.v148;
      v118_.v119 = v148_.v149;
      v118_.v120 = v148_.v150;
      if ((v111_.v111 & 1) != 0) {
      LABEL_44:
        fw_text_String_CopyTerminated(&v151_.v151, v113_.v113, v111_.v112),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_69:
        v47 = v113_.v114;
        v48 = v113_.v115;
        v151_.v155 = 0;
        v151_.v156 = 0;
        v49 = v113_.v115 - v113_.v114;
        v151_.v154 = 0;
        if (v113_.v115 != v113_.v114) {
          if (v49 < 0) {
            goto LABEL_227;
          }
          v50 = fw_memory_HeapManager_Allocate(*v20, v113_.v115 - v113_.v114,
                                               16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v151_.v154 = v50;
          v151_.v155 = v50;
          v151_.v156 = v50 + v49;
          do {
            *(_BYTE*)v50 = 0;
            *(_DWORD*)(v50 + 24) = -1;
            v51 = *(_DWORD*)(v47 + 24);
            if (v51 != -1) {
              v52 = GameData_1fee6a0[(unsigned int)v51];
              v161[0] = v50;
              ((void (*)(_QWORD*, __int64))v52)(v161, v47),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_DWORD*)(v50 + 24) = v51;
            }
            v47 += 32;
            v50 += 32;
          } while (v47 != v48);
          v151_.v155 = v50;
        }
        v151_.v157 = v113_.v117;
        if ((v118_.v118 & 1) != 0) {
          fw_text_String_CopyTerminated(&v158_.v158, v118_.v120, v118_.v119),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v158_.v158 = v118_.v118;
          v158_.v159 = v118_.v119;
          v158_.v160 = v118_.v120;
        }
        v65 = GameRoutine_eaea00((__int64)v21, 11, &v151_.v151),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v158_.v158 & 1) != 0 && v158_.v160 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v66 = 56;
          }
          v65 = nn_mem_StandardAllocator_Free(*v20 + v66),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v67 = v151_.v154;
        if (v151_.v154 != 0) {
          v68 = v151_.v155;
          if (v151_.v154 == v151_.v155) {
            goto LABEL_152;
          }
          do {
            v69 = *(unsigned int*)(v68 - 8);
            v70 = v68 - 32;
            if ((_DWORD)v69 != -1) {
              ((void (*)(_QWORD*, __int64,
                         long double))decltype_c81af0_ptr_1fee688[v69])(
                  v161, v68 - 32, *(long double*)&v65),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            *(_DWORD*)(v68 - 8) = -1;
            v68 -= 32;
          } while (v70 != v67);
          v151_.v155 = v67;
          if (v151_.v154 != 0) {
          LABEL_152:
            v87 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v87 = 56;
            }
            v65 = nn_mem_StandardAllocator_Free(*v20 + v87),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        if ((v151_.v151 & 1) != 0 && v151_.v153 != 0) {
          v88 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v88 = 56;
          }
          v65 = nn_mem_StandardAllocator_Free(*v20 + v88),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        *v21 = game_cmdbtl_CmdBtlBattleAfterEvent_vtable;
        (*(void (**)(__int64, _QWORD*, long double))(
            *(_QWORD*)(v19 + 8) + 24LL))(v19 + 8, v21, *(long double*)&v65),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v118_.v118 & 1) != 0 && v118_.v120 != 0) {
          v89 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v89 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v20 + v89);
        }
        v90 = v113_.v114;
        v72 = &v113_.v113;
        if (v113_.v114 != 0) {
          v91 = v113_.v115;
          if (v113_.v114 == v113_.v115) {
            goto LABEL_172;
          }
          do {
            v92 = *(unsigned int*)(v91 - 8);
            v93 = v91 - 32;
            if ((_DWORD)v92 != -1) {
              ((void (*)(__int64*, __int64,
                         long double))decltype_c81af0_ptr_1fee688[v92])(
                  &v151_.v151, v91 - 32, *(long double*)&result),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            *(_DWORD*)(v91 - 8) = -1;
            v91 -= 32;
          } while (v93 != v90);
          v113_.v115 = v90;
          if (v113_.v114 != 0) {
          LABEL_172:
            v94 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v94 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v20 + v94);
          }
        }
        if ((v111_.v111 & 1) != 0) {
          goto LABEL_202;
        }
        goto LABEL_206;
      }
    }
    v151_.v151 = v111_.v111;
    v151_.v152 = v111_.v112;
    v151_.v153 = v113_.v113;
    goto LABEL_69;
  }
  if (a1 == 10) {
    if ((v141_.v141 & 1) != 0) {
      fw_text_String_CopyTerminated(&v121_.v121, v141_.v143, v141_.v142),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v121_.v121 = v141_.v141;
      v121_.v122 = v141_.v142;
      v123_.v123 = v141_.v143;
    }
    v23 = v144_.v144;
    v24 = v144_.v145;
    v123_.v125 = 0;
    v123_.v126 = 0;
    v25 = v144_.v145 - v144_.v144;
    v123_.v124 = 0;
    if (v144_.v145 != v144_.v144) {
      if (v25 < 0) {
        goto LABEL_227;
      }
      v26 =
          fw_memory_HeapManager_Allocate(*v20, v144_.v145 - v144_.v144, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v123_.v124 = v26;
      v123_.v125 = v26;
      v123_.v126 = v26 + v25;
      do {
        *(_BYTE*)v26 = 0;
        *(_DWORD*)(v26 + 24) = -1;
        v27 = *((_DWORD*)v23 + 6);
        if (v27 != -1) {
          v28 = GameData_1fee6a0[(unsigned int)v27];
          v151_.v151 = v26;
          ((void (*)(__int64*, char*))v28)(&v151_.v151, v23),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_DWORD*)(v26 + 24) = v27;
        }
        v23 += 32;
        v26 += 32;
      } while (v23 != v24);
      v123_.v125 = v26;
    }
    v123_.v127 = v144_.v147;
    if ((v148_.v148 & 1) != 0) {
      fw_text_String_CopyTerminated(&v128_.v128, v148_.v150, v148_.v149),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v121_.v121 & 1) != 0) {
        goto LABEL_33;
      }
    }
    else {
      v128_.v128 = v148_.v148;
      v128_.v129 = v148_.v149;
      v128_.v130 = v148_.v150;
      if ((v121_.v121 & 1) != 0) {
      LABEL_33:
        fw_text_String_CopyTerminated(&v151_.v151, v123_.v123, v121_.v122),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_58:
        v41 = v123_.v124;
        v42 = v123_.v125;
        v151_.v155 = 0;
        v151_.v156 = 0;
        v43 = v123_.v125 - v123_.v124;
        v151_.v154 = 0;
        if (v123_.v125 == v123_.v124) {
          goto LABEL_65;
        }
        if ((v43 & 0x8000000000000000LL) == 0) {
          v44 = fw_memory_HeapManager_Allocate(*v20, v123_.v125 - v123_.v124,
                                               16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v151_.v154 = v44;
          v151_.v155 = v44;
          v151_.v156 = v44 + v43;
          do {
            *(_BYTE*)v44 = 0;
            *(_DWORD*)(v44 + 24) = -1;
            v45 = *(_DWORD*)(v41 + 24);
            if (v45 != -1) {
              v46 = GameData_1fee6a0[(unsigned int)v45];
              v161[0] = v44;
              ((void (*)(_QWORD*, __int64))v46)(v161, v41),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_DWORD*)(v44 + 24) = v45;
            }
            v41 += 32;
            v44 += 32;
          } while (v41 != v42);
          v151_.v155 = v44;
        LABEL_65:
          v151_.v157 = v123_.v127;
          if ((v128_.v128 & 1) != 0) {
            fw_text_String_CopyTerminated(&v158_.v158, v128_.v130, v128_.v129),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v158_.v158 = v128_.v128;
            v158_.v159 = v128_.v129;
            v158_.v160 = v128_.v130;
          }
          v59 = GameRoutine_eaea00((__int64)v21, 10, &v151_.v151),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v158_.v158 & 1) != 0 && v158_.v160 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v60 = 56;
            }
            v59 = nn_mem_StandardAllocator_Free(*v20 + v60),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v61 = v151_.v154;
          if (v151_.v154 != 0) {
            v62 = v151_.v155;
            if (v151_.v154 == v151_.v155) {
              goto LABEL_126;
            }
            do {
              v63 = *(unsigned int*)(v62 - 8);
              v64 = v62 - 32;
              if ((_DWORD)v63 != -1) {
                ((void (*)(_QWORD*, __int64,
                           long double))decltype_c81af0_ptr_1fee688[v63])(
                    v161, v62 - 32, *(long double*)&v59),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              *(_DWORD*)(v62 - 8) = -1;
              v62 -= 32;
            } while (v64 != v61);
            v151_.v155 = v61;
            if (v151_.v154 != 0) {
            LABEL_126:
              v78 = 128;
              if (*(_QWORD*)(*v20 + 200) == 0) {
                v78 = 56;
              }
              v59 = nn_mem_StandardAllocator_Free(*v20 + v78),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          if ((v151_.v151 & 1) != 0 && v151_.v153 != 0) {
            v79 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v79 = 56;
            }
            v59 = nn_mem_StandardAllocator_Free(*v20 + v79),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          *v21 = game_cmdbtl_CmdBtlBattleTalkEvent_vtable;
          (*(void (**)(__int64, _QWORD*, long double))(
              *(_QWORD*)(v19 + 8) + 24LL))(v19 + 8, v21, *(long double*)&v59),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v128_.v128 & 1) != 0 && v128_.v130 != 0) {
            v81 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v81 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v20 + v81);
          }
          v82 = v123_.v124;
          v72 = &v123_.v123;
          if (v123_.v124 != 0) {
            v83 = v123_.v125;
            if (v123_.v124 == v123_.v125) {
              goto LABEL_146;
            }
            do {
              v84 = *(unsigned int*)(v83 - 8);
              v85 = v83 - 32;
              if ((_DWORD)v84 != -1) {
                ((void (*)(__int64*, __int64,
                           long double))decltype_c81af0_ptr_1fee688[v84])(
                    &v151_.v151, v83 - 32, *(long double*)&result),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              *(_DWORD*)(v83 - 8) = -1;
              v83 -= 32;
            } while (v85 != v82);
            v123_.v125 = v82;
            if (v123_.v124 != 0) {
            LABEL_146:
              v86 = 128;
              if (*(_QWORD*)(*v20 + 200) == 0) {
                v86 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v20 + v86);
            }
          }
          if ((v121_.v121 & 1) == 0) {
            goto LABEL_206;
          }
        LABEL_202:
          if (*v72 != 0) {
            v103 = 128;
            if (*(_QWORD*)(*v20 + 200) == 0) {
              v103 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v20 + v103);
          }
          goto LABEL_206;
        }
      LABEL_227:
        GameRoutine_c8c1e0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v151_.v151 = v121_.v121;
    v151_.v152 = v121_.v122;
    v151_.v153 = v123_.v123;
    goto LABEL_58;
  }
  v22 = v20;
  if ((v141_.v141 & 1) != 0) {
    fw_text_String_CopyTerminated(&v131_.v131, v141_.v143, v141_.v142),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v131_.v131 = v141_.v141;
    v131_.v132 = v141_.v142;
    v133_.v133 = v141_.v143;
  }
  v35 = v144_.v144;
  v36 = v144_.v145;
  v133_.v135 = 0;
  v133_.v136 = 0;
  v37 = v144_.v145 - v144_.v144;
  v133_.v134 = 0;
  if (v144_.v145 != v144_.v144) {
    if (v37 < 0) {
      goto LABEL_227;
    }
    v38 = fw_memory_HeapManager_Allocate(*v22, v144_.v145 - v144_.v144, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v133_.v134 = v38;
    v133_.v135 = v38;
    v133_.v136 = v38 + v37;
    do {
      *(_BYTE*)v38 = 0;
      *(_DWORD*)(v38 + 24) = -1;
      v39 = *((_DWORD*)v35 + 6);
      if (v39 != -1) {
        v40 = GameData_1fee6a0[(unsigned int)v39];
        v151_.v151 = v38;
        ((void (*)(__int64*, char*))v40)(&v151_.v151, v35),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_DWORD*)(v38 + 24) = v39;
      }
      v35 += 32;
      v38 += 32;
    } while (v35 != v36);
    v133_.v135 = v38;
  }
  v133_.v137 = v144_.v147;
  if ((v148_.v148 & 1) != 0) {
    fw_text_String_CopyTerminated(&v138_.v138, v148_.v150, v148_.v149),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v131_.v131 & 1) != 0) {
      goto LABEL_55;
    }
  LABEL_79:
    v151_.v151 = v131_.v131;
    v151_.v152 = v131_.v132;
    v151_.v153 = v133_.v133;
    goto LABEL_80;
  }
  v138_.v138 = v148_.v148;
  v138_.v139 = v148_.v149;
  v138_.v140 = v148_.v150;
  if ((v131_.v131 & 1) == 0) {
    goto LABEL_79;
  }
LABEL_55:
  fw_text_String_CopyTerminated(&v151_.v151, v133_.v133, v131_.v132),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_80:
  v53 = v133_.v134;
  v54 = v133_.v135;
  v151_.v155 = 0;
  v151_.v156 = 0;
  v55 = v133_.v135 - v133_.v134;
  v151_.v154 = 0;
  if (v133_.v135 != v133_.v134) {
    if (v55 < 0) {
      goto LABEL_227;
    }
    v56 = fw_memory_HeapManager_Allocate(*v22, v133_.v135 - v133_.v134, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v151_.v154 = v56;
    v151_.v155 = v56;
    v151_.v156 = v56 + v55;
    do {
      *(_BYTE*)v56 = 0;
      *(_DWORD*)(v56 + 24) = -1;
      v57 = *(_DWORD*)(v53 + 24);
      if (v57 != -1) {
        v58 = GameData_1fee6a0[(unsigned int)v57];
        v161[0] = v56;
        ((void (*)(_QWORD*, __int64))v58)(v161, v53),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_DWORD*)(v56 + 24) = v57;
      }
      v53 += 32;
      v56 += 32;
    } while (v53 != v54);
    v151_.v155 = v56;
  }
  v151_.v157 = v133_.v137;
  if ((v138_.v138 & 1) != 0) {
    fw_text_String_CopyTerminated(&v158_.v158, v138_.v140, v138_.v139),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v158_.v158 = v138_.v138;
    v158_.v159 = v138_.v139;
    v158_.v160 = v138_.v140;
  }
  v20 = v22;
  v71 = GameRoutine_eaea00((__int64)v21, 9, &v151_.v151),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v72 = &v133_.v133;
  if ((v158_.v158 & 1) != 0 && v158_.v160 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v73 = 56;
    }
    v71 = nn_mem_StandardAllocator_Free(*v22 + v73),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v74 = v151_.v154;
  if (v151_.v154 != 0) {
    v75 = v151_.v155;
    if (v151_.v154 == v151_.v155) {
      goto LABEL_178;
    }
    do {
      v76 = *(unsigned int*)(v75 - 8);
      v77 = v75 - 32;
      if ((_DWORD)v76 != -1) {
        ((void (*)(_QWORD*, __int64,
                   long double))decltype_c81af0_ptr_1fee688[v76])(
            v161, v75 - 32, *(long double*)&v71),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *(_DWORD*)(v75 - 8) = -1;
      v75 -= 32;
    } while (v77 != v74);
    v151_.v155 = v74;
    if (v151_.v154 != 0) {
    LABEL_178:
      v95 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v95 = 56;
      }
      v71 = nn_mem_StandardAllocator_Free(*v22 + v95),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((v151_.v151 & 1) != 0 && v151_.v153 != 0) {
    v96 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v96 = 56;
    }
    v71 = nn_mem_StandardAllocator_Free(*v22 + v96),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *v21 = game_cmdbtl_CmdBtlBattleBeforeEvent_vtable;
  (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)(v19 + 8) + 24LL))(
      v19 + 8, v21, *(long double*)&v71),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v138_.v138 & 1) != 0 && v138_.v140 != 0) {
    v97 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v97 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v22 + v97);
  }
  v98 = v133_.v134;
  if (v133_.v134 != 0) {
    v99 = v133_.v135;
    if (v133_.v134 == v133_.v135) {
      goto LABEL_198;
    }
    do {
      v100 = *(unsigned int*)(v99 - 8);
      v101 = v99 - 32;
      if ((_DWORD)v100 != -1) {
        ((void (*)(__int64*, __int64,
                   long double))decltype_c81af0_ptr_1fee688[v100])(
            &v151_.v151, v99 - 32, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *(_DWORD*)(v99 - 8) = -1;
      v99 -= 32;
    } while (v101 != v98);
    v133_.v135 = v98;
    if (v133_.v134 != 0) {
    LABEL_198:
      v102 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v102 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v22 + v102);
    }
  }
  if ((v131_.v131 & 1) != 0) {
    goto LABEL_202;
  }
LABEL_206:
  if ((v148_.v148 & 1) != 0 && v148_.v150 != 0) {
    v104 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v104 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v20 + v104);
  }
  v105 = v144_.v144;
  if (v144_.v144 != nullptr) {
    v106 = v144_.v145;
    if (v144_.v144 == v144_.v145) {
      goto LABEL_218;
    }
    do {
      v107 = *((unsigned int*)v106 - 2);
      v108 = v106 - 32;
      if ((_DWORD)v107 != -1) {
        ((void (*)(__int64*, char*,
                   long double))decltype_c81af0_ptr_1fee688[v107])(
            &v151_.v151, v106 - 32, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *((_DWORD*)v106 - 2) = -1;
      v106 -= 32;
    } while (v108 != v105);
    v144_.v145 = v105;
    if (v144_.v144 != nullptr) {
    LABEL_218:
      v109 = 128;
      if (*(_QWORD*)(*v20 + 200) == 0) {
        v109 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v20 + v109);
    }
  }
  if ((v141_.v141 & 1) != 0 && v141_.v143 != 0) {
    v110 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v110 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v20 + v110);
  }
  return result;
}

#pragma GCC visibility pop
