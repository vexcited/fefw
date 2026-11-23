#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_194cb90(__int64* result, __int64*, __int64*, __int64*,
                             __int64*, __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_6fc510(__int64);
__int64 GameRoutine_975940(__int64);
__int64 Trick_7d2180(__int64, int, int, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
bool GameRoutine_6fc7a0(__int64, _QWORD*);
bool game_HasActiveSkill_843420(_DWORD*, _QWORD*);
bool gfx_194cd60(__int64*, __int64*, __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN GameData_1ac8689;
extern _UNKNOWN GameData_1adf907;
extern _UNKNOWN GameData_1af69ec;
extern _UNKNOWN GameData_1afa962;
extern _UNKNOWN GameData_1afe48c;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfb8[11];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
float game_d775b0(__int64, __int64, __int64, __int64, float*);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
void GameRoutine_6b71e0(__int64*);
void GameRoutine_6b81a0(_QWORD*, __int64);
void GameRoutine_6b8990(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_6b8da0(_QWORD* a1, __int64* a2);
__int64 game_90fb60(__int64 a1, _DWORD* a2, int a3, int a4);
float game_d779b0();
__int64 game_10fdef0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3,
                     float32x4_t* a4, _DWORD* a5);
unsigned __int64 game_13e51e0(__int64 a1, __int64* a2, unsigned __int8 a3);
__int64 game_194bec0(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                     char a5);

void game_6b8da0(_QWORD* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  unsigned int* v9;
  unsigned int* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  unsigned int* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75[2];
  struct {
    __int64 v76[2];
    char* v77;
    __int64 v78;
  } v76_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a1[7] + a1[6] - 1LL;
  v3 = *(_QWORD*)(*(_QWORD*)(a1[3] + 8 * (v2 >> 9)) + 8 * (v2 & 0x1FF));
  if (v3 == 0) {
    return;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v76_.v76, a2[2], a2[1]),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v6 = a2[1];
    v76_.v76[0] = *a2;
    v76_.v76[1] = v6;
    v76_.v77 = (const char*)a2[2];
  }
  if ((*(_BYTE*)v3 & 0x7F) != 8 ||
      ((v76_.v76[0] & 1) == 0 ? (v7 = (char*)v76_.v76 + 1) : (v7 = v76_.v77),
       v8 = GameRoutine_1a09c70(v7), v9 = *(unsigned int**)(v3 + 1),
       v75[0] = (__int64)v7, v75[1] = v8,
       v10 = game_6b7f00(v9, 0, v9, v9[1], v75), v11 == v9[1])) {
    v12 = 0;
    if ((v76_.v76[0] & 1) == 0) {
      goto LABEL_20;
    }
  LABEL_16:
    if (v76_.v77 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v76_.v77),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_20;
  }
  v13 = *v10;
  if (v11 >= v13) {
    v15 = v11 - v13;
    v16 = __clz((unsigned int)(v15 + 16));
    v14 = *(_QWORD*)(*((_QWORD*)v10 + 2) + 8 * (27 - v16) + 8) +
          32LL * (unsigned int)(v15 - *((_DWORD*)GameData_212ce38 + 28 - v16));
  }
  else {
    v14 = *((_QWORD*)v10 + 1) + 32 * v11;
  }
  v12 = v14 + 16;
  if ((v76_.v76[0] & 1) != 0) {
    goto LABEL_16;
  }
LABEL_20:
  if (v12 != 0 && (*(_BYTE*)v12 & 0x7F) == 7) {
    v18 = (__int64*)a2[3];
    v19 = *(unsigned int**)(v12 + 1);
    v21 = *v18;
    v20 = (__int64*)v18[1];
    v22 = v19[1];
    v23 = (__int64)v20 - *v18;
    v24 = v23 >> 5;
    v25 = v22 - (v23 >> 5);
    if (v22 <= v23 >> 5) {
      if (v22 < v23 >> 5) {
        v40 = v21 + 32 * v22;
        if ((__int64*)v40 != v20) {
          v41 = v18[1];
          v42 = fw_memory_g_heap_manager_ptr;
          do {
            v43 = *(_BYTE*)(v41 - 32);
            v41 -= 32;
            if ((v43 & 1) != 0) {
              v44 = *(v20 - 2);
              if (v44 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) != 0) {
                  v45 = 128;
                }
                else {
                  v45 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v42 + v45, v44),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v20 = (__int64*)v41;
          } while (v41 != v40);
        }
        v18[1] = v40;
      }
    }
    else {
      v26 = v18[2];
      if (v25 <= (v26 - (__int64)v20) >> 5) {
        GameRoutine_1a0ba50(v18[1], 0, 32 * v25),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v18[1] = (__int64)&v20[4 * v25];
      }
      else {
        v27 = v26 - v21;
        if (v27 >> 4 > v22) {
          v22 = v27 >> 4;
        }
        if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFE0LL) {
          v22 = 0x7FFFFFFFFFFFFFFLL;
        }
        if (v22 >> 59 != 0) {
          GameRoutine_60a210(),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v28 = 32 * v22;
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v22, 16, 0),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v30 = v29 + v23;
        v74 = v29 + v28;
        GameRoutine_1a0ba50(v30, 0, 32 * v25),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v31 = v30 + 32 * v25;
        v32 = (_QWORD*)(v30 - 32 * v24);
        if ((__int64*)v21 != v20) {
          v33 = (__int64*)v21;
          v34 = v32;
          do {
            v35 = *v33;
            v36 = v33[2];
            v34[1] = v33[1];
            v34[2] = v36;
            *v34 = v35;
            v33[1] = 0;
            v33[2] = 0;
            *v33 = 0;
            v37 = v33[3];
            v33 += 4;
            v34[3] = v37;
            v34 += 4;
          } while (v33 != v20);
          do {
            if ((*(_BYTE*)v21 & 1) != 0) {
              v38 = *(_QWORD*)(v21 + 16);
              if (v38 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v39 = 128;
                }
                else {
                  v39 = 56;
                }
                nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v39,
                                              v38),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v21 += 32;
          } while ((__int64*)v21 != v20);
          v21 = *v18;
        }
        *v18 = (__int64)v32;
        v18[1] = v31;
        v18[2] = v74;
        if (v21 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v21),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v47 = v19[1];
    if ((_DWORD)v47 != 0) {
      v48 = 16 * v47;
      v49 = 28;
      v50 = 0;
      v51 = 0;
      do {
        v52 = *v19;
        if (v51 >= v52) {
          v54 = v51 - v52;
          v55 = __clz((unsigned int)(v54 + 16));
          v53 = *(_QWORD*)(*((_QWORD*)v19 + 2) + 8 * (27 - v55) + 8) +
                16LL * (unsigned int)(v54 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v55));
        }
        else {
          v53 = *((_QWORD*)v19 + 1) + v50;
        }
        v56 = a1[3];
        v57 = a1[4];
        v58 = ((v57 - v56) << 6) - 1;
        if (v57 == v56) {
          v58 = 0;
        }
        v59 = a1[7] + a1[6];
        if (v58 == v59) {
          GameRoutine_6b71e0(a1 + 2),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v56 = a1[3];
          v59 = a1[7] + a1[6];
        }
        *(_QWORD*)(*(_QWORD*)(v56 + 8 * (v59 >> 9)) + 8 * (v59 & 0x1FF)) = v53;
        v60 = a1[6];
        v61 = a1[7];
        v62 = v61 + 1;
        v63 = v60 + v61;
        v64 = a1[3];
        a1[7] = v62;
        if (*(_QWORD*)(*(_QWORD*)(v64 + 8 * (v63 >> 9)) + 8 * (v63 & 0x1FF)) !=
            0) {
          v65 = *(_QWORD*)a2[3];
          *(_DWORD*)((char*)v76_.v76 + 1) = 6580596;
          LOBYTE(v76_.v76[0]) = 6;
          v76_.v78 = v65 + v49 - 28;
          GameRoutine_6b8990(a1, v76_.v76),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v76_.v76[0] & 1) != 0 && v76_.v77 != nullptr) {
            v66 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v66,
                                          (__int64)v76_.v77),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v67 = v65 + v49;
          v76_.v76[0] = 30722;
          v76_.v78 = v67 - 4;
          GameRoutine_6b81a0(a1, (__int64)v76_.v76),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v76_.v76[0] & 1) != 0 && v76_.v77 != nullptr) {
            v68 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v68,
                                          (__int64)v76_.v77),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v76_.v78 = v67;
          v76_.v76[0] = 31234;
          GameRoutine_6b81a0(a1, (__int64)v76_.v76),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v76_.v76[0] & 1) != 0 && v76_.v77 != nullptr) {
            v69 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v69,
                                          (__int64)v76_.v77),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v60 = a1[6];
          v62 = a1[7];
          v64 = a1[3];
        }
        v70 = a1[4];
        if (v70 == v64) {
          v71 = 0;
        }
        else {
          v71 = ((v70 - v64) << 6) - 1;
        }
        a1[7] = v62 - 1;
        if ((unsigned __int64)(v71 - (v62 + v60) + 1) >= 0x400) {
          v72 = *(_QWORD*)(v70 - 8);
          if (v72 != 0) {
            v73 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v73, v72),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v70 = a1[4];
          }
          a1[4] = v70 - 8;
        }
        ++v51;
        v50 += 16;
        v49 += 32;
      } while (v48 != v50);
    }
  }
}

__int64 game_90fb60(__int64 a1, _DWORD* a2, int a3, int a4)
{
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v11;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  int v29;

  v5 = 0;
  if (a1 == 0) {
    return v5 & 1;
  }
  {
    v6 = GameData_212c880[0];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(_DWORD*)a2 & 0xFFF;
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v7);
    __asm__ volatile("" ::"r"(v8));
  }
  if (*(_QWORD*)(v8 + 664) == 0) {
    return v5 & 1;
  }
  if ((*(_DWORD*)a2 & 0xFFF) == 0) {
    goto LABEL_21;
  }
  v11 = a1;
  if ((GameRoutine_6fc510(
           *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v7)) &
       1) != 0) {
    goto LABEL_21;
  }
  if (*(_BYTE*)(v8 + 273) != 0) {
    {
      v13 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * (*(_DWORD*)a2 & 0xFFFLL));
      __asm__ volatile("" ::"r"(v13));
    }
    {
      v14 = *(unsigned __int8*)(v13 + 104);
      __asm__ volatile("" ::"r"(v14));
    }
    {
      v15 = *(unsigned __int8*)(v13 + 273);
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = (unsigned int)(v14 - 5) >= 2 ? 0 : (*(_DWORD*)a2 >> 19) & 0x1F;
      __asm__ volatile("" ::"r"(v16));
    }
    if (v16 - ((*(_DWORD*)a2 >> 12) & 0x7F) + v15 < 1) {
      goto LABEL_21;
    }
  }
  if (!GameRoutine_6fc7a0(v8, (_QWORD*)(v11 + 1744))) {
    goto LABEL_21;
  }
  {
    v17 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (*(_DWORD*)a2 & 0xFFF));
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v18 = *(_QWORD*)(v17 + 648);
    __asm__ volatile("" ::"r"(v18));
  }
  if (v18 != 0) {
    {
      v19 = *(unsigned __int16*)(v18 + 16);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(_QWORD*)(v11 + 1744);
      __asm__ volatile("" ::"r"(v20));
    }
    v21 = v19 & 0xFFF;
    v22 = (v19 >> 5) & 0x7F;
    {
      v23 = *(_QWORD*)(v11 + 1752) - v20;
      __asm__ volatile("" ::"r"(v23));
    }
    v29 = v21;
    if (v22 + 1 > (unsigned __int64)(v23 >> 2) ||
        ((*(_DWORD*)(v20 + 4LL * (unsigned int)v22) >> v21) & 1) == 0 ||
        !game_HasActiveSkill_843420(&v29, (_QWORD*)(v11 + 1744))) {
      goto LABEL_21;
    }
    {
      v17 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (*(_DWORD*)a2 & 0xFFF));
      __asm__ volatile("" ::"r"(v17));
    }
  }
  if (*(_WORD*)(v17 + 656) == 0) {
  LABEL_21:
    v5 = 0;
    return v5 & 1;
  }
  {
    v24 = *(unsigned __int16*)(v17 + 656) - 1LL;
    __asm__ volatile("" ::"r"(v24));
  }
  v25 = 8;
  {
    v26 = GameData_212cfb8[0];
    __asm__ volatile("" ::"r"(v26));
  }
  do {
    v27 = v24;
    v5 = Trick_7d2180(*(_QWORD*)(*v26 + 16), a3, a4,
                      *(_QWORD*)(*(_QWORD*)(v17 + 664) + v25));
    if ((v5 & 1) != 0) {
      break;
    }
    v24 = v27 - 1;
    v25 += 16;
  } while (v27 != 0);
  return v5 & 1;
}

float game_d779b0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float* v5;
  float* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float result;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  bool v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  int v34;
  __int64* v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  bool v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  int v57;
  int v58;
  __int64* v59;
  __int64 v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  bool v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  int v81;
  int v82;
  _QWORD* v83;
  __int64 v84;
  float v85;
  float v86;
  float v87;
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
  bool v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  int v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v6 = v5;
  v7 = v4;
  v8 = v3;
  v9 = v2;
  v10 = v1;
  v11 = v0;
  game_d775b0(v0, v1, v2, v3, v5),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  result = *(float*)v8;
  v13 = *(float*)(v8 + 4);
  v14 = v6[1];
  v15 = *(float*)v7 - *v6;
  v16 = *(float*)(v7 + 4) - v14;
  v17 = *(float*)v8 - *v6;
  v18 = v13 - v14;
  v19 = (float)(PSEUDO_UNFUSED(v16 * v16)) + (float)(v15 * v15);
  v20 = (float)(PSEUDO_UNFUSED(v18 * v18)) + (float)(v17 * v17);
  if (v19 != v20) {
    if (!(v19 < v20)) {
      return result;
    }
  LABEL_17:
    *(_DWORD*)v8 = *(_DWORD*)v7;
    v32 = *(_QWORD*)(v8 + 8);
    v33 = *(_DWORD*)(v8 + 16);
    v34 = *(_DWORD*)(v8 + 20);
    v35 = (__int64*)(v8 + 24);
    v108 = *(_QWORD*)(v8 + 24);
    v112 = *(_QWORD*)(v8 + 32);
    *(_DWORD*)(v8 + 4) = *(_DWORD*)(v7 + 4);
    *(_DWORD*)(v8 + 8) = *(_DWORD*)(v7 + 8);
    *(_DWORD*)(v8 + 12) = *(_DWORD*)(v7 + 12);
    *(_DWORD*)(v8 + 16) = *(_DWORD*)(v7 + 16);
    *(_DWORD*)(v8 + 20) = *(_DWORD*)(v7 + 20);
    v36 = *(_QWORD*)(v7 + 24);
    *(_QWORD*)(v8 + 32) = *(_QWORD*)(v7 + 32);
    *(_QWORD*)(v8 + 24) = v36;
    *(_QWORD*)(v7 + 8) = v32;
    *(float*)v7 = result;
    *(float*)(v7 + 4) = v13;
    *(_DWORD*)(v7 + 16) = v33;
    *(_DWORD*)(v7 + 20) = v34;
    *(_QWORD*)(v7 + 24) = v108;
    *(_QWORD*)(v7 + 32) = v112;
    result = *(float*)v9;
    v37 = *(float*)(v9 + 4);
    v38 = v6[1];
    v39 = *(float*)v8 - *v6;
    v40 = *(float*)(v8 + 4) - v38;
    v41 = *(float*)v9 - *v6;
    v42 = v37 - v38;
    v43 = (float)(PSEUDO_UNFUSED(v40 * v40)) + (float)(v39 * v39);
    v44 = (float)(PSEUDO_UNFUSED(v42 * v42)) + (float)(v41 * v41);
    if (v43 == v44) {
      if (v39 != 0x0.0p+0f || v40 != 0x0.0p+0f) {
        v45 = sqrtf(v43);
        v39 = v39 / v45;
        v40 = v40 / v45;
      }
      v46 = v6[2];
      v47 = v6[3];
      v48 = v46;
      v49 = v47;
      v50 = v46 == 0x0.0p+0f;
      if (v47 != 0x0.0p+0f) {
        v50 = false;
      }
      if (!v50) {
        v51 = sqrtf((float)(PSEUDO_UNFUSED(v47 * v47)) + (float)(v46 * v46));
        v48 = v46 / v51;
        v49 = v47 / v51;
      }
      v52 = v40 * v49;
      if (v41 != 0x0.0p+0f || v42 != 0x0.0p+0f) {
        v53 = sqrtf(v44);
        v41 = v41 / v53;
        v42 = v42 / v53;
      }
      v54 = v52 + (float)(v39 * v48);
      if (!v50) {
        v55 = sqrtf((float)(PSEUDO_UNFUSED(v47 * v47)) + (float)(v46 * v46));
        v46 = v46 / v55;
        v47 = v47 / v55;
      }
      if (!(v54 >
            (float)((float)(PSEUDO_UNFUSED(v42 * v47)) + (float)(v41 * v46)))) {
        return result;
      }
    }
    else if (!(v43 < v44)) {
      return result;
    }
    *(_DWORD*)v9 = *(_DWORD*)v8;
    v56 = *(_QWORD*)(v9 + 8);
    v57 = *(_DWORD*)(v9 + 16);
    v58 = *(_DWORD*)(v9 + 20);
    v59 = (__int64*)(v9 + 24);
    v109 = *(_QWORD*)(v9 + 24);
    v113 = *(_QWORD*)(v9 + 32);
    *(_DWORD*)(v9 + 4) = *(_DWORD*)(v8 + 4);
    *(_DWORD*)(v9 + 8) = *(_DWORD*)(v8 + 8);
    *(_DWORD*)(v9 + 12) = *(_DWORD*)(v8 + 12);
    *(_DWORD*)(v9 + 16) = *(_DWORD*)(v8 + 16);
    *(_DWORD*)(v9 + 20) = *(_DWORD*)(v8 + 20);
    v60 = *v35;
    *(_QWORD*)(v9 + 32) = *(_QWORD*)(v8 + 32);
    *(_QWORD*)(v9 + 24) = v60;
    *(_QWORD*)(v8 + 8) = v56;
    *(float*)v8 = result;
    *(float*)(v8 + 4) = v37;
    *(_DWORD*)(v8 + 16) = v57;
    *(_DWORD*)(v8 + 20) = v58;
    *v35 = v109;
    *(_QWORD*)(v8 + 32) = v113;
    result = *(float*)v10;
    v61 = *(float*)(v10 + 4);
    v62 = v6[1];
    v63 = *(float*)v9 - *v6;
    v64 = *(float*)(v9 + 4) - v62;
    v65 = *(float*)v10 - *v6;
    v66 = v61 - v62;
    v67 = (float)(PSEUDO_UNFUSED(v64 * v64)) + (float)(v63 * v63);
    v68 = (float)(PSEUDO_UNFUSED(v66 * v66)) + (float)(v65 * v65);
    if (v67 == v68) {
      if (v63 != 0x0.0p+0f || v64 != 0x0.0p+0f) {
        v69 = sqrtf(v67);
        v63 = v63 / v69;
        v64 = v64 / v69;
      }
      v70 = v6[2];
      v71 = v6[3];
      v72 = v70;
      v73 = v71;
      v74 = v70 == 0x0.0p+0f;
      if (v71 != 0x0.0p+0f) {
        v74 = false;
      }
      if (!v74) {
        v75 = sqrtf((float)(PSEUDO_UNFUSED(v71 * v71)) + (float)(v70 * v70));
        v72 = v70 / v75;
        v73 = v71 / v75;
      }
      v76 = v64 * v73;
      if (v65 != 0x0.0p+0f || v66 != 0x0.0p+0f) {
        v77 = sqrtf(v68);
        v65 = v65 / v77;
        v66 = v66 / v77;
      }
      v78 = v76 + (float)(v63 * v72);
      if (!v74) {
        v79 = sqrtf((float)(PSEUDO_UNFUSED(v71 * v71)) + (float)(v70 * v70));
        v70 = v70 / v79;
        v71 = v71 / v79;
      }
      if (!(v78 >
            (float)((float)(PSEUDO_UNFUSED(v66 * v71)) + (float)(v65 * v70)))) {
        return result;
      }
    }
    else if (!(v67 < v68)) {
      return result;
    }
    *(_DWORD*)v10 = *(_DWORD*)v9;
    v80 = *(_QWORD*)(v10 + 8);
    v81 = *(_DWORD*)(v10 + 16);
    v82 = *(_DWORD*)(v10 + 20);
    v83 = (_QWORD*)(v10 + 24);
    v110 = *(_QWORD*)(v10 + 24);
    v114 = *(_QWORD*)(v10 + 32);
    *(_DWORD*)(v10 + 4) = *(_DWORD*)(v9 + 4);
    *(_DWORD*)(v10 + 8) = *(_DWORD*)(v9 + 8);
    *(_DWORD*)(v10 + 12) = *(_DWORD*)(v9 + 12);
    *(_DWORD*)(v10 + 16) = *(_DWORD*)(v9 + 16);
    *(_DWORD*)(v10 + 20) = *(_DWORD*)(v9 + 20);
    v84 = *v59;
    *(_QWORD*)(v10 + 32) = *(_QWORD*)(v9 + 32);
    *(_QWORD*)(v10 + 24) = v84;
    *(_QWORD*)(v9 + 8) = v80;
    *(float*)v9 = result;
    *(float*)(v9 + 4) = v61;
    *(_DWORD*)(v9 + 16) = v81;
    *(_DWORD*)(v9 + 20) = v82;
    *v59 = v110;
    *(_QWORD*)(v9 + 32) = v114;
    result = *(float*)v11;
    v85 = *(float*)(v11 + 4);
    v86 = v6[1];
    v87 = *(float*)v10 - *v6;
    v88 = *(float*)(v10 + 4) - v86;
    v89 = *(float*)v11 - *v6;
    v90 = v85 - v86;
    v91 = (float)(PSEUDO_UNFUSED(v88 * v88)) + (float)(v87 * v87);
    v92 = (float)(PSEUDO_UNFUSED(v90 * v90)) + (float)(v89 * v89);
    if (v91 == v92) {
      if (v87 != 0x0.0p+0f || v88 != 0x0.0p+0f) {
        v93 = sqrtf(v91);
        v87 = v87 / v93;
        v88 = v88 / v93;
      }
      v94 = v6[2];
      v95 = v6[3];
      v96 = v94;
      v97 = v95;
      v98 = v94 == 0x0.0p+0f;
      if (v95 != 0x0.0p+0f) {
        v98 = false;
      }
      if (!v98) {
        v99 = sqrtf((float)(PSEUDO_UNFUSED(v95 * v95)) + (float)(v94 * v94));
        v96 = v94 / v99;
        v97 = v95 / v99;
      }
      v100 = v88 * v97;
      if (v89 != 0x0.0p+0f || v90 != 0x0.0p+0f) {
        v101 = sqrtf(v92);
        v89 = v89 / v101;
        v90 = v90 / v101;
      }
      v102 = v100 + (float)(v87 * v96);
      if (!v98) {
        v103 = sqrtf((float)(PSEUDO_UNFUSED(v95 * v95)) + (float)(v94 * v94));
        v94 = v94 / v103;
        v95 = v95 / v103;
      }
      if (!(v102 >
            (float)((float)(PSEUDO_UNFUSED(v90 * v95)) + (float)(v89 * v94)))) {
        return result;
      }
    }
    else if (!(v91 < v92)) {
      return result;
    }
    *(_DWORD*)v11 = *(_DWORD*)v10;
    v104 = *(_QWORD*)(v11 + 8);
    v105 = *(_DWORD*)(v11 + 16);
    v106 = *(_DWORD*)(v11 + 20);
    v111 = *(_QWORD*)(v11 + 24);
    v115 = *(_QWORD*)(v11 + 32);
    *(_DWORD*)(v11 + 4) = *(_DWORD*)(v10 + 4);
    *(_DWORD*)(v11 + 8) = *(_DWORD*)(v10 + 8);
    *(_DWORD*)(v11 + 12) = *(_DWORD*)(v10 + 12);
    *(_DWORD*)(v11 + 16) = *(_DWORD*)(v10 + 16);
    *(_DWORD*)(v11 + 20) = *(_DWORD*)(v10 + 20);
    v107 = *(_QWORD*)(v10 + 32);
    *(_QWORD*)(v11 + 24) = *v83;
    *(_QWORD*)(v11 + 32) = v107;
    *(_QWORD*)(v10 + 8) = v104;
    *(float*)v10 = result;
    *(float*)(v10 + 4) = v85;
    *(_DWORD*)(v10 + 16) = v105;
    *(_DWORD*)(v10 + 20) = v106;
    *v83 = v111;
    *(_QWORD*)(v10 + 32) = v115;
    return result;
  }
  if (v15 != 0x0.0p+0f || v16 != 0x0.0p+0f) {
    v21 = sqrtf(v19);
    v15 = v15 / v21;
    v16 = v16 / v21;
  }
  v22 = v6[2];
  v23 = v6[3];
  v24 = v22;
  v25 = v23;
  v26 = v22 == 0x0.0p+0f;
  if (v23 != 0x0.0p+0f) {
    v26 = false;
  }
  if (!v26) {
    v27 = sqrtf((float)(PSEUDO_UNFUSED(v23 * v23)) + (float)(v22 * v22));
    v24 = v22 / v27;
    v25 = v23 / v27;
  }
  v28 = v16 * v25;
  if (v17 != 0x0.0p+0f || v18 != 0x0.0p+0f) {
    v29 = sqrtf(v20);
    v17 = v17 / v29;
    v18 = v18 / v29;
  }
  v30 = v28 + (float)(v15 * v24);
  if (!v26) {
    v31 = sqrtf((float)(PSEUDO_UNFUSED(v23 * v23)) + (float)(v22 * v22));
    v22 = v22 / v31;
    v23 = v23 / v31;
  }
  if (v30 > (float)((float)(PSEUDO_UNFUSED(v18 * v23)) + (float)(v17 * v22))) {
    goto LABEL_17;
  }
  return result;
}

__int64 game_10fdef0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3,
                     float32x4_t* a4, _DWORD* a5)
{
  float v5;
  float v6;
  int8x16_t v7;
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x2_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  unsigned __int32 v18;
  unsigned __int32 v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  int8x16_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x8_t v29;
  int8x8_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  unsigned __int32 v37;
  unsigned __int32 v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  int v56;
  float32x4_t v57;
  float32x4_t v58;
  int8x16_t v59;
  int8x16_t v60;
  int8x16_t v61;
  int8x8_t v62;
  int8x8_t v63;
  unsigned __int64 v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  int8x16_t v82;
  float v83;
  int8x16_t v84;
  __int128* v85;
  int32x4_t v86;
  int v87;
  float32x4_t v88;
  float32x4_t v89;
  __int128 v90;
  int v92;
  int v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  unsigned __int32 v98;
  unsigned __int32 v99;
  float32x4_t* v100;
  float32x4_t* v101;
  float32x4_t* v102;
  float32x4_t* v103;
  _DWORD* v104;
  _DWORD* v105;
  float32x4_t* v106;
  float32x4_t* v107;
  float32x4_t* v108;
  float32x4_t* v109;
  __int128 v110;
  int8x16_t v111;

  v111 = (__typeof__(v111)){0};
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v106 = a2;
    v108 = a1;
    v102 = a3;
    v104 = a5;
    v100 = a4;
    v92 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    a4 = v100;
    a3 = v102;
    a5 = v104;
    a2 = v106;
    v93 = v92;
    a1 = v108;
    if (v93 != 0) {
      v94 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v94;
      __cxa_guard_release((__int64)&GameData_21a6130);
      a2 = v106;
      a1 = v108;
      a4 = v100;
      a3 = v102;
      a5 = v104;
    }
  }
  v5 = LANES128(*(a1)).n128_f32[2];
  v6 = LANES128(*(a3)).n128_f32[2];
  v7 = (__typeof__(v7)){0};
  v8 = LANES128(*(a4)).n128_f32[2];
  v9 = LANES128(*(a2)).n128_f32[2];
  v10 = (float)(PSEUDO_UNFUSED((float)(v9 - v5) *
                               LANES128_OF(vaddq_f32(*a1, *a2)).n128_f32[0])) +
        (float)((float)((float)(*((float*)&GameData_21a6120 + 1) +
                                (float)(PSEUDO_UNFUSED(
                                    (float)(v5 - v6) *
                                    LANES128_OF(vaddq_f32(*a1, *a3))
                                        .n128_f32[0]))) +
                        (float)(PSEUDO_UNFUSED(
                            (float)(v6 - v8) *
                            LANES128_OF(vaddq_f32(*a3, *a4)).n128_f32[0]))) +
                (float)(PSEUDO_UNFUSED(
                    (float)(v8 - v9) *
                    LANES128_OF(vaddq_f32(*a4, *a2)).n128_f32[0])));
  LANES128(v11).n128_f32[0] =
      (float)(PSEUDO_UNFUSED(
          (float)(LANES128(*(a2)).n128_f32[1] - LANES128(*(a1)).n128_f32[1]) *
          (float)(v5 + v9))) +
      (float)((float)((float)(*(float*)&GameData_21a6120 +
                              (float)(PSEUDO_UNFUSED(
                                  (float)(LANES128(*(a1)).n128_f32[1] -
                                          LANES128(*(a3)).n128_f32[1]) *
                                  (float)(v5 + v6)))) +
                      (float)(PSEUDO_UNFUSED(
                          (float)(LANES128(*(a3)).n128_f32[1] -
                                  LANES128(*(a4)).n128_f32[1]) *
                          (float)(v6 + v8)))) +
              (float)(PSEUDO_UNFUSED((float)(LANES128(*(a4)).n128_f32[1] -
                                             LANES128(*(a2)).n128_f32[1]) *
                                     (float)(v8 + v9))));
  LANES128(v11).n128_f32[1] = v10;
  LANES128(v11).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(
          (float)(COERCE_FLOAT(
                      DWORDn(LANES128(*(a1)).n128_u64[0],
                             sizeof(LANES128(*(a1)).n128_u64[0]) / 4 - 1)) +
                  COERCE_FLOAT(
                      DWORDn(LANES128(*(a2)).n128_u64[0],
                             sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1))) *
          LANES128_OF(vsubq_f32(*a2, *a1)).n128_f32[0])) +
      (float)((float)((float)(*((float*)&GameData_21a6120 + 2) +
                              (float)(PSEUDO_UNFUSED(
                                  (float)(COERCE_FLOAT(DWORDn(
                                              LANES128(*(a1)).n128_u64[0],
                                              sizeof(
                                                  LANES128(*(a1)).n128_u64[0]) /
                                                      4 -
                                                  1)) +
                                          COERCE_FLOAT(DWORDn(
                                              LANES128(*(a3)).n128_u64[0],
                                              sizeof(
                                                  LANES128(*(a3)).n128_u64[0]) /
                                                      4 -
                                                  1))) *
                                  LANES128_OF(vsubq_f32(*a1, *a3))
                                      .n128_f32[0]))) +
                      (float)(PSEUDO_UNFUSED(
                          (float)(COERCE_FLOAT(DWORDn(
                                      LANES128(*(a3)).n128_u64[0],
                                      sizeof(LANES128(*(a3)).n128_u64[0]) / 4 -
                                          1)) +
                                  COERCE_FLOAT(DWORDn(
                                      LANES128(*(a4)).n128_u64[0],
                                      sizeof(LANES128(*(a4)).n128_u64[0]) / 4 -
                                          1))) *
                          LANES128_OF(vsubq_f32(*a3, *a4)).n128_f32[0]))) +
              (float)(PSEUDO_UNFUSED(
                  (float)(COERCE_FLOAT(DWORDn(
                              LANES128(*(a4)).n128_u64[0],
                              sizeof(LANES128(*(a4)).n128_u64[0]) / 4 - 1)) +
                          COERCE_FLOAT(DWORDn(
                              LANES128(*(a2)).n128_u64[0],
                              sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1))) *
                  LANES128_OF(vsubq_f32(*a4, *a2)).n128_f32[0]))));
  v12 = vmulq_f32(v11, v11);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES64(v13).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  if (LANES64(v13).n64_f32[0] == 0x0.0p+0f) {
    v19 = 0;
    v18 = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      goto LABEL_6;
    }
  }
  else {
    LANES128(v14).n128_u64[0] = LANES64(v13).n64_u64[0];
    *(float32x2_t*)&LANES128(v14).n128_i8[8] = v13;
    v15 = vrsqrteq_f32(v14);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
    v17 = vbicq_s8(
        vmulq_f32(v11, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
        vceqzq_f32(v14));
    LANES128(v7).n128_u64[0] = LANES128(v17).n128_u64[0];
    v18 = LANES128(v17).n128_u32[1];
    LANES128(v7).n128_u64[1] = LANES128(v17).n128_u32[2];
    v19 = LANES128(v17).n128_u32[2];
    v111 = v7;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      goto LABEL_6;
    }
  }
  v107 = a2;
  v109 = a1;
  v103 = a3;
  v105 = a5;
  v101 = a4;
  v98 = v19;
  v99 = v18;
  v95 = __cxa_guard_acquire((__int64)&GameData_21a6130);
  v19 = v98;
  v18 = v99;
  v96 = v95;
  a1 = v109;
  a4 = v101;
  a3 = v103;
  a5 = v105;
  a2 = v107;
  if (v96 != 0) {
    v97 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v97;
    __cxa_guard_release((__int64)&GameData_21a6130);
    v19 = v98;
    v18 = v99;
    a5 = v105;
    a2 = v107;
    a1 = v109;
    a4 = v101;
    a3 = v103;
  }
LABEL_6:
  v20 = *a3;
  v21 = *a1;
  v22 = *a2;
  v23 = vsubq_f32(*a3, *a1);
  v24 = vsubq_f32(*a2, *a1);
  v25 = COERCE_AS(int8x16_t, GameData_21a6120);
  v26 = *a4;
  v110 = GameData_21a6120;
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES64(v29).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
          .n64_u64[0];
  LANES64(v30).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] = LANES128(v27).n128_u64[0];
  LANES128(v32).n128_u64[0] = LANES128(v28).n128_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] = v29;
  *(int8x8_t*)&LANES128(v32).n128_i8[8] = v30;
  v33 = vmulq_f32(v31, v32);
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v35 = vnegq_f32(v31);
  v36 = vmlsq_f32(v33, v34, v31);
  v37 = DWORD1(GameData_21a6120);
  v40 = vmulq_f32(v36, v36);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  v38 = DWORD2(GameData_21a6120);
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  LANES128(v40).n128_u32[0] =
      COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+1f));
  if (LANES128(v39).n128_f32[0] == 0x0.0p+0f) {
    goto LABEL_10;
  }
  v41 = vsubq_f32(v26, v20);
  v42 = vsubq_f32(v22, v20);
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v43).n128_i8[8] =
      vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44).n128_i8[8] =
      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v46 = vmlsq_f32(vmulq_f32(v43, v44), v41, v45);
  v47 = vmulq_f32(v46, v46);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v47).n128_f32[0] == 0x0.0p+0f) {
    goto LABEL_10;
  }
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  v48 = vrsqrteq_f32(v39);
  LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
  v49 = vmulq_f32(v48, vrsqrtsq_f32(v48, vmulq_f32(v39, v48)));
  v51 = vbicq_s8(
      vmulq_f32(v36, vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v39, v49)))),
      vceqzq_f32(v39));
  v50 = vrsqrteq_f32(v47);
  LANES128(v51).n128_u32[3] = 0;
  v52 = vmulq_f32(v50, vrsqrtsq_f32(v50, vmulq_f32(v47, v50)));
  v53 = vbicq_s8(
      vmulq_f32(v46, vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v47, v52)))),
      vceqzq_f32(v47));
  LANES128(v53).n128_u32[3] = 0;
  v54 = vaddq_f32(v51, v53);
  v55 = vmulq_f32(v54, v54);
  LANES128(v55).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v55).n128_f32[0] == 0x0.0p+0f) {
  LABEL_10:
    v56 = 0;
  }
  else {
    LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
    v56 = 1;
    v57 = vrsqrteq_f32(v55);
    v58 = vmulq_f32(v57, vrsqrtsq_f32(v57, vmulq_f32(v55, v57)));
    v59 = vbicq_s8(
        vmulq_f32(v54, vmulq_f32(v58, vrsqrtsq_f32(v58, vmulq_f32(v55, v58)))),
        vceqzq_f32(v55));
    v60 = vmulq_f32(v51, v53);
    v40 = vextq_s8(v60, v60, 8u);
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
            .n64_u64[0];
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] = LANES128(v59).n128_u64[0];
    v37 = LANES128(v59).n128_u32[1];
    LANES128(v25).n128_u64[1] = LANES128(v59).n128_u32[2];
    v38 = LANES128(v59).n128_u32[2];
    v110 = (__int128)v25;
  }
  v61 = vsubq_f32(v26, v21);
  *(int8x8_t*)&LANES128(v27).n128_i8[8] = v29;
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES64(v62).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  LANES64(v63).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
          .n64_u64[0];
  v64 = LANES128(v21).n128_u64[0];
  *(int8x8_t*)&LANES128(v66).n128_i8[8] = v62;
  v65 = vmulq_f32(v27, v66);
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v67).n128_u64[0] = LANES128(v66).n128_u64[0];
  *(int8x8_t*)&LANES128(v67).n128_i8[8] = v63;
  v68 = vmlaq_f32(v65, v67, v35);
  v69 = vmulq_f32(v68, v68);
  LANES128(v69).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
          .n64_u64[0];
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v69).n128_f32[0] != 0x0.0p+0f) {
    *(int8x8_t*)&LANES128(v28).n128_i8[8] = v30;
    *(int8x8_t*)&LANES128(v66).n128_i8[8] = v63;
    *(int8x8_t*)&LANES128(v21).n128_i8[8] = v62;
    v70 = vmlsq_f32(vmulq_f32(v28, v66), v34, v21);
    v71 = vmulq_f32(v70, v70);
    LANES128(v71).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
            .n64_u64[0];
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v71).n128_f32[0] != 0x0.0p+0f) {
      LANES128(v69).n128_u64[1] = LANES128(v69).n128_u64[0];
      v72 = vrsqrteq_f32(v69);
      v73 = vceqzq_f32(v69);
      LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
      v74 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v69, v72)));
      v75 = vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v69, v74)));
      v76 = vrsqrteq_f32(v71);
      v77 = vbicq_s8(vmulq_f32(v68, v75), v73);
      LANES128(v77).n128_u32[3] = 0;
      v78 = vmulq_f32(v76, vrsqrtsq_f32(v76, vmulq_f32(v71, v76)));
      v79 = vbicq_s8(
          vmulq_f32(v70,
                    vmulq_f32(v78, vrsqrtsq_f32(v78, vmulq_f32(v71, v78)))),
          vceqzq_f32(v71));
      LANES128(v79).n128_u32[3] = 0;
      v80 = vaddq_f32(v77, v79);
      v81 = vmulq_f32(v80, v80);
      LANES128(v81).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v81, v81, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
              .n64_u64[0];
      LANES128(v81).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v81).n128_f32[0] != 0x0.0p+0f) {
        v82 = vmulq_f32(v77, v79);
        LANES128(v82).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v82, v82, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0])))
                .n64_u64[0];
        v83 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0])))
                  .n64_f32[0];
        if (v83 > LANES128(v40).n128_f32[0]) {
          LOBYTE(v56) = 0;
        }
        if ((v56 & 1) == 0) {
          LANES128(v81).n128_u64[1] = LANES128(v81).n128_u64[0];
          v56 = 1;
          v88 = vrsqrteq_f32(v81);
          v89 = vmulq_f32(v88, vrsqrtsq_f32(v88, vmulq_f32(v81, v88)));
          v40 = vbicq_s8(
              vmulq_f32(v80,
                        vmulq_f32(v89, vrsqrtsq_f32(v89, vmulq_f32(v81, v89)))),
              vceqzq_f32(v81));
          v38 = LANES128(v40).n128_u32[2];
          LANES128(v25).n128_u64[0] = LANES128(v40).n128_u64[0];
          v37 = LANES128(v40).n128_u32[1];
          LANES128(v25).n128_u64[1] = LANES128(v40).n128_u32[2];
          LANES128(v40).n128_f32[0] = v83;
          v110 = (__int128)v25;
          if (LANES64(v13).n64_f32[0] == 0x0.0p+0f) {
            goto LABEL_26;
          }
          goto LABEL_19;
        }
        v56 = 1;
      }
    }
  }
  if (LANES64(v13).n64_f32[0] == 0x0.0p+0f) {
    goto LABEL_26;
  }
LABEL_19:
  if (v56 != 0) {
    v84 = vmulq_f32(v7, v25);
    LANES128(v84).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v84, v84, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0])))
            .n64_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v84).n128_f32[0] < 0x0.0p+0f) {
      v25 = vnegq_f32(v25);
      v110 = (__int128)v25;
    }
    PSEUDO_LOW_LANE128(v84, n128_u32, 1065336439);
    v85 = &v110;
    v86 = vcgeq_f32(v40, v84);
    if (LANES128(v40).n128_f32[0] >= 0x1.ff7cee0000000p-1f) {
      v85 = (__int128*)&v111;
    }
    v87 = *((_DWORD*)v85 + 1);
    v38 = *((_DWORD*)v85 + 2);
    *(_DWORD*)a5 = LANES128_OF(vbslq_s8(v86, v7, v25)).n128_u32[0];
    a5[1] = v87;
    goto LABEL_30;
  }
LABEL_26:
  if (v56 != 0) {
    *(_DWORD*)a5 = LANES128(v25).n128_u32[0];
    a5[1] = v37;
  LABEL_30:
    v90 = *(_OWORD*)a5;
    *((_QWORD*)&v90 + 1) = v38;
    *(_OWORD*)a5 = v90;
    return 1;
  }
  if (LANES64(v13).n64_f32[0] != 0x0.0p+0f) {
    v38 = v19;
    *(_DWORD*)a5 = LANES128(v7).n128_u32[0];
    a5[1] = v18;
    goto LABEL_30;
  }
  return 0;
}

unsigned __int64 game_13e51e0(__int64 a1, __int64* a2, unsigned __int8 a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  _QWORD* v58;
  unsigned __int64 v59;
  __int64 v60;

  if (a3 == 8) {
    v3 = 0;
    v4 = *a2;
    if (*a2 == 0) {
      goto LABEL_124;
    }
  }
  else {
    v3 = *(char*)(a1 + a3 + 32);
    v4 = *a2;
    if (*a2 == 0) {
      goto LABEL_124;
    }
  }
  v5 = *(_QWORD*)(v4 + 288);
  if (v5 == 0) {
    goto LABEL_124;
  }
  v8 = GameRoutine_975940(v5);
  if (v8 == 0) {
    goto LABEL_124;
  }
  v9 = **(_QWORD**)(a1 + 24);
  if (v9 == 0 ||
      (v10 = *(unsigned __int16*)(v9 + 16)) >= *(unsigned __int16*)(v8 + 192) ||
      (unsigned int)((v11 = *(unsigned __int8*)(*(_QWORD*)(v8 + 200) + v10)) -
                     6) <= 0xFFFFFFFD) {
    v11 = *(unsigned __int8*)(v8 + a3 + 175);
  }
  v12 = 0;
  if (v11 <= 2) {
    if (v11 != 0) {
      if (v11 == 1) {
        v31 = game_HashString((__int64)&GameData_1afe48c);
        v12 = 0;
        if (v31 != 0 && game_GameModeData_instance_ != 0) {
          v32 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v33 = v32[2];
          if (v33 != 0 && v32[4] != 0) {
            v35 = v33 - 1;
            if ((v33 & (v33 - 1)) != 0) {
              v36 = v31;
              if (v31 >= v33) {
                v36 = v31 % v33;
              }
            }
            else {
              v36 = v35 & v31;
            }
            v44 = *(_QWORD**)(v32[1] + 8 * v36);
            if (v44 != nullptr) {
              v38 = (_QWORD*)*v44;
              if (v38 != nullptr) {
                if ((v33 & v35) == 0) {
                  while (1) {
                    v46 = v38[1];
                    if (v31 == v46) {
                      if (v38[2] == v31) {
                        goto LABEL_122;
                      }
                    }
                    else if ((v46 & v35) != v36) {
                      goto LABEL_124;
                    }
                    v38 = (_QWORD*)*v38;
                    v12 = 0;
                    if (v38 == nullptr) {
                      goto LABEL_125;
                    }
                  }
                }
                while (1) {
                  v45 = v38[1];
                  if (v31 == v45) {
                    if (v38[2] == v31) {
                      goto LABEL_122;
                    }
                  }
                  else {
                    if (v45 >= v33) {
                      v45 %= v33;
                    }
                    if (v45 != v36) {
                      goto LABEL_124;
                    }
                  }
                  v38 = (_QWORD*)*v38;
                  v12 = 0;
                  if (v38 == nullptr) {
                    goto LABEL_125;
                  }
                }
              }
            }
          }
          goto LABEL_124;
        }
      }
      else {
        v13 = game_HashString((__int64)&GameData_1afa962);
        v12 = 0;
        if (v13 != 0 && game_GameModeData_instance_ != 0) {
          v14 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v12 = 0;
          v15 = v14[2];
          if (v15 != 0 && v14[4] != 0) {
            v16 = v15 - 1;
            if ((v15 & (v15 - 1)) != 0) {
              v17 = v13;
              if (v13 >= v15) {
                v17 = v13 % v15;
              }
            }
            else {
              v17 = v16 & v13;
            }
            v47 = *(_QWORD**)(v14[1] + 8 * v17);
            if (v47 != nullptr) {
              v38 = (_QWORD*)*v47;
              if (v38 != nullptr) {
                if ((v15 & v16) == 0) {
                  while (1) {
                    v49 = v38[1];
                    if (v13 == v49) {
                      if (v38[2] == v13) {
                        goto LABEL_122;
                      }
                    }
                    else if ((v49 & v16) != v17) {
                      goto LABEL_124;
                    }
                    v38 = (_QWORD*)*v38;
                    v12 = 0;
                    if (v38 == nullptr) {
                      goto LABEL_125;
                    }
                  }
                }
                while (1) {
                  v48 = v38[1];
                  if (v13 == v48) {
                    if (v38[2] == v13) {
                      goto LABEL_122;
                    }
                  }
                  else {
                    if (v48 >= v15) {
                      v48 %= v15;
                    }
                    if (v48 != v17) {
                      goto LABEL_124;
                    }
                  }
                  v38 = (_QWORD*)*v38;
                  v12 = 0;
                  if (v38 == nullptr) {
                    goto LABEL_125;
                  }
                }
              }
            }
            goto LABEL_124;
          }
        }
      }
      goto LABEL_125;
    }
  LABEL_36:
    v25 = game_HashString((__int64)&GameData_1adf907);
    v12 = 0;
    if (v25 != 0 && game_GameModeData_instance_ != 0) {
      v26 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v27 = v26[2];
      if (v27 != 0 && v26[4] != 0) {
        v29 = v27 - 1;
        if ((v27 & (v27 - 1)) != 0) {
          v30 = v25;
          if (v25 >= v27) {
            v30 = v25 % v27;
          }
        }
        else {
          v30 = v29 & v25;
        }
        v37 = *(_QWORD**)(v26[1] + 8 * v30);
        if (v37 != nullptr) {
          v38 = (_QWORD*)*v37;
          if (v38 != nullptr) {
            if ((v27 & v29) == 0) {
              while (1) {
                v40 = v38[1];
                if (v25 == v40) {
                  if (v38[2] == v25) {
                    goto LABEL_122;
                  }
                }
                else if ((v40 & v29) != v30) {
                  goto LABEL_124;
                }
                v38 = (_QWORD*)*v38;
                v12 = 0;
                if (v38 == nullptr) {
                  goto LABEL_125;
                }
              }
            }
            while (1) {
              v39 = v38[1];
              if (v25 == v39) {
                if (v38[2] == v25) {
                  goto LABEL_122;
                }
              }
              else {
                if (v39 >= v27) {
                  v39 %= v27;
                }
                if (v39 != v30) {
                  goto LABEL_124;
                }
              }
              v38 = (_QWORD*)*v38;
              v12 = 0;
              if (v38 == nullptr) {
                goto LABEL_125;
              }
            }
          }
        }
      }
      goto LABEL_124;
    }
    goto LABEL_125;
  }
  if (v11 != 3 && v11 != 5) {
    if (v11 != 4) {
      goto LABEL_125;
    }
    goto LABEL_36;
  }
  v19 = game_HashString((__int64)&GameData_1ac8689);
  v12 = 0;
  if (v19 != 0 && game_GameModeData_instance_ != 0) {
    v20 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v21 = v20[2];
    if (v21 == 0 || v20[4] == 0) {
      goto LABEL_124;
    }
    v23 = v21 - 1;
    if ((v21 & (v21 - 1)) != 0) {
      v24 = v19;
      if (v19 >= v21) {
        v24 = v19 % v21;
      }
    }
    else {
      v24 = v23 & v19;
    }
    v41 = *(_QWORD**)(v20[1] + 8 * v24);
    if (v41 == nullptr) {
      goto LABEL_124;
    }
    v38 = (_QWORD*)*v41;
    if (v38 == nullptr) {
      goto LABEL_124;
    }
    if ((v21 & v23) == 0) {
      while (1) {
        v43 = v38[1];
        if (v19 == v43) {
          if (v38[2] == v19) {
            goto LABEL_122;
          }
        }
        else if ((v43 & v23) != v24) {
          goto LABEL_124;
        }
        v38 = (_QWORD*)*v38;
        v12 = 0;
        if (v38 == nullptr) {
          goto LABEL_125;
        }
      }
    }
    do {
      v42 = v38[1];
      if (v19 == v42) {
        if (v38[2] == v19) {
        LABEL_122:
          v50 = v38[3];
          if (v50 != 0) {
            v12 = *(unsigned int*)(v50 + 32);
            break;
          }
        LABEL_124:
          v12 = 0;
          break;
        }
      }
      else {
        if (v42 >= v21) {
          v42 %= v21;
        }
        if (v42 != v24) {
          goto LABEL_124;
        }
      }
      v38 = (_QWORD*)*v38;
      v12 = 0;
    } while (v38 != nullptr);
  }
LABEL_125:
  if ((int)(v12 + v3) < 100) {
    v51 = game_HashString((__int64)&GameData_1af69ec);
    if (v51 != 0 && game_GameModeData_instance_ != 0) {
      v52 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v53 = v52[2];
      if (v53 != 0 && v52[4] != 0) {
        v55 = v53 - 1;
        if ((v53 & (v53 - 1)) != 0) {
          v56 = v51;
          if (v51 >= v53) {
            v56 = v51 % v53;
          }
        }
        else {
          v56 = v55 & v51;
        }
        v57 = *(_QWORD**)(v52[1] + 8 * v56);
        if (v57 != nullptr) {
          v58 = (_QWORD*)*v57;
          if (v58 != nullptr) {
            if ((v53 & v55) == 0) {
              while (1) {
                v60 = v58[1];
                if (v51 == v60) {
                  if (v58[2] == v51) {
                    return v3 | (unsigned __int64)(v12 << 32);
                  }
                }
                else if ((v60 & v55) != v56) {
                  return v3 | (unsigned __int64)(v12 << 32);
                }
                v58 = (_QWORD*)*v58;
                if (v58 == nullptr) {
                  return v3 | (unsigned __int64)(v12 << 32);
                }
              }
            }
            do {
              v59 = v58[1];
              if (v51 == v59) {
                if (v58[2] == v51) {
                  return v3 | (unsigned __int64)(v12 << 32);
                }
              }
              else {
                if (v59 >= v53) {
                  v59 %= v53;
                }
                if (v59 != v56) {
                  return v3 | (unsigned __int64)(v12 << 32);
                }
              }
              v58 = (_QWORD*)*v58;
            } while (v58 != nullptr);
          }
        }
      }
    }
  }
  return v3 | (unsigned __int64)(v12 << 32);
}

__int64 game_194bec0(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                     char a5)
{

#pragma clang fp contract(off)
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  float v52;
  float v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  float v57;
  __int64* v58;
  __int64 v59;
  __int64* v60;
  float v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  float v66;
  float v67;
  __int64 v68;
  float v69;
  __int64* v70;
  bool v71;
  bool v72;
  float v73;
  __int64* v74;
  float v75;
  unsigned __int64 v76;
  float v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  float v81;
  __int64 v82;
  __int64 v83;
  float v84;
  float v85;
  __int64 v86;
  float v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  float v93;
  float v94;
  __int64* v95;
  __int64* v96;
  __int64 v97;
  float v98;
  float v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  bool v104;
  __int64 v105;
  __int64* v106;
  __int64* v107;
  __int64 v108;
  float v109;
  __int64 v110;
  __int64 v111;
  char* v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  bool v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64* v119;
  __int64 v120;
  float v121;
  float v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64* v128;
  __int64* v129;
  __int64* v130;
  __int64 v131;
  __int64* v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64* v136;
  __int64 v137;
  __int64* v138;
  __int64 v139;
  float v140;
  float v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64* v147;
  __int64 v148;
  float v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  float v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64* v159;
  __int64* v160;
  __int64 v161;

  v9 = (__int64*)result;
LABEL_2:
  v10 = a2 - 1;
  v11 = v9;
  v159 = a2 - 3;
  v160 = a2 - 2;
  while (1) {
    v9 = v11;
    v12 = a2 - v11;
    if (v12 <= 2) {
      if ((unsigned __int64)v12 < 2) {
        return result;
      }
      if (v12 == 2) {
        if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) >=
            *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
          return result;
        }
        {
          v89 = *v10;
          __asm__ volatile("" ::"r"(v89));
        }
        {
          v90 = *v11;
          __asm__ volatile("" ::"r"(v90));
        }
        goto LABEL_112;
      }
      goto LABEL_10;
    }
    if (v12 == 3) {
      break;
    }
    if (v12 == 4) {
      v95 = v11 + 1;
      v96 = v11 + 2;
      {
        v97 = **(_QWORD**)(a3 + 8);
        __asm__ volatile("" ::"r"(v97));
      }
      {
        v98 = *(float*)((char*)v11 + v97 + 8);
        __asm__ volatile("" ::"w"(v98));
      }
      {
        v99 = *(float*)((char*)v11 + v97 + 16);
        __asm__ volatile("" ::"w"(v99));
      }
      if (v98 >= *(float*)((char*)v11 + v97)) {
        if (v99 < v98) {
          {
            v145 = v11[1];
            __asm__ volatile("" ::"r"(v145));
          }
          {
            v144 = v11[2];
            __asm__ volatile("" ::"r"(v144));
          }
          v11[1] = v144;
          v11[2] = v145;
          if (*(float*)((char*)v95 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
            {
              v146 = *v11;
              __asm__ volatile("" ::"r"(v146));
            }
            *v11 = v144;
            v11[1] = v146;
          }
        }
      }
      else {
        {
          v100 = *v11;
          __asm__ volatile("" ::"r"(v100));
        }
        if (v99 >= v98) {
          *v11 = v11[1];
          v11[1] = v100;
          if (*(float*)((char*)v96 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v95 + **(_QWORD**)(a3 + 8))) {
            {
              v154 = *v96;
              __asm__ volatile("" ::"r"(v154));
            }
            *v96 = v100;
            *v95 = v154;
          }
        }
        else {
          {
            v101 = v11[2];
            __asm__ volatile("" ::"r"(v101));
          }
          v11[2] = v100;
          *v11 = v101;
        }
      }
      if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <
          *(float*)((char*)v96 + **(_QWORD**)(a3 + 8))) {
        {
          v155 = *v96;
          __asm__ volatile("" ::"r"(v155));
        }
        *v96 = *v10;
        *v10 = v155;
        if (*(float*)((char*)v96 + **(_QWORD**)(a3 + 8)) <
            *(float*)((char*)v95 + **(_QWORD**)(a3 + 8))) {
          {
            v157 = v11[1];
            __asm__ volatile("" ::"r"(v157));
          }
          {
            v156 = v11[2];
            __asm__ volatile("" ::"r"(v156));
          }
          v11[1] = v156;
          v11[2] = v157;
          if (*(float*)((char*)v95 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
            {
              v158 = *v11;
              __asm__ volatile("" ::"r"(v158));
            }
            *v11 = v156;
            v11[1] = v158;
          }
        }
      }
      return result;
    }
    if (v12 == 5) {
      return (__int64)GameRoutine_194cb90(v11, v11 + 1, v11 + 2, v11 + 3,
                                          a2 - 1, a3);
    }
  LABEL_10:
    if (v12 <= 23) {
      v102 = v11 + 1;
      v104 = v11 == a2 || v102 == a2;
      if ((a5 & 1) != 0) {
        if (!v104) {
          v105 = 0;
          v106 = v11;
          do {
            {
              v108 = **(_QWORD**)(a3 + 8);
              __asm__ volatile("" ::"r"(v108));
            }
            {
              v109 = *(float*)((char*)v106 + v108);
              __asm__ volatile("" ::"w"(v109));
            }
            v106 = v102;
            if (*(float*)((char*)v102 + v108) < v109) {
              {
                v110 = *v102;
                __asm__ volatile("" ::"r"(v110));
              }
              v111 = v105;
              {
                v161 = *v106;
                __asm__ volatile("" ::"r"(v161));
              }
              do {
                v112 = (char*)v11 + v111;
                *(__int64*)((char*)v11 + v111 + 8) =
                    *(__int64*)((char*)v11 + v111);
                if (v111 == 0) {
                  v107 = v11;
                  goto LABEL_126;
                }
                v111 -= 8;
              } while (*(float*)((char*)&v161 + **(_QWORD**)(a3 + 8)) <
                       *(float*)&v112[**(_QWORD**)(a3 + 8) - 8]);
              v107 = (__int64*)((char*)v11 + v111 + 8);
            LABEL_126:
              *v107 = v110;
            }
            v102 = v106 + 1;
            v105 += 8;
          } while (v106 + 1 != a2);
        }
      }
      else if (!v104) {
        v147 = v11 - 1;
        do {
          {
            v148 = **(_QWORD**)(a3 + 8);
            __asm__ volatile("" ::"r"(v148));
          }
          {
            v149 = *(float*)((char*)v9 + v148);
            __asm__ volatile("" ::"w"(v149));
          }
          v9 = v102;
          if (*(float*)((char*)v102 + v148) < v149) {
            {
              v150 = *v102;
              __asm__ volatile("" ::"r"(v150));
            }
            v151 = v147;
            {
              v161 = *v9;
              __asm__ volatile("" ::"r"(v161));
            }
            do {
              v151[2] = v151[1];
              {
                v152 = **(_QWORD**)(a3 + 8);
                __asm__ volatile("" ::"r"(v152));
              }
              {
                v153 = *(float*)((char*)v151-- + v152);
                __asm__ volatile("" ::"w"(v153));
              }
            } while (*(float*)((char*)&v161 + v152) < v153);
            v151[2] = v150;
          }
          v102 = v9 + 1;
          ++v147;
        } while (v9 + 1 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v11 != a2) {
        v113 = (unsigned __int64)(v12 - 2) >> 1;
        v114 = v113;
        do {
          if (v113 >= v114) {
            v116 = (2 * (v114 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            {
              v117 = &v11[v116];
              __asm__ volatile("" ::"r"(v117));
            }
            if ((__int64)(2 * v114 + 2) >= v12) {
              {
                v118 = **(_QWORD**)(a3 + 8);
                __asm__ volatile("" ::"r"(v118));
              }
            }
            else {
              {
                v118 = **(_QWORD**)(a3 + 8);
                __asm__ volatile("" ::"r"(v118));
              }
              if (*(float*)((char*)v117 + v118) <
                  *(float*)((char*)v117 + v118 + 8)) {
                ++v117;
                v116 = 2 * v114 + 2;
              }
            }
            {
              v119 = &v11[v114];
              __asm__ volatile("" ::"r"(v119));
            }
            if (*(float*)((char*)v117 + v118) >=
                *(float*)((char*)v119 + v118)) {
              {
                v120 = *v119;
                __asm__ volatile("" ::"r"(v120));
              }
              {
                v161 = *v119;
                __asm__ volatile("" ::"r"(v161));
              }
              do {
                v123 = v117;
                *v119 = *v117;
                if ((__int64)v113 < v116) {
                  break;
                }
                v124 = 2 * v116 + 2;
                v116 = (2 * (v116 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                {
                  v117 = &v11[v116];
                  __asm__ volatile("" ::"r"(v117));
                }
                {
                  v125 = **(_QWORD**)(a3 + 8);
                  __asm__ volatile("" ::"r"(v125));
                }
                if (v124 < v12 && *(float*)((char*)v117 + v125) <
                                      *(float*)((char*)v117 + v125 + 8)) {
                  ++v117;
                  v116 = v124;
                }
                {
                  v121 = *(float*)((char*)v117 + v125);
                  __asm__ volatile("" ::"w"(v121));
                }
                {
                  v122 = *(float*)((char*)&v161 + v125);
                  __asm__ volatile("" ::"w"(v122));
                }
                v119 = v123;
              } while (v121 >= v122);
              *v123 = v120;
            }
          }
          v115 = (__int64)v114-- <= 0;
        } while (!v115);
        do {
          {
            v126 = *v11;
            __asm__ volatile("" ::"r"(v126));
          }
          v127 = 0;
          v128 = v11;
          do {
            {
              v129 = &v128[v127];
              __asm__ volatile("" ::"r"(v129));
            }
            v130 = v128;
            v128 = v129 + 1;
            v131 = 2 * v127 + 2;
            v127 = (2 * v127) | 1;
            if (v131 < v12) {
              v132 = v129 + 2;
              if (*(float*)((char*)v128 + **(_QWORD**)(a3 + 8)) <
                  *(float*)((char*)v132 + **(_QWORD**)(a3 + 8))) {
                v128 = v132;
                v127 = v131;
              }
            }
            *v130 = *v128;
          } while (v127 <= (__int64)((unsigned __int64)(v12 - 2) >> 1));
          if (v128 == --a2) {
            *v128 = v126;
          }
          else {
            *v128 = *a2;
            *a2 = v126;
            v133 = ((char*)v128 - (char*)v11 + 8) >> 3;
            v115 = v133 < 2;
            v134 = v133 - 2;
            if (!v115) {
              v135 = v134 >> 1;
              {
                v136 = &v11[v135];
                __asm__ volatile("" ::"r"(v136));
              }
              if (*(float*)((char*)v136 + **(_QWORD**)(a3 + 8)) <
                  *(float*)((char*)v128 + **(_QWORD**)(a3 + 8))) {
                {
                  v137 = *v128;
                  __asm__ volatile("" ::"r"(v137));
                }
                {
                  v161 = *v128;
                  __asm__ volatile("" ::"r"(v161));
                }
                do {
                  v138 = v136;
                  *v128 = *v136;
                  if (v135 == 0) {
                    break;
                  }
                  v135 = (v135 - 1) >> 1;
                  {
                    v136 = &v11[v135];
                    __asm__ volatile("" ::"r"(v136));
                  }
                  {
                    v139 = **(_QWORD**)(a3 + 8);
                    __asm__ volatile("" ::"r"(v139));
                  }
                  {
                    v140 = *(float*)((char*)v136 + v139);
                    __asm__ volatile("" ::"w"(v140));
                  }
                  {
                    v141 = *(float*)((char*)&v161 + v139);
                    __asm__ volatile("" ::"w"(v141));
                  }
                  v128 = v138;
                } while (v140 < v141);
                *v138 = v137;
              }
            }
          }
          v115 = v12-- <= 2;
        } while (!v115);
      }
      return result;
    }
    {
      v13 = &v11[(unsigned __int64)v12 >> 1];
      __asm__ volatile("" ::"r"(v13));
    }
    {
      v14 = **(_QWORD**)(a3 + 8);
      __asm__ volatile("" ::"r"(v14));
    }
    {
      v15 = *(float*)((char*)v10 + v14);
      __asm__ volatile("" ::"w"(v15));
    }
    if ((unsigned __int64)v12 >= 0x81) {
      {
        v16 = *(float*)((char*)v13 + v14);
        __asm__ volatile("" ::"w"(v16));
      }
      if (v16 >= *(float*)((char*)v11 + v14)) {
        if (v15 < v16) {
          {
            v20 = *v13;
            __asm__ volatile("" ::"r"(v20));
          }
          *v13 = *v10;
          *v10 = v20;
          if (*(float*)((char*)v13 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
            {
              v21 = *v11;
              __asm__ volatile("" ::"r"(v21));
            }
            *v11 = *v13;
            *v13 = v21;
          }
        }
      }
      else {
        {
          v17 = *v11;
          __asm__ volatile("" ::"r"(v17));
        }
        if (v15 < v16) {
          *v11 = *v10;
          goto LABEL_27;
        }
        *v11 = *v13;
        *v13 = v17;
        if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <
            *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
          *v13 = *v10;
        LABEL_27:
          *v10 = v17;
        }
      }
      v24 = v11 + 1;
      v25 = v13 - 1;
      {
        v26 = **(_QWORD**)(a3 + 8);
        __asm__ volatile("" ::"r"(v26));
      }
      {
        v27 = *(float*)((char*)v13 + v26 - 8);
        __asm__ volatile("" ::"w"(v27));
      }
      {
        v28 = *(float*)((char*)v160 + v26);
        __asm__ volatile("" ::"w"(v28));
      }
      if (v27 >= *(float*)((char*)v11 + v26 + 8)) {
        if (v28 < v27) {
          {
            v30 = *v25;
            __asm__ volatile("" ::"r"(v30));
          }
          *v25 = *v160;
          *v160 = v30;
          if (*(float*)((char*)v25 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v24 + **(_QWORD**)(a3 + 8))) {
            {
              v31 = *v24;
              __asm__ volatile("" ::"r"(v31));
            }
            *v24 = *v25;
            *v25 = v31;
          }
        }
      }
      else {
        {
          v29 = *v24;
          __asm__ volatile("" ::"r"(v29));
        }
        if (v28 >= v27) {
          *v24 = *v25;
          *v25 = v29;
          if (*(float*)((char*)v160 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v25 + **(_QWORD**)(a3 + 8))) {
            *v25 = *v160;
            *v160 = v29;
          }
        }
        else {
          *v24 = *v160;
          *v160 = v29;
        }
      }
      v32 = v11 + 2;
      v33 = v13 + 1;
      {
        v34 = **(_QWORD**)(a3 + 8);
        __asm__ volatile("" ::"r"(v34));
      }
      {
        v35 = *(float*)((char*)v13 + v34 + 8);
        __asm__ volatile("" ::"w"(v35));
      }
      {
        v36 = *(float*)((char*)v159 + v34);
        __asm__ volatile("" ::"w"(v36));
      }
      if (v35 >= *(float*)((char*)v11 + v34 + 16)) {
        if (v36 < v35) {
          {
            v38 = *v33;
            __asm__ volatile("" ::"r"(v38));
          }
          *v33 = *v159;
          *v159 = v38;
          if (*(float*)((char*)v33 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v32 + **(_QWORD**)(a3 + 8))) {
            {
              v39 = *v32;
              __asm__ volatile("" ::"r"(v39));
            }
            *v32 = *v33;
            *v33 = v39;
          }
        }
      }
      else {
        {
          v37 = *v32;
          __asm__ volatile("" ::"r"(v37));
        }
        if (v36 >= v35) {
          *v32 = *v33;
          *v33 = v37;
          if (*(float*)((char*)v159 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v33 + **(_QWORD**)(a3 + 8))) {
            *v33 = *v159;
            *v159 = v37;
          }
        }
        else {
          *v32 = *v159;
          *v159 = v37;
        }
      }
      {
        v40 = **(_QWORD**)(a3 + 8);
        __asm__ volatile("" ::"r"(v40));
      }
      {
        v41 = *(float*)((char*)v13 + v40);
        __asm__ volatile("" ::"w"(v41));
      }
      {
        v42 = *(float*)((char*)v33 + v40);
        __asm__ volatile("" ::"w"(v42));
      }
      if (v41 >= *(float*)((char*)v25 + v40)) {
        {
          v43 = *v13;
          __asm__ volatile("" ::"r"(v43));
        }
        if (v42 < v41) {
          {
            v45 = v13[1];
            __asm__ volatile("" ::"r"(v45));
          }
          *v13 = v45;
          v13[1] = v43;
          if (*(float*)((char*)v13 + **(_QWORD**)(a3 + 8)) >=
              *(float*)((char*)v25 + **(_QWORD**)(a3 + 8))) {
            v43 = v45;
          }
          else {
            {
              v43 = *(v13 - 1);
              __asm__ volatile("" ::"r"(v43));
            }
            *(v13 - 1) = v45;
            *v13 = v43;
          }
        }
      }
      else {
        {
          v43 = *v25;
          __asm__ volatile("" ::"r"(v43));
        }
        if (v42 >= v41) {
          *(v13 - 1) = *v13;
          *v13 = v43;
          if (*(float*)((char*)v33 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
            {
              v46 = v13[1];
              __asm__ volatile("" ::"r"(v46));
            }
            *v13 = v46;
            v13[1] = v43;
            v43 = v46;
          }
        }
        else {
          {
            v44 = v13[1];
            __asm__ volatile("" ::"r"(v44));
          }
          v13[1] = v43;
          {
            v43 = *v13;
            __asm__ volatile("" ::"r"(v43));
          }
          *(v13 - 1) = v44;
        }
      }
      {
        v47 = *v11;
        __asm__ volatile("" ::"r"(v47));
      }
      *v11 = v43;
      *v13 = v47;
      goto LABEL_57;
    }
    {
      v18 = *(float*)((char*)v11 + v14);
      __asm__ volatile("" ::"w"(v18));
    }
    if (v18 >= *(float*)((char*)v13 + v14)) {
      if (v15 < v18) {
        {
          v22 = *v11;
          __asm__ volatile("" ::"r"(v22));
        }
        *v11 = *v10;
        *v10 = v22;
        if (*(float*)((char*)v11 + **(_QWORD**)(a3 + 8)) <
            *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
          {
            v23 = *v13;
            __asm__ volatile("" ::"r"(v23));
          }
          *v13 = *v11;
          *v11 = v23;
        }
      }
      goto LABEL_57;
    }
    {
      v19 = *v13;
      __asm__ volatile("" ::"r"(v19));
    }
    if (v15 < v18) {
      *v13 = *v10;
    LABEL_36:
      *v10 = v19;
      goto LABEL_57;
    }
    *v13 = *v11;
    *v11 = v19;
    if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <
        *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
      *v11 = *v10;
      goto LABEL_36;
    }
  LABEL_57:
    --a4;
    {
      v48 = **(_QWORD**)(a3 + 8);
      __asm__ volatile("" ::"r"(v48));
    }
    if ((a5 & 1) != 0) {
      {
        v49 = *v11;
        __asm__ volatile("" ::"r"(v49));
      }
    LABEL_60:
      v161 = v49;
      v50 = v48 + 8;
      v51 = 0;
      {
        v52 = *(float*)((char*)&v161 + v48);
        __asm__ volatile("" ::"w"(v52));
      }
      do {
        {
          v53 = *(float*)((char*)v11 + v50);
          __asm__ volatile("" ::"w"(v53));
        }
        v51 -= 8LL;
        v50 += 8;
      } while (v53 < v52);
      {
        v54 = &v11[v51 / 0xFFFFFFFFFFFFFFF8LL];
        __asm__ volatile("" ::"r"(v54));
      }
      if (v51 == -8) {
        v59 = v48 - 8;
        v60 = a2;
        while (v54 < v60) {
          {
            v61 = *(float*)((char*)v60 + v59);
            __asm__ volatile("" ::"w"(v61));
          }
          v58 = --v60;
          if (v61 < v52) {
            goto LABEL_69;
          }
        }
        v58 = v60;
      LABEL_79:
        v70 = v54 - 1;
        if (v11 == v54 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v11 = *v70;
        goto LABEL_81;
      }
      v55 = v48 - 8;
      v56 = a2;
      do {
        {
          v57 = *(float*)((char*)v56 + v55);
          __asm__ volatile("" ::"w"(v57));
        }
        v58 = --v56;
      } while (v57 >= v52);
    LABEL_69:
      if (v54 >= v58) {
        goto LABEL_79;
      }
      v62 = v54;
      v63 = v58;
      do {
        {
          v64 = *v62;
          __asm__ volatile("" ::"r"(v64));
        }
        *v62 = *v63;
        *v63 = v64;
        {
          v65 = **(_QWORD**)(a3 + 8);
          __asm__ volatile("" ::"r"(v65));
        }
        {
          v66 = *(float*)((char*)&v161 + v65);
          __asm__ volatile("" ::"w"(v66));
        }
        do {
          v67 = *(float*)((char*)v62++ + v65 + 8);
          __asm__ volatile("" ::"w"(v67));
        } while (v67 < v66);
        v68 = v65 - 8;
        do {
          v69 = *(float*)((char*)v63-- + v68);
          __asm__ volatile("" ::"w"(v69));
        } while (v69 >= v66);
      } while (v62 < v63);
      v70 = v62 - 1;
      if (v11 != v62 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v70 = v49;
      if (v54 < v58) {
        goto LABEL_84;
      }
      v71 = gfx_194cd60(v11, v70, a3);
      v11 = v70 + 1;
      v72 = v71;
      result = ((__int64 (*)(__int64*, __int64*, __int64))gfx_194cd60)(v70 + 1,
                                                                       a2, a3);
      if ((result & 1) != 0) {
        a2 = v70;
        if (!v72) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v72) {
      LABEL_84:
        result = game_194bec0((__int64)v9, v70, a3, a4, a5 & 1);
        a5 = 0;
        v11 = v70 + 1;
      }
    }
    else {
      {
        v49 = *v11;
        __asm__ volatile("" ::"r"(v49));
      }
      if (*(float*)((char*)v11 + v48 - 8) < *(float*)((char*)v11 + v48)) {
        goto LABEL_60;
      }
      {
        v161 = *v11;
        __asm__ volatile("" ::"r"(v161));
      }
      {
        v73 = *(float*)((char*)&v161 + v48);
        __asm__ volatile("" ::"w"(v73));
      }
      if (v73 >= *(float*)((char*)v10 + v48)) {
        v76 = (unsigned __int64)(v11 + 1);
        do {
          v11 = (__int64*)v76;
          if (v76 >= (unsigned __int64)a2) {
            break;
          }
          {
            v77 = *(float*)(v76 + v48);
            __asm__ volatile("" ::"w"(v77));
          }
          v76 += 8LL;
        } while (v73 >= v77);
      }
      else {
        v74 = v11;
        do {
          {
            v75 = *(float*)((char*)v74 + v48 + 8);
            __asm__ volatile("" ::"w"(v75));
          }
          v11 = ++v74;
        } while (v73 >= v75);
      }
      v78 = a2;
      if (v11 < a2) {
        v79 = v48 - 8;
        v80 = a2;
        do {
          {
            v81 = *(float*)((char*)v80 + v79);
            __asm__ volatile("" ::"w"(v81));
          }
          v78 = --v80;
        } while (v73 < v81);
      }
      while (v11 < v78) {
        {
          v82 = *v11;
          __asm__ volatile("" ::"r"(v82));
        }
        *v11 = *v78;
        *v78 = v82;
        {
          v83 = **(_QWORD**)(a3 + 8);
          __asm__ volatile("" ::"r"(v83));
        }
        {
          v84 = *(float*)((char*)&v161 + v83);
          __asm__ volatile("" ::"w"(v84));
        }
        do {
          v85 = *(float*)((char*)v11++ + v83 + 8);
          __asm__ volatile("" ::"w"(v85));
        } while (v84 >= v85);
        v86 = v83 - 8;
        do {
          v87 = *(float*)((char*)v78-- + v86);
          __asm__ volatile("" ::"w"(v87));
        } while (v84 < v87);
      }
      v88 = v11 - 1;
      if (v9 != v11 - 1) {
        *v9 = *v88;
      }
      a5 = 0;
      *v88 = v49;
    }
  }
  v91 = v11 + 1;
  {
    v92 = **(_QWORD**)(a3 + 8);
    __asm__ volatile("" ::"r"(v92));
  }
  {
    v93 = *(float*)((char*)v11 + v92 + 8);
    __asm__ volatile("" ::"w"(v93));
  }
  {
    v94 = *(float*)((char*)v10 + v92);
    __asm__ volatile("" ::"w"(v94));
  }
  if (v93 >= *(float*)((char*)v11 + v92)) {
    if (v94 < v93) {
      {
        v142 = v11[1];
        __asm__ volatile("" ::"r"(v142));
      }
      v11[1] = *v10;
      *v10 = v142;
      if (*(float*)((char*)v91 + **(_QWORD**)(a3 + 8)) <
          *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
        {
          v143 = *v11;
          __asm__ volatile("" ::"r"(v143));
        }
        *v11 = v11[1];
        v11[1] = v143;
      }
    }
  }
  else {
    {
      v90 = *v11;
      __asm__ volatile("" ::"r"(v90));
    }
    if (v94 < v93) {
      {
        v89 = *v10;
        __asm__ volatile("" ::"r"(v89));
      }
    LABEL_112:
      *v11 = v89;
      *v10 = v90;
      return result;
    }
    *v11 = v11[1];
    v11[1] = v90;
    if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <
        *(float*)((char*)v91 + **(_QWORD**)(a3 + 8))) {
      *v91 = *v10;
      *v10 = v90;
    }
  }
  return result;
}

#pragma GCC visibility pop
