#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD SdkData_c2d1c0[8];
__int64 nn_codec_aac_36267c();
__int64 nn_codec_aac_362688(__int64 a1, int a2);
__int64 nn_codec_aac_3626d8(int a1);
void __attribute__((noreturn)) nn_codec_aac_36269c();
void __attribute__((noreturn)) nn_codec_aac_3626e8();
void nn_detail_UnexpectedDefaultImpl_plt_857150();
__int64 nn_codec_aac_36267c() { return 253624; }

__int64 nn_codec_aac_362688(__int64 a1, int a2)
{
  return SdkData_c2d1c0[a2 - 1];
}

void __attribute__((noreturn)) nn_codec_aac_36269c()
{
  nn_detail_UnexpectedDefaultImpl_plt_857150();
}

__int64 nn_codec_aac_3626d8(int a1) { return 2LL * (a1 << 10); }

void __attribute__((noreturn)) nn_codec_aac_3626e8()
{
  nn_detail_UnexpectedDefaultImpl_plt_857150();
}

#pragma GCC visibility pop
