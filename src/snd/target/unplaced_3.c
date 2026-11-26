#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNX_15ad00(__int64, __int64);
__int64 BaseNx_14b510(__int64 result);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_2766a0(_QWORD*);
__int64 GameRoutine_276720(__int64, __int64);
__int64 GameRoutine_27b620(_QWORD*);
__int64 SoundArchivePlayer_27a2c0(__int64, __int64, __int64, __int64);
__int64 SoundDataManager_27b710(__int64, __int64);
bool SoundDataManager_27b740(__int64, __int64, __int64, __int64);
extern __int64* GameData_21349b0;
extern __int64 snd_g_memory;
extern char GameData_1a9f09e;
__int64 GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_190020(__int64*, const char*);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_279360(__int64, const char*);
void __attribute__((noreturn)) GameRoutine_164e10();
void __attribute__((noreturn)) snd_a36650();
__int64 snd_target_15b660(__int64 result, char* a2, __int64 a3,
                          unsigned __int64 a4, char* a5);

__int64 snd_target_15b660(__int64 result, char* a2, __int64 a3,
                          unsigned __int64 a4, char* a5)
{
  char* v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  char* v30;
  char* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  if (a2 != nullptr) {
    v5 = a2;
  }
  else {
    v5 = "noname";
  }
  if (*(_BYTE*)(result + 4137) == 1) {
    v9 = result;
    result = GameRoutine_1a09c70(v5);
    v10 = *(_BYTE*)(v9 + 56) >> 1;
    if ((*(_BYTE*)(v9 + 56) & 1) != 0) {
      v10 = *(_QWORD*)(v9 + 64);
    }
    if (result == v10) {
      v11 = result;
      if (result == -1) {
        snd_a36650();
      }
      v12 = (*(_BYTE*)(v9 + 56) & 1) != 0 ? *(_QWORD*)(v9 + 72) : v9 + 57;
      result = GameRoutine_1a09cf0(v12, (__int64)v5, v11);
      if (a3 != 0 && (_DWORD)result == 0) {
        v13 = *(__int64**)(v9 + 4048);
        v14 = *(_QWORD*)(v9 + 4056) - (_QWORD)v13;
        if (v14 != 0) {
          v15 = v14 >> 3;
          while (1) {
            v17 = *v13++;
            v16 = v17;
            if ((*(_BYTE*)(v17 + 1440) & 1) == 0) {
              break;
            }
            if (--v15 == 0) {
              goto LABEL_18;
            }
          }
        }
        else {
        LABEL_18:
          v18 = (*(__int64 (**)(__int64, __int64, __int64))(
              *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 1448, 32);
          GameRoutine_1a0ba50(v18, 0, 0x5A8u);
          GameRoutine_190020((__int64*)v18, &GameData_1a9f09e);
          GameRoutine_1a0ba50(v18 + 24, 0, 0x2F8u);
          GameRoutine_2766a0((_QWORD*)(v18 + 32));
          *(_QWORD*)(v18 + 32) = GameData_21349b0 + 2;
          GameRoutine_27b620((_QWORD*)(v18 + 784));
          *(_QWORD*)(v18 + 1368) = 0;
          *(_QWORD*)(v18 + 1360) = 0;
          BaseNx_14b510(v18 + 1376);
          *(_BYTE*)(v18 + 1440) = 0;
          v19 = *(__int64**)(v9 + 4056);
          v20 = *(_QWORD*)(v9 + 4064);
          if ((unsigned __int64)v19 >= v20) {
            v22 = *(_QWORD*)(v9 + 4048);
            v23 = (__int64)v19 - v22;
            v24 = (v23 >> 3) + 1;
            if (v24 >> 61 != 0) {
              GameRoutine_164e10();
            }
            v25 = v20 - v22;
            v26 = v25 >> 2;
            if (v25 >> 2 <= v24) {
              v26 = (v23 >> 3) + 1;
            }
            if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
              v27 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v27 = v26;
            }
            v28 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 16LL))(
                (__int64)snd_g_memory);
            v29 = (__int64*)(v28 + v23);
            *v29 = v18;
            v21 = v28 + v23 + 8;
            v30 = *(char**)(v9 + 4056);
            v31 = *(char**)(v9 + 4048);
            v32 = (__int64*)((char*)v29 + ((char*)v31 - (char*)v30));
            if (v30 != v31) {
              v33 = v32;
              do {
                v34 = *(_QWORD*)v31;
                v31 += 8;
                *v33++ = v34;
              } while (v31 != v30);
              v31 = *(char**)(v9 + 4048);
            }
            *(_QWORD*)(v9 + 4048) = v32;
            *(_QWORD*)(v9 + 4056) = v21;
            *(_QWORD*)(v9 + 4064) = v28 + 8 * v27;
            if (v31 != nullptr) {
              (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
                  snd_g_memory);
            }
          }
          else {
            *v19 = v18;
            v21 = (__int64)(v19 + 1);
          }
          *(_QWORD*)(v9 + 4056) = v21;
          v16 = *(_QWORD*)(v21 - 8);
        }
        *(_BYTE*)(v16 + 1440) = 1;
        GameRoutine_190200(v16, a5);
        *(_QWORD*)(v16 + 24) = a4;
        v35 = (*(__int64 (**)(__int64, unsigned __int64, _QWORD))(
            *(_QWORD*)v9 + 368LL))(v9, a4, 0);
        *(_QWORD*)(v16 + 1360) = v35;
        GameRoutine_1a0b950(v35, a3, a4);
        GameRoutine_276720(v16 + 32, *(_QWORD*)(v16 + 1360));
        GameRoutine_279360(v16 + 32, "content:/");
        v36 = SoundDataManager_27b710(v16 + 784, v16 + 32);
        v37 = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, v36, 8);
        v38 = *(_QWORD*)(v16 + 1368);
        *(_QWORD*)(v16 + 1368) = v37;
        if (v38 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
          v39 = *(_QWORD*)(v16 + 1368);
        }
        else {
          v39 = v37;
        }
        SoundDataManager_27b740(v16 + 784, v16 + 32, v39, v36);
        SoundArchivePlayer_27a2c0(v9 + 2392, (__int64)a5, v16 + 32,
                                  v16 + 784);
        *(_DWORD*)(v16 + 1388) = *(_DWORD*)(v9 + 80);
        *(_QWORD*)(v16 + 1392) = GameRoutine_190240(v16);
        return BaseNX_15ad00(v9, v16 + 1376);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
