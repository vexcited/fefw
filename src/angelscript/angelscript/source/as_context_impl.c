#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CastToObjectType(__int64 result);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 asCContext_PushCallState(__int64);
__int64 asCDataType_GetSizeInMemoryBytes(unsigned int*);
__int64 asCDataType_GetSizeOnStackDWords(__int64);
__int64 asCScriptEngine_CallObjectMethod_1cfee0(__int64, __int64, unsigned int);
bool asCDataType_IsFuncdef(__int64);
bool asCDataType_IsObject(__int64);
extern _UNKNOWN** GameData_212bff8;
extern __int64 (*GameData_219a968)(__int64, __int64);
__int64 asCContext_1b52b0(__int64 a1, void (***a2)(_QWORD));
__int64 asCContext_1b5340(__int64 a1, unsigned int a2, char a3);
__int64 asCContext_1b5480(__int64 a1, unsigned int a2, __int16 a3);
__int64 asCContext_1b55c0(__int64 a1, unsigned int a2, int a3);
__int64 asCContext_1b5700(__int64 a1, unsigned int a2, __int64 a3);
__int64 asCContext_1b5840(__int64 a1, unsigned int a2, float a3);
__int64 asCContext_1b5980(__int64 a1, unsigned int a2, double a3);
__int64 asCContext_1b5ac0(__int64 a1, unsigned int a2, __int64 a3);
__int64 asCContext_1b5be0(__int64 a1, unsigned int a2, __int64 a3);
__int64 asCContext_1b5d80(__int64 a1, unsigned int a2, __int64 a3, int a4);
__int64 asCContext_1b5ea0(__int64 a1, unsigned int a2);
__int64 asCContext_1b87a0(__int64 a1);

__int64 asCContext_1b52b0(__int64 a1, void (***a2)(_QWORD))
{
  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    **(_QWORD**)(a1 + 512) = a2;
    if (a2 != nullptr &&
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) + 50LL) & 0x20) !=
            0) {
      (**a2)(a2);
      return 0;
    }
    else {
      return 0;
    }
  }
  else {
    *(_DWORD*)(a1 + 24) = 7;
    return 0xFFFFFFFFLL;
  }
}

__int64 asCContext_1b5340(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeInMemoryBytes((unsigned int*)v7) != 1) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b5480(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeInMemoryBytes((unsigned int*)v7) != 2) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(_WORD*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b55c0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeInMemoryBytes((unsigned int*)v7) != 4) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b5700(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeOnStackDWords(v7) != 2) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b5840(__int64 a1, unsigned int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeOnStackDWords(v7) != 1) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(float*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b5980(__int64 a1, unsigned int a2, double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_20:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (asCDataType_IsObject(v7) || asCDataType_IsFuncdef(v7) ||
      (*(_BYTE*)(v7 + 16) & 1) != 0 ||
      (unsigned int)asCDataType_GetSizeOnStackDWords(v7) != 2) {
    result = 4294967284LL;
    goto LABEL_20;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 3LL * a2;
    v11 = 0;
    v12 = 8 * v10;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v11);
      v11 += 24;
    } while (v12 != v11);
  }
  *(double*)(*(_QWORD*)(a1 + 512) + 4LL * v9) = a3;
  return 0;
}

__int64 asCContext_1b5ac0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_17:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  if ((*(_BYTE*)(*(_QWORD*)(v3 + 120) + 24LL * a2 + 16) & 5) == 0) {
    result = 4294967284LL;
    goto LABEL_17;
  }
  if (*(_QWORD*)(v3 + 256) != 0) {
    v6 = 2;
  }
  else {
    v6 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v7 = v6 + 2;
  }
  else {
    v7 = v6;
  }
  if (a2 != 0) {
    v8 = 0;
    v9 = 24LL * a2;
    do {
      v7 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v8);
      v8 += 24;
    } while (v9 != v8);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 512) + 4LL * v7) = a3;
  return 0;
}

__int64 asCContext_1b5be0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v3 + 128)) {
    result = 4294967291LL;
  LABEL_10:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  v7 = *(_QWORD*)(v3 + 120) + 24LL * a2;
  if (!asCDataType_IsObject(v7) && !asCDataType_IsFuncdef(v7)) {
    result = 4294967284LL;
    goto LABEL_10;
  }
  if ((*(_BYTE*)(v7 + 16) & 1) == 0) {
    if ((*(_BYTE*)(v7 + 16) & 4) != 0) {
      if (a3 != 0) {
        if (asCDataType_IsFuncdef(v7)) {
          (*(void (**)(__int64))(*(_QWORD*)a3 + 8LL))(a3);
        }
        else {
          v9 = *(_DWORD*)(CastToObjectType(*(_QWORD*)(v7 + 8)) + 356);
          if (v9 != 0) {
            asCScriptEngine_CallObjectMethod_1cfee0(*(_QWORD*)(a1 + 16), a3,
                                                    v9);
          }
        }
      }
      else {
        CastToObjectType(*(_QWORD*)(v7 + 8));
      }
    }
    else {
      a3 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)(a1 + 16) + 480LL))(*(_QWORD*)(a1 + 16), a3,
                                          *(_QWORD*)(v7 + 8));
    }
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 184) + 256LL) != 0) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v11 = v10 + 2;
  }
  else {
    v11 = v10;
  }
  if (a2 != 0) {
    v12 = 3LL * a2;
    v13 = 0;
    v14 = 8 * v12;
    do {
      v11 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v13);
      v13 += 24;
    } while (v14 != v13);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 512) + 4LL * v11) = a3;
  return 0;
}

__int64 asCContext_1b5d80(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 4294967292LL;
  }
  v4 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v4 + 128)) {
    result = 4294967291LL;
  LABEL_17:
    *(_DWORD*)(a1 + 24) = 7;
    return result;
  }
  if (*(_DWORD*)(*(_QWORD*)(v4 + 120) + 24LL * a2) != 59) {
    result = 4294967284LL;
    goto LABEL_17;
  }
  if (*(_QWORD*)(v4 + 256) != 0) {
    v8 = 2;
  }
  else {
    v8 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v9 = v8 + 2;
  }
  else {
    v9 = v8;
  }
  if (a2 != 0) {
    v10 = 0;
    v11 = 24LL * a2;
    do {
      v9 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v10);
      v10 += 24;
    } while (v11 != v10);
  }
  v12 = 4LL * v9;
  *(_QWORD*)(*(_QWORD*)(a1 + 512) + v12) = a3;
  *(_DWORD*)(*(_QWORD*)(a1 + 512) + v12 + 8) = a4;
  return 0;
}

__int64 asCContext_1b5ea0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;

  if (*(_DWORD*)(a1 + 24) != 4) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 184);
  if (a2 >= *(_DWORD*)(v2 + 128)) {
    return 0;
  }
  if (*(_QWORD*)(v2 + 256) != 0) {
    v4 = 2;
  }
  else {
    v4 = 0;
  }
  if (*(_DWORD*)(a1 + 192) != 0) {
    v5 = v4 + 2;
  }
  else {
    v5 = v4;
  }
  if (a2 != 0) {
    v6 = 0;
    v7 = 24LL * a2;
    do {
      v5 += asCDataType_GetSizeOnStackDWords(
          *(_QWORD*)(*(_QWORD*)(a1 + 184) + 120LL) + v6);
      v6 += 24;
    } while (v7 != v6);
  }
  return *(_QWORD*)(a1 + 512) + 4LL * v5;
}

__int64 asCContext_1b87a0(__int64 a1)
{
  unsigned int v1;
  int v3;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_DWORD*)(a1 + 24) != 6) {
    return 0xFFFFFFFFLL;
  }
  v1 = *(_DWORD*)(a1 + 56);
  if (v1 >= *(int*)(a1 + 60) - 18) {
    v3 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 13944LL);
    if (v3 != 0 & v1 >= 9 * v3) {
      return 4294967269LL;
    }
    v5 = v1 + 90;
    if (v1 == -90) {
      v6 = 0;
    }
    else if (v5 > 2) {
      v6 = ((__int64 (*)(__int64))*GameData_212bff8)(8LL * (v1 + 90)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v6 == 0) {
        goto LABEL_23;
      }
    }
    else {
      v6 = a1 + 64;
    }
    v8 = *(_QWORD*)(a1 + 48);
    if (v8 != 0) {
      v9 = *(_DWORD*)(a1 + 56);
      if (v8 == v6) {
        if (v9 > v5) {
          *(_DWORD*)(a1 + 56) = v5;
        }
      }
      else {
        if (v9 > v5) {
          *(_DWORD*)(a1 + 56) = v5;
          v9 = v5;
        }
        GameRoutine_1a0b950(v6, v8, 8LL * v9),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 = *(_QWORD*)(a1 + 48);
        if (v11 != a1 + 64) {
          GameData_219a968(v11, v10);
        }
      }
    }
    *(_QWORD*)(a1 + 48) = v6;
    *(_DWORD*)(a1 + 60) = v5;
  }
LABEL_23:
  asCContext_PushCallState(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *(int*)(a1 + 56) + 9;
  if (v12 > *(_DWORD*)(a1 + 60)) {
    if (v12 <= 2) {
      v13 = a1 + 64;
      goto LABEL_27;
    }
    v13 = ((__int64 (*)(__int64))*GameData_212bff8)(
        8LL * (unsigned int)(*(int*)(a1 + 56) + 9)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 != 0) {
    LABEL_27:
      v14 = *(_QWORD*)(a1 + 48);
      if (v14 != 0 && v14 != v13) {
        v15 = *(_DWORD*)(a1 + 56);
        if (v15 > v12) {
          *(_DWORD*)(a1 + 56) = v12;
          v15 = v12;
        }
        GameRoutine_1a0b950(v13, v14, 8LL * v15),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v17 = *(_QWORD*)(a1 + 48);
        if (v17 != a1 + 64) {
          GameData_219a968(v17, v16);
        }
      }
      *(_QWORD*)(a1 + 48) = v13;
      *(_DWORD*)(a1 + 60) = v12;
      goto LABEL_34;
    }
    if (v12 > *(_DWORD*)(a1 + 60)) {
      v12 = *(_DWORD*)(a1 + 56);
      goto LABEL_35;
    }
  }
LABEL_34:
  *(_DWORD*)(a1 + 56) = v12;
LABEL_35:
  v18 = *(_QWORD*)(a1 + 48) + 8LL * v12;
  *(_QWORD*)(v18 - 72) = 0;
  *(_QWORD*)(v18 - 64) = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v18 - 56) = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(v18 - 48) = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(v18 - 40) = *(int*)(a1 + 196);
  *(_QWORD*)(v18 - 32) = *(unsigned int*)(a1 + 528);
  *(_QWORD*)(v18 - 24) = *(unsigned int*)(a1 + 532);
  *(_QWORD*)(v18 - 16) = *(_QWORD*)(a1 + 536);
  *(_QWORD*)(v18 - 8) = *(_QWORD*)(a1 + 544);
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 520) -= 8LL;
  *(_DWORD*)(a1 + 24) = 5;
  return 0;
}

#pragma GCC visibility pop
