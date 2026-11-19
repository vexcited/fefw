#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_579230(_QWORD* result);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
__int64 GameRoutine_576880(_QWORD);
__int64 GameRoutine_578430(__int64);
__int64 GameRoutine_606390(_QWORD);
__int64 GameRoutine_606680(_QWORD, _QWORD);
__int64 MultiArcResourceAccessor_DeletingDestructor(_QWORD*);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*ui_Layout_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_singleton_1361880(_QWORD* a1);

__int64 game_singleton_1361880(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;

  v1 = (_QWORD*)a1[300];
  *a1 = ui_Layout_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[5];
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak(v6);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, (__int64)v1);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v7 = (_QWORD*)a1[298];
  a1[298] = 0;
  if (v7 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, (__int64)v7);
  }
  v9 = a1[288];
  a1[288] = 0;
  if (v9 != 0) {
    v10 = a1[294];
    v25 = v9;
    if (v10 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 48LL))(v10, (__int64)&v25);
  }
  v11 = (_QWORD*)a1[294];
  if (v11 == a1 + 290) {
    v12 = 32;
    goto LABEL_20;
  }
  if (v11 != nullptr) {
    v12 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  if (a1[286] != 0) {
    v7 = (_QWORD*)a1[285];
    v13 = *(_QWORD**)(a1[284] + 8LL);
    *(_QWORD*)(*v7 + 8LL) = v13;
    *v13 = *v7;
    a1[286] = 0;
    if (v7 != a1 + 284) {
      do {
        v15 = (_QWORD*)v7[1];
        v16 = v7[3];
        if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v17 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v16);
          v7 = v17;
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, (__int64)v7);
        v7 = v15;
      } while (v15 != a1 + 284);
    }
  }
  GameRoutine_606680(a1 + 275, v7);
  GameRoutine_606390(a1 + 248);
  gxc_GpuMemory_Destroy_GpuMemory(a1 + 244);
  gxc_GpuMemory_Destroy_GpuMemory(a1 + 230);
  GameRoutine_578430((__int64)(a1 + 86));
  GameRoutine_576880(a1 + 32);
  GameRoutine_579230(a1 + 19);
  MultiArcResourceAccessor_DeletingDestructor(a1 + 10);
  v18 = a1[7];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    a1[8] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = a1[4];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    a1[5] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
