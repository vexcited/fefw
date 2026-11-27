#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void eft_bc9d40(PSEUDO_X8, __int64 result, __int64);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c2f0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int128 GameData_1a83610;
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_1a0ab40(float, float);
void GameRoutine_1943530(_QWORD*, int);
void LODAdjuster_a9b870(_QWORD*);
void LODAdjuster_a9bd00(__int64*, unsigned __int64, _QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_66df80();
void __attribute__((noreturn)) GameRoutine_a9bcd0();
void game_5c2180(float, float, __int64, float32x4_t*, __int64, float32x4_t*,
                 float*);
void game_5c26c0(long double, float, long double, __int64, float32x4_t*,
                 __int64, float*, float*, float*);
void nn_detail_UnexpectedDefaultImpl();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___vector_14a650(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4, __int64 a5,
                                                      __int64 a6, __int64 a7,
                                                      __int64 a8);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___vector_a99c80_alt1(PSEUDO_X8 x8_, int* a1,
                                                   __int64* a2);
__int64* llvm_libcxx_21_libcxx_include___vector_bd49d0(__int64* result);
void llvm_libcxx_21_libcxx_include___vector_bd5170(__int64 a1);
__int64 GameRoutine_1943530_alt1(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950_alt1(_QWORD, _QWORD, _QWORD);
__int64 LODAdjuster_a9b870_alt1(_QWORD);
__int64 LODAdjuster_a9bd00_alt1(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_alt1(void);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_60a210_alt1(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760_alt1(void);
void __attribute__((noreturn)) GameRoutine_66df80_alt1(_QWORD);
void __attribute__((noreturn)) GameRoutine_a9bcd0_alt1(void);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_a99c80(
    __attribute__((swift_indirect_result)) void* x8_, int* a1, __int64* a2);

__int64 llvm_libcxx_21_libcxx_include___vector_14a650(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4, __int64 a5,
                                                      __int64 a6, __int64 a7,
                                                      __int64 a8)
{
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  unsigned __int64 v11;
  int v12;
  unsigned int* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  _QWORD* v17;
  unsigned int* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v49;
  unsigned int* v50;
  _QWORD* v51;
  _QWORD* v52;

  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_DWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = result + 104;
  *(_QWORD*)result = a2;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  v8 = result;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  v9 = *(_QWORD*)(a2 + 40);
  if (v9 == 0 ||
      (v10 = (unsigned int*)(v9 + a2), *(_QWORD*)(result + 8) = v9 + a2,
       v11 = v9 + a2 + ((unsigned __int64)*(unsigned __int16*)(a2 + 62) << 6),
       *(_QWORD*)(result + 64) = v11, v12 = *(unsigned __int16*)(a2 + 60),
       *(_WORD*)(a2 + 60) == 0)) {
    *(_DWORD*)(result + 88) = 0;
    *(_QWORD*)(result + 72) = 0;
    *(_QWORD*)(result + 80) = 0;
    return result;
  }
  v51 = nullptr;
  v50 = nullptr;
  v52 = nullptr;
  v13 = nullptr;
  v49 = nullptr;
  v14 = *(_QWORD*)(v11 + 24) + a2;
  do {
    v15 = *v10;
    if ((_DWORD)v15 != 0) {
      v16 = (const char*)(v14 + v15);
    }
    else {
      v16 = "<null>";
    }
    result = GameRoutine_1a09d30(v16, ".rela.rodata", a3, a4, a5, a6, a7, a8);
    if ((_DWORD)result != 0) {
      result = GameRoutine_1a09d30(v16, ".rodata", a3, a4, a5, a6, a7, a8);
      if ((_DWORD)result != 0) {
        result = GameRoutine_1a09d30(v16, ".rela.data", a3, a4, a5, a6, a7, a8);
        if ((_DWORD)result != 0) {
          result = GameRoutine_1a09d30(v16, ".data", a3, a4, a5, a6, a7, a8);
          if ((_DWORD)result != 0) {
            result =
                GameRoutine_1a09d30(v16, ".symtab", a3, a4, a5, a6, a7, a8);
            if ((_DWORD)result != 0) {
              result =
                  GameRoutine_1a09d30(v16, ".strtab", a3, a4, a5, a6, a7, a8);
              if ((_DWORD)result == 0) {
                *(_QWORD*)(v8 + 56) = v10;
              }
            }
            else {
              *(_QWORD*)(v8 + 48) = v10;
              v49 = v10;
            }
          }
          else {
            *(_QWORD*)(v8 + 40) = v10;
            v50 = v10;
          }
        }
        else {
          *(_QWORD*)(v8 + 32) = v10;
          v51 = v10;
        }
      }
      else {
        *(_QWORD*)(v8 + 24) = v10;
        v13 = v10;
      }
    }
    else {
      *(_QWORD*)(v8 + 16) = v10;
      v52 = v10;
    }
    v10 += 16;
    --v12;
  } while (v12 != 0);
  v17 = v51;
  v18 = v50;
  *(_QWORD*)(v8 + 72) = 0;
  v19 = (_QWORD*)(v8 + 72);
  *(_DWORD*)(v8 + 88) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  if (v49 != nullptr) {
    v20 = v49[3] + a2;
    *(_QWORD*)(v8 + 72) = v20;
    v21 = v49[4] / v49[7];
    *(_DWORD*)(v8 + 80) = v21;
    if ((int)v21 >= 1) {
      v22 = v21 & 3;
      if ((unsigned int)v21 >= 4) {
        v25 = 2;
        v24 = 0;
        v26 = -(v21 & 0x7FFFFFFC);
        do {
          if (*(_QWORD*)(v20 + 16) != 0 &&
              (*(_BYTE*)(v20 + 4) & 0xF0) == 0x10) {
            if (v24 == 0) {
              *(_DWORD*)(v8 + 84) = v25 - 2;
            }
            v24 = v25 - 1;
            *(_DWORD*)(v8 + 88) = v25 - 1;
          }
          if (*(_QWORD*)(v20 + 40) != 0 &&
              (*(_BYTE*)(v20 + 28) & 0xF0) == 0x10) {
            if (v24 == 0) {
              *(_DWORD*)(v8 + 84) = v25 - 1;
            }
            *(_DWORD*)(v8 + 88) = v25;
            v24 = v25;
          }
          if (*(_QWORD*)(v20 + 64) != 0 &&
              (*(_BYTE*)(v20 + 52) & 0xF0) == 0x10) {
            if (v24 == 0) {
              *(_DWORD*)(v8 + 84) = v25;
            }
            v24 = v25 + 1;
            *(_DWORD*)(v8 + 88) = v25 + 1;
          }
          if (*(_QWORD*)(v20 + 88) != 0 &&
              (*(_BYTE*)(v20 + 76) & 0xF0) == 0x10) {
            if (v24 == 0) {
              *(_DWORD*)(v8 + 84) = v25 + 1;
            }
            v24 = v25 + 2;
            *(_DWORD*)(v8 + 88) = v25 + 2;
          }
          v25 += 4;
          v20 += 96;
        } while (v26 + v25 != 2);
        v23 = v25 - 2;
        if (v22 == 0) {
          goto LABEL_57;
        }
      }
      else {
        v23 = 0;
        v24 = 0;
        if (v22 == 0) {
          goto LABEL_57;
        }
      }
      v27 = (_QWORD*)(v20 + 16);
      do {
        if (*v27 != 0 && (*((_BYTE*)v27 - 12) & 0xF0) == 0x10) {
          if (v24 == 0) {
            *(_DWORD*)(v8 + 84) = v23;
          }
          v24 = v23 + 1;
          *(_DWORD*)(v8 + 88) = v23 + 1;
        }
        ++v23;
        v27 += 3;
        --v22;
      } while (v22 != 0);
    }
  }
LABEL_57:
  if (v13 != nullptr && v52 != nullptr) {
    v28 = v52[4] / v52[7];
    if ((int)v28 >= 1) {
      v29 = 0;
      v30 = *((_QWORD*)v13 + 3) + a2;
      v31 = (__int64*)(v52[3] + a2 + 16);
      do {
        v33 = *(v31 - 2);
        if (*(_QWORD*)(v30 + v33) == 0) {
          v34 = HIDWORD(*(v31 - 1));
          if (v34 != 0) {
            v35 = *v31;
            v36 = *v19 + 24LL * (unsigned int)v34;
            if (*(_QWORD*)(v36 + 16) != 0 ||
                (*(_BYTE*)(v36 + 4) & 0xF0) != 0x10) {
              result = *(_QWORD*)(v8 + 8);
              v32 = *(_QWORD*)(v36 + 8) + v35 + *(_QWORD*)v8 +
                    *(_QWORD*)(result +
                               ((unsigned __int64)*(unsigned __int16*)(v36 + 6)
                                << 6) +
                               24);
            }
            else {
              v37 = *(_QWORD*)(v36 + 8);
              v32 = v37 + v35;
              if (v37 == 0) {
                v32 = 0;
              }
            }
          }
          else {
            v32 = 0;
          }
          *(_QWORD*)(v33 + v30) = v32;
        }
        ++v29;
        v31 += 3;
      } while (v29 < (int)v28);
      v17 = *(_QWORD**)(v8 + 32);
      v18 = *(unsigned int**)(v8 + 40);
    }
  }
  if (v18 != nullptr && v17 != nullptr) {
    v38 = v17[4] / v17[7];
    if ((int)v38 >= 1) {
      v39 = 0;
      v40 = *((_QWORD*)v18 + 3) + *(_QWORD*)v8;
      v41 = (__int64*)(v17[3] + *(_QWORD*)v8 + 16LL);
      do {
        v43 = *(v41 - 2);
        if (*(_QWORD*)(v40 + v43) == 0) {
          v44 = HIDWORD(*(v41 - 1));
          if (v44 != 0) {
            v45 = *v41;
            v46 = *v19 + 24LL * (unsigned int)v44;
            if (*(_QWORD*)(v46 + 16) != 0 ||
                (*(_BYTE*)(v46 + 4) & 0xF0) != 0x10) {
              result = *(_QWORD*)(v8 + 8);
              v42 = *(_QWORD*)(v46 + 8) + v45 + *(_QWORD*)v8 +
                    *(_QWORD*)(result +
                               ((unsigned __int64)*(unsigned __int16*)(v46 + 6)
                                << 6) +
                               24);
            }
            else {
              v47 = *(_QWORD*)(v46 + 8);
              v42 = v47 + v45;
              if (v47 == 0) {
                v42 = 0;
              }
            }
          }
          else {
            v42 = 0;
          }
          *(_QWORD*)(v43 + v40) = v42;
        }
        ++v39;
        v41 += 3;
      } while (v39 < (int)v38);
    }
  }
  return result;
}

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_a99c80(
    __attribute__((swift_indirect_result)) void* x8_, int* a1, __int64* a2)
{

#pragma clang fp contract(fast)

  __int64 a3 = (__int64)(unsigned __int64)x8_;
  __int64 v3;
  int* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  char* v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  long double v38;
  _QWORD* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  char* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  long double v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  unsigned __int64 v76;
  _DWORD* v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  long double v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  unsigned __int64 v101;
  _DWORD* v102;
  __int64 v103;
  __int64 v104;
  char* v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  char* v112;
  __int64 v113;
  __int64 v114;
  long double v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 result;
  __int64* v129;
  unsigned __int64 v130;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  char* v140;
  char* v141;
  _QWORD v142[3];

  v3 = *((unsigned int*)a2 + 3);
  v4 = a1;
  v134 = *a2;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v137 = v3;
  if ((_DWORD)v3 != 0) {
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v3, 16, 0);
    v7 = v6 + 8 * v3;
    v8 = (char*)v6;
    v9 = 0;
    v10 = (__int64*)v6;
    while (1) {
      v11 = *((__int64**)v4 + 3);
      v12 = *((__int64**)v4 + 4);
      if (v11 == v12) {
        v140 = v8;
        v23 = *((char**)v4 + 7);
        v22 = *((char**)v4 + 8);
        v13 = 0x6DB6DB6DB6DB6DB7LL * ((v22 - v23) >> 5);
        v24 = *((_QWORD*)v4 + 9);
        if ((unsigned __int64)v22 >= v24) {
          v34 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) > 0x124924924924924LL) {
            GameRoutine_a9bcd0_alt1();
          }
          v35 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v24 - (_QWORD)v23) >> 5);
          if (2 * v35 > v34) {
            v34 = 2 * v35;
          }
          if (v35 >= 0x92492492492492LL) {
            v36 = 0x124924924924924LL;
          }
          else {
            v36 = v34;
          }
          if (v36 != 0) {
            if (v36 > 0x124924924924924LL) {
              goto LABEL_131;
            }
            v37 = fw_memory_HeapManager_Allocate_alt1(*v5, 224 * v36, 16, 0);
          }
          else {
            v37 = 0;
          }
          v38 = *(long double*)&GameData_1a82ea0;
          v39 = (_QWORD*)(v37 + v22 - v23);
          v39[26] = 0;
          v39[27] = 0;
          v39[24] = 0;
          v39[25] = 0;
          v39[22] = 0;
          v39[23] = 0;
          v39[20] = 0;
          v39[21] = 0;
          v39[18] = 0;
          v39[19] = 0;
          *((_OWORD*)v39 + 9) = GameData_1a82f20;
          *((_OWORD*)v39 + 10) = GameData_1a82ea0;
          v39[16] = 0;
          v39[17] = 0;
          v39[14] = 0;
          v39[15] = 0;
          v39[12] = 0;
          v39[13] = 0;
          v39[10] = 0;
          v39[11] = 0;
          v39[8] = 0;
          v39[9] = 0;
          v39[6] = 0;
          v39[7] = 0;
          v39[4] = 0;
          v39[5] = 0;
          v39[2] = 0;
          v39[3] = 0;
          *v39 = 0;
          v39[1] = 0;
          v39[24] = 0;
          v39[25] = 0;
          v39[26] = 0;
          v39[22] = 0;
          *((_DWORD*)v39 + 46) = 0;
          if (v23 != v22) {
            v40 = v23;
            v41 = v37;
            do {
              v42 = *(_QWORD*)v40;
              *(_QWORD*)(v41 + 16) = 0;
              *(_QWORD*)(v41 + 24) = 0;
              *(_QWORD*)v41 = v42;
              *(_QWORD*)(v41 + 8) = *((_QWORD*)v40 + 1);
              *(_QWORD*)(v41 + 16) = *((_QWORD*)v40 + 2);
              *(_QWORD*)(v41 + 24) = *((_QWORD*)v40 + 3);
              *((_QWORD*)v40 + 2) = 0;
              *((_QWORD*)v40 + 3) = 0;
              *((_QWORD*)v40 + 1) = 0;
              v43 = *((_QWORD*)v40 + 4);
              *(_QWORD*)(v41 + 48) = 0;
              *(_QWORD*)(v41 + 56) = 0;
              *(_QWORD*)(v41 + 32) = v43;
              *(_QWORD*)(v41 + 40) = *((_QWORD*)v40 + 5);
              *(_QWORD*)(v41 + 48) = *((_QWORD*)v40 + 6);
              *(_QWORD*)(v41 + 56) = *((_QWORD*)v40 + 7);
              *((_QWORD*)v40 + 6) = 0;
              *((_QWORD*)v40 + 7) = 0;
              *((_QWORD*)v40 + 5) = 0;
              v44 = *((_QWORD*)v40 + 8);
              *(_QWORD*)(v41 + 80) = 0;
              *(_QWORD*)(v41 + 88) = 0;
              *(_QWORD*)(v41 + 64) = v44;
              *(_QWORD*)(v41 + 72) = *((_QWORD*)v40 + 9);
              *(_QWORD*)(v41 + 80) = *((_QWORD*)v40 + 10);
              *(_QWORD*)(v41 + 88) = *((_QWORD*)v40 + 11);
              *((_QWORD*)v40 + 10) = 0;
              *((_QWORD*)v40 + 11) = 0;
              *((_QWORD*)v40 + 9) = 0;
              v45 = *((_QWORD*)v40 + 12);
              *(_QWORD*)(v41 + 112) = 0;
              *(_QWORD*)(v41 + 120) = 0;
              *(_QWORD*)(v41 + 96) = v45;
              *(_QWORD*)(v41 + 104) = *((_QWORD*)v40 + 13);
              *(_QWORD*)(v41 + 112) = *((_QWORD*)v40 + 14);
              *(_QWORD*)(v41 + 120) = *((_QWORD*)v40 + 15);
              *((_QWORD*)v40 + 14) = 0;
              *((_QWORD*)v40 + 15) = 0;
              *((_QWORD*)v40 + 13) = 0;
              v47 = *((_QWORD*)v40 + 16);
              v46 = *((_QWORD*)v40 + 17);
              v48 = *((_QWORD*)v40 + 19);
              *(_QWORD*)(v41 + 144) = *((_QWORD*)v40 + 18);
              *(_QWORD*)(v41 + 152) = v48;
              *(_QWORD*)(v41 + 128) = v47;
              *(_QWORD*)(v41 + 136) = v46;
              v50 = *((_QWORD*)v40 + 20);
              v49 = *((_QWORD*)v40 + 21);
              v51 = *((_QWORD*)v40 + 22);
              v52 = *((_DWORD*)v40 + 46);
              *(_QWORD*)(v41 + 200) = 0;
              *(_QWORD*)(v41 + 208) = 0;
              *(_QWORD*)(v41 + 192) = 0;
              *(_DWORD*)(v41 + 184) = v52;
              *(_QWORD*)(v41 + 168) = v49;
              *(_QWORD*)(v41 + 176) = v51;
              *(_QWORD*)(v41 + 160) = v50;
              *(_QWORD*)(v41 + 192) = *((_QWORD*)v40 + 24);
              *(_QWORD*)(v41 + 200) = *((_QWORD*)v40 + 25);
              *(_QWORD*)(v41 + 208) = *((_QWORD*)v40 + 26);
              *((_QWORD*)v40 + 25) = 0;
              *((_QWORD*)v40 + 26) = 0;
              *((_QWORD*)v40 + 24) = 0;
              v40 += 224;
              v41 += 224;
            } while (v40 != v22);
            do {
              LODAdjuster_a9b870_alt1(v23);
              v23 += 224;
            } while (v23 != v22);
          }
          v25 = v39 + 28;
          v53 = *((_QWORD*)a1 + 7);
          *((_QWORD*)a1 + 7) = v37;
          *((_QWORD*)a1 + 8) = v39 + 28;
          *((_QWORD*)a1 + 9) = v37 + 224 * v36;
          v4 = a1;
          v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          if (v53 != 0) {
            v54 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v38);
          }
          v8 = v140;
          v3 = v137;
        }
        else {
          v8 = v140;
          *((_QWORD*)v22 + 26) = 0;
          *((_QWORD*)v22 + 27) = 0;
          *((_QWORD*)v22 + 24) = 0;
          *((_QWORD*)v22 + 25) = 0;
          *((_QWORD*)v22 + 22) = 0;
          *((_QWORD*)v22 + 23) = 0;
          *((_QWORD*)v22 + 20) = 0;
          *((_QWORD*)v22 + 21) = 0;
          *((_QWORD*)v22 + 18) = 0;
          *((_QWORD*)v22 + 19) = 0;
          *((_QWORD*)v22 + 16) = 0;
          *((_QWORD*)v22 + 17) = 0;
          *((_OWORD*)v22 + 9) = GameData_1a82f20;
          *((_OWORD*)v22 + 10) = GameData_1a82ea0;
          *((_QWORD*)v22 + 14) = 0;
          *((_QWORD*)v22 + 15) = 0;
          *((_QWORD*)v22 + 12) = 0;
          *((_QWORD*)v22 + 13) = 0;
          *((_QWORD*)v22 + 10) = 0;
          *((_QWORD*)v22 + 11) = 0;
          *((_QWORD*)v22 + 8) = 0;
          *((_QWORD*)v22 + 9) = 0;
          *((_QWORD*)v22 + 6) = 0;
          *((_QWORD*)v22 + 7) = 0;
          *((_QWORD*)v22 + 4) = 0;
          *((_QWORD*)v22 + 5) = 0;
          *((_QWORD*)v22 + 2) = 0;
          *((_QWORD*)v22 + 3) = 0;
          *(_QWORD*)v22 = 0;
          *((_QWORD*)v22 + 1) = 0;
          *((_QWORD*)v22 + 24) = 0;
          *((_QWORD*)v22 + 25) = 0;
          *((_QWORD*)v22 + 26) = 0;
          *((_QWORD*)v22 + 22) = 0;
          *((_DWORD*)v22 + 46) = 0;
          v25 = v22 + 224;
        }
        *((_QWORD*)v4 + 8) = v25;
        v55 = v4[4];
        v142[0] = 0xFFFFFFFEFFFFFFFELL;
        v142[1] = 0xFFFFFFFE00000000LL;
        v142[2] = 4294967294LL;
        v56 = *(v25 - 4);
        v6 = (__int64)(v25 - 4);
        v57 = 0xAAAAAAAAAAAAAAABLL * ((*(v25 - 3) - v56) >> 3);
        if (v55 <= v57) {
          if (v55 < v57) {
            *(v25 - 3) = v56 + 24LL * (int)v55;
          }
        }
        else {
          v6 = LODAdjuster_a9bd00_alt1(v6, v55 - v57, v142);
        }
      }
      else {
        v13 = *v11;
        v14 = v12 - v11;
        if (v14 >= 2) {
          v15 = 0;
          v16 = *((__int64**)v4 + 3);
          do {
            v20 = &v16[v15];
            v21 = (2 * v15) | 1;
            v19 = v20 + 1;
            v15 = 2 * v15 + 2;
            if (v15 < v14) {
              v18 = v20[2];
              v17 = v20 + 2;
              if (*(v17 - 1) <= v18) {
                v15 = v21;
              }
              else {
                v19 = v17;
              }
            }
            else {
              v15 = v21;
            }
            *v16 = *v19;
            v16 = v19;
          } while (v15 <= (__int64)((unsigned __int64)(v14 - 2) >> 1));
          v26 = v12 - 1;
          if (v19 == v26) {
            *v19 = v13;
          }
          else {
            *v19 = *v26;
            *v26 = v13;
            v27 = ((char*)v19 - (char*)v11 + 8) >> 3;
            v28 = v27 < 2;
            v29 = v27 - 2;
            if (!v28) {
              v30 = v29 >> 1;
              v31 = *v19;
              v32 = &v11[v30];
              v33 = *v32;
              if (*v32 > (unsigned __int64)*v19) {
                do {
                  *v19 = v33;
                  v19 = v32;
                  if (v30 == 0) {
                    break;
                  }
                  v30 = (v30 - 1) >> 1;
                  v32 = &v11[v30];
                  v33 = *v32;
                } while (*v32 > v31);
                *v19 = v31;
              }
            }
          }
        }
        *((_QWORD*)v4 + 4) -= 8LL;
      }
      *(_BYTE*)(*((_QWORD*)v4 + 7) + 224 * v13 + 184) = 1;
      v58 = (_QWORD*)(*((_QWORD*)v4 + 7) + 224 * v13);
      v58[16] = 1;
      *v58 = v134;
      v58[2] = v58[1];
      if ((unsigned __int64)v10 < v7) {
        *v10++ = v13;
      }
      else {
        v59 = v8;
        v60 = (char*)v10 - v8;
        v61 = (v60 >> 3) + 1;
        if (v61 >> 61 != 0) {
          GameRoutine_65c760_alt1();
        }
        v62 = v7 - (_QWORD)v59;
        v63 = v59;
        v64 = (__int64)(v7 - (_QWORD)v59) >> 2;
        if (v64 > v61) {
          v61 = v64;
        }
        if (v62 >= 0x7FFFFFFFFFFFFFF8LL) {
          v65 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v65 = v61;
        }
        if (v65 != 0) {
          if (v65 >> 61 != 0) {
          LABEL_131:
            GameRoutine_60a210_alt1(v6);
          }
          v66 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v65, 16, 0);
        }
        else {
          v66 = 0;
        }
        v7 = v66 + 8 * v65;
        v67 = v66 + v60 - 8 * (v60 >> 3);
        *(_QWORD*)(v66 + v60) = v13;
        v10 = (__int64*)(v66 + v60 + 8);
        v6 = GameRoutine_1a0b950_alt1(v67, v63, v60);
        if (v63 != nullptr) {
          v69 = 128;
          if (*(_QWORD*)(*v5 + 200LL) == 0) {
            v69 = 56;
          }
          v6 = nn_mem_StandardAllocator_Free_alt1(*v5 + v69, v68);
        }
        v8 = (char*)v67;
        v4 = a1;
      }
      if (++v9 == (_DWORD)v3) {
        goto LABEL_64;
      }
    }
  }
  v8 = nullptr;
  v10 = nullptr;
  v7 = 0;
LABEL_64:
  v129 = v10;
  v130 = v7;
  v70 = *((_DWORD*)a2 + 2);
  if (v70 == 0) {
    if (v4[4] >= 1) {
      v118 = 0;
      v119 = 0;
      v120 = *((_QWORD*)v4 + 7) + 224LL * *(_QWORD*)v8;
      do {
        v121 = (_QWORD*)(*(_QWORD*)(*((_QWORD*)v4 + 10) + v118) +
                         32LL * (unsigned int)v134);
        GameRoutine_1943530_alt1(v121, 0);
        if (v121[1] == v121[2]) {
          *v121 = *(_QWORD*)(v120 + 192) + v118;
        }
        ++v119;
        v118 += 24;
      } while (v119 < v4[4]);
    }
    goto LABEL_129;
  }
  v141 = v8;
  if (v70 == 2) {
    if (v4[4] < 1) {
      goto LABEL_129;
    }
    v93 = a2[3];
    v94 = (unsigned int)v134;
    if ((int)v93 <= 0) {
      v122 = 0;
      v123 = 0;
      do {
        GameRoutine_1943530_alt1(*(_QWORD*)(*((_QWORD*)v4 + 10) + v122) +
                                     32LL * (unsigned int)v134,
                                 (unsigned int)v93);
        ++v123;
        v122 += 24;
      } while (v123 < v4[4]);
      goto LABEL_129;
    }
    v95 = a2[2];
    v96 = a2[3] & 0x7FFFFFFF;
    v97 = 0;
    v133 = a2[3];
    v138 = v95;
  LABEL_97:
    v136 = v97;
    v98 = *(_QWORD*)(*((_QWORD*)v4 + 10) + 24 * v97) + 32 * v94;
    v6 = GameRoutine_1943530_alt1(v98, (unsigned int)v93);
    v99 = 0;
    while (1) {
      v100 =
          (_QWORD*)(*((_QWORD*)v4 + 7) +
                    224LL * *(_QWORD*)&v8[8 * *(unsigned int*)(v95 + 4 * v99)]);
      v102 = (_DWORD*)v100[2];
      v101 = v100[3];
      if ((unsigned __int64)v102 >= v101) {
        break;
      }
      *v102 = v99;
      v103 = (unsigned int)v99;
      v100[2] = v102 + 1;
      if ((v99 & 0x80000000) == 0) {
        goto LABEL_117;
      }
    LABEL_98:
      if (v96 == ++v99) {
        v94 = (unsigned int)v134;
        LODWORD(v93) = v133;
        v97 = v136 + 1;
        if (v136 + 1 >= v4[4]) {
          goto LABEL_129;
        }
        goto LABEL_97;
      }
    }
    v104 = v100[1];
    v105 = (char*)v102 - v104;
    v106 = ((__int64)v102 - v104) >> 2;
    v107 = v106 + 1;
    if ((unsigned __int64)(v106 + 1) >> 62 != 0) {
    LABEL_130:
      GameRoutine_66df80_alt1(v6);
    }
    v108 = v101 - v104;
    if (v108 >> 1 > v107) {
      v107 = v108 >> 1;
    }
    if ((unsigned __int64)v108 >= 0x7FFFFFFFFFFFFFFCLL) {
      v109 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v109 = v107;
    }
    if (v109 != 0) {
      if (v109 >> 62 != 0) {
        goto LABEL_131;
      }
      v110 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v109, 16, 0);
    }
    else {
      v110 = 0;
    }
    v111 = v110 + 4 * v109;
    v103 = (unsigned int)v99;
    v112 = (char*)v102 - v104;
    v113 = (__int64)&v105[v110 + -4 * v106];
    *(_DWORD*)&v105[v110] = v99;
    v114 = (__int64)&v105[v110 + 4];
    v6 = GameRoutine_1a0b950_alt1(v113, v104, v112);
    v100[1] = v113;
    v100[2] = v114;
    v100[3] = v111;
    if (v104 != 0) {
      v116 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v116 = 56;
      }
      v6 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v115);
    }
    v4 = a1;
    v8 = v141;
    v95 = v138;
    v100[2] = v114;
    if ((v99 & 0x80000000) != 0) {
      goto LABEL_98;
    }
  LABEL_117:
    v117 = *(_QWORD*)(v98 + 8);
    if ((int)v103 <
        (int)((unsigned __int64)((__int64)(*(_QWORD*)(v98 + 16) - v117)) >> 3)) {
      *(_QWORD*)(v117 + 8 * v103) = v100[24] + 24 * v136;
    }
    goto LABEL_98;
  }
  if (v70 != 1) {
    nn_detail_UnexpectedDefaultImpl_alt1();
    __udf(0);
  }
  if (v4[4] >= 1) {
    v71 = (unsigned int)v134;
    if ((int)v3 > 0) {
      v72 = 0;
      while (1) {
        v135 = v72;
        v73 = *(_QWORD*)(*((_QWORD*)v4 + 10) + 24 * v72) + 32 * v71;
        v6 = GameRoutine_1943530_alt1(v73, (unsigned int)v3);
        v74 = 0;
        do {
          v75 = (_QWORD*)(*((_QWORD*)v4 + 7) + 224LL * *(_QWORD*)&v8[8 * v74]);
          v77 = (_DWORD*)v75[2];
          v76 = v75[3];
          if ((unsigned __int64)v77 < v76) {
            *v77 = v74;
            v78 = (unsigned int)v74;
            v75[2] = v77 + 1;
            if ((v74 & 0x80000000) != 0) {
              goto LABEL_72;
            }
          LABEL_91:
            v92 = *(_QWORD*)(v73 + 8);
            if ((int)v78 <
                (int)((unsigned __int64)((__int64)(*(_QWORD*)(v73 + 16) - v92)) >> 3)) {
              *(_QWORD*)(v92 + 8 * v78) = v75[24] + 24 * v135;
            }
            goto LABEL_72;
          }
          v79 = v75[1];
          v80 = (char*)v77 - v79;
          v81 = ((__int64)v77 - v79) >> 2;
          v82 = v81 + 1;
          if ((unsigned __int64)(v81 + 1) >> 62 != 0) {
            goto LABEL_130;
          }
          v83 = v76 - v79;
          if (v83 >> 1 > v82) {
            v82 = v83 >> 1;
          }
          if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFFCLL) {
            v84 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v84 = v82;
          }
          if (v84 != 0) {
            if (v84 >> 62 != 0) {
              goto LABEL_131;
            }
            v85 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v84, 16, 0);
          }
          else {
            v85 = 0;
          }
          v86 = v85 + 4 * v84;
          v78 = (unsigned int)v74;
          v87 = (char*)v77 - v79;
          v88 = (__int64)&v80[v85 + -4 * v81];
          *(_DWORD*)&v80[v85] = v74;
          v89 = (__int64)&v80[v85 + 4];
          v6 = GameRoutine_1a0b950_alt1(v88, v79, v87);
          v75[1] = v88;
          v75[2] = v89;
          v75[3] = v86;
          if (v79 != 0) {
            v91 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v91 = 56;
            }
            v6 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v90);
          }
          v4 = a1;
          v8 = v141;
          v3 = v137;
          v75[2] = v89;
          if ((v74 & 0x80000000) == 0) {
            goto LABEL_91;
          }
        LABEL_72:
          ++v74;
        } while (v3 != v74);
        v71 = (unsigned int)v134;
        v72 = v135 + 1;
        if (v135 + 1 >= v4[4]) {
          goto LABEL_129;
        }
      }
    }
    v124 = 0;
    v125 = 0;
    do {
      GameRoutine_1943530_alt1(*(_QWORD*)(*((_QWORD*)v4 + 10) + v124) +
                                   32LL * (unsigned int)v134,
                               (unsigned int)v3);
      ++v125;
      v124 += 24;
    } while (v125 < v4[4]);
  }
LABEL_129:
  v126 = v4[5];
  *(_QWORD*)a3 = v4;
  *(_QWORD*)(a3 + 8) = v8;
  v127 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a3 + 16) = v129;
  *(_QWORD*)(a3 + 24) = v130;
  result = fw_memory_HeapManager_Allocate_alt1(v127, 16, 16, 0);
  *(_DWORD*)(a3 + 64) = v126;
  *(_BYTE*)(result + 8) = 0;
  *(_BYTE*)(result + 12) = 0;
  *(_QWORD*)(a3 + 32) = result;
  *(_QWORD*)(a3 + 40) = result + 16;
  *(_QWORD*)(a3 + 48) = result + 16;
  *(_QWORD*)(a3 + 56) = 0;
  *(_QWORD*)result = v134;
  {
    result;
    return;
  }
}

__int64* llvm_libcxx_21_libcxx_include___vector_bd49d0(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  float32x4_t* v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  float32x2_t v15;
  float v16;
  unsigned int* v17;
  unsigned int* v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  long double v40;
  long double v41;
  int v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int128 v49;
  float v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  float v59;
  __int64 v60;
  float v61;
  float v62;
  float v63;
  float v64;
  int v65;
  int v66;
  long double v67;
  float32x4_t v68;
  __int128 v69;
  __int128 v70;
  unsigned __int64 v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float32x4_t v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  bool v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  char v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  struct {
    __int128 v104;
    float32x4_t v105;
    long double v106;
    union {
      float32x4_t v107;
      __int128 v108;
    };
    float32x4_t v109;
    float32x4_t v110;
    char gap96_[8];
    __int64 (**v111)();
    __int64 v112;
    __int64* v113;
    __int64 v114;
    float32x4_t* v115;
    __int64 (**v116)();
    __int64 v117;
    __int64 v118;
    __int64 v119;
    char gap176_[16];
    long double v120;
  } f_;
  long double v121;

  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = result[2];
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 120) + 448LL);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(v1 + 568) + 784LL);
  if (v3 == 0) {
    return result;
  }
  v4 = result;
  eft_bc9d40((void*)(&f_.v111), v2, *result),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (f_.v113 != nullptr) {
    v5 = std___1___shared_weak_count_lock((__int64)f_.v113),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v5 != 0) {
      v6 = f_.v112;
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v7),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      if (v6 != 0) {
        v8 = *(_DWORD*)(v4[2] + 16);
        if (v8 == 4) {
          v9 = 2;
        }
        else {
          v9 = 0;
        }
        if (v8 == 3) {
          v10 = 1;
        }
        else {
          v10 = v9;
        }
        LANES128(f_.v115[6]).n128_u32[2] = v10;
        v11 = (float32x4_t*)v4[2];
        v12 = *((int*)v4 + 8);
        v13 = (unsigned int*)(LANES128(v11[33]).n128_u64[0] + 16 * v12);
        v14 = LANES128(v11[29]).n128_u64[0] + 16 * v12;
        PSEUDO_LOW_LANE64(v15, n64_u64, *(unsigned __int64*)v14);
        v16 = *(float*)(v14 + 8);
        v17 = (unsigned int*)(LANES128(v11[33]).n128_u64[1] + 16 * v12);
        v18 = (unsigned int*)(LANES128(v11[34]).n128_u64[0] + 16 * v12);
        if (*(_BYTE*)(LANES128(v11[10]).n128_u64[0] + 1875) == 2) {
          LANES128(v19).n128_u64[0] = *v13 | ((unsigned __int64)*v17 << 32);
          LANES128(v19).n128_u64[1] = *v18;
          LANES128(v20).n128_u64[0] = v13[1] | ((unsigned __int64)v17[1] << 32);
          LANES128(v20).n128_u64[1] = v18[1];
          LANES128(v21).n128_u64[0] = v13[2] | ((unsigned __int64)v17[2] << 32);
          LANES128(v21).n128_u64[1] = v18[2];
          LANES128(v22).n128_u64[0] = LANES128(v11[55]).n128_u64[0];
          v23 = LANES128(v11[55]).n128_u32[2];
        }
        else {
          if (*(_BYTE*)(LANES128(v11[10]).n128_u64[0] + 1875) == 0) {
            v19 = v11[52];
            v20 = v11[53];
            v21 = v11[54];
            v22 = v11[55];
            goto LABEL_20;
          }
          LANES128(v19).n128_u64[0] = *v13 | ((unsigned __int64)*v17 << 32);
          LANES128(v19).n128_u64[1] = *v18;
          LANES128(v20).n128_u64[0] = v13[1] | ((unsigned __int64)v17[1] << 32);
          v23 = v18[3];
          LANES128(v20).n128_u64[1] = v18[1];
          LANES128(v21).n128_u64[0] = v13[2] | ((unsigned __int64)v17[2] << 32);
          LANES128(v21).n128_u64[1] = v18[2];
          LANES128(v22).n128_u64[0] = v13[3] | ((unsigned __int64)v17[3] << 32);
        }
        LANES128(v22).n128_u64[1] = v23;
      LABEL_20:
        f_.v109 = vaddq_f32(
            v22, vmlaq_n_f32(
                     vmlaq_lane_f32(vmulq_n_f32(v19, LANES64(v15).n64_f32[0]),
                                    v20, v15, 1),
                     v21, v16));
        if (f_.v113 != nullptr) {
          v24 = std___1___shared_weak_count_lock((__int64)f_.v113),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v24 != 0) {
            v25 = f_.v112;
            if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v26 = v24;
              (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v26),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v25 != 0) {
              f_.v115[1] = f_.v109;
            }
          }
        }
        v27 = v4[2];
        v28 = *((_DWORD*)v4 + 8);
        if ((*(_BYTE*)(v3 + 4) & 1) != 0) {
          v29 = *(_QWORD*)(v27 + 488);
          v30 = *(_QWORD*)(v27 + 152);
          v31 = 16LL * v28;
          v32 = *(_QWORD*)(v27 + 568);
          v121 = *(long double*)(*(_QWORD*)(v27 + 496) + v31);
          f_.v120 = *(long double*)(v29 + v31);
          game_5c2180(*((float*)v4 + 7), *((float*)v4 + 6), v30, &f_.v110, v32,
                      (float32x4_t*)&f_.v120, (float*)&v121),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          v33 = *(float*)(v3 + 24);
          f_.v110 = vmulq_f32(f_.v110,
                              *(float32x4_t*)(*(_QWORD*)(v4[2] + 120) + 320LL));
          if ((float)(v33 * LANES128(f_.v110).n128_f32[0]) >=
              0x1.47ae140000000p-7f) {
            v34 = v33 * LANES128(f_.v110).n128_f32[0];
          }
          else {
            v34 = 0x1.47ae140000000p-7f;
          }
          if (f_.v113 != nullptr) {
            v35 = std___1___shared_weak_count_lock((__int64)f_.v113),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v35 != 0) {
              v36 = f_.v112;
              if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v37 = v35;
                (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v37),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v36 != 0) {
                LANES128(f_.v115[2]).n128_f32[0] = v34;
              }
            }
          }
          v27 = v4[2];
          v28 = *((_DWORD*)v4 + 8);
        }
        v38 = *(_QWORD*)(v27 + 152);
        v39 = *(_QWORD*)(v27 + 568);
        v40 = *(long double*)(*(_QWORD*)(v27 + 496) + 16LL * v28);
        *(_QWORD*)&v41 = *(_QWORD*)(v27 + 1572);
        *((_QWORD*)&v41 + 1) = *(unsigned int*)(v27 + 1580);
        f_.v120 = v41;
        v121 = v40;
        LODWORD(v41) = *(_DWORD*)(v27 + 1620);
        LODWORD(v40) = *((_DWORD*)v4 + 6);
        game_5c26c0(v41, *((float*)v4 + 7), v40, v38, &f_.v110, v39,
                    (float*)&v121, (float*)(v27 + 1056), (float*)&f_.v120),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v42 = *(_DWORD*)(v3 + 4);
        if ((v42 & 2) != 0) {
          if (f_.v113 != nullptr) {
            v43 = *(float*)(v3 + 12);
            v44 = *(float*)(v3 + 16);
            v45 = *(float*)(v3 + 20);
            f_.v107 = f_.v110;
            v46 = std___1___shared_weak_count_lock((__int64)f_.v113),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v46 != 0) {
              v47 = f_.v112;
              if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v48 = v46;
                (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v48),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v47 != 0) {
                *(float*)&v49 = v43 * LANES128(f_.v107).n128_f32[0];
                DWORD1(v49) = vmuls_lane_f32(
                    v44, COERCE_AS(float32x2_t, LANES128(f_.v107).n128_u64[0]),
                    1);
                *((_QWORD*)&v49 + 1) =
                    COERCE_UNSIGNED_INT(vmuls_lane_f32(v45, f_.v107, 2));
                *(_OWORD*)(f_.v114 + 48) = v49;
              }
            }
          }
          v42 = *(_DWORD*)(v3 + 4);
        }
        if ((v42 & 4) != 0) {
          v50 = 0x1.0000000000000p+0f;
          v51 = *(
              _QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) - 24LL) +
                       8LL * *(int*)(v2 + 176));
          v52 = *(_QWORD*)(v51 + 16);
          if (v52 != 0) {
            v53 = *(_QWORD*)(v51 + 8);
            v54 = *(_QWORD*)(v51 + 16);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                      memory_order_relaxed);
            v55 = std___1___shared_weak_count_lock(v54),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
            std___1___shared_weak_count___release_weak(v52),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v55 != 0) {
              if (v53 != 0) {
                if (*(int*)v53 < 1) {
                  v58 = 0;
                  v57 = 0;
                }
                else {
                  v56 = *(__int64**)(v53 + 112);
                  v58 = *v56;
                  v57 = v56[1];
                  if (v57 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v57 + 8), 1u,
                        memory_order_relaxed);
                  }
                }
                v59 = 0x1.0000000000000p+0f;
                v60 = *(_QWORD*)(v4[2] + 160);
                v61 = *(float*)(v60 + 1488);
                v62 = *(float*)(v60 + 1492);
                v63 = *(float*)(v60 + 1496);
                v64 = *(float*)(v60 + 1500);
                v65 = *(unsigned __int8*)(v60 + 2454);
                v66 = *(unsigned __int8*)(v60 + 2455);
                if (v58 != 0) {
                  v67 = ((long double (*)(__int64, float)) *
                         (_QWORD*)(*(_QWORD*)v58 + 16LL))(
                      v58, 0x1.0000000000000p+0f),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  f_.v105 = v68;
                  f_.v106 = v67;
                  f_.v108 = v69;
                  f_.v104 = v70;
                  v71 = LANES128_OF(((__n128 (*)(__int64)) *
                                     (_QWORD*)(*(_QWORD*)v58 + 24LL))(v58))
                            .n128_u64[1],
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v73 =
                      *(float*)&f_.v104 +
                      (float)((float)(vmuls_lane_f32(
                                          LANES128(f_.v105).n128_f32[0],
                                          COERCE_AS(
                                              float32x2_t,
                                              LANES128(f_.v109).n128_u64[0]),
                                          1) +
                                      (float)(*(float*)&f_.v106 *
                                              LANES128(f_.v109).n128_f32[0])) +
                              (float)(*(float*)&f_.v108 *
                                      LANES128(f_.v109).n128_f32[2]));
                  v74 = *((float*)&f_.v104 + 2) +
                        (float)((float)(vmuls_lane_f32(
                                            LANES128(f_.v109).n128_f32[1],
                                            f_.v105, 2) +
                                        (float)(LANES128(f_.v109).n128_f32[0] *
                                                *((float*)&f_.v106 + 2))) +
                                (float)(LANES128(f_.v109).n128_f32[2] *
                                        *((float*)&f_.v108 + 2)));
                  v75 = *((float*)&f_.v104 + 1) +
                        (float)((float)(LANES128_OF(vmulq_f32(f_.v109, f_.v105))
                                            .n128_f32[1] +
                                        (float)(LANES128(f_.v109).n128_f32[0] *
                                                *((float*)&f_.v106 + 1))) +
                                (float)(LANES128(f_.v109).n128_f32[2] *
                                        *((float*)&f_.v108 + 1)));
                  v77 = vmuls_lane_f32(v75, v76, 3);
                  v80 = (float)(vmuls_lane_f32(v75, v76, 2) +
                                (float)(v73 * *(float*)&v71)) +
                        (float)(v74 * v79);
                  v82 = v81 +
                        (float)((float)(v77 +
                                        (float)(v73 * *((float*)&v71 + 1))) +
                                (float)(v74 * v78));
                  if (v82 < 0x0.0p+0f) {
                    v82 = -v82;
                  }
                  v83 = 0x1.0000000000000p+0f -
                        (float)(PSEUDO_UNFUSED(
                            (float)(v72 + v80) *
                            (float)(0x1.0000000000000p+0f / v82)));
                  v84 = (*(float (**)(__int64))(*(_QWORD*)v58 + 56LL))(v58),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v85 = (*(float (**)(__int64))(*(_QWORD*)v58 + 64LL))(v58),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v59 =
                      (float)-(float)(v85 * v84) /
                      (float)-(float)(v85 - (float)(v83 * (float)(v85 - v84)));
                }
                v86 = (float)(v59 - v61) / (float)(v62 - v61);
                v87 = v59 - v63;
                if (v86 <= 0x1.0000000000000p+0f) {
                  v88 = v86;
                }
                else {
                  v88 = 0x1.0000000000000p+0f;
                }
                v89 = v86 < 0x0.0p+0f;
                v90 = 0x0.0p+0f;
                if (!v89) {
                  v90 = v88;
                }
                v91 = v87 / (float)(v64 - v63);
                if (v65 == 0) {
                  v90 = 0x1.0000000000000p+0f;
                }
                if (v91 <= 0x1.0000000000000p+0f) {
                  v92 = v91;
                }
                else {
                  v92 = 0x1.0000000000000p+0f;
                }
                v93 = 0x1.0000000000000p+0f - v92;
                if (v91 >= 0x0.0p+0f) {
                  v94 = v93;
                }
                else {
                  v94 = 0x1.0000000000000p+0f;
                }
                if (v66 == 0) {
                  v94 = 0x1.0000000000000p+0f;
                }
                v50 = v90 * v94;
                if (v57 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v76 = COERCE_AS(__typeof__(v76),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                  std___1___shared_weak_count___release_weak(v57),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v76 = COERCE_AS(__typeof__(v76),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v55),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
            }
          }
          if (f_.v113 != nullptr) {
            v95 = LANES128(f_.v110).n128_f32[3];
            v96 = std___1___shared_weak_count_lock((__int64)f_.v113),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v96 != 0) {
              v97 = f_.v112;
              if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v98 = v96;
                (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v98),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v97 != 0) {
                *(float*)(f_.v114 + 72) = v50 * v95;
              }
            }
          }
        }
        if ((*(_BYTE*)(eft_g_effectSystem + 313) & 1) != 0) {
          v99 = 0;
        }
        else {
          v99 = *(_BYTE*)(v2 + 181);
        }
        if (f_.v113 != nullptr) {
          v100 = std___1___shared_weak_count_lock((__int64)f_.v113),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v100 != 0) {
            v101 = f_.v112;
            if (atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v102 = v100;
              (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v102),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v101 != 0) {
              *(_BYTE*)(f_.v114 + 92) = v99 & 1;
            }
          }
        }
      }
    }
  }
  v103 = f_.v118;
  f_.v118 = 0;
  f_.v116 = gfx_light_Actor_vtable;
  f_.v117 = 0;
  if (v103 != 0) {
    std___1___shared_weak_count___release_weak(v103),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
    f_.v119 = 0;
    if (f_.v118 != 0) {
      std___1___shared_weak_count___release_weak(f_.v118),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  else {
    f_.v119 = 0;
  }
  result = f_.v113;
  f_.v113 = nullptr;
  f_.v111 = gfx_light_Actor_vtable;
  f_.v112 = 0;
  if (result != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)result),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(__n128, "v1", "=w"));
    result = f_.v113;
    f_.v114 = 0;
    if (f_.v113 != nullptr) {
      return (__int64*)std___1___shared_weak_count___release_weak(
          (__int64)f_.v113);
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_bd5170(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  unsigned __int64 v16;
  float32x4_t v17;
  unsigned __int64 v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  bool v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  long double v64;
  float32x4_t v65;
  __int128 v66;
  __n128 v67;
  __n128 v68;
  __int64 v69;
  __int64 v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float32x2_t v80;
  float32x2_t v81;
  float32x2_t v82;
  float32x2_t v83;
  float32x2_t v84;
  unsigned __int64 v85;
  float v86;
  unsigned __int64 v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  bool v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  unsigned __int64 v185;
  int v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  __int64 v203;
  __int64 v204;
  float32x4_t v205;
  long double v206;
  __int128 v207;
  int8x16_t v208;

  v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 120) + 448LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 568) + 784LL);
    if (v3 != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) - 24LL) +
                      8LL * *(int*)(v2 + 176));
      v5 = *(_QWORD*)(v4 + 16);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v4 + 8);
        v8 = *(_QWORD*)(v4 + 16);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v9 = std___1___shared_weak_count_lock(v8),
        v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v5),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if (v9 != 0) {
          if (v6 == 0) {
            goto LABEL_108;
          }
          v10 =
              vsubq_f32(COERCE_AS(float32x4_t, 0),
                        *((float32x4_t*)GameRoutine_b3f6c0(
                              (_QWORD*)(*(_QWORD*)(v6 + 288) + 592LL), "Sun") +
                          3)),
          v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if ((*(_BYTE*)(v3 + 4) & 1) != 0) {
            LANES128(v10).n128_u32[1] = 0;
            v47 = vmulq_f32(v10, v10);
            LANES128(v47).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v47).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
            v48 = vrsqrteq_f32(v47);
            v49 = vmulq_f32(v48, vrsqrtsq_f32(v48, vmulq_f32(v47, v48)));
            v208 = vbicq_s8(
                vmulq_f32(v10, vmulq_f32(v49, vrsqrtsq_f32(
                                                  v49, vmulq_f32(v47, v49)))),
                vceqzq_f32(v47));
            if (*(int*)v6 < 1) {
              v52 = 0;
              v51 = 0;
            }
            else {
              v50 = *(__int64**)(v6 + 112);
              v52 = *v50;
              v51 = v50[1];
              if (v51 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8),
                                          1u, memory_order_relaxed);
              }
            }
            v64 = ((long double (*)(__int64)) *
                   (_QWORD*)(*(_QWORD*)v52 + 16LL))(v52),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
            v205 = v65;
            v206 = v64;
            v207 = v66;
            v67 =
                ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v52 + 24LL))(v52),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
            v71 =
                (float)((float)(vmuls_lane_f32(
                                    LANES128(v205).n128_f32[0],
                                    COERCE_AS(float32x2_t,
                                              LANES128(v208).n128_u64[0]),
                                    1) +
                                (float)(*(float*)&v206 *
                                        LANES128(v208).n128_f32[0])) +
                        (float)(*(float*)&v207 * LANES128(v208).n128_f32[2])) +
                0x0.0p+0f;
            v72 =
                (float)((float)(LANES128_OF(vmulq_f32(v208, v205)).n128_f32[1] +
                                (float)(LANES128(v208).n128_f32[0] *
                                        *((float*)&v206 + 1))) +
                        (float)(LANES128(v208).n128_f32[2] *
                                *((float*)&v207 + 1))) +
                0x0.0p+0f;
            v73 = (float)((float)(vmuls_lane_f32(LANES128(v208).n128_f32[1],
                                                 v205, 2) +
                                  (float)(LANES128(v208).n128_f32[0] *
                                          *((float*)&v206 + 2))) +
                          (float)(LANES128(v208).n128_f32[2] *
                                  *((float*)&v207 + 2))) +
                  0x0.0p+0f;
            v76 = v75 +
                  (float)((float)(vmuls_lane_f32(v72, v68, 3) +
                                  (float)(v71 * LANES128(v67).n128_f32[3])) +
                          (float)(v73 * v74));
            if (v76 < 0x0.0p+0f) {
              v76 = -v76;
            }
            v77 = 0x1.0000000000000p+0f / v76;
            v78 = *(float*)&v70 +
                  (float)((float)((float)(PSEUDO_UNFUSED(
                                      v72 * LANES128(v68).n128_f32[0])) +
                                  (float)(LANES128(v67).n128_f32[0] * v71)) +
                          (float)(*(float*)&v69 * v73));
            v79 = *((float*)&v70 + 1) +
                  (float)((float)(vmuls_lane_f32(
                                      v72,
                                      COERCE_AS(float32x2_t,
                                                LANES128(v68).n128_u64[0]),
                                      1) +
                                  (float)(v71 * LANES128(v67).n128_f32[1])) +
                          (float)(v73 * *((float*)&v69 + 1)));
            LANES64(v80).n64_f32[0] = v78 * v77;
            LANES64(v80).n64_f32[1] = v79 * v77;
            LANES64(v81).n64_u64[0] = LANES64_OF(vmul_f32(v80, v80)).n64_u64[0];
            LANES64(v82).n64_u64[0] =
                LANES64_OF(vpadd_f32(v81, v81)).n64_u64[0];
            LANES64(v83).n64_u64[0] = LANES64_OF(vrsqrte_f32(v82)).n64_u64[0];
            LANES64(v84).n64_u64[0] =
                LANES64_OF(vmul_f32(v83, vrsqrts_f32(v83, vmul_f32(v82, v83))))
                    .n64_u64[0];
            v85 =
                LANES64_OF(
                    vbic_s8(
                        vmul_f32(
                            vmul_f32(v84, vrsqrts_f32(v84, vmul_f32(v82, v84))),
                            v80),
                        vceqz_f32(v82)))
                    .n64_u64[0];
            v86 = GameRoutine_1a0ab40(*((float*)&v85 + 1), *(float*)&v85),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v1", "=w"));
            v87 = 0;
            v88 = 0x0.0p+0f;
            if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, float))(*(_QWORD*)v51 + 16LL))(v51, v86),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v51),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              v87 = 0;
              v88 = 0x0.0p+0f;
              v32 = a1;
            }
            else {
              v32 = a1;
            }
            goto LABEL_107;
          }
          v11 = vmulq_f32(v10, v10);
          LANES128(v11).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v11).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v11).n128_u64[1] = LANES128(v11).n128_u64[0];
          v12 = vrsqrteq_f32(v11);
          v13 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v11, v12)));
          v14 = vbicq_s8(
              vmulq_f32(v10,
                        vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v11, v13)))),
              vceqzq_f32(v11));
          LANES128(v15).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v11).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          v16 = LANES64_OF(
                    vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                    .n64_u64[0];
          LANES128(v17).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v18 = LANES64_OF(
                    vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
          v19 = vmulq_f32(v14, COERCE_AS(float32x4_t, GameData_1a83610));
          *(int8x8_t*)&LANES128(v15).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v20).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v11).n128_u64[1] = v16;
          LANES128(v17).n128_u64[1] = v18;
          *(int8x8_t*)&LANES128(v20).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v21 = vmlsq_f32(vmulq_f32(v15, v17), v11, v20);
          LANES128(v19).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v11).n128_u64[0] = 0x3F8000003F800000LL;
          LANES128(v11).n128_u64[1] = 0x3F8000003F800000LL;
          LANES128(v19).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
          v22 = vaddq_f32(v19, v11);
          v23 = vsqrtq_f32(vaddq_f32(v22, v22));
          v24 = vdivq_f32(v21, v23);
          LANES128(v21).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v21).n128_u64[1] = 0x3F0000003F000000LL;
          LANES128(v24).n128_u32[3] =
              LANES128_OF(vmulq_f32(v23, v21)).n128_u32[3];
          LANES128(v23).n128_u64[0] = 0x3400000034000000LL;
          LANES128(v23).n128_u64[1] = 0x3400000034000000LL;
          v25 = vbslq_s8(vcgeq_f32(v23, v22),
                         COERCE_AS(int8x16_t, GameData_1a82dd0), v24);
          v26 = LANES128_OF(vmulq_f32(v25, v25)).n128_f32[0];
          v27 = vmuls_lane_f32(
              LANES128(v25).n128_f32[1],
              COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1);
          LANES128(v23).n128_f32[0] =
              vmuls_lane_f32(LANES128(v25).n128_f32[2], v25, 3);
          v28 = vmuls_lane_f32(LANES128(v25).n128_f32[2], v25, 2);
          v29 = vmuls_lane_f32(LANES128(v25).n128_f32[3], v25, 3);
          v30 = v29 + (float)(v28 + (float)(v26 + v27));
          v31 = (float)(LANES128(v23).n128_f32[0] +
                        (float)(LANES128(v25).n128_f32[0] *
                                LANES128(v25).n128_f32[1])) +
                (float)(LANES128(v23).n128_f32[0] +
                        (float)(LANES128(v25).n128_f32[0] *
                                LANES128(v25).n128_f32[1]));
          if ((float)(v31 - v30) < -0x1.0000000000000p-23f) {
            v32 = a1;
            if (!((float)(v31 + v30) <= 0x1.0000000000000p-23f)) {
              LANES128(v25).n128_f32[0] =
                  LANES128(v25).n128_f32[0] + LANES128(v25).n128_f32[0];
              v33 = (float)(LANES128(v25).n128_f32[0] *
                            LANES128(v25).n128_f32[3]) -
                    (float)(PSEUDO_UNFUSED(LANES128(v25).n128_f32[2] *
                                           (float)(LANES128(v25).n128_f32[1] +
                                                   LANES128(v25).n128_f32[1])));
              v34 = v29 + (float)((float)(v27 - v26) - v28);
              if (v33 == 0x0.0p+0f) {
                v35 = 0x0.0p+0f;
                if (v34 == 0x0.0p+0f) {
                  goto LABEL_11;
                }
              }
              if (v34 >= 0x0.0p+0f) {
                if (v33 >= 0x0.0p+0f) {
                  v179 = *(float*)GameData_212c2f0;
                  v180 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                   (_QWORD)GameData_212c2f0);
                  v181 = *(float*)((char*)((__int128*)0x10LL) +
                                   (_QWORD)GameData_212c2f0);
                  v182 = *(float*)((char*)((__int128*)0x10LL) +
                                   (_QWORD)GameData_212c2f0 + 8);
                  if (v34 >= v33) {
                    v195 = v33 / v34;
                    v35 =
                        v195 * (float)((
                                           float)((
                                                      float)((
                                                                 float)((
                                                                            float)(v182 + (float)((
                                                                                                      float)((float)((float)(v181 + (float)((float)((float)((float)(v180 + (float)((float)((float)(v179 * (float)(v195 * v195)) - *((float*)GameData_212c2f0 + 1)) * (float)(v195 * v195))) * (float)(v195 * v195)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                    _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                (_QWORD)
                                                                                                                                                                                                                                                                                                                                    GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                4)) *
                                                                                                                                            (float)(v195 *
                                                                                                                                                    v195))) *
                                                                                                                     (float)(v195 *
                                                                                                                             v195)) -
                                                                                                             *(float*)((char*)((
                                                                                                                           __int128*)0x10LL) +
                                                                                                                       (_QWORD)
                                                                                                                           GameData_212c2f0 +
                                                                                                                       4)) *
                                                                                                  (float)(v195 *
                                                                                                          v195))) *
                                                                        (float)(v195 *
                                                                                v195)) -
                                                             *(float*)((char*)((
                                                                           __int128*)0x10LL) +
                                                                       (_QWORD)
                                                                           GameData_212c2f0 +
                                                                       12)) *
                                                  (float)(v195 * v195)) +
                                       0x1.0000000000000p+0f);
                  LABEL_11:
                    v36 = (float)(PSEUDO_UNFUSED(
                              LANES128(v25).n128_f32[0] *
                              (float)-LANES128(v25).n128_f32[2])) +
                          (float)((float)(LANES128(v25).n128_f32[1] +
                                          LANES128(v25).n128_f32[1]) *
                                  LANES128(v25).n128_f32[3]);
                    v37 = v29 + (float)((float)(v26 - v27) - v28);
                    if (v36 != 0x0.0p+0f ||
                        (v38 = 0x0.0p+0f, v37 != 0x0.0p+0f)) {
                      if (v37 >= 0x0.0p+0f) {
                        if (v36 >= 0x0.0p+0f) {
                          v167 = v37 / v36;
                          v117 = !(v37 >= v36);
                          v168 = v36 / v37;
                          v169 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                           (_QWORD)GameData_212c2f0);
                          v170 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0);
                          v171 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 8);
                          v122 = v168 *
                                 (float)((
                                             float)((
                                                        float)((
                                                                   float)((
                                                                              float)(v171 +
                                                                                     (float)((
                                                                                                 float)((
                                                                                                            float)((float)(v170 + (float)((float)((float)((float)(v169 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v168 * v168)) - *((float*)GameData_212c2f0 + 1)) * (float)(v168 *
                                                                                                                                                                                                                                                                                                v168))) *
                                                                                                                                                          (float)(v168 *
                                                                                                                                                                  v168)) -
                                                                                                                                                  *(
                                                                                                                                                      float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                              4)) *
                                                                                                                                          (float)(v168 *
                                                                                                                                                  v168))) *
                                                                                                                   (float)(v168 *
                                                                                                                           v168)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                             (float)(v168 *
                                                                                                     v168))) *
                                                                          (float)(v168 *
                                                                                  v168)) -
                                                               *(float*)((char*)((
                                                                             __int128*)0x10LL) +
                                                                         (_QWORD)
                                                                             GameData_212c2f0 +
                                                                         12)) *
                                                    (float)(v168 * v168)) +
                                         0x1.0000000000000p+0f);
                          v123 =
                              0x1.921fb60000000p+0f - (float)(PSEUDO_UNFUSED(v167 *
                                                                             (float)((float)((float)((
                                                                                                         float)((
                                                                                                                    float)(v171 +
                                                                                                                           (float)((
                                                                                                                                       float)((
                                                                                                                                                  float)((
                                                                                                                                                             float)(v170 + (float)((
                                                                                                                                                                                       float)((float)((float)(v169 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v167 * v167)) - *((float*)GameData_212c2f0 + 1)) * (float)(v167 * v167))) * (float)(v167 * v167)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                                                   _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                                               (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                                                                   (float)(v167 *
                                                                                                                                                                                           v167))) *
                                                                                                                                                         (float)(v167 *
                                                                                                                                                                 v167)) -
                                                                                                                                              *(
                                                                                                                                                  float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                   (float)(v167 *
                                                                                                                                           v167))) *
                                                                                                                (float)(v167 *
                                                                                                                        v167)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   __int128*)0x10LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               12)) *
                                                                                             (float)(v167 *
                                                                                                     v167)) +
                                                                                     0x1.0000000000000p+0f)));
                        }
                        else {
                          v115 = -v36;
                          v116 = v37 / v115;
                          v117 = v37 < v115;
                          v118 = v115 / v37;
                          v119 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                           (_QWORD)GameData_212c2f0);
                          v120 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0);
                          v121 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 8);
                          v122 = -(
                              float)(v118 * (float)((
                                                        float)((float)((float)((float)(v121 + (float)((
                                                                                                          float)((
                                                                                                                     float)((
                                                                                                                                float)(v120 + (float)((
                                                                                                                                                          float)((float)((float)(v119 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v118 * v118)) - *((float*)GameData_212c2f0 + 1)) * (float)(v118 * v118))) * (float)(v118 * v118)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                  (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                  4)) *
                                                                                                                                                      (float)(v118 *
                                                                                                                                                              v118))) *
                                                                                                                            (float)(v118 *
                                                                                                                                    v118)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               __int128*)0x10LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v118 *
                                                                                                              v118))) *
                                                                               (float)(v118 *
                                                                                       v118)) -
                                                                       *(float*)((char*)((
                                                                                     __int128*)0x10LL) +
                                                                                 (_QWORD)
                                                                                     GameData_212c2f0 +
                                                                                 12)) *
                                                               (float)(v118 *
                                                                       v118)) +
                                                    0x1.0000000000000p+0f));
                          v123 =
                              (float)(PSEUDO_UNFUSED(
                                  v116 * (float)((float)((float)((float)((float)(v121 + (float)((float)((float)((
                                                                                                                    float)(v120 + (float)((float)((float)((float)(v119 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v116 * v116)) - *((float*)GameData_212c2f0 + 1)) * (float)(v116 *
                                                                                                                                                                                                                                                                                                v116))) *
                                                                                                                                                          (float)(v116 *
                                                                                                                                                                  v116)) -
                                                                                                                                                  *(
                                                                                                                                                      float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                              4)) *
                                                                                                                                          (float)(v116 *
                                                                                                                                                  v116))) *
                                                                                                                (float)(v116 *
                                                                                                                        v116)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v116 *
                                                                                                        v116))) *
                                                                         (float)(v116 *
                                                                                 v116)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           12)) *
                                                         (float)(v116 * v116)) +
                                                 0x1.0000000000000p+0f))) +
                              -0x1.921fb60000000p+0f;
                        }
                        if (v117) {
                          v38 = v123;
                        }
                        else {
                          v38 = v122;
                        }
                      }
                      else {
                        if (v36 >= 0x0.0p+0f) {
                          v147 = -v37;
                          v148 = v147 / v36;
                          v40 = v36 > v147;
                          v149 = v36 / v147;
                          v150 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                           (_QWORD)GameData_212c2f0);
                          v151 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0);
                          v152 = *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 8);
                          v45 = (float)(PSEUDO_UNFUSED(
                                    v148 *
                                    (float)((float)((float)((float)((float)(v152 +
                                                                            (float)((float)((float)((
                                                                                                        float)(v151 +
                                                                                                               (float)((float)((float)((float)(v150 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v148 * v148)) - *((float*)GameData_212c2f0 + 1)) * (float)(v148 * v148))) * (float)(v148 * v148)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                    _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                (_QWORD)
                                                                                                                                                                                                                                                                                                                                    GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                4)) *
                                                                                                                       (float)(v148 *
                                                                                                                               v148))) *
                                                                                                    (float)(v148 *
                                                                                                            v148)) -
                                                                                            *(float*)((char*)((
                                                                                                          __int128*)0x10LL) +
                                                                                                      (_QWORD)
                                                                                                          GameData_212c2f0 +
                                                                                                      4)) *
                                                                                    (float)(v148 *
                                                                                            v148))) *
                                                                    (float)(v148 *
                                                                            v148)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                    (float)(v148 * v148)) +
                                            0x1.0000000000000p+0f))) +
                                0x1.921fb60000000p+0f;
                          v46 = 0x1.921fb60000000p+1f -
                                (float)(PSEUDO_UNFUSED(
                                    v149 *
                                    (float)((float)((float)((float)((float)(v152 +
                                                                            (float)((float)((float)((
                                                                                                        float)(v151 +
                                                                                                               (float)((float)((float)((float)(v150 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v149 * v149)) - *((float*)GameData_212c2f0 + 1)) * (float)(v149 * v149))) * (float)(v149 * v149)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                    _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                (_QWORD)
                                                                                                                                                                                                                                                                                                                                    GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                4)) *
                                                                                                                       (float)(v149 *
                                                                                                                               v149))) *
                                                                                                    (float)(v149 *
                                                                                                            v149)) -
                                                                                            *(float*)((char*)((
                                                                                                          __int128*)0x10LL) +
                                                                                                      (_QWORD)
                                                                                                          GameData_212c2f0 +
                                                                                                      4)) *
                                                                                    (float)(v149 *
                                                                                            v149))) *
                                                                    (float)(v149 *
                                                                            v149)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                    (float)(v149 * v149)) +
                                            0x1.0000000000000p+0f)));
                        }
                        else {
                          v39 = v37 / v36;
                          v40 = v37 > v36;
                          v41 = v36 / v37;
                          v42 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                          (_QWORD)GameData_212c2f0);
                          v43 = *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0);
                          v44 = *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 8);
                          v45 =
                              -0x1.921fb60000000p+0f -
                              (float)(PSEUDO_UNFUSED(
                                  v39 *
                                  (float)((float)((float)((float)((float)(v44 +
                                                                          (float)((
                                                                                      float)((
                                                                                                 float)((
                                                                                                            float)(v43 + (float)((float)((float)((float)(v42 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v39 * v39)) - *((float*)GameData_212c2f0 + 1)) * (float)(v39 * v39))) * (float)(v39 * v39)) - *(
                                                                                                                                                                                                                                                                                                                             float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                     4)) *
                                                                                                                                 (float)(v39 *
                                                                                                                                         v39))) *
                                                                                                        (float)(v39 *
                                                                                                                v39)) -
                                                                                             *(float*)((char*)((
                                                                                                           __int128*)0x10LL) +
                                                                                                       (_QWORD)
                                                                                                           GameData_212c2f0 +
                                                                                                       4)) *
                                                                                  (float)(v39 *
                                                                                          v39))) *
                                                                  (float)(v39 *
                                                                          v39)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    12)) *
                                                  (float)(v39 * v39)) +
                                          0x1.0000000000000p+0f)));
                          v46 =
                              (float)(PSEUDO_UNFUSED(
                                  v41 *
                                  (float)((float)((float)((float)((float)(v44 +
                                                                          (float)((
                                                                                      float)((
                                                                                                 float)((
                                                                                                            float)(v43 + (float)((float)((float)((float)(v42 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v41 * v41)) - *((float*)GameData_212c2f0 + 1)) * (float)(v41 * v41))) * (float)(v41 * v41)) - *(
                                                                                                                                                                                                                                                                                                                             float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                     4)) *
                                                                                                                                 (float)(v41 *
                                                                                                                                         v41))) *
                                                                                                        (float)(v41 *
                                                                                                                v41)) -
                                                                                             *(float*)((char*)((
                                                                                                           __int128*)0x10LL) +
                                                                                                       (_QWORD)
                                                                                                           GameData_212c2f0 +
                                                                                                       4)) *
                                                                                  (float)(v41 *
                                                                                          v41))) *
                                                                  (float)(v41 *
                                                                          v41)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    12)) *
                                                  (float)(v41 * v41)) +
                                          0x1.0000000000000p+0f))) +
                              -0x1.921fb60000000p+1f;
                        }
                        if (v40) {
                          v38 = v45;
                        }
                        else {
                          v38 = v46;
                        }
                      }
                    }
                    v172 = v31 / v30;
                    v173 = sqrtf(0x1.0000000000000p+0f - (float)(v172 * v172));
                    if (v172 >= 0x0.0p+0f) {
                      v196 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                       (_QWORD)GameData_212c2f0);
                      v197 = *(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c2f0);
                      v198 = *(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c2f0 + 8);
                      v199 = v172 / v173;
                      v200 = v173 / v172;
                      v201 =
                          v199 *
                          (float)((float)((float)((float)((float)(v198 + (float)((
                                                                                     float)((
                                                                                                float)((
                                                                                                           float)(v197 + (float)((float)((float)((float)(v196 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v199 * v199)) - *((float*)GameData_212c2f0 + 1)) * (float)(v199 * v199))) * (float)(v199 * v199)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                          4)) *
                                                                                                                                 (float)(v199 *
                                                                                                                                         v199))) *
                                                                                                       (float)(v199 *
                                                                                                               v199)) -
                                                                                            *(float*)((char*)((
                                                                                                          __int128*)0x10LL) +
                                                                                                      (_QWORD)GameData_212c2f0 +
                                                                                                      4)) *
                                                                                 (float)(v199 *
                                                                                         v199))) *
                                                          (float)(v199 *
                                                                  v199)) -
                                                  *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12)) *
                                          (float)(v199 * v199)) +
                                  0x1.0000000000000p+0f);
                      v202 = 0x1.921fb60000000p+0f - (float)(PSEUDO_UNFUSED(
                                                         v200 * (float)((float)((
                                                                                    float)((
                                                                                               float)((
                                                                                                          float)(v198 + (float)((
                                                                                                                                    float)((
                                                                                                                                               float)((
                                                                                                                                                          float)(v197 + (float)((
                                                                                                                                                                                    float)((
                                                                                                                                                                                               float)((float)(v196 + (float)((
                                                                                                                                                                                                                                 float)((float)(*(float*)GameData_212c2f0 * (float)(v200 * v200)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                      1)) *
                                                                                                                                                                                                                             (float)(v200 *
                                                                                                                                                                                                                                     v200))) *
                                                                                                                                                                                                      (float)(v200 *
                                                                                                                                                                                                              v200)) -
                                                                                                                                                                                           *(float*)((char*)((
                                                                                                                                                                                                         _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                     (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                                                                (float)(v200 *
                                                                                                                                                                                        v200))) *
                                                                                                                                                      (float)(v200 *
                                                                                                                                                              v200)) -
                                                                                                                                           *(
                                                                                                                                               float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                       4)) *
                                                                                                                                (float)(v200 *
                                                                                                                                        v200))) *
                                                                                                      (float)(v200 *
                                                                                                              v200)) -
                                                                                           *(float*)((char*)((
                                                                                                         __int128*)0x10LL) +
                                                                                                     (_QWORD)
                                                                                                         GameData_212c2f0 +
                                                                                                     12)) *
                                                                                (float)(v200 *
                                                                                        v200)) +
                                                                        0x1.0000000000000p+0f)));
                      if (v172 > 0x1.6a09e60000000p-1f) {
                        v175 = v202;
                      }
                      else {
                        v175 = v201;
                      }
                    }
                    else if (v172 >= -0x1.6a09e60000000p-1f) {
                      v176 = (float)-v172 / v173;
                      v175 =
                          -(
                              float)(v176 *
                                     (float)((float)((float)-(
                                                         float)(*(float*)((char*)((
                                                                              __int128*)0x10LL) +
                                                                          (_QWORD)
                                                                              GameData_212c2f0 +
                                                                          12) -
                                                                (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                   float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                         (float)((float)-(
                                                                                                                                                                                                                                                                                     float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                                                                                                                                                                                                                                               float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              1) -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (float)(*(float*)GameData_212c2f0 * (float)(v176 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        v176))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                 (float)(v176 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         v176))) *
                                                                                                                                                                                                                                                                                                                                                                           (float)(v176 *
                                                                                                                                                                                                                                                                                                                                                                                   v176))) *
                                                                                                                                                                                                                                                                                 (float)(v176 *
                                                                                                                                                                                                                                                                                         v176))) *
                                                                                                                                                                                                                                                                 (float)(v176 * v176))) *
                                                                                                                                                               (float)(v176 *
                                                                                                                                                                       v176))) *
                                                                        (float)(v176 *
                                                                                v176))) *
                                                     (float)(v176 * v176)) +
                                             0x1.0000000000000p+0f));
                    }
                    else {
                      v174 = (float)-v173 / v172;
                      v175 =
                          (float)(PSEUDO_UNFUSED(
                              v174 * (float)((float)((float)-(
                                                         float)(*(float*)((char*)((
                                                                              __int128*)0x10LL) +
                                                                          (_QWORD)
                                                                              GameData_212c2f0 +
                                                                          12) -
                                                                (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                   float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                         (float)((float)-(
                                                                                                                                                                                                                                                                                     float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                                                                                                                                                                                                                                               float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              1) -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (float)(*(float*)GameData_212c2f0 * (float)(v174 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        v174))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                 (float)(v174 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         v174))) *
                                                                                                                                                                                                                                                                                                                                                                           (float)(v174 *
                                                                                                                                                                                                                                                                                                                                                                                   v174))) *
                                                                                                                                                                                                                                                                                 (float)(v174 *
                                                                                                                                                                                                                                                                                         v174))) *
                                                                                                                                                                                                                                                                 (float)(v174 * v174))) *
                                                                                                                                                               (float)(v174 *
                                                                                                                                                                       v174))) *
                                                                        (float)(v174 *
                                                                                v174))) *
                                                     (float)(v174 * v174)) +
                                             0x1.0000000000000p+0f))) +
                          -0x1.921fb60000000p+0f;
                    }
                    v185 = __PAIR64__(LODWORD(v38), LODWORD(v35));
                    v87 = __PAIR64__(LODWORD(v38), LODWORD(v35));
                    v88 = v175;
                    goto LABEL_106;
                  }
                  v191 = v34 / v33;
                  v192 = 0x1.921fb60000000p+0f;
                  v193 = (float)((
                                     float)((float)((float)(v182 +
                                                            (float)((float)((float)((
                                                                                        float)(v181 +
                                                                                               (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v180 + (float)((float)((float)(v179 * (float)(v191 * v191)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                       (float)(v191 *
                                                                                                                                                               v191))) *
                                                                                                                             (float)(v191 *
                                                                                                                                     v191)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v191 *
                                                                                                               v191))) *
                                                                                    (float)(v191 *
                                                                                            v191)) -
                                                                            *(float*)((char*)((
                                                                                          __int128*)0x10LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c2f0 +
                                                                                      4)) *
                                                                    (float)(v191 *
                                                                            v191))) *
                                                    (float)(v191 * v191)) -
                                            *(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      12)) *
                                 (float)(v191 * v191)) +
                         0x1.0000000000000p+0f;
                LABEL_97:
                  v35 = v192 - (float)(PSEUDO_UNFUSED(v191 * v193));
                  goto LABEL_11;
                }
                v139 = -v33;
                v117 = v34 < (float)-v33;
                v140 = *(float*)GameData_212c2f0;
                v141 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c2f0);
                v142 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0);
                v143 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 8);
                if (!v117) {
                  v188 = v139 / v34;
                  v35 =
                      -(float)(v188 * (float)((
                                                  float)((float)((float)((float)(v143 + (float)((float)((float)((float)(v142 + (float)((float)((float)((float)(v141 + (float)((float)((float)(v140 * (float)(v188 * v188)) - *((float*)GameData_212c2f0 + 1)) * (float)(v188 * v188))) * (float)(v188 * v188)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                       (float)(v188 *
                                                                                                                                               v188))) *
                                                                                                                (float)(v188 *
                                                                                                                        v188)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v188 *
                                                                                                        v188))) *
                                                                         (float)(v188 *
                                                                                 v188)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           12)) *
                                                         (float)(v188 * v188)) +
                                              0x1.0000000000000p+0f));
                  goto LABEL_11;
                }
                v144 = v34 / v139;
                v145 = -0x1.921fb60000000p+0f;
                v146 = v144 * (float)((
                                          float)((
                                                     float)((float)((float)(v143 + (float)((
                                                                                               float)((
                                                                                                          float)((float)(v142 + (float)((float)((float)((float)(v141 + (float)((float)((float)(v140 * (float)(v144 * v144)) - *((float*)GameData_212c2f0 + 1)) * (float)(v144 * v144))) * (float)(v144 * v144)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                            4)) *
                                                                                                                                        (float)(v144 *
                                                                                                                                                v144))) *
                                                                                                                 (float)(v144 *
                                                                                                                         v144)) -
                                                                                                      *(float*)((char*)((
                                                                                                                    __int128*)0x10LL) +
                                                                                                                (_QWORD)
                                                                                                                    GameData_212c2f0 +
                                                                                                                4)) *
                                                                                           (float)(v144 *
                                                                                                   v144))) *
                                                                    (float)(v144 *
                                                                            v144)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                 (float)(v144 * v144)) +
                                      0x1.0000000000000p+0f);
              }
              else {
                if (v33 < 0x0.0p+0f) {
                  v100 = v34 / v33;
                  v40 = v34 > v33;
                  v101 = v33 / v34;
                  v102 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                   (_QWORD)GameData_212c2f0);
                  v103 = *(float*)((char*)((__int128*)0x10LL) +
                                   (_QWORD)GameData_212c2f0);
                  v104 = *(float*)((char*)((__int128*)0x10LL) +
                                   (_QWORD)GameData_212c2f0 + 8);
                  v105 = -0x1.921fb60000000p+0f - (float)(PSEUDO_UNFUSED(v100 *
                                                                         (float)((
                                                                                     float)((
                                                                                                float)((
                                                                                                           float)((
                                                                                                                      float)(v104 +
                                                                                                                             (float)((
                                                                                                                                         float)((
                                                                                                                                                    float)((
                                                                                                                                                               float)(v103 + (float)((float)((float)((float)(v102 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v100 *
                                                                                                                                                                                                                                                                                v100)) -
                                                                                                                                                                                                                                    *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                                                                                            (float)(v100 *
                                                                                                                                                                                                                                    v100))) *
                                                                                                                                                                                                     (float)(v100 *
                                                                                                                                                                                                             v100)) -
                                                                                                                                                                                             *(
                                                                                                                                                                                                 float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                                                                     (float)(v100 *
                                                                                                                                                                                             v100))) *
                                                                                                                                                           (float)(v100 *
                                                                                                                                                                   v100)) -
                                                                                                                                                *(
                                                                                                                                                    float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                            4)) *
                                                                                                                                     (float)(v100 *
                                                                                                                                             v100))) *
                                                                                                                  (float)(v100 *
                                                                                                                          v100)) -
                                                                                                       *(float*)((char*)((
                                                                                                                     __int128*)0x10LL) +
                                                                                                                 (_QWORD)
                                                                                                                     GameData_212c2f0 +
                                                                                                                 12)) *
                                                                                            (float)(v100 *
                                                                                                    v100)) +
                                                                                 0x1.0000000000000p+0f)));
                  v106 =
                      (float)(PSEUDO_UNFUSED(
                          v101 *
                          (float)((float)((float)((float)((float)(v104 + (float)((
                                                                                     float)((
                                                                                                float)((
                                                                                                           float)(v103 + (float)((float)((float)((float)(v102 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v101 * v101)) - *((float*)GameData_212c2f0 + 1)) * (float)(v101 * v101))) * (float)(v101 * v101)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                          4)) *
                                                                                                                                 (float)(v101 *
                                                                                                                                         v101))) *
                                                                                                       (float)(v101 *
                                                                                                               v101)) -
                                                                                            *(float*)((char*)((
                                                                                                          __int128*)0x10LL) +
                                                                                                      (_QWORD)GameData_212c2f0 +
                                                                                                      4)) *
                                                                                 (float)(v101 *
                                                                                         v101))) *
                                                          (float)(v101 *
                                                                  v101)) -
                                                  *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12)) *
                                          (float)(v101 * v101)) +
                                  0x1.0000000000000p+0f))) +
                      -0x1.921fb60000000p+1f;
                  if (v40) {
                    v35 = v105;
                  }
                  else {
                    v35 = v106;
                  }
                  goto LABEL_11;
                }
                v160 = -v34;
                v40 = v33 > (float)-v34;
                v161 = *(float*)GameData_212c2f0;
                v162 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c2f0);
                v163 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0);
                v164 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 8);
                if (!v40) {
                  v191 = v33 / v160;
                  v192 = 0x1.921fb60000000p+1f;
                  v193 = (float)((
                                     float)((float)((float)(v164 +
                                                            (float)((float)((float)((
                                                                                        float)(v163 +
                                                                                               (float)((
                                                                                                           float)((
                                                                                                                      float)((
                                                                                                                                 float)(v162 + (float)((float)((float)(v161 * (float)(v191 * v191)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                       (float)(v191 *
                                                                                                                                                               v191))) *
                                                                                                                             (float)(v191 *
                                                                                                                                     v191)) -
                                                                                                                  *(float*)((char*)((
                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                            (_QWORD)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            4)) *
                                                                                                       (float)(v191 *
                                                                                                               v191))) *
                                                                                    (float)(v191 *
                                                                                            v191)) -
                                                                            *(float*)((char*)((
                                                                                          __int128*)0x10LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c2f0 +
                                                                                      4)) *
                                                                    (float)(v191 *
                                                                            v191))) *
                                                    (float)(v191 * v191)) -
                                            *(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      12)) *
                                 (float)(v191 * v191)) +
                         0x1.0000000000000p+0f;
                  goto LABEL_97;
                }
                v165 = v160 / v33;
                v145 = 0x1.921fb60000000p+0f;
                v146 = v165 * (float)((
                                          float)((
                                                     float)((float)((float)(v164 + (float)((
                                                                                               float)((
                                                                                                          float)((float)(v163 + (float)((float)((float)((float)(v162 + (float)((float)((float)(v161 * (float)(v165 * v165)) - *((float*)GameData_212c2f0 + 1)) * (float)(v165 * v165))) * (float)(v165 * v165)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                            4)) *
                                                                                                                                        (float)(v165 *
                                                                                                                                                v165))) *
                                                                                                                 (float)(v165 *
                                                                                                                         v165)) -
                                                                                                      *(float*)((char*)((
                                                                                                                    __int128*)0x10LL) +
                                                                                                                (_QWORD)
                                                                                                                    GameData_212c2f0 +
                                                                                                                4)) *
                                                                                           (float)(v165 *
                                                                                                   v165))) *
                                                                    (float)(v165 *
                                                                            v165)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                 (float)(v165 * v165)) +
                                      0x1.0000000000000p+0f);
              }
              v35 = v146 + v145;
              goto LABEL_11;
            }
            if (LANES128(v25).n128_f32[3] == 0x0.0p+0f) {
              v89 = 0x0.0p+0f;
              if (LANES128(v25).n128_f32[0] == 0x0.0p+0f) {
                goto LABEL_99;
              }
            }
            if (LANES128(v25).n128_f32[3] >= 0x0.0p+0f) {
              if (LANES128(v25).n128_f32[0] >= 0x0.0p+0f) {
                v90 = *(float*)GameData_212c2f0;
                v91 = -*((float*)GameData_212c2f0 + 1);
                v92 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                (_QWORD)GameData_212c2f0);
                v93 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c2f0 + 4);
                v94 = *(float*)((char*)((__int128*)0x10LL) +
                                (_QWORD)GameData_212c2f0);
                v95 = -*(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 4);
                v96 = *(float*)((char*)((__int128*)0x10LL) +
                                (_QWORD)GameData_212c2f0 + 8);
                v97 = -*(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 12);
                if (LANES128(v25).n128_f32[3] >= LANES128(v25).n128_f32[0]) {
                  v194 = LANES128(v25).n128_f32[0] / LANES128(v25).n128_f32[3];
                  v89 = v194 *
                        (float)((
                                    float)((
                                               float)((
                                                          float)((
                                                                     float)(v96 + (float)((
                                                                                              float)((
                                                                                                         float)((float)(v94 + (float)((float)((float)((float)(v92 + (float)((float)((float)(v90 * (float)(v194 * v194)) - *((float*)GameData_212c2f0 + 1)) * (float)(v194 * v194))) * (float)(v194 * v194)) - *(
                                                                                                                                                                                                                                                                                                                  float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                      (float)(v194 *
                                                                                                                                              v194))) *
                                                                                                                (float)(v194 *
                                                                                                                        v194)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   __int128*)0x10LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               4)) *
                                                                                          (float)(v194 *
                                                                                                  v194))) *
                                                                 (float)(v194 *
                                                                         v194)) -
                                                      *(float*)((char*)((
                                                                    __int128*)0x10LL) +
                                                                (_QWORD)
                                                                    GameData_212c2f0 +
                                                                12)) *
                                           (float)(v194 * v194)) +
                                0x1.0000000000000p+0f);
                  goto LABEL_99;
                }
                v98 = LANES128(v25).n128_f32[3] / LANES128(v25).n128_f32[0];
                v99 = 0x1.921fb60000000p+0f;
                goto LABEL_88;
              }
              v131 = -LANES128(v25).n128_f32[0];
              v132 = *(float*)GameData_212c2f0;
              v133 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c2f0);
              v134 = *(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0);
              v135 = *(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 8);
              if (LANES128(v25).n128_f32[3] >=
                  (float)-LANES128(v25).n128_f32[0]) {
                v187 = v131 / LANES128(v25).n128_f32[3];
                v89 = -(float)(v187 * (float)((
                                                  float)((float)((float)((float)(v135 + (float)((float)((float)((float)(v134 + (float)((float)((float)((float)(v133 + (float)((float)((float)(v132 * (float)(v187 * v187)) - *((float*)GameData_212c2f0 + 1)) * (float)(v187 * v187))) * (float)(v187 * v187)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                       (float)(v187 *
                                                                                                                                               v187))) *
                                                                                                                (float)(v187 *
                                                                                                                        v187)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v187 *
                                                                                                        v187))) *
                                                                         (float)(v187 *
                                                                                 v187)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           12)) *
                                                         (float)(v187 * v187)) +
                                              0x1.0000000000000p+0f));
              LABEL_99:
                LODWORD(v87) = 0;
                v186 = -1077342245;
                v184 = v89 * -0x1.0000000000000p+1f;
                LODWORD(v185) = 0;
                goto LABEL_100;
              }
              v136 = LANES128(v25).n128_f32[3] / v131;
              v137 = -0x1.921fb60000000p+0f;
              v138 = (float)((float)((float)((float)(v135 +
                                                     (float)((float)((float)((
                                                                                 float)(v134 + (float)((float)((float)((float)(v133 + (float)((float)((float)(v132 * (float)(v136 * v136)) - *((float*)GameData_212c2f0 + 1)) * (float)(v136 *
                                                                                                                                                                                                                                        v136))) *
                                                                                                                       (float)(v136 *
                                                                                                                               v136)) -
                                                                                                               *(float*)((char*)((
                                                                                                                             _UNKNOWN**)0x8LL) +
                                                                                                                         (_QWORD)
                                                                                                                             GameData_212c2f0 +
                                                                                                                         4)) *
                                                                                                       (float)(v136 *
                                                                                                               v136))) *
                                                                             (float)(v136 *
                                                                                     v136)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v136 *
                                                                     v136))) *
                                             (float)(v136 * v136)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v136 * v136)) +
                     0x1.0000000000000p+0f;
            }
            else {
              if (LANES128(v25).n128_f32[0] >= 0x0.0p+0f) {
                v153 = -LANES128(v25).n128_f32[3];
                v154 = *(float*)GameData_212c2f0;
                v155 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c2f0);
                v156 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0);
                v157 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 8);
                if (LANES128(v25).n128_f32[0] <=
                    (float)-LANES128(v25).n128_f32[3]) {
                  v189 = LANES128(v25).n128_f32[0] / v153;
                  v99 = 0x1.921fb60000000p+1f;
                  v190 = v189 * (float)((
                                            float)((
                                                       float)((
                                                                  float)((float)(v157 + (float)((float)((float)((float)(v156 + (float)((float)((float)((float)(v155 + (float)((float)((float)(v154 * (float)(v189 * v189)) - *((float*)GameData_212c2f0 + 1)) * (float)(v189 * v189))) * (float)(v189 * v189)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                       (float)(v189 *
                                                                                                                                               v189))) *
                                                                                                                (float)(v189 *
                                                                                                                        v189)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v189 *
                                                                                                        v189))) *
                                                                         (float)(v189 *
                                                                                 v189)) -
                                                              *(float*)((char*)((
                                                                            __int128*)0x10LL) +
                                                                        (_QWORD)
                                                                            GameData_212c2f0 +
                                                                        12)) *
                                                   (float)(v189 * v189)) +
                                        0x1.0000000000000p+0f);
                LABEL_96:
                  v89 = v99 - v190;
                  goto LABEL_99;
                }
                v158 = v153 / LANES128(v25).n128_f32[0];
                v137 = 0x1.921fb60000000p+0f;
                v159 = v158 * (float)((
                                          float)((
                                                     float)((float)((float)(v157 + (float)((
                                                                                               float)((
                                                                                                          float)((float)(v156 + (float)((float)((float)((float)(v155 + (float)((float)((float)(v154 * (float)(v158 * v158)) - *((float*)GameData_212c2f0 + 1)) * (float)(v158 * v158))) * (float)(v158 * v158)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                            4)) *
                                                                                                                                        (float)(v158 *
                                                                                                                                                v158))) *
                                                                                                                 (float)(v158 *
                                                                                                                         v158)) -
                                                                                                      *(float*)((char*)((
                                                                                                                    __int128*)0x10LL) +
                                                                                                                (_QWORD)
                                                                                                                    GameData_212c2f0 +
                                                                                                                4)) *
                                                                                           (float)(v158 *
                                                                                                   v158))) *
                                                                    (float)(v158 *
                                                                            v158)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                 (float)(v158 * v158)) +
                                      0x1.0000000000000p+0f);
                goto LABEL_95;
              }
              v90 = *(float*)GameData_212c2f0;
              v91 = -*((float*)GameData_212c2f0 + 1);
              v92 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c2f0);
              v93 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v94 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0);
              v95 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v96 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0 + 8);
              v97 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 12);
              if (LANES128(v25).n128_f32[3] > LANES128(v25).n128_f32[0]) {
                v98 = LANES128(v25).n128_f32[3] / LANES128(v25).n128_f32[0];
                v99 = -0x1.921fb60000000p+0f;
              LABEL_88:
                v190 = v98 * (float)((
                                         float)((
                                                    float)(v97 + (float)((float)(v96 + (float)((float)(v95 + (float)((float)(v94 + (float)((float)(v93 + (float)((float)(v92 + (float)((float)(v91 + (float)(v90 * (float)(v98 * v98))) * (float)(v98 * v98))) * (float)(v98 * v98))) * (float)(v98 *
                                                                                                                                                                                                                                                                                                v98))) *
                                                                                                                     (float)(v98 *
                                                                                                                             v98))) *
                                                                                               (float)(v98 *
                                                                                                       v98))) *
                                                                         (float)(v98 *
                                                                                 v98))) *
                                                (float)(v98 * v98)) +
                                     0x1.0000000000000p+0f);
                goto LABEL_96;
              }
              v136 = LANES128(v25).n128_f32[0] / LANES128(v25).n128_f32[3];
              v137 = -0x1.921fb60000000p+1f;
              v138 =
                  (float)((float)((float)((float)(v96 +
                                                  (float)((float)((float)((float)(v94 +
                                                                                  (float)((float)((float)((float)(v92 + (float)((float)((float)(v90 * (float)(v136 * v136)) - *((float*)GameData_212c2f0 + 1)) * (float)(v136 * v136))) * (float)(v136 * v136)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                            4)) *
                                                                                          (float)(v136 *
                                                                                                  v136))) *
                                                                          (float)(v136 *
                                                                                  v136)) -
                                                                  *(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            4)) *
                                                          (float)(v136 *
                                                                  v136))) *
                                          (float)(v136 * v136)) -
                                  *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 12)) *
                          (float)(v136 * v136)) +
                  0x1.0000000000000p+0f;
            }
            v159 = v136 * v138;
          LABEL_95:
            v89 = v159 + v137;
            goto LABEL_99;
          }
          v32 = a1;
          if (LANES128(v25).n128_f32[3] != 0x0.0p+0f ||
              (v53 = 0x0.0p+0f, LANES128(v25).n128_f32[0] != 0x0.0p+0f)) {
            if (LANES128(v25).n128_f32[3] < 0x0.0p+0f) {
              if (LANES128(v25).n128_f32[0] >= 0x0.0p+0f) {
                v124 = -LANES128(v25).n128_f32[3];
                v125 = *(float*)GameData_212c2f0;
                v126 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c2f0);
                v127 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0);
                v128 = *(float*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2f0 + 8);
                if (LANES128(v25).n128_f32[0] <=
                    (float)-LANES128(v25).n128_f32[3]) {
                  v177 = LANES128(v25).n128_f32[0] / v124;
                  v63 = 0x1.921fb60000000p+1f;
                  v178 = v177 * (float)((
                                            float)((
                                                       float)((
                                                                  float)((float)(v128 + (float)((float)((float)((float)(v127 + (float)((float)((float)((float)(v126 + (float)((float)((float)(v125 * (float)(v177 * v177)) - *((float*)GameData_212c2f0 + 1)) * (float)(v177 * v177))) * (float)(v177 * v177)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                       (float)(v177 *
                                                                                                                                               v177))) *
                                                                                                                (float)(v177 *
                                                                                                                        v177)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v177 *
                                                                                                        v177))) *
                                                                         (float)(v177 *
                                                                                 v177)) -
                                                              *(float*)((char*)((
                                                                            __int128*)0x10LL) +
                                                                        (_QWORD)
                                                                            GameData_212c2f0 +
                                                                        12)) *
                                                   (float)(v177 * v177)) +
                                        0x1.0000000000000p+0f);
                LABEL_85:
                  v53 = v63 - v178;
                  goto LABEL_92;
                }
                v129 = v124 / LANES128(v25).n128_f32[0];
                v113 = 0x1.921fb60000000p+0f;
                v130 = v129 * (float)((
                                          float)((
                                                     float)((float)((float)(v128 + (float)((
                                                                                               float)((
                                                                                                          float)((float)(v127 + (float)((float)((float)((float)(v126 + (float)((float)((float)(v125 * (float)(v129 * v129)) - *((float*)GameData_212c2f0 + 1)) * (float)(v129 * v129))) * (float)(v129 * v129)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                            4)) *
                                                                                                                                        (float)(v129 *
                                                                                                                                                v129))) *
                                                                                                                 (float)(v129 *
                                                                                                                         v129)) -
                                                                                                      *(float*)((char*)((
                                                                                                                    __int128*)0x10LL) +
                                                                                                                (_QWORD)
                                                                                                                    GameData_212c2f0 +
                                                                                                                4)) *
                                                                                           (float)(v129 *
                                                                                                   v129))) *
                                                                    (float)(v129 *
                                                                            v129)) -
                                                            *(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                      (_QWORD)
                                                                          GameData_212c2f0 +
                                                                      12)) *
                                                 (float)(v129 * v129)) +
                                      0x1.0000000000000p+0f);
                goto LABEL_69;
              }
              v54 = *(float*)GameData_212c2f0;
              v55 = -*((float*)GameData_212c2f0 + 1);
              v56 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c2f0);
              v57 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v58 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0);
              v59 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v60 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0 + 8);
              v61 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 12);
              if (LANES128(v25).n128_f32[3] > LANES128(v25).n128_f32[0]) {
                v62 = LANES128(v25).n128_f32[3] / LANES128(v25).n128_f32[0];
                v63 = -0x1.921fb60000000p+0f;
              LABEL_62:
                v178 = v62 * (float)((
                                         float)((
                                                    float)(v61 + (float)((float)(v60 + (float)((float)(v59 + (float)((float)(v58 + (float)((float)(v57 + (float)((float)(v56 + (float)((float)(v55 + (float)(v54 * (float)(v62 * v62))) * (float)(v62 * v62))) * (float)(v62 * v62))) * (float)(v62 *
                                                                                                                                                                                                                                                                                                v62))) *
                                                                                                                     (float)(v62 *
                                                                                                                             v62))) *
                                                                                               (float)(v62 *
                                                                                                       v62))) *
                                                                         (float)(v62 *
                                                                                 v62))) *
                                                (float)(v62 * v62)) +
                                     0x1.0000000000000p+0f);
                goto LABEL_85;
              }
              v112 = LANES128(v25).n128_f32[0] / LANES128(v25).n128_f32[3];
              v113 = -0x1.921fb60000000p+1f;
              v114 =
                  (float)((float)((float)((float)(v60 +
                                                  (float)((float)((float)((float)(v58 +
                                                                                  (float)((float)((float)((float)(v56 + (float)((float)((float)(v54 * (float)(v112 * v112)) - *((float*)GameData_212c2f0 + 1)) * (float)(v112 * v112))) * (float)(v112 * v112)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                            (_QWORD)
                                                                                                                                                                                                                                                                                GameData_212c2f0 +
                                                                                                                                                                                                                                                                            4)) *
                                                                                          (float)(v112 *
                                                                                                  v112))) *
                                                                          (float)(v112 *
                                                                                  v112)) -
                                                                  *(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            4)) *
                                                          (float)(v112 *
                                                                  v112))) *
                                          (float)(v112 * v112)) -
                                  *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 12)) *
                          (float)(v112 * v112)) +
                  0x1.0000000000000p+0f;
            LABEL_68:
              v130 = v112 * v114;
            LABEL_69:
              v53 = v130 + v113;
              goto LABEL_92;
            }
            if (LANES128(v25).n128_f32[0] >= 0x0.0p+0f) {
              v54 = *(float*)GameData_212c2f0;
              v55 = -*((float*)GameData_212c2f0 + 1);
              v56 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c2f0);
              v57 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v58 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0);
              v59 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v60 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0 + 8);
              v61 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 12);
              if (LANES128(v25).n128_f32[3] >= LANES128(v25).n128_f32[0]) {
                v183 = LANES128(v25).n128_f32[0] / LANES128(v25).n128_f32[3];
                v53 =
                    v183 * (float)((
                                       float)((
                                                  float)((
                                                             float)((float)(v60 + (float)((
                                                                                              float)((
                                                                                                         float)((float)(v58 + (float)((float)((float)((float)(v56 + (float)((float)((float)(v54 * (float)(v183 * v183)) - *((float*)GameData_212c2f0 + 1)) * (float)(v183 * v183))) * (float)(v183 * v183)) - *(
                                                                                                                                                                                                                                                                                                                  float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                      (float)(v183 *
                                                                                                                                              v183))) *
                                                                                                                (float)(v183 *
                                                                                                                        v183)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   __int128*)0x10LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               4)) *
                                                                                          (float)(v183 *
                                                                                                  v183))) *
                                                                    (float)(v183 *
                                                                            v183)) -
                                                         *(float*)((char*)((
                                                                       __int128*)0x10LL) +
                                                                   (_QWORD)
                                                                       GameData_212c2f0 +
                                                                   12)) *
                                              (float)(v183 * v183)) +
                                   0x1.0000000000000p+0f);
                goto LABEL_92;
              }
              v62 = LANES128(v25).n128_f32[3] / LANES128(v25).n128_f32[0];
              v63 = 0x1.921fb60000000p+0f;
              goto LABEL_62;
            }
            v107 = -LANES128(v25).n128_f32[0];
            v108 = *(float*)GameData_212c2f0;
            v109 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                             (_QWORD)GameData_212c2f0);
            v110 = *(float*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2f0);
            v111 = *(float*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2f0 + 8);
            if (LANES128(v25).n128_f32[3] < (float)-LANES128(v25).n128_f32[0]) {
              v112 = LANES128(v25).n128_f32[3] / v107;
              v113 = -0x1.921fb60000000p+0f;
              v114 = (float)((float)((float)((float)(v111 +
                                                     (float)((float)((float)((
                                                                                 float)(v110 + (float)((float)((float)((float)(v109 + (float)((float)((float)(v108 * (float)(v112 * v112)) - *((float*)GameData_212c2f0 + 1)) * (float)(v112 *
                                                                                                                                                                                                                                        v112))) *
                                                                                                                       (float)(v112 *
                                                                                                                               v112)) -
                                                                                                               *(float*)((char*)((
                                                                                                                             _UNKNOWN**)0x8LL) +
                                                                                                                         (_QWORD)
                                                                                                                             GameData_212c2f0 +
                                                                                                                         4)) *
                                                                                                       (float)(v112 *
                                                                                                               v112))) *
                                                                             (float)(v112 *
                                                                                     v112)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v112 *
                                                                     v112))) *
                                             (float)(v112 * v112)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v112 * v112)) +
                     0x1.0000000000000p+0f;
              goto LABEL_68;
            }
            v166 = v107 / LANES128(v25).n128_f32[3];
            v53 =
                -(float)(v166 * (float)((
                                            float)((
                                                       float)((
                                                                  float)((float)(v111 + (float)((float)((float)((float)(v110 + (float)((float)((float)((float)(v109 + (float)((float)((float)(v108 * (float)(v166 * v166)) - *((float*)GameData_212c2f0 + 1)) * (float)(v166 * v166))) * (float)(v166 * v166)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                       (float)(v166 *
                                                                                                                                               v166))) *
                                                                                                                (float)(v166 *
                                                                                                                        v166)) -
                                                                                                        *(float*)((char*)((
                                                                                                                      __int128*)0x10LL) +
                                                                                                                  (_QWORD)
                                                                                                                      GameData_212c2f0 +
                                                                                                                  4)) *
                                                                                                (float)(v166 *
                                                                                                        v166))) *
                                                                         (float)(v166 *
                                                                                 v166)) -
                                                              *(float*)((char*)((
                                                                            __int128*)0x10LL) +
                                                                        (_QWORD)
                                                                            GameData_212c2f0 +
                                                                        12)) *
                                                   (float)(v166 * v166)) +
                                        0x1.0000000000000p+0f));
          }
        LABEL_92:
          v184 = v53 + v53;
          LODWORD(v185) = 0;
          v186 = 1070141403;
          LODWORD(v87) = 0;
        LABEL_100:
          *((float*)&v87 + 1) = v184;
          *((float*)&v185 + 1) = v184;
          v88 = *(float*)&v186;
        LABEL_106:
          v203 = *(_QWORD*)(*(_QWORD*)(v32 + 16) + 504LL) +
                 16LL * *(int*)(v32 + 32);
          *(_QWORD*)v203 = v185;
          *(float*)(v203 + 8) = v88;
        LABEL_107:
          v204 = *(_QWORD*)(*(_QWORD*)(v32 + 16) + 504LL) +
                 16LL * *(int*)(v32 + 32);
          *(_QWORD*)v204 = v87;
          *(float*)(v204 + 8) = v88;
        LABEL_108:
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            std___1___shared_weak_count___release_weak(v9),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
