#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_77fcf0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_evt_11dd290(_QWORD* a1, __int64 a2);
__int64 GameRoutine_1a0b950_alt1(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD);

void game_evt_11dd290(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;

  if (a2 != 0) {
    v3 = (_QWORD*)a1[2];
    v2 = a1[3];
    if ((unsigned __int64)v3 >= v2) {
      v7 = a1[1];
      v8 = (char*)v3 - v7;
      v9 = ((__int64)v3 - v7) >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        goto LABEL_36;
      }
      v11 = v2 - v7;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          goto LABEL_37;
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = (char*)v3 - v7;
      v17 = (__int64)&v8[v14 + -8 * v9];
      *(_QWORD*)&v8[v14] = a2;
      v6 = (__int64)&v8[v14 + 8];
      GameRoutine_1a0b950_alt1(v17, v7, v16);
      a1[1] = v17;
      a1[2] = v6;
      a1[3] = v15;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v18);
      }
    }
    else {
      *v3 = a2;
      v6 = (__int64)(v3 + 1);
    }
    a1[2] = v6;
    v19 = &a1[3 * *(int*)(a2 + 56)];
    v21 = (_QWORD*)v19[5];
    v20 = v19[6];
    if ((unsigned __int64)v21 < v20) {
      *v21 = a2;
      v22 = (__int64)(v21 + 1);
    LABEL_34:
      v19[5] = v22;
      return;
    }
    v23 = v19[4];
    v24 = (char*)v21 - v23;
    v25 = ((__int64)v21 - v23) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 == 0) {
      v27 = v20 - v23;
      if (v27 >> 2 > v26) {
        v26 = v27 >> 2;
      }
      if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
        v28 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v26;
      }
      if (v28 == 0) {
        v29 = 0;
      LABEL_30:
        v30 = v29 + 8 * v28;
        v31 = (char*)v21 - v23;
        v32 = (__int64)&v24[v29 + -8 * v25];
        *(_QWORD*)&v24[v29] = a2;
        v22 = (__int64)&v24[v29 + 8];
        GameRoutine_1a0b950_alt1(v32, v23, v31);
        v19[4] = v32;
        v19[5] = v22;
        v19[6] = v30;
        if (v23 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
        }
        goto LABEL_34;
      }
      if (v28 >> 61 == 0) {
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        goto LABEL_30;
      }
    LABEL_37:
      GameRoutine_60a210();
    }
  LABEL_36:
    GameRoutine_77fcf0();
  }
}

#pragma GCC visibility pop
