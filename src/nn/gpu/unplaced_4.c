#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)
__int64 GameRoutine_856170();
__int64 GameRoutine_86a3c0();
__int64 GameRoutine_86a460();
__int64 GameRoutine_86a640();

__int64 nn_gpu_472d60(__int64* a1, __int64 a2);
__int64 nn_gpu_4730a0(__int64* a1, _QWORD* a2);

__int64 nn_gpu_472d60(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a1;
  v3 = a2 - 32;
  GameRoutine_86a3c0(*(_QWORD*)(*a1 + 8), *(_QWORD*)(a2 - 32),
                     *(_QWORD*)(a2 - 24), *(unsigned int*)(a2 - 12));
  if ((unsigned int)GameRoutine_86a640(*(_DWORD*)(v3 + 16)) != 0) {
    GameRoutine_856170();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 40),
                            0xFFFFFFFFFFFFFFFFLL, memory_order_relaxed);
  return (*(__int64 (**)(__int64, _QWORD))(v2 + 24))(v3, *(_QWORD*)(v2 + 32));
}

__int64 nn_gpu_4730a0(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v4;
  unsigned int v5;

  v2 = *a1;
  GameRoutine_86a460(*(_QWORD*)(*a1 + 8), a2[5], (*a2 << 12) | 0xFFFLL,
                     *((unsigned int*)a2 - 1), 1);
  v5 = *((_DWORD*)a2 - 2);
  v4 = a2 - 1;
  if ((unsigned int)GameRoutine_86a640(v5) != 0) {
    GameRoutine_856170();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 40),
                            0xFFFFFFFFFFFFFFFFLL, memory_order_relaxed);
  return (*(__int64 (**)(_QWORD*, _QWORD))(v2 + 24))(v4, *(_QWORD*)(v2 + 32));
}

#pragma GCC visibility pop
