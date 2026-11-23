#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* RouteNavMesh_fe6920(_QWORD* result);
__attribute__((swiftcall)) void AreaEvent_d59720(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void Character_cb1a30(PSEUDO_X8, __int64,
                                                 unsigned int);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_fb1fe0(PSEUDO_X8, __int64, float32x4_t*,
                                            float32x4_t*, char);
__attribute__((swiftcall)) void game_fb22c0(PSEUDO_X8, __int64, float32x4_t*,
                                            float32x4_t*, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64);
__int64 EventManager_cbdf40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(__int64, unsigned __int64, unsigned __int64,
                            const char*, unsigned __int64);
__int64 GameRoutine_cbbdd0(_QWORD, _QWORD);
__int64 GameRoutine_ceeec0(__int64 result, _DWORD*, __int64, char, float);
__int64 GameRoutine_d242c0(__int64*, __int64, float32x4_t*, float32x4_t*,
                           _DWORD*);
__int64 GameRoutine_d59dc0(_QWORD);
__int64 RouteNavMesh_fe6b60(_QWORD*, __int64);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_zview_d0e440(__int64 result, char);
__int64 game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, void*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strtol(const char*, __int64, int);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22110b8;
extern __int128 GameData_21a6120;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_220f8b0;
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void game_hub_cbbcc0(PSEUDO_X8 x8_, __int64 a1,
                                                int a2, _QWORD* a3);
void game_hub_d6f2a0(__int64 a1);
__attribute__((swiftcall)) void game_hub_da1b80(PSEUDO_X8 x8_, const char* a1);
void game_hub_e16dc0(float32x4_t* a1);
__int64* DungeonRouteReport_f604e0(__int64* result);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_f5ffc0(__int64);
extern __int64 (*GameData_1ff64e8[])();
void GameRoutine_f60d00(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_f618e0();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
void game_hub_f60b80(__int64 a1);

__attribute__((swiftcall)) void game_hub_cbbcc0(PSEUDO_X8 x8_, __int64 a1,
                                                int a2, _QWORD* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];
  char v19;

  v18[0] = *a3 + 1216LL;
  v7 = EventManager_cbdf40(a1 + 152, v18[0], std___1_piecewise_construct_ptr,
                           v18, &v19) +
       24LL * a2;
  result = GameRoutine_cbbdd0(v7 + 56, a3);
  v9 = *(_QWORD*)(v7 + 56);
  v10 = ((*(_QWORD*)(v7 + 64) - v9) >> 4) - 1;
  v11 = *(_QWORD*)(v9 + 16 * v10);
  v12 = *(_BYTE*)(v11 + 1272);
  *(_DWORD*)(v11 + 1240) = a2;
  if ((v12 & 1) == 0) {
    AreaEvent_d59720((void*)(v18), v11, 0);
    if (v18[0] != 0) {
      v18[1] = v18[0];
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v18[0]);
    }
    result = GameRoutine_d59dc0(v11);
    *(_BYTE*)(v11 + 1272) = 1;
  }
  v15 = (__int64*)(*(_QWORD*)(v7 + 56) + 16 * v10);
  v17 = *v15;
  v16 = v15[1];
  *a4 = v17;
  a4[1] = v16;
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

void game_hub_d6f2a0(__int64 a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  const char* v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned __int64 v18;
  const char* v19;
  const char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    const char* v26;
  } v24_;

  if (GameData_220f8b0 == 0) {
    return;
  }
  v1 = *(_QWORD**)(GameData_220f8b0 + 8);
  if (v1 == nullptr) {
    return;
  }
  v2 = *(unsigned __int8*)(a1 + 16);
  v4 = (v2 & 1) == 0;
  v5 = v2 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *(_QWORD*)(a1 + 24);
  }
  if (v4) {
    v7 = a1 + 17;
  }
  else {
    v7 = *(_QWORD*)(a1 + 32);
  }
  v8 = v6 + 4;
  if (v6 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v8 | 7) + 1;
    }
    v9 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     v10, 16, 0);
    v24_.v25 = v6 + 4;
    v24_.v26 = v9;
    v24_.v24 = v10 | 1;
  }
  else {
    v24_.v25 = 0;
    v24_.v26 = nullptr;
    v24_.v24 = (unsigned __int8)(2 * v8);
    v9 = (char*)&v24_.v24 + 1;
    if (v6 == 0) {
      goto LABEL_18;
    }
  }
  memmove((__int64)v9, v7, v6);
LABEL_18:
  strcpy((char*)&v9[v6], ".nvm");
  v11 = (__int64*)(a1 + 64);
  v12 = *(unsigned __int8*)(a1 + 64);
  v13 = v24_.v25;
  if ((v12 & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 72);
  }
  else {
    v14 = v12 >> 1;
  }
  if ((v24_.v24 & 1) != 0) {
    v15 = v24_.v25;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v24_.v24 >> 1;
  }
  if (v14 != v15 ||
      ((v12 & 1) != 0 ? (v16 = *(_QWORD*)(a1 + 80)) : (v16 = a1 + 65),
       (v24_.v24 & 1) == 0 ? (v17 = (char*)&v24_.v24 + 1) : (v17 = v24_.v26),
       memcmp(v16, (__int64)v17, v14) != 0)) {
    if (v11 != &v24_.v24) {
      if ((v12 & 1) != 0) {
        if ((v24_.v24 & 1) != 0) {
          v19 = v24_.v26;
        }
        else {
          v19 = (char*)&v24_.v24 + 1;
        }
        SpineModel_64dde0(v11, (__int64)v19, v15);
      }
      else if ((v24_.v24 & 1) != 0) {
        GameRoutine_64df20(v11, (__int64)v24_.v26, v13);
      }
      else {
        v18 = v24_.v25;
        *v11 = v24_.v24;
        *(_QWORD*)(a1 + 72) = v18;
        *(_QWORD*)(a1 + 80) = v24_.v26;
      }
    }
    RouteNavMesh_fe6920(v1);
    if ((v24_.v24 & 1) != 0) {
      v20 = v24_.v26;
    }
    else {
      v20 = (char*)&v24_.v24 + 1;
    }
    if (v20 != nullptr) {
      v21 = *snd_g_fileIndex_ptr[0];
      v22 = strlen(v20);
      if ((fs_6360e0(v21, (__int64)v20, v22, 1, 0) & 1) != 0) {
        RouteNavMesh_fe6b60(v1, (__int64)&v24_.v24);
      }
    }
  }
  if ((v24_.v24 & 1) != 0 && v24_.v26 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v24_.v26);
  }
}

__attribute__((swiftcall)) void game_hub_da1b80(PSEUDO_X8 x8_, const char* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  unsigned __int64 v11;
  signed __int64 v12;
  signed __int64 v13;
  __int64* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  char* v18;
  unsigned __int16* v19;
  __int64 v20;
  char* v21;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned int v28;
  unsigned __int64 v29;
  const char* v30;
  unsigned int v31;
  unsigned __int64 v32;
  const char* v33;
  unsigned int v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  const char* v40;
  unsigned __int64 v43;
  __int64 v44;
  const char* v45;
  unsigned int v46;
  unsigned __int64 v47;
  const char* v48;
  unsigned int v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int16 v61;
  __int64 v62;
  __int64 v63;
  struct {
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    unsigned __int64 v68;
    __int64* v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
  } f_;
  _BYTE* v73;

  v4 = strlen(a1);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    f_.v68 = v5;
    f_.v69 = (__int64*)v7;
    f_.v67 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(f_.v67) = 2 * v4;
  v7 = (char*)&f_.v67 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove((__int64)v7, (__int64)a1, v5);
  }
  v7[v5] = 0;
  v9 = (unsigned __int8)f_.v67;
  v11 = f_.v68;
  v10 = f_.v69;
  v12 = (unsigned __int64)(unsigned __int8)f_.v67 >> 1;
  if ((f_.v67 & 1) != 0) {
    v12 = f_.v68;
  }
  if (v12 >= 3) {
    if ((f_.v67 & 1) != 0) {
      v18 = (char*)f_.v69;
    }
    else {
      v18 = (char*)&f_.v67 + 1;
    }
    v19 = (unsigned __int16*)&v18[v12];
  LABEL_40:
    v20 = (__int64)v18;
    do {
      v21 = (char*)memchr(v20, 227, v12 - 2);
      if (v21 == nullptr) {
        break;
      }
      if (*(unsigned __int16*)v21 == 32995 && (unsigned __int8)v21[2] == 128) {
        if (v21 != (char*)v19 && v21 - v18 != -1) {
          GameRoutine_1a0a8e0((__int64)&f_.v67, v21 - v18, 3u, " ", 1u);
          v9 = (unsigned __int8)f_.v67;
          v11 = f_.v68;
          v10 = f_.v69;
          v12 = (unsigned __int64)(unsigned __int8)f_.v67 >> 1;
          if ((f_.v67 & 1) != 0) {
            v18 = (char*)f_.v69;
          }
          else {
            v18 = (char*)&f_.v67 + 1;
          }
          if ((f_.v67 & 1) != 0) {
            v12 = f_.v68;
          }
          v19 = (unsigned __int16*)&v18[v12];
          if (v12 > 2) {
            goto LABEL_40;
          }
        }
        break;
      }
      v20 = (__int64)(v21 + 1);
      v12 = (signed __int64)v19 - v20;
    } while ((__int64)v19 - v20 >= 3);
  }
  if ((v9 & 1) != 0) {
    v13 = v11;
  }
  else {
    v13 = v9 >> 1;
  }
  if (v13 >= 1) {
    if ((v9 & 1) != 0) {
      v14 = v10;
    }
    else {
      v14 = (__int64*)((char*)&f_.v67 + 1);
    }
    v15 = (char*)v14 + v13;
  LABEL_21:
    v16 = (__int64)v14;
    do {
      v17 = (_BYTE*)memchr(v16, 32, v13);
      if (v17 == nullptr) {
        break;
      }
      if (*v17 == 32) {
        if (v17 != v15 && v17 - (_BYTE*)v14 != -1) {
          GameRoutine_1a0a8e0((__int64)&f_.v67, v17 - (_BYTE*)v14, 1u, "/",
                              1u);
          v9 = (unsigned __int8)f_.v67;
          v11 = f_.v68;
          v10 = f_.v69;
          v14 =
              (f_.v67 & 1) != 0 ? f_.v69 : (__int64*)((char*)&f_.v67 + 1);
          v13 = (f_.v67 & 1) != 0
                    ? f_.v68
                    : (unsigned __int64)(unsigned __int8)f_.v67 >> 1;
          v15 = (char*)v14 + v13;
          if (v13 > 0) {
            goto LABEL_21;
          }
        }
        break;
      }
      v16 = (__int64)(v17 + 1);
      v13 = (signed __int64)&v15[-v16];
    } while ((__int64)&v15[-v16] >= 1);
  }
  f_.v65 = 0;
  f_.v66 = 0;
  f_.v64 = 0;
  if ((v9 & 1) != 0) {
    v23 = (char*)v10;
  }
  else {
    v23 = (char*)&f_.v67 + 1;
  }
  if ((v9 & 1) != 0) {
    v24 = v11;
  }
  else {
    v24 = v9 >> 1;
  }
  RuntimeBuffer_8924a0((__int64)&f_.v64, (__int64)v23, v24, 0x2Fu);
  v26 = f_.v64;
  v25 = f_.v65;
  *(_DWORD*)(a2 + 8) = 0;
  *(_QWORD*)a2 = 0;
  if ((unsigned __int64)(-3 - 0x5555555555555555LL * ((v25 - v26) >> 3)) <= 1) {
    if ((*(_BYTE*)v26 & 1) != 0) {
      v27 = *(const char**)(v26 + 16);
    }
    else {
      v27 = (const char*)(v26 + 1);
    }
    v28 = strtol(v27, (__int64)&f_.v70, 10);
    if (*(_BYTE*)f_.v70 != 0) {
      v29 = 0;
    }
    else {
      v29 = v28 | 0x100000000LL;
    }
    if ((*((_BYTE*)((__int128*)0x10LL) + f_.v64 + 8) & 1) != 0) {
      v30 = *(const char**)((char*)(*(__int64 (*)[2])0x28LL) + f_.v64);
    }
    else {
      v30 = (const char*)(f_.v64 + 25);
    }
    v31 = strtol(v30, (__int64)&f_.v70, 10);
    if (*(_BYTE*)f_.v70 != 0) {
      v32 = 0;
    }
    else {
      v32 = v31 | 0x100000000LL;
    }
    if ((*((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + f_.v64) & 1) != 0) {
      v33 = *(const char**)((char*)((char*)0x40LL) + f_.v64);
    }
    else {
      v33 = (const char*)(f_.v64 + 49);
    }
    v34 = strtol(v33, (__int64)&f_.v70, 10);
    if (*(_BYTE*)f_.v70 != 0) {
      v35 = 0;
    }
    else {
      v35 = v34 | 0x100000000LL;
    }
    if (HIDWORD(v29) != 0) {
      *(_WORD*)a2 = v29;
      if (HIDWORD(v32) == 0) {
      LABEL_84:
        if (HIDWORD(v35) == 0) {
          goto LABEL_86;
        }
        goto LABEL_85;
      }
    }
    else if (HIDWORD(v32) == 0) {
      goto LABEL_84;
    }
    *(_WORD*)(a2 + 2) = v32;
    if (HIDWORD(v35) == 0) {
    LABEL_86:
      v26 = f_.v64;
      v36 = f_.v65;
      if (f_.v65 - f_.v64 != 96) {
        goto LABEL_137;
      }
      v37 = *(unsigned __int8*)(f_.v64 + 72);
      v38 = (v37 & 1) == 0;
      v39 = v37 >> 1;
      if (v38) {
        v40 = (const char*)(f_.v64 + 73);
      }
      else {
        v40 = *(const char**)(f_.v64 + 88);
      }
      if (!v38) {
        v39 = *(_QWORD*)(f_.v64 + 80);
      }
      if (v39 != 3) {
        goto LABEL_101;
      }
      if (*(unsigned __int16*)v40 == 39142 &&
          *((unsigned __int8*)v40 + 2) == 188) {
        v61 = 6;
      }
      else {
        if (*(unsigned __int16*)v40 != 42213 ||
            *((unsigned __int8*)v40 + 2) != 156) {
        LABEL_101:
          f_.v71 = 0;
          f_.v72 = 0;
          f_.v70 = 0;
          v43 = strlen(v40);
          RuntimeBuffer_8924a0((__int64)&f_.v70, (__int64)v40, v43, 0x3Au);
          v44 = f_.v70;
          if (f_.v71 - f_.v70 == 48) {
            if ((*(_BYTE*)f_.v70 & 1) != 0) {
              v45 = *(const char**)(f_.v70 + 16);
            }
            else {
              v45 = (const char*)(f_.v70 + 1);
            }
            v46 = strtol(v45, (__int64)&v73, 10);
            if (*v73 != 0) {
              v47 = 0;
            }
            else {
              v47 = v46 | 0x100000000LL;
            }
            if ((*(_BYTE*)(f_.v70 + 24) & 1) != 0) {
              v48 = *(const char**)(f_.v70 + 40);
            }
            else {
              v48 = (const char*)(f_.v70 + 25);
            }
            v49 = strtol(v48, (__int64)&v73, 10);
            if (*v73 != 0) {
              v50 = 0;
            }
            else {
              v50 = v49 | 0x100000000LL;
            }
            if (HIDWORD(v47) != 0) {
              *(_WORD*)(a2 + 6) = v47;
            }
            if (HIDWORD(v50) != 0) {
              *(_WORD*)(a2 + 8) = v50;
            }
            v44 = f_.v70;
          }
          if (v44 != 0) {
            v51 = f_.v71;
            if (v44 == f_.v71) {
              goto LABEL_133;
            }
            v52 = f_.v71;
            do {
              v53 = *(_BYTE*)(v52 - 24);
              v52 -= 24;
              if ((v53 & 1) != 0) {
                v54 = *(_QWORD*)(v51 - 8);
                if (v54 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
                    v55 = 128;
                  }
                  else {
                    v55 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v55, v54);
                }
              }
              v51 = v52;
            } while (v52 != v44);
            f_.v71 = v44;
            v44 = f_.v70;
            if (f_.v70 != 0) {
            LABEL_133:
              v56 = 128;
              if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
                v56 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v56, v44);
            }
          }
          v26 = f_.v64;
          goto LABEL_137;
        }
        v61 = 18;
      }
      *(_WORD*)(a2 + 6) = v61;
      *(_WORD*)(a2 + 8) = 0;
      if (v26 != v36) {
        goto LABEL_139;
      }
    LABEL_152:
      f_.v65 = v26;
    LABEL_153:
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v62, v26);
      goto LABEL_156;
    }
  LABEL_85:
    *(_WORD*)(a2 + 4) = v35;
    goto LABEL_86;
  }
LABEL_137:
  if (v26 == 0) {
    goto LABEL_156;
  }
  v36 = f_.v65;
  if (v26 == f_.v65) {
    goto LABEL_152;
  }
LABEL_139:
  v57 = v36;
  do {
    v58 = *(_BYTE*)(v57 - 24);
    v57 -= 24;
    if ((v58 & 1) != 0) {
      v59 = *(_QWORD*)(v36 - 8);
      if (v59 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v60 = 128;
        }
        else {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v60, v59);
      }
    }
    v36 = v57;
  } while (v57 != v26);
  f_.v65 = v26;
  v26 = f_.v64;
  if (f_.v64 != 0) {
    goto LABEL_153;
  }
LABEL_156:
  if ((f_.v67 & 1) != 0 && f_.v69 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v63, (__int64)f_.v69);
  }
}

void game_hub_e16dc0(float32x4_t* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int32 v19;
  float32x4_t v20;
  _QWORD* v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x2_t v40;
  int8x16_t v41;
  float32x2_t v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  bool v56;
  float v57;
  float v58;
  __int64 v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float v89;
  float32x4_t v90;
  int8x16_t v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  float32x4_t v104;
  __int64 v105;
  float32x4_t v106;
  __int64 v107;
  float32x4_t v108;
  __int128 v109;
  __int64 v110;
  __int64 v112;
  float32x2_t v113;
  __int64 v114;
  __int64 v115;
  float v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  bool v119;
  __int64 v120;
  float32x4_t* v121;
  float32x4_t v122;
  int8x16_t v123;
  float v124;
  float v125;
  bool v126;
  unsigned __int64 v127;
  float32x4_t v128;
  __int64 v129;
  __int64* v130;
  float v131;
  float v132;
  float32x4_t v133;
  __int64 v134;
  float32x4_t v135;
  __int64 v136;
  int v137;
  float32x4_t v138;
  __int64 v139;
  struct {
    float32x4_t v140;
    float32x4_t v141;
    float32x4_t v142;
  } v140_;
  float32x4_t v143;
  struct {
    float32x4_t v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    char gap120_[8];
    __int64 v148;
    __int64 v149;
    char v150;
    char gap145_[15];
    char v151;
    char gap161_[15];
    __int64 v152;
    __int64 v153;
    __int64 v154;
  } v144_;
  float32x4_t v155;

  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = (_QWORD*)LANES128(*(a1)).n128_u64[1];
  v3 = v1[1];
  v4 = *(_QWORD*)(v3 + 24);
  if (*(_BYTE*)(v4 + 272) == 1 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 344LL) + 352LL) ==
              *(_QWORD*)(v4 + 264) ||
      (*(_BYTE*)(v3 + 185) & 4) != 0) {
    LANES128(a1[1]).n128_u32[0] = 1036831949;
  }
  v5 = v1[3];
  if (v5 != 0) {
    v6 = v1[2];
    v7 = v1[3];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v5),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v8 == 0 || v6 == 0) {
      if (v8 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v10 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 8);
      if (v10 == 0 ||
          (v11 = *(_QWORD*)(v6 + 1136), *(_QWORD*)(v6 + 1144) == v11)) {
      LABEL_22:
        LODWORD(v13) = 0;
      }
      else {
        v12 = 0;
        v13 = 0;
        while (1) {
          v14 = (__int64*)(v11 + v12);
          v15 = *(_QWORD*)(v11 + v12 + 8);
          if (v15 != 0) {
            v16 = std___1___shared_weak_count_lock(v15),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v16 != 0) {
              v17 = *v14;
              if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v18 = v16;
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v18),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v17 == v10) {
                break;
              }
            }
          }
          v11 = *(_QWORD*)(v6 + 1136);
          ++v13;
          v12 += 16;
          if (v13 >= (*(_QWORD*)(v6 + 1144) - v11) >> 4) {
            goto LABEL_22;
          }
        }
      }
      Character_cb1a30((void*)(&v144_.v144), v6, v13),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if ((unsigned __int8)v144_.v145 == 1) {
        v19 = LANES128(v144_.v144).n128_u32[2];
        LANES128(a1[3]).n128_u64[0] = LANES128(v144_.v144).n128_u64[0];
        v20 = a1[3];
        LANES128(v20).n128_u64[1] = v19;
        a1[3] = v20;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
      std___1___shared_weak_count___release_weak(v8),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
LABEL_27:
  v21 = (_QWORD*)LANES128(*(a1)).n128_u64[1];
  v22 = LANES128(a1[1]).n128_f32[0];
  v23 = *(float*)(*(_QWORD*)(*(_QWORD*)(v21[1] + 24LL) + 8LL) + 228LL);
  v24 = fabsf(v23);
  if (v22 > 0x0.0p+0f) {
    v22 = v22 - v24;
    if (v22 >= 0x0.0p+0f) {
      goto LABEL_33;
    }
  LABEL_32:
    v22 = 0x0.0p+0f;
    goto LABEL_33;
  }
  if (v22 < 0x0.0p+0f) {
    v22 = v22 + v24;
    if (v22 > 0x0.0p+0f) {
      goto LABEL_32;
    }
  }
LABEL_33:
  LANES128(a1[1]).n128_f32[0] = v22;
  v25 = v21[3];
  if (v25 == 0) {
    goto LABEL_113;
  }
  v26 = v21[2];
  v27 = v21[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                            memory_order_relaxed);
  v28 = std___1___shared_weak_count_lock(v27),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  std___1___shared_weak_count___release_weak(v25),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v28 == 0 || v26 == 0) {
    if (v28 == 0) {
      goto LABEL_113;
    }
    goto LABEL_111;
  }
  v30 = (_QWORD*)LANES128(*(a1)).n128_u64[1];
  v31 = v30[3];
  if (v31 == 0) {
    goto LABEL_146;
  }
  v32 = v30[2];
  v33 = v30[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                            memory_order_relaxed);
  v34 = std___1___shared_weak_count_lock(v33),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  std___1___shared_weak_count___release_weak(v31),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v34 == 0) {
    goto LABEL_146;
  }
  if (v32 != 0) {
    v35 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v32 + 24) + 16LL) + 560LL);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v138 = v35;
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v34),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v35 = v138;
  }
  if (v32 == 0) {
  LABEL_146:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v136 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v136;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v35 = COERCE_AS(float32x4_t, GameData_21a6120);
  }
  v36 = LANES128(*(a1)).n128_u64[1];
  v37 = vsubq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v30[1] + 24LL) + 16LL) + 560LL),
      v35);
  LANES128(v37).n128_u32[1] = 0;
  v38 = vmulq_f32(v37, v37);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  v39 = vsubq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 8) + 24LL) +
                                 16LL) +
                      560LL),
      a1[3]);
  LANES64(v40).n64_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v39).n128_u32[1] = 0;
  v41 = vmulq_f32(v39, v39);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  LANES64(v42).n64_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]))))
          .n64_u64[0];
  if ((LANES64_OF(vcgt_f32(v40, v42)).n64_u8[0] & 1) != 0) {
    v43 = LANES64(v42).n64_f32[0];
  }
  else {
    v43 = LANES64(v40).n64_f32[0];
  }
  v44 = *(float**)(*(_QWORD*)(v26 + 24) + 16LL);
  if ((float)((float)(PSEUDO_UNFUSED(v44[168] * v44[168])) +
              (float)(v44[167] * v44[167])) > 0x0.0p+0f) {
    LANES128(a1[2]).n128_u8[0] = 1;
    goto LABEL_56;
  }
  if (LANES128(a1[2]).n128_u8[0] == 1) {
  LABEL_56:
    v45 = LANES128(a1[1]).n128_f32[1];
    v46 = fabsf(v23 / 0x1.8000000000000p+0f);
    if (v45 <= 0x1.0000000000000p+0f) {
      if (v45 >= 0x1.0000000000000p+0f) {
        goto LABEL_62;
      }
      v45 = v46 + v45;
      if (v45 <= 0x1.0000000000000p+0f) {
        goto LABEL_62;
      }
    }
    else {
      v45 = v45 - v46;
      if (v45 >= 0x1.0000000000000p+0f) {
        goto LABEL_62;
      }
    }
    v45 = 0x1.0000000000000p+0f;
  LABEL_62:
    LANES128(a1[1]).n128_f32[1] = v45;
    v44 = *(float**)(*(_QWORD*)(v26 + 24) + 16LL);
  }
  v47 = v44[91];
  v48 = 0x0.0p+0f;
  v49 = 0x0.0p+0f;
  if (v47 != 0x0.0p+0f) {
    v50 = sqrtf((float)(PSEUDO_UNFUSED(v44[168] * v44[168])) +
                (float)(v44[167] * v44[167])) /
          v47;
    v51 = 0x1.0000000000000p+0f;
    if (v50 <= 0x1.0000000000000p+0f) {
      v51 = v50;
    }
    if (v50 >= 0x0.0p+0f) {
      v49 = v51;
    }
    else {
      v49 = 0x0.0p+0f;
    }
  }
  v52 = LANES128(a1[1]).n128_f32[3];
  v53 = (float)(v52 + 0x1.0000000000000p+3f) -
        (float)(v52 + 0x1.8000000000000p+1f);
  if (v53 != 0x0.0p+0f) {
    v54 = 0x1.0000000000000p+0f;
    v55 = (float)(v43 - (float)(v52 + 0x1.8000000000000p+1f)) / v53;
    if (v55 <= 0x1.0000000000000p+0f) {
      v54 = (float)(v43 - (float)(v52 + 0x1.8000000000000p+1f)) / v53;
    }
    v56 = v55 < 0x0.0p+0f;
    v48 = 0x0.0p+0f;
    if (!v56) {
      v48 = v54;
    }
  }
  v57 = 0x0.0p+0f;
  v58 = (float)(fminf(fmaxf(v48, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.0000000000000p-2f) +
        0x1.4000000000000p+0f;
  v59 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 8) + 24LL) + 16LL);
  if (*(float*)(v59 + 544) != v58) {
    *(float*)(v59 + 544) = v58;
    game_zview_d0e440(v59, 1),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v52 = LANES128(a1[1]).n128_f32[3];
  }
  v60 = (float)(v52 + 0x1.0000000000000p+1f) - (float)(v52 + 0x0.0p+0f);
  if (v60 != 0x0.0p+0f) {
    v61 = (float)(v43 - (float)(v52 + 0x0.0p+0f)) / v60;
    v62 = 0x1.0000000000000p+0f;
    if (v61 <= 0x1.0000000000000p+0f) {
      v62 = v61;
    }
    if (v61 >= 0x0.0p+0f) {
      v57 = v62;
    }
    else {
      v57 = 0x0.0p+0f;
    }
  }
  v63 = 0x1.0000000000000p+0f;
  v64 = v52 + 0x1.3333340000000p-2f;
  v65 = (float)(v52 + 0x1.99999a0000000p-1f) -
        (float)(v52 + 0x1.3333340000000p-2f);
  v66 = 0x0.0p+0f;
  if (v65 != 0x0.0p+0f) {
    v67 = (float)(v43 - v64) / v65;
    v68 = v67 <= 0x1.0000000000000p+0f ? (float)(v43 - v64) / v65
                                       : 0x1.0000000000000p+0f;
    v56 = v67 < 0x0.0p+0f;
    v66 = 0x0.0p+0f;
    if (!v56) {
      v66 = v68;
    }
  }
  v69 = v66 * LANES128(a1[1]).n128_f32[1];
  if (v69 <= 0x0.0p+0f) {
    LANES128(a1[2]).n128_u8[0] = 0;
    LANES128(a1[1]).n128_u64[0] = 1045220557;
  }
  else if (LANES128(a1[1]).n128_f32[0] == 0x0.0p+0f) {
    v70 = LANES128(*(a1)).n128_u64[1];
    v71 = *(_QWORD*)(v70 + 8);
    LOBYTE(v144_.v145) = 0;
    v72 = *(_QWORD*)(*(_QWORD*)(v71 + 24) + 32LL);
    v73 = *(_QWORD*)(v72 + 32);
    v74 = *(_QWORD*)(v72 + 40);
    v144_.v151 = 0;
    LANES128(v144_.v144).n128_u64[0] = v73;
    LANES128(v144_.v144).n128_u64[1] = v74;
    if (*(_BYTE*)(v72 + 112) == 1) {
      v75 = *(_QWORD*)(v72 + 56);
      v144_.v145 = *(_QWORD*)(v72 + 48);
      v144_.v146 = v75;
      v76 = *(_QWORD*)(v72 + 64);
      LOBYTE(v144_.v148) = 0;
      v144_.v150 = 0;
      v144_.v147 = v76;
      if (*(_BYTE*)(v72 + 96) == 1) {
        v77 = *(_QWORD*)(v72 + 88);
        v144_.v148 = *(_QWORD*)(v72 + 80);
        v144_.v149 = v77;
        v144_.v150 = 1;
      }
      v144_.v151 = 1;
    }
    v78 = *(_QWORD*)(v72 + 128);
    v79 = *(_QWORD*)(v72 + 136);
    v80 = *(_QWORD*)(v72 + 144);
    v81 = fmaxf(v57, 0x0.0p+0f);
    v82 = fmaxf(v69, 0x0.0p+0f);
    v144_.v152 = v78;
    v144_.v153 = v79;
    v144_.v154 = v80;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0) {
      v137 = __cxa_guard_acquire((__int64)&GameData_22110b8),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v63 = 0x1.0000000000000p+0f;
      if (v137 != 0) {
        GameData_22110ac = 0;
        __cxa_guard_release((__int64)&GameData_22110b8),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v63 = 0x1.0000000000000p+0f;
      }
    }
    v83 = fminf(v81, v63);
    v84 = v63 - v49;
    v85 = fminf(v82, 0x1.0000000000000p+0f);
    game_fb1fe0(
        (void*)((__int64)&v140_.v140), *(_QWORD*)(v70 + 8),
        (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v70 + 8) + 24LL) +
                                  16LL) +
                       560LL),
        a1 + 3, 0),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (LANES128(v140_.v140).n128_u8[0] == 1) {
      v86 = v140_.v141;
      v87 = v140_.v142;
    }
    else {
      v86 = a1[3];
      v87 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v70 + 8) + 24LL) +
                                       16LL) +
                            560LL);
    }
    v88 = vsubq_f32(v86, v87);
    v89 = 0x1.0000000000000p+0f;
    if ((LANES128(v140_.v140).n128_u8[1] & 1) == 0) {
      v90 = v88;
      LANES128(v90).n128_u32[3] = 0;
      v91 = vmulq_f32(v90, v90);
      LANES128(v91).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
              .n64_u64[0];
      v92 = 0x1.0000000000000p-2f *
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]))))
                .n64_f32[0];
      if (v92 <= 0x1.0000000000000p+0f) {
        v93 = v92;
      }
      else {
        v93 = 0x1.0000000000000p+0f;
      }
      v94 = (float)(fminf(fmaxf(v93, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.9999980000000p-3f) +
            0x1.99999a0000000p-1f;
      if (v92 >= 0x0.0p+0f) {
        v89 = v94;
      }
      else {
        v89 = 0x1.99999a0000000p-1f;
      }
    }
    v95 = (float)(v49 + (float)(v83 * v84)) *
          (float)((float)(v85 * 0x1.6666660000000p-1f) + 0x1.3333340000000p-2f);
    v96 = LANES128(v88).n128_f32[2];
    if (LANES128(v88).n128_f32[0] != 0x0.0p+0f ||
        LANES128(v88).n128_f32[2] != 0x0.0p+0f) {
      v97 =
          sqrtf((float)(PSEUDO_UNFUSED(LANES128(v88).n128_f32[2] *
                                       LANES128(v88).n128_f32[2])) +
                (float)(LANES128(v88).n128_f32[0] * LANES128(v88).n128_f32[0]));
      LANES128(v88).n128_f32[0] = LANES128(v88).n128_f32[0] / v97;
      v96 = LANES128(v88).n128_f32[2] / v97;
    }
    v98 = *(_QWORD*)(*(_QWORD*)(v70 + 8) + 24LL);
    LANES128(v144_.v144).n128_f32[0] =
        v95 * (float)(v89 * LANES128(v88).n128_f32[0]);
    LANES128(v144_.v144).n128_f32[1] = v95 * (float)(v89 * v96);
    CharacterInputPlayer_da9a80(*(_QWORD*)(v98 + 32), (__int64)&v144_.v144),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  LANES128(a1[2]).n128_u8[1] = v69 == 0x0.0p+0f;
LABEL_111:
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v28),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
LABEL_113:
  v99 = LANES128(*(a1)).n128_u64[1];
  v100 = *(_QWORD*)(v99 + 24);
  if (v100 != 0) {
    v101 = *(_QWORD*)(v99 + 16);
    v102 = *(_QWORD*)(v99 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v100 + 16), 1u,
                              memory_order_relaxed);
    v103 = std___1___shared_weak_count_lock(v102),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v100),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v103 != 0 && v101 != 0) {
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v101 + 24) + 16LL) + 281LL) & 1) ==
          0) {
        LANES128(v104).n128_u64[0] = 0x3E8000003E800000LL;
        LANES128(v104).n128_u64[1] = 0x3E8000003E800000LL;
        v105 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 8);
        v106 =
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v105 + 24) + 16LL) + 560LL);
        v140_.v140 = vmlaq_f32(v106, v104, vsubq_f32(a1[3], v106));
        game_fb22c0((void*)(&v144_.v144), v105, &v140_.v140, a1 + 3, 0),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if ((unsigned __int8)v144_.v145 == 1) {
          v107 = *(
              _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(LANES128(
                                                                       *(a1))
                                                                       .n128_u64
                                                                           [1] +
                                                                   8) +
                                                        24LL) +
                                             16LL) +
                                  40LL) +
                       16LL);
          if (v107 != 0) {
            v108 = v144_.v144;
            *(_DWORD*)(v107 + 48) = 0;
            *(_BYTE*)(v107 + 52) = 0;
            *(_BYTE*)(v107 + 60) = 0;
            *(_DWORD*)(v107 + 56) = 1056964608;
            *(_QWORD*)(v107 + 32) = LANES128(v108).n128_u64[0];
            v109 = *(_OWORD*)(v107 + 32);
            *((_QWORD*)&v109 + 1) = LANES128(v108).n128_u32[2];
            *(_OWORD*)(v107 + 32) = v109;
            v110 = *(_QWORD*)(v107 + 8);
            if ((*(_BYTE*)(v110 + 848) & 1) == 0) {
              if (*(_BYTE*)(v110 + 28) != 1 || *(_DWORD*)(v110 + 24) != 2) {
                *(_DWORD*)(v110 + 32) = 2;
                *(_BYTE*)(v110 + 36) = 1;
              }
              if ((*(_BYTE*)(v110 + 112) & 1) == 0 &&
                  (*(_BYTE*)(v110 + 113) & 1) != 0) {
                WaitRelease_cfa2a0(v110 + 16),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
            }
          }
          LANES128(a1[1]).n128_u32[2] = 0;
        }
      }
    }
    else if (v103 == 0) {
      goto LABEL_132;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
      std___1___shared_weak_count___release_weak(v103),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
LABEL_132:
  v112 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 8);
  PSEUDO_LOW_LANE64(
      v113, n64_u64,
      *(unsigned __int64*)(*(_QWORD*)(*(_QWORD*)(v112 + 24) + 32LL) + 32LL));
  if ((float)(LANES64_OF(vmul_f32(v113, v113)).n64_f32[1] +
              (float)(LANES64(v113).n64_f32[0] * LANES64(v113).n64_f32[0])) ==
      0x0.0p+0f) {
    goto LABEL_137;
  }
  v139 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v112 + 24) + 32LL) + 32LL);
  GameRoutine_edf510((void*)((__int64)&v144_.v144),
                     *(_QWORD*)GameData_212dc38[0] + 16LL),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v114 = *(_QWORD*)(v112 + 24);
  v115 = *(_QWORD*)(v114 + 16);
  v116 = *(float*)(v114 + 544);
  v117 = *(_QWORD*)(v115 + 560);
  v118 = *(_QWORD*)(v115 + 568);
  LANES128(v140_.v140).n128_u64[0] = v117;
  LANES128(v140_.v140).n128_u64[1] = v118;
  LANES128(v140_.v141).n128_f32[0] = v116 * 0x1.3333340000000p+0f;
  v119 = nn_g3d_5eb5c0((__int64)&v144_.v144, &v140_.v140),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v120 = *(_QWORD*)(v112 + 24);
  v121 = *(float32x4_t**)(v120 + 16);
  v122 = vsubq_f32(v121[35], a1[3]);
  v123 = vmulq_f32(v122, v122);
  LANES128(v123).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v123, v123, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0])))
          .n64_u64[0];
  v124 = 0x1.0000000000000p+6f;
  LODWORD(v125) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0])))
          .n64_u32[0];
  if (v119) {
    v124 = 0x1.9000000000000p+8f;
  }
  if (v125 < v124) {
    goto LABEL_137;
  }
  if (sqrtf((float)(PSEUDO_UNFUSED(LANES128(v121[42]).n128_f32[0] *
                                   LANES128(v121[42]).n128_f32[0])) +
            (float)(LANES128(v121[41]).n128_f32[3] *
                    LANES128(v121[41]).n128_f32[3])) >
      (float)(LANES128(v121[23]).n128_f32[0] +
              (float)((float)(LANES128(v121[22]).n128_f32[3] -
                              LANES128(v121[23]).n128_f32[0]) *
                      0x1.99999a0000000p-3f))) {
    goto LABEL_137;
  }
  v126 = v119;
  v127 = LANES128(v121[35]).n128_u64[1];
  LANES128(v128).n128_u64[0] = (unsigned int)v139;
  LANES128(v143).n128_u64[0] = LANES128(v121[35]).n128_u64[0];
  LANES128(v143).n128_u64[1] = v127;
  LANES128(v128).n128_u64[1] = HIDWORD(v139);
  v140_.v140 = vaddq_f32(v143, vmulq_n_f32(v128, *(float*)(v120 + 528)));
  v129 = LANES128(*(v121)).n128_i64[1];
  v130 = *(__int64**)(*GameData_212eba8[0] + 72);
  LANES128(v155).n128_u32[0] = 4;
  if ((GameRoutine_d242c0(v130, v129, &v143, &v140_.v140, &v155) & 1) == 0 &&
      (game_zview_d17160(
           *(float*)(LANES128(*(v121)).n128_u64[1] + 528), *GameData_212ebd0[0],
           LANES128(*(v121)).n128_u64[1] + 288, &v143, &v140_.v140) &
       1) != 0) {
    goto LABEL_137;
  }
  v131 = *(float*)(*(_QWORD*)(*(_QWORD*)(v112 + 24) + 8LL) + 228LL) +
         LANES128(a1[1]).n128_f32[2];
  v132 = 0x1.0000000000000p+1f;
  if (v126) {
    v132 = 0x1.4000000000000p+2f;
  }
  LANES128(a1[1]).n128_f32[2] = v131;
  if (v131 >= v132) {
    LANES128(v133).n128_u64[0] = 0x3E8000003E800000LL;
    LANES128(v133).n128_u64[1] = 0x3E8000003E800000LL;
    v134 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 8);
    v135 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v134 + 24) + 16LL) + 560LL);
    v155 = vmlaq_f32(v135, v133, vsubq_f32(a1[3], v135));
    game_fb22c0((void*)(&v140_.v140), v134, &v155, a1 + 3, v126),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (LANES128(v140_.v141).n128_u8[0] == 1) {
      GameRoutine_ceeec0(
          *(_QWORD*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 8) + 24LL),
          &v140_.v140, 0, 0, 0x1.0000000000000p-1f),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w"));
    LABEL_137:
      LANES128(a1[1]).n128_u32[2] = 0;
    }
  }
}

void game_hub_f60b80(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  struct {
    _QWORD* v13;
    __int64 v14;
  } v13_;

  DungeonRouteReport_f604e0((__int64*)a1);
  v2 = *(_QWORD*)(a1 + 32);
  v3 = *(_DWORD*)(a1 + 88);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 > (unsigned __int64)((*(_QWORD*)(a1 + 48) - v2) >> 4)) {
    if (v3 < 0) {
      GameRoutine_f618e0();
    }
    v5 = *(_QWORD*)(a1 + 40) - v2;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16LL * v3, 16, 0);
    GameRoutine_1a0b950(v6, v2, v5);
    *(_QWORD*)(a1 + 32) = v6;
    *(_QWORD*)(a1 + 40) = v6 + v5;
    *(_QWORD*)(a1 + 48) = v6 + 16LL * v3;
    if (v2 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v4 + v7, v2);
      v3 = *(_DWORD*)(a1 + 88);
    }
  }
  if (v3 >= 1) {
    v8 = 0;
    do {
      v9 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 48, 16, 0);
      v10 = v9 + 3;
      v11 = v9;
      v9[1] = 0;
      v9[2] = 0;
      *v9 = GameData_1ff64e8;
      GameRoutine_f5ffc0((__int64)(v9 + 3));
      v13_.v13 = v10;
      v13_.v14 = (__int64)v11;
      GameRoutine_f60d00((__int64*)(a1 + 32), &v13_.v13);
      v12 = v13_.v14;
      if (v13_.v14 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      ++v8;
    } while (v8 < (signed __int32)*(_DWORD*)(a1 + 88));
  }
}

#pragma GCC visibility pop
