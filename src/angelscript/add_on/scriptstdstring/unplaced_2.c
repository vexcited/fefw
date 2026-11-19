#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1b0a70(_QWORD*, __int64, __int64);
_QWORD* as_string_string_25ed50(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_1a0c230(PSEUDO_X8, _QWORD);
__int64* GameRoutine_1a31e0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a0abb0(__int64);
__int64 GameRoutine_1a0ace0(__int64, float);
__int64 GameRoutine_1a0acf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0c250(__int64, unsigned __int64);
__int64 GameRoutine_25ec80(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_c30250(__int64 result);
__int64 std___1_ios_base_init(__int64, __int64);
__int64 std___1_locale_locale_1a0a220(__int64);
extern _UNKNOWN* GameData_212f3b8;
extern __int64 GameData_212eae8;
extern __int64 GameData_212eaf0;
extern __int64 GameData_212f3b0;
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_25eca0(__int64*, const char*);
void GameRoutine_651250(__int64);
void __attribute__((noreturn)) VariableAssign_62dc60();
void std___1_locale_Destroy_locale(__int64);
__attribute__((swiftcall)) void
angelscript_add_on_scriptstdstring_1a7c70(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          float a3);
__attribute__((swiftcall)) void
angelscript_add_on_scriptstdstring_1a8e30(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          unsigned __int64 a2);
__int64* angelscript_add_on_scriptstdstring_1a9560(char a1, __int64* a2);
__attribute__((swiftcall)) void

angelscript_add_on_scriptstdstring_1a7c70(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          float a3)
{

#pragma clang fp contract(off)
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    __int64 v29;
  } v27_;
  struct {
    void* v30[2];
    void* v31;
  } v30_;
  struct {
    __int64 v32[2];
    char* v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
    _QWORD v36[7];
    __int64 v37;
    __int64 v38;
    void* v39;
    __int64 v40;
    int v41;
    char gap188_[4];
    _QWORD v42[20];
  } v34_;

  v34_.v42[6] = 0;
  v6 = GameData_212f3b0;
  v7 = (__int64*)GameData_212f3b8;
  v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8);
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8 + 8);
  v10 = GameData_212f3b0 + 64;
  v34_.v42[0] = GameData_212f3b0 + 64;
  v34_.v34 = v8;
  *(__int64*)((char*)&v34_.v34 + *(_QWORD*)(v8 - 24)) = v9;
  v11 = (char*)&v34_.v34 + *(_QWORD*)(v34_.v34 - 24);
  std___1_ios_base_init((__int64)v11, (__int64)&v34_.v35);
  *((_QWORD*)v11 + 17) = 0;
  *((_DWORD*)v11 + 36) = -1;
  v34_.v42[0] = v10;
  v12 = GameData_212eaf0;
  v34_.v34 = v6 + 24;
  v34_.v35 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220((__int64)v34_.v36);
  memset(&v34_.v36[1], 0, 48);
  v34_.v37 = 0;
  v34_.v38 = 0;
  v34_.v39 = nullptr;
  v34_.v40 = 0;
  v34_.v35 = GameData_212eae8 + 16;
  v34_.v41 = 16;
  GameRoutine_c30250((__int64)&v34_.v35);
  GameRoutine_1a0ace0((__int64)&v34_.v34, a3);
  GameRoutine_1a0c230((void*)(v30_.v30), &v34_.v35);
  if (((__int64)v30_.v30[0] & 1) != 0) {
    v13 = (const char*)v30_.v31;
  }
  else {
    v13 = (char*)v30_.v30 + 1;
  }
  GameRoutine_25eca0(v32_.v32, v13);
  if (((__int64)v30_.v30[0] & 1) != 0) {
    GameRoutine_651250((__int64)v30_.v31);
  }
  v14 = *a1;
  v15 = (v14 & 1) == 0;
  v16 = v14 >> 1;
  if (v15) {
    v17 = v16;
  }
  else {
    v17 = *((_QWORD*)a1 + 1);
  }
  if (v15) {
    v18 = (__int64)(a1 + 1);
  }
  else {
    v18 = *((_QWORD*)a1 + 2);
  }
  if ((v32_.v32[0] & 1) != 0) {
    v19 = v32_.v32[1];
  }
  else {
    v19 = (unsigned __int64)LOBYTE(v32_.v32[0]) >> 1;
  }
  if ((v32_.v32[0] & 1) != 0) {
    v20 = v32_.v33;
  }
  else {
    v20 = (char*)v32_.v32 + 1;
  }
  v21 = v19 + v17;
  if (v19 + v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    VariableAssign_62dc60();
  }
  if (v21 <= 0x16) {
    v27_.v28 = 0;
    v27_.v29 = 0;
    v27_.v27 = (unsigned __int8)(2 * v21);
    v22 = (char*)&v27_.v27 + 1;
    if (v17 == 0) {
      goto LABEL_27;
    }
  LABEL_26:
    GameRoutine_1a0b940((__int64)v22, v18, v17);
    goto LABEL_27;
  }
  if ((v21 | 7) == 0x17) {
    v23 = 26;
  }
  else {
    v23 = (v21 | 7) + 1;
  }
  v27_.v28 = v19 + v17;
  v27_.v29 = GameRoutine_25ec80(v23);
  v27_.v27 = v23 | 1;
  v22 = (char*)v27_.v29;
  if (v17 != 0) {
    goto LABEL_26;
  }
LABEL_27:
  v24 = (__int64)&v22[v17];
  if (v19 != 0) {
    GameRoutine_1a0b940(v24, (__int64)v20, v19);
  }
  *(_BYTE*)(v24 + v19) = 0;
  as_string_string_25ed50(a2, &v27_.v27);
  if ((v27_.v27 & 1) != 0) {
    GameRoutine_25ec90(v27_.v29, v27_.v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v32_.v32[0] & 1) != 0) {
    GameRoutine_25ec90(v32_.v33, v32_.v32[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v34_.v34 = *v7;
  *(__int64*)((char*)&v34_.v34 + *(_QWORD*)(v34_.v34 - 24)) = v25;
  v34_.v35 = GameData_212eae8 + 16;
  if ((v34_.v37 & 1) != 0) {
    GameRoutine_651250((__int64)v34_.v39);
  }
  v34_.v35 = v12 + 16;
  std___1_locale_Destroy_locale((__int64)v34_.v36);
  GameRoutine_1a0acf0(&v34_.v34, v7 + 1);
  {
    GameRoutine_1a0abb0((__int64)v34_.v42);
    return;
  }
}

__attribute__((swiftcall)) void

angelscript_add_on_scriptstdstring_1a8e30(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          unsigned __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    __int64 v29;
  } v27_;
  struct {
    void* v30[2];
    void* v31;
  } v30_;
  struct {
    __int64 v32[2];
    char* v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
    _QWORD v36[7];
    __int64 v37;
    __int64 v38;
    void* v39;
    __int64 v40;
    int v41;
    char gap188_[4];
    _QWORD v42[20];
  } v34_;

  v34_.v42[6] = 0;
  v6 = GameData_212f3b0;
  v7 = (__int64*)GameData_212f3b8;
  v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8);
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8 + 8);
  v10 = GameData_212f3b0 + 64;
  v34_.v42[0] = GameData_212f3b0 + 64;
  v34_.v34 = v8;
  *(__int64*)((char*)&v34_.v34 + *(_QWORD*)(v8 - 24)) = v9;
  v11 = (char*)&v34_.v34 + *(_QWORD*)(v34_.v34 - 24);
  std___1_ios_base_init((__int64)v11, (__int64)&v34_.v35);
  *((_QWORD*)v11 + 17) = 0;
  *((_DWORD*)v11 + 36) = -1;
  v34_.v42[0] = v10;
  v12 = GameData_212eaf0;
  v34_.v34 = v6 + 24;
  v34_.v35 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220((__int64)v34_.v36);
  memset(&v34_.v36[1], 0, 48);
  v34_.v37 = 0;
  v34_.v38 = 0;
  v34_.v39 = nullptr;
  v34_.v40 = 0;
  v34_.v35 = GameData_212eae8 + 16;
  v34_.v41 = 16;
  GameRoutine_c30250((__int64)&v34_.v35);
  GameRoutine_1a0c250((__int64)&v34_.v34, a2);
  GameRoutine_1a0c230((void*)(v30_.v30), &v34_.v35);
  if (((__int64)v30_.v30[0] & 1) != 0) {
    v13 = (const char*)v30_.v31;
  }
  else {
    v13 = (char*)v30_.v30 + 1;
  }
  GameRoutine_25eca0(v32_.v32, v13);
  if (((__int64)v30_.v30[0] & 1) != 0) {
    GameRoutine_651250((__int64)v30_.v31);
  }
  v14 = *a1;
  v15 = (v14 & 1) == 0;
  v16 = v14 >> 1;
  if (v15) {
    v17 = v16;
  }
  else {
    v17 = *((_QWORD*)a1 + 1);
  }
  if (v15) {
    v18 = (__int64)(a1 + 1);
  }
  else {
    v18 = *((_QWORD*)a1 + 2);
  }
  if ((v32_.v32[0] & 1) != 0) {
    v19 = v32_.v32[1];
  }
  else {
    v19 = (unsigned __int64)LOBYTE(v32_.v32[0]) >> 1;
  }
  if ((v32_.v32[0] & 1) != 0) {
    v20 = v32_.v33;
  }
  else {
    v20 = (char*)v32_.v32 + 1;
  }
  v21 = v19 + v17;
  if (v19 + v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    VariableAssign_62dc60();
  }
  if (v21 <= 0x16) {
    v27_.v28 = 0;
    v27_.v29 = 0;
    v27_.v27 = (unsigned __int8)(2 * v21);
    v22 = (char*)&v27_.v27 + 1;
    if (v17 == 0) {
      goto LABEL_27;
    }
  LABEL_26:
    GameRoutine_1a0b940((__int64)v22, v18, v17);
    goto LABEL_27;
  }
  if ((v21 | 7) == 0x17) {
    v23 = 26;
  }
  else {
    v23 = (v21 | 7) + 1;
  }
  v27_.v28 = v19 + v17;
  v27_.v29 = GameRoutine_25ec80(v23);
  v27_.v27 = v23 | 1;
  v22 = (char*)v27_.v29;
  if (v17 != 0) {
    goto LABEL_26;
  }
LABEL_27:
  v24 = (__int64)&v22[v17];
  if (v19 != 0) {
    GameRoutine_1a0b940(v24, (__int64)v20, v19);
  }
  *(_BYTE*)(v24 + v19) = 0;
  as_string_string_25ed50(a3, &v27_.v27);
  if ((v27_.v27 & 1) != 0) {
    GameRoutine_25ec90(v27_.v29, v27_.v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v32_.v32[0] & 1) != 0) {
    GameRoutine_25ec90(v32_.v33, v32_.v32[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v34_.v34 = *v7;
  *(__int64*)((char*)&v34_.v34 + *(_QWORD*)(v34_.v34 - 24)) = v25;
  v34_.v35 = GameData_212eae8 + 16;
  if ((v34_.v37 & 1) != 0) {
    GameRoutine_651250((__int64)v34_.v39);
  }
  v34_.v35 = v12 + 16;
  std___1_locale_Destroy_locale((__int64)v34_.v36);
  GameRoutine_1a0acf0(&v34_.v34, v7 + 1);
  {
    GameRoutine_1a0abb0((__int64)v34_.v42);
    return;
  }
}

__int64* angelscript_add_on_scriptstdstring_1a9560(char a1, __int64* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  struct {
    void* v18[2];
    void* v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
    _QWORD v22[7];
    __int64 v23;
    __int64 v24;
    void* v25;
    __int64 v26;
    int v27;
    char gap132_[4];
    _QWORD v28[19];
  } v20_;

  v20_.v28[6] = 0;
  v4 = GameData_212f3b0;
  v5 = (__int64*)GameData_212f3b8;
  {
    v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = GameData_212f3b0 + 64;
  v20_.v28[0] = GameData_212f3b0 + 64;
  v20_.v20 = v6;
  *(__int64*)((char*)&v20_.v20 + *(_QWORD*)(v6 - 24)) = v7;
  {
    v9 = (char*)&v20_.v20 + *(_QWORD*)(v20_.v20 - 24);
    __asm__ volatile("" ::"r"(v9));
  }
  std___1_ios_base_init((__int64)v9, (__int64)&v20_.v21);
  *((_QWORD*)v9 + 17) = 0;
  *((_DWORD*)v9 + 36) = -1;
  v20_.v28[0] = v8;
  v10 = GameData_212eaf0;
  v20_.v20 = v4 + 24;
  v20_.v21 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220((__int64)v20_.v22);
  memset(&v20_.v22[1], 0, 48);
  v20_.v23 = 0;
  v11 = GameData_212eae8 + 16;
  v20_.v24 = 0;
  v20_.v25 = nullptr;
  v20_.v26 = 0;
  v20_.v21 = GameData_212eae8 + 16;
  v20_.v27 = 16;
  GameRoutine_c30250((__int64)&v20_.v21);
  if ((a1 & 1) != 0) {
    v12 = "true";
  }
  else {
    v12 = "false";
  }
  if ((a1 & 1) != 0) {
    v13 = 4;
  }
  else {
    v13 = 5;
  }
  GameRoutine_1b0a70(&v20_.v20, (__int64)v12, v13);
  GameRoutine_1a0c230((void*)(v18_.v18), &v20_.v21);
  if (((__int64)v18_.v18[0] & 1) != 0) {
    v14 = (const char*)v18_.v19;
  }
  else {
    v14 = (char*)v18_.v18 + 1;
  }
  v15 = GameRoutine_1a09c70(v14);
  GameRoutine_1a31e0(a2, (__int64)v14, v15);
  if (((__int64)v18_.v18[0] & 1) != 0) {
    GameRoutine_651250((__int64)v18_.v19);
  }
  {
    v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
    __asm__ volatile("" ::"r"(v16));
  }
  v20_.v20 = *v5;
  *(__int64*)((char*)&v20_.v20 + *(_QWORD*)(v20_.v20 - 24)) = v16;
  v20_.v21 = v11;
  if ((v20_.v23 & 1) != 0) {
    GameRoutine_651250((__int64)v20_.v25);
  }
  v20_.v21 = v10 + 16;
  std___1_locale_Destroy_locale((__int64)v20_.v22);
  GameRoutine_1a0acf0(&v20_.v20, v5 + 1);
  GameRoutine_1a0abb0((__int64)v20_.v28);
  return a2;
}

#pragma GCC visibility pop
