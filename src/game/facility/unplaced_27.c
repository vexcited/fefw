#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_facility_1415980(_QWORD* result);
__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, long double);
__attribute__((swiftcall)) void SceneCharacterLookAt_14164a0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8,
                                                               _QWORD);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__int64 GameRoutine_14176e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacterLookAt_1416860(_QWORD, _QWORD);
__int64 SceneCharacter_13ff750(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float Cursor_734120(_QWORD, _QWORD, float, float, long double);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
float game_facility_1415ec0(__int64 a1);

float game_facility_1415ec0(__int64 a1)
{
  float result;
  int8x16_t v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int32 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  int v20;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _BYTE* v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  long double v35;
  long double v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _BYTE* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  float32x4_t v45;
  unsigned __int64 v46;
  float v47;
  float v48;
  float v49;
  __int128 v50;
  float v51;
  float v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  float v56;
  __int64 v57;
  int8x16_t v58;
  __int128 v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int128 v71;
  __int128 v72;
  float32x4_t v73;
  _QWORD v74[2];
  float32x4_t v75;
  int8x16_t v76;

  if ((SceneCharacter_13ff750(*(_QWORD*)(a1 + 8)) & 1) != 0) {
    if (*(_BYTE*)(a1 + 136) == 1) {
      SceneCharacterLookAt_14164a0((void*)(&v76), a1);
      SceneCharacterLookAt_14164a0((void*)(&v75), a1);
      v3 = v76;
      *(_QWORD*)(a1 + 24) = 0;
      *(_BYTE*)(a1 + 136) = 0;
      *(_QWORD*)(a1 + 64) = LANES128(v3).n128_u64[0];
      v4 = *(_OWORD*)(a1 + 64);
      *(_QWORD*)(a1 + 32) = v4;
      *((_QWORD*)&v4 + 1) = LANES128(v3).n128_u32[2];
      *(_OWORD*)(a1 + 64) = v4;
      DWORD2(v4) = LANES128(v75).n128_u32[2];
      *(_QWORD*)(a1 + 48) = LANES128(v75).n128_u64[0];
      v5 = *(_OWORD*)(a1 + 32);
      v6 = *(_OWORD*)(a1 + 48);
      *((_QWORD*)&v5 + 1) = LANES128(v3).n128_u32[2];
      *((_QWORD*)&v6 + 1) = DWORD2(v4);
      *(_OWORD*)(a1 + 32) = v5;
      *(_OWORD*)(a1 + 48) = v6;
    }
    if (*(_QWORD*)(a1 + 208) != 0) {
      v7 = *(_QWORD*)(a1 + 200);
      v8 = (__int64*)(a1 + 144);
      v9 = fw_memory_g_heap_manager_ptr;
      while (1) {
        v10 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 8 * (v7 / 0x33)) +
              80 * (v7 % 0x33);
        if (*(_QWORD*)(v10 + 32) != 0) {
          if ((SceneCharacter_13ff750(*(_QWORD*)(a1 + 8)) & 1) != 0 &&
              (v11 = *(_QWORD*)(a1 + 8), LANES128(v75).n128_u64[0] = 0,
               LANES128(v76).n128_u64[0] = (unsigned __int64)&v75,
               GameRoutine_14176e0(&v76, &v76, *(_QWORD*)(v11 + 8)),
               LANES128(v75).n128_u64[0] != 0)) {
            v13 = *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) +
                             LANES128(v75).n128_u64[0] + 12);
            LANES128(v76).n128_u64[0] =
                *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) +
                           LANES128(v75).n128_u64[0] + 4);
            LANES128(v76).n128_u64[1] = v13;
          }
          else {
            SceneCharacterLookAt_14164a0((void*)(&v76), a1);
          }
          v14 = *(_QWORD*)(v10 + 32);
          if (v14 == 0) {
            GameRoutine_60a310(0, v12);
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
              *(_QWORD*)v14 + 48LL))((void*)&v75, (void*)v14);
          v15 = *(_DWORD*)(v10 + 52);
          *(_DWORD*)(a1 + 28) = 0;
          *(_DWORD*)(a1 + 24) = v15;
          v16 = LANES128(v76).n128_u32[2];
          *(_QWORD*)(a1 + 64) = LANES128(v76).n128_u64[0];
          v17 = *(_OWORD*)(a1 + 64);
          *(_QWORD*)(a1 + 32) = v17;
          *((_QWORD*)&v17 + 1) = v16;
          *(_OWORD*)(a1 + 64) = v17;
          DWORD2(v17) = LANES128(v75).n128_u32[2];
          *(_QWORD*)(a1 + 48) = LANES128(v75).n128_u64[0];
          v18 = *(_OWORD*)(a1 + 32);
          v19 = *(_OWORD*)(a1 + 48);
          *((_QWORD*)&v18 + 1) = v16;
          *((_QWORD*)&v19 + 1) = DWORD2(v17);
          *(_OWORD*)(a1 + 32) = v18;
          *(_OWORD*)(a1 + 48) = v19;
        }
        v20 = *(_DWORD*)(v10 + 52);
        *(_DWORD*)(a1 + 108) = 0;
        *(_DWORD*)(a1 + 104) = v20;
        *(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 120);
        *(_DWORD*)(a1 + 116) = *(_DWORD*)(v10 + 48);
        v21 = (__int64*)(v10 + 56);
        v22 = *(unsigned __int8*)(v10 + 56);
        v23 = v22 >> 1;
        if ((v22 & 1) != 0) {
          v23 = *(_QWORD*)(v10 + 64);
        }
        if (v23 != 0) {
          if (v8 != v21) {
            if ((*(_BYTE*)v8 & 1) != 0) {
              if ((v22 & 1) != 0) {
                v26 = *(_QWORD*)(v10 + 72);
              }
              else {
                v26 = v10 + 57;
              }
              SpineModel_64dde0(a1 + 144, v26, v23);
            }
            else if ((v22 & 1) != 0) {
              GameRoutine_64df20(a1 + 144, *(_QWORD*)(v10 + 72),
                                 *(_QWORD*)(v10 + 64));
            }
            else {
              v24 = *v21;
              v25 = *(_QWORD*)(v10 + 72);
              *(_QWORD*)(a1 + 152) = *(_QWORD*)(v10 + 64);
              *(_QWORD*)(a1 + 160) = v25;
              *v8 = v24;
            }
          }
        }
        else if ((*(_BYTE*)v8 & 1) != 0) {
          v27 = *(_BYTE**)(a1 + 160);
          *(_QWORD*)(a1 + 152) = 0;
          *v27 = 0;
        }
        else {
          *(_BYTE*)v8 = 0;
          *(_BYTE*)(a1 + 145) = 0;
        }
        v28 = *(_QWORD*)(*(_QWORD*)(a1 + 176) +
                         8 * (*(_QWORD*)(a1 + 200) / 0x33uLL)) +
              80 * (*(_QWORD*)(a1 + 200) % 0x33uLL);
        if ((*(_BYTE*)(v28 + 56) & 1) != 0 && *(_QWORD*)(v28 + 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
        }
        v30 = *(_QWORD**)(v28 + 32);
        if (v30 == (_QWORD*)v28) {
          break;
        }
        if (v30 != nullptr) {
          v31 = 40;
        LABEL_40:
          (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
        }
        v32 = *(_QWORD*)(a1 + 208) - 1LL;
        v7 = *(_QWORD*)(a1 + 200) + 1LL;
        *(_QWORD*)(a1 + 200) = v7;
        *(_QWORD*)(a1 + 208) = v32;
        if (!(v7 < 0x66)) {
          v33 = *(_QWORD**)(a1 + 176);
          if (*v33 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v34 = 128;
            }
            else {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v34);
            v33 = *(_QWORD**)(a1 + 176);
            v7 = *(_QWORD*)(a1 + 200);
            v32 = *(_QWORD*)(a1 + 208);
          }
          v7 -= 51LL;
          *(_QWORD*)(a1 + 176) = v33 + 1;
          *(_QWORD*)(a1 + 200) = v7;
        }
        if (v32 == 0) {
          goto LABEL_47;
        }
      }
      v31 = 32;
      goto LABEL_40;
    }
  LABEL_47:
    game_facility_1415980((_QWORD*)(a1 + 168));
    v37 = *(unsigned __int8*)(a1 + 144);
    v38 = *(_QWORD*)(a1 + 152);
    if ((v37 & 1) == 0) {
      v38 = v37 >> 1;
    }
    if (v38 != 0) {
      v39 = (_BYTE*)(a1 + 145);
      if ((v37 & 1) != 0) {
        v40 = *(_QWORD*)(a1 + 160);
      }
      else {
        v40 = a1 + 145;
      }
      LANES128(v76).n128_u64[0] = v40;
      LANES128(v76).n128_u64[1] = v38;
      v41 = SceneCharacterLookAt_1416860(a1, &v76);
      if (v41 != 0) {
        v42 = *(_QWORD*)(v41 + 192);
        v43 = *(_QWORD*)(v41 + 200);
        if (v43 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                                    memory_order_relaxed);
          v44 = *(_QWORD*)(v42 + 24);
          LANES128(v76).n128_u64[0] = *(_QWORD*)(v42 + 16);
          LANES128(v76).n128_u64[1] = v44;
          game_13f9200((void*)(&v75), &v76);
          SceneCharacterMovement_1417860((void*)(&v76), v42);
          v45 = vaddq_f32(v75, v76);
          if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v73 = v45;
            (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
            std___1___shared_weak_count___release_weak(v43);
            v45 = v73;
          }
        }
        else {
          v46 = *(_QWORD*)(v42 + 24);
          LANES128(v76).n128_u64[0] = *(_QWORD*)(v42 + 16);
          LANES128(v76).n128_u64[1] = v46;
          game_13f9200((void*)(&v75), &v76);
          SceneCharacterMovement_1417860((void*)(&v76), v42);
          v45 = vaddq_f32(v75, v76);
        }
        v47 = *(float*)(a1 + 24);
        v48 = *(float*)(a1 + 28);
        *(_QWORD*)(a1 + 48) = LANES128(v45).n128_u64[0];
        *(_DWORD*)(a1 + 28) = 0;
        v49 = v47 - v48;
        if (v49 < 0.0) {
          v49 = 0.0;
        }
        *(float*)(a1 + 24) = v49;
        v35 = *(long double*)(a1 + 64);
        *(_QWORD*)(a1 + 32) = *(_QWORD*)&v35;
        v50 = *(_OWORD*)(a1 + 32);
        v36 = *(long double*)(a1 + 48);
        *((_QWORD*)&v50 + 1) = DWORD2(v35);
        *((_QWORD*)&v36 + 1) = LANES128(v45).n128_u32[2];
        *(_OWORD*)(a1 + 32) = v50;
        *(long double*)(a1 + 48) = v36;
      }
      else {
        if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
          v39 = *(_BYTE**)(a1 + 160);
          *(_QWORD*)(a1 + 152) = 0;
        }
        else {
          *(_BYTE*)(a1 + 144) = 0;
        }
        *v39 = 0;
      }
    }
    v52 = *(float*)(a1 + 24);
    v51 = *(float*)(a1 + 28);
    if (!(v51 < v52)) {
      v58 = *(int8x16_t*)(a1 + 48);
    }
    else {
      v53 = *(unsigned int*)(a1 + 80);
      v54 = *(unsigned int*)(a1 + 84);
      v55 = *(_QWORD*)(a1 + 40);
      v56 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                    0x1.0aef000000000p+4) /
            0x1.f400000000000p+9;
      LANES128(v75).n128_u64[0] = *(_QWORD*)(a1 + 32);
      LANES128(v75).n128_u64[1] = v55;
      v57 = *(_QWORD*)(a1 + 56);
      v74[0] = *(_QWORD*)(a1 + 48);
      v74[1] = v57;
      *(float*)&v35 = v56 + v51;
      if (v52 < *(float*)&v35) {
        *(float*)&v35 = v52;
      }
      *(_DWORD*)(a1 + 28) = LODWORD(v35);
      MagicInst_10a43c0((void*)(&v76), v53, &v75, v74, v54, v35);
      v58 = v76;
    }
    *(_QWORD*)(a1 + 64) = LANES128(v58).n128_u64[0];
    v59 = *(_OWORD*)(a1 + 64);
    *((_QWORD*)&v59 + 1) = LANES128(v58).n128_u32[2];
    *(_OWORD*)(a1 + 64) = v59;
    v61 = *(float*)(a1 + 104);
    v60 = *(float*)(a1 + 108);
    if (!(v60 < v61)) {
      v67 = *(float*)(a1 + 116);
    }
    else {
      v62 = *(unsigned int*)(a1 + 124);
      v63 = *(unsigned int*)(a1 + 128);
      v64 = v60 +
            (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                            0x1.0aef000000000p+4) /
                    0x1.f400000000000p+9);
      if (!(v61 < v64)) {
        *(float*)&v36 = v64;
      }
      else {
        LODWORD(v36) = *(_DWORD*)(a1 + 104);
      }
      v65 = *(float*)(a1 + 112);
      v66 = *(float*)(a1 + 116);
      *(_DWORD*)(a1 + 108) = LODWORD(v36);
      v67 = Cursor_734120(v62, v63, v65, v66, v36);
    }
    v68 = *(_QWORD*)(a1 + 8);
    *(float*)(a1 + 120) = v67;
    if ((SceneCharacter_13ff750(v68) & 1) != 0) {
      v69 = *(_QWORD*)(a1 + 8);
      LANES128(v75).n128_u64[0] = 0;
      LANES128(v76).n128_u64[0] = (unsigned __int64)&v75;
      GameRoutine_14176e0(&v76, &v76, *(_QWORD*)(v69 + 8));
      v70 = LANES128(v75).n128_u64[0];
      if (LANES128(v75).n128_u64[0] != 0) {
        v71 = *(_OWORD*)(a1 + 64);
        *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) + LANES128(v75).n128_u64[0] + 4) =
            v71;
        v72 = *(_OWORD*)((char*)((_UNKNOWN*)0x7CLL) + v70 + 4);
        *((_QWORD*)&v72 + 1) = DWORD2(v71);
        *(_OWORD*)((char*)((_UNKNOWN*)0x7CLL) + v70 + 4) = v72;
        result = *(float*)(a1 + 120);
        *(_DWORD*)((char*)((_UNKNOWN*)0xA4LL) + v70) = 1065353216;
        *(float*)((char*)((_UNKNOWN*)0x9CLL) + v70) = result;
        *(float*)((char*)((_UNKNOWN*)0x9CLL) + v70 + 4) = result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
