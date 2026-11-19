#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN GameData_2203570;
float gfx_light_c53be0(__int64 a1);
long double gfx_light_c54410(__int64 a1);

float gfx_light_c53be0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  float v2;
  _QWORD* v3;
  float v4;
  __int64 v5;
  void (*v6)(_QWORD* __return_ptr, __int64, float*);
  float result;
  int v8;
  float v9;
  float v10;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(_DWORD*)(a1 + 88);
  v2 = *(float*)(a1 + 64);
  v3 = *((_QWORD**)&GameData_2203570 + 6 * v1 + 4);
  if (v3 != nullptr) {
    v4 = *(float*)(a1 + 72);
    v5 = *((_QWORD*)&GameData_2203570 + 6 * v1 + 4);
    v6 = *(void (**)(_QWORD* __return_ptr, __int64, float*))(*v3 + 48LL),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v10 = v2 * v4;
    v6(v3, v5, &v10), result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(float, "s0", "=w"));
    return result;
  }
  if (v1 == 0) {
    v8 = *(_DWORD*)(a1 + 8);
    if (v8 == 2) {
      v9 = 0x1.921fb60000000p+1f;
      goto LABEL_8;
    }
    if (v8 == 1) {
      v9 = 0x1.921fb60000000p+3f;
    LABEL_8:
      v2 = v2 / v9;
    }
  }
  return (float)(v2 * *(float*)(a1 + 72)) *
         (float)(*(float*)(a1 + 68) + 0x1.0000000000000p+0f);
}

long double gfx_light_c54410(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  void* v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = GameData_212c2a0;
  if (v1 != 0) {
    v3 = std___1___shared_weak_count_lock(v1);
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v4 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  return *(long double*)v2;
}

#pragma GCC visibility pop
