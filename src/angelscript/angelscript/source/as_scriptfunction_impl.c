#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 asCScriptEngine_GetTypeIdFromDataType(__int64, __int64);
bool asCDataType_IsReadOnly(__int64);
__int64 asCScriptFunction_25c470(__int64 a1, unsigned int a2, _DWORD* a3,
                                 _DWORD* a4, __int64* a5, _QWORD* a6);

__int64 asCScriptFunction_25c470(__int64 a1, unsigned int a2, _DWORD* a3,
                                 _DWORD* a4, __int64* a5, _QWORD* a6)
{
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;

  if (a2 >= *(_DWORD*)(a1 + 128)) {
    return 4294967291LL;
  }
  if (a3 != nullptr) {
    *(_DWORD*)a3 = asCScriptEngine_GetTypeIdFromDataType(
        *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 120) + 24LL * a2);
  }
  if (a4 != nullptr) {
    *(_DWORD*)a4 = *(_DWORD*)(*(_QWORD*)(a1 + 184) + 4LL * a2);
    if (asCDataType_IsReadOnly(*(_QWORD*)(a1 + 120) + 24LL * a2)) {
      v11 = 4;
    }
    else {
      v11 = 0;
    }
    *(_DWORD*)a4 |= v11;
  }
  if (a5 != nullptr) {
    if (a2 >= *(_DWORD*)(a1 + 160)) {
      v17 = 0;
    }
    else {
      v12 = *(_QWORD*)(a1 + 152) + 24LL * a2;
      v13 = *(_DWORD*)v12;
      v16 = *(_QWORD*)(v12 + 8);
      v15 = v12 + 8;
      v14 = v16;
      if (v13 >= 0xC) {
        v17 = v14;
      }
      else {
        v17 = v15;
      }
    }
    *a5 = v17;
  }
  if (a6 == nullptr) {
    return 0;
  }
  if (a2 >= *(_DWORD*)(a1 + 224)) {
    v19 = 0;
  }
  else {
    v19 = *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8LL * a2);
    if (v19 != 0) {
      v20 = *(_DWORD*)v19;
      v22 = *(_QWORD*)(v19 + 8);
      v19 += 8;
      v21 = v22;
      if (v20 >= 0xC) {
        v19 = v21;
      }
    }
  }
  *a6 = v19;
  return 0;
}

#pragma GCC visibility pop
