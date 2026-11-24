#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LockFile(__int64);
__int64 UnlockFile(__int64 result);
__int64 __uflow(__int64);
__int64 getline_plt(__int64, __int64, __int64);
__int64 memchr_plt(__int64, int, unsigned __int64);
__int64 ungetc_plt(__int64, __int64);
__int64 fgetln(__int64 a1, __int64* a2);

__int64 fgetln(__int64 a1, __int64* a2)
{
  bool v4;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  if (*(char*)(a1 + 130) < 0) {
    v4 = true;
    v5 = *(unsigned __int8**)(a1 + 8);
    if (v5 != *(unsigned __int8**)(a1 + 16)) {
    LABEL_3:
      *(_QWORD*)(a1 + 8) = v5 + 1;
      ungetc_plt(*v5, a1);
      v6 = *(_QWORD*)(a1 + 16);
      if (v6 == 0) {
        goto LABEL_10;
      }
      goto LABEL_7;
    }
  }
  else {
    v4 = (unsigned int)LockFile(a1) == 0;
    v5 = *(unsigned __int8**)(a1 + 8);
    if (v5 != *(unsigned __int8**)(a1 + 16)) {
      goto LABEL_3;
    }
  }
  v7 = __uflow(a1);
  ungetc_plt(v7, a1);
  v6 = *(_QWORD*)(a1 + 16);
  if (v6 != 0) {
  LABEL_7:
    v8 = memchr_plt(*(_QWORD*)(a1 + 8), 10, v6 - *(_QWORD*)(a1 + 8));
    if (v8 != 0) {
      v9 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = v8 + 1;
      *a2 = v8 + 1 - v9;
      if (v4) {
        return v9;
      }
      goto LABEL_12;
    }
  }
LABEL_10:
  v12 = 0;
  v10 = getline_plt(a1 + 160, (__int64)&v12, a1);
  if (v10 < 1) {
    v9 = 0;
    if (v4) {
      return v9;
    }
    goto LABEL_12;
  }
  v9 = *(_QWORD*)(a1 + 160);
  *a2 = v10;
  if (!v4) {
  LABEL_12:
    UnlockFile(a1);
  }
  return v9;
}

#pragma GCC visibility pop
