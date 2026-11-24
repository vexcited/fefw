#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove_plt(__int64, __int64, unsigned __int64);
unsigned __int64 fread_plt(__int64, unsigned __int64, unsigned __int64,
                           __int64);
void __attribute__((noreturn)) locale_7f6090();
__int64 llvm_libcxx_libcxx_src_7f5d90(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7da4(__int64 a1);

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7da4(__int64 a1)
{
  GameRoutine_7cd620(a1);
}

__int64 llvm_libcxx_libcxx_src_7f5d90(__int64 a1)
{
  int v1;
  int v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 result;
  _QWORD* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int8* v38;
  unsigned __int8* v39;
  char* v40;
  char* v41;
  struct {
    unsigned __int8* v42;
    char gap8_[7];
    char v43;
  } v42_;
  _QWORD vars0[2];

  if (*(_QWORD*)(a1 + 120) == 0) {
    return 0xFFFFFFFFLL;
  }
  v1 = *(_DWORD*)(a1 + 156);
  if ((v1 & 8) != 0) {
    v9 = *(unsigned __int8**)(a1 + 24);
    if (v9 != nullptr) {
      goto LABEL_8;
    }
  }
  else {
    v3 = *(unsigned __int8*)(a1 + 162);
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 56) = 0;
    v4 = v3 == 0;
    v5 = 104;
    if (!v4) {
      v5 = 64;
    }
    v6 = 112;
    if (!v4) {
      v6 = 96;
    }
    v7 = *(_QWORD*)(a1 + v5);
    v8 = *(_QWORD*)(a1 + v6);
    *(_DWORD*)(a1 + 156) = 8;
    v9 = (unsigned __int8*)(v7 + v8);
    *(_QWORD*)(a1 + 16) = v7;
    *(_QWORD*)(a1 + 24) = v9;
    *(_QWORD*)(a1 + 32) = v9;
    *(_QWORD*)(a1 + 40) = 0;
    if (v9 != nullptr) {
    LABEL_8:
      v10 = *(unsigned __int8**)(a1 + 32);
      if ((v1 & 8) == 0) {
        goto LABEL_9;
      }
      goto LABEL_15;
    }
  }
  v9 = (unsigned __int8*)vars0;
  *(_QWORD*)(a1 + 16) = &v42_.v43;
  *(_QWORD*)(a1 + 24) = vars0;
  *(_QWORD*)(a1 + 32) = vars0;
  v10 = (unsigned __int8*)vars0;
  if ((v1 & 8) == 0) {
  LABEL_9:
    v11 = 0;
    if (v9 != v10) {
      goto LABEL_10;
    }
    goto LABEL_19;
  }
LABEL_15:
  v15 = (__int64)&v10[-*(_QWORD*)(a1 + 16)];
  if ((unsigned __int64)(v15 / 2) >= 4) {
    v11 = 4;
  }
  else {
    v11 = v15 / 2;
  }
  if (v9 != v10) {
  LABEL_10:
    result = *v9;
    v14 = *(char**)(a1 + 16);
    v13 = (_QWORD*)(a1 + 16);
    if (v14 != &v42_.v43) {
      return result;
    }
  LABEL_40:
    v13[1] = 0;
    v13[2] = 0;
    *v13 = 0;
    return result;
  }
LABEL_19:
  memmove_plt(*(_QWORD*)(a1 + 16), (__int64)&v10[-v11], v11);
  if (*(_BYTE*)(a1 + 162) == 1) {
    v16 = fread_plt(v11 + *(_QWORD*)(a1 + 16), 1u,
                    *(_QWORD*)(a1 + 32) - (v11 + *(_QWORD*)(a1 + 16)),
                    *(_QWORD*)(a1 + 120));
    if (v16 != 0) {
      v17 = (unsigned __int8*)(*(_QWORD*)(a1 + 16) + v11);
      v18 = &v17[v16];
      goto LABEL_34;
    }
  }
  else {
    v19 = *(_QWORD*)(a1 + 72);
    v20 = *(_QWORD*)(a1 + 80);
    if (v20 == v19) {
      v21 = *(_QWORD*)(a1 + 80);
    }
    else {
      memmove_plt(*(_QWORD*)(a1 + 64), v19, v20 - v19);
      v20 = *(_QWORD*)(a1 + 72);
      v21 = *(_QWORD*)(a1 + 80);
    }
    v22 = v21 - v20;
    v23 = *(_QWORD*)(a1 + 64);
    v24 = *(_QWORD*)(a1 + 96);
    *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
    v25 = 8;
    v26 = v23 + v22;
    if (v23 != a1 + 88) {
      v25 = v24;
    }
    v27 = v25 - v22;
    *(_QWORD*)(a1 + 72) = v26;
    *(_QWORD*)(a1 + 80) = v23 + v25;
    if (v27 >= *(_QWORD*)(a1 + 112) - v11) {
      v28 = *(_QWORD*)(a1 + 112) - v11;
    }
    else {
      v28 = v27;
    }
    v29 = fread_plt(v26, 1u, v28, *(_QWORD*)(a1 + 120));
    if (v29 != 0) {
      v30 = v29;
      v31 = *(__int64**)(a1 + 128);
      if (v31 == nullptr) {
        locale_7f6090();
      }
      v32 = *(_QWORD*)(a1 + 64);
      v33 = *v31;
      v34 = *(_QWORD*)(a1 + 72) + v30;
      v35 = *(_QWORD*)(a1 + 16);
      v36 = *(_QWORD*)(a1 + 112);
      *(_QWORD*)(a1 + 80) = v34;
      if ((*(unsigned int (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64, __int64, __int64))(v33 + 32))(
              (__int64)v31, a1 + 136, v32, v34, a1 + 72, v35 + v11, v35 + v36,
              (__int64)&v42_.v42) == 3) {
        v17 = *(unsigned __int8**)(a1 + 64);
        v18 = *(unsigned __int8**)(a1 + 80);
        *(_QWORD*)(a1 + 16) = v17;
      LABEL_34:
        *(_QWORD*)(a1 + 24) = v17;
        *(_QWORD*)(a1 + 32) = v18;
        result = *v17;
        v37 = *(char**)(a1 + 16);
        v13 = (_QWORD*)(a1 + 16);
        if (v37 == &v42_.v43) {
          goto LABEL_40;
        }
        return result;
      }
      v38 = v42_.v42;
      v39 = (unsigned __int8*)(*(_QWORD*)(a1 + 16) + v11);
      if (v42_.v42 != v39) {
        *(_QWORD*)(a1 + 24) = v39;
        *(_QWORD*)(a1 + 32) = v38;
        result = *v39;
        v40 = *(char**)(a1 + 16);
        v13 = (_QWORD*)(a1 + 16);
        if (v40 == &v42_.v43) {
          goto LABEL_40;
        }
        return result;
      }
    }
  }
  result = 0xFFFFFFFFLL;
  v41 = *(char**)(a1 + 16);
  v13 = (_QWORD*)(a1 + 16);
  if (v41 == &v42_.v43) {
    goto LABEL_40;
  }
  return result;
}

#pragma GCC visibility pop
