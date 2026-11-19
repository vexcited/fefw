#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_17d75e0(PSEUDO_X8, unsigned int,
                                                    signed int, char);
__int64* GameRoutine_a542c0(_QWORD*, const char**);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 Registration_18d7720(__int64, int, int);
__int64 Registration_a50100(__int64*, const char*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
char* Manager_a4a540(__int64, const char*);
extern __int64 fw_memory_g_heap_manager;
extern __int64 snd_g_fileIndex;
extern char* msg_MessageManager_empty_text_;
extern char** GameData_21674d0;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
char* task_a4dbe0(__int64 a1, char* a2, char a3);
__attribute__((swiftcall)) void task_17d73a0(PSEUDO_X8 x8_, int a1);
__attribute__((swiftcall)) void task_17d7840(PSEUDO_X8 x8_, signed int a1,
                                             int a2, unsigned __int8* a3);

char* task_a4dbe0(__int64 a1, char* a2, char a3)
{
  int v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64* v11;
  __int64 v12;
  char* result;
  __int64 v14;
  int v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  char* v19;

  if (a2 == nullptr) {
    return msg_MessageManager_empty_text_;
  }
  if (*a2 == 0) {
    return msg_MessageManager_empty_text_;
  }
  v19 = a2;
  if (GameRoutine_a542c0((_QWORD*)(a1 + 14648), &v19) == nullptr) {
    return msg_MessageManager_empty_text_;
  }
  v6 = Registration_a50100((__int64*)(a1 + 15176), a2, (__int64)"Section");
  if (v6 != 0) {
    v7 = *(_QWORD*)(snd_g_fileIndex + 4752);
    if (v7 != 0) {
      if (v6 < 0) {
        v8 = -1;
        v9 = 0;
        v10 = 0;
        do {
          if ((v8 & 1) == 0) {
            v10 |= Registration_18d7720(v7, 0, v9);
          }
          v8 >>= 1;
          ++v9;
        } while (v9 != 32);
        if ((v10 | ((v10 & 0xFFFFFFFE & ((v10 & 0xFFFFFFFE) - 1)) != 0)) == 0) {
          return msg_MessageManager_empty_text_;
        }
      }
      else if ((unsigned int)Registration_18d7720(
                   *(_QWORD*)(snd_g_fileIndex + 4752), 0, v6) == 0) {
        return msg_MessageManager_empty_text_;
      }
    }
  }
  v19 = a2;
  v11 = GameRoutine_a542c0((_QWORD*)(a1 + 14648), &v19);
  if (v11 == nullptr) {
    return msg_MessageManager_empty_text_;
  }
  v12 = v11[5];
  if (v12 == 0) {
    return msg_MessageManager_empty_text_;
  }
  result = Manager_a4a540(*(_QWORD*)(v12 + 800), a2);
  if ((a3 & 1) != 0 || result == nullptr) {
    if (result != nullptr) {
      return result;
    }
    return msg_MessageManager_empty_text_;
  }
  v14 = *(int*)(a1 + 14596);
  v15 = *(_DWORD*)(a1 + 14592);
  v16 = result;
  if ((_DWORD)v14 == 0) {
    if (v15 < 3) {
      ++v15;
    }
    else {
      v15 = 0;
    }
    *(_DWORD*)(a1 + 14592) = v15;
  }
  *(_DWORD*)(a1 + 14596) = v14 + 1;
  v17 = *(_QWORD*)(a1 + 8 * v14 + 15160);
  v18 = a1 + 3648LL * v15 + 1824LL * (int)v14;
  GameRoutine_60a020(v17 + 8, a2);
  *(_QWORD*)(v17 + 48) = v18;
  *(_WORD*)(v17 + 60) = 0;
  *(_BYTE*)(v17 + 62) = 0;
  *(_QWORD*)(v17 + 40) = v16;
  *(_DWORD*)(v17 + 32) = 0;
  *(_DWORD*)(v17 + 56) = 0;
  return (char*)GameData_21674d0;
}

__attribute__((swiftcall)) void task_17d73a0(PSEUDO_X8 x8_, int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char* v19;
  char* v20;
  char v21;
  unsigned __int64 result;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    char v27[3];
    _BYTE v28[5];
  } v27_;

  v3 = 0;
  do {
    v4 = v3 + 1;
    v27_.v27[v3] = a1 % 10 + 48;
    if ((unsigned int)(a1 - 10) > 0xFFFFFFEC) {
      break;
    }
    a1 /= 10;
  } while (v3++ < 0x1D);
  v27_.v27[v4] = 0;
  if (v4 != 1) {
    v6 = (v4 >> 1) & 7;
    if ((v4 >> 1) - 1 < 7) {
      v7 = 0;
      if (v6 == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v8 = 0;
    v9 = v27_.v28;
    do {
      v10 = &v27_.v27[v4 + v8];
      v8 -= 8;
      v11 = *(v10 - 1);
      *(v10 - 1) = *(v9 - 3);
      *(v9 - 3) = v11;
      v12 = *(v10 - 2);
      *(v10 - 2) = *(v9 - 2);
      *(v9 - 2) = v12;
      v13 = *(v10 - 3);
      *(v10 - 3) = *(v9 - 1);
      *(v9 - 1) = v13;
      v14 = *(v10 - 4);
      *(v10 - 4) = *v9;
      *v9 = v14;
      v15 = *(v10 - 5);
      *(v10 - 5) = v9[1];
      v9[1] = v15;
      v16 = *(v10 - 6);
      *(v10 - 6) = v9[2];
      v9[2] = v16;
      v17 = *(v10 - 7);
      *(v10 - 7) = v9[3];
      v9[3] = v17;
      v18 = *(v10 - 8);
      *(v10 - 8) = v9[4];
      v9[4] = v18;
      v9 += 8;
    } while (-8LL * (v4 >> 4) != v8);
    v7 = -v8;
    v4 += v8;
    if (v6 != 0) {
    LABEL_12:
      v19 = &v27_.v27[v7];
      v20 = &v27_.v27[v4 - 1];
      do {
        v21 = *v20;
        --v6;
        *v20-- = *v19;
        *v19++ = v21;
      } while (v6 != 0);
    }
  }
LABEL_14:
  result = GameRoutine_1a09c70(v27_.v27);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v23 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (result | 7) + 1;
    }
    v26 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25, 16, 0);
    a2[1] = v23;
    a2[2] = v26;
    *a2 = v25 | 1;
    v24 = v26;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v24 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_23;
    }
  }
  result = GameRoutine_1a0b950(v24, (__int64)v27_.v27, v23);
LABEL_23:
  *(_BYTE*)(v24 + v23) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void task_17d7840(PSEUDO_X8 x8_, signed int a1,
                                             int a2, unsigned __int8* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v4;
  signed int v5;
  char v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  bool v11;
  int v13;
  unsigned int v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  char v24;
  char* v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  char v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;
  char v46[32];

  v4 = *a3;
  if ((unsigned int)(v4 - 2) < 2) {
    switch (a2) {
    case 0:
    case 1:
    case 2:
    case 13:
    case 16:
    case 17:
    case 18:
      v5 = 0;
      v6 = 44;
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_17d75e0((void*)(a4), a1, v5, v6));
        return;
      }
    case 3:
    case 4:
      v5 = 0;
      goto LABEL_25;
    case 5:
      v5 = 10000;
      if (v4 == 3) {
        v6 = 46;
      }
      else {
        v6 = 32;
      }
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_17d75e0((void*)(a4), a1, v5, v6));
        return;
      }
    case 6:
    case 11:
      v5 = 10000;
      v6 = 46;
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_17d75e0((void*)(a4), a1, v5, v6));
        return;
      }
    case 7:
    case 8:
    case 9:
    case 12:
      v5 = 10000;
    LABEL_25:
      v6 = 32;
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_17d75e0((void*)(a4), a1, v5, v6));
        return;
      }
    case 10:
      v5 = 0;
      v6 = 46;
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_17d75e0((void*)(a4), a1, v5, v6));
        return;
      }
    case 14:
    case 15: {
      X8CALL_X0(unsigned __int64, task_17d73a0((void*)(a4), a1));
      return;
    }
    default:
      __builtin_trap();
    }
  }
  if (v4 != 1) {
    X8CALL_X0(unsigned __int64, task_17d73a0((void*)(a4), a1));
    return;
  }
  v7 = a3[12];
  v8 = 0;
  if (*((int*)a3 + 1) >= 30) {
    v9 = 30;
  }
  else {
    v9 = *((_DWORD*)a3 + 1);
  }
  do {
    v10 = v8 + 1;
    v46[v8] = a1 % 10 + 48;
    if ((unsigned int)(a1 - 10) > 0xFFFFFFEC) {
      break;
    }
    a1 /= 10;
    v11 = v8++ >= 0x1D;
  } while (!v11);
  if (v9 <= (int)v10) {
    v14 = v10;
  }
  else {
    if (v7 != 0) {
      v13 = 48;
    }
    else {
      v13 = 32;
    }
    GameRoutine_1a0ba50((__int64)&v46[v10], v13,
                        (unsigned int)(~(int)v10 + v9) + 1LL);
    v14 = v9;
  }
  v16 = v14;
  v46[v14] = 0;
  if (v14 >= 2) {
    v17 = ((unsigned __int64)v14 >> 1) & 7;
    if (((unsigned int)v16 >> 1) - 1 < 7) {
      v18 = 0;
      if (v17 == 0) {
        goto LABEL_38;
      }
      goto LABEL_32;
    }
    v18 = 0;
    if (v9 <= (int)v10) {
      v19 = (unsigned int)v10;
    }
    else {
      v19 = (unsigned int)v9;
    }
    v20 = v19 >> 1;
    v21 = v19 - 8;
    v22 = v20 & 0x7FFFFFF8;
    do {
      v23 = &v46[v21 + 7];
      v24 = v46[v21 + 7];
      *v23 = v46[v18];
      v25 = &v46[v18 + 7];
      v46[v18] = v24;
      v26 = v46[v18 + 1];
      v18 += 8;
      v27 = v46[v21 + 6];
      *(v23 - 1) = v26;
      *(v25 - 6) = v27;
      v28 = v46[v21 + 5];
      *(v23 - 2) = *(v25 - 5);
      *(v25 - 5) = v28;
      v29 = v46[v21 + 4];
      *(v23 - 3) = *(v25 - 4);
      *(v25 - 4) = v29;
      v30 = v46[v21 + 3];
      *(v23 - 4) = *(v25 - 3);
      *(v25 - 3) = v30;
      v31 = v46[v21 + 2];
      *(v23 - 5) = *(v25 - 2);
      *(v25 - 2) = v31;
      v32 = v46[v21 + 1];
      *(v23 - 6) = *(v25 - 1);
      *(v25 - 1) = v32;
      LOBYTE(v23) = v46[v21];
      v46[v21] = *v25;
      v21 -= 8LL;
      *v25 = (char)v23;
    } while (v22 != v18);
    v16 = v21 + 8;
    if (v17 != 0) {
    LABEL_32:
      v33 = &v46[v16];
      if (v9 <= (int)v10) {
        v34 = (unsigned int)v10;
      }
      else {
        v34 = (unsigned int)v9;
      }
      v35 = &v46[v18];
      v36 = v33 - 1;
      v37 = -(__int64)((v34 >> 1) & 7);
      do {
        v38 = *v36;
        v11 = __CFADD__(v37++, 1);
        *v36-- = *v35;
        *v35++ = v38;
      } while (!v11);
    }
  }
LABEL_38:
  result = GameRoutine_1a09c70(v46);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v39 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (result | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v41,
                                                16, 0);
    v43_.v44 = v39;
    v43_.v45 = v40;
    v43_.v43 = v41 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * result;
    v40 = (char*)&v43_.v43 + 1;
    if (result == 0) {
      goto LABEL_47;
    }
  }
  result = GameRoutine_1a0b950((__int64)v40, (__int64)v46, v39);
LABEL_47:
  v40[v39] = 0;
  v42 = v43_.v44;
  *a4 = v43_.v43;
  a4[1] = v42;
  a4[2] = (__int64)v43_.v45;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
