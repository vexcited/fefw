#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 physx_PxGeometryQuery_computeGeomBounds(__int64);
__int64 physx_Pxstrnicmp(__int64);
__int64 physx_Pxvsnprintf(__int64, __int64, __int64, _QWORD*);
extern __int64 (*GameData_1f8a4c0)();
extern __int64 GameData_21a3678;
void GameRoutine_651250(__int64);
__int64 physx_source_foundation_55a9c0(__int64 a1, unsigned int a2, __int64 a3,
                                       unsigned int a4, __int64 a5, _QWORD* a6);
void __attribute__((noreturn)) physx_source_foundation_55b320();
void physx_source_foundation_55b330(__int64 a1);
__int64 physx_source_foundation_55b3c0(__int64 result);
void __attribute__((noreturn)) physx_source_foundation_55b420();

__int64 physx_source_foundation_55a9c0(__int64 a1, unsigned int a2, __int64 a3,
                                       unsigned int a4, __int64 a5, _QWORD* a6)
{
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _BYTE v20[1024];

  if ((*(_DWORD*)(a1 + 364) & a2) != 0) {
    physx_Pxstrnicmp(*(_QWORD*)(a1 + 368));
    v14 = a6[1];
    v19[0] = *a6;
    v19[1] = v14;
    v15 = a6[3];
    v19[2] = a6[2];
    v19[3] = v15;
    physx_Pxvsnprintf((__int64)v20, 1024, a5, v19);
    if (*(_DWORD*)(a1 + 352) != 0) {
      v16 = 0;
      do {
        v17 = *(_QWORD*)(*(_QWORD*)(a1 + 344) + 8 * v16);
        (*(void (**)(__int64, _QWORD, _BYTE*, __int64, _QWORD))(
            *(_QWORD*)v17 + 16LL))(v17, a2, v20, a3, a4);
        ++v16;
      } while (v16 < *(unsigned int*)(a1 + 352));
    }
    physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)(a1 + 368));
  }
  return 0;
}

void __attribute__((noreturn)) physx_source_foundation_55b320()
{
  __udf(0x8002u);
}

void physx_source_foundation_55b330(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;

  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)a1 = &GameData_1f8a4c0;
  v1 = *(_DWORD*)(a1 + 156);
  if ((v1 & 0x80000000) == 0 && (v1 & 0x7FFFFFFF) != 0) {
    v2 = *(_QWORD*)(a1 + 144);
    if (v2 == a1 + 8) {
      *(_BYTE*)(a1 + 136) = 0;
    }
    else if (v2 != 0) {
      v3 = a1;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(GameData_21a3678 + 24) + 24LL))(
          (void*)(GameData_21a3678 + 24), GameData_21a3678 + 24);
      a1 = v3;
    }
  }
  GameRoutine_651250(a1);
}

__int64 physx_source_foundation_55b3c0(__int64 result)
{
  int v1;
  __int64 v2;

  *(_QWORD*)result = &GameData_1f8a4c0;
  v1 = *(_DWORD*)(result + 156);
  if ((v1 & 0x80000000) == 0 && (v1 & 0x7FFFFFFF) != 0) {
    v2 = *(_QWORD*)(result + 144);
    if (v2 == result + 8) {
      *(_BYTE*)(result + 136) = 0;
    }
    else if (v2 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)(GameData_21a3678 + 24) +
                                       24LL))(GameData_21a3678 + 24);
    }
  }
  return result;
}

void __attribute__((noreturn)) physx_source_foundation_55b420()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
