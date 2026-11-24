#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 info_updater_2457e0(__int64 result, __int64, __int64, __int64);
__int64 nn_audio_server_PoolMapper_TryAttachBuffer_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_audio_server_245760(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);
__int64 nn_audio_server_245a80(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);
__int64 nn_audio_server_245ab0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);
__int64 nn_audio_server_245cd0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);
__int64 nn_audio_server_245d00(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);

__int64 nn_audio_server_245760(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  return info_updater_2457e0(result, a2, a3, a4);
}

__int64 nn_audio_server_245a80(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  return nn_audio_server_245ab0(result, a2, a3, a4);
}

__int64 nn_audio_server_245ab0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  unsigned int v4;
  bool v5;
  int v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int16 v17;
  unsigned int v18;
  __int64 v19;
  _BYTE v20[12];

  v4 = *(unsigned __int16*)(a3 + 44);
  v5 = v4 > 6;
  v6 = (1 << v4) & 0x56;
  if (!v5 & v6 != 0) {
    v8 = *(unsigned __int8*)(result + 192);
    *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
    v9 = *(_QWORD*)(a3 + 48);
    v10 = *(_QWORD*)(a3 + 56);
    v11 = *(_QWORD*)(a3 + 64);
    v12 = *(_QWORD*)(a3 + 72);
    v13 = *(_QWORD*)(a3 + 80);
    v14 = *(_DWORD*)(a3 + 88);
    v15 = *(_DWORD*)(a3 + 92);
    v16 = *(unsigned __int8*)(a3 + 96);
    *(_DWORD*)v20 = *(_DWORD*)(a3 + 32);
    *(_WORD*)&v20[4] = *(_WORD*)(a3 + 36);
    *(_DWORD*)&v20[6] = *(_DWORD*)(a3 + 38);
    *(_WORD*)&v20[10] = *(_WORD*)(a3 + 42);
    v17 = *(_WORD*)(a3 + 44);
    *(_WORD*)(result + 142) = *(_WORD*)(a3 + 46);
    *(_QWORD*)(result + 144) = v9;
    *(_QWORD*)(result + 152) = v10;
    *(_QWORD*)(result + 160) = v11;
    *(_QWORD*)(result + 168) = v12;
    *(_QWORD*)(result + 176) = v13;
    *(_DWORD*)(result + 184) = v14;
    *(_DWORD*)(result + 188) = v15;
    *(_DWORD*)(result + 192) = v16;
    *(_QWORD*)(result + 128) = *(_QWORD*)v20;
    *(_WORD*)(result + 140) = v17;
    *(_DWORD*)(result + 136) = *(_DWORD*)&v20[8];
    v18 = *(unsigned __int16*)(a3 + 46);
    if (v18 <= 6 && ((1 << v18) & 0x56) != 0) {
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v8 == 2) {
        goto LABEL_8;
      }
    }
    else {
      *(_WORD*)(result + 142) = v17;
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v8 == 2) {
      LABEL_8:
        if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) !=
            0) {
        LABEL_9:
          *(_BYTE*)(result + 192) = 0;
          v19 = result;
          *(_BYTE*)(result + 46) = 1;
          result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(
              a4, a2, result + 64, *(_QWORD*)(a3 + 8), *(_QWORD*)(a3 + 16));
          *(_BYTE*)(v19 + 45) = (result & 1) == 0;
          return result;
        }
        goto LABEL_12;
      }
    }
    *(_BYTE*)(result + 192) = v8;
    if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) != 0) {
      goto LABEL_9;
    }
  LABEL_12:
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

__int64 nn_audio_server_245cd0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  return nn_audio_server_245d00(result, a2, a3, a4);
}

__int64 nn_audio_server_245d00(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  unsigned int v4;
  bool v5;
  int v6;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int16 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  _BYTE v21[12];

  v4 = *(unsigned __int16*)(a3 + 44);
  v5 = v4 > 6;
  v6 = (1 << v4) & 0x56;
  if (!v5 & v6 != 0) {
    *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
    v8 = *(_DWORD*)(a3 + 96);
    v9 = *(_DWORD*)(a3 + 100);
    v10 = *(_DWORD*)(a3 + 52);
    v11 = *(_QWORD*)(a3 + 56);
    v12 = *(_QWORD*)(a3 + 64);
    v13 = *(_QWORD*)(a3 + 88);
    v14 = *(_QWORD*)(a3 + 72);
    v15 = *(_QWORD*)(a3 + 80);
    v16 = *(_BYTE*)(a3 + 104);
    *(_WORD*)&v21[4] = *(_WORD*)(a3 + 36);
    *(_DWORD*)v21 = *(_DWORD*)(a3 + 32);
    *(_WORD*)&v21[10] = *(_WORD*)(a3 + 42);
    *(_DWORD*)&v21[6] = *(_DWORD*)(a3 + 38);
    v17 = *(_WORD*)(a3 + 44);
    *(_WORD*)(result + 142) = *(_WORD*)(a3 + 46);
    v18 = *(unsigned __int8*)(result + 200);
    *(_DWORD*)(result + 144) = 0;
    *(_DWORD*)(result + 148) = v10;
    *(_QWORD*)(result + 152) = v11;
    *(_QWORD*)(result + 160) = v12;
    *(_QWORD*)(result + 168) = v14;
    *(_QWORD*)(result + 176) = v15;
    *(_QWORD*)(result + 184) = v13;
    *(_DWORD*)(result + 192) = v8;
    *(_DWORD*)(result + 196) = v9;
    *(_BYTE*)(result + 200) = v16;
    *(_BYTE*)(result + 203) = 0;
    *(_WORD*)(result + 201) = 0;
    *(_WORD*)(result + 140) = v17;
    *(_DWORD*)(result + 136) = *(_DWORD*)&v21[8];
    *(_QWORD*)(result + 128) = *(_QWORD*)v21;
    v19 = *(unsigned __int16*)(a3 + 46);
    if (v19 <= 6 && ((1 << v19) & 0x56) != 0) {
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v18 == 2) {
        goto LABEL_8;
      }
    }
    else {
      *(_WORD*)(result + 142) = v17;
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v18 == 2) {
      LABEL_8:
        if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) !=
            0) {
        LABEL_9:
          *(_BYTE*)(result + 200) = 0;
          v20 = result;
          *(_BYTE*)(result + 46) = 1;
          result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(
              a4, a2, result + 64, *(_QWORD*)(a3 + 8), *(_QWORD*)(a3 + 16));
          *(_BYTE*)(v20 + 45) = (result & 1) == 0;
          return result;
        }
        goto LABEL_12;
      }
    }
    *(_BYTE*)(result + 200) = v18;
    if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) != 0) {
      goto LABEL_9;
    }
  LABEL_12:
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

#pragma GCC visibility pop
