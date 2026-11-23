#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterModel_d198c0(_QWORD*, float32x2_t*, char, char);
__int64 GameRoutine_8c7640(__int64);
__int64 GameRoutine_d2d5e0(signed int);
__int64 UnitUtil_12122d0(__int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0();
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_1a90d64;
extern _UNKNOWN GameData_1acac67;
extern _UNKNOWN GameData_1ad2a46;
extern _UNKNOWN GameData_1ae1fb1;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83790;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd86f0[])();
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212eda8[10];
extern __int64* GameData_212f878;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameReliance_8e2ee0(unsigned __int64 result, __int64);
void __cxa_guard_release(__int64);
__int64 memory_8e2820(__int64 a1, int a2, unsigned __int8 a3);
__int64 memory_d196c0(__int64 result, char a2, float a3);
__n128 memory_f58370(__int64 a1);
float memory_103f060(int32x4_t* a1);
__int64 memory_194b9a0(float32x4_t* a1, int* a2);

__int64 memory_8e2820(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 result;
  int v5;
  int v8;
  void* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int* v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  __int64 v42[3];
  struct {
    __int64 v43;
    void* v44;
    __int64 v45;
  } v43_;

  result = 0;
  if (a2 == 0) {
    return result;
  }
  v5 = *(unsigned __int8*)(a1 + 10);
  if (*(_BYTE*)(a1 + 10) == 0) {
    return result;
  }
  v8 = 0;
  if (*(unsigned __int8*)(a1 + 10) > 2u) {
    if (v5 == 3) {
      v9 = &GameData_1acac67;
    }
    else {
      if (v5 != 4) {
        goto LABEL_16;
      }
      v9 = &GameData_1ae1fb1;
    }
  }
  else if (v5 == 1) {
    v9 = &GameData_1a90d64;
  }
  else {
    if (v5 != 2) {
      goto LABEL_16;
    }
    v9 = &GameData_1ad2a46;
  }
  v43_.v44 = v9;
  v43_.v43 = game_HashString((__int64)v9);
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v43_.v43);
    if (v10 != 0) {
      v8 = *(_DWORD*)(v10 + 32);
    }
    else {
      v8 = 0;
    }
  }
LABEL_16:
  if (((a2 > -1) & a3) == 0) {
    v8 = 100;
  }
  v11 = v8 * a2;
  v12 = (1374389535LL * v8 * a2) >> 37;
  if (*(_BYTE*)(a1 + 10) != 0) {
    v13 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    if ((int)v13 <= 1) {
      LODWORD(v13) = 1;
    }
    v14 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)v13 - 4);
  }
  else {
    v14 = 0;
  }
  v15 = *(unsigned __int8*)(a1 + 11);
  v16 = *(unsigned __int16*)(a1 + 12);
  v43_.v43 = GameRoutine_8c7640(*(_QWORD*)(a1 + 24));
  v42[0] = GameRoutine_8c7640(*(_QWORD*)(a1 + 32));
  if ((UnitUtil_12122d0(&v43_.v43) & 1) == 0 ||
      (UnitUtil_12122d0(v42) & 1) == 0) {
    v17 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    if (v15 >= (int)v17) {
      v18 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    }
    else {
      v18 = v15;
    }
    if (v15 == 0) {
      v18 = 1;
    }
    if (v18 == (_DWORD)v17) {
      v19 = -1;
    }
    else {
      v19 = *(int*)(GameData_21d99c8 + 4LL * v18) - 1;
    }
    if (v19 <= *(unsigned __int16*)(a1 + 12)) {
      v14 = *(unsigned __int16*)(a1 + 12);
    }
    else {
      v14 = v19;
    }
  }
  v20 = v12 + ((unsigned int)v12 >> 31);
  if (v11 < 100) {
    v21 = *(unsigned __int16*)(a1 + 12);
    if (v11 <= -100) {
      v23 = v20 + v21;
      v24 = (int*)GameData_21d99c8;
      v25 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
      if (v15 >= (int)v25) {
        v26 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
      }
      else {
        v26 = v15;
      }
      v27 = v26 - 1;
      if (v15 == 0) {
        v27 = 0;
      }
      v28 = *(_DWORD*)(GameData_21d99c8 + 4 * v27);
      if (v23 <= v28) {
        v23 = v28;
      }
      if (v23 != v21) {
        goto LABEL_51;
      }
    }
  }
  else {
    v21 = *(unsigned __int16*)(a1 + 12);
    v22 = v20 + v21;
    if (v14 >= v22) {
      v23 = v22;
    }
    else {
      v23 = v14;
    }
    if (v23 != v21) {
      v24 = (int*)GameData_21d99c8;
      v25 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    LABEL_51:
      v21 = v23;
      *(_WORD*)(a1 + 12) = v23;
      if ((int)v25 < 1) {
        LOBYTE(v30) = 0;
      }
      else {
        v29 = *v24;
        v30 = 0;
        v31 = v24[(unsigned int)(v25 - 1)];
        if (v31 >= v21) {
          v31 = v21;
        }
        if (v21 >= v29) {
          v29 = v31;
        }
        while (1) {
          v32 = (unsigned int)(v30 + v25) >> 1;
          v33 = v24[v32];
          if (v29 == v33) {
            break;
          }
          if (v29 < v33) {
            LODWORD(v25) = (unsigned int)(v30 + v25) >> 1;
          }
          else {
            v30 = v32 + 1;
          }
          if (v30 >= (int)v25) {
            goto LABEL_64;
          }
        }
        LOBYTE(v30) = v32 + 1;
      }
    LABEL_64:
      *(_BYTE*)(a1 + 11) = v30;
    }
  }
  v34 = *(_QWORD*)(a1 + 40);
  v35 = (unsigned __int16)v21;
  if (v34 != 0) {
    v36 = *(_QWORD*)(a1 + 24);
    v37 = *(_QWORD*)(a1 + 32);
    v43_.v43 = 0;
    v43_.v44 = nullptr;
    v42[0] = 0;
    v42[1] = 0;
    v43_.v45 = v36;
    v42[2] = v37;
    v38 = GameReliance_8e2ee0(v34, (__int64)&v43_.v43);
    v39 = GameReliance_8e2ee0(v34, (__int64)v42);
    if (v38 <= v39) {
      v40 = v39;
    }
    else {
      v40 = v38;
    }
    if (v40 + 1 < 0xF4240) {
      v41 = v40 + 1;
    }
    else {
      v41 = 1000000;
    }
    *(_DWORD*)(a1 + 16) = v41;
  }
  return (unsigned int)(v35 - v16);
}

__int64 memory_d196c0(__int64 result, char a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    float32x2_t v20[2];
    float v21;
    char v22;
    char gap21_[3];
    char v23;
    char gap25_[3];
    char v24;
    char gap29_[3];
    char v25;
    char gap33_[3];
    char v26;
    char gap37_[3];
    __int64 v27;
    _DWORD v28[2];
    __int64 v29;
  } v20_;
  struct {
    __int64 (**v30)();
    char v31;
    char gap73_[23];
    __int64 (***v32)();
  } v30_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  {
    v3 = *(_QWORD*)(result + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  v6 = result;
  {
    v7 = *(_QWORD*)(v3 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  if ((*(_BYTE*)(v7 + 385) & 0x40) != 0) {
    v8 = 0;
  }
  else {
    v8 = *(_QWORD*)(v7 + 468);
    __asm__ volatile("" ::"r"(v8));
  }
  if ((v8 & 0x100000000LL) == 0) {
    result = ((__int64 (*)())llvm_libcxx_21_libcxx_include___memory_d2d4e0)(),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((result & 1) != 0) {
      LODWORD(v8) = 1257611790;
      if ((a2 & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_13:
      {
        v9 = *(_DWORD*)(v6 + 360);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 == (_DWORD)v8) {
        return result;
      }
      result = GameRoutine_d2d5e0(v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v9 == (_DWORD)result) {
        return result;
      }
      goto LABEL_17;
    }
    if ((*(_BYTE*)(*(_QWORD*)(v3 + 16) + 384LL) & 0x10) != 0) {
      LODWORD(v8) = -1101902990;
      if ((a2 & 1) != 0) {
        goto LABEL_13;
      }
      goto LABEL_17;
    }
    if ((*(_BYTE*)(v3 + 216) & 2) != 0) {
      LODWORD(v8) = 1669996436;
    }
    else {
      LODWORD(v8) = -574916402;
    }
  }
  if ((a2 & 1) != 0) {
    goto LABEL_13;
  }
LABEL_17:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release((__int64)&GameData_21a60e8),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  *(_DWORD*)((char*)v20_.v28 + 3) = 16842752;
  v20_.v23 = 0;
  {
    v10 = *(_QWORD*)(v6 + 8);
    __asm__ volatile("" ::"r"(v10));
  }
  v20_.v24 = 0;
  {
    v11 = *(_QWORD*)(v10 + 16);
    __asm__ volatile("" ::"r"(v11));
  }
  LANES64(v20_.v20[1]).n64_u64[0] = GameData_21a60e0;
  v20_.v25 = 0;
  v20_.v26 = 0;
  v20_.v29 = 0;
  v20_.v28[0] = 0x1000000;
  LANES64(v20_.v20[0]).n64_u32[0] = v8;
  v20_.v21 = a3;
  v20_.v27 = 0x3F8000003F800000LL;
  v20_.v22 = 1;
  if ((*(_BYTE*)(v11 + 386) & 8) == 0) {
    LOBYTE(v20_.v28[0]) = 1;
  }
  result = CharacterModel_d198c0((_QWORD*)v6, v20_.v20, 1, 0),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (a3 <= 0x1.0000000000000p-23f) {
    {
      result = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 232LL);
      __asm__ volatile("" ::"r"(result));
    }
    if (result != 0) {
      v30_.v31 = 0;
      v30_.v30 = GameData_1fd86f0;
      v30_.v32 = &v30_.v30;
      CharacterBuilder_1083e90((_QWORD*)result, (__int64)&v30_.v30),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      result = (__int64)v30_.v32;
      if (v30_.v32 == &v30_.v30) {
        v19 = 4;
      }
      else {
        if (v30_.v32 == nullptr) {
          return result;
        }
        v19 = 5;
      }
      return ((__int64 (*)(__int64 (***)(void), __int64, __int64, __int64,
                           __int64, __int64, __int64, __int64))(
          *v30_.v32)[v19])(v30_.v32, v12, v13, v14, v15, v16, v17, v18);
    }
  }
  return result;
}

__n128 memory_f58370(__int64 a1)
{
  unsigned __int64* v2;
  __int64 v3;
  __n128* v4;
  __int128 v5;
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
  bool v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float32x2_t v33;
  __n128 result;

  v2 = (unsigned __int64*)GameData_212c958;
  v3 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v3;
  v4 = (__n128*)(a1 + 80);
  v5 = *(_OWORD*)(a1 + 176);
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v5;
  v6 = *(float*)(*GameData_212f878 + 1520);
  *(float*)&v5 = *(float*)(*GameData_212f878 + 1516) * 0x1.3333340000000p-3f;
  v7 = *(float*)&v5 * 0x1.4000000000000p+5f;
  v8 = *(float*)&v5 * 0x1.9000000000000p+6f;
  v9 = (float)(PSEUDO_UNFUSED(*(float*)&v5 * 0x1.9000000000000p+6f)) +
       0x1.0000000000000p-1f;
  v10 = 0x0.0p+0f;
  if (v9 == 0x0.0p+0f) {
    if (v7 > 0x0.0p+0f) {
      goto LABEL_3;
    }
  }
  else {
    v13 = GameRoutine_1a0a6a0(*(float*)(*(_QWORD*)(a1 + 248) + 8232LL), v9);
    if (v13 >= 0x0.0p+0f) {
      v10 = v13 + 0x0.0p+0f;
    }
    else {
      v10 = v9 + (float)(v13 + 0x0.0p+0f);
    }
    if (v10 < v7) {
    LABEL_3:
      if (v7 == 0x0.0p+0f) {
        v12 = 0x0.0p+0f;
      }
      else {
        v11 = v10 / v7;
        v12 = 0x1.0000000000000p+0f;
        if (v11 <= 0x1.0000000000000p+0f) {
          v12 = v11;
        }
        if (v11 < 0x0.0p+0f) {
          v12 = 0x0.0p+0f;
        }
      }
      goto LABEL_22;
    }
  }
  if ((float)(v8 - v7) == 0x0.0p+0f) {
    v17 = 0x0.0p+0f;
  }
  else {
    v14 = (float)(v10 - v7) / (float)(v8 - v7);
    v15 = 0x1.0000000000000p+0f;
    if (v14 <= 0x1.0000000000000p+0f) {
      v15 = v14;
    }
    v16 = v14 < 0x0.0p+0f;
    v17 = 0x0.0p+0f;
    if (!v16) {
      v17 = v15;
    }
  }
  v12 = 0x1.0000000000000p+0f - v17;
LABEL_22:
  v18 = 0x1.0000000000000p+0f;
  v19 = (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v12) *
                               0x1.921fb60000000p+1f)) +
        (float)(roundf((float)((float)(0x1.0000000000000p+0f - v12) *
                               0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v19 <= 0x1.921fb60000000p+0f) {
    if (v19 >= -0x1.921fb60000000p+0f) {
      goto LABEL_27;
    }
    v20 = -0x1.921fb60000000p+1f;
  }
  else {
    v20 = 0x1.921fb60000000p+1f;
  }
  v19 = v20 - v19;
  v18 = -0x1.0000000000000p+0f;
LABEL_27:
  v21 = v19 * v19;
  v22 = -(
      float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) -
             (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                       (_QWORD)GameData_212c188 + 4) +
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
                                                                        (float)(v19 *
                                                                                v19))) *
                                                        (float)(v19 * v19))) *
                                     (float)(v19 * v19))) *
                     (float)(v19 * v19)));
  v23 = 0x1.0000000000000p+0f;
  v24 = v18 * (float)((float)(v22 * v21) + 0x1.0000000000000p+0f);
  v25 = fabsf(v24);
  v16 = v24 < 0x0.0p+0f;
  v26 = -0x1.0000000000000p+0f;
  v27 = v25 * 0x1.0000000000000p-1f;
  if (v16) {
    v26 = 0x1.0000000000000p+0f;
  }
  v28 = (float)(v27 * v26) + 0x1.0000000000000p-1f;
  v29 = 0x0.0p+0f;
  v30 = v6 + (float)(fminf(fmaxf(v28, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     (float)(0x1.0000000000000p+0f - v6));
  v31 = *(float*)(a1 + 192);
  if (v31 < 0x1.0000000000000p-2f) {
    v32 = v31 * 0x1.0000000000000p+2f;
    if (v32 <= 0x1.0000000000000p+0f) {
      v23 = v32;
    }
    if (v32 >= 0x0.0p+0f) {
      v29 = v23;
    }
    v30 = v30 * GameRoutine_1a0a550(v29, 0x1.0000000000000p-1f);
  }
  LANES128(result).n128_u64[0] = *v2;
  LANES64(v33).n64_u64[0] = v2[1];
  LANES64(v33).n64_u32[1] = vmuls_lane_f32(v30, v33, 1);
  *(float32x2_t*)&LANES128(result).n128_i8[8] = v33;
  *v4 = result;
  return result;
}

float memory_103f060(int32x4_t* a1)
{
  unsigned __int64 v2;
  float v3;
  _QWORD* v4;
  float v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  float v11;
  float v12;
  int32x4_t v13;
  __int64 v14;
  int32x4_t v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int128 v20;
  unsigned __int32* v21;
  int32x4_t v22;
  __int64 v23;
  float v24;
  unsigned __int64 v25;
  float32x4_t v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  bool v33;
  float v34;
  float v35;
  float v36;
  float32x4_t v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  float v44;
  float v45;
  float v46;
  unsigned __int64 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  int32x4_t v98;
  int v99;
  __int64 v100;
  float v102;
  float v103;
  int32x4_t v104;
  float v105;
  _QWORD* v106;
  float32x4_t v107;
  int32x4_t v108;
  unsigned __int32 v109;
  float32x4_t v110;
  float32x4_t v111;
  struct {
    float v112[20];
    char v113;
  } v112_;

  {
    v2 = LANES128(*(a1)).n128_u64[1];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
    __asm__ volatile("" ::"w"(v3));
  }
  if (*(_BYTE*)(v2 + 876) == 1) {
    LANES128(a1[3]).n128_u32[0] = 0;
  }
  {
    v4 = *(_QWORD**)(v2 + 880);
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = 0x1.0000000000000p+0f;
  {
    v6 = *v4;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = GameData_212eba8[0];
    __asm__ volatile("" ::"r"(v7));
  }
  if (*v4 != 0) {
    {
      v8 = *GameData_212eba8[0];
      __asm__ volatile("" ::"r"(v8));
    }
    if (*GameData_212eba8[0] != 0) {
      {
        v9 = *(_QWORD**)(v8 + 8);
        __asm__ volatile("" ::"r"(v9));
      }
      {
        v10 = *(_QWORD**)(v8 + 16);
        __asm__ volatile("" ::"r"(v10));
      }
      if (v9 != v10) {
        while (*v9 != v6) {
          v9 += 2;
          if (v9 == v10) {
            goto LABEL_13;
          }
        }
      }
      if (v9 != v10) {
        v11 = fminf(
            fmaxf(
                (float)(sqrtf((float)(PSEUDO_UNFUSED(
                                  *(float*)(*(_QWORD*)(v6 + 16) + 672LL) *
                                  *(float*)(*(_QWORD*)(v6 + 16) + 672LL))) +
                              (float)(*(float*)(*(_QWORD*)(v6 + 16) + 668LL) *
                                      *(float*)(*(_QWORD*)(v6 + 16) + 668LL))) +
                        -0x1.8000000000000p+2f) /
                    0x1.8000000000000p+1f,
                0x0.0p+0f),
            0x1.0000000000000p+0f);
        v12 = (float)(fminf(fmaxf(v11, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.99999a0000000p-1f) +
              0x1.99999a0000000p-3f;
        if (v11 > 0x0.0p+0f) {
          v11 = v12;
        }
        v5 = v11 + 0x1.0000000000000p+0f;
      }
    }
  }
LABEL_13:
  {
    v13 = a1[1];
    __asm__ volatile("" ::"w"(v13));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v106 = v4;
    v108 = v13;
    v99 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v13 = v108;
    v4 = v106;
    if (v99 != 0) {
      {
        v100 = *((_QWORD*)GameData_212c540 + 1);
        __asm__ volatile("" ::"r"(v100));
      }
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v100;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v13 = v108;
      v4 = v106;
    }
  }
  {
    v14 = *v4;
    __asm__ volatile("" ::"r"(v14));
  }
  v15 = COERCE_AS(int32x4_t, GameData_21a6120);
  if (v14 != 0) {
    {
      v16 = *v7;
      __asm__ volatile("" ::"r"(v16));
    }
    if (*v7 != 0) {
      {
        v17 = *(_QWORD**)(v16 + 8);
        __asm__ volatile("" ::"r"(v17));
      }
      {
        v18 = *(_QWORD**)(v16 + 16);
        __asm__ volatile("" ::"r"(v18));
      }
      if (v17 != v18) {
        while (*v17 != v14) {
          v17 += 2;
          if (v17 == v18) {
            goto LABEL_22;
          }
        }
      }
      if (v17 != v18) {
        {
          v19 = *(_QWORD*)(v14 + 16);
          __asm__ volatile("" ::"r"(v19));
        }
        v20 = *(_OWORD*)(v19 + 560);
        v21 = (unsigned __int32*)(v19 + 580);
        LANES128(v22).n128_u32[2] = DWORD2(v20);
      LABEL_24:
        LANES128(v15).n128_u32[0] = v20;
        LANES128(v15).n128_u32[1] = *v21;
        LANES128(v15).n128_u64[1] = LANES128(v22).n128_u32[2];
        goto LABEL_25;
      }
    }
  }
LABEL_22:
  if (*GameData_212eda8[0] != 0) {
    {
      v23 = *(_QWORD*)(*GameData_212eda8[0] + 8);
      __asm__ volatile("" ::"r"(v23));
    }
    *(_QWORD*)&v20 = *(_QWORD*)(v23 + 280);
    v21 = (unsigned __int32*)(v23 + 168);
    v22 = vdupq_lane_s32(*(int32x2_t*)&v20, 1);
    goto LABEL_24;
  }
LABEL_25:
  v24 = (float)(v3 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  {
    v25 = LANES128(*(a1)).n128_u64[1];
    __asm__ volatile("" ::"r"(v25));
  }
  v104 = v15;
  if ((*(_BYTE*)(v25 + 876) & 1) == 0 && (*(_BYTE*)(v2 + 740) & 1) != 0) {
    v26 = vsubq_f32(v15, v13);
    {
      v109 = LANES128(v13).n128_u32[1];
      __asm__ volatile("" ::"r"(v109));
    }
    {
      v27 = LANES128(v26).n128_f32[2];
      __asm__ volatile("" ::"w"(v27));
    }
    {
      v102 = LANES128(v26).n128_f32[0];
      __asm__ volatile("" ::"w"(v102));
    }
    {
      v28 = *(float*)(v2 + 744) * 0x1.cccccc0000000p-1f;
      __asm__ volatile("" ::"w"(v28));
    }
    v29 = sqrtf(vmuls_lane_f32(LANES128(v26).n128_f32[2], v26, 2) +
                (float)(LANES128(v26).n128_f32[0] * LANES128(v26).n128_f32[0]));
    v30 = 0x0.0p+0f;
    if (v28 != 0x0.0p+0f) {
      v31 = v29 / v28;
      v32 = 0x1.0000000000000p+0f;
      if (v31 <= 0x1.0000000000000p+0f) {
        v32 = v31;
      }
      v33 = v31 < 0x0.0p+0f;
      v30 = 0x0.0p+0f;
      if (!v33) {
        v30 = v32;
      }
    }
    v34 = (float)(fminf(fmaxf(GameRoutine_1a0a550(v30, 0x1.3333340000000p+0f),
                              0x0.0p+0f),
                        0x1.0000000000000p+0f) *
                  0x1.cccccc0000000p-1f) +
          0x1.99999a0000000p-4f;
    v35 = v29 + (float)(fminf(fmaxf((float)(v24 * *(float*)(v2 + 752)) * v34,
                                    0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        (float)(0x0.0p+0f - v29));
    v36 = fabsf((float)(v24 * *(float*)(v2 + 748)) * v34);
    if (v35 <= 0x0.0p+0f) {
      if (v35 >= 0x0.0p+0f) {
        v15 = v104;
        LANES128(v37).n128_u32[1] = v109;
        goto LABEL_40;
      }
      v15 = v104;
      LANES128(v37).n128_u32[1] = v109;
      v35 = v36 + v35;
      if (v35 <= 0x0.0p+0f) {
      LABEL_40:
        v38 = fminf(fmaxf(v35, -*(float*)(v2 + 744)), *(float*)(v2 + 744));
        v39 = v102;
        if (v102 != 0x0.0p+0f || v27 != 0x0.0p+0f) {
          v39 = v102 / v29;
          v27 = v27 / v29;
        }
        {
          v25 = LANES128(*(a1)).n128_u64[1];
          __asm__ volatile("" ::"r"(v25));
        }
        LANES128(v37).n128_f32[0] =
            LANES128(v15).n128_f32[0] - (float)(PSEUDO_UNFUSED(v38 * v39));
        LANES128(v37).n128_f32[2] =
            LANES128(v15).n128_f32[2] - (float)(PSEUDO_UNFUSED(v38 * v27));
        LANES128(v37).n128_u32[3] = 0;
        goto LABEL_44;
      }
    }
    else {
      v15 = v104;
      LANES128(v37).n128_u32[1] = v109;
      v35 = v35 - v36;
      if (v35 >= 0x0.0p+0f) {
        goto LABEL_40;
      }
    }
    v35 = 0x0.0p+0f;
    goto LABEL_40;
  }
  LANES128(v13).n128_u32[3] = 0;
  v37 = vtrn2q_s32(vrev64q_s32(v15), v13);
LABEL_44:
  v107 = v37;
  {
    v40 = **(_QWORD**)(v25 + 880);
    __asm__ volatile("" ::"r"(v40));
  }
  if (v40 != 0) {
    {
      v41 = *v7;
      __asm__ volatile("" ::"r"(v41));
    }
    if (*v7 != 0) {
      {
        v42 = *(_QWORD**)(v41 + 8);
        __asm__ volatile("" ::"r"(v42));
      }
      {
        v43 = *(_QWORD**)(v41 + 16);
        __asm__ volatile("" ::"r"(v43));
      }
      if (v42 != v43) {
        while (*v42 != v40) {
          v42 += 2;
          if (v42 == v43) {
            goto LABEL_53;
          }
        }
      }
      if (v42 != v43) {
        v44 = 0x0.0p+0f;
        if ((*(_BYTE*)(*(_QWORD*)(v40 + 16) + 240LL) & 1) == 0) {
          goto LABEL_66;
        }
        goto LABEL_60;
      }
    }
  }
LABEL_53:
  v110 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83790));
  v111 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83610));
  {
    v45 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1064LL);
    __asm__ volatile("" ::"w"(v45));
  }
  if (v45 > 0x0.0p+0f) {
    collision_6725f0((void*)((__int64)v112_.v112), &v111, &v110, 2,
                     *(float*)(*(_QWORD*)GameData_212dc38[0] + 1064LL));
    if ((v112_.v113 & 1) != 0) {
      {
        v103 = v112_.v112[1];
        __asm__ volatile("" ::"w"(v103));
      }
      collision_6725f0((void*)((__int64)v112_.v112), &v111, &v110, 3, v45);
      v15 = v104;
      v37 = v107;
      if ((v112_.v113 & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_59;
    }
  LABEL_64:
    v15 = v104;
    v37 = v107;
    goto LABEL_65;
  }
  collision_670c60((void*)((__int64)v112_.v112), &v111, &v110, 2);
  if ((v112_.v113 & 1) == 0) {
    goto LABEL_64;
  }
  {
    v103 = v112_.v112[1];
    __asm__ volatile("" ::"w"(v103));
  }
  collision_670c60((void*)((__int64)v112_.v112), &v111, &v110, 3);
  v15 = v104;
  v37 = v107;
  if (v112_.v113 != 1) {
  LABEL_65:
    v44 = 0x0.0p+0f;
    goto LABEL_66;
  }
LABEL_59:
  if ((float)(v103 + 0x1.99999a0000000p-4f) < v112_.v112[1]) {
    goto LABEL_65;
  }
LABEL_60:
  v44 = 0x1.0000000000000p+0f;
  if ((float)(0x1.99999a0000000p-3f / v5) > 0x0.0p+0f) {
    {
      v44 = LANES128(a1[3]).n128_f32[1];
      __asm__ volatile("" ::"w"(v44));
    }
    v46 = fabsf(v24 / (float)(0x1.99999a0000000p-3f / v5));
    if (v44 <= 0x1.0000000000000p+0f) {
      if (v44 >= 0x1.0000000000000p+0f) {
        goto LABEL_66;
      }
      v44 = v46 + v44;
      if (v44 <= 0x1.0000000000000p+0f) {
        goto LABEL_66;
      }
      goto LABEL_168;
    }
    v44 = v44 - v46;
    if (v44 < 0x1.0000000000000p+0f) {
    LABEL_168:
      v44 = 0x1.0000000000000p+0f;
    }
  }
LABEL_66:
  {
    v47 = LANES128(*(a1)).n128_u64[1];
    __asm__ volatile("" ::"r"(v47));
  }
  LANES128(a1[3]).n128_f32[1] = v44;
  if (*(_BYTE*)(v47 + 876) == 1) {
    LANES128(v37).n128_u32[1] = LANES128(v15).n128_u32[1];
    goto LABEL_165;
  }
  v48 = 0x0.0p+0f;
  {
    v49 = **(_QWORD**)(v47 + 880);
    __asm__ volatile("" ::"r"(v49));
  }
  if (v49 != 0) {
    {
      v50 = *v7;
      __asm__ volatile("" ::"r"(v50));
    }
    if (*v7 != 0) {
      {
        v51 = *(_QWORD**)(v50 + 8);
        __asm__ volatile("" ::"r"(v51));
      }
      {
        v52 = *(_QWORD**)(v50 + 16);
        __asm__ volatile("" ::"r"(v52));
      }
      if (v51 != v52) {
        while (*v51 != v49) {
          v51 += 2;
          if (v51 == v52) {
            goto LABEL_77;
          }
        }
      }
      if (v51 != v52) {
        v48 = fminf(
            fmaxf(
                (float)(sqrtf(
                            (float)(PSEUDO_UNFUSED(
                                *(float*)(*(_QWORD*)(v49 + 16) + 672LL) *
                                *(float*)(*(_QWORD*)(v49 + 16) + 672LL))) +
                            (float)(*(float*)(*(_QWORD*)(v49 + 16) + 668LL) *
                                    *(float*)(*(_QWORD*)(v49 + 16) + 668LL))) +
                        -0x1.0000000000000p+0f) /
                    0x1.4000000000000p+2f,
                0x0.0p+0f),
            0x1.0000000000000p+0f);
        v53 = (float)(fminf(fmaxf(v48, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.99999a0000000p-1f) +
              0x1.99999a0000000p-3f;
        if (v48 > 0x0.0p+0f) {
          v48 = v53;
        }
      }
    }
  }
LABEL_77:
  {
    v54 = LANES128(a1[3]).n128_f32[2];
    __asm__ volatile("" ::"w"(v54));
  }
  if (v54 < v48 || v54 > v48 && (v54 = v54 - fabsf(v24)) < v48) {
    v54 = v48;
  }
  LANES128(a1[3]).n128_f32[2] = v54;
  v55 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v2 + 784) == 1) {
    v55 = 0x0.0p+0f;
    v56 = fabsf(LANES128_OF(vsubq_f32(v37, v15)).n128_f32[1]) /
          (float)((float)((float)(fminf(fmaxf(v54, 0x0.0p+0f),
                                        0x1.0000000000000p+0f) *
                                  0x1.0000000000000p-1f) +
                          0x1.0000000000000p-1f) *
                  *(float*)(v2 + 780));
    v57 = (float)(v56 + -0x1.0000000000000p-1f) +
          (float)(v56 + -0x1.0000000000000p-1f);
    v58 = v57 <= 0x1.0000000000000p+0f ? v57 : 0x1.0000000000000p+0f;
    v59 = v57 >= 0x0.0p+0f ? v58 : 0x0.0p+0f;
    if (v59 > 0x0.0p+0f) {
      v55 = (float)(fminf(fmaxf(v59, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.fae1480000000p-1f) +
            0x1.47ae140000000p-7f;
    }
  }
  v60 = 0x0.0p+0f;
  if (v44 <= 0x0.0p+0f) {
    v60 = 0x1.0000000000000p+0f;
    if (LANES128(a1[3]).n128_f32[3] < v55) {
      v60 = 0x1.0000000000000p-1f;
    }
  }
  v61 = v60 / v5;
  {
    v62 = LANES128(v15).n128_f32[1];
    __asm__ volatile("" ::"w"(v62));
  }
  if ((float)(v60 / v5) <= 0x0.0p+0f) {
    goto LABEL_99;
  }
  {
    v63 = LANES128(a1[3]).n128_f32[3];
    __asm__ volatile("" ::"w"(v63));
  }
  v64 = fabsf(v24 / v61);
  if (v63 > v55) {
    v63 = v63 - v64;
    if (v63 >= v55) {
      goto LABEL_100;
    }
    goto LABEL_99;
  }
  if (v63 < v55) {
    v63 = v64 + v63;
    if (v63 > v55) {
    LABEL_99:
      v63 = v55;
    }
  }
LABEL_100:
  LANES128(a1[3]).n128_f32[3] = v63;
  if ((float)(LANES128(v15).n128_f32[1] - LANES128(v37).n128_f32[1]) !=
          0x0.0p+0f &&
      v63 > 0x0.0p+0f) {
    v65 = 0x1.0000000000000p+0f;
    {
      v105 = LANES128(v37).n128_f32[1];
      __asm__ volatile("" ::"w"(v105));
    }
    v66 = vabds_f32(LANES128(v15).n128_f32[1], LANES128(v37).n128_f32[1]);
    v67 = 0x1.0000000000000p+0f -
          fminf(fmaxf(v44, 0x0.0p+0f), 0x1.0000000000000p+0f);
    {
      v68 = *(float*)(v2 + 720);
      __asm__ volatile("" ::"w"(v68));
    }
    if (v68 > 0x0.0p+0f) {
      v67 = v67 *
            GameRoutine_1a0a550(*(float*)(*(_QWORD*)(v47 + 928) + 92LL) / v68,
                                0x1.8000000000000p+0f);
    }
    if (v66 <= 0x1.0000000000000p+0f) {
      v69 = v66;
    }
    else {
      v69 = 0x1.0000000000000p+0f;
    }
    v70 = v67 / (float)(v69 + 0x1.0000000000000p+0f);
    if (v70 > 0x0.0p+0f) {
      {
        v65 = LANES128(a1[3]).n128_f32[0];
        __asm__ volatile("" ::"w"(v65));
      }
      v71 = fabsf(v24 / v70);
      if (v65 <= 0x1.0000000000000p+0f) {
        if (v65 >= 0x1.0000000000000p+0f) {
          goto LABEL_121;
        }
        v65 = v71 + v65;
        if (v65 <= 0x1.0000000000000p+0f) {
          goto LABEL_121;
        }
      }
      else {
        v65 = v65 - v71;
        if (v65 >= 0x1.0000000000000p+0f) {
          goto LABEL_121;
        }
      }
      v65 = 0x1.0000000000000p+0f;
    }
  LABEL_121:
    LANES128(a1[3]).n128_f32[0] = v65;
    v74 = GameRoutine_1a0a550(v65, 0x1.8000000000000p+0f);
    v75 = 0x1.0000000000000p+0f;
    v76 = (float)(v66 + -0x1.99999a0000000p-5f) / 0x1.cccccc0000000p-2f;
    if (v76 <= 0x1.0000000000000p+0f) {
      v77 = (float)(v66 + -0x1.99999a0000000p-5f) / 0x1.cccccc0000000p-2f;
    }
    else {
      v77 = 0x1.0000000000000p+0f;
    }
    if (v76 < 0x0.0p+0f) {
      v77 = 0x0.0p+0f;
    }
    {
      v78 = v74 * (float)(v77 * (float)(v24 * *(float*)(v2 + 760)));
      __asm__ volatile("" ::"w"(v78));
    }
    if (v78 <= 0x1.0000000000000p+0f) {
      v75 = v78;
    }
    if (v78 >= 0x0.0p+0f) {
      v79 = v75;
    }
    else {
      v79 = 0x0.0p+0f;
    }
    v80 = (float)(v66 + -0x1.99999a0000000p-5f) * v79;
    {
      v81 = LANES128(a1[3]).n128_f32[3];
      __asm__ volatile("" ::"w"(v81));
    }
    v82 = v81 * v80;
    if (v82 <= 0x0.0p+0f) {
      v83 = v105;
      goto LABEL_139;
    }
    v83 = v105;
    if (v105 <= v62) {
      if (v105 >= v62 || (v83 = v105 + v82, (float)(v105 + v82) <= v62)) {
      LABEL_139:
        v84 = (float)(PSEUDO_UNFUSED(LANES128(a1[3]).n128_f32[0] *
                                     0x1.921fb60000000p+1f)) +
              (float)(roundf((float)(LANES128(a1[3]).n128_f32[0] *
                                     0x1.921fb60000000p+1f) *
                             0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
        if (v84 <= 0x1.921fb60000000p+0f) {
          v86 = 0x1.0000000000000p+0f;
          if (v84 >= -0x1.921fb60000000p+0f) {
            goto LABEL_144;
          }
          v85 = -0x1.921fb60000000p+1f;
        }
        else {
          v85 = 0x1.921fb60000000p+1f;
        }
        v84 = v85 - v84;
        v86 = -0x1.0000000000000p+0f;
      LABEL_144:
        v87 =
            v86 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
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
                                                                                                  (float)(v84 *
                                                                                                          v84))) *
                                                                                  (float)(v84 *
                                                                                          v84))) *
                                                               (float)(v84 *
                                                                       v84))) *
                                               (float)(v84 * v84))) *
                            (float)(v84 * v84)) +
                    0x1.0000000000000p+0f);
        v88 = fabsf(v87);
        v33 = v87 < 0x0.0p+0f;
        v89 = -0x1.0000000000000p+0f;
        v90 = v88 * 0x1.0000000000000p-1f;
        if (v33) {
          v89 = 0x1.0000000000000p+0f;
        }
        v91 = (float)(v90 * v89) + 0x1.0000000000000p-1f;
        v92 = (float)(v66 + -0x1.99999a0000000p-6f) / 0x1.e666660000000p-2f;
        if (v92 <= 0x1.0000000000000p+0f) {
          v93 = (float)(v66 + -0x1.99999a0000000p-6f) / 0x1.e666660000000p-2f;
        }
        else {
          v93 = 0x1.0000000000000p+0f;
        }
        v94 = (float)(fminf(fmaxf(v93, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.e666660000000p-1f) +
              0x1.99999a0000000p-5f;
        if (v92 >= 0x0.0p+0f) {
          v95 = v94;
        }
        else {
          v95 = 0x1.99999a0000000p-5f;
        }
        v96 = v5 * (float)(v81 * (float)(v95 * v91));
        if (v96 <= 0x0.0p+0f) {
          v37 = v107;
        }
        else {
          v37 = v107;
          v97 =
              fabsf(v24 * (float)((float)((float)(fminf(fmaxf(v96, 0x0.0p+0f),
                                                        0x1.0000000000000p+0f) *
                                                  0x1.fae1480000000p-1f) +
                                          0x1.47ae140000000p-7f) *
                                  *(float*)(v2 + 756)));
          if (v83 <= v62) {
            if (v83 >= v62) {
              goto LABEL_160;
            }
            v83 = v83 + v97;
            if (v83 <= v62) {
              goto LABEL_160;
            }
          }
          else {
            v83 = v83 - v97;
            if (v83 >= v62) {
              goto LABEL_160;
            }
          }
          v83 = v62;
        }
      LABEL_160:
        LANES128(v37).n128_f32[1] = v83;
        goto LABEL_161;
      }
    }
    else {
      v83 = v105 - v82;
      if ((float)(v105 - v82) >= v62) {
        goto LABEL_139;
      }
    }
    v83 = v62;
    goto LABEL_139;
  }
  {
    v72 = LANES128(a1[3]).n128_f32[0];
    __asm__ volatile("" ::"w"(v72));
  }
  v73 = fabsf(v24 * 0x1.0000000000000p-1f);
  if (v72 <= 0x0.0p+0f) {
    if (v72 >= 0x0.0p+0f) {
      goto LABEL_117;
    }
    v72 = v73 + v72;
    if (v72 <= 0x0.0p+0f) {
      goto LABEL_117;
    }
  }
  else {
    v72 = v72 - v73;
    if (v72 >= 0x0.0p+0f) {
      goto LABEL_117;
    }
  }
  v72 = 0x0.0p+0f;
LABEL_117:
  LANES128(a1[3]).n128_f32[0] = v72;
LABEL_161:
  if (*(_BYTE*)(v2 + 776) == 1) {
    LANES128(v37).n128_u32[1] =
        fmaxf(LANES128(v37).n128_f32[1], v62 - *(float*)(v2 + 772));
  }
  if (*(_BYTE*)(v2 + 768) == 1) {
    LANES128(v37).n128_u32[1] =
        fminf(LANES128(v37).n128_f32[1], v62 + *(float*)(v2 + 764));
  }
LABEL_165:
  LANES128(a1[1]).n128_u64[0] = LANES128(v37).n128_u64[0];
  {
    v98 = a1[1];
    __asm__ volatile("" ::"w"(v98));
  }
  LANES128(v98).n128_u64[1] = LANES128(v37).n128_u32[2];
  a1[1] = v98;
  return LANES128(v98).n128_f32[0];
}

__int64 memory_194b9a0(float32x4_t* a1, int* a2)
{
  float32x4_t v2;
  __int128 v3;
  unsigned __int32 v4;
  unsigned __int32 v5;
  unsigned int v6;
  unsigned int v7;
  float32x4_t v8;
  unsigned int v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  unsigned __int32 v13;
  int8x16_t v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x2_t v31;
  float32x2_t v32;
  __int64 v33;
  __int64 v34;
  float32x2_t v35;
  float32x2_t v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float32x4_t v41;
  float32x2_t v42;
  float32x4_t v43;
  float32x2_t v44;
  float32x2_t v45;
  __int64 v46;
  float32x2_t v48;
  float32x2_t v49;
  float32x2_t v50;
  float32x2_t v51;
  float32x2_t v52;
  float32x2_t v53;
  float32x2_t v54;
  float32x2_t v55;
  float32x2_t v56;
  float32x2_t v57;
  float32x2_t v58;
  float32x2_t v59;
  float32x2_t v60;
  float32x2_t v61;
  float32x2_t v62;
  float v63;
  float v64;
  __int64 v65;
  float32x2_t v66;
  bool v67;
  char v68;
  float32x2_t v69;
  float32x2_t v70;
  float32x2_t v71;
  float32x2_t v72;
  float32x2_t v73;
  float32x2_t v74;
  float32x2_t v75;
  float32x2_t v76;
  float32x2_t v77;
  float32x2_t v78;
  float32x2_t v79;
  float32x2_t v80;
  _QWORD v81[6];
  _QWORD v82[16];

  if ((LANES128(a1[11]).n128_u8[0] & 1) != 0) {
    v2 = a1[7];
    v3 = *((_OWORD*)a2 + 1);
    v4 = DWORDn(*(_QWORD*)a2, sizeof(*(_QWORD*)a2) / 4 - 1);
    v5 = *((_QWORD*)a2 + 1);
    if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
      v6 = *(_OWORD*)a2;
    }
    else {
      v6 = *((_OWORD*)a2 + 1);
    }
    if (COERCE_FLOAT(DWORDn(LANES128(a1[7]).n128_u64[0],
                            sizeof(LANES128(a1[7]).n128_u64[0]) / 4 - 1)) >=
        0x0.0p+0f) {
      v7 = DWORDn(*(_QWORD*)a2, sizeof(*(_QWORD*)a2) / 4 - 1);
    }
    else {
      v7 = DWORDn(*((_QWORD*)a2 + 2), sizeof(*((_QWORD*)a2 + 2)) / 4 - 1);
    }
    LANES128(v8).n128_u32[3] = 1065353216;
    if (LANES128(v2).n128_f32[2] >= 0x0.0p+0f) {
      v9 = *((_QWORD*)a2 + 1);
    }
    else {
      v9 = *((_QWORD*)a2 + 3);
    }
    LANES128(v10).n128_u64[0] = __PAIR64__(v7, v6);
    LANES128(v10).n128_u64[1] = v9 | 0x3F80000000000000LL;
    v11 = vmulq_f32(v2, v10);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_f32[0] > 0x0.0p+0f) {
      return 0;
    }
    v12 = a1[8];
    if (LANES128(v12).n128_f32[0] >= 0x0.0p+0f) {
      v13 = *(_OWORD*)a2;
    }
    else {
      v13 = *((_OWORD*)a2 + 1);
    }
    LANES128(v8).n128_u32[0] = v13;
    if (COERCE_FLOAT(DWORDn(LANES128(a1[8]).n128_u64[0],
                            sizeof(LANES128(a1[8]).n128_u64[0]) / 4 - 1)) <
        0x0.0p+0f) {
      v4 = DWORDn(*((_QWORD*)a2 + 2), sizeof(*((_QWORD*)a2 + 2)) / 4 - 1);
    }
    LANES128(v8).n128_u32[1] = v4;
    if (LANES128(v12).n128_f32[2] < 0x0.0p+0f) {
      v5 = *((_QWORD*)a2 + 3);
    }
    LANES128(v8).n128_u32[2] = v5;
    v14 = vmulq_f32(v12, v8);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_f32[0] > 0x0.0p+0f) {
      return 0;
    }
    v15 = *((_QWORD*)a2 + 1);
    v16 = *(_OWORD*)a2;
    v17 = (unsigned int)DWORDn(*(_QWORD*)a2, sizeof(*(_QWORD*)a2) / 4 - 1);
  }
  else {
    v3 = *((_OWORD*)a2 + 1);
    v16 = *a2;
    v17 = (unsigned int)a2[1];
    v15 = a2[2];
  }
  *(_QWORD*)&v18 = v16 | (unsigned __int64)(v17 << 32);
  *(_QWORD*)&v19 = v18;
  *(_QWORD*)&v20 = v3;
  *(_QWORD*)&v21 =
      (unsigned int)v3 | ((unsigned __int64)(unsigned int)v17 << 32);
  *(_QWORD*)&v22 = v3;
  *(_QWORD*)&v23 = v21;
  *((_QWORD*)&v19 + 1) = v15;
  *((_QWORD*)&v18 + 1) = DWORD2(v3);
  *((_QWORD*)&v21 + 1) = DWORD2(v3);
  *((_QWORD*)&v20 + 1) = DWORD2(v3);
  *(_OWORD*)&v82[8] = v18;
  *(_OWORD*)&v82[10] = v21;
  *((_QWORD*)&v23 + 1) = v15;
  *((_QWORD*)&v22 + 1) = v15;
  *(_OWORD*)v82 = v19;
  *(_OWORD*)&v82[2] = v23;
  *(_QWORD*)&v19 = v16 | ((unsigned __int64)DWORD1(v3) << 32);
  v24 = LANES128(a1[9]).n128_i32[1];
  v25 = LANES128(a1[9]).n128_i32[2];
  v26 = v19;
  *((_QWORD*)&v19 + 1) = DWORD2(v3);
  v27 = a1[3];
  v28 = a1[4];
  *(_OWORD*)&v82[4] = v26;
  *(_OWORD*)&v82[6] = v22;
  *(_OWORD*)&v82[12] = v19;
  *(_OWORD*)&v82[14] = v20;
  v30 = a1[1];
  v29 = a1[2];
  LANES64(v31).n64_u64[0] =
      LANES128_OF(
          vaddq_f32(
              v28,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&v82[2 * v24])),
                      v29, COERCE_AS(float32x2_t, v82[2 * v24]), 1),
                  v27, *(float32x4_t*)&v82[2 * v24], 2)))
          .n128_u64[0];
  LANES64(v32).n64_u64[0] =
      LANES128_OF(
          vaddq_f32(
              v28,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&v82[2 * v25])),
                      v29, COERCE_AS(float32x2_t, v82[2 * v25]), 1),
                  v27, *(float32x4_t*)&v82[2 * v25], 2)))
          .n128_u64[0];
  v33 = LANES128(a1[9]).n128_i32[3];
  v34 = LANES128(a1[10]).n128_i32[0];
  v81[0] = LANES64(v31).n64_u64[0];
  v81[1] = LANES64(v32).n64_u64[0];
  LANES64(v35).n64_u64[0] =
      LANES128_OF(
          vaddq_f32(
              v28,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&v82[2 * v33])),
                      v29, COERCE_AS(float32x2_t, v82[2 * v33]), 1),
                  v27, *(float32x4_t*)&v82[2 * v33], 2)))
          .n128_u64[0];
  LANES64(v36).n64_u64[0] =
      LANES128_OF(
          vaddq_f32(
              v28,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&v82[2 * v34])),
                      v29, COERCE_AS(float32x2_t, v82[2 * v34]), 1),
                  v27, *(float32x4_t*)&v82[2 * v34], 2)))
          .n128_u64[0];
  v37 = LANES128(a1[10]).n128_i32[1];
  v38 = LANES128(a1[10]).n128_i32[2];
  v81[2] = LANES64(v35).n64_u64[0];
  v81[3] = LANES64(v36).n64_u64[0];
  *(_QWORD*)&v21 =
      LANES128_OF(
          vaddq_f32(
              v28,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&v82[2 * v37])),
                      v29, COERCE_AS(float32x2_t, v82[2 * v37]), 1),
                  v27, *(float32x4_t*)&v82[2 * v37], 2)))
          .n128_u64[0];
  v39 = (unsigned int)v21;
  v40 = DWORD1(v21);
  v41 = *(float32x4_t*)&v82[2 * v38];
  LANES64(v42).n64_u64[0] = v39 | (v40 << 32);
  v43 = vmlaq_lane_f32(vmulq_n_f32(v30, LANES128(v41).n128_f32[0]), v29,
                       COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]), 1);
  PSEUDO_LOW_LANE64(v44, n64_u64, LANES64(v31).n64_u64[0]);
  PSEUDO_LOW_LANE64(
      v45, n64_u64,
      LANES128_OF(vaddq_f32(v28, vmlaq_laneq_f32(v43, v27, v41, 2)))
          .n128_u64[0]);
  v81[4] = LANES64(v42).n64_u64[0];
  v81[5] = LANES64(v45).n64_u64[0];
  LANES128(v27).n128_u64[0] = LANES64_OF(vsub_f32(v45, v31)).n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_f32[0] <= 0x1.0000000000000p-23f) {
    PSEUDO_LOW_LANE64(v44, n64_u64, LANES64(v32).n64_u64[0]);
    LANES64(v48).n64_u64[0] = LANES64_OF(vsub_f32(v45, v32)).n64_u64[0];
    LANES64(v49).n64_u64[0] = LANES64_OF(vmul_f32(v48, v48)).n64_u64[0];
    if (LANES64_OF(vpadd_f32(v49, v49)).n64_f32[0] <= 0x1.0000000000000p-23f) {
      PSEUDO_LOW_LANE64(v44, n64_u64, LANES64(v35).n64_u64[0]);
      LANES64(v50).n64_u64[0] = LANES64_OF(vsub_f32(v45, v35)).n64_u64[0];
      LANES64(v51).n64_u64[0] = LANES64_OF(vmul_f32(v50, v50)).n64_u64[0];
      if (LANES64_OF(vpadd_f32(v51, v51)).n64_f32[0] <=
          0x1.0000000000000p-23f) {
        PSEUDO_LOW_LANE64(v44, n64_u64, LANES64(v36).n64_u64[0]);
        LANES64(v52).n64_u64[0] = LANES64_OF(vsub_f32(v45, v36)).n64_u64[0];
        LANES64(v53).n64_u64[0] = LANES64_OF(vmul_f32(v52, v52)).n64_u64[0];
        if (LANES64_OF(vpadd_f32(v53, v53)).n64_f32[0] <=
            0x1.0000000000000p-23f) {
          PSEUDO_LOW_LANE64(v44, n64_u64, LANES64(v42).n64_u64[0]);
          LANES64(v54).n64_u64[0] = LANES64_OF(vsub_f32(v45, v42)).n64_u64[0];
          LANES64(v55).n64_u64[0] = LANES64_OF(vmul_f32(v54, v54)).n64_u64[0];
          if (LANES64_OF(vpadd_f32(v55, v55)).n64_f32[0] <=
              0x1.0000000000000p-23f) {
            v64 = LANES128(a1[10]).n128_f32[3];
            v67 = true;
            v65 = 5;
            v46 = 5;
            goto LABEL_40;
          }
          v46 = 4;
        }
        else {
          v46 = 3;
        }
      }
      else {
        v46 = 2;
      }
    }
    else {
      v46 = 1;
    }
  }
  else {
    v46 = 0;
  }
  LANES64(v56).n64_u64[0] = LANES64_OF(vsub_f32(v44, v45)).n64_u64[0];
  LANES64(v57).n64_u64[0] =
      LANES64_OF(vsub_f32(((float32x2_t){0}), v45)).n64_u64[0];
  LANES64(v58).n64_u64[0] = LANES64_OF(vmul_f32(v57, v56)).n64_u64[0];
  LANES64(v59).n64_u64[0] = LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
  if (LANES64(v59).n64_f32[0] > 0x0.0p+0f) {
    LANES64(v60).n64_u64[0] = LANES64_OF(vmul_f32(v56, v56)).n64_u64[0];
    LANES64(v61).n64_u64[0] = LANES64_OF(vpadd_f32(v60, v60)).n64_u64[0];
    if ((LANES64_OF(vmvn_s8(vcge_f32(v59, v61))).n64_u8[0] & 1) == 0) {
      LANES64(v62).n64_u64[0] = LANES64_OF(vmul_f32(v44, v44)).n64_u64[0];
      goto LABEL_38;
    }
    LANES64(v45).n64_u64[0] =
        LANES64_OF(
            vadd_f32(vmul_n_f32(v56, LANES64_OF(vdiv_f32(v59, v61)).n64_f32[0]),
                     v45))
            .n64_u64[0];
  }
  LANES64(v62).n64_u64[0] = LANES64_OF(vmul_f32(v45, v45)).n64_u64[0];
LABEL_38:
  v63 = LANES64_OF(vsqrt_f32(vpadd_f32(v62, v62))).n64_f32[0];
  v64 = LANES128(a1[10]).n128_f32[3];
  if (v63 > v64) {
    v65 = v46 + 1;
    LANES64(v66).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(vrev64_s32(v57), v56),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    v67 = LANES64_OF(vpadd_f32(v66, v66)).n64_f32[0] >= 0x0.0p+0f;
  LABEL_40:
    v68 = 1;
    while (1) {
      PSEUDO_LOW_LANE64(v70, n64_u64, v81[v46]);
      PSEUDO_LOW_LANE64(v71, n64_u64, v81[v65]);
      LANES64(v72).n64_u64[0] = LANES64_OF(vsub_f32(v70, v71)).n64_u64[0];
      LANES64(v73).n64_u64[0] = LANES64_OF(vmul_f32(v72, v72)).n64_u64[0];
      if (LANES64_OF(vpadd_f32(v73, v73)).n64_f32[0] <=
          0x1.0000000000000p-23f) {
        goto LABEL_43;
      }
      LANES64(v74).n64_u64[0] = LANES64_OF(vsub_f32(v71, v70)).n64_u64[0];
      LANES64(v75).n64_u64[0] =
          LANES64_OF(vsub_f32(((float32x2_t){0}), v70)).n64_u64[0];
      LANES64(v76).n64_u64[0] = LANES64_OF(vmul_f32(v75, v74)).n64_u64[0];
      LANES64(v77).n64_u64[0] = LANES64_OF(vpadd_f32(v76, v76)).n64_u64[0];
      if (LANES64(v77).n64_f32[0] > 0x0.0p+0f) {
        LANES64(v78).n64_u64[0] = LANES64_OF(vmul_f32(v74, v74)).n64_u64[0];
        LANES64(v79).n64_u64[0] = LANES64_OF(vpadd_f32(v78, v78)).n64_u64[0];
        if ((LANES64_OF(vmvn_s8(vcge_f32(v77, v79))).n64_u8[0] & 1) == 0) {
          LANES64(v80).n64_u64[0] = LANES64_OF(vmul_f32(v71, v71)).n64_u64[0];
          goto LABEL_50;
        }
        LANES64(v70).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    v70,
                    vmul_n_f32(v74, LANES64_OF(vdiv_f32(v77, v79)).n64_f32[0])))
                .n64_u64[0];
      }
      LANES64(v80).n64_u64[0] = LANES64_OF(vmul_f32(v70, v70)).n64_u64[0];
    LABEL_50:
      if (LANES64_OF(vsqrt_f32(vpadd_f32(v80, v80))).n64_f32[0] <= v64) {
        break;
      }
      if ((v68 & 1) != 0) {
        LANES64(v69).n64_u64[0] =
            LANES64_OF(vmul_f32(vmul_f32(v74, vrev64_s32(v75)),
                                COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
                .n64_u64[0];
        v68 = v67 ^ (LANES64_OF(vpadd_f32(v69, v69)).n64_f32[0] < 0x0.0p+0f);
      }
      else {
        v68 = 0;
      }
      v46 = (unsigned int)v65;
    LABEL_43:
      if (++v65 == 6) {
        return v68 & 1;
      }
    }
  }
  v68 = 1;
  return v68 & 1;
}

#pragma GCC visibility pop
