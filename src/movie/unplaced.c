#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 movie_detail_GetDecoderOutputBufferProperties_plt(_QWORD, _QWORD,
                                                          _QWORD, _QWORD,
                                                          _QWORD, _QWORD,
                                                          _QWORD, _QWORD);
__int64 movie_detail_VideoDecoderEventManager_Pause_plt(__int64);
__int64 movie_detail_VideoDecoderEventManager_Resume_plt(__int64);
__int64 movie_detail_VideoDecoderImpl_ResubmitFrame(__int64, __int64);
__int64 movie_detail_VideoDecoderImpl_TryPopDecodingFrame(__int64, _QWORD*);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SignalSystemEvent_plt(__int64);
void nn_diag_detail_AbortImpl_plt_82f30();
__int64 movie_4470(__int64* a1);

__int64 movie_4470(__int64* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE v12[4];
  __int64 v13;
  struct {
    _WORD v14[2];
    unsigned __int16 v15;
  } v14_;
  struct {
    _WORD v16[2];
    __int16 v17;
  } v16_;
  __int64 v20;

  v3 = *a1;
  v4 = v3;
  movie_detail_VideoDecoderEventManager_Pause_plt(v3 + 3416);
  nn_os_SdkMutexType_Lock_plt(v4 + 3972);
  v20 = 0;
  if ((movie_detail_VideoDecoderImpl_TryPopDecodingFrame(v4, &v20) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_82f30();
  }
  if (*(_DWORD*)(v4 + 3976) == 3) {
    v16_.v17 = 0;
    v16_.v16[0] = 0;
    v14_.v15 = 0;
    v14_.v14[0] = 0;
    v5 = *(unsigned int*)(v20 + 192);
    v13 = 0;
    v12[0] = 0;
    v6 = movie_detail_GetDecoderOutputBufferProperties_plt(
        &v16_.v17, v16_.v16, &v14_.v15, v14_.v14, &v13, v12, v4 + 24, v5);
    *(_DWORD*)(v4 + 3968) = v6;
    if (v6 == 0) {
      v7 = v14_.v14[0];
      if (*(_DWORD*)(v4 + 3948) == v14_.v15 &&
          *(_DWORD*)(v4 + 3952) == v14_.v14[0]) {
        v8 = *(_QWORD*)(v4 + 3096);
        *(_QWORD*)(v4 + 8 * v8 + 3032) = v20;
        *(_QWORD*)(v4 + 3096) = ((_BYTE)v8 + 1) & 7;
        ++*(_QWORD*)(v4 + 3112);
      }
      else {
        *(_DWORD*)(v4 + 3948) = v14_.v15;
        v9 = *(_QWORD*)(v4 + 3096);
        v10 = v20;
        *(_DWORD*)(v4 + 3952) = v7;
        *(_QWORD*)(v4 + 8 * v9 + 3032) = v10;
        *(_QWORD*)(v4 + 3096) = ((_BYTE)v9 + 1) & 7;
        ++*(_QWORD*)(v4 + 3112);
        nn_os_SignalSystemEvent_plt(v4 + 1136);
      }
    }
    nn_os_SignalSystemEvent_plt(v4 + 1088);
  }
  else {
    movie_detail_VideoDecoderImpl_ResubmitFrame(v4, v20);
  }
  nn_os_SdkMutexType_Unlock_plt(v4 + 3972);
  return movie_detail_VideoDecoderEventManager_Resume_plt(v4 + 3416);
}

#pragma GCC visibility pop
