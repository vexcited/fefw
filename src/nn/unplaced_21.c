#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* SdkData_e89bd8;
float nn_6a4de0();

__attribute__((no_builtin("memset", "memcpy", "memmove"))) float nn_6a4de0()
{

#pragma clang fp contract(off)
  __int64 v0;
  _OWORD* v1;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_OWORD**)(v0 + 32);
  if (v1 != nullptr) {
    *v1 = (__typeof__(*v1)){0};
    v1[1] = (__typeof__(v1[1])){0};
    v1[2] = (__typeof__(v1[2])){0};
    v1[3] = (__typeof__(v1[3])){0};
    v1[4] = (__typeof__(v1[4])){0};
    v1[5] = (__typeof__(v1[5])){0};
    v1[6] = (__typeof__(v1[6])){0};
    v1[7] = (__typeof__(v1[7])){0};
    v1[8] = (__typeof__(v1[8])){0};
    v1[9] = (__typeof__(v1[9])){0};
    v1[10] = (__typeof__(v1[10])){0};
    v1[11] = (__typeof__(v1[11])){0};
    v1[12] = (__typeof__(v1[12])){0};
    v1[13] = (__typeof__(v1[13])){0};
    v1[14] = (__typeof__(v1[14])){0};
    v1[15] = (__typeof__(v1[15])){0};
    v1[16] = (__typeof__(v1[16])){0};
    v1[17] = (__typeof__(v1[17])){0};
    v1[18] = (__typeof__(v1[18])){0};
    v1[19] = (__typeof__(v1[19])){0};
    v1[20] = (__typeof__(v1[20])){0};
    v1[21] = (__typeof__(v1[21])){0};
    v1[22] = (__typeof__(v1[22])){0};
    v1[23] = (__typeof__(v1[23])){0};
    v1[24] = (__typeof__(v1[24])){0};
    v1[25] = (__typeof__(v1[25])){0};
    v1[26] = (__typeof__(v1[26])){0};
    v1[27] = (__typeof__(v1[27])){0};
    return 0x0.0p+0f;
  }
  else {
    *(_QWORD*)(v0 + 32) = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(8, 56),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return result;
}

#pragma GCC visibility pop
