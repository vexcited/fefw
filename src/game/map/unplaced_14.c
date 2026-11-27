#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void InfoCursorBottomImpl_100e7d0(PSEUDO_X8,
                                                             __int64);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__int64 InfoCursorBottomImpl_100de20(__int64 result);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_100ef00(__int64 result);
__int64 game_100f680(__int64*);
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a83800;
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 fw_memory_g_heap_manager_ptr;
void InfoCursorBottomImpl_100eaa0(__int64*);
void PrimitiveDrawStack_f51430(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_map_f172c0(float a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 game_map_100d7e0(__int64 a1, float a2);

void game_map_f172c0(float a1, __int64 a2, _QWORD* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64* v7;
  float32x4_t* v8;
  unsigned int v9;
  float v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int64* v21;
  _QWORD* v22;
  float32x4_t* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int32 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  bool v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  struct {
    unsigned int v50;
    char gap4_[12];
    __int64 v51;
    unsigned __int64 v52;
    __int64 v53;
    char gap40_[8];
    float32x4_t v54;
    float32x4_t v55;
    unsigned __int64 v56;
    unsigned __int32 v57;
    char gap92_[4];
    float32x4_t v58;
    unsigned __int64 v59;
    unsigned __int8 v60;
  } f_;

  v7 = GameData_212f878;
  v8 = (float32x4_t*)*GameData_212f878;
  v9 = *(_DWORD*)(*GameData_212f878 + 1436);
  v10 = -*(float*)(*GameData_212f878 + 1432);
  if ((*(_BYTE*)a4 & 1) != 0) {
    f_.v50 = *(_DWORD*)(*GameData_212f878 + 1436);
    fw_text_String_CopyTerminated(&f_.v51, *(_QWORD*)(a4 + 16),
                                  *(_QWORD*)(a4 + 8));
    v9 = f_.v50;
    v8 = (float32x4_t*)*v7;
  }
  else {
    v11 = *(_QWORD*)(a4 + 8);
    f_.v51 = *(_QWORD*)a4;
    f_.v52 = v11;
    f_.v53 = *(_QWORD*)(a4 + 16);
  }
  v12 = *(_QWORD*)(a4 + 32);
  v13 = *(_QWORD*)(a4 + 56);
  LANES128(f_.v55).n128_u64[0] = *(_QWORD*)(a4 + 48);
  LANES128(f_.v55).n128_u64[1] = v13;
  f_.v56 = *(_QWORD*)(a4 + 64);
  f_.v57 = *(_DWORD*)(a4 + 72);
  v14 = *(_QWORD*)(a4 + 40);
  LANES128(f_.v54).n128_u64[0] = v12;
  LANES128(f_.v54).n128_u64[1] = v14;
  v15 = *(_QWORD*)(a4 + 88);
  LANES128(f_.v58).n128_u64[0] = *(_QWORD*)(a4 + 80);
  LANES128(f_.v58).n128_u64[1] = v15;
  v16 = *(_QWORD*)(a4 + 96);
  f_.v60 = *(_BYTE*)(a4 + 104);
  f_.v59 = v16;
  v18 = v8[3];
  v17 = v8[4];
  LANES128(f_.v58).n128_u64[0] = __PAIR64__(LODWORD(v10), v9);
  f_.v57 = 0;
  LOBYTE(f_.v59) = 1;
  v19 = vmulq_f32(*(float32x4_t*)GameData_212c958, v17);
  v20 = vmulq_f32(*(float32x4_t*)GameData_212c958, v18);
  LANES128(v20).n128_f32[3] = vmuls_lane_f32(a1, v20, 3);
  LANES128(v19).n128_f32[3] = vmuls_lane_f32(a1, v19, 3);
  f_.v54 = v20;
  f_.v55 = v19;
  LANES128(v19).n128_f32[0] = LANES128(v19).n128_f32[3] * *(float*)(a4 + 60);
  LANES128(f_.v54).n128_f32[3] = LANES128(v20).n128_f32[3] * *(float*)(a4 + 44);
  LANES128(v20).n128_u64[0] = __PAIR64__(LODWORD(v10), v9);
  LANES128(f_.v55).n128_u32[3] = LANES128(v19).n128_u32[0];
  LANES128(v20).n128_u64[1] = v9;
  f_.v58 = v20;
  v21 = (__int64*)GameData_212d018[0];
  v22 = *(_QWORD**)GameData_212d018[0];
  v23 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v23 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v25 = PrimitiveDrawStack_f525a0(v22 + 2, (__int64)&f_.v51);
  }
  else {
    if ((f_.v51 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), f_.v53, f_.v52);
    }
    else {
      LANES128(*(v23)).n128_u64[1] = f_.v52;
      v24 = f_.v51;
      LANES128(v23[1]).n128_u64[0] = f_.v53;
      LANES128(*(v23)).n128_u64[0] = v24;
    }
    v26 = f_.v57;
    v25 = (__int64)&v23[7];
    LANES128(v23[3]).n128_u64[1] = LANES128(f_.v55).n128_u64[1];
    v23[2] = f_.v54;
    v27 = LANES128(f_.v55).n128_u64[0];
    v28 = f_.v56;
    LANES128(v23[4]).n128_u32[2] = v26;
    LANES128(v23[4]).n128_u64[0] = v28;
    LANES128(v23[3]).n128_u64[0] = v27;
    v23[5] = f_.v58;
    v29 = f_.v59;
    LANES128(v23[6]).n128_u8[8] = f_.v60;
    LANES128(v23[6]).n128_u64[0] = v29;
  }
  v30 = v22[2];
  v22[3] = v25;
  v22[1] = 0x6DB6DB6DB6DB6DB7LL * ((v25 - v30) >> 4) - 1;
  v32 = a3 + 1;
  v31 = (_QWORD*)*a3;
  if ((_QWORD*)*a3 != a3 + 1) {
    do {
      PrimitiveDrawStack_f51430(*v21, (__int64)(v31 + 6));
      v37 = (_QWORD*)v31[1];
      if (v37 != nullptr) {
        do {
          v38 = v37;
          v37 = (_QWORD*)*v37;
        } while (v37 != nullptr);
      }
      else {
        do {
          v38 = (_QWORD*)v31[2];
          v39 = v31 == (_QWORD*)*v38;
          v31 = v38;
        } while (!v39);
      }
      v31 = v38;
    } while (v38 != v32);
  }
  v33 = *v21;
  *(_QWORD*)(*v21 + 8) = 1024;
  if ((f_.v51 & 1) != 0 && f_.v53 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                                  f_.v53);
    v33 = *v21;
  }
  v35 = *(_QWORD*)(v33 + 24);
  if (v35 >= *(_QWORD*)(v33 + 32)) {
    v40 = PrimitiveDrawStack_f525a0((__int64*)(v33 + 16), a4);
  }
  else {
    if ((*(_BYTE*)a4 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v33 + 24), *(_QWORD*)(a4 + 16),
                                    *(_QWORD*)(a4 + 8));
    }
    else {
      *(_QWORD*)(v35 + 8) = *(_QWORD*)(a4 + 8);
      v36 = *(_QWORD*)a4;
      *(_QWORD*)(v35 + 16) = *(_QWORD*)(a4 + 16);
      *(_QWORD*)v35 = v36;
    }
    v41 = *(_DWORD*)(a4 + 72);
    v40 = v35 + 112;
    *(_QWORD*)(v35 + 56) = *(_QWORD*)(a4 + 56);
    *(_QWORD*)(v35 + 40) = *(_QWORD*)(a4 + 40);
    *(_QWORD*)(v35 + 32) = *(_QWORD*)(a4 + 32);
    v42 = *(_QWORD*)(a4 + 48);
    v43 = *(_QWORD*)(a4 + 64);
    *(_DWORD*)(v35 + 72) = v41;
    *(_QWORD*)(v35 + 64) = v43;
    *(_QWORD*)(v35 + 48) = v42;
    v44 = *(_QWORD*)(a4 + 88);
    *(_QWORD*)(v35 + 80) = *(_QWORD*)(a4 + 80);
    *(_QWORD*)(v35 + 88) = v44;
    v45 = *(_QWORD*)(a4 + 96);
    *(_BYTE*)(v35 + 104) = *(_BYTE*)(a4 + 104);
    *(_QWORD*)(v35 + 96) = v45;
  }
  v46 = *(_QWORD*)(v33 + 16);
  *(_QWORD*)(v33 + 24) = v40;
  *(_QWORD*)(v33 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v40 - v46) >> 4) - 1;
  v47 = (_QWORD*)*a3;
  if (v47 != v32) {
    do {
      PrimitiveDrawStack_f51430(*v21, (__int64)(v47 + 6));
      v48 = (_QWORD*)v47[1];
      if (v48 != nullptr) {
        do {
          v49 = v48;
          v48 = (_QWORD*)*v48;
        } while (v48 != nullptr);
      }
      else {
        do {
          v49 = (_QWORD*)v47[2];
          v39 = v47 == (_QWORD*)*v49;
          v47 = v49;
        } while (!v39);
      }
      v47 = v49;
    } while (v49 != v32);
  }
  *(_QWORD*)(*v21 + 8) = 1024;
}

__int64 game_map_100d7e0(__int64 a1, float a2)
{
  __int64* v2;
  __int64 v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int16x4_t v20;
  int v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  __int64* v27;
  __int64 v28;
  float32x4_t* v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int16x4_t v43;
  int v44;
  float32x4_t v45;
  float32x4_t* v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  __int64* v51;
  __int64 v52;
  float32x4_t* v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int16x4_t v67;
  int v68;
  float32x4_t v69;
  float32x4_t* v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  __int64 v75;
  __int64* v76;
  __int64 result;
  float v78;
  float v79;
  struct {
    float32x4_t v80;
    float v81[4];
    int8x16_t v82;
  } f_;
  float32x4_t v83;

  v2 = *(__int64**)(a1 + 24);
  if (v2 != nullptr) {
    InfoCursorBottomImpl_100e7d0((void*)((__int64)f_.v81), *v2);
    v5 = *v2;
    v6 = (float32x4_t*)v2[1];
    v7 = *(float32x4_t*)(*v2 + 112);
    v8 = vsubq_f32(v6[19], v7);
    v9 = vmulq_f32(v8, v8);
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v6[19]).n128_u32[0] = LANES128(v7).n128_u32[0];
      LANES128(v6[19]).n128_u32[1] = *(_DWORD*)(v5 + 116);
      v10 = v6[19];
      LANES128(v10).n128_u32[2] = *(_DWORD*)(v5 + 120);
      LANES128(v6[18]).n128_u32[2] |= 1u;
      LANES128(v10).n128_u64[1] = LANES128(v10).n128_u32[2];
      v6[19] = v10;
      v5 = *v2;
      v6 = (float32x4_t*)v2[1];
    }
    v11 = *(int8x16_t*)(v5 + 176);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v14).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[0] = *(_QWORD*)(v5 + 176);
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
    LANES128(v15).n128_u64[1] = LANES128(v13).n128_u64[0];
    *(int8x8_t*)&LANES128(v14).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v16).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(f_.v82).n128_u64[0]), 1);
    v17 = vmlaq_f32(vmulq_f32(f_.v82, v12),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v15, v14));
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v15).n128_u64[0];
    LANES128(v15).n128_u64[1] = *(_QWORD*)(v5 + 176);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v11).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v18 = vmlsq_f32(vmlaq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v15, v16)),
                    v11, v13);
    v19 = v6[21];
    f_.v80 = v18;
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v19, v18)))).n64_u64[0];
    if ((LANES64(v20).n64_u8[0] & 1) != 0 ||
        (LANES64(v20).n64_u8[2] & 1) != 0 ||
        (LANES64(v20).n64_u8[4] & 1) != 0 ||
        (LANES64(v20).n64_u8[6] & 1) != 0) {
      v21 = LANES128(v6[18]).n128_u32[2] | 1;
      LANES128(v6[21]).n128_u64[0] = LANES128(v18).n128_u64[0];
      LANES128(v6[21]).n128_u64[1] =
          LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0];
      LANES128(v6[18]).n128_u32[2] = v21;
      math_622ac0((void*)(&v83), (float32x2_t*)&f_.v80);
      v18 = v83;
      LANES128(v6[20]).n128_u64[0] = LANES128(v83).n128_u64[0];
      v22 = v6[20];
      LANES128(v22).n128_u64[1] = LANES128(v18).n128_u32[2];
      v6[20] = v22;
      v5 = *v2;
      v6 = (float32x4_t*)v2[1];
    }
    LANES128(v18).n128_f32[0] = *(float*)(v5 + 192) * f_.v81[0];
    v23 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0);
    LANES128(v23).n128_u32[3] = 0;
    v24 = vsubq_f32(v6[22], v23);
    v25 = vmulq_f32(v24, v24);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v6[22]).n128_u32[0] = LANES128(v18).n128_u32[0];
      LANES128(v6[22]).n128_u32[1] = LANES128(v18).n128_u32[0];
      v26 = v6[22];
      LANES128(v6[18]).n128_u32[2] |= 1u;
      LANES128(v26).n128_u64[1] = LANES128(v18).n128_u32[0];
      v6[22] = v26;
    }
    game_100ef00((__int64)v2);
    InfoCursorBottomImpl_100eaa0(v2);
  }
  v27 = *(__int64**)(a1 + 40);
  if (v27 != nullptr) {
    InfoCursorBottomImpl_100e7d0((void*)((__int64)f_.v81), *v27);
    v28 = *v27;
    v29 = (float32x4_t*)v27[1];
    v30 = *(float32x4_t*)(*v27 + 112);
    v31 = vsubq_f32(v29[19], v30);
    v32 = vmulq_f32(v31, v31);
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v29[19]).n128_u32[0] = LANES128(v30).n128_u32[0];
      LANES128(v29[19]).n128_u32[1] = *(_DWORD*)(v28 + 116);
      v33 = v29[19];
      LANES128(v33).n128_u32[2] = *(_DWORD*)(v28 + 120);
      LANES128(v29[18]).n128_u32[2] |= 1u;
      LANES128(v33).n128_u64[1] = LANES128(v33).n128_u32[2];
      v29[19] = v33;
      v28 = *v27;
      v29 = (float32x4_t*)v27[1];
    }
    v34 = *(int8x16_t*)(v28 + 176);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v38).n128_u64[0] = *(_QWORD*)(v28 + 176);
    LANES128(v39).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v35).n128_u64[0];
    LANES128(v38).n128_u64[1] = LANES128(v36).n128_u64[0];
    *(int8x8_t*)&LANES128(v37).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v39).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(f_.v82).n128_u64[0]), 1);
    v40 = vmlaq_f32(vmulq_f32(f_.v82, v35),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v38, v37));
    LANES128(v38).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v36).n128_u64[1] = LANES128(v38).n128_u64[0];
    LANES128(v38).n128_u64[1] = *(_QWORD*)(v28 + 176);
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v41 = vmlsq_f32(vmlaq_f32(v40, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v38, v39)),
                    v34, v36);
    v42 = v29[21];
    f_.v80 = v41;
    LANES64(v43).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v42, v41)))).n64_u64[0];
    if ((LANES64(v43).n64_u8[0] & 1) != 0 ||
        (LANES64(v43).n64_u8[2] & 1) != 0 ||
        (LANES64(v43).n64_u8[4] & 1) != 0 ||
        (LANES64(v43).n64_u8[6] & 1) != 0) {
      v44 = LANES128(v29[18]).n128_u32[2] | 1;
      LANES128(v29[21]).n128_u64[0] = LANES128(v41).n128_u64[0];
      LANES128(v29[21]).n128_u64[1] =
          LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0];
      LANES128(v29[18]).n128_u32[2] = v44;
      math_622ac0((void*)(&v83), (float32x2_t*)&f_.v80);
      v41 = v83;
      LANES128(v29[20]).n128_u64[0] = LANES128(v83).n128_u64[0];
      v45 = v29[20];
      LANES128(v45).n128_u64[1] = LANES128(v41).n128_u32[2];
      v29[20] = v45;
    }
    v46 = (float32x4_t*)v27[1];
    LANES128(v41).n128_f32[0] = *(float*)(*v27 + 192) * f_.v81[0];
    v47 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 0);
    LANES128(v47).n128_u32[3] = 0;
    v48 = vsubq_f32(v46[22], v47);
    v49 = vmulq_f32(v48, v48);
    LANES128(v49).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v46[22]).n128_u32[0] = LANES128(v41).n128_u32[0];
      LANES128(v46[22]).n128_u32[1] = LANES128(v41).n128_u32[0];
      v50 = v46[22];
      LANES128(v46[18]).n128_u32[2] |= 1u;
      LANES128(v50).n128_u64[1] = LANES128(v41).n128_u32[0];
      v46[22] = v50;
    }
    game_100ef00((__int64)v27);
    InfoCursorBottomImpl_100eaa0(v27);
  }
  v51 = *(__int64**)(a1 + 56);
  if (v51 != nullptr) {
    InfoCursorBottomImpl_100e7d0((void*)((__int64)f_.v81), *v51);
    v52 = *v51;
    v53 = (float32x4_t*)v51[1];
    v54 = *(float32x4_t*)(*v51 + 112);
    v55 = vsubq_f32(v53[19], v54);
    v56 = vmulq_f32(v55, v55);
    LANES128(v56).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v53[19]).n128_u32[0] = LANES128(v54).n128_u32[0];
      LANES128(v53[19]).n128_u32[1] = *(_DWORD*)(v52 + 116);
      v57 = v53[19];
      LANES128(v57).n128_u32[2] = *(_DWORD*)(v52 + 120);
      LANES128(v53[18]).n128_u32[2] |= 1u;
      LANES128(v57).n128_u64[1] = LANES128(v57).n128_u32[2];
      v53[19] = v57;
      v52 = *v51;
      v53 = (float32x4_t*)v51[1];
    }
    v58 = *(int8x16_t*)(v52 + 176);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] = *(_QWORD*)(v52 + 176);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v62).n128_u64[1] = LANES128(v60).n128_u64[0];
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v63).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(f_.v82).n128_u64[0]), 1);
    v64 = vmlaq_f32(vmulq_f32(f_.v82, v59),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v62, v61));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v60).n128_u64[1] = LANES128(v62).n128_u64[0];
    LANES128(v62).n128_u64[1] = *(_QWORD*)(v52 + 176);
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(f_.v82, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v65 = vmlsq_f32(vmlaq_f32(v64, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v62, v63)),
                    v58, v60);
    v66 = v53[21];
    f_.v80 = v65;
    LANES64(v67).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v66, v65)))).n64_u64[0];
    if ((LANES64(v67).n64_u8[0] & 1) != 0 ||
        (LANES64(v67).n64_u8[2] & 1) != 0 ||
        (LANES64(v67).n64_u8[4] & 1) != 0 ||
        (LANES64(v67).n64_u8[6] & 1) != 0) {
      v68 = LANES128(v53[18]).n128_u32[2] | 1;
      LANES128(v53[21]).n128_u64[0] = LANES128(v65).n128_u64[0];
      LANES128(v53[21]).n128_u64[1] =
          LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0];
      LANES128(v53[18]).n128_u32[2] = v68;
      math_622ac0((void*)(&v83), (float32x2_t*)&f_.v80);
      v65 = v83;
      LANES128(v53[20]).n128_u64[0] = LANES128(v83).n128_u64[0];
      v69 = v53[20];
      LANES128(v69).n128_u64[1] = LANES128(v65).n128_u32[2];
      v53[20] = v69;
    }
    v70 = (float32x4_t*)v51[1];
    LANES128(v65).n128_f32[0] = *(float*)(*v51 + 192) * f_.v81[0];
    v71 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 0);
    LANES128(v71).n128_u32[3] = 0;
    v72 = vsubq_f32(v70[22], v71);
    v73 = vmulq_f32(v72, v72);
    LANES128(v73).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v70[22]).n128_u32[0] = LANES128(v65).n128_u32[0];
      LANES128(v70[22]).n128_u32[1] = LANES128(v65).n128_u32[0];
      v74 = v70[22];
      LANES128(v70[18]).n128_u32[2] |= 1u;
      LANES128(v74).n128_u64[1] = LANES128(v65).n128_u32[0];
      v70[22] = v74;
    }
    game_100ef00((__int64)v51);
    InfoCursorBottomImpl_100eaa0(v51);
  }
  v75 = *(_QWORD*)(a1 + 72);
  if (v75 != 0) {
    if ((*(_BYTE*)(v75 + 40) & 1) == 0) {
      v76 = *(__int64**)(a1 + 72);
      *(_BYTE*)(v75 + 40) = 1;
      game_100f680(v76);
    }
    game_100f680((__int64*)v75);
  }
  result = InfoCursorBottomImpl_100de20(a1);
  if (*(_BYTE*)(a1 + 128) == 1) {
    v78 = *(float*)(a1 + 208);
    v79 = fabsf(a2 * 0x1.0000000000000p+2f);
    if (!(v78 > 0x0.0p+0f)) {
      if (v78 >= 0x0.0p+0f) {
        goto LABEL_45;
      }
      v78 = v79 + v78;
      if (!(v78 > 0x0.0p+0f)) {
        goto LABEL_45;
      }
    }
    else {
      v78 = v78 - v79;
      if (v78 >= 0x0.0p+0f) {
        goto LABEL_45;
      }
    }
    v78 = 0x0.0p+0f;
  LABEL_45:
    *(float*)(a1 + 208) = v78;
  }
  return result;
}

#pragma GCC visibility pop
