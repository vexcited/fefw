#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 Camera_1315450(__int64 result);
__int64 game_gmap_1317f10(float32x4_t*, float32x4_t*);
__int64 game_gmap_1340560(__int64 result, char, __n128, long double);
__int64 std___1___shared_weak_count___release_weak(__int64);
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
extern _UNKNOWN* GameData_212c188;
extern __int64* GameData_212d708;
extern __int64 GameData_212c638;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float Cursor_734120(int, int, float, float, float, float);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void game_gmap_anonymous_1523820(__int64, char);
__int64 game_gmap_13150c0(__int64 a1);
void game_gmap_1522f60(__int64 a1, __n128 a2, long double a3);

__int64 game_gmap_13150c0(__int64 a1)
{
  float v4;
  float v6;
  __int64 v7;
  unsigned __int64 v8;
  __int128 v9;
  float v11;
  float v12;
  float v13;
  __int128 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float32x4_t v36;

  v4 = *(float*)(a1 + 956);
  if (v4 <= 0x0.0p+0f) {
    return 0;
  }
  v6 = *(float*)(a1 + 944);
  v7 = game_ProcFadeView_instance_;
  if (v4 >= (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) +
                    v6)) {
    v4 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) +
         v6;
  }
  *(float*)(a1 + 944) = v4;
  if (v7 != 0) {
    v8 = v7 + ((unsigned __int64)*(unsigned __int8*)(v7 + 480) << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      v9 = COERCE_AS(
          __typeof__(v9),
          (*(__n128(**)(__int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160));
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f) {
      (*(void (**)(__int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
      if (v11 == 0x1.0000000000000p+0f) {
        Camera_1315450(a1);
        return 0;
      }
    }
  }
  v12 = *(float*)(a1 + 796);
  v13 = *(float*)(a1 + 792);
  v14 = *(_OWORD*)(a1 + 832);
  if (v12 >= v13) {
    {
      __typeof__(v16) z_ = (__typeof__(v16)){0};
      LODWORD(z_) =
          DWORDn(*(_QWORD*)(a1 + 832), sizeof(*(_QWORD*)(a1 + 832)) / 4 - 1);
      v16 = z_;
    }
  }
  else {
    v15 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                        *(float*)(a1 + 816), *(float*)&v14, v12, v13);
    v16 = *(float*)(a1 + 836);
    v12 = *(float*)(a1 + 796);
    v13 = *(float*)(a1 + 792);
    *(float*)&v14 = v15;
  }
  v34 = *(float*)&v14;
  if (v12 < v13) {
    v17 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                        *(float*)(a1 + 820), v16, v12, v13);
    v12 = *(float*)(a1 + 796);
    v13 = *(float*)(a1 + 792);
    v16 = v17;
  }
  v18 = *(float*)(a1 + 840);
  if (v12 < v13) {
    v18 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                        *(float*)(a1 + 824), v18, v12, v13);
  }
  if (v34 == COERCE_FLOAT(*(_OWORD*)(a1 + 864)) &
          v16 == COERCE_FLOAT(DWORDn(*(_QWORD*)(a1 + 864),
                                     sizeof(*(_QWORD*)(a1 + 864)) / 4 - 1)) &&
      v18 == COERCE_FLOAT(*(_QWORD*)(a1 + 872))) {
    v21 = *(float*)(a1 + 708);
    v22 = *(float*)(a1 + 704);
    v23 = *(float*)(a1 + 728);
    if (v21 < v22) {
      v23 = Cursor_734120(*(_DWORD*)(a1 + 712), *(_DWORD*)(a1 + 716),
                          *(float*)(a1 + 724), v23, v21, v22);
    }
    if (v23 == *(float*)(a1 + 884)) {
      goto LABEL_43;
    }
  }
  v24 = (float)(*(float*)(a1 + 944) * 0x1.921fb60000000p+1f) /
        *(float*)(a1 + 956);
  v25 = v24 +
        (float)(roundf(v24 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v25 <= 0x1.921fb60000000p+0f) {
    v27 = 0x1.0000000000000p+0f;
    if (v25 >= -0x1.921fb60000000p+0f) {
      goto LABEL_35;
    }
    v26 = -0x1.921fb60000000p+1f;
  }
  else {
    v26 = 0x1.921fb60000000p+1f;
  }
  v25 = v26 - v25;
  v27 = -0x1.0000000000000p+0f;
LABEL_35:
  v28 = v25 * v25;
  v29 =
      (float)((float)(v27 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c188) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c188 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c188) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c188 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            v28)) *
                                                                                            v28)) *
                                                                         v28)) *
                                                         v28)) *
                                      v28) +
                              0x1.0000000000000p+0f)) *
              -0x1.0000000000000p-1f) +
      0x1.0000000000000p-1f;
  v33 = v29;
  v35 = 0x1.0000000000000p+0f - v29;
  v36 = vaddq_f32(
      vmulq_n_f32(*(float32x4_t*)(a1 + 864), v29),
      vmulq_n_f32(*(float32x4_t*)(a1 + 848), 0x1.0000000000000p+0f - v29));
  game_gmap_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), &v36);
  v30 = *(unsigned __int8*)(a1 + 720);
  LANES128(v36).n128_f32[0] =
      (float)(PSEUDO_UNFUSED(v33 * *(float*)(a1 + 884))) +
      (float)(*(float*)(a1 + 880) * v35);
  if (v30 == 1) {
    v31 = *(_QWORD*)(a1 + 696);
    v32 = a1 + 696;
  LABEL_40:
    (*(void (**)(__int64))(v31 + 24))(v32);
    *(_QWORD*)(a1 + 704) = 0;
    *(_WORD*)(a1 + 720) = 256;
    goto LABEL_41;
  }
  if (*(float*)(a1 + 704) > 0x0.0p+0f ||
      ((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 696) + 8LL))(
           a1 + 696, (__int64)&v36, a1 + 728) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
    v31 = *(_QWORD*)(a1 + 696);
    v32 = a1 + 696;
    goto LABEL_40;
  }
LABEL_41:
  if (*(float*)(a1 + 944) < *(float*)(a1 + 956)) {
    return 1;
  }
LABEL_43:
  *(_DWORD*)(a1 + 944) = 0;
  *(_DWORD*)(a1 + 956) = 0;
  return 0;
}

void game_gmap_1522f60(__int64 a1, __n128 a2, long double a3)
{

#pragma clang fp contract(off)
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  __n64 v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  float32x4_t v20[4];
  _QWORD v21[8];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_gmap_1340560(*(_QWORD*)(a1 + 152), 0, a2, a3),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v4 = (float32x4_t*)game_gmap_SpotMgr_GetCurrentSpot(),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v7 = *(_QWORD*)(v5 + 24);
  v6 = *(_QWORD*)(v5 + 32);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_OWORD*)v21 = v8;
  *(_OWORD*)&v21[2] = v9;
  *(_OWORD*)&v21[4] = v10;
  *(_OWORD*)&v21[6] = v11;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v20[0] = v12;
  v20[1] = v13;
  v20[2] = v14;
  v20[3] = v15;
  LANES64(v16).n64_u64[0] =
      LANES64_OF(GameRoutine_a6c440(v4 + 2, (__int128*)v21, v20)).n64_u64[0],
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v18 = v17;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = LANES64(v16).n64_u64[0];
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak(v6),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
    LANES64(v16).n64_u64[0] = v19;
    if (v18 > 0x0.0p+0f) {
      return;
    }
  }
  else if (v17 > 0x0.0p+0f) {
    return;
  }
  if (LANES64(v16).n64_f32[0] >= 0x0.0p+0f &&
      LANES64(v16).n64_f32[0] <= 0x1.e000000000000p+10f &&
      LANES64(v16).n64_f32[1] >= 0x0.0p+0f &&
      LANES64(v16).n64_f32[1] <= 0x1.0e00000000000p+10f) {
    game_gmap_anonymous_1523820(a1, 0),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
}

#pragma GCC visibility pop
