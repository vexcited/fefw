#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_eabe20(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fee6a0[3])();
extern __int64 (*decltype_c81af0_ptr_1fee688[6])();
extern __int64 GameData_212d240;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_c8c1e0();
void game_f86460(__int64, int, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_script_ed45e0(unsigned __int8* a1, unsigned __int8* a2,
                        unsigned __int8* a3, __int64* a4);

void game_script_ed45e0(unsigned __int8* a1, unsigned __int8* a2,
                        unsigned __int8* a3, __int64* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  void (*v28)(__int64, __int64);
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64 v45[2];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v45_;
  struct {
    __int64 v50[2];
    __int64 v51;
  } v50_;
  struct {
    __int64 v52[2];
    __int64 v53;
  } v52_;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
  } v54_;
  struct {
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v57_;
  struct {
    __int64 v60;
    unsigned __int64 v61;
    __int64 v62;
  } v60_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
  } v63_;
  _QWORD v66[2];

  v4 = *a1;
  v63_.v64 = 0;
  v63_.v65 = 0;
  v60_.v62 = 0;
  v63_.v63 = 0;
  v60_.v60 = 0;
  v60_.v61 = 0;
  v57_.v58 = 0;
  v57_.v59 = 0;
  v8 = v4 >> 1;
  v9 = (v4 & 1) == 0;
  v10 = *((_QWORD*)a1 + 1);
  v11 = *((_QWORD*)a1 + 2);
  v54_.v56 = 0;
  v57_.v57 = 0;
  v54_.v54 = 0;
  v54_.v55 = 0;
  if (v9) {
    v12 = v8;
  }
  else {
    v12 = v10;
  }
  if (v9) {
    v13 = (__int64)(a1 + 1);
  }
  else {
    v13 = v11;
  }
  GameRoutine_60a060((char*)&v54_.v54, v13, v12);
  v14 = *a2;
  if ((v14 & 1) != 0) {
    v15 = *((_QWORD*)a2 + 1);
  }
  else {
    v15 = v14 >> 1;
  }
  if ((v14 & 1) != 0) {
    v16 = *((_QWORD*)a2 + 2);
  }
  else {
    v16 = (__int64)(a2 + 1);
  }
  GameRoutine_60a060((char*)&v60_.v60, v16, v15);
  v17 = *a3;
  if ((v17 & 1) != 0) {
    v18 = *((_QWORD*)a3 + 1);
  }
  else {
    v18 = v17 >> 1;
  }
  if ((v17 & 1) != 0) {
    v19 = *((_QWORD*)a3 + 2);
  }
  else {
    v19 = (__int64)(a3 + 1);
  }
  GameRoutine_60a060((char*)&v63_.v63, v19, v18);
  if (&v57_.v57 != a4) {
    GameRoutine_eabe20(&v57_.v57, *a4, a4[1], (a4[1] - *a4) >> 5);
  }
  v20 = *(_QWORD*)GameData_212d240;
  v21 = (__int64*)fw_memory_g_heap_manager_ptr;
  v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       120, 16, 0);
  if ((v54_.v54 & 1) != 0) {
    fw_text_String_CopyTerminated(v45_.v45, v54_.v56, v54_.v55);
  }
  else {
    v45_.v45[0] = v54_.v54;
    v45_.v45[1] = v54_.v55;
    v45_.v46 = v54_.v56;
  }
  v23 = v57_.v57;
  v24 = v57_.v58;
  v45_.v48 = 0;
  v45_.v49 = 0;
  v25 = v57_.v58 - v57_.v57;
  v45_.v47 = 0;
  if (v57_.v58 != v57_.v57) {
    if (v25 < 0) {
      GameRoutine_c8c1e0();
    }
    v26 = fw_memory_HeapManager_Allocate(*v21, v57_.v58 - v57_.v57, 16, 0);
    v45_.v47 = v26;
    v45_.v48 = v26;
    v45_.v49 = v26 + v25;
    do {
      *(_BYTE*)v26 = 0;
      *(_DWORD*)(v26 + 24) = -1;
      v27 = *(_DWORD*)(v23 + 24);
      if (v27 != -1) {
        v28 = (void (*)(__int64, __int64))GameData_1fee6a0[(unsigned int)v27];
        v66[0] = v26;
        v28((__int64)v66, v23);
        *(_DWORD*)(v26 + 24) = v27;
      }
      v23 += 32;
      v26 += 32;
    } while (v23 != v24);
    v45_.v48 = v26;
  }
  if ((v60_.v60 & 1) != 0) {
    fw_text_String_CopyTerminated(v50_.v50, v60_.v62, v60_.v61);
  }
  else {
    v50_.v50[0] = v60_.v60;
    v50_.v50[1] = v60_.v61;
    v50_.v51 = v60_.v62;
  }
  if ((v63_.v63 & 1) != 0) {
    fw_text_String_CopyTerminated(v52_.v52, v63_.v65, v63_.v64);
  }
  else {
    v52_.v52[0] = v63_.v63;
    v52_.v52[1] = v63_.v64;
    v52_.v53 = v63_.v65;
  }
  game_f86460(v22, 12, v45_.v45);
  (*(void (**)(__int64, __int64))(*(_QWORD*)(v20 + 8) + 24LL))(v20 + 8, v22);
  if ((v52_.v52[0] & 1) != 0 && v52_.v53 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v29, v52_.v53);
  }
  if ((v50_.v50[0] & 1) != 0 && v50_.v51 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v30, v50_.v51);
  }
  v31 = v45_.v47;
  if (v45_.v47 != 0) {
    v32 = v45_.v48;
    if (v45_.v47 == v45_.v48) {
      goto LABEL_54;
    }
    do {
      v33 = *(unsigned int*)(v32 - 8);
      v34 = v32 - 32;
      if ((_DWORD)v33 != -1) {
        ((void (*)(__int64, __int64))decltype_c81af0_ptr_1fee688[v33])(
            (__int64)v66, v32 - 32);
      }
      *(_DWORD*)(v32 - 8) = -1;
      v32 -= 32;
    } while (v34 != v31);
    v45_.v48 = v31;
    v31 = v45_.v47;
    if (v45_.v47 != 0) {
    LABEL_54:
      v35 = 128;
      if (*(_QWORD*)(*v21 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*v21 + v35, v31);
    }
  }
  if ((v45_.v45[0] & 1) != 0 && v45_.v46 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v36, v45_.v46);
  }
  if ((v63_.v63 & 1) != 0 && v63_.v65 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v37, v63_.v65);
  }
  if ((v60_.v60 & 1) != 0 && v60_.v62 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v38, v60_.v62);
  }
  v39 = v57_.v57;
  if (v57_.v57 != 0) {
    v40 = v57_.v58;
    if (v57_.v57 == v57_.v58) {
      goto LABEL_79;
    }
    do {
      v41 = *(unsigned int*)(v40 - 8);
      v42 = v40 - 32;
      if ((_DWORD)v41 != -1) {
        ((void (*)(__int64, __int64))decltype_c81af0_ptr_1fee688[v41])(
            (__int64)v66, v40 - 32);
      }
      *(_DWORD*)(v40 - 8) = -1;
      v40 -= 32;
    } while (v42 != v39);
    v57_.v58 = v39;
    v39 = v57_.v57;
    if (v57_.v57 != 0) {
    LABEL_79:
      v43 = 128;
      if (*(_QWORD*)(*v21 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*v21 + v43, v39);
    }
  }
  if ((v54_.v54 & 1) != 0 && v54_.v56 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v44, v54_.v56);
  }
}

#pragma GCC visibility pop
