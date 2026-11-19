#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* wld_a8be20(_BYTE* result);

_BYTE* wld_a8be20(_BYTE* result)
{
  _BYTE* v1;
  int v2;
  _BYTE* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  bool v10;
  _BYTE* v11;

  v1 = result;
  if ((result[290] & 1) != 0) {
    goto LABEL_12;
  }
  if ((result[291] & 1) == 0) {
    if (result[288] != 1) {
      goto LABEL_23;
    }
    v8 = result;
    do {
      v8 = *((_BYTE**)v8 + 92);
      if (v8 == nullptr) {
        break;
      }
    } while ((v8[288] & 1) != 0);
  }
  if (result[300] != 2) {
    goto LABEL_12;
  }
  v2 = 0;
  if (result[289] == 1 && (result[288] & 1) != 0) {
    v3 = result;
    do {
      v3 = *((_BYTE**)v3 + 92);
      v2 = v3 == nullptr;
    } while (v3 != nullptr && v3[289] == 1 && v3[288] == 1 &&
             (v3[300] & 0xFD) != 1);
  }
  if ((unsigned __int8)result[292] != v2) {
  LABEL_12:
    v4 = 584;
    if (result[728] != 0) {
      v4 = 704;
    }
    v5 = (__int64*)&result[v4];
    v6 = *v5;
    v7 = v5[1];
    while (v6 != v7) {
      result = *(_BYTE**)v6;
      if (*(_BYTE*)(*(_QWORD*)v6 + 20LL) == 0) {
        result =
            (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 56LL))(result);
      }
      v6 += 8;
    }
  }
LABEL_23:
  if (v1[288] == 1) {
    v9 = v1;
    do {
      v9 = *((_BYTE**)v9 + 92);
    } while (v9 != nullptr && (v9[288] & 1) != 0);
    v1[291] = v9 == nullptr;
    if (v1[289] == 1 && (v1[300] & 0xFD) != 1) {
      v11 = v1;
      do {
        v11 = *((_BYTE**)v11 + 92);
        v10 = v11 == nullptr;
      } while (v11 != nullptr && v11[289] == 1 && v11[288] == 1 &&
               (v11[300] & 0xFD) != 1);
    }
    else {
      v10 = false;
    }
  }
  else {
    v10 = false;
    v1[291] = 0;
  }
  v1[292] = v10;
  v1[290] = 0;
  return result;
}

#pragma GCC visibility pop
