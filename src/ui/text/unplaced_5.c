#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* TextBox_5664a0(_QWORD* result, int*, __int64, unsigned int);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_190af20();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_19083e0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                     _QWORD* a4);

void ui_text_19083e0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                     _QWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int64* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  _QWORD* v52;
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;

  GameRoutine_1a0ba50(a1 + 104, 0, 0x114u);
  if (a4[5] == 0 || a2 == 0 || a3 == 0) {
    return;
  }
  v52 = a4;
  v10 = 0;
  v11 = nullptr;
  v12 = 0;
  v13 = (unsigned __int8*)a2;
  while (1) {
    while (1) {
      while (1) {
        v15 = *v13;
        if (v15 <= 0xD) {
          break;
        }
        if (v15 == 14) {
          v14 = *(unsigned __int16*)(v13 + 5) + 7LL;
          v13 += v14;
          if (a3 >= v14) {
            a3 -= v14;
          }
          else {
            a3 = 0;
          }
          if (a3 == 0) {
            goto LABEL_80;
          }
        }
        else {
          if (v15 != 15) {
            goto LABEL_26;
          }
          v13 += 5;
          if (a3 >= 5) {
            a3 -= 5LL;
          }
          else {
            a3 = 0;
          }
          if (a3 == 0) {
            goto LABEL_80;
          }
        }
      }
      if (v15 != 10) {
        break;
      }
      ++v13;
      --a3;
      v16 = &v13[~a2];
      if ((unsigned __int64)v11 >= v12) {
        v18 = (unsigned __int64)&v11[-v10];
        v19 = v10;
        v20 = (__int64)&v11[-v10] >> 4;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
          goto LABEL_92;
        }
        v22 = v12 - v19;
        v23 = v19;
        v24 = (__int64)(v12 - v19) >> 3;
        if (v24 > v21) {
          v21 = v24;
        }
        if (v22 >= 0x7FFFFFFFFFFFFFF0LL) {
          v25 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v25 = v21;
        }
        if (v25 != 0) {
          if (v25 >> 60 != 0) {
            goto LABEL_93;
          }
          v26 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0);
        }
        else {
          v26 = 0;
        }
        v29 = (unsigned __int64*)(v26 + v18);
        v12 = v26 + 16 * v25;
        *v29 = a2;
        v29[1] = (unsigned __int64)v16;
        v30 = v26 + v18 - 16 * v20;
        v11 = (char*)(v26 + v18 + 16);
        GameRoutine_1a0b950(v30, v23, v18);
        if (v23 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v23);
        }
        v10 = v30;
        a2 = (unsigned __int64)v13;
        if (a3 == 0) {
          goto LABEL_80;
        }
      }
      else {
        *(_QWORD*)v11 = a2;
        *((_QWORD*)v11 + 1) = v16;
        v11 += 16;
        a2 = (unsigned __int64)v13;
        if (a3 == 0) {
          goto LABEL_80;
        }
      }
    }
    if (*v13 == 0) {
      break;
    }
  LABEL_26:
    if ((v15 & 0x80) != 0) {
      if ((v15 & 0xC0) == 0x80) {
        goto LABEL_62;
      }
      if ((v15 & 0xE0) == 0xC0 && (char)v13[1] < -64) {
        v17 = 2;
      }
      else if ((v15 & 0xF0) == 0xE0 && (char)v13[1] <= -65 &&
               (char)v13[2] < -64) {
        v17 = 3;
      }
      else {
        if ((v15 & 0xF8) != 0xF0 || (char)v13[1] > -65 || (char)v13[2] > -65 ||
            (char)v13[3] >= -64) {
        LABEL_62:
          v32 = &v13[-a2];
          if (v32 == nullptr) {
            goto LABEL_80;
          }
          if ((unsigned __int64)v11 >= v12) {
            goto LABEL_64;
          }
        LABEL_73:
          *(_QWORD*)v11 = a2;
          *((_QWORD*)v11 + 1) = v32;
          v11 += 16;
          goto LABEL_80;
        }
        v17 = 4;
      }
    }
    else {
      v17 = 1;
    }
    v13 += v17;
    v27 = a3 >= v17;
    v28 = a3 - v17;
    if (v27) {
      a3 = v28;
    }
    else {
      a3 = 0;
    }
    if (a3 == 0) {
      goto LABEL_80;
    }
  }
  v32 = &v13[-a2];
  if ((unsigned __int64)v11 < v12) {
    goto LABEL_73;
  }
LABEL_64:
  v33 = &v11[-v10];
  v34 = (__int64)&v11[-v10] >> 4;
  v35 = v34 + 1;
  if ((unsigned __int64)(v34 + 1) >> 60 != 0) {
  LABEL_92:
    GameRoutine_190af20();
  }
  if ((__int64)(v12 - v10) >> 3 > v35) {
    v35 = (__int64)(v12 - v10) >> 3;
  }
  if (v12 - v10 >= 0x7FFFFFFFFFFFFFF0LL) {
    v35 = 0xFFFFFFFFFFFFFFFLL;
  }
  if (v35 != 0) {
    if (v35 >> 60 != 0) {
    LABEL_93:
      GameRoutine_60a210();
    }
    v36 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v35, 16, 0);
  }
  else {
    v36 = 0;
  }
  v37 = &v33[v36];
  v38 = (unsigned __int64)&v11[-v10];
  *(_QWORD*)v37 = a2;
  *((_QWORD*)v37 + 1) = v32;
  v39 = (__int64)&v33[v36 + -16 * v34];
  v11 = &v33[v36 + 16];
  GameRoutine_1a0b950(v39, v10, v38);
  if (v10 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  v10);
  }
  v10 = v39;
LABEL_80:
  if ((char*)v10 != v11) {
    v41 = v10;
    do {
      v53_.v53 = 0;
      v53_.v54 = 0;
      TextBox_5664a0(v52, (int*)&v53_.v53, *(_QWORD*)v41, *(_DWORD*)(v41 + 8));
      v42 = *(int*)(a1 + 376);
      if ((int)v42 <= 15) {
        v43 = *(float*)(a1 + 104);
        v44 = (float*)(a1 + 120 + 16 * v42);
        v45 = *(float*)&v53_.v54 - *(float*)&v53_.v53;
        v47 = *(float*)(a1 + 112);
        v46 = *(float*)(a1 + 116);
        v48 = *((float*)&v53_.v54 + 1) - *((float*)&v53_.v53 + 1);
        v49 = (float)(*(float*)&v53_.v54 - *(float*)&v53_.v53) + v43;
        v50 =
            (float)(*((float*)&v53_.v54 + 1) - *((float*)&v53_.v53 + 1)) + v46;
        *v44 = v43;
        v44[1] = v46;
        v44[2] = v49;
        v44[3] = v50;
        ++*(_DWORD*)(a1 + 376);
        if ((float)(v47 - v43) < v45) {
          *(float*)(a1 + 112) = v49;
        }
        *(float*)(a1 + 116) = *(float*)(a1 + 108) +
                              (float)(v48 + (float)(v46 - *(float*)(a1 + 108)));
      }
      v41 += 16;
    } while ((char*)v41 != v11);
  }
  if (v10 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  v10);
  }
}

#pragma GCC visibility pop
