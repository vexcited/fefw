#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)
__int64 GameRoutine_863470();
__int64 GameRoutine_8636b0();
__int64 GameRoutine_8630a0();

__int64 nn_audio_server_AddressInfo_GetReference_plt(_QWORD, _QWORD);
__int64 nn_audio_server_PoolMapper_TryAttachBuffer_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 info_updater_245ea0(__int64 a1, __int64 a2, int a3);
__int64 info_updater_245f70(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 info_updater_246150(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 info_updater_2463f0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 info_updater_246530(__int64 a1, __int64 a2, int a3);
void info_updater_23a250(__int64 a1, _BYTE* a2, int a3);
_BYTE* info_updater_245770(_BYTE* result);
__int64 info_updater_245790(__int64 a1);
__int64 info_updater_2457e0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
_BYTE* info_updater_245a90(_BYTE* result);
_BYTE* info_updater_245ce0(_BYTE* result);

void info_updater_23a250(__int64 a1, _BYTE* a2, int a3)
{
  if (a3 >= 1) {
    if (a3 != 1) {
      *a2 = 73;
      if (a3 == 2) {
        ++a2;
      }
      else {
        a2[1] = 110;
        if (a3 == 3) {
          a2 += 2;
        }
        else {
          a2[2] = 118;
          if (a3 == 4) {
            a2 += 3;
          }
          else {
            a2[3] = 97;
            if (a3 == 5) {
              a2 += 4;
            }
            else {
              a2[4] = 108;
              if (a3 == 6) {
                a2 += 5;
              }
              else {
                a2[5] = 105;
                if (a3 == 7) {
                  a2 += 6;
                }
                else {
                  a2[6] = 100;
                  a2 += 7;
                }
              }
            }
          }
        }
      }
    }
    *a2 = 0;
  }
}

_BYTE* info_updater_245770(_BYTE* result)
{
  result[46] = result[44] ^ 3;
  result[180] = 2;
  return result;
}

__int64 info_updater_245790(__int64 a1)
{
  if (*(_BYTE*)(a1 + 44) == 1) {
    return GameRoutine_863470(a1 + 64, 1);
  }
  if (*(_BYTE*)(a1 + 46) != 3) {
    GameRoutine_8636b0(a1 + 64);
  }
  return 0;
}

__int64 info_updater_2457e0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4;
  bool v5;
  int v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int16 v15;
  unsigned int v16;
  __int64 v17;
  _BYTE v18[12];

  v4 = *(unsigned __int16*)(a3 + 44);
  v5 = v4 > 6;
  v6 = (1 << v4) & 0x56;
  if (!v5 & v6 != 0) {
    v8 = *(unsigned __int8*)(result + 180);
    *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
    v9 = *(_QWORD*)(a3 + 48);
    v10 = *(_QWORD*)(a3 + 56);
    v11 = *(_QWORD*)(a3 + 64);
    v12 = *(_QWORD*)(a3 + 72);
    v13 = *(_DWORD*)(a3 + 80);
    v14 = *(unsigned __int8*)(a3 + 84);
    *(_DWORD*)v18 = *(_DWORD*)(a3 + 32);
    *(_WORD*)&v18[4] = *(_WORD*)(a3 + 36);
    *(_DWORD*)&v18[6] = *(_DWORD*)(a3 + 38);
    *(_WORD*)&v18[10] = *(_WORD*)(a3 + 42);
    v15 = *(_WORD*)(a3 + 44);
    *(_WORD*)(result + 142) = *(_WORD*)(a3 + 46);
    *(_QWORD*)(result + 144) = v9;
    *(_QWORD*)(result + 152) = v10;
    *(_QWORD*)(result + 160) = v11;
    *(_QWORD*)(result + 168) = v12;
    *(_DWORD*)(result + 176) = v13;
    *(_DWORD*)(result + 180) = v14;
    *(_QWORD*)(result + 128) = *(_QWORD*)v18;
    *(_WORD*)(result + 140) = v15;
    *(_DWORD*)(result + 136) = *(_DWORD*)&v18[8];
    v16 = *(unsigned __int16*)(a3 + 46);
    if (v16 <= 6 && ((1 << v16) & 0x56) != 0) {
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v8 == 2) {
        goto LABEL_8;
      }
    }
    else {
      *(_WORD*)(result + 142) = v15;
      *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
      if (v8 == 2) {
      LABEL_8:
        if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) !=
            0) {
        LABEL_9:
          *(_BYTE*)(result + 180) = 0;
          v17 = result;
          *(_BYTE*)(result + 46) = 1;
          result = GameRoutine_8630a0(a4, a2, result + 64, *(_QWORD*)(a3 + 8),
                                      *(_QWORD*)(a3 + 16));
          *(_BYTE*)(v17 + 45) = (result & 1) == 0;
          return result;
        }
        goto LABEL_12;
      }
    }
    *(_BYTE*)(result + 180) = v8;
    if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) != 0) {
      goto LABEL_9;
    }
  LABEL_12:
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

_BYTE* info_updater_245a90(_BYTE* result)
{
  result[46] = result[44] ^ 3;
  result[192] = 2;
  return result;
}

_BYTE* info_updater_245ce0(_BYTE* result)
{
  result[46] = result[44] ^ 3;
  result[200] = 2;
  return result;
}

__int64 info_updater_245ea0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  const char* v3;
  const char* v4;
  const char* v5;
  int v7;
  int v8;
  int v9;
  int v10;

  if (*(_BYTE*)(a1 + 193) != 0) {
    v3 = "Enabled";
  }
  else {
    v3 = "Disabled";
  }
  v4 = "Not Requested";
  if (*(_BYTE*)(a1 + 194) != 0) {
    v4 = "Requested";
  }
  if (*(unsigned __int8*)(a1 + 195) >= 2u) {
    v5 = "Unknown";
  }
  else {
    v5 = "Accuracy";
  }
  v7 = (int)*(float*)(a1 + 164);
  v8 = (int)*(float*)(a1 + 168);
  v9 = *(_DWORD*)(a1 + 184);
  v10 = *(_DWORD*)(a1 + 188);
  return nn_util_SNPrintf_plt(
      a2, a3,
      "SampleRate: %d LookAheadTimeMax: %d AttackTime: %d ReleaseTime: %d "
      "LookAheadTime: %d AttackCoefficients: %d R"
      "eleaseCoefficients: %d Threshold: %.2f InputGain: %.2f OutputGain: %.2f "
      "LookAheadDelaySampleCount: %d LookAhe"
      "adDelaySampleCountMax: %d IsStatisticsEnabled: %s "
      "IsStatisticsResetRequested: %s ProcessingMode: %s",
      *(unsigned int*)(a1 + 144), *(unsigned int*)(a1 + 148),
      *(unsigned int*)(a1 + 152), *(unsigned int*)(a1 + 156),
      *(unsigned int*)(a1 + 160), *(float*)(a1 + 172), *(float*)(a1 + 176),
      *(float*)(a1 + 180), v7, v8, v9, v10, v3, v4, v5);
}

__int64 info_updater_245f70(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int16 v12;
  char v13;
  int v14;
  __int64 v15;
  _BYTE v16[12];

  *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
  *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
  v4 = *(_DWORD*)(a3 + 84);
  v5 = *(_QWORD*)(a3 + 52);
  v6 = *(_DWORD*)(a3 + 60);
  v7 = *(_DWORD*)(a3 + 64);
  v8 = *(_QWORD*)(a3 + 68);
  v9 = *(_QWORD*)(a3 + 76);
  v10 = *(_DWORD*)(a3 + 88);
  v11 = *(_DWORD*)(a3 + 92);
  v12 = *(_WORD*)(a3 + 97);
  v13 = *(_BYTE*)(a3 + 99);
  *(_DWORD*)v16 = *(_DWORD*)(a3 + 32);
  *(_WORD*)&v16[4] = *(_WORD*)(a3 + 36);
  *(_WORD*)&v16[10] = *(_WORD*)(a3 + 42);
  *(_DWORD*)&v16[6] = *(_DWORD*)(a3 + 38);
  v14 = *(unsigned __int8*)(a3 + 96);
  *(_QWORD*)(result + 140) = *(_QWORD*)(a3 + 44);
  *(_QWORD*)(result + 148) = v5;
  *(_DWORD*)(result + 156) = v6;
  *(_DWORD*)(result + 160) = v7;
  *(_QWORD*)(result + 164) = v8;
  *(_QWORD*)(result + 172) = v9;
  *(_DWORD*)(result + 180) = v4;
  *(_DWORD*)(result + 184) = v10;
  *(_DWORD*)(result + 188) = v11;
  *(_WORD*)(result + 193) = v12;
  *(_BYTE*)(result + 195) = v13;
  *(_BYTE*)(result + 192) = v14;
  *(_DWORD*)(result + 136) = *(_DWORD*)&v16[8];
  *(_QWORD*)(result + 128) = *(_QWORD*)v16;
  *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
  if (v14 != 2) {
    *(_BYTE*)(result + 192) = v14;
  }
  if ((*(unsigned __int8*)(result + 45) | *(unsigned __int8*)(a3 + 1)) != 0) {
    *(_BYTE*)(result + 192) = 0;
    v15 = result;
    *(_BYTE*)(result + 46) = 1;
    result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(
        a4, a2, result + 64, *(_QWORD*)(a3 + 8), *(_QWORD*)(a3 + 16));
    *(_BYTE*)(v15 + 45) = (result & 1) == 0;
  }
  else {
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

__int64 info_updater_246150(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
  *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
  v5 = *(_QWORD*)(a3 + 96);
  v6 = *(_QWORD*)(a3 + 104);
  v7 = *(_QWORD*)(a3 + 112);
  v8 = *(_QWORD*)(a3 + 120);
  v20 = *(_QWORD*)(a3 + 32);
  v21 = *(_QWORD*)(a3 + 40);
  v22 = *(_QWORD*)(a3 + 56);
  v9 = *(_QWORD*)(a3 + 48);
  v23 = *(_QWORD*)(a3 + 64);
  v24 = *(_QWORD*)(a3 + 72);
  v10 = *(_DWORD*)(a3 + 80);
  v11 = *(_DWORD*)(a3 + 84);
  v12 = *(_DWORD*)(a3 + 92);
  v13 = *(int*)(a3 + 88);
  *(_QWORD*)(result + 192) = v5;
  *(_QWORD*)(result + 200) = v6;
  *(_QWORD*)(result + 208) = v7;
  *(_QWORD*)(result + 216) = v8;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 144) = v9;
  *(_QWORD*)(result + 152) = v22;
  *(_DWORD*)(result + 176) = v10;
  *(_DWORD*)(result + 180) = v11;
  *(_DWORD*)(result + 184) = v13;
  *(_DWORD*)(result + 188) = v12;
  v14 = *(unsigned __int8*)(result + 45);
  *(_QWORD*)(result + 160) = v23;
  *(_QWORD*)(result + 168) = v24;
  *(_QWORD*)(result + 128) = v20;
  *(_QWORD*)(result + 136) = v21;
  *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
  if ((v14 | *(unsigned __int8*)(a3 + 1)) != 0) {
    v15 = 4 * v13;
    v16 = result;
    v18 = nn_audio_server_PoolMapper_TryAttachBuffer_plt(a4, a2, result + 64,
                                                         v5, 4 * v13 + 128);
    result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(
        a4, a2, v16 + 96, *(_QWORD*)(v16 + 208), v15 + 128);
    *(_BYTE*)(v16 + 45) = (v18 & (unsigned int)result & 1) == 0;
    if ((v18 & (unsigned int)result & 1) != 0) {
      v19 = nn_audio_server_AddressInfo_GetReference_plt(v16 + 64, 0);
      *(_QWORD*)(v16 + 8) = v19;
      *(_QWORD*)(v16 + 16) = v19 + 128;
      result = nn_audio_server_AddressInfo_GetReference_plt(v16 + 96, 0);
      *(_QWORD*)(v16 + 24) = result;
      *(_QWORD*)(v16 + 32) = result + 128;
    }
  }
  else {
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

__int64 info_updater_2463f0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *(_DWORD*)(result + 48) = *(_DWORD*)(a3 + 4);
  *(_DWORD*)(result + 52) = *(_DWORD*)(a3 + 24);
  v4 = *(_DWORD*)(a3 + 84);
  v5 = *(_QWORD*)(a3 + 112);
  v6 = *(_QWORD*)(a3 + 120);
  v14 = *(_QWORD*)(a3 + 32);
  v15 = *(_QWORD*)(a3 + 40);
  v16 = *(_QWORD*)(a3 + 56);
  v7 = *(_QWORD*)(a3 + 48);
  v17 = *(_QWORD*)(a3 + 64);
  v18 = *(_QWORD*)(a3 + 72);
  v8 = *(_DWORD*)(a3 + 92);
  v9 = *(_QWORD*)(a3 + 96);
  v10 = *(_QWORD*)(a3 + 104);
  v11 = *(int*)(a3 + 88);
  *(_DWORD*)(result + 176) = *(_DWORD*)(a3 + 80);
  *(_DWORD*)(result + 180) = v4;
  *(_QWORD*)(result + 208) = v5;
  *(_QWORD*)(result + 216) = v6;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  v12 = *(unsigned __int8*)(result + 45);
  *(_QWORD*)(result + 144) = v7;
  *(_QWORD*)(result + 152) = v16;
  *(_DWORD*)(result + 184) = v11;
  *(_DWORD*)(result + 188) = v8;
  *(_QWORD*)(result + 192) = v9;
  *(_QWORD*)(result + 200) = v10;
  *(_QWORD*)(result + 160) = v17;
  *(_QWORD*)(result + 168) = v18;
  *(_QWORD*)(result + 128) = v14;
  *(_QWORD*)(result + 136) = v15;
  *(_BYTE*)(result + 44) = *(_BYTE*)(a3 + 2);
  if ((v12 | *(unsigned __int8*)(a3 + 1)) != 0) {
    v13 = result;
    result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(a4, a2, result + 64,
                                                            v9, 4 * v11 + 128);
    *(_BYTE*)(v13 + 45) = (result & 1) == 0;
    if ((result & 1) != 0) {
      result = nn_audio_server_AddressInfo_GetReference_plt(v13 + 64, 0);
      *(_QWORD*)(v13 + 24) = 0;
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 8) = result;
      *(_QWORD*)(v13 + 16) = result + 128;
    }
  }
  else {
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  return result;
}

__int64 info_updater_246530(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  const char* v3;
  const char* v4;
  const char* v5;

  if (*(_BYTE*)(a1 + 181) != 0) {
    v3 = "Enabled";
  }
  else {
    v3 = "Disabled";
  }
  if (*(_BYTE*)(a1 + 182) != 0) {
    v4 = "Enabled";
  }
  else {
    v4 = "Disabled";
  }
  if (*(_BYTE*)(a1 + 183) != 0) {
    v5 = "Requested";
  }
  else {
    v5 = "Not Requested";
  }
  return nn_util_SNPrintf_plt(
      a2, a3,
      "SampleRate: %d Threshold: %.2f Ratio: %.2f AttackTime: %d ReleaseTime: "
      "%d RmsTav: %.2f EnvAT: %.2f EnvRT: %.2"
      "f OutGain: %.2f IsMakeupGainEnabled: %s IsStatisticsEnabled: %s "
      "IsStatisticsResetRequested: %s",
      *(unsigned int*)(a1 + 144), *(unsigned int*)(a1 + 156),
      *(unsigned int*)(a1 + 160), v3, v4, *(float*)(a1 + 148),
      *(float*)(a1 + 152), *(float*)(a1 + 164), *(float*)(a1 + 168),
      *(float*)(a1 + 172), *(float*)(a1 + 176), v5);
}

#pragma GCC visibility pop
