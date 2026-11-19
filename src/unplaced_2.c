#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09be0(__int64, const char*);
__int64 GameRoutine_1a0a670(__int64, const char*);
__int64 nn_fs_Commit(const char*);
__int64 nn_fs_DeleteFile(const char*);
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_1a09c70(const char*);
__int64 _657220(__int64 a1, char* a2);

__int64 _657220(__int64 a1, char* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  char* v6;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  char* v12;
  char* v13;
  char* v14;
  __int64 result;
  char* v16;
  _QWORD v17[34];

  v4 = atomic_load((unsigned __int8*)(a1 + 81));
  if (v4 != 1) {
    return 514;
  }
  v17[32] = v2;
  v17[33] = v3;
  v5 = *(unsigned __int8*)(a1 + 56);
  v6 = (const char*)(a1 + 57);
  v9 = v5 >> 1;
  v10 = (v5 & 1) == 0;
  v11 = *(_QWORD*)(a1 + 64);
  v12 = *(const char**)(a1 + 72);
  memset(&v17[12], 0, 160);
  if (v10) {
    v11 = v9;
    v13 = (const char*)(a1 + 57);
  }
  else {
    v13 = v12;
  }
  memset(v17, 0, 96);
  if (v11 != 0) {
    v14 = v13;
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  GameRoutine_1a09be0((__int64)v17, v14);
  strcpy((char*)v17 + GameRoutine_1a09c70((const char*)v17), ":/");
  GameRoutine_1a0a670((__int64)v17, a2);
  result = nn_fs_DeleteFile((const char*)v17);
  if ((_DWORD)result == 0 && (*(_BYTE*)(a1 + 80) & 1) != 0) {
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v16 = *(const char**)(a1 + 72);
    }
    else {
      v16 = v6;
    }
    nn_fs_Commit(v16);
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
