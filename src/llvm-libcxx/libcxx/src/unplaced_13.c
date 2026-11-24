#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 getc_plt(_QWORD);
__int64 getwc_plt(_QWORD);
__int64 ungetc_plt(__int64, __int64);
__int64 ungetwc_plt(unsigned int, __int64);
void __attribute__((noreturn)) SdkRoutine_7cd620(__int64);
void __attribute__((noreturn)) llvmlibcxx_libcxx_7d7da4(__int64 a1);
__int64 llvmlibcxx_libcxx_7f7c60(__int64 a1);
__int64 llvmlibcxx_libcxx_7f7c70(__int64 a1);
__int64 llvmlibcxx_libcxx_7f7dc0(__int64 a1, char a2);

void __attribute__((noreturn)) llvmlibcxx_libcxx_7d7da4(__int64 a1)
{
  SdkRoutine_7cd620(a1);
}

__int64 llvmlibcxx_libcxx_7f7c60(__int64 a1)
{
  return llvmlibcxx_libcxx_7f7dc0(a1, 0);
}

__int64 llvmlibcxx_libcxx_7f7c70(__int64 a1)
{
  return llvmlibcxx_libcxx_7f7dc0(a1, 1);
}

__int64 llvmlibcxx_libcxx_7f7dc0(__int64 a1, char a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _BYTE v16[12];
    unsigned int v17;
  } v16_;
  _BYTE v18[8];

  if (*(_BYTE*)(a1 + 96) == 1) {
    result = *(unsigned int*)(a1 + 92);
    if ((a2 & 1) != 0) {
      *(_BYTE*)(a1 + 96) = 0;
      *(_DWORD*)(a1 + 92) = -1;
    }
  }
  else if (*(_BYTE*)(a1 + 97) == 1) {
    result = getwc_plt(*(_QWORD*)(a1 + 64));
    if ((_DWORD)result != -1) {
      if ((a2 & 1) != 0) {
        *(_DWORD*)(a1 + 92) = result;
      }
      else {
        v11 = *(_QWORD*)(a1 + 64);
        v12 = result;
        if ((unsigned int)ungetwc_plt(result, v11) == -1) {
          return 0xFFFFFFFFLL;
        }
        else {
          return v12;
        }
      }
    }
  }
  else {
    v5 = *(_DWORD*)(a1 + 88);
    v6 = 0;
    if (v5 <= 1) {
      v7 = 1;
    }
    else {
      v7 = (unsigned int)v5;
    }
    while (1) {
      result = getc_plt(*(_QWORD*)(a1 + 64));
      if ((_DWORD)result == -1) {
        break;
      }
      v18[v6++] = result;
      if (v7 == v6) {
        while (1) {
          v8 = *(__int64**)(a1 + 80);
          v9 = *v8;
          v10 = (*(__int64 (**)(_QWORD, __int64*, _BYTE*, _BYTE*, _BYTE*,
                                unsigned int*, _BYTE*, __int64*))(
              **(_QWORD**)(a1 + 72) + 32LL))(*(_QWORD*)(a1 + 72), v8, v18,
                                             &v18[v7], v16_.v16, &v16_.v17, v18,
                                             &v15);
          if (v10 != 1) {
            break;
          }
          **(_QWORD**)(a1 + 80) = v9;
          if (v7 == 8) {
            return 0xFFFFFFFFLL;
          }
          result = getc_plt(*(_QWORD*)(a1 + 64));
          if ((_DWORD)result == -1) {
            return result;
          }
          v18[v7++] = result;
        }
        if (v10 == 2) {
          return 0xFFFFFFFFLL;
        }
        if (v10 == 3) {
          v16_.v17 = v18[0];
        }
        if ((a2 & 1) != 0) {
          result = v16_.v17;
          *(_DWORD*)(a1 + 92) = v16_.v17;
        }
        else {
          v13 = (unsigned int)v7;
          while (1) {
            v14 = v13 - 1;
            if (v13 < 1) {
              break;
            }
            result =
                ungetc_plt((unsigned __int8)v18[v13 - 1], *(_QWORD*)(a1 + 64));
            v13 = v14;
            if ((_DWORD)result == -1) {
              return result;
            }
          }
          return v16_.v17;
        }
        return result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
