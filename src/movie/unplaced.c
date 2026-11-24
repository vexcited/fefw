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
__int64 MovieRoutine_20(void);
__int64 __nnmusl_init_dso_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD, _QWORD);
__int64 nn_ro_ProtectRelro_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* MovieData_85060;
extern _UNKNOWN* MovieData_bf000;
extern _UNKNOWN** MovieData_8ab20;
extern _UNKNOWN MovieData_85050;
extern _UNKNOWN MovieData_c06e8;
extern _UNKNOWN MovieData_c06e9;
extern _UNKNOWN MovieData_c0fe8;
extern _UNKNOWN MovieData_c1fd0;
extern _UNKNOWN MovieData_d0018;
extern __int64 (**MovieData_87bb0)();
extern __int64 (*MovieData_c1000[])();
extern int MovieData_827a4;
extern int MovieData_d0000;
struct PseudoThunk __nnDetailNintendoSdkRuntimeObjectFile_plt(
    long long a1, long long a2, long long a3, long long a4, long long a5,
    long long a6, long long a7, long long a8, double f1, double f2, double f3,
    double f4, double f5, double f6, double f7, double f8);
__int64 movie_40();
struct PseudoThunk movie_320(long long a1, long long a2, long long a3,
                             long long a4, long long a5, long long a6,
                             long long a7, long long a8, double f1, double f2,
                             double f3, double f4, double f5, double f6,
                             double f7, double f8);

__int64 movie_40()
{
  __int64 result;

  if (MovieData_d0000 != 0 ||
      (result = __nnmusl_init_dso_plt(
           ((_UNKNOWN*)0x0LL), &MovieData_827a4, &MovieData_c06e8,
           &MovieData_c06e8, (char*)((_UNKNOWN*)0x0LL) + 1, &MovieData_c06e9,
           &MovieData_c06e8, &MovieData_c06e8, (char*)((_UNKNOWN*)0x0LL) + 1,
           &MovieData_c06e9, &MovieData_c0fe8, &MovieData_c1fd0,
           &MovieData_85060, &MovieData_87bb0, 0, ((_UNKNOWN*)0x0LL),
           &MovieData_87bb0, &MovieData_8ab20, ((_UNKNOWN*)0x0LL),
           ((_UNKNOWN*)0x0LL), &MovieData_c06e8),
       MovieData_d0000 = result, (_DWORD)result != 1)) {
    MovieRoutine_20();
    return nn_ro_ProtectRelro_plt(&MovieData_bf000, MovieData_c1000,
                                  &MovieData_d0000, &MovieData_d0018,
                                  &MovieData_85050);
  }
  return result;
}

struct PseudoThunk movie_320(long long a1, long long a2, long long a3,
                             long long a4, long long a5, long long a6,
                             long long a7, long long a8, double f1, double f2,
                             double f3, double f4, double f5, double f6,
                             double f7, double f8)
{
  return __nnDetailNintendoSdkRuntimeObjectFile_plt(
      a1, a2, a3, a4, a5, a6, a7, a8, f1, f2, f3, f4, f5, f6, f7, f8);
}

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
