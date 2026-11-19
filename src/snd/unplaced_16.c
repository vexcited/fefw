#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11e6a0(__int64, int);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64 GameData_212e2d8;
extern __int64 snd_g_proxy_ptr[2];
float snd_fnd_calcDistanceTo(float*, float*);
void snd_133ba0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);

void snd_133ba0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{

#pragma clang fp contract(off)
  int v5;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  void (*v26)(__int64, float);
  void (*v27)(__int64, float);
  __int64** v28;
  float v29;
  void (*v31)(__int64, float);
  __int64* v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  struct {
    char gap0_[8];
    float v48;
    float v49;
    float v50[6];
    __int64 v51;
    __int64 v52;
    float v53;
  } f_;

  v5 = *(_DWORD*)(a4 + 204);
  switch (v5) {
  case 3:
    v24 = snd_fnd_WeakHandle_get(a5 + 5848);
    if (v24 != 0) {
      v25 = *(_QWORD*)(a2 + 40);
      v14 = a2 + 40;
      v10 = v24;
      (*(void (**)(__int64))(v25 + 1048))(v14);
      v26 = *(void (**)(__int64, float))(*(_QWORD*)v14 + 1048LL);
      LODWORD(f_.v50[0]) = f_.v52;
      v26(v14, *(float*)&f_.v52);
      v27 = *(void (**)(__int64, float))(*(_QWORD*)v14 + 1048LL);
      f_.v49 = *((float*)&f_.v52 + 1);
      v27(v14, *((float*)&f_.v52 + 1));
      f_.v48 = f_.v53;
      v28 = (__int64**)snd_g_proxy_ptr[0];
      if (((*(__int64 (**)(__int64, __int64, __int64, __int64, float))(
               **(_QWORD**)snd_g_proxy_ptr[0] + 352LL))(
               *(_QWORD*)snd_g_proxy_ptr[0], (__int64)f_.v50, (__int64)&f_.v49,
               (__int64)&f_.v48, f_.v53) &
           1) != 0) {
        v29 = fabsf(f_.v49);
        if (fabsf(f_.v50[0]) <= 0x1.0000000000000p+0f &
            v29 <= 0x1.0000000000000p+0f) {
          if ((*(_BYTE*)(a3 + 48) & 1) == 0) {
            *(_BYTE*)(a3 + 48) = 1;
            (*(void (**)(__int64))(*(_QWORD*)(v10 - 5592) + 96LL))(v10 - 5592);
            LODWORD(f_.v50[0]) = f_.v52;
            (*(void (**)(__int64, float))(*(_QWORD*)(v10 - 5592) + 96LL))(
                v10 - 5592, *(float*)&f_.v52);
            v31 = *(void (**)(__int64, float))(*(_QWORD*)(v10 - 5592) + 96LL);
            f_.v49 = *((float*)&f_.v52 + 1);
            v31(v10 - 5592, *((float*)&f_.v52 + 1));
            v32 = *v28;
            v33 = **v28;
            f_.v48 = f_.v53;
            if (((*(__int64 (**)(__int64, __int64, __int64, __int64, float))(
                     v33 + 352))((__int64)v32, (__int64)f_.v50,
                                 (__int64)&f_.v49, (__int64)&f_.v48, f_.v53) &
                 1) != 0 &&
                fabsf(f_.v50[0]) <= 0x1.0000000000000p+0f &&
                fabsf(f_.v49) <= 0x1.0000000000000p+0f) {
              (*(void (**)(__int64))(*(_QWORD*)(v10 - 5592) + 96LL))(v10 -
                                                                     5592);
              v34 = f_.v53;
              *(_QWORD*)(a3 + 8) = f_.v52;
              *(float*)(a3 + 16) = v34;
              (*(void (**)(__int64))(*(_QWORD*)(v10 - 5592) + 96LL))(v10 -
                                                                     5592);
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 1048LL))(v14);
              v35 = f_.v53;
              *(_QWORD*)(a3 + 8) = f_.v52;
              *(float*)(a3 + 16) = v35;
              (*(void (**)(__int64))(*(_QWORD*)v14 + 1048LL))(v14);
            }
            v36 = f_.v53;
            *(_QWORD*)(a3 + 32) = f_.v52;
            *(float*)(a3 + 40) = v36;
          }
          v13 = *(_QWORD*)v14;
        LABEL_28:
          (*(void (**)(__int64))(v13 + 1048))(v14);
          v37 = *(float*)&f_.v52;
          v38 = *(float*)(a3 + 8);
          if (*(float*)&f_.v52 >= v38) {
            v39 = *((float*)&f_.v52 + 1);
            v40 = *(float*)(a3 + 12);
            if (*((float*)&f_.v52 + 1) >= v40) {
            LABEL_30:
              v41 = f_.v53;
              v42 = *(float*)(a3 + 16);
              if (f_.v53 < v42) {
                goto LABEL_31;
              }
              goto LABEL_37;
            }
          }
          else {
            v38 = *(float*)&f_.v52;
            *(_DWORD*)(a3 + 8) = f_.v52;
            v39 = *((float*)&f_.v52 + 1);
            v40 = *(float*)(a3 + 12);
            if (*((float*)&f_.v52 + 1) >= v40) {
              goto LABEL_30;
            }
          }
          v40 = v39;
          *(float*)(a3 + 12) = v39;
          v41 = f_.v53;
          v42 = *(float*)(a3 + 16);
          if (f_.v53 < v42) {
          LABEL_31:
            v42 = v41;
            *(float*)(a3 + 16) = v41;
            v43 = *(float*)(a3 + 32);
            if (v37 <= v43) {
              goto LABEL_32;
            }
            goto LABEL_38;
          }
        LABEL_37:
          v43 = *(float*)(a3 + 32);
          if (v37 <= v43) {
          LABEL_32:
            v44 = *(float*)(a3 + 36);
            if (v39 > v44) {
              goto LABEL_33;
            }
            goto LABEL_39;
          }
        LABEL_38:
          v43 = v37;
          *(float*)(a3 + 32) = v37;
          v44 = *(float*)(a3 + 36);
          if (v39 > v44) {
          LABEL_33:
            v44 = v39;
            *(float*)(a3 + 36) = v39;
            v45 = *(float*)(a3 + 40);
            if (v41 <= v45) {
              goto LABEL_41;
            }
            goto LABEL_40;
          }
        LABEL_39:
          v45 = *(float*)(a3 + 40);
          if (v41 <= v45) {
          LABEL_41:
            *(float*)&f_.v52 = (float)(v38 + v43) * 0x1.0000000000000p-1f;
            *((float*)&f_.v52 + 1) = (float)(v40 + v44) * 0x1.0000000000000p-1f;
            f_.v53 = (float)(v42 + v45) * 0x1.0000000000000p-1f;
            f_.v51 = GameData_212e2d8 + 16;
            (*(void (**)(__int64, __int64, float, float, float, float))(
                *(_QWORD*)(v10 - 5592) + 80LL))(
                v10 - 5592, (__int64)&f_.v51, *(float*)&f_.v52,
                *((float*)&f_.v52 + 1), f_.v53, 0x1.0000000000000p-1f);
            goto LABEL_42;
          }
        LABEL_40:
          v45 = v41;
          *(float*)(a3 + 40) = v41;
          goto LABEL_41;
        }
      }
    }
    break;
  case 2:
    v17 = snd_fnd_WeakHandle_get(a5 + 5848);
    v18 = Crc32List_11e6a0(*(_QWORD*)(a1 + 32), -1);
    if (v17 != 0 && v18 != 0) {
      if ((*(_BYTE*)(a3 + 56) & 1) == 0) {
        v19 = v18;
        *(_BYTE*)(a3 + 56) = 1;
        (*(void (**)(__int64))(*(_QWORD*)(v18 + 40) + 1048LL))(v18 + 40);
        (*(void (**)(__int64))(*(_QWORD*)(v17 - 5592) + 96LL))(v17 - 5592);
        v20 = snd_fnd_calcDistanceTo((float*)&f_.v51, f_.v50);
        v18 = v19;
        *(float*)(a3 + 52) = v20;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v18 + 40) + 1048LL))(v18 + 40);
      v22 = *(_QWORD*)(a2 + 40);
      v21 = a2 + 40;
      (*(void (**)(__int64))(v22 + 1048))(v21);
      v23 = snd_fnd_calcDistanceTo((float*)&f_.v51, f_.v50);
      if (v23 < *(float*)(a3 + 52)) {
        *(float*)(a3 + 52) = v23;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 1048LL))(v21);
        (*(void (**)(__int64, __int64))(*(_QWORD*)(v17 - 5592) + 80LL))(
            v17 - 5592, (__int64)&f_.v51);
        (*(void (**)(__int64))(*(_QWORD*)v21 + 1048LL))(v21);
      LABEL_42:
        v47 = *(_QWORD*)(a5 + 40);
        v46 = a5 + 40;
        (*(void (**)(__int64, __int64))(v47 + 1040))(v46, (__int64)&f_.v51);
        *(_BYTE*)(v46 + 6024) = 1;
      }
    }
    break;
  case 1:
    v9 = snd_fnd_WeakHandle_get(a5 + 5848);
    if (v9 != 0) {
      v10 = v9;
      if ((*(_BYTE*)(a3 + 48) & 1) == 0) {
        *(_BYTE*)(a3 + 48) = 1;
        (*(void (**)(__int64))(*(_QWORD*)(v9 - 5592) + 96LL))(v9 - 5592);
        v11 = f_.v53;
        *(_QWORD*)(a3 + 8) = f_.v52;
        *(float*)(a3 + 16) = v11;
        (*(void (**)(__int64, float))(*(_QWORD*)(v10 - 5592) + 96LL))(
            v10 - 5592, v11);
        v12 = f_.v53;
        *(_QWORD*)(a3 + 32) = f_.v52;
        *(float*)(a3 + 40) = v12;
      }
      v15 = *(_QWORD*)(a2 + 40);
      v14 = a2 + 40;
      v13 = v15;
      goto LABEL_28;
    }
    break;
  default:
    break;
  }
}

#pragma GCC visibility pop
