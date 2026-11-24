#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a85600(_QWORD);
__int64 GameRoutine_fe6920(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21c6978;
extern __int64 GameData_220f8b0;
extern __int64* GameData_212eec0[4];
__int64 MapManager_d6e320(__int64 result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_a853b0(__int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_103a620(PSEUDO_X8, __int64);
__int16* ScheduleManager_d9edf0();
__int64* GameRoutine_10c0c60(__int64);
__int64* GameRoutine_f42060(__int64* result);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a85120(__int64, unsigned __int8*);
__int64 GameRoutine_ae0760(__int64);
__int64 GameRoutine_f41c80();
__int64 Impl_1327400(_QWORD*);
__int64 LightingAnimModule_c6da10(__int64 result);
__int64 MapManager_d6f2a0(__int64 result);
__int64 ObjectTransparent_f38dc0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameView_Update();
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern __int64 (*GameData_1fdd3d0[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9758;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1b884a8[8];
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
_DWORD*
game_hub_MapManager_Load_alt1(_DWORD* result, int a2,
                              __int64 a3) __asm__("game_hub_MapManager_Load");
__int64* MapManager_d6f8d0(__int64* result);
__int64 game_hub_MapManager_Load_lambda0_Invoke(__int64 a1);
__int64 GameRoutine_f722c0(__int64, int, __int64, __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ObjectBuildCreate_c13700(__int64, const char*, unsigned __int64);
extern __int64 GameData_21ec7c0;
extern __int64 GameData_220b6c8;
__int64 MapManager_d6ef90(__int64 result);
__int64 GameHr_1327400(_QWORD*);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_a853b0_alt1(__int64) __asm__("GameRoutine_a853b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_MapManager_Load(__int64 a1, int a2, __int64 a3);
__attribute__((swiftcall)) void game_hub_103a620(PSEUDO_X8, __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
void GameRoutine_a853b0_alt2(__int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);

__int64 MapManager_d6e320(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 j;
  __int64 v8;
  char v9;

  if (*(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 8) = 0;
    v1 = result;
    v2 = (_QWORD*)*GameData_212eec0[0];
    if (*GameData_212eec0[0] != 0) {
      v3 = v2[5];
      for (i = v2[6]; i != v3; i -= 16) {
        v5 = *(_QWORD*)(i - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
      v2[6] = v3;
      v6 = v2[8];
      for (j = v2[9]; j != v6; j -= 16) {
        v8 = *(_QWORD*)(j - 8);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      v2[9] = v6;
    }
    if (*(_QWORD*)(GameData_220f8b0 + 8) != 0) {
      GameRoutine_fe6920();
    }
    if ((*(_BYTE*)(v1 + 112) & 1) != 0) {
      **(_BYTE**)(v1 + 128) = 0;
      *(_QWORD*)(v1 + 120) = 0;
    }
    else {
      *(_WORD*)(v1 + 112) = 0;
    }
    v9 = *(_BYTE*)(v1 + 64);
    *(_QWORD*)(v1 + 92) = 0;
    if ((v9 & 1) != 0) {
      **(_BYTE**)(v1 + 80) = 0;
      *(_QWORD*)(v1 + 72) = 0;
    }
    else {
      *(_WORD*)(v1 + 64) = 0;
    }
    return GameRoutine_a85600(GameData_21c6978);
  }
  return result;
}

void game_hub_MapManager_Load(__int64 a1, int a2, __int64 a3)
{

#pragma clang fp contract(on)

  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v22;
  unsigned int* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int8* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  unsigned __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  __int64* v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int16 v64;
  unsigned __int8* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _BYTE* v73;
  __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  struct {
    char gap0_[16];
    _BYTE v84[18];
    char gap34_[14];
    _BYTE* v85;
    char gap56_[8];
    _QWORD v86[3];
    __int64 v87[3];
    int v88;
    int v89;
    char gap120_[8];
    _QWORD v90[7];
    char v91;
    char gap185_[87];
    __int64 v92;
    __int64 v93;
    char v94;
    __int64 v95;
    char v96;
    char gap298_[6];
    __int64 v97;
    __int64 v98[6];
    __int64 v99[4];
    _QWORD v100[3];
    __int64 v101[3];
    __int64 v102[2];
    __int64 v103;
    __int64 v104;
    char gap472_[8];
    _BYTE v105[32];
    _BYTE* v106;
    char gap520_[8];
    _QWORD v107[4];
    _QWORD* v108;
  } f_;

  if (*(_DWORD*)(a1 + 8) != 0) {
    return;
  }
  *(_DWORD*)(a1 + 88) = a2;
  *(_DWORD*)(a1 + 92) = a2;
  *(_DWORD*)(a1 + 8) = 1;
  v7 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    fw_text_String_CopyTerminated(
        f_.v102, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL),
        *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL));
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
    v9 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
    f_.v102[0] = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
    f_.v102[1] = v8;
    f_.v103 = v9;
  }
  game_hub_103a620((void*)(f_.v100), (__int64)f_.v102);
  v10 = (_QWORD*)(a1 + 16);
  if ((_QWORD*)(a1 + 16) != f_.v100) {
    if ((*(_BYTE*)v10 & 1) != 0) {
      if ((f_.v100[0] & 1) != 0) {
        v12 = (char*)f_.v100[2];
      }
      else {
        v12 = (char*)f_.v100 + 1;
      }
      if ((f_.v100[0] & 1) != 0) {
        v13 = f_.v100[1];
      }
      else {
        v13 = (unsigned __int64)LOBYTE(f_.v100[0]) >> 1;
      }
      SpineModel_64dde0((__int64*)(a1 + 16), (__int64)v12, v13);
    }
    else if ((f_.v100[0] & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 16), f_.v100[2], f_.v100[1]);
    }
    else {
      v11 = f_.v100[1];
      *v10 = f_.v100[0];
      *(_QWORD*)(a1 + 24) = v11;
      *(_QWORD*)(a1 + 32) = f_.v100[2];
    }
  }
  v14 = *(_QWORD*)v7;
  *(_DWORD*)(a1 + 160) = 0;
  v15 = *(_BYTE*)(v14 + 64);
  v16 = *(_QWORD*)(v14 + 80);
  v17 = v14 + 65;
  if ((v15 & 1) != 0) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  v19 = GameRoutine_ae0760(v18);
  if (v19 != 0 && (v20 = *(_BYTE**)(v19 + 32)) != nullptr && *v20 != 0 ||
      ((*(_BYTE*)(*(_QWORD*)v7 + 40LL) & 1) != 0
           ? (v21 = *(_QWORD*)(*(_QWORD*)v7 + 56LL))
           : (v21 = *(_QWORD*)v7 + 41LL),
       (v19 = GameRoutine_ae0760(v21)) != 0 &&
           (v22 = *(_BYTE**)(v19 + 32)) != nullptr && *v22 != 0)) {
    v23 = game_gmap_SpotMgr_FindSpot((unsigned int*)v19);
    if (v23 != nullptr && (Impl_1327400(v23) & 1) != 0) {
      *(_DWORD*)(a1 + 160) = 1;
    }
  }
  v24 = *(_QWORD*)(GameData_21c9608 + 976);
  if ((v24 & 0x100000000LL) != 0) {
    *(_DWORD*)(a1 + 160) = v24;
  }
  v25 = *(unsigned __int8*)(a1 + 224);
  v26 = *(_QWORD*)(a1 + 232);
  v27 = v25 >> 1;
  if ((v25 & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 232);
  }
  if (v27 == 0) {
    v28 = (__int64*)(a1 + 40);
    if ((__int64*)(a1 + 40) == f_.v101) {
      goto LABEL_58;
    }
    if ((*(_BYTE*)v28 & 1) == 0) {
      if ((f_.v101[0] & 1) == 0) {
        v31 = f_.v101[1];
        v30 = f_.v101[2];
        *v28 = f_.v101[0];
        *(_QWORD*)(a1 + 48) = v31;
        goto LABEL_44;
      }
      v26 = f_.v101[1];
      v34 = f_.v101[2];
      goto LABEL_57;
    }
    if ((f_.v101[0] & 1) != 0) {
      v33 = (char*)f_.v101[2];
    }
    else {
      v33 = (char*)f_.v101 + 1;
    }
    if ((f_.v101[0] & 1) != 0) {
      v32 = f_.v101[1];
    }
    else {
      v32 = (unsigned __int64)LOBYTE(f_.v101[0]) >> 1;
    }
  LABEL_48:
    SpineModel_64dde0(v28, (__int64)v33, v32);
    goto LABEL_58;
  }
  v28 = (__int64*)(a1 + 40);
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v32 = v27;
    if ((v25 & 1) != 0) {
      v33 = *(char**)(a1 + 240);
    }
    else {
      v33 = (char*)(a1 + 225);
    }
    goto LABEL_48;
  }
  if ((v25 & 1) == 0) {
    v29 = *(_QWORD*)(a1 + 232);
    *v28 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 48) = v29;
    v30 = *(_QWORD*)(a1 + 240);
  LABEL_44:
    v28[2] = v30;
    goto LABEL_58;
  }
  v34 = *(_QWORD*)(a1 + 240);
LABEL_57:
  GameRoutine_64df20(v28, v34, v26);
LABEL_58:
  *(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 160) == 1;
  GameRoutine_1a0ba50((__int64)f_.v86, 0, 0x140u);
  BYTE1(f_.v98[0]) = 0;
  BYTE1(f_.v99[0]) = 0;
  v35 = *((_QWORD*)GameData_212c540 + 1);
  f_.v92 = *(_QWORD*)GameData_212c540;
  f_.v93 = v35;
  if (f_.v86 != v10) {
    if ((*(_BYTE*)v10 & 1) != 0) {
      GameRoutine_64df20(f_.v86, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 24));
    }
    else {
      v36 = *(_QWORD*)(a1 + 24);
      f_.v86[0] = *v10;
      f_.v86[1] = v36;
      f_.v86[2] = *(_QWORD*)(a1 + 32);
    }
  }
  v37 = (unsigned __int8*)(a1 + 40);
  if (f_.v87 != (__int64*)(a1 + 40)) {
    v38 = *v37;
    if ((f_.v87[0] & 1) != 0) {
      if ((v38 & 1) != 0) {
        v42 = *(_QWORD*)(a1 + 56);
      }
      else {
        v42 = a1 + 41;
      }
      if ((v38 & 1) != 0) {
        v43 = *(_QWORD*)(a1 + 48);
      }
      else {
        v43 = v38 >> 1;
      }
      SpineModel_64dde0(f_.v87, v42, v43);
    }
    else if ((v38 & 1) != 0) {
      GameRoutine_64df20(f_.v87, *(_QWORD*)(a1 + 56), *(_QWORD*)(a1 + 48));
    }
    else {
      v39 = *(_QWORD*)v37;
      v40 = *(_QWORD*)(a1 + 48);
      v41 = *(_QWORD*)(a1 + 56);
      f_.v87[0] = v39;
      f_.v87[1] = v40;
      f_.v87[2] = v41;
    }
  }
  v44 = *(_QWORD**)v7;
  f_.v88 = 1;
  v45 = v44[24];
  if ((f_.v91 & 1) == 0) {
    f_.v91 = 1;
  }
  v46 = v44 + 8;
  f_.v90[6] = v45;
  if (f_.v99 != v44 + 8) {
    v47 = *(unsigned __int8*)v46;
    if ((f_.v99[0] & 1) != 0) {
      v51 = (char*)v44 + 65;
      v54 = v44 + 9;
      v52 = v44[9];
      v53 = v54[1];
      if ((v47 & 1) != 0) {
        v55 = v53;
      }
      else {
        v55 = (__int64)v51;
      }
      if ((v47 & 1) != 0) {
        v56 = v52;
      }
      else {
        v56 = v47 >> 1;
      }
      SpineModel_64dde0(f_.v99, v55, v56);
    }
    else if ((v47 & 1) != 0) {
      GameRoutine_64df20(f_.v99, v44[10], v44[9]);
    }
    else {
      v48 = *v46;
      v49 = v46[1];
      v50 = v46[2];
      f_.v99[1] = v49;
      f_.v99[2] = v50;
      f_.v99[0] = v48;
    }
  }
  v57 = *(int*)(a1 + 92) - 1;
  if (v57 > 2) {
    v58 = 0;
    LOBYTE(v59) = 0;
  }
  else {
    v58 = *(_QWORD*)&GameData_1b884a8[8 * v57];
    v59 = 0xE100Eu >> (8 * v57);
  }
  v60 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((f_.v94 & 1) != 0 && f_.v97 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, f_.v97);
  }
  f_.v94 = v59;
  f_.v96 = 0;
  f_.v95 = v58;
  f_.v89 = *(_DWORD*)(a1 + 164);
  v62 = *(_DWORD*)(*(_QWORD*)v7 + 136LL);
  if (v62 != 0) {
    if (v62 != 1) {
      goto LABEL_107;
    }
    if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
      *(_QWORD*)(a1 + 144) = 3;
      v63 = *(_QWORD*)(a1 + 152);
    }
    else {
      *(_BYTE*)(a1 + 136) = 6;
      v63 = a1 + 137;
    }
    *(_BYTE*)(v63 + 2) = 103;
    v64 = 28228;
  }
  else {
    if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
      *(_QWORD*)(a1 + 144) = 3;
      v63 = *(_QWORD*)(a1 + 152);
    }
    else {
      *(_BYTE*)(a1 + 136) = 6;
      v63 = a1 + 137;
    }
    *(_BYTE*)(v63 + 2) = 98;
    v64 = 30024;
  }
  *(_WORD*)v63 = v64;
  *(_BYTE*)(v63 + 3) = 0;
LABEL_107:
  v65 = (unsigned __int8*)(a1 + 136);
  if (f_.v98 != (__int64*)(a1 + 136)) {
    v66 = *v65;
    if ((f_.v98[0] & 1) != 0) {
      if ((v66 & 1) != 0) {
        v70 = *(_QWORD*)(a1 + 152);
      }
      else {
        v70 = a1 + 137;
      }
      if ((v66 & 1) != 0) {
        v71 = *(_QWORD*)(a1 + 144);
      }
      else {
        v71 = v66 >> 1;
      }
      SpineModel_64dde0(f_.v98, v70, v71);
    }
    else if ((v66 & 1) != 0) {
      GameRoutine_64df20(f_.v98, *(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 144));
    }
    else {
      v67 = *(_QWORD*)v65;
      v68 = *(_QWORD*)(a1 + 144);
      v69 = *(_QWORD*)(a1 + 152);
      f_.v98[0] = v67;
      f_.v98[1] = v68;
      f_.v98[2] = v69;
    }
  }
  v72 = *(_QWORD*)(a3 + 32);
  if (v72 != 0) {
    if (v72 == a3) {
      f_.v85 = f_.v84;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v72 + 24LL))(v72,
                                                             (__int64)f_.v84);
      v74 = a1;
      v73 = f_.v85;
    }
    else {
      v73 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
      f_.v85 = v73;
      v74 = a1;
    }
    f_.v104 = v74;
    if (v73 != nullptr) {
      if (v73 == f_.v84) {
        f_.v106 = f_.v105;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v73 + 24LL))(
            (__int64)v73, (__int64)f_.v105);
        v74 = f_.v104;
        v73 = f_.v106;
      }
      else {
        f_.v106 = v73;
        f_.v85 = nullptr;
      }
      goto LABEL_128;
    }
  }
  else {
    f_.v85 = nullptr;
    f_.v104 = a1;
    v74 = a1;
  }
  v73 = nullptr;
  f_.v106 = nullptr;
LABEL_128:
  v75 = (_QWORD*)fw_memory_HeapManager_Allocate(*v60, 80, 16, 0);
  v75[2] = v74;
  *v75 = GameData_1fdd3d0;
  if (v73 != nullptr) {
    if (v73 == f_.v105) {
      v76 = v75;
      v75[8] = v75 + 4;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v73 + 24LL))(
          (__int64)v73, (__int64)(v75 + 4));
      v75 = v76;
    }
    else {
      v75[8] = v73;
      f_.v106 = nullptr;
    }
  }
  else {
    v75[8] = 0;
  }
  f_.v108 = v75;
  GameRoutine_c18930(f_.v107, f_.v90);
  if (f_.v108 == f_.v107) {
    v77 = 32;
  }
  else {
    if (f_.v108 == nullptr) {
      goto LABEL_138;
    }
    v77 = 40;
  }
  (*(void (**)(__int64))(*f_.v108 + v77))((__int64)f_.v108);
LABEL_138:
  if (f_.v106 == f_.v105) {
    v78 = 32;
  }
  else {
    if (f_.v106 == nullptr) {
      goto LABEL_143;
    }
    v78 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v106 + v78))((__int64)f_.v106);
LABEL_143:
  if (f_.v85 == f_.v84) {
    v79 = 32;
  }
  else {
    if (f_.v85 == nullptr) {
      goto LABEL_148;
    }
    v79 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v85 + v79))((__int64)f_.v85);
LABEL_148:
  v80 = *(_QWORD*)GameData_212c638;
  *(_DWORD*)(a1 + 220) = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                           *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
                          3) -
                         1;
  GameRoutine_a85120(v80, (unsigned __int8*)f_.v86);
  game_GameView_Update();
  GameRoutine_a853b0_alt2((__int64)f_.v86);
  if ((f_.v101[0] & 1) != 0 && f_.v101[2] != 0) {
    v81 = 128;
    if (*(_QWORD*)(*v60 + 200) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v60 + v81, f_.v101[2]);
  }
  if ((f_.v100[0] & 1) != 0 && f_.v100[2] != 0) {
    v82 = 128;
    if (*(_QWORD*)(*v60 + 200) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v60 + v82, f_.v100[2]);
  }
  if ((f_.v102[0] & 1) != 0 && f_.v103 != 0) {
    v83 = 128;
    if (*(_QWORD*)(*v60 + 200) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v60 + v83, f_.v103);
  }
}

__int64 MapManager_d6ef90(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16 v7;
  unsigned __int64 v8;
  _DWORD v9[4];

  if (*(_BYTE*)(GameData_21f3d10 + 10) == 1) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v1 != 0) {
      v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v3 = result;
      v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v4);
      result = std___1___shared_weak_count___release_weak(v1);
      if (v5 == 0 || v2 == 0) {
        if (v5 == 0) {
          return result;
        }
        goto LABEL_22;
      }
      result =
          GameRoutine_f722c0(GameData_220b6c8, *(_DWORD*)(v3 + 92),
                             *(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL) + 560LL,
                             GameData_21f3d10 + 64);
      if ((_DWORD)result == 0 || *(_DWORD*)(v3 + 96) == (_DWORD)result) {
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      *(_DWORD*)(v3 + 96) = result;
      switch ((_DWORD)result) {
      case 1:
        LOBYTE(v9[0]) = 14;
        *(_DWORD*)((char*)v9 + 1) = 1851092553;
        v7 = 25710;
        break;
      case 2:
        v8 = 8;
        LOBYTE(v9[0]) = 16;
        strcpy((char*)v9 + 1, "InMiddle");
        goto LABEL_20;
      case 3:
        LOBYTE(v9[0]) = 14;
        *(_DWORD*)((char*)v9 + 1) = 1884646985;
        v7 = 28784;
        break;
      default:
        v8 = 0;
        LOWORD(v9[0]) = 0;
      LABEL_20:
        result =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                             8LL) +
                                  64LL) +
                       96LL);
        if (result != 0) {
          result = ObjectBuildCreate_c13700(result, (const char*)v9 + 1, v8);
        }
        goto LABEL_22;
      }
      v8 = 7;
      v9[1] = v7 | 0x72650000;
      LOBYTE(v9[2]) = 0;
      goto LABEL_20;
    }
  }
  return result;
}

__int64* MapManager_d6f8d0(__int64* result)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  float v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;
  float v12;

  v1 = *((unsigned __int8*)result + 112);
  v2 = result[15];
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = result;
    if ((v1 & 1) != 0) {
      *(_BYTE*)result[16] = 0;
      result[15] = 0;
    }
    else {
      *((_WORD*)result + 56) = 0;
    }
    *((_DWORD*)result + 23) = *((_DWORD*)result + 22);
    *((_DWORD*)result + 24) = 0;
    v4 = *(_QWORD*)(GameData_21f3d10 + 216);
    v5 = *(_DWORD*)(v4 + 232);
    if (!(v5 > 1)) {
      v5 = 1;
    }
    *(_DWORD*)(v4 + 232) = v5;
    ObjectTransparent_f38dc0(GameData_21c9758);
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v7 = (v6 & 8) != 0 ? 2 : 3;
      if ((v7 & v6) == 0) {
        goto LABEL_22;
      }
    }
    v8 = 0x1.0000000000000p+1f;
    if (game_ProcFadeView_instance_ != 0) {
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        v10 = COERCE_AS(__typeof__(v10),
                        (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v9 + 160) +
                                                         16LL))(v9 + 160));
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                          v9 + 160, *((float*)&v10 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
      LABEL_22:
        v8 = 0x0.0p+0f;
      }
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                           8LL) +
                                40LL) +
                     392LL);
    if (*(_DWORD*)(v11 + 516) != -1) {
      *(_DWORD*)(v11 + 520) = 1065353216;
      if (!(v8 > 0x0.0p+0f)) {
        v12 = 0x0.0p+0f;
        *(_DWORD*)(v11 + 524) = 1065353216;
      }
      else {
        v12 = (float)(0x1.0000000000000p+0f - *(float*)(v11 + 524)) / v8;
      }
      *(float*)(v11 + 528) = v12;
      LightingAnimModule_c6da10(v11);
    }
    return GameRoutine_f42060(v3 + 24);
  }
  return result;
}

__int64 game_hub_MapManager_Load_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v3;
  int v4;
  float v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  float v9;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 16);
  ScheduleManager_d9edf0();
  GameRoutine_f41c80();
  ObjectTransparent_f38dc0(GameData_21c9758);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_13;
    }
  }
  v5 = 0x1.0000000000000p+1f;
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      v7 = COERCE_AS(__typeof__(v7),
                     (*(__n128(**)(unsigned __int64))(*(_QWORD*)(v6 + 160) +
                                                      16LL))(v6 + 160));
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      v5 = 0x0.0p+0f;
    }
  }
  v8 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) +
                          40LL) +
               392LL);
  if (*(_DWORD*)(v8 + 516) != -1) {
    *(_DWORD*)(v8 + 520) = 1065353216;
    if (!(v5 > 0x0.0p+0f)) {
      v9 = 0x0.0p+0f;
      *(_DWORD*)(v8 + 524) = 1065353216;
    }
    else {
      v9 = (float)(0x1.0000000000000p+0f - *(float*)(v8 + 524)) / v5;
    }
    *(float*)(v8 + 528) = v9;
    LightingAnimModule_c6da10(v8);
  }
  GameRoutine_f42060((__int64*)(v1 + 192));
  if (*(_BYTE*)(v1 + 216) != 0) {
    *(_BYTE*)(v1 + 216) = 0;
    GameRoutine_10c0c60(GameData_21f3cd8);
  }
  MapManager_d6f2a0(v1);
  *(_DWORD*)(v1 + 8) = 2;
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
