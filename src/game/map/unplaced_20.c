#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_8224a0(unsigned __int8);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_212c958;
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void PrimitiveDrawStack_f51430(__int64, __int64);
void game_map_f596e0(__int64 a1);
__int64 game_8224a0_alt1(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD);

void game_map_f596e0(__int64 a1)
{

#pragma clang fp contract(fast)

  __int64 v2;
  float v3;
  __int64 v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  int8x16_t v9;
  unsigned __int64 v10;
  __int64* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  bool v27;
  _QWORD v28[4];
  int8x16_t v29;
  int8x16_t v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;

  v2 = game_8224a0_alt1(16);
  v3 = 0.0f;
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find_alt1(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (v4 != 0) {
      v3 = (float)*(int*)(v4 + 32);
    }
  }
  if ((float)(v3 / 0x1.9000000000000p+6f) <= 0x1.0000000000000p-23f) {
    v5 = *(float32x4_t*)GameData_212c958;
    BYTE1(v28[2]) = 0;
    WORD1(v28[2]) = 0;
    HIDWORD(v28[2]) = 0;
    BYTE4(v35) = 0;
    v36 = 0;
    LOWORD(v35) = 0;
    v33 = 0;
    v34 = 0;
    v7 = *(float32x4_t*)(*GameData_212f878 + 144);
    v6 = *(float32x4_t*)(*GameData_212f878 + 160);
    qmemcpy(v28, "$MapPanelDeployMove", 20);
    v8 = vmulq_f32(v5, v6);
    v9 = vmulq_f32(v5, v7);
    LODWORD(v10) = LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u32[0];
    LANES128(v7).n128_u32[0] = LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u32[0];
    v31 = 0x700000000LL;
    v32 = 4;
    HIDWORD(v10) = LANES64_OF(vdup_laneq_s32(v8, 3)).n64_u32[0];
    LANES128(v8).n128_u64[1] = v10;
    LANES128(v7).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v9, 3)).n64_u32[0];
    LANES128(v9).n128_u64[1] = LANES128(v7).n128_u64[0];
    v29 = v9;
    v30 = v8;
    v11 = (__int64*)GameData_212d018[0];
    v12 = *(_QWORD**)GameData_212d018[0];
    v13 = *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 24LL);
    if (v13 >= *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
      v15 = PrimitiveDrawStack_f525a0(v12 + 2, (__int64)v28);
    }
    else {
      v14 = v28[1];
      *(_QWORD*)(v13 + 80) = 0;
      *(_QWORD*)(v13 + 88) = 0;
      v15 = v13 + 112;
      *(_QWORD*)(v13 + 8) = v14;
      v16 = v28[0];
      *(_QWORD*)(v13 + 16) = v28[2];
      *(_QWORD*)v13 = v16;
      *(_QWORD*)(v13 + 40) = LANES128(v29).n128_u64[1];
      v18 = LANES128(v30).n128_u64[1];
      v17 = v31;
      v19 = LANES128(v30).n128_u64[0];
      *(_DWORD*)(v13 + 72) = v32;
      *(_QWORD*)(v13 + 56) = v18;
      *(_QWORD*)(v13 + 64) = v17;
      *(_QWORD*)(v13 + 48) = v19;
      *(_QWORD*)(v13 + 32) = LANES128(v29).n128_u64[0];
      v20 = v35;
      *(_BYTE*)(v13 + 104) = v36;
      *(_QWORD*)(v13 + 96) = v20;
    }
    v21 = v12[2];
    v12[3] = v15;
    v12[1] = 0x6DB6DB6DB6DB6DB7LL * ((v15 - v21) >> 4) - 1;
    v22 = *(_QWORD**)(a1 + 16);
    v23 = (_QWORD*)(a1 + 24);
    if (v22 != v23) {
      do {
        PrimitiveDrawStack_f51430(*v11, (__int64)(v22 + 6));
        v25 = (_QWORD*)v22[1];
        if (v25 != nullptr) {
          do {
            v26 = v25;
            v25 = (_QWORD*)*v25;
          } while (v25 != nullptr);
        }
        else {
          do {
            v26 = (_QWORD*)v22[2];
            v27 = v22 == (_QWORD*)*v26;
            v22 = v26;
          } while (!v27);
        }
        v22 = v26;
      } while (v26 != v23);
    }
    *(_QWORD*)(*v11 + 8) = 1024;
    if ((v28[0] & 1) != 0 && v28[2] != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v24);
    }
  }
}

#pragma GCC visibility pop
