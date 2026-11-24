#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* CharacterModel_1070c00(__int64, __int64);
__int64* GameRoutine_108fa60(__int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_106ffe0(__int64, unsigned int, unsigned int*, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d448[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_10e0710();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a78a90();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_combat_10def80(_QWORD* a1);

void game_combat_10def80(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v27;
  unsigned __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  float v35;
  unsigned __int64 v36;
  __int64 v37;
  int v38;
  __int64* v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  float v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64* v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  _BOOL4 v93;
  int v94;
  unsigned int v95;
  bool v96;
  __int64 v97;
  int v98;
  unsigned int v99;
  float v100;
  unsigned int v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned int v104;
  __int64 v105;
  int v106;
  int v107;
  __int64* v108;
  __int64 v109;
  float v110;
  unsigned __int64 v111;
  __int64* v112;
  __int64 v113;
  float v114;
  unsigned __int64 v115;
  __int64* v116;
  __int64 v117;
  float v118;
  unsigned __int64 v119;
  int v120;
  int v121;
  unsigned int v122;
  __int64* v123;
  float v124;
  __int64 v125;
  float v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  int v144;
  unsigned int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  float v151;
  float v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  float v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 i;
  __int64 v202;
  float v203;
  int v204;
  float v205;
  unsigned int v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  float* v221;
  unsigned int v222[2];

  v1 = a1[3];
  v3 = GameRoutine_108fa60(v1);
  v4 = *(_DWORD*)(v1 + 68);
  v5 = v3;
  v6 = GameData_212d448[0];
  v7 = *GameData_212d448[0] + 24LL * *(unsigned int*)(v1 + 12);
  v8 = *(_QWORD*)(v7 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = *(_QWORD*)(v7 + 40);
  v10 = *(_QWORD*)(v8 + 8) == -1 || v9 == 0;
  if (v10 || (v11 = *(_QWORD*)(v9 + 80)) == 0 ||
      (*(_QWORD*)(v11 + 8) != -1 ? (v12 = *(_QWORD*)(v9 + 88) == 0)
                                 : (v12 = true),
       v12)) {
    v13 = 0;
  }
  else if (*(_QWORD*)(v8 + 8) == -1) {
    v13 = 0;
  }
  else {
    v13 = v9;
  }
  std___1___shared_weak_count___release_weak(v8);
  v14 = *(_QWORD*)(v13 + 88);
  v15 = *(_QWORD*)(v14 + 392);
  v16 = *(_QWORD*)(v14 + 400);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    v17 = *(_QWORD*)(v15 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  else {
    v17 = *(_QWORD*)(v15 + 11608);
  }
  v19 = v5[5];
  v18 = v5[6];
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  v21 = v18 - v19;
  if (v18 == v19) {
    v220 = 0;
    v221 = nullptr;
    v23 = 0;
  }
  else {
    if ((v21 & 0x8000000000000000LL) != 0) {
      GameRoutine_a78a90();
    }
    v221 = (float*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18 - v19, 16, 0);
    GameRoutine_1a0b950((__int64)v221, v19, v21);
    v22 = fw_memory_HeapManager_Allocate(*v20, v21, 16, 0);
    v23 = v22 + v21;
    v220 = v22;
    GameRoutine_1a0b950(v22, v19, v21);
  }
  if (v4 <= -93581018) {
    if ((unsigned int)(v4 + 1193575789) <= 0x10) {
      if (((1 << (v4 + 109)) & 0x10403) != 0) {
        goto LABEL_43;
      }
      if (v4 == -1193575777) {
        goto LABEL_89;
      }
    }
    if (v4 != -972548316 && v4 != -270062627) {
      goto LABEL_76;
    }
  LABEL_43:
    if ((*(_WORD*)v1 & 0x204) == 0 &&
        (*v6 == 0 || (v37 = *(_QWORD*)(*v6 + 8)) == 0 ||
         (*(_BYTE*)(v37 + 113) & 0x80) == 0)) {
      v38 = 100 - *(_DWORD*)(*(_QWORD*)GameData_212d270 + 52LL);
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v39 = game_map_MapRandom_instance__ptr[0];
      v40 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v41 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v42 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v39 + 1) = v40;
      v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v41;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v43;
      v44 = v43 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      if (v38 <= (int)(v44 % 0x64)) {
        v45 = *v6 + 24LL * *(unsigned int*)(v1 + 12);
        v46 = *(_QWORD*)(v45 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                                  memory_order_relaxed);
        v47 = *(_QWORD*)(v45 + 40);
        v48 = *(_QWORD*)(v46 + 8) == -1 || v47 == 0;
        if (v48 || (v49 = *(_QWORD*)(v47 + 80)) == 0 ||
            (*(_QWORD*)(v49 + 8) != -1 ? (v50 = *(_QWORD*)(v47 + 88) == 0)
                                       : (v50 = true),
             v50)) {
          v51 = 0;
        }
        else {
          v51 = *(_QWORD*)(v46 + 8) == -1 ? 0LL : v47;
        }
        std___1___shared_weak_count___release_weak(v46);
        v52 = *(_QWORD*)(v51 + 88);
        v53 = *(_QWORD*)(v52 + 392);
        v54 = *(_QWORD*)(v52 + 400);
        if (v54 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                    memory_order_relaxed);
          v55 = *(_DWORD*)(v53 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
            std___1___shared_weak_count___release_weak(v54);
          }
        }
        else {
          v55 = *(_DWORD*)(v53 + 11784);
        }
        if (v55 != 7 && (unsigned int)(v55 - 9) >= 0x1A &&
            ((unsigned int)((v106 = *(_DWORD*)(v1 + 64)) - 989295305) <= 0x21 &&
                 ((1LL << ((unsigned __int8)v106 + 55)) & 0x200040007LL) != 0 ||
             (unsigned int)(v107 = v106 + 2068235592) <= 0x12 &&
                 ((1 << v107) & 0x40003) != 0)) {
          v108 = CharacterModel_1070c00(v17, 989295305);
          v109 = v108[6];
          v110 = 0x1.fffffe0000000p+127f;
          v111 = v109 - v108[5];
          if (v111 != 0 && v111 <= 4) {
            v110 = *(float*)(v109 - 4) - *((float*)v108 + 6);
          }
          v112 = CharacterModel_1070c00(v17, 989295306);
          v113 = v112[6];
          v114 = 0x1.fffffe0000000p+127f;
          v115 = v113 - v112[5];
          if (v115 != 0 && v115 <= 4) {
            v114 = *(float*)(v113 - 4) - *((float*)v112 + 6);
          }
          v116 = CharacterModel_1070c00(v17, 989295307);
          v117 = v116[6];
          v118 = 0x1.fffffe0000000p+127f;
          v119 = v117 - v116[5];
          if (v119 != 0 && v119 <= 4) {
            v118 = *(float*)(v117 - 4) - *((float*)v116 + 6);
          }
          if (!(v114 < v118)) {
            v120 = 989295307;
          }
          else {
            v120 = 989295306;
          }
          if (!(v110 < v118)) {
            v121 = 989295307;
          }
          else {
            v121 = 989295305;
          }
          if (!(v110 < v114)) {
            v122 = v120;
          }
          else {
            v122 = v121;
          }
          v123 = CharacterModel_1070c00(v17, v122);
          v124 = *((float*)v123 + 6);
          v125 = v123[6];
          if (v123[5] == v125) {
            v126 = 0x0.0p+0f;
          }
          else {
            v126 = *(float*)(v125 - 4);
          }
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v144 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39);
          v145 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4);
          v146 = *(_DWORD*)v39 ^ (*(_DWORD*)v39 << 11);
          *(_DWORD*)v39 = *((_DWORD*)v39 + 1);
          *((_DWORD*)v39 + 1) = v144;
          v147 = (v146 >> 8) ^ (v145 >> 19) ^ v146 ^ v145;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v145;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v147;
          v148 = v147 & 0x7FFFFFFF;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          v149 = a1[10];
          v150 = a1[11];
          v151 = (double)v148 / 0x1.fffffffc00000p+30;
          v152 = v124 -
                 (float)(v126 * (float)((float)(v151 * 0x1.0000000000000p-1f) +
                                        0x1.0000000000000p-1f));
          if (v149 < v150) {
            v30 = v149 + 16;
            *(float*)v149 = v152;
            *(_DWORD*)(v149 + 4) = v122;
            *(float*)(v149 + 8) = v124;
            *(_BYTE*)(v149 + 12) = 0;
            goto LABEL_255;
          }
          v153 = a1[9];
          v154 = v149 - v153;
          v155 = (__int64)(v149 - v153) >> 4;
          v156 = v155 + 1;
          if ((unsigned __int64)(v155 + 1) >> 60 == 0) {
            v157 = v150 - v153;
            if (v157 >> 3 > v156) {
              v156 = v157 >> 3;
            }
            if ((unsigned __int64)v157 >= 0x7FFFFFFFFFFFFFF0LL) {
              v158 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v158 = v156;
            }
            if (v158 != 0) {
              if (v158 >> 60 != 0) {
                goto LABEL_295;
              }
              v159 = fw_memory_HeapManager_Allocate(*v20, 16 * v158, 16, 0);
            }
            else {
              v159 = 0;
            }
            v194 = v159 + v154;
            v195 = v159 + 16 * v158;
            *(_DWORD*)(v194 + 4) = v122;
            v196 = v159 + v154 - 16 * v155;
            *(float*)v194 = v152;
            *(float*)(v194 + 8) = v124;
            *(_BYTE*)(v194 + 12) = 0;
            v30 = v159 + v154 + 16;
            GameRoutine_1a0b950(v196, v153, v154);
            a1[9] = v196;
            a1[10] = v30;
            a1[11] = v195;
            if (v153 == 0) {
              goto LABEL_255;
            }
            v189 = *v20;
            v190 = v153;
          LABEL_252:
            v191 = 128;
            if (*(_QWORD*)(v189 + 200) == 0) {
              v191 = 56;
            }
            nn_mem_StandardAllocator_Free(v189 + v191, v190);
            goto LABEL_255;
          }
          goto LABEL_294;
        }
      }
      goto LABEL_256;
    }
    if ((unsigned int)(v4 - 232551549) <= 0x10 &&
        ((1 << (v4 - 125)) & 0x10401) != 0) {
      goto LABEL_48;
    }
    if (v4 != -1193575777) {
      goto LABEL_47;
    }
  LABEL_89:
    v27 = a1[10];
    v64 = a1[11];
    v65 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 24LL) *
          -0x1.1111120000000p-6f;
    if (v27 < v64) {
      v30 = v27 + 16;
      *(float*)v27 = v65;
      *(_QWORD*)(v27 + 4) = 3101391519LL;
      goto LABEL_91;
    }
    v57 = a1[9];
    v72 = v27 - v57;
    v73 = (__int64)(v27 - v57) >> 4;
    v74 = v73 + 1;
    if ((unsigned __int64)(v73 + 1) >> 60 != 0) {
      goto LABEL_294;
    }
    v75 = v64 - v57;
    if (v75 >> 3 > v74) {
      v74 = v75 >> 3;
    }
    if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF0LL) {
      v76 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v76 = v74;
    }
    if (v76 != 0) {
      if (v76 >> 60 != 0) {
        goto LABEL_295;
      }
      v77 = fw_memory_HeapManager_Allocate(*v20, 16 * v76, 16, 0);
    }
    else {
      v77 = 0;
    }
    v133 = v77 + v72;
    v134 = v77 + 16 * v76;
    v135 = v57;
    v136 = v72;
    v137 = v77 + v72 - 16 * v73;
    *(float*)v133 = v65;
    v30 = v77 + v72 + 16;
    *(_QWORD*)(v133 + 4) = 3101391519LL;
    v138 = v137;
    *(_BYTE*)(v133 + 12) = 1;
    goto LABEL_250;
  }
  if (v4 <= 232551548) {
    if (v4 != -93581017 && v4 != -77626398) {
    LABEL_47:
      if (v4 == 143741767) {
        goto LABEL_48;
      }
      goto LABEL_76;
    }
    goto LABEL_43;
  }
  if ((unsigned int)(v4 - 232551549) <= 0x10 &&
      ((1 << (v4 - 125)) & 0x10401) != 0) {
  LABEL_48:
    if (*((float*)v5 + 9) > 0x0.0p+0f) {
      v27 = a1[10];
      v28 = a1[11];
      v29 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 20LL) *
            -0x1.1111120000000p-6f;
      if (v27 < v28) {
      LABEL_50:
        v30 = v27 + 16;
        *(float*)v27 = v29;
        *(_DWORD*)(v27 + 4) = v4;
        *(_DWORD*)(v27 + 8) = 0;
      LABEL_91:
        *(_BYTE*)(v27 + 12) = 1;
      LABEL_255:
        a1[10] = v30;
        goto LABEL_256;
      }
      v57 = a1[9];
      v66 = v27 - v57;
      v67 = (__int64)(v27 - v57) >> 4;
      v68 = v67 + 1;
      if ((unsigned __int64)(v67 + 1) >> 60 == 0) {
        v69 = v28 - v57;
        if (v69 >> 3 > v68) {
          v68 = v69 >> 3;
        }
        if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF0LL) {
          v70 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v70 = v68;
        }
        if (v70 == 0) {
          v71 = 0;
        LABEL_122:
          v85 = v71 + v66;
          v86 = v71 + 16 * v70;
          v87 = v71 + v66 - 16 * v67;
          *(float*)v85 = v29;
          *(_DWORD*)(v85 + 4) = v4;
          *(_DWORD*)(v85 + 8) = 0;
          *(_BYTE*)(v85 + 12) = 1;
          v30 = v71 + v66 + 16;
          GameRoutine_1a0b950(v87, v57, v66);
          a1[9] = v87;
          a1[10] = v30;
          a1[11] = v86;
          if (v57 == 0) {
            goto LABEL_255;
          }
        LABEL_251:
          v189 = *v20;
          v190 = v57;
          goto LABEL_252;
        }
        if (v70 >> 60 == 0) {
          v71 = fw_memory_HeapManager_Allocate(*v20, 16 * v70, 16, 0);
          goto LABEL_122;
        }
      LABEL_295:
        GameRoutine_60a210();
      }
    LABEL_294:
      GameRoutine_10e0710();
    }
    if (v5[6] == v5[5]) {
      goto LABEL_256;
    }
    v31 = GameData_212d270;
    v32 = (__int64)(v23 - v220) >> 2;
    v33 = a1[10];
    v34 = a1[11];
    v35 = (float)(PSEUDO_UNFUSED(
              (float)*(int*)(*(_QWORD*)GameData_212d270 + 20LL) *
              -0x1.1111120000000p-6f)) +
          0x0.0p+0f;
    if (v32 == 1) {
      if (v33 < v34) {
        v36 = v33 + 16;
        *(float*)v33 = v35;
        *(_DWORD*)(v33 + 4) = v4;
        *(_DWORD*)(v33 + 8) = 0;
        *(_BYTE*)(v33 + 12) = 1;
        goto LABEL_212;
      }
      v78 = a1[9];
      v127 = v33 - v78;
      v128 = (__int64)(v33 - v78) >> 4;
      v129 = v128 + 1;
      if ((unsigned __int64)(v128 + 1) >> 60 != 0) {
        goto LABEL_294;
      }
      v130 = v34 - v78;
      if (v130 >> 3 > v129) {
        v129 = v130 >> 3;
      }
      if ((unsigned __int64)v130 >= 0x7FFFFFFFFFFFFFF0LL) {
        v131 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v131 = v129;
      }
      if (v131 != 0) {
        if (v131 >> 60 != 0) {
          goto LABEL_295;
        }
        v132 = fw_memory_HeapManager_Allocate(*v20, 16 * v131, 16, 0);
      }
      else {
        v132 = 0;
      }
      v167 = v132 + v127;
      v140 = v132 + 16 * v131;
      v141 = v78;
      v142 = v127;
      v143 = v132 + v127 - 16 * v128;
      *(float*)v167 = v35;
      *(_DWORD*)(v167 + 4) = v4;
      *(_DWORD*)(v167 + 8) = 0;
      *(_BYTE*)(v167 + 12) = 1;
      v36 = v132 + v127 + 16;
    }
    else {
      if (v33 < v34) {
        *(float*)v33 = v35;
        v36 = v33 + 16;
        *(_BYTE*)(v33 + 12) = 0;
        *(_QWORD*)(v33 + 4) = 232551549;
      LABEL_212:
        a1[10] = v36;
        if ((unsigned __int64)(v5[6] - v5[5]) < 5) {
          goto LABEL_256;
        }
        v169 = 1;
        v170 = 2 - v32;
        while (1) {
          v171 = a1[11];
          v172 = (float)(v221[v169] - *v221) +
                 (float)(PSEUDO_UNFUSED((float)*(int*)(*(_QWORD*)v31 + 20LL) *
                                        -0x1.1111120000000p-6f));
          if (v170 + v169 == 1) {
            if (v36 >= v171) {
              v173 = a1[9];
              v174 = v36 - v173;
              v175 = (__int64)(v36 - v173) >> 4;
              v180 = v175 + 1;
              if ((unsigned __int64)(v175 + 1) >> 60 != 0) {
                goto LABEL_294;
              }
              v181 = v171 - v173;
              if (v181 >> 3 > v180) {
                v180 = v181 >> 3;
              }
              if ((unsigned __int64)v181 >= 0x7FFFFFFFFFFFFFF0LL) {
                v182 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v182 = v180;
              }
              if (v182 != 0) {
                if (v182 >> 60 != 0) {
                  goto LABEL_295;
                }
                v183 = fw_memory_HeapManager_Allocate(*v20, 16 * v182, 16, 0);
              }
              else {
                v183 = 0;
              }
              v184 = v183 + v174;
              v185 = v183 + 16 * v182;
              *(float*)v184 = v172;
              *(_DWORD*)(v184 + 4) = v4;
              *(_DWORD*)(v184 + 8) = 0;
              *(_BYTE*)(v184 + 12) = 1;
              goto LABEL_243;
            }
            *(float*)v36 = v172;
            *(_DWORD*)(v36 + 4) = v4;
            *(_DWORD*)(v36 + 8) = 0;
            *(_BYTE*)(v36 + 12) = 1;
          }
          else {
            if (v36 >= v171) {
              v173 = a1[9];
              v174 = v36 - v173;
              v175 = (__int64)(v36 - v173) >> 4;
              v176 = v175 + 1;
              if ((unsigned __int64)(v175 + 1) >> 60 != 0) {
                goto LABEL_294;
              }
              v177 = v171 - v173;
              if (v177 >> 3 > v176) {
                v176 = v177 >> 3;
              }
              if ((unsigned __int64)v177 >= 0x7FFFFFFFFFFFFFF0LL) {
                v178 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v178 = v176;
              }
              if (v178 != 0) {
                if (v178 >> 60 != 0) {
                  goto LABEL_295;
                }
                v179 = fw_memory_HeapManager_Allocate(*v20, 16 * v178, 16, 0);
              }
              else {
                v179 = 0;
              }
              v184 = v179 + v174;
              v185 = v179 + 16 * v178;
              *(float*)v184 = v172;
              *(_BYTE*)(v184 + 12) = 0;
              *(_QWORD*)(v184 + 4) = 232551549;
            LABEL_243:
              v186 = v184 - 16 * v175;
              v36 = v184 + 16;
              GameRoutine_1a0b950(v186, v173, v174);
              a1[9] = v186;
              a1[10] = v36;
              a1[11] = v185;
              v20 = (__int64*)fw_memory_g_heap_manager_ptr;
              if (v173 != 0) {
                v187 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v187 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v187, v173);
              }
              v31 = GameData_212d270;
              goto LABEL_216;
            }
            *(float*)v36 = v172;
            *(_BYTE*)(v36 + 12) = 0;
            *(_QWORD*)(v36 + 4) = 232551549;
          }
          v36 += 16LL;
        LABEL_216:
          a1[10] = v36;
          if (++v169 >= (unsigned __int64)((v5[6] - v5[5]) >> 2)) {
            goto LABEL_256;
          }
        }
      }
      v78 = a1[9];
      v79 = v33 - v78;
      v80 = (__int64)(v33 - v78) >> 4;
      v81 = v80 + 1;
      if ((unsigned __int64)(v80 + 1) >> 60 != 0) {
        goto LABEL_294;
      }
      v82 = v34 - v78;
      if (v82 >> 3 > v81) {
        v81 = v82 >> 3;
      }
      if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF0LL) {
        v83 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v83 = v81;
      }
      if (v83 != 0) {
        if (v83 >> 60 != 0) {
          goto LABEL_295;
        }
        v84 = fw_memory_HeapManager_Allocate(*v20, 16 * v83, 16, 0);
      }
      else {
        v84 = 0;
      }
      v139 = v84 + v79;
      v140 = v84 + 16 * v83;
      v141 = v78;
      v142 = v79;
      v143 = v84 + v79 - 16 * v80;
      *(float*)v139 = v35;
      *(_BYTE*)(v139 + 12) = 0;
      v36 = v84 + v79 + 16;
      *(_QWORD*)(v139 + 4) = 232551549;
    }
    GameRoutine_1a0b950(v143, v141, v142);
    a1[9] = v143;
    a1[10] = v36;
    a1[11] = v140;
    if (v78 != 0) {
      v168 = 128;
      if (*(_QWORD*)(*v20 + 200) == 0) {
        v168 = 56;
      }
      nn_mem_StandardAllocator_Free(*v20 + v168, v78);
    }
    v31 = GameData_212d270;
    goto LABEL_212;
  }
  if (v4 == 1715476756 || v4 == 1400556095) {
    goto LABEL_43;
  }
LABEL_76:
  if (v4 == -1911544118 || v4 == -1911544124) {
    if (*((float*)v5 + 9) > 0x0.0p+0f) {
      v27 = a1[10];
      v56 = a1[11];
      v29 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 28LL) *
            -0x1.1111120000000p-6f;
      if (v27 < v56) {
        goto LABEL_50;
      }
      v57 = a1[9];
      v58 = v27 - v57;
      v59 = (__int64)(v27 - v57) >> 4;
      v60 = v59 + 1;
      if ((unsigned __int64)(v59 + 1) >> 60 != 0) {
        goto LABEL_294;
      }
      v61 = v56 - v57;
      if (v61 >> 3 > v60) {
        v60 = v61 >> 3;
      }
      if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF0LL) {
        v62 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v62 = v60;
      }
      if (v62 != 0) {
        if (v62 >> 60 != 0) {
          goto LABEL_295;
        }
        v63 = fw_memory_HeapManager_Allocate(*v20, 16 * v62, 16, 0);
      }
      else {
        v63 = 0;
      }
      v188 = v63 + v58;
      v134 = v63 + 16 * v62;
      v135 = v57;
      v136 = v58;
      v137 = v63 + v58 - 16 * v59;
      *(float*)v188 = v29;
      *(_DWORD*)(v188 + 4) = v4;
      *(_DWORD*)(v188 + 8) = 0;
      *(_BYTE*)(v188 + 12) = 1;
      v30 = v63 + v58 + 16;
      v138 = v137;
    LABEL_250:
      GameRoutine_1a0b950(v138, v135, v136);
      a1[9] = v137;
      a1[10] = v30;
      a1[11] = v134;
      v20 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v57 == 0) {
        goto LABEL_255;
      }
      goto LABEL_251;
    }
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v88 = game_map_MapRandom_instance__ptr[0];
    v89 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v90 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v91 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v88 + 1) = v89;
    v92 = (v91 >> 8) ^ (v90 >> 19) ^ v91 ^ v90;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v88) = v90;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v88 + 4) = v92;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    if (v5[6] == v5[5]) {
      goto LABEL_256;
    }
    v93 = v4 == -1911544124;
    if (v4 == -1911544118) {
      v94 = 1;
    }
    else {
      v94 = 2;
    }
    v95 = (v92 & 0x7FFFFFFFu) % (v94 - v93);
    if (v95 != 0) {
      v93 = true;
    }
    v96 = v95 != (v4 != -1911544124) || v4 == -1911544118;
    v97 = GameData_212d270;
    if (v96) {
      v98 = 0;
    }
    else {
      v98 = -1911544118;
    }
    v222[0] = -1911544124;
    v222[1] = -1911544118;
    if (v93) {
      v99 = v98;
    }
    else {
      v99 = -1911544124;
    }
    v100 = (float)(PSEUDO_UNFUSED(
               (float)*(int*)(*(_QWORD*)GameData_212d270 + 28LL) *
               -0x1.1111120000000p-6f)) +
           0x0.0p+0f;
    v101 = game_106ffe0(v17, v99, v222, 2u);
    v102 = a1[10];
    v103 = a1[11];
    v104 = v101;
    if (v102 >= v103) {
      v160 = a1[9];
      v161 = v102 - v160;
      v162 = (__int64)(v102 - v160) >> 4;
      v163 = v162 + 1;
      if ((unsigned __int64)(v162 + 1) >> 60 != 0) {
        goto LABEL_294;
      }
      v164 = v103 - v160;
      if (v164 >> 3 > v163) {
        v163 = v164 >> 3;
      }
      if ((unsigned __int64)v164 >= 0x7FFFFFFFFFFFFFF0LL) {
        v165 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v165 = v163;
      }
      if (v165 != 0) {
        if (v165 >> 60 != 0) {
          goto LABEL_295;
        }
        v166 = fw_memory_HeapManager_Allocate(*v20, 16 * v165, 16, 0);
      }
      else {
        v166 = 0;
      }
      v197 = v166 + v161;
      v198 = v166 + 16 * v165;
      v199 = v166 + v161 - 16 * v162;
      *(float*)v197 = v100;
      *(_DWORD*)(v197 + 4) = v104;
      *(_DWORD*)(v197 + 8) = 0;
      *(_BYTE*)(v197 + 12) = 1;
      v105 = v166 + v161 + 16;
      GameRoutine_1a0b950(v199, v160, v161);
      a1[9] = v199;
      a1[10] = v105;
      a1[11] = v198;
      v20 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v160 != 0) {
        v200 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v200 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v200, v160);
      }
      v97 = GameData_212d270;
    }
    else {
      v105 = v102 + 16;
      *(float*)v102 = v100;
      *(_DWORD*)(v102 + 4) = v101;
      *(_DWORD*)(v102 + 8) = 0;
      *(_BYTE*)(v102 + 12) = 1;
    }
    a1[10] = v105;
    if ((unsigned __int64)(v5[6] - v5[5]) >= 5) {
      for (i = 1; i < (v5[6] - v5[5]) >> 2; ++i) {
        v203 = v221[i] - *v221;
        v204 = *(_DWORD*)(*(_QWORD*)v97 + 28LL);
        v222[0] = -1911544124;
        v222[1] = -1911544118;
        v205 = v203 +
               (float)(PSEUDO_UNFUSED((float)v204 * -0x1.1111120000000p-6f));
        v206 = game_106ffe0(v17, v104, v222, 2u);
        v207 = a1[10];
        v208 = a1[11];
        v104 = v206;
        if (v207 < v208) {
          *(float*)v207 = v205;
          *(_DWORD*)(v207 + 4) = v206;
          *(_DWORD*)(v207 + 8) = 0;
          v202 = v207 + 16;
          *(_BYTE*)(v207 + 12) = 1;
        }
        else {
          v209 = a1[9];
          v210 = v207 - v209;
          v211 = (__int64)(v207 - v209) >> 4;
          v212 = v211 + 1;
          if ((unsigned __int64)(v211 + 1) >> 60 != 0) {
            goto LABEL_294;
          }
          v213 = v208 - v209;
          if (v213 >> 3 > v212) {
            v212 = v213 >> 3;
          }
          if ((unsigned __int64)v213 >= 0x7FFFFFFFFFFFFFF0LL) {
            v214 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v214 = v212;
          }
          if (v214 != 0) {
            if (v214 >> 60 != 0) {
              goto LABEL_295;
            }
            v215 = fw_memory_HeapManager_Allocate(*v20, 16 * v214, 16, 0);
          }
          else {
            v215 = 0;
          }
          v216 = v215 + v210;
          v217 = v215 + 16 * v214;
          v218 = v215 + v210 - 16 * v211;
          *(float*)v216 = v205;
          *(_DWORD*)(v216 + 4) = v104;
          *(_DWORD*)(v216 + 8) = 0;
          *(_BYTE*)(v216 + 12) = 1;
          v202 = v215 + v210 + 16;
          GameRoutine_1a0b950(v218, v209, v210);
          a1[9] = v218;
          a1[10] = v202;
          a1[11] = v217;
          v20 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v209 != 0) {
            v219 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v219 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v219, v209);
          }
          v97 = GameData_212d270;
        }
        a1[10] = v202;
      }
    }
  }
LABEL_256:
  if (v220 != 0) {
    v192 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v192 = 56;
    }
    nn_mem_StandardAllocator_Free(*v20 + v192, v220);
  }
  if (v221 != nullptr) {
    v193 = 128;
    if (*(_QWORD*)(*v20 + 200) == 0) {
      v193 = 56;
    }
    nn_mem_StandardAllocator_Free(*v20 + v193, (__int64)v221);
  }
}

#pragma GCC visibility pop
