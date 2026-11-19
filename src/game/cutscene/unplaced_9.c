#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 game_cutscene_181ab60(__int64 result);

__int64 game_cutscene_181ab60(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;

  if (*(_QWORD*)(result + 48) == 0) {
    return result;
  }
  v1 = *(_QWORD*)(result + 56);
  if (v1 == 0) {
    return result;
  }
  v3 = *(_QWORD**)(v1 + 24);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 == nullptr) {
    if (v2 == 0) {
      return result;
    }
    goto LABEL_18;
  }
  v4 = (float)(*(float*)(*(_QWORD*)(result + 48) + 24LL) /
               0x1.e000000000000p+5f) *
       0x1.e000000000000p+5f;
  v5 = 0x0.0p+0f;
  if (v4 > 0x0.0p+0f) {
    v6 = v3[26];
    v7 = 0x0.0p+0f;
    do {
      v8 = (unsigned __int64)(v3[27] - v6) >> 2;
      while (1) {
        v9 = 0x1.0000000000000p+0f;
        if ((int)v8 < 1) {
          break;
        }
        LODWORD(v8) = v8 - 1;
        if (*(float*)(v6 + 4LL * (unsigned int)v8) <= v7) {
          if ((v8 & 0x80000000) == 0) {
            v9 = *(float*)(v3[23] + 4 * (v8 & 0x7FFFFFFF));
          }
          break;
        }
      }
      v7 = v7 + 0x1.0000000000000p+0f;
      v5 = v5 + (float)(0x1.0000000000000p+0f / v9);
    } while (v7 < v4);
  }
  if (v2 != 0) {
  LABEL_18:
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = result;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
      return v10;
    }
  }
  return result;
}

#pragma GCC visibility pop
