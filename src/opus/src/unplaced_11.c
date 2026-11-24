#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_decode_native(_DWORD*, _BYTE*, unsigned int, __int64, int,
                           unsigned int, unsigned int, __int64, int);
__int64 opus_67cc0(_DWORD* a1, _BYTE* a2, unsigned int a3, __int64 a4, int a5,
                   unsigned int a6);

__int64 opus_67cc0(_DWORD* a1, _BYTE* a2, unsigned int a3, __int64 a4, int a5,
                   unsigned int a6)
{
  if (a5 < 1) {
    return 0xFFFFFFFFLL;
  }
  else {
    return opus_decode_native(a1, a2, a3, a4, a5, a6, 0, 0, 0);
  }
}

#pragma GCC visibility pop
