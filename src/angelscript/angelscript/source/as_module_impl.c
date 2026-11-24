#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_260a40(PSEUDO_X8, __int64,
                                                   const char*);
__attribute__((swiftcall)) void asCDataType_Format(PSEUDO_X8, __int64, __int64,
                                                   char);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_1c2180(__int64*, unsigned int);
__int64 GameRoutine_25fba0(__int64 result, unsigned int*);
__int64 asCAtomic_get(_QWORD);
__int64 asCDataType_GetSizeOnStackDWords(__int64);
__int64 asCGlobalProperty_DestroyInternal(__int64);
__int64 asCGlobalProperty_GetAddressOfValue(_QWORD);
__int64 asCGlobalProperty_GetInitFunc(_QWORD);
__int64 asCGlobalProperty_Release(__int64);
__int64 asCModule_InitGlobalProp(__int64, __int64, __int64);
__int64 asCModule_UninitializeGlobalProp(__int64 result, __int64);
__int64 asCScriptEngine_GetTypeIdFromDataType(__int64, __int64);
__int64 asCScriptEngine_RemoveGlobalProperty(__int64 result, __int64);
__int64 asCScriptFunction_ReleaseInternal(_DWORD*);
__int64 asCString_Destroy_asCString(__int64 result);
__int64 asCThreadManager_GetLocalData();
bool GameRoutine_2606f0(__int64, const char*);
bool asCDataType_IsReadOnly(__int64);
extern char GameData_1a9f09e;
unsigned int* GameRoutine_25fd90(unsigned int*, const char*);
unsigned int* GameRoutine_25fee0(unsigned int*, unsigned int*);
__int64 asCModule_1dbf80(__int64 a1, __int64 a2);
__int64 asCModule_1dcc70(__int64 a1, unsigned int a2);
__int64 asCModule_1dceb0(__int64 a1, unsigned int a2, char a3);
__int64 asCModule_1dcfc0(__int64 a1, unsigned int a2, _QWORD* a3, _QWORD* a4,
                         _DWORD* a5, bool* a6);
__int64 asCModule_1de470(__int64 a1, unsigned int a2);
__int64 asCModule_1de570(__int64 a1, unsigned int a2);

__int64 asCModule_1dbf80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _BOOL4 v32;

  if (*(_BYTE*)(a1 + 496) == 1) {
    v2 = *(unsigned int*)(a1 + 464);
    if ((_DWORD)v2 != 0) {
      v3 = 0;
      while (*(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v3) == 0) {
        if (v2 == ++v3) {
          LODWORD(v3) = *(_DWORD*)(a1 + 464);
          break;
        }
      }
      if ((unsigned int)v3 < (unsigned int)v2) {
        v4 = *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8LL * (unsigned int)v3);
        if (v4 != 0) {
          v5 = (unsigned int)v3;
        LABEL_12:
          v6 = a1;
          v7 = a2;
          asCModule_UninitializeGlobalProp(a1, v4);
          v8 = *(_QWORD*)(v6 + 456);
          a1 = v6;
          a2 = v7;
          while (1) {
            v9 = v5 + 1;
            if (v5 + 1 >= (unsigned __int64)*(unsigned int*)(v6 + 464)) {
              break;
            }
            v10 = *(_QWORD*)(v8 + 8 + 8 * v5++);
            if (v10 != 0) {
              v4 = *(_QWORD*)(v8 + 8LL * v9);
              v5 = v9;
              if (v4 != 0) {
                goto LABEL_12;
              }
              break;
            }
          }
        }
      }
    }
    *(_BYTE*)(a1 + 496) = 0;
  }
  if ((*(_BYTE*)(a1 + 496) & 1) != 0) {
    return 0xFFFFFFFFLL;
  }
  v12 = *(unsigned int*)(a1 + 464);
  v13 = a2;
  v14 = a1;
  if ((_DWORD)v12 != 0) {
    v15 = 0;
    while (*(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v15) == 0) {
      if (v12 == ++v15) {
        LODWORD(v15) = *(_DWORD*)(a1 + 464);
        break;
      }
    }
    if ((unsigned int)v15 < (unsigned int)v12) {
      v16 = *(_QWORD*)(a1 + 456);
      v17 = *(_QWORD*)(v16 + 8LL * (unsigned int)v15);
      if (v17 == 0) {
        goto LABEL_35;
      }
      v18 = (unsigned int)v15;
    LABEL_27:
      v19 = asCGlobalProperty_GetAddressOfValue(v17);
      v20 = asCDataType_GetSizeOnStackDWords(v17 + 24);
      GameRoutine_1a0ba50(v19, 0, 4LL * v20);
      v12 = *(unsigned int*)(v14 + 464);
      v16 = *(_QWORD*)(v14 + 456);
      v21 = v18 + 1;
      while (v21 < v12) {
        v22 = *(_QWORD*)(v16 + 8 * v21++);
        LODWORD(v18) = v18 + 1;
        if (v22 != 0) {
          if ((unsigned int)v12 <= (unsigned int)v18) {
            break;
          }
          v23 = v21 - 1;
          v17 = *(_QWORD*)(v16 + 8LL * v23);
          v18 = v23;
          if (v17 != 0) {
            goto LABEL_27;
          }
          goto LABEL_35;
        }
      }
    }
  }
  if ((_DWORD)v12 == 0) {
    goto LABEL_55;
  }
  v16 = *(_QWORD*)(v14 + 456);
LABEL_35:
  v24 = 0;
  while (*(_QWORD*)(v16 + 8 * v24) == 0) {
    if ((unsigned int)v12 == ++v24) {
      LODWORD(v24) = v12;
      break;
    }
  }
  if ((unsigned int)v12 <= (unsigned int)v24) {
  LABEL_55:
    v32 = true;
    v26 = v13;
    if (v13 != 0) {
      goto LABEL_60;
    }
    goto LABEL_58;
  }
  LODWORD(v25) = 0;
  v26 = v13;
  do {
    if ((_DWORD)v25 != 0) {
      break;
    }
    v27 = *(_QWORD*)(v14 + 456);
    v28 = *(_QWORD*)(v27 + 8LL * (unsigned int)v24);
    if (v28 == 0) {
      break;
    }
    v29 = (unsigned int)v12;
    v30 = (unsigned int)v24 + 1LL;
    if ((unsigned int)v12 <= (int)v24 + 1) {
      LODWORD(v12) = v24 + 1;
    }
    while (v30 < v29) {
      v31 = *(_QWORD*)(v27 + 8 * v30);
      LODWORD(v24) = v24 + 1;
      ++v30;
      if (v31 != 0) {
        v25 = asCGlobalProperty_GetInitFunc(v28);
        if (v25 == 0) {
          goto LABEL_42;
        }
        goto LABEL_52;
      }
    }
    LODWORD(v24) = v12;
    v25 = asCGlobalProperty_GetInitFunc(v28);
    if (v25 != 0) {
    LABEL_52:
      if (v26 == 0) {
        v26 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 32) + 544LL))(
            *(_QWORD*)(v14 + 32));
        if (v26 == 0) {
          *(_BYTE*)(v14 + 496) = 1;
          return 0;
        }
      }
      LODWORD(v25) = asCModule_InitGlobalProp(v14, v28, v26);
    }
  LABEL_42:
    LODWORD(v12) = *(_DWORD*)(v14 + 464);
  } while ((unsigned int)v24 < (unsigned int)v12);
  v32 = v25 == 0;
  if (v13 == 0) {
  LABEL_58:
    if (v26 != 0) {
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v14 + 32) + 552LL))(
          *(_QWORD*)(v14 + 32), v26);
    }
  }
LABEL_60:
  *(_BYTE*)(v14 + 496) = 1;
  if (v32) {
    return 0;
  }
  else {
    return 4294967270LL;
  }
}

__int64 asCModule_1dcc70(__int64 a1, unsigned int a2)
{
  __int64 v3;

  if (a2 >= *(_DWORD*)(a1 + 464)) {
    return 4294967291LL;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8LL * a2);
  if (v3 == 0) {
    return 4294967291LL;
  }
  if (*(_BYTE*)(a1 + 496) == 1) {
    asCModule_UninitializeGlobalProp(
        a1, *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8LL * a2));
  }
  asCGlobalProperty_DestroyInternal(v3);
  if ((unsigned int)asCAtomic_get(v3 + 108) == 2) {
    asCScriptEngine_RemoveGlobalProperty(*(_QWORD*)(a1 + 32), v3);
  }
  GameRoutine_1c2180((__int64*)(a1 + 344), a2);
  asCGlobalProperty_Release(v3);
  return 0;
}

__int64 asCModule_1dceb0(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v13[6];

  if (a2 >= *(_DWORD*)(a1 + 464)) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8LL * a2);
  if (v5 == 0) {
    return 0;
  }
  v8 = asCThreadManager_GetLocalData();
  asCDataType_Format((void*)((__int64)v13), v5 + 24, *(_QWORD*)(a1 + 88), 0);
  GameRoutine_25fba0(v8 + 32, v13);
  asCString_Destroy_asCString((__int64)v13);
  GameRoutine_25fd90((unsigned int*)(v8 + 32), " ");
  if ((a3 & 1) != 0 &&
      GameRoutine_2606f0(*(_QWORD*)(v5 + 56), &GameData_1a9f09e)) {
    GameRoutine_260a40((void*)(v13), *(_QWORD*)(v5 + 56), "::");
    GameRoutine_25fee0((unsigned int*)(v8 + 32), v13);
    asCString_Destroy_asCString((__int64)v13);
  }
  GameRoutine_25fee0((unsigned int*)(v8 + 32), (unsigned int*)v5);
  v11 = *(_QWORD*)(v8 + 40);
  v10 = v8 + 40;
  v9 = v11;
  if (*(_DWORD*)(v10 - 8) >= 0xCu) {
    return v9;
  }
  else {
    return v10;
  }
}

__int64 asCModule_1dcfc0(__int64 a1, unsigned int a2, _QWORD* a3, _QWORD* a4,
                         _DWORD* a5, bool* a6)
{
  __int64 v6;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a2 >= *(_DWORD*)(a1 + 464)) {
    return 4294967291LL;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8LL * a2);
  if (v6 == 0) {
    return 4294967291LL;
  }
  if (a3 != nullptr) {
    if (*(_DWORD*)v6 >= 0xCu) {
      v8 = *(_QWORD*)(v6 + 8);
    }
    else {
      v8 = v6 + 8;
    }
    *a3 = v8;
  }
  if (a4 != nullptr) {
    v9 = *(_QWORD*)(v6 + 56);
    v10 = *(_DWORD*)v9;
    v13 = *(_QWORD*)(v9 + 8);
    v11 = v9 + 8;
    v12 = v13;
    if (v10 >= 0xC) {
      v11 = v12;
    }
    *a4 = v11;
  }
  if (a5 != nullptr) {
    *(_DWORD*)a5 =
        asCScriptEngine_GetTypeIdFromDataType(*(_QWORD*)(a1 + 32), v6 + 24);
  }
  if (a6 != nullptr) {
    *a6 = asCDataType_IsReadOnly(v6 + 24);
  }
  return 0;
}

__int64 asCModule_1de470(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;

  if (a2 >= *(_DWORD*)(a1 + 288)) {
    return 4294967291LL;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 280) + 8LL * a2);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned int*)(v2 + 32);
  if ((_DWORD)v3 == -1) {
    return 0;
  }
  *(_DWORD*)(v2 + 32) = -1;
  asCScriptFunction_ReleaseInternal(
      *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 1928LL) + 8 * v3));
  return 0;
}

__int64 asCModule_1de570(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (a2 >= *(_DWORD*)(a1 + 288)) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 280) + 8LL * a2);
  v5 = *(_QWORD*)(v2 + 16);
  v3 = v2 + 16;
  v4 = v5;
  if (*(_DWORD*)(v3 - 8) >= 0xCu) {
    return v4;
  }
  else {
    return v3;
  }
}

#pragma GCC visibility pop
