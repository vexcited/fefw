#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1243630(_QWORD* result, _QWORD*);
__int64 GameRoutine_12adb70(unsigned __int8, unsigned int);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
const char* game_HashString32(const char* result);
extern _DWORD GameData_1b01808[8];
extern _UNKNOWN* GameData_212c958;
extern __int64 (*GameData_201c9b0[])();
extern __int64 (*GameData_201ca40[])();
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 GameData_2240178;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_1242b60(__int64, __int64, unsigned int, __int64);
void PrimitiveDrawStack_f51430(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_12439b0();
void __attribute__((noreturn)) GameRoutine_60a210();
void game_map_history_anonymous_1243060(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_map_103cfe0(__int64 a1);
__int64 game_map_123f980(__int64 result);

void game_map_103cfe0(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned __int32 v6;
  unsigned int v7;
  float32x4_t v8;
  float32x4_t v9;
  __int64* v10;
  _QWORD* v11;
  float32x4_t* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  bool v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  struct {
    _QWORD v40[4];
    float32x4_t v41;
    float32x4_t v42;
    __int64 v43;
    int v44;
    char gap76_[4];
    unsigned __int64 v45;
    unsigned __int64 v46;
    unsigned __int64 v47;
    unsigned __int8 v48;
    char gap105_[7];
    unsigned __int64 v49[4];
    float32x4_t v50;
    float32x4_t v51;
    __int64 v52;
    int v53;
    char gap188_[4];
    float32x4_t v54;
    unsigned __int64 v55;
    unsigned __int8 v56;
  } f_;

  BYTE4(f_.v47) = 0;
  f_.v48 = 0;
  LOWORD(f_.v47) = 0;
  f_.v45 = 0;
  f_.v46 = 0;
  strcpy((char*)f_.v40, ",MapPanelDeployTutorial");
  v2 = *(float32x4_t*)GameData_212c958;
  f_.v43 = 0x500000000LL;
  v3 = (float32x4_t*)*GameData_212f878;
  qmemcpy(f_.v49, f_.v40, 24);
  f_.v44 = 1;
  f_.v53 = 1;
  v5 = v3[5];
  v4 = v3[6];
  f_.v54 = (__typeof__(f_.v54)){0};
  f_.v55 = f_.v47;
  v6 = LANES128(v3[89]).n128_u32[3];
  *(float*)&v7 = -LANES128(v3[89]).n128_f32[2];
  f_.v41 = vmulq_f32(v2, v5);
  f_.v42 = vmulq_f32(v2, v4);
  f_.v52 = 0x500000000LL;
  f_.v50 = f_.v41;
  f_.v51 = f_.v42;
  f_.v56 = 0;
  v9 = v3[3];
  v8 = v3[4];
  f_.v53 = 0;
  LOBYTE(f_.v55) = 1;
  f_.v50 = vmulq_f32(v2, v9);
  f_.v51 = vmulq_f32(v2, v8);
  LANES128(f_.v50).n128_f32[3] =
      vmuls_lane_f32(LANES128(f_.v50).n128_f32[3], f_.v41, 3);
  LANES128(v2).n128_u64[0] = __PAIR64__(v7, v6);
  LANES128(f_.v51).n128_f32[3] =
      vmuls_lane_f32(LANES128(f_.v51).n128_f32[3], f_.v42, 3);
  LANES128(v2).n128_u64[1] = v6;
  f_.v54 = v2;
  v10 = (__int64*)GameData_212d018[0];
  v11 = *(_QWORD**)GameData_212d018[0];
  v12 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v12 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v14 = PrimitiveDrawStack_f525a0(v11 + 2, (__int64)f_.v49);
  }
  else {
    if ((f_.v49[0] & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), f_.v49[2],
          f_.v49[1]);
    }
    else {
      LANES128(*(v12)).n128_u64[1] = f_.v40[1];
      v13 = f_.v40[0];
      LANES128(v12[1]).n128_u64[0] = f_.v40[2];
      LANES128(*(v12)).n128_u64[0] = v13;
    }
    v15 = f_.v53;
    v14 = (__int64)&v12[7];
    LANES128(v12[3]).n128_u64[1] = LANES128(f_.v51).n128_u64[1];
    v12[2] = f_.v50;
    v16 = LANES128(f_.v51).n128_u64[0];
    v17 = f_.v52;
    LANES128(v12[4]).n128_u32[2] = v15;
    LANES128(v12[4]).n128_u64[0] = v17;
    LANES128(v12[3]).n128_u64[0] = v16;
    v12[5] = f_.v54;
    v18 = f_.v55;
    LANES128(v12[6]).n128_u8[8] = f_.v56;
    LANES128(v12[6]).n128_u64[0] = v18;
  }
  v19 = v11[2];
  v11[3] = v14;
  v11[1] = 0x6DB6DB6DB6DB6DB7LL * ((v14 - v19) >> 4) - 1;
  v20 = (_QWORD*)(a1 + 24);
  v21 = *(_QWORD**)(a1 + 16);
  if (v21 != (_QWORD*)(a1 + 24)) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v21 + 6));
      v26 = (_QWORD*)v21[1];
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v21[2];
          v28 = v21 == (_QWORD*)*v27;
          v21 = v27;
        } while (!v28);
      }
      v21 = v27;
    } while (v27 != v20);
  }
  v22 = *v10;
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((f_.v49[0] & 1) != 0 && f_.v49[2] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  f_.v49[2]);
    v22 = *v10;
  }
  v24 = *(float32x4_t**)(v22 + 24);
  if ((unsigned __int64)v24 >= *(_QWORD*)(v22 + 32)) {
    v29 = PrimitiveDrawStack_f525a0((__int64*)(v22 + 16), (__int64)f_.v40);
  }
  else {
    if ((f_.v40[0] & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v22 + 24), f_.v40[2],
                                    f_.v40[1]);
    }
    else {
      LANES128(*(v24)).n128_u64[1] = f_.v40[1];
      v25 = f_.v40[0];
      LANES128(v24[1]).n128_u64[0] = f_.v40[2];
      LANES128(*(v24)).n128_u64[0] = v25;
    }
    v30 = f_.v44;
    v29 = (__int64)&v24[7];
    LANES128(v24[3]).n128_u64[1] = LANES128(f_.v42).n128_u64[1];
    v24[2] = f_.v41;
    v31 = LANES128(f_.v42).n128_u64[0];
    v32 = f_.v43;
    LANES128(v24[4]).n128_u32[2] = v30;
    LANES128(v24[4]).n128_u64[0] = v32;
    LANES128(v24[3]).n128_u64[0] = v31;
    v33 = f_.v46;
    LANES128(v24[5]).n128_u64[0] = f_.v45;
    LANES128(v24[5]).n128_u64[1] = v33;
    v34 = f_.v47;
    LANES128(v24[6]).n128_u8[8] = f_.v48;
    LANES128(v24[6]).n128_u64[0] = v34;
  }
  v35 = *(_QWORD*)(v22 + 16);
  *(_QWORD*)(v22 + 24) = v29;
  *(_QWORD*)(v22 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v29 - v35) >> 4) - 1;
  v36 = *(_QWORD**)(a1 + 16);
  if (v36 != v20) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v36 + 6));
      v38 = (_QWORD*)v36[1];
      if (v38 != nullptr) {
        do {
          v39 = v38;
          v38 = (_QWORD*)*v38;
        } while (v38 != nullptr);
      }
      else {
        do {
          v39 = (_QWORD*)v36[2];
          v28 = v36 == (_QWORD*)*v39;
          v36 = v39;
        } while (!v28);
      }
      v36 = v39;
    } while (v39 != v20);
  }
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((f_.v40[0] & 1) != 0 && f_.v40[2] != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  f_.v40[2]);
  }
}

__int64 game_map_123f980(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int8 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  struct {
    char gap0_[16];
    _QWORD v36[4];
    _QWORD* v37;
    char gap56_[8];
    _QWORD v38[4];
    _QWORD* v39;
  } f_;

  v1 = GameData_2240178;
  if (GameData_2240178 != 0) {
    v2 = result;
    v3 = (unsigned int)game_HashString32("MapHistoryVariableMgr");
    v4 = *(_QWORD*)v2;
    LODWORD(f_.v38[0]) = v3;
    if (((*(__int64 (**)(__int64, _QWORD*))(v4 + 16))(v2, f_.v38) & 1) == 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 24LL))(v2, 0);
    }
    v5 = *(int*)(v2 + 20);
    v6 = *(_QWORD*)(v2 + 8);
    *(_DWORD*)(v2 + 20) = v5 + 1;
    v7 = *(unsigned __int8*)(v6 + v5);
    *(_DWORD*)(v2 + 20) = v5 + 2;
    LODWORD(v5) = *(unsigned __int8*)(v6 + v5 + 1);
    f_.v37 = nullptr;
    *(_BYTE*)(v1 + 448) = (_DWORD)v5 != 0;
    if (v7 >= 3) {
      game_map_history_anonymous_1243060(v1 + 456, v2);
      game_map_history_anonymous_1243060(v1 + 520, v2);
      game_map_history_anonymous_1243060(v1 + 584, v2);
      f_.v38[0] = GameData_201c9b0;
      f_.v39 = f_.v38;
      GameRoutine_1243630(f_.v38, f_.v36);
      if (f_.v39 == f_.v38) {
        v8 = 32;
      }
      else {
        if (f_.v39 == nullptr) {
          goto LABEL_12;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*f_.v39 + v8))((__int64)f_.v39);
    LABEL_12:
      if ((unsigned __int8)(v7 - 3) > 7u) {
        v10 = 12;
      }
      else {
        v10 = GameData_1b01808[(unsigned __int8)(v7 - 3)];
      }
      goto LABEL_20;
    }
    f_.v38[0] = GameData_201ca40;
    f_.v38[1] = v1;
    f_.v39 = f_.v38;
    GameRoutine_1243630(f_.v38, f_.v36);
    if (f_.v39 == f_.v38) {
      v9 = 32;
    }
    else {
      if (f_.v39 == nullptr) {
        goto LABEL_17;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*f_.v39 + v9))((__int64)f_.v39);
  LABEL_17:
    if (v7 != 0) {
      v10 = 9;
    }
    else {
      v10 = 4;
    }
  LABEL_20:
    v11 = v1 + 8;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v35 = v7;
    v34 = v1 + 8;
    do {
      v13 = *(int*)(v2 + 20);
      *(_DWORD*)(v2 + 20) = v13 + 1;
      v14 = GameRoutine_12adb70(v7,
                                *(unsigned __int8*)(*(_QWORD*)(v2 + 8) + v13));
      if (v14 <= 0xBu) {
        GameRoutine_1242b60(v11 + 32LL * v14, v2, v7, (__int64)f_.v36);
      }
      else {
        v15 = fw_memory_HeapManager_Allocate(*v12, 32, 16, 0);
        *(_WORD*)v15 = 12;
        v16 = fw_memory_HeapManager_Allocate(*v12, 256, 16, 0);
        *(_QWORD*)(v15 + 8) = v16;
        *(_QWORD*)(v15 + 16) = v16;
        *(_QWORD*)(v15 + 24) = v16 + 256;
        GameRoutine_1242b60(v15, v2, v7, (__int64)f_.v36);
        v18 = *(__int64**)(v1 + 400);
        v17 = *(_QWORD*)(v1 + 408);
        if ((unsigned __int64)v18 >= v17) {
          v20 = *(_QWORD*)(v1 + 392);
          v21 = (_QWORD*)v1;
          v22 = v12;
          v23 = (char*)v18 - v20;
          v24 = ((__int64)v18 - v20) >> 3;
          v25 = v24 + 1;
          if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
            GameRoutine_12439b0();
          }
          v26 = v17 - v20;
          if (v26 >> 2 > v25) {
            v25 = v26 >> 2;
          }
          if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
            v27 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v27 = v25;
          }
          if (v27 != 0) {
            if (v27 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v28 = fw_memory_HeapManager_Allocate(*v22, 8 * v27, 16, 0);
          }
          else {
            v28 = 0;
          }
          v29 = v28 + 8 * v27;
          v30 = (unsigned __int64)v18 - v20;
          v31 = (__int64)&v23[v28 + -8 * v24];
          *(_QWORD*)&v23[v28] = v15;
          v19 = (__int64)&v23[v28 + 8];
          GameRoutine_1a0b950(v31, v20, v30);
          v1 = (__int64)v21;
          v21[49] = v31;
          v21[50] = v19;
          v21[51] = v29;
          if (v20 != 0) {
            v12 = v22;
            v32 = 128;
            if (*(_QWORD*)(*v22 + 200) == 0) {
              v32 = 56;
            }
            nn_mem_StandardAllocator_Free(*v22 + v32, v20);
            v11 = v34;
            v7 = v35;
          }
          else {
            v11 = v34;
            v7 = v35;
            v12 = v22;
          }
        }
        else {
          *v18 = v15;
          v19 = (__int64)(v18 + 1);
        }
        *(_QWORD*)(v1 + 400) = v19;
      }
      --v10;
    } while (v10 != 0);
    if (f_.v37 == f_.v36) {
      v33 = 32;
      goto LABEL_46;
    }
    if (f_.v37 != nullptr) {
      v33 = 40;
    LABEL_46:
      (*(void (**)(__int64))(*f_.v37 + v33))((__int64)f_.v37);
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 24LL))(v2, 0);
  }
  return result;
}

#pragma GCC visibility pop
