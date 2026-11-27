#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80bdc0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcFade_vtable[])();
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
__int64 ProcFade_Destructor(__int64 a1);
__int64 ProcFade_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void snd_findSlot_100a50(PSEUDO_X8, int*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_sound_g_game_sound;
extern int GameData_21fa938;
extern int GameData_21fa93c;
extern int GameData_21fa940;
void snd_Fade_Fade_10c830(__int64, float);
__int64 ProcFade_Unknown2(__int64 a1);
_QWORD* gfxa_1993840(__int64);
__int64* PrimitiveDrawManager_19928f0(__int64* result, __int128*, float, float,
                                      float, float);
__int64 PrimitiveDrawManager_1994180(__int64 result);
extern __int64 game_map_MapColorPalette_g_texture_archives;
float32x4_t* gfxa_1994460(float32x4_t* result);
__int64 ProcFade_80ac70(float32x4_t* a1);

__int64 ProcFade_Destructor(__int64 a1)
{
  int v2;
  int v3;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcFade_DeletingDestructor(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 ProcFade_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int v17;
  int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  int v24;
  int v25;
  __int64 result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  int v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float v42;
  struct {
    _QWORD v43[25];
    __int64 v44;
    __int64 v45;
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
    __int64 vars18;
  } v43_;

  v1 = *(float*)(a1 + 168);
  v2 = *(float*)(a1 + 172);
  *(_BYTE*)(a1 + 185) = 0;
  if (v2 < v1) {
    v4 = v2 + (**(float (***)(__int64))(a1 + 160))(a1 + 160);
    if (*(float*)(a1 + 168) < v4) {
      v4 = *(float*)(a1 + 168);
    }
    *(float*)(a1 + 172) = v4;
  }
  v5 = *(float*)(a1 + 232);
  v6 = *(float*)(a1 + 236);
  *(_BYTE*)(a1 + 249) = 0;
  if (v6 < v5) {
    v7 = v6 + (**(float (***)(__int64))(a1 + 224))(a1 + 224);
    if (*(float*)(a1 + 232) < v7) {
      v7 = *(float*)(a1 + 232);
    }
    *(float*)(a1 + 236) = v7;
  }
  v8 = *(float*)(a1 + 300);
  v9 = *(float*)(a1 + 296);
  *(_BYTE*)(a1 + 313) = 0;
  if (v8 < v9) {
    v10 = v8 + (**(float (***)(__int64))(a1 + 288))(a1 + 288);
    if (*(float*)(a1 + 296) < v10) {
      v10 = *(float*)(a1 + 296);
    }
    *(float*)(a1 + 300) = v10;
  }
  v11 = *(float*)(a1 + 364);
  v12 = *(float*)(a1 + 360);
  *(_BYTE*)(a1 + 377) = 0;
  if (v11 < v12) {
    v13 = v11 + (**(float (***)(__int64))(a1 + 352))(a1 + 352);
    if (*(float*)(a1 + 360) < v13) {
      v13 = *(float*)(a1 + 360);
    }
    *(float*)(a1 + 364) = v13;
  }
  v14 = *(float*)(a1 + 428);
  v15 = *(float*)(a1 + 424);
  *(_BYTE*)(a1 + 441) = 0;
  if (v14 < v15) {
    v16 = v14 + (**(float (***)(__int64))(a1 + 416))(a1 + 416);
    if (*(float*)(a1 + 424) < v16) {
      v16 = *(float*)(a1 + 424);
    }
    *(float*)(a1 + 428) = v16;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v18 = (v17 & 8) != 0 ? 2 : 3;
    if ((v18 & v17) == 0) {
      v19 = *(float*)(a1 + 232);
      v20 = *(float*)(a1 + 236);
      *(_BYTE*)(a1 + 249) = 0;
      if (v20 < v19) {
        *(float*)(a1 + 236) = v19;
      }
    }
  }
  LODWORD(v21) = LANES128_OF(((__n128 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)(a1 + 224) + 16LL))(a1 + 224))
                     .n128_u32[3];
  LODWORD(v22) = LANES128_OF(((__n128 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL))(a1 + 160))
                     .n128_u32[3];
  v23 = *(_DWORD*)(a1 + 536);
  if (v21 >= v22) {
    v22 = v21;
  }
  if (v22 >= 0x1.0000000000000p+0f) {
    if (v23 != 0) {
      goto LABEL_37;
    }
    v24 = 1;
  }
  else {
    if (v23 == 0) {
      goto LABEL_37;
    }
    v24 = -1;
  }
  v25 = GameData_224b6d8;
  *(_DWORD*)(a1 + 536) = v24 + v23;
  LODWORD(GameData_224b6d8) = v25 + v24;
LABEL_37:
  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v28 = v43_.vars10;
    v27 = v43_.vars18;
    v29 = v43_.vars8;
    v30 = v43_.v44;
    v31 = *(float*)(game_sound_g_game_sound + 592);
    v32 = *(unsigned __int8*)(game_sound_g_game_sound + 600);
    *(float*)(game_sound_g_game_sound + 596) = v31;
    if (v22 >= v31) {
      v33 = v31;
    }
    else {
      v33 = v22;
    }
    if (v32 == 0) {
      v22 = v33;
    }
    if (v31 != v22) {
      v43_.v44 = v30;
      v43_.v45 = v43_.vars0;
      v43_.vars0 = v29;
      v43_.vars10 = v28;
      v43_.vars18 = v27;
      v34 = result;
      *(float*)(result + 592) = v22;
      snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa938);
      v35 = snd_fnd_WeakHandle_get((__int64)v43_.v43);
      if (v35 != 0) {
        v36 = v35;
        v37 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
        snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v36 - 5552) + 112LL))(
            v36 - 5552, v43_.v43, v37);
        snd_Fade_Destroy_Fade(v43_.v43);
      }
      if ((*(_BYTE*)(v34 + 612) & 1) == 0) {
        snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa93c);
        v38 = snd_fnd_WeakHandle_get((__int64)v43_.v43);
        if (v38 != 0) {
          v39 = v38;
          v40 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
          snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
          (*(void (**)(__int64, _QWORD*, float))(
              *(_QWORD*)(v39 - 5552) + 112LL))(v39 - 5552, v43_.v43, v40);
          snd_Fade_Destroy_Fade(v43_.v43);
        }
      }
      snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa940);
      result = snd_fnd_WeakHandle_get((__int64)v43_.v43);
      if (result != 0) {
        v41 = result;
        v42 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
        snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v41 - 5552) + 112LL))(
            v41 - 5552, v43_.v43, v42);
        return snd_Fade_Destroy_Fade(v43_.v43);
      }
    }
  }
  return result;
}

__int64 ProcFade_80ac70(float32x4_t* a1)
{

#pragma clang fp contract(on)

  float32x4_t* v1;
  float v3;
  float v4;
  float v6;
  float v7;
  float v8;
  float v9;
  _BOOL4 v10;
  float v11;
  float v12;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  int v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  int v36;
  __int64 result;
  float32x4_t q0_;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  __int64** v45;
  __int64 v46;
  __int64****** v47;
  __int64***** v48;
  __int64**** v49;
  __int64*** v50;
  __int64** v51;
  __int64* v52;
  __int64 v53;
  float32x4_t* v54;
  __int128 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float32x4_t v60;
  float32x4_t v61;
  float v62;
  float v63;
  float32x4_t v64;
  float v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64****** v68;
  __int64***** v69;
  __int64**** v70;
  __int64*** v71;
  __int64** v72;
  __int64* v73;
  __int64 v74;
  float32x4_t* v75;
  __int128 v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float32x4_t v81;
  float32x4_t v82;
  float v83;
  float v84;
  float32x4_t v85;
  float v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64****** v89;
  __int64***** v90;
  __int64**** v91;
  __int64*** v92;
  __int64** v93;
  __int64* v94;
  __int64 v95;
  float32x4_t* v96;
  __int128 v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float32x4_t v102;
  float32x4_t v103;
  float v104;
  float v105;
  float32x4_t v106;
  float v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64****** v110;
  __int64***** v111;
  __int64**** v112;
  __int64*** v113;
  __int64** v114;
  __int64* v115;
  __int64 v116;
  float32x4_t* v117;
  __int128 v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float32x4_t v123;
  float32x4_t v124;
  float v125;
  float v126;
  float32x4_t v127;
  float v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64****** v131;
  __int64***** v132;
  __int64**** v133;
  __int64*** v134;
  __int64** v135;
  __int64* v136;
  __int64 v137;
  float32x4_t* v138;
  __int128 v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float32x4_t v144;
  float32x4_t v145;
  float v146;
  float v147;
  float32x4_t v148;
  float v149;
  unsigned __int64 v150;
  __int128 v151;

  v1 = a1 + 10;
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[10]).n128_u64[0] + 16))(
      a1 + 10);
  v3 = vgetq_lane_f32(q0_, 3);
  v4 = LANES128(*(v1)).n128_f32[2];
  if (v4 != 0x0.0p+0f & v4 > 0x1.0000000000000p+0f) {
    v6 = 0x1.0000000000000p+1f;
    v7 = LANES128(a1[10]).n128_f32[3];
    if (!((float)(v4 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v6 = v4 + -0x1.0000000000000p+0f;
    }
    v8 = 0x0.0p+0f;
    if (!((float)(v4 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v8 = v6;
    }
    if (!(v7 < v4)) {
      __typeof__(v9) z_ = (__typeof__(v9)){0};
      LODWORD(z_) =
          DWORDn(*(_OWORD*)&a1[13], sizeof(*(_OWORD*)&a1[13]) / 4 - 1);
      v9 = z_;
    }
    else {
      v9 = COERCE_FLOAT(
               DWORDn(*(_OWORD*)&a1[12], sizeof(*(_OWORD*)&a1[12]) / 4 - 1)) +
           (float)(vmuls_lane_f32(v7 * (float)(v7 * v7),
                                  vsubq_f32(a1[13], a1[12]), 3) /
                   (float)(v4 * (float)(v4 * v4)));
    }
    v3 = v3 + (float)(PSEUDO_UNFUSED((float)(v8 * (float)(v9 - v3)) *
                                     0x1.0000000000000p-1f));
  }
  v10 = (float)(0x1.0000000000000p+0f -
                (float)((float)(0x1.0000000000000p+0f - v3) *
                        (float)(0x1.0000000000000p+0f - v3))) != 0x0.0p+0f;
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[14]).n128_u64[0] + 16))(
      a1 + 14);
  v11 = vgetq_lane_f32(q0_, 3);
  v12 = LANES128(a1[14]).n128_f32[2];
  if (v12 != 0x0.0p+0f & v12 > 0x1.0000000000000p+0f) {
    v14 = 0x1.0000000000000p+1f;
    v15 = LANES128(a1[14]).n128_f32[3];
    if (!((float)(v12 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v14 = v12 + -0x1.0000000000000p+0f;
    }
    v16 = 0x0.0p+0f;
    if (!((float)(v12 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v16 = v14;
    }
    if (!(v15 < v12)) {
      __typeof__(v17) z_ = (__typeof__(v17)){0};
      LODWORD(z_) =
          DWORDn(*(_OWORD*)&a1[17], sizeof(*(_OWORD*)&a1[17]) / 4 - 1);
      v17 = z_;
    }
    else {
      v17 = COERCE_FLOAT(
                DWORDn(*(_OWORD*)&a1[16], sizeof(*(_OWORD*)&a1[16]) / 4 - 1)) +
            (float)(vmuls_lane_f32(v15 * (float)(v15 * v15),
                                   vsubq_f32(a1[17], a1[16]), 3) /
                    (float)(v12 * (float)(v12 * v12)));
    }
    v11 = v11 + (float)(PSEUDO_UNFUSED((float)(v16 * (float)(v17 - v11)) *
                                       0x1.0000000000000p-1f));
  }
  v18 = 0x1.0000000000000p+0f - (float)((float)(0x1.0000000000000p+0f - v11) *
                                        (float)(0x1.0000000000000p+0f - v11));
  if (v18 == 0x1.0000000000000p+0f) {
    v19 = 2;
  }
  else {
    v19 = v10 | 2;
  }
  if (v18 != 0x0.0p+0f) {
    v10 = v19;
  }
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[18]).n128_u64[0] + 16))(
      a1 + 18);
  v20 = vgetq_lane_f32(q0_, 3);
  v21 = LANES128(a1[18]).n128_f32[2];
  if (v21 != 0x0.0p+0f && v21 > 0x1.0000000000000p+0f) {
    v22 = 0x1.0000000000000p+1f;
    v23 = LANES128(a1[18]).n128_f32[3];
    if (!((float)(v21 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v22 = v21 + -0x1.0000000000000p+0f;
    }
    v24 = 0x0.0p+0f;
    if (!((float)(v21 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v24 = v22;
    }
    if (!(v23 < v21)) {
      __typeof__(v25) z_ = (__typeof__(v25)){0};
      LODWORD(z_) =
          DWORDn(*(_OWORD*)&a1[21], sizeof(*(_OWORD*)&a1[21]) / 4 - 1);
      v25 = z_;
    }
    else {
      v25 = COERCE_FLOAT(
                DWORDn(*(_OWORD*)&a1[20], sizeof(*(_OWORD*)&a1[20]) / 4 - 1)) +
            (float)(vmuls_lane_f32(v23 * (float)(v23 * v23),
                                   vsubq_f32(a1[21], a1[20]), 3) /
                    (float)(v21 * (float)(v21 * v21)));
    }
    v20 = v20 + (float)(PSEUDO_UNFUSED((float)(v24 * (float)(v25 - v20)) *
                                       0x1.0000000000000p-1f));
  }
  v26 = 0x1.0000000000000p+0f - (float)((float)(0x1.0000000000000p+0f - v20) *
                                        (float)(0x1.0000000000000p+0f - v20));
  if (v26 == 0x1.0000000000000p+0f) {
    v27 = 4;
  }
  else {
    v27 = v10 | 4;
  }
  if (v26 != 0x0.0p+0f) {
    v10 = v27;
  }
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[22]).n128_u64[0] + 16))(
      a1 + 22);
  v28 = vgetq_lane_f32(q0_, 3);
  v29 = LANES128(a1[22]).n128_f32[2];
  if (v29 != 0x0.0p+0f && v29 > 0x1.0000000000000p+0f) {
    v30 = 0x1.0000000000000p+1f;
    v31 = LANES128(a1[22]).n128_f32[3];
    if (!((float)(v29 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v30 = v29 + -0x1.0000000000000p+0f;
    }
    v32 = 0x0.0p+0f;
    if (!((float)(v29 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v32 = v30;
    }
    if (!(v31 < v29)) {
      __typeof__(v33) z_ = (__typeof__(v33)){0};
      LODWORD(z_) =
          DWORDn(*(_OWORD*)&a1[25], sizeof(*(_OWORD*)&a1[25]) / 4 - 1);
      v33 = z_;
    }
    else {
      v33 = COERCE_FLOAT(
                DWORDn(*(_OWORD*)&a1[24], sizeof(*(_OWORD*)&a1[24]) / 4 - 1)) +
            (float)(vmuls_lane_f32(v31 * (float)(v31 * v31),
                                   vsubq_f32(a1[25], a1[24]), 3) /
                    (float)(v29 * (float)(v29 * v29)));
    }
    v28 = v28 + (float)(PSEUDO_UNFUSED((float)(v32 * (float)(v33 - v28)) *
                                       0x1.0000000000000p-1f));
  }
  v34 = 0x1.0000000000000p+0f - (float)((float)(0x1.0000000000000p+0f - v28) *
                                        (float)(0x1.0000000000000p+0f - v28));
  if (v34 == 0x1.0000000000000p+0f) {
    v35 = 8;
  }
  else {
    v35 = v10 | 8;
  }
  if (v34 == 0x0.0p+0f) {
    v36 = v10;
  }
  else {
    v36 = v35;
  }
  result = (*(__int64 (**)(float32x4_t*))(LANES128(a1[26]).n128_u64[0] + 16))(
      a1 + 26),
  q0_ = COERCE_AS(float32x4_t, PSEUDO_REGISTER(__n128, "v0", "=w"));
  v38 = vgetq_lane_f32(q0_, 3);
  v39 = LANES128(a1[26]).n128_f32[2];
  if (v39 != 0x0.0p+0f && v39 > 0x1.0000000000000p+0f) {
    v40 = 0x1.0000000000000p+1f;
    v41 = LANES128(a1[26]).n128_f32[3];
    if (!((float)(v39 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v40 = v39 + -0x1.0000000000000p+0f;
    }
    v42 = 0x0.0p+0f;
    if (!((float)(v39 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v42 = v40;
    }
    if (!(v41 < v39)) {
      __typeof__(v43) z_ = (__typeof__(v43)){0};
      LODWORD(z_) =
          DWORDn(*(_OWORD*)&a1[29], sizeof(*(_OWORD*)&a1[29]) / 4 - 1);
      v43 = z_;
    }
    else {
      v43 = COERCE_FLOAT(
                DWORDn(*(_OWORD*)&a1[28], sizeof(*(_OWORD*)&a1[28]) / 4 - 1)) +
            (float)(vmuls_lane_f32(v41 * (float)(v41 * v41),
                                   vsubq_f32(a1[29], a1[28]), 3) /
                    (float)(v39 * (float)(v39 * v39)));
    }
    v38 = v38 + (float)(PSEUDO_UNFUSED((float)(v42 * (float)(v43 - v38)) *
                                       0x1.0000000000000p-1f));
  }
  v44 = 0x1.0000000000000p+0f - (float)((float)(0x1.0000000000000p+0f - v38) *
                                        (float)(0x1.0000000000000p+0f - v38));
  if (v44 == 0x0.0p+0f) {
    if (v36 == 0) {
      return result;
    }
  }
  else {
    if (v44 == 0x1.0000000000000p+0f) {
      v45 = (__int64**)game_map_MapColorPalette_g_texture_archives;
    LABEL_127:
      gfxa_1993840(**v45);
      v130 = **v45;
      *(_DWORD*)(v130 + 17404) = 3;
      v131 = *(__int64*******)v130;
      *((_DWORD*)v131 + 4328) = 0;
      v132 = *v131;
      *((_DWORD*)v132 + 4327) = 1;
      v133 = *v132;
      *((_BYTE*)v133 + 17395) = 1;
      v134 = *v133;
      *((_DWORD*)v134 + 4324) = 0;
      v135 = *v134;
      *((_BYTE*)v135 + 17394) = 0;
      v136 = *v135;
      *((_BYTE*)v136 + 17393) = 0;
      v137 = *v136;
      v138 = *(float32x4_t**)v137;
      *(_DWORD*)(v137 + 17328) = 1300;
      gfxa_1994460(v138);
      q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[26]).n128_u64[0] +
                                              16))(a1 + 26);
      v139 = COERCE_AS(__int128, q0_);
      v140 = LANES128(a1[26]).n128_f32[2];
      if (v140 != 0x0.0p+0f && v140 > 0x1.0000000000000p+0f) {
        v141 = 0x1.0000000000000p+1f;
        v142 = LANES128(a1[26]).n128_f32[3];
        if (!((float)(v140 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
          v141 = v140 + -0x1.0000000000000p+0f;
        }
        v143 = 0x0.0p+0f;
        if (!((float)(v140 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
          v143 = v141;
        }
        v144 = a1[29];
        if (!(v142 < v140)) {
          {
            __typeof__(v149) z_ = (__typeof__(v149)){0};
            LODWORD(z_) = DWORDn(LANES128(a1[29]).n128_u64[0],
                                 sizeof(LANES128(a1[29]).n128_u64[0]) / 4 - 1);
            v149 = z_;
          }
          v150 = LANES128(a1[29]).n128_u64[1];
        }
        else {
          v145 = a1[28];
          v146 = v142 * (float)(v142 * v142);
          v147 = v140 * (float)(v140 * v140);
          v148 = vsubq_f32(v144, v145);
          PSEUDO_LOW_LANE128(
              v144, n128_f32,
              LANES128(v145).n128_f32[0] +
                  (float)((float)(v146 * LANES128(v148).n128_f32[0]) / v147));
          v149 = COERCE_FLOAT(
                     DWORDn(LANES128(a1[28]).n128_u64[0],
                            sizeof(LANES128(a1[28]).n128_u64[0]) / 4 - 1)) +
                 (float)(vmuls_lane_f32(
                             v146,
                             COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]),
                             1) /
                         v147);
          v150 = __PAIR64__(LANES128(v145).n128_f32[3] +
                                (float)(vmuls_lane_f32(v146, v148, 3) / v147),
                            COERCE_FLOAT(LANES128(a1[28]).n128_u64[1]) +
                                (float)(vmuls_lane_f32(v146, v148, 2) / v147));
        }
        *(float*)&v139 = *(float*)&v139 +
                         (float)(PSEUDO_UNFUSED(
                             (float)(v143 * (float)(LANES128(v144).n128_f32[0] -
                                                    *(float*)&v139)) *
                             0x1.0000000000000p-1f));
        *((float*)&v139 + 1) =
            *((float*)&v139 + 1) +
            (float)(PSEUDO_UNFUSED(
                (float)(v143 * (float)(v149 - *((float*)&v139 + 1))) *
                0x1.0000000000000p-1f));
        *((float*)&v139 + 2) =
            *((float*)&v139 + 2) +
            (float)(PSEUDO_UNFUSED(
                (float)(v143 * (float)(*(float*)&v150 - *((float*)&v139 + 2))) *
                0x1.0000000000000p-1f));
        *((float*)&v139 + 3) =
            *((float*)&v139 + 3) +
            (float)(PSEUDO_UNFUSED(
                (float)(v143 *
                        (float)(*((float*)&v150 + 1) - *((float*)&v139 + 3))) *
                0x1.0000000000000p-1f));
      }
      *((float*)&v139 + 3) =
          0x1.0000000000000p+0f -
          (float)((float)(0x1.0000000000000p+0f - *((float*)&v139 + 3)) *
                  (float)(0x1.0000000000000p+0f - *((float*)&v139 + 3)));
      v151 = v139;
      PrimitiveDrawManager_19928f0((__int64*)v45, &v151, 0x0.0p+0f, 0x0.0p+0f,
                                   0x1.e000000000000p+10f,
                                   0x1.0e00000000000p+10f);
      return PrimitiveDrawManager_1994180(**v45);
    }
    LOBYTE(v36) = v36 | 0x10;
  }
  v45 = (__int64**)game_map_MapColorPalette_g_texture_archives;
  if ((v36 & 1) != 0) {
    gfxa_1993840(**(_QWORD**)game_map_MapColorPalette_g_texture_archives);
    v46 = **v45;
    *(_DWORD*)(v46 + 17404) = 3;
    v47 = *(__int64*******)v46;
    *((_DWORD*)v47 + 4328) = 0;
    v48 = *v47;
    *((_DWORD*)v48 + 4327) = 1;
    v49 = *v48;
    *((_BYTE*)v49 + 17395) = 1;
    v50 = *v49;
    *((_DWORD*)v50 + 4324) = 0;
    v51 = *v50;
    *((_BYTE*)v51 + 17394) = 0;
    v52 = *v51;
    *((_BYTE*)v52 + 17393) = 0;
    v53 = *v52;
    v54 = *(float32x4_t**)v53;
    *(_DWORD*)(v53 + 17328) = 101;
    gfxa_1994460(v54);
    q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[10]).n128_u64[0] + 16))(
        v1);
    v55 = COERCE_AS(__int128, q0_);
    v56 = LANES128(a1[10]).n128_f32[2];
    if (v56 != 0x0.0p+0f && v56 > 0x1.0000000000000p+0f) {
      v57 = 0x1.0000000000000p+1f;
      v58 = LANES128(a1[10]).n128_f32[3];
      if (!((float)(v56 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
        v57 = v56 + -0x1.0000000000000p+0f;
      }
      v59 = 0x0.0p+0f;
      if (!((float)(v56 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
        v59 = v57;
      }
      v60 = a1[13];
      if (!(v58 < v56)) {
        {
          __typeof__(v65) z_ = (__typeof__(v65)){0};
          LODWORD(z_) = DWORDn(LANES128(a1[13]).n128_u64[0],
                               sizeof(LANES128(a1[13]).n128_u64[0]) / 4 - 1);
          v65 = z_;
        }
        v66 = LANES128(a1[13]).n128_u64[1];
      }
      else {
        v61 = a1[12];
        v62 = v58 * (float)(v58 * v58);
        v63 = v56 * (float)(v56 * v56);
        v64 = vsubq_f32(v60, v61);
        PSEUDO_LOW_LANE128(
            v60, n128_f32,
            LANES128(v61).n128_f32[0] +
                (float)((float)(v62 * LANES128(v64).n128_f32[0]) / v63));
        v65 =
            COERCE_FLOAT(DWORDn(LANES128(a1[12]).n128_u64[0],
                                sizeof(LANES128(a1[12]).n128_u64[0]) / 4 - 1)) +
            (float)(vmuls_lane_f32(
                        v62, COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                        1) /
                    v63);
        v66 = __PAIR64__(LANES128(v61).n128_f32[3] +
                             (float)(vmuls_lane_f32(v62, v64, 3) / v63),
                         COERCE_FLOAT(LANES128(a1[12]).n128_u64[1]) +
                             (float)(vmuls_lane_f32(v62, v64, 2) / v63));
      }
      *(float*)&v55 =
          *(float*)&v55 + (float)(PSEUDO_UNFUSED(
                              (float)(v59 * (float)(LANES128(v60).n128_f32[0] -
                                                    *(float*)&v55)) *
                              0x1.0000000000000p-1f));
      *((float*)&v55 + 1) =
          *((float*)&v55 + 1) +
          (float)(PSEUDO_UNFUSED(
              (float)(v59 * (float)(v65 - *((float*)&v55 + 1))) *
              0x1.0000000000000p-1f));
      *((float*)&v55 + 2) =
          *((float*)&v55 + 2) +
          (float)(PSEUDO_UNFUSED(
              (float)(v59 * (float)(*(float*)&v66 - *((float*)&v55 + 2))) *
              0x1.0000000000000p-1f));
      *((float*)&v55 + 3) =
          *((float*)&v55 + 3) +
          (float)(PSEUDO_UNFUSED((float)(v59 * (float)(*((float*)&v66 + 1) -
                                                       *((float*)&v55 + 3))) *
                                 0x1.0000000000000p-1f));
    }
    *((float*)&v55 + 3) =
        0x1.0000000000000p+0f -
        (float)((float)(0x1.0000000000000p+0f - *((float*)&v55 + 3)) *
                (float)(0x1.0000000000000p+0f - *((float*)&v55 + 3)));
    v151 = v55;
    PrimitiveDrawManager_19928f0((__int64*)v45, &v151, 0x0.0p+0f, 0x0.0p+0f,
                                 0x1.e000000000000p+10f,
                                 0x1.0e00000000000p+10f);
    result = PrimitiveDrawManager_1994180(**v45);
    if ((v36 & 2) == 0) {
    LABEL_79:
      if ((v36 & 4) == 0) {
        goto LABEL_80;
      }
      goto LABEL_105;
    }
  }
  else if ((v36 & 2) == 0) {
    goto LABEL_79;
  }
  gfxa_1993840(**v45);
  v67 = **v45;
  *(_DWORD*)(v67 + 17404) = 3;
  v68 = *(__int64*******)v67;
  *((_DWORD*)v68 + 4328) = 0;
  v69 = *v68;
  *((_DWORD*)v69 + 4327) = 1;
  v70 = *v69;
  *((_BYTE*)v70 + 17395) = 1;
  v71 = *v70;
  *((_DWORD*)v71 + 4324) = 0;
  v72 = *v71;
  *((_BYTE*)v72 + 17394) = 0;
  v73 = *v72;
  *((_BYTE*)v73 + 17393) = 0;
  v74 = *v73;
  v75 = *(float32x4_t**)v74;
  *(_DWORD*)(v74 + 17328) = 1000;
  gfxa_1994460(v75);
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[14]).n128_u64[0] + 16))(
      a1 + 14);
  v76 = COERCE_AS(__int128, q0_);
  v77 = LANES128(a1[14]).n128_f32[2];
  if (v77 != 0x0.0p+0f && v77 > 0x1.0000000000000p+0f) {
    v78 = 0x1.0000000000000p+1f;
    v79 = LANES128(a1[14]).n128_f32[3];
    if (!((float)(v77 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v78 = v77 + -0x1.0000000000000p+0f;
    }
    v80 = 0x0.0p+0f;
    if (!((float)(v77 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v80 = v78;
    }
    v81 = a1[17];
    if (!(v79 < v77)) {
      {
        __typeof__(v86) z_ = (__typeof__(v86)){0};
        LODWORD(z_) = DWORDn(LANES128(a1[17]).n128_u64[0],
                             sizeof(LANES128(a1[17]).n128_u64[0]) / 4 - 1);
        v86 = z_;
      }
      v87 = LANES128(a1[17]).n128_u64[1];
    }
    else {
      v82 = a1[16];
      v83 = v79 * (float)(v79 * v79);
      v84 = v77 * (float)(v77 * v77);
      v85 = vsubq_f32(v81, v82);
      PSEUDO_LOW_LANE128(
          v81, n128_f32,
          LANES128(v82).n128_f32[0] +
              (float)((float)(v83 * LANES128(v85).n128_f32[0]) / v84));
      v86 = COERCE_FLOAT(DWORDn(LANES128(a1[16]).n128_u64[0],
                                sizeof(LANES128(a1[16]).n128_u64[0]) / 4 - 1)) +
            (float)(vmuls_lane_f32(
                        v83, COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]),
                        1) /
                    v84);
      v87 = __PAIR64__(LANES128(v82).n128_f32[3] +
                           (float)(vmuls_lane_f32(v83, v85, 3) / v84),
                       COERCE_FLOAT(LANES128(a1[16]).n128_u64[1]) +
                           (float)(vmuls_lane_f32(v83, v85, 2) / v84));
    }
    *(float*)&v76 =
        *(float*)&v76 +
        (float)(PSEUDO_UNFUSED(
            (float)(v80 * (float)(LANES128(v81).n128_f32[0] - *(float*)&v76)) *
            0x1.0000000000000p-1f));
    *((float*)&v76 + 1) =
        *((float*)&v76 + 1) +
        (float)(PSEUDO_UNFUSED(
            (float)(v80 * (float)(v86 - *((float*)&v76 + 1))) *
            0x1.0000000000000p-1f));
    *((float*)&v76 + 2) =
        *((float*)&v76 + 2) +
        (float)(PSEUDO_UNFUSED(
            (float)(v80 * (float)(*(float*)&v87 - *((float*)&v76 + 2))) *
            0x1.0000000000000p-1f));
    *((float*)&v76 + 3) =
        *((float*)&v76 + 3) +
        (float)(PSEUDO_UNFUSED(
            (float)(v80 * (float)(*((float*)&v87 + 1) - *((float*)&v76 + 3))) *
            0x1.0000000000000p-1f));
  }
  *((float*)&v76 + 3) =
      0x1.0000000000000p+0f -
      (float)((float)(0x1.0000000000000p+0f - *((float*)&v76 + 3)) *
              (float)(0x1.0000000000000p+0f - *((float*)&v76 + 3)));
  v151 = v76;
  PrimitiveDrawManager_19928f0((__int64*)v45, &v151, 0x0.0p+0f, 0x0.0p+0f,
                               0x1.e000000000000p+10f, 0x1.0e00000000000p+10f);
  result = PrimitiveDrawManager_1994180(**v45);
  if ((v36 & 4) == 0) {
  LABEL_80:
    if ((v36 & 8) == 0) {
      goto LABEL_81;
    }
    goto LABEL_116;
  }
LABEL_105:
  gfxa_1993840(**v45);
  v88 = **v45;
  *(_DWORD*)(v88 + 17404) = 3;
  v89 = *(__int64*******)v88;
  *((_DWORD*)v89 + 4328) = 0;
  v90 = *v89;
  *((_DWORD*)v90 + 4327) = 1;
  v91 = *v90;
  *((_BYTE*)v91 + 17395) = 1;
  v92 = *v91;
  *((_DWORD*)v92 + 4324) = 0;
  v93 = *v92;
  *((_BYTE*)v93 + 17394) = 0;
  v94 = *v93;
  *((_BYTE*)v94 + 17393) = 0;
  v95 = *v94;
  v96 = *(float32x4_t**)v95;
  *(_DWORD*)(v95 + 17328) = 1100;
  gfxa_1994460(v96);
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[18]).n128_u64[0] + 16))(
      a1 + 18);
  v97 = COERCE_AS(__int128, q0_);
  v98 = LANES128(a1[18]).n128_f32[2];
  if (v98 != 0x0.0p+0f && v98 > 0x1.0000000000000p+0f) {
    v99 = 0x1.0000000000000p+1f;
    v100 = LANES128(a1[18]).n128_f32[3];
    if (!((float)(v98 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v99 = v98 + -0x1.0000000000000p+0f;
    }
    v101 = 0x0.0p+0f;
    if (!((float)(v98 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v101 = v99;
    }
    v102 = a1[21];
    if (!(v100 < v98)) {
      {
        __typeof__(v107) z_ = (__typeof__(v107)){0};
        LODWORD(z_) = DWORDn(LANES128(a1[21]).n128_u64[0],
                             sizeof(LANES128(a1[21]).n128_u64[0]) / 4 - 1);
        v107 = z_;
      }
      v108 = LANES128(a1[21]).n128_u64[1];
    }
    else {
      v103 = a1[20];
      v104 = v100 * (float)(v100 * v100);
      v105 = v98 * (float)(v98 * v98);
      v106 = vsubq_f32(v102, v103);
      PSEUDO_LOW_LANE128(
          v102, n128_f32,
          LANES128(v103).n128_f32[0] +
              (float)((float)(v104 * LANES128(v106).n128_f32[0]) / v105));
      v107 =
          COERCE_FLOAT(DWORDn(LANES128(a1[20]).n128_u64[0],
                              sizeof(LANES128(a1[20]).n128_u64[0]) / 4 - 1)) +
          (float)(vmuls_lane_f32(
                      v104, COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                      1) /
                  v105);
      v108 = __PAIR64__(LANES128(v103).n128_f32[3] +
                            (float)(vmuls_lane_f32(v104, v106, 3) / v105),
                        COERCE_FLOAT(LANES128(a1[20]).n128_u64[1]) +
                            (float)(vmuls_lane_f32(v104, v106, 2) / v105));
    }
    *(float*)&v97 =
        *(float*)&v97 + (float)(PSEUDO_UNFUSED(
                            (float)(v101 * (float)(LANES128(v102).n128_f32[0] -
                                                   *(float*)&v97)) *
                            0x1.0000000000000p-1f));
    *((float*)&v97 + 1) =
        *((float*)&v97 + 1) +
        (float)(PSEUDO_UNFUSED(
            (float)(v101 * (float)(v107 - *((float*)&v97 + 1))) *
            0x1.0000000000000p-1f));
    *((float*)&v97 + 2) =
        *((float*)&v97 + 2) +
        (float)(PSEUDO_UNFUSED(
            (float)(v101 * (float)(*(float*)&v108 - *((float*)&v97 + 2))) *
            0x1.0000000000000p-1f));
    *((float*)&v97 + 3) =
        *((float*)&v97 + 3) +
        (float)(PSEUDO_UNFUSED((float)(v101 * (float)(*((float*)&v108 + 1) -
                                                      *((float*)&v97 + 3))) *
                               0x1.0000000000000p-1f));
  }
  *((float*)&v97 + 3) =
      0x1.0000000000000p+0f -
      (float)((float)(0x1.0000000000000p+0f - *((float*)&v97 + 3)) *
              (float)(0x1.0000000000000p+0f - *((float*)&v97 + 3)));
  v151 = v97;
  PrimitiveDrawManager_19928f0((__int64*)v45, &v151, 0x0.0p+0f, 0x0.0p+0f,
                               0x1.e000000000000p+10f, 0x1.0e00000000000p+10f);
  result = PrimitiveDrawManager_1994180(**v45);
  if ((v36 & 8) == 0) {
  LABEL_81:
    if ((v36 & 0x10) == 0) {
      return result;
    }
    goto LABEL_127;
  }
LABEL_116:
  gfxa_1993840(**v45);
  v109 = **v45;
  *(_DWORD*)(v109 + 17404) = 3;
  v110 = *(__int64*******)v109;
  *((_DWORD*)v110 + 4328) = 0;
  v111 = *v110;
  *((_DWORD*)v111 + 4327) = 1;
  v112 = *v111;
  *((_BYTE*)v112 + 17395) = 1;
  v113 = *v112;
  *((_DWORD*)v113 + 4324) = 0;
  v114 = *v113;
  *((_BYTE*)v114 + 17394) = 0;
  v115 = *v114;
  *((_BYTE*)v115 + 17393) = 0;
  v116 = *v115;
  v117 = *(float32x4_t**)v116;
  *(_DWORD*)(v116 + 17328) = 1200;
  gfxa_1994460(v117);
  q0_ = (*(float32x4_t(**)(float32x4_t*))(LANES128(a1[22]).n128_u64[0] + 16))(
      a1 + 22);
  v118 = COERCE_AS(__int128, q0_);
  v119 = LANES128(a1[22]).n128_f32[2];
  if (v119 != 0x0.0p+0f && v119 > 0x1.0000000000000p+0f) {
    v120 = 0x1.0000000000000p+1f;
    v121 = LANES128(a1[22]).n128_f32[3];
    if (!((float)(v119 + -0x1.0000000000000p+0f) > 0x1.0000000000000p+1f)) {
      v120 = v119 + -0x1.0000000000000p+0f;
    }
    v122 = 0x0.0p+0f;
    if (!((float)(v119 + -0x1.0000000000000p+0f) < 0x0.0p+0f)) {
      v122 = v120;
    }
    v123 = a1[25];
    if (!(v121 < v119)) {
      {
        __typeof__(v128) z_ = (__typeof__(v128)){0};
        LODWORD(z_) = DWORDn(LANES128(a1[25]).n128_u64[0],
                             sizeof(LANES128(a1[25]).n128_u64[0]) / 4 - 1);
        v128 = z_;
      }
      v129 = LANES128(a1[25]).n128_u64[1];
    }
    else {
      v124 = a1[24];
      v125 = v121 * (float)(v121 * v121);
      v126 = v119 * (float)(v119 * v119);
      v127 = vsubq_f32(v123, v124);
      PSEUDO_LOW_LANE128(
          v123, n128_f32,
          LANES128(v124).n128_f32[0] +
              (float)((float)(v125 * LANES128(v127).n128_f32[0]) / v126));
      v128 =
          COERCE_FLOAT(DWORDn(LANES128(a1[24]).n128_u64[0],
                              sizeof(LANES128(a1[24]).n128_u64[0]) / 4 - 1)) +
          (float)(vmuls_lane_f32(
                      v125, COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]),
                      1) /
                  v126);
      v129 = __PAIR64__(LANES128(v124).n128_f32[3] +
                            (float)(vmuls_lane_f32(v125, v127, 3) / v126),
                        COERCE_FLOAT(LANES128(a1[24]).n128_u64[1]) +
                            (float)(vmuls_lane_f32(v125, v127, 2) / v126));
    }
    *(float*)&v118 =
        *(float*)&v118 + (float)(PSEUDO_UNFUSED(
                             (float)(v122 * (float)(LANES128(v123).n128_f32[0] -
                                                    *(float*)&v118)) *
                             0x1.0000000000000p-1f));
    *((float*)&v118 + 1) =
        *((float*)&v118 + 1) +
        (float)(PSEUDO_UNFUSED(
            (float)(v122 * (float)(v128 - *((float*)&v118 + 1))) *
            0x1.0000000000000p-1f));
    *((float*)&v118 + 2) =
        *((float*)&v118 + 2) +
        (float)(PSEUDO_UNFUSED(
            (float)(v122 * (float)(*(float*)&v129 - *((float*)&v118 + 2))) *
            0x1.0000000000000p-1f));
    *((float*)&v118 + 3) =
        *((float*)&v118 + 3) +
        (float)(PSEUDO_UNFUSED((float)(v122 * (float)(*((float*)&v129 + 1) -
                                                      *((float*)&v118 + 3))) *
                               0x1.0000000000000p-1f));
  }
  *((float*)&v118 + 3) =
      0x1.0000000000000p+0f -
      (float)((float)(0x1.0000000000000p+0f - *((float*)&v118 + 3)) *
              (float)(0x1.0000000000000p+0f - *((float*)&v118 + 3)));
  v151 = v118;
  PrimitiveDrawManager_19928f0((__int64*)v45, &v151, 0x0.0p+0f, 0x0.0p+0f,
                               0x1.e000000000000p+10f, 0x1.0e00000000000p+10f);
  result = PrimitiveDrawManager_1994180(**v45);
  if ((v36 & 0x10) != 0) {
    goto LABEL_127;
  }
  return result;
}

#pragma GCC visibility pop
