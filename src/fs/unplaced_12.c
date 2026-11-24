#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 nn_fs_GetEntryType(__int64, const char*);
void GameRoutine_6381e0();
void std___1_locale_Destroy_locale(__int64);
__int64 fs_637ec0(__int64 a1, __int64 a2, __int64 a3);

__int64 fs_637ec0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v14[768];
  struct {
    _QWORD v15[2];
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v15_;
  struct {
    __int64* v19[2];
    _QWORD* v20;
    __int64 v21;
  } v19_;
  struct {
    _BYTE v22[8];
    char v23;
  } v22_;
  struct {
    _QWORD v24[2];
    int v25;
    char gap892_[4];
    __int64 v26;
    __int64 v27;
  } v24_;
  struct {
    char* v28;
    __int64 v29;
    __int64 v30;
    void* v31;
    _QWORD* v32;
    char* v33;
  } v28_;
  _QWORD v34[2];

  v6 = **(_DWORD**)a1;
  if (v6 <= 1) {
    v7 = *(__int64**)(a1 + 8);
    v15_.v15[0] = a2;
    v15_.v15[1] = a3;
    v8 = *v7;
    v15_.v18 = 429;
    v9 = v7[1];
    v28_.v28 = v14;
    v28_.v29 = -1;
    v28_.v32 = v34;
    v28_.v33 = v14;
    v28_.v30 = 0;
    v28_.v31 = &GameRoutine_6381e0;
    v34[0] = 767;
    v34[1] = 0;
    v24_.v25 = 0;
    v22_.v22[0] = 0;
    v22_.v23 = 0;
    v24_.v24[0] = "{}:/{}.zst";
    v24_.v24[1] = "";
    v15_.v16 = v8;
    v15_.v17 = v9;
    v24_.v26 = 0;
    v24_.v27 = 2;
    v19_.v20 = v15_.v15;
    v19_.v21 = 429;
    v19_.v19[0] = (__int64*)&v28_.v28;
    v19_.v19[1] = (_QWORD*)(((_UNKNOWN*)((char*)0x0LL + 2)));
    GameRoutine_6380e0((__int64)v24_.v24, v19_.v19);
    if (v22_.v23 == 1) {
      std___1_locale_Destroy_locale((__int64)v22_.v22);
    }
    v28_.v33[v28_.v30] = 0;
    if ((unsigned int)nn_fs_GetEntryType((__int64)&v28_.v28, v14) == 0 &&
        (**(_BYTE**)(a1 + 16) != 1 || (_DWORD)v28_.v28 == 1)) {
      return 1;
    }
    v6 = **(_DWORD**)a1;
  }
  if ((v6 & 0xFFFFFFFD) == 0) {
    v10 = *(__int64**)(a1 + 8);
    v15_.v15[0] = a2;
    v15_.v15[1] = a3;
    v11 = *v10;
    v15_.v18 = 429;
    v12 = v10[1];
    v28_.v28 = v14;
    v28_.v29 = -1;
    v28_.v32 = v34;
    v28_.v33 = v14;
    v28_.v30 = 0;
    v28_.v31 = &GameRoutine_6381e0;
    v34[0] = 767;
    v34[1] = 0;
    v24_.v25 = 0;
    v22_.v22[0] = 0;
    v22_.v23 = 0;
    v24_.v24[0] = "ram/Externals/Spine/src/spine/RegionAttachment.cpp";
    v24_.v24[1] = "ternals/Spine/src/spine/RegionAttachment.cpp";
    v15_.v16 = v11;
    v15_.v17 = v12;
    v24_.v26 = 0;
    v24_.v27 = 2;
    v19_.v20 = v15_.v15;
    v19_.v21 = 429;
    v19_.v19[0] = (__int64*)&v28_.v28;
    v19_.v19[1] = (_QWORD*)(((_UNKNOWN*)((char*)0x0LL + 2)));
    GameRoutine_6380e0((__int64)v24_.v24, v19_.v19);
    if (v22_.v23 == 1) {
      std___1_locale_Destroy_locale((__int64)v22_.v22);
    }
    v28_.v33[v28_.v30] = 0;
    if ((unsigned int)nn_fs_GetEntryType((__int64)&v28_.v28, v14) == 0 &&
        (**(_BYTE**)(a1 + 16) != 1 || (_DWORD)v28_.v28 == 1)) {
      return 1;
    }
  }
  return 0;
}

#pragma GCC visibility pop
