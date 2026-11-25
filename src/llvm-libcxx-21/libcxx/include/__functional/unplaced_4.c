#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__int64 ElfFile_631220(__int64*, const char*);
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16,
                      __int64);
__int64 GameRoutine_10e65a0(__int64 result, int8x16_t**, unsigned int, __int64,
                            __int64, __int64, __int64, __int64, __int128,
                            float32x4_t, float32x4_t, float32x4_t, float32x4_t,
                            __int64, __int64, __int64, float32x4_t, int8x16_t,
                            __int128, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64, __int64, __int64,
                            __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 MapDrawConst_fcbcc0(long double, __int64, int, unsigned __int8,
                            unsigned __int8, __int64, char);
__int64 MapDrawConst_fcc4f0(__int64, __int64, int, float32x4_t*, __int64,
                            __int64, char);
__int64 MapPanelRage_f1a220(__int64**, __int64);
__int64 fs_Manager_createFileAsync_fs_File(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_map_f54910(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_a8b5a0(__int64 result);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (***GameData_212c3c8)();
extern __int64 (*GameData_1ff2750[])();
extern __int64 (*GameData_1ff27d0[])();
extern __int64 (*GameData_1ff2850[])();
extern __int64 (*GameData_1ff28d0[])();
extern __int64 (*GameData_1ff2950[])();
extern __int64* GameData_212f8b0[14];
extern __int64* GameData_212f8d8[9];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float Unit_6c7fa0(__int64, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
long double asin(long double, long double);
long double atan2(double, double);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen(const char*);
unsigned __int8* GameHr_8f7c50(unsigned __int8* result, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a5dcb0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___functional_a5b320(_QWORD* a1, __int64 a2,
                                                       unsigned __int64 a3);
void llvm_libcxx_21_libcxx_include___functional_a5b760(_QWORD* a1, __int64 a2,
                                                       unsigned __int64 a3,
                                                       __int64 a4,
                                                       unsigned __int64 a5,
                                                       char* a6, char a7);
long double llvm_libcxx_21_libcxx_include___functional_a79e70(__int64 a1,
                                                              int* a2,
                                                              float32x4_t** a3);
void llvm_libcxx_21_libcxx_include___functional_c0e160(__int64 a1, __int64 a2);
void llvm_libcxx_21_libcxx_include___functional_f19a80(__int64 a1, __int64* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_10e7a70(
    __int64 a1, float32x4_t a2, float32x4_t a3, float32x4_t a4, float32x4_t a5,
    float32x4_t a6, int8x16_t a7, __int64 a8, int8x16_t** a9, __int64 a10,
    __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int128 a15,
    __int64 a16, __int64 a17, __int64 a18, __int128 a19, __int64 a20,
    __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
    __int64 a26, __int64 a27, __int64 a28, __int64 a29);
__int64 BasicMenuCursor_16de1f0(__int64*, int, int);
__int64 GameConst_7f97f0(__int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);
__int64 GameRoutine_8ea9a0(__int64);
__int64 Impl_13261c0(__int64);
__int64 Message_16f9b50(__int64, __int64*, __int64*);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 UnitItem_6e8800(__int64 result, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_225d6e8[12];
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_1a8f344;
extern __int64 (*GameData_2094908[])();
extern __int64 (*GameData_2094988[])();
extern __int64 (*game_facility_anonymous_CausationMergeMenuItem_vtable[])();
extern __int64 (
    *game_facility_anonymous_CausationTransporterMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_DownDifficultyItem_vtable[])();
extern __int64 (*game_facility_anonymous_MemoryMenuItem_vtable[])();
extern __int64 (
    *game_facility_anonymous_ObeliskCausationMenuItem_vtable_2078e88[])();
extern __int64 (
    *game_facility_anonymous_ObeliskDestinyMenuItem_vtable_2078c18[])();
extern __int64 (
    *game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_vtable[])();
extern __int64 (*game_gmap_BoostFarmMenu_vtable[])();
extern __int64 (*game_gmap_MakeFarmMenu_vtable[])();
extern __int64 (*game_gmap_anonymous_MakeFarmMenuItem_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb6b10[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2077c70[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2093ee0[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2094858[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fb6a40[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2077ba0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2093e10[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2094788[])();
extern __int64 (*game_menu_TitleMenu_Destroy_TitleMenu_16667c0_ptr[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212d7f8[4];
extern __int64* GameData_2130e70;
extern __int64* GameData_2131b18[5];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_212db18[2];
extern __int64 GameData_2131678;
extern __int64 GameData_2131ba0[8];
extern __int64 GameData_2131ba8[7];
extern __int64 GameData_2132038[3];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern char* GameData_2066090;
extern char GameData_1a9f09e;
int GameRoutine_1a09d30(const char*, const char*);
unsigned __int64 GameRoutine_1a09c70(const char*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void BasicMenu_16dd8b0(__int64, int, int);
void GameRoutine_71fb20(__int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void snd_Fade_Fade_10c830(__int64, float);
void llvm_libcxx_21_libcxx_include___functional_9c47a0(__int64 a1);
void llvm_libcxx_21_libcxx_include___functional_1665330(__int64 a1,
                                                        __int64* a2);
void llvm_libcxx_21_libcxx_include___functional_1665d40(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_16c4ea0(__int64 a1,
                                                           __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_16c5260(__int64 a1);

void llvm_libcxx_21_libcxx_include___functional_9c47a0(__int64 a1)
{
  _DWORD* v1;
  int* v2;
  int v3;
  __int64 v4;
  int* v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;

  v1 = (_DWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
  *(_DWORD*)v1 = 0;
  v2 = v1 + 1;
  v3 = 1;
  v4 = (__int64)v1;
  v5 = v1 + 1;
  do {
    if (v2 < v5) {
      *v2++ = v3;
    }
    else {
      v6 = (char*)v2 - v4;
      v7 = ((__int64)v2 - v4) >> 2;
      v8 = v7 + 1;
      if ((unsigned __int64)(v7 + 1) >> 62 != 0) {
        goto LABEL_43;
      }
      if (((__int64)v5 - v4) >> 1 > v8) {
        v8 = ((__int64)v5 - v4) >> 1;
      }
      if ((unsigned __int64)v5 - v4 >= 0x7FFFFFFFFFFFFFFCLL) {
        v9 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v9 = v8;
      }
      if (v9 != 0) {
        if (v9 >> 62 != 0) {
          GameRoutine_60a210();
        }
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v9, 16, 0);
      }
      else {
        v10 = 0;
      }
      v5 = (int*)(v10 + 4 * v9);
      v11 = (unsigned __int64)v2 - v4;
      v12 = (__int64)&v6[v10 + -4 * v7];
      *(_DWORD*)&v6[v10] = v3;
      v2 = (int*)&v6[v10 + 4];
      GameRoutine_1a0b950(v12, v4, v11);
      if (v4 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v4);
      }
      v4 = v12;
    }
    ++v3;
  } while (v3 != 8);
  v14 = (unsigned __int64)v2 - v4;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1152, 16, 0);
  v34_.v34 = 0;
  v34_.v35 = 0;
  game_menu_16dcd30(v15, (__int64)"ShopSelectMenu", &v34_.v34, 0);
  v16 = GameData_212d6a8;
  v17 = v34_.v35;
  *(_QWORD*)v15 = GameData_212d6a8 + 2;
  *(_QWORD*)(v15 + 176) = v16 + 143;
  *(_QWORD*)(v15 + 1056) = v16 + 169;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = GameData_2132038[0];
  *(_QWORD*)(v15 + 1064) = 0;
  *(_QWORD*)v15 = v18 + 16;
  *(_QWORD*)(v15 + 176) = v18 + 1256;
  *(_QWORD*)(v15 + 1056) = v18 + 1464;
  BasicMenu_16dd8b0(v15, ((unsigned __int64)v2 - v4) >> 2, 0);
  *(_QWORD*)(v15 + 1072) = 0;
  *(_QWORD*)(v15 + 1088) = v15;
  *(_QWORD*)(v15 + 1096) = 0;
  *(_QWORD*)(v15 + 1104) = 0;
  *(_QWORD*)(v15 + 1112) = 0;
  *(_QWORD*)(v15 + 1120) = 0;
  *(_QWORD*)(v15 + 1128) = 0;
  *(_QWORD*)(v15 + 1136) = 0;
  *(_WORD*)(v15 + 1080) = 1;
  *(_QWORD*)v15 =
      game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_vtable;
  *(_QWORD*)(v15 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fb6a40;
  *(_QWORD*)(v15 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb6b10;
  if (v2 != (int*)v4) {
    if ((v14 & 0x8000000000000000LL) != 0) {
    LABEL_43:
      GameRoutine_6e5a20();
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         (__int64)v2 - v4, 16, 0);
    v20 = (char*)(v19 + v14);
    *(_QWORD*)(v15 + 1120) = v19;
    *(_QWORD*)(v15 + 1128) = v19;
    *(_QWORD*)(v15 + 1136) = v19 + v14;
    GameRoutine_1a0b950(v19, v4, (unsigned __int64)v2 - v4);
    *(_QWORD*)(v15 + 1128) = v20;
  }
  v21 = GameData_212cf90[0];
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
  v23 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
  v24 = ((v23 - v22) << 6) - 1;
  if (v23 == v22) {
    v24 = 0;
  }
  v25 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  v26 = *(_QWORD*)(game_GameModeData_instance_ + 176) + 2464LL;
  v27 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v28 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8) +
        *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
  if (v24 == v28) {
    GameRoutine_71fb20((__int64*)GameData_212cf90[0]);
    v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v21);
    v28 = *(_QWORD*)((char*)((char*)0x20LL) + v21 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + v21);
  }
  *(_QWORD*)(*(_QWORD*)(v22 + 8 * (v28 >> 9)) + 8 * (v28 & 0x1FF)) = v27;
  *v25 = v26;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v21);
  BasicMenuCursor_16de1f0((__int64*)v15, 2, 0);
  ProcInst_657850(v15, (__int64)GameData_212c730,
                  "ProcObeliskDepositoryTransporterMenu", 1, a1);
  v30 = *(_QWORD**)(v15 + 256);
  v29 = *(_QWORD**)(v15 + 264);
  *(_QWORD*)(v15 + 336) = 0;
  while (v30 != v29) {
    if (*v30 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v30 + 8LL))(*v30);
      v29 = *(_QWORD**)(v15 + 264);
    }
    ++v30;
  }
  v31 = *(_QWORD*)(v15 + 344);
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
    *(_QWORD*)(v15 + 344) = 0;
  }
  *(_QWORD*)(v15 + 264) = *(_QWORD*)(v15 + 256);
  *(_QWORD*)(v15 + 240) = *(_QWORD*)(v15 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 1024LL))(v15);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 1032LL))(v15);
  if (v4 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  v4);
  }
}

void llvm_libcxx_21_libcxx_include___functional_a5b320(_QWORD* a1, __int64 a2,
                                                       unsigned __int64 a3)
{
  char* v6;
  __int64 v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _BYTE* v39;
  char v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    _QWORD v55[3];
    __int64 v56;
    __int64 (***v57)();
    int v58;
  } v55_;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    char* v61;
  } v59_;
  struct {
    _QWORD v62[2];
    char* v63;
  } v62_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a3 | 7) + 1;
    }
    v6 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     v7, 16, 0);
    v62_.v62[1] = a3;
    v62_.v63 = v6;
    v62_.v62[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v62_.v62[0]) = 2 * a3;
  v6 = (char*)v62_.v62 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove((__int64)v6, a2, a3);
  }
  v6[a3] = 0;
  GameRoutine_1a09ce0((__int64)v62_.v62, ".mf0", 4u);
  if ((v62_.v62[0] & 1) != 0) {
    v8 = v62_.v63;
  }
  else {
    v8 = (char*)v62_.v62 + 1;
  }
  if (v8 == nullptr) {
    goto LABEL_54;
  }
  v9 = snd_g_fileIndex_ptr[0];
  v10 = *snd_g_fileIndex_ptr[0];
  v11 = strlen(v8);
  if ((fs_6360e0(v10, (__int64)v8, v11, 0, 1) & 1) == 0) {
    goto LABEL_54;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a3 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v59_.v60 = a3;
    v59_.v61 = v12;
    v59_.v59 = v13 | 1;
  }
  else {
    LOBYTE(v59_.v59) = 2 * a3;
    v12 = (char*)&v59_.v59 + 1;
    if (a3 == 0) {
      goto LABEL_23;
    }
  }
  memmove((__int64)v12, a2, a3);
LABEL_23:
  v14 = v62_.v62[0];
  v15 = (__int64)v62_.v63;
  v12[a3] = 0;
  v16 = *v9;
  if ((v14 & 1) != 0) {
    v17 = (const char*)v15;
  }
  else {
    v17 = (char*)v62_.v62 + 1;
  }
  v55_.v55[0] = v17;
  v55_.v55[1] = strlen(v17);
  v55_.v55[2] = 0;
  v55_.v56 = 0;
  v55_.v57 = GameData_212c3c8;
  v55_.v58 = 1;
  v18 = fs_Manager_createFileAsync_fs_File(v16, (__int64)v55_.v55);
  v19 = a1[11];
  v20 = a1[12];
  v21 = v18;
  if (v19 >= v20) {
    v25 = a1[10];
    v26 = v19 - v25;
    v27 = ((__int64)(v19 - v25) >> 7) + 1;
    if (v27 >> 57 != 0) {
      GameRoutine_a5dcb0();
    }
    v28 = v20 - v25;
    if (v28 >> 6 > v27) {
      v27 = v28 >> 6;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFF80LL) {
      v27 = 0x1FFFFFFFFFFFFFFLL;
    }
    if (v27 >> 57 != 0) {
      GameRoutine_60a210();
    }
    v29 = v27 << 7;
    v30 = fw_memory_g_heap_manager_ptr;
    v31 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v27 << 7, 16, 0);
    v32 = a1[10];
    v33 = (_QWORD*)a1[11];
    v34 = v31 + v26;
    v35 = v31 + v29;
    *(_BYTE*)(v34 + 32) = 0;
    *(_BYTE*)(v34 + 96) = 0;
    *(_BYTE*)(v34 + 112) = 0;
    v36 = v31 + v26 - ((_QWORD)v33 - v32);
    v37 = v59_.v60;
    *(_QWORD*)v34 = v59_.v59;
    *(_QWORD*)(v34 + 8) = v37;
    *(_QWORD*)(v34 + 16) = v59_.v61;
    *(_QWORD*)(v34 + 24) = v21;
    v24 = v31 + v26 + 128;
    if (v33 != (_QWORD*)v32) {
      v38 = v32 + 32;
      v39 = (_BYTE*)(v26 - (((__int64)v33 - v32) >> 7 << 7) + v31 + 96);
      do {
        v42 = *(_QWORD*)(v38 - 24);
        v41 = (_QWORD*)(v38 - 32);
        v43 = *(_QWORD*)(v38 - 16);
        *((_QWORD*)v39 - 12) = *(_QWORD*)(v38 - 32);
        *((_QWORD*)v39 - 11) = v42;
        *((_QWORD*)v39 - 10) = v43;
        v41[1] = 0;
        v41[2] = 0;
        *v41 = 0;
        v44 = *(_QWORD*)(v38 - 8);
        *v39 = 0;
        *((_QWORD*)v39 - 9) = v44;
        *(v39 - 64) = 0;
        if (*(_BYTE*)(v38 + 64) == 1) {
          v45 = *(_QWORD*)(v38 + 56);
          *((_QWORD*)v39 - 3) = *(_QWORD*)(v38 + 40);
          *((_QWORD*)v39 - 1) = v45;
          v46 = *(_QWORD*)(v38 + 24);
          *((_QWORD*)v39 - 7) = *(_QWORD*)(v38 + 8);
          *((_QWORD*)v39 - 5) = v46;
          v47 = *(_QWORD*)v38;
          *((_QWORD*)v39 - 6) = *(_QWORD*)(v38 + 16);
          *((_QWORD*)v39 - 8) = v47;
          v48 = *(_QWORD*)(v38 + 32);
          v49 = *(_QWORD*)(v38 + 48);
          *v39 = 1;
          *((_QWORD*)v39 - 2) = v49;
          *((_QWORD*)v39 - 4) = v48;
        }
        v40 = *(_BYTE*)(v38 + 80);
        v38 += 128;
        v39[16] = v40;
        v39 += 128;
      } while (v41 + 16 != v33);
      do {
        if ((*(_BYTE*)v32 & 1) != 0) {
          v50 = *(_QWORD*)(v32 + 16);
          if (v50 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v30 + v51, v50);
          }
        }
        v32 += 128;
      } while ((_QWORD*)v32 != v33);
      v32 = a1[10];
    }
    a1[10] = v36;
    a1[11] = v24;
    a1[12] = v35;
    if (v32 != 0) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v30 + v52, v32);
    }
  }
  else {
    v22 = v59_.v59;
    v23 = v59_.v60;
    *(_BYTE*)(v19 + 32) = 0;
    *(_BYTE*)(v19 + 96) = 0;
    *(_BYTE*)(v19 + 112) = 0;
    *(_QWORD*)v19 = v22;
    *(_QWORD*)(v19 + 8) = v23;
    *(_QWORD*)(v19 + 16) = v59_.v61;
    *(_QWORD*)(v19 + 24) = v18;
    v24 = v19 + 128;
  }
  v53 = v55_.v56;
  a1[11] = v24;
  if (v53 != 0) {
    std___1___shared_weak_count___release_weak(v53);
  }
LABEL_54:
  if ((v62_.v62[0] & 1) != 0 && v62_.v63 != nullptr) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                                  (__int64)v62_.v63);
  }
}

void llvm_libcxx_21_libcxx_include___functional_a5b760(_QWORD* a1, __int64 a2,
                                                       unsigned __int64 a3,
                                                       __int64 a4,
                                                       unsigned __int64 a5,
                                                       char* a6, char a7)
{
  char* v14;
  __int64 v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  char v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  char v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _BYTE v72[15];
  struct {
    _QWORD v73[3];
    __int64 v74;
    __int64 (***v75)();
    int v76;
  } v73_;
  struct {
    __int64 v77;
    unsigned __int64 v78;
    char* v79;
  } v77_;
  struct {
    _QWORD v80[2];
    char* v81;
  } v80_;

  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_68;
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a5 | 7) + 1;
    }
    v14 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v15, 16, 0);
    v80_.v80[1] = a5;
    v80_.v81 = v14;
    v80_.v80[0] = v15 | 1;
    goto LABEL_9;
  }
  LOBYTE(v80_.v80[0]) = 2 * a5;
  v14 = (char*)v80_.v80 + 1;
  if (a5 != 0) {
  LABEL_9:
    memmove((__int64)v14, a4, a5);
  }
  v14[a5] = 0;
  GameRoutine_1a09ce0((__int64)v80_.v80, ".mf0", 4u);
  if ((v80_.v80[0] & 1) != 0) {
    v16 = v80_.v81;
  }
  else {
    v16 = (char*)v80_.v80 + 1;
  }
  if (v16 == nullptr) {
    goto LABEL_62;
  }
  v17 = snd_g_fileIndex_ptr[0];
  v18 = *snd_g_fileIndex_ptr[0];
  v19 = strlen(v16);
  if ((fs_6360e0(v18, (__int64)v16, v19, 0, 1) & 1) == 0) {
    goto LABEL_62;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_68:
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (a3 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v21,
                                                16, 0);
    v77_.v78 = a3;
    v77_.v79 = v20;
    v77_.v77 = v21 | 1;
  }
  else {
    LOBYTE(v77_.v77) = 2 * a3;
    v20 = (char*)&v77_.v77 + 1;
    if (a3 == 0) {
      goto LABEL_24;
    }
  }
  memmove((__int64)v20, a2, a3);
LABEL_24:
  v22 = v80_.v80[0];
  v23 = (__int64)v80_.v81;
  v24 = a7 & 1;
  v25 = *v17;
  v20[a3] = 0;
  if ((v22 & 1) != 0) {
    v26 = (const char*)v23;
  }
  else {
    v26 = (char*)v80_.v80 + 1;
  }
  v73_.v73[0] = v26;
  v73_.v73[1] = strlen(v26);
  v73_.v73[2] = 0;
  v73_.v74 = 0;
  v73_.v75 = GameData_212c3c8;
  v73_.v76 = 1;
  v27 = fs_Manager_createFileAsync_fs_File(v25, (__int64)v73_.v73);
  v28 = v27;
  if (a6 != nullptr) {
    v29 = *a6;
    v70 = *(_QWORD*)(a6 + 33);
    v71 = *(_QWORD*)(a6 + 41);
    *(_QWORD*)v72 = *(_QWORD*)(a6 + 49);
    *(_QWORD*)&v72[7] = *((_QWORD*)a6 + 7);
    v66 = *(_QWORD*)(a6 + 1);
    v67 = *(_QWORD*)(a6 + 9);
    v68 = *(_QWORD*)(a6 + 17);
    v69 = *(_QWORD*)(a6 + 25);
  }
  else {
    v29 = 0;
  }
  v30 = a1[11];
  v31 = a1[12];
  if (v30 >= v31) {
    v35 = a1[10];
    v36 = v30 - v35;
    v37 = ((__int64)(v30 - v35) >> 7) + 1;
    if (v37 >> 57 != 0) {
      GameRoutine_a5dcb0();
    }
    v38 = v31 - v35;
    if (v38 >> 6 > v37) {
      v37 = v38 >> 6;
    }
    if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFF80LL) {
      v37 = 0x1FFFFFFFFFFFFFFLL;
    }
    if (v37 >> 57 != 0) {
      GameRoutine_60a210();
    }
    v39 = v37 << 7;
    v40 = fw_memory_g_heap_manager_ptr;
    v41 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v37 << 7, 16, 0);
    v42 = v77_.v77;
    v43 = v77_.v78;
    v44 = v41 + v36;
    *(_BYTE*)(v44 + 32) = 0;
    *(_BYTE*)(v44 + 96) = 0;
    *(_QWORD*)v44 = v42;
    *(_QWORD*)(v44 + 8) = v43;
    *(_QWORD*)(v44 + 16) = v77_.v79;
    *(_QWORD*)(v44 + 24) = v28;
    if (a6 != nullptr) {
      *(_BYTE*)(v44 + 32) = v29;
      *(_QWORD*)(v44 + 65) = v70;
      *(_QWORD*)(v44 + 73) = v71;
      *(_QWORD*)(v44 + 81) = *(_QWORD*)v72;
      *(_QWORD*)(v44 + 88) = *(_QWORD*)&v72[7];
      *(_QWORD*)(v44 + 33) = v66;
      *(_QWORD*)(v44 + 41) = v67;
      *(_QWORD*)(v44 + 49) = v68;
      *(_QWORD*)(v44 + 57) = v69;
      *(_BYTE*)(v44 + 96) = 1;
    }
    v45 = a1[10];
    v46 = (_QWORD*)a1[11];
    v47 = v41 + v39;
    v34 = v44 + 128;
    *(_BYTE*)(v44 + 112) = v24;
    v48 = v44 - ((_QWORD)v46 - v45);
    if (v46 != (_QWORD*)v45) {
      v49 = v45 + 32;
      v50 = (_BYTE*)(v36 - (((__int64)v46 - v45) >> 7 << 7) + v41 + 96);
      do {
        v53 = *(_QWORD*)(v49 - 24);
        v52 = (_QWORD*)(v49 - 32);
        v54 = *(_QWORD*)(v49 - 16);
        *((_QWORD*)v50 - 12) = *(_QWORD*)(v49 - 32);
        *((_QWORD*)v50 - 11) = v53;
        *((_QWORD*)v50 - 10) = v54;
        v52[1] = 0;
        v52[2] = 0;
        *v52 = 0;
        v55 = *(_QWORD*)(v49 - 8);
        *v50 = 0;
        *((_QWORD*)v50 - 9) = v55;
        *(v50 - 64) = 0;
        if (*(_BYTE*)(v49 + 64) == 1) {
          v56 = *(_QWORD*)(v49 + 56);
          *((_QWORD*)v50 - 3) = *(_QWORD*)(v49 + 40);
          *((_QWORD*)v50 - 1) = v56;
          v57 = *(_QWORD*)(v49 + 24);
          *((_QWORD*)v50 - 7) = *(_QWORD*)(v49 + 8);
          *((_QWORD*)v50 - 5) = v57;
          v58 = *(_QWORD*)v49;
          *((_QWORD*)v50 - 6) = *(_QWORD*)(v49 + 16);
          *((_QWORD*)v50 - 8) = v58;
          v59 = *(_QWORD*)(v49 + 32);
          v60 = *(_QWORD*)(v49 + 48);
          *v50 = 1;
          *((_QWORD*)v50 - 2) = v60;
          *((_QWORD*)v50 - 4) = v59;
        }
        v51 = *(_BYTE*)(v49 + 80);
        v49 += 128;
        v50[16] = v51;
        v50 += 128;
      } while (v52 + 16 != v46);
      do {
        if ((*(_BYTE*)v45 & 1) != 0) {
          v61 = *(_QWORD*)(v45 + 16);
          if (v61 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
              v62 = 128;
            }
            else {
              v62 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v62, v61);
          }
        }
        v45 += 128;
      } while ((_QWORD*)v45 != v46);
      v45 = a1[10];
    }
    a1[10] = v48;
    a1[11] = v34;
    a1[12] = v47;
    if (v45 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v63, v45);
    }
  }
  else {
    v32 = v77_.v77;
    v33 = v77_.v78;
    *(_BYTE*)(v30 + 32) = 0;
    *(_BYTE*)(v30 + 96) = 0;
    *(_QWORD*)v30 = v32;
    *(_QWORD*)(v30 + 8) = v33;
    *(_QWORD*)(v30 + 16) = v77_.v79;
    *(_QWORD*)(v30 + 24) = v27;
    if (a6 != nullptr) {
      *(_BYTE*)(v30 + 32) = v29;
      *(_QWORD*)(v30 + 65) = v70;
      *(_QWORD*)(v30 + 73) = v71;
      *(_QWORD*)(v30 + 81) = *(_QWORD*)v72;
      *(_QWORD*)(v30 + 88) = *(_QWORD*)&v72[7];
      *(_QWORD*)(v30 + 33) = v66;
      *(_QWORD*)(v30 + 41) = v67;
      *(_QWORD*)(v30 + 49) = v68;
      *(_QWORD*)(v30 + 57) = v69;
      *(_BYTE*)(v30 + 96) = 1;
    }
    *(_BYTE*)(v30 + 112) = v24;
    v34 = v30 + 128;
  }
  v64 = v73_.v74;
  a1[11] = v34;
  if (v64 != 0) {
    std___1___shared_weak_count___release_weak(v64);
  }
LABEL_62:
  if ((v80_.v80[0] & 1) != 0 && v80_.v81 != nullptr) {
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  (__int64)v80_.v81);
  }
}

long double llvm_libcxx_21_libcxx_include___functional_a79e70(__int64 a1,
                                                              int* a2,
                                                              float32x4_t** a3)
{
  __int64 v3;
  __int128 v4;
  _OWORD* v6;
  __int64 v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  int32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  int8x16_t v19;
  int v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  unsigned __int64 v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  int8x16_t v49;
  int8x16_t v50;
  unsigned __int64 v51;
  int8x16_t v52;
  int32x2_t v53;
  int8x16_t v54;
  int8x16_t v55;
  float v56;
  unsigned int v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  __int128 v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  unsigned __int64 v80;
  int8x16_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  int8x16_t v87;
  unsigned __int64 v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  int8x16_t v95;
  float32x4_t v96;
  float32x4_t v97;
  int8x16_t v98;
  float32x4_t v99;
  float32x4_t v100;
  int8x16_t v101;
  int8x16_t v102;
  int8x16_t v103;
  int8x16_t v104;
  int8x16_t v105;
  int8x16_t v106;
  float v107;
  double v108;
  long double v110;
  float v111;
  long double v112;
  long double v113;
  long double v114;
  float32x4_t v115;
  long double v117;
  float v118;
  float32x2_t v119;
  float32x4_t v120;
  double v121;
  double v122;
  double v123;
  double v124;
  double v125;
  double v126;
  double v127;
  double v128;
  int8x16_t v129;
  unsigned int v130;
  float32x4_t v131;
  int8x16_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  int16x4_t v141;
  int v142;
  unsigned __int32 v143;
  __int128 v144;
  float32x4_t* v145;
  float32x4_t* v146;
  float32x4_t v147;
  int8x16_t v148;
  float32x4_t v149;
  int8x16_t v150;
  float32x4_t v151;
  int8x16_t v152;
  float32x4_t v153;
  int8x16_t v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  float32x2_t v159;
  float32x4_t v160;
  float32x4_t v161;
  int8x16_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  unsigned __int64 v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t* v174;
  int v176;
  __int64 v177;
  int v178;
  __int64 v179;
  float32x4_t v180;
  int8x16_t v181;
  float32x4_t v182;
  int8x16_t v183;
  unsigned int v184;
  float32x4_t v185;
  int8x16_t v186;
  unsigned int v187;
  float32x4_t v188;
  float32x4_t v189;
  int8x16_t v190;
  float v191;
  float v192;
  float v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  long double v197;
  __int128 v198;
  __int128 v199;
  __int128 v200;
  float32x4_t v201;
  struct {
    float32x4_t v202;
    float32x4_t v203;
    float32x4_t v204;
    float32x4_t v205;
  } v202_;
  long double v206;
  int8x16x2_t v207;
  int8x16x2_t v208;
  int8x16x2_t v209;

  v3 = *(_QWORD*)(a1 + 8);
  DWORD1(v4) = 0;
  *((_QWORD*)&v4 + 1) = 0;
  v6 = (_OWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 40) + 24LL) + 96LL * *a2);
  v195 = *((float32x4_t*)v6 + 3);
  v196 = *((float32x4_t*)v6 + 2);
  v194 = *((float32x4_t*)v6 + 4);
  v197 = *((long double*)v6 + 5);
  LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
  v7 = *(_QWORD*)(v3 + 8);
  v8 = **a3;
  v11 = vmulq_f32(v8, v8);
  if (*(_QWORD*)(v3 + 304) != 0) {
    v12 = *(_QWORD*)(v3 + 304);
  }
  else {
    v12 = *(_QWORD*)(v3 + 8);
  }
  v13 = sqrtf(
      (float)(LANES128(v11).n128_f32[1] +
              (float)(LANES128(v8).n128_f32[0] * LANES128(v8).n128_f32[0])) +
      (float)(COERCE_FLOAT(LANES128(*((*a3))).n128_u64[1]) *
              LANES128(v8).n128_f32[2]));
  *(float*)&v4 = v13;
  v9 = (*a3)[1];
  v14 = sqrtf(
      (float)(LANES128_OF(vmulq_f32(v9, v9)).n128_f32[1] +
              (float)(LANES128(v9).n128_f32[0] * LANES128(v9).n128_f32[0])) +
      (float)(LANES128(v9).n128_f32[2] * LANES128(v9).n128_f32[2]));
  v10 = (*a3)[2];
  v15 = sqrtf(
      (float)(LANES128_OF(vmulq_f32(v10, v10)).n128_f32[1] +
              (float)(LANES128(v10).n128_f32[0] * LANES128(v10).n128_f32[0])) +
      (float)(LANES128(v10).n128_f32[2] * LANES128(v10).n128_f32[2]));
  if (*(_BYTE*)(v3 + 208) == 1) {
    v16 = *(int32x4_t*)(v3 + 144);
    v17 = *(int8x16_t*)(v3 + 160);
    LANES128(v18).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v19 = *(int8x16_t*)(v3 + 176);
    v20 = *(_DWORD*)(v3 + 228);
    *(int8x8_t*)&LANES128(v18).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v22 = vmulq_f32(vmulq_f32(v16, v18), v21);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v23).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v24 = vsubq_f32(v22, vmulq_f32(vmulq_f32(v16, v21), v23));
    LANES128(v24).n128_u64[0] = LANES128_OF(vpaddq_f32(v24, v24)).n128_u64[0];
    v25 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1));
    v26 = vrecpeq_f32(v25);
    v27 = vmulq_f32(v26, vrecpsq_f32(v26, v25));
    v28 = vmulq_f32(v27, vrecpsq_f32(v27, v25));
    v29 = vzip1q_s32(v16, v19);
    v30 = vzip2q_s32(v16, v19);
    v31 = vzip1q_s32(v17, COERCE_AS(int32x4_t, 0LL));
    v32 = vzip2q_s32(v17, COERCE_AS(int32x4_t, 0LL));
    v33 = vzip2q_s32(v29, v31);
    v34 = vzip1q_s32(v30, v32);
    v35 = vzip1q_s32(v29, v31);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v36).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v38 = LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v37).n128_i8[8] =
        vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v30).n128_u64[1] = v38;
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v39 = vmulq_f32(v28, vmlsq_f32(vmulq_f32(v36, v30), v34, v37));
    *(int8x8_t*)&LANES128(v29).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v40 = vmulq_f32(v37, v29);
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v37).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v41 = vmlsq_f32(vmulq_f32(v34, v37), v29, v36);
    v42 = vceqzq_f32(v25);
    v43 = vmulq_f32(v28, vmlsq_f32(v40, v30, v37));
    v44 = vmulq_f32(v28, v41);
    v45 = vbicq_s8(v39, v42);
    v46 = vbicq_s8(v43, v42);
    v47 = vbicq_s8(v44, v42);
    v48 = vaddq_f32(
        vbicq_s8(
            vmlsq_laneq_f32(
                vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v39),
                                           COERCE_FLOAT(*(_OWORD*)(v3 + 192))),
                               v43, *(float32x2_t*)(v3 + 192), 1),
                v44, *(float32x4_t*)(v3 + 192), 2),
            v42),
        vmlaq_laneq_f32(vmlaq_lane_f32(vmulq_n_f32(v45, *(float*)&v197), v46,
                                       *(float32x2_t*)&v197, 1),
                        v47, *(float32x4_t*)&v197, 2));
    if ((v20 & 6) != 0) {
      v50 = vmulq_f32(v48, v48);
      v49 = vextq_s8(v50, v50, 8u);
      LANES128(v50).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
              .n64_u64[0];
      LANES128(v50).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v50).n128_f32[0] > 0x0.0p+0f) {
        HIDWORD(v51) = LANES128(v48).n128_u32[1];
        PSEUDO_LOW_LANE128(v50, n128_u32, 0);
        PSEUDO_LOW_LANE128(v49, n128_u32, *(_DWORD*)(v3 + 228) & 2);
        {
          __typeof__(v51) z_ = (__typeof__(v51)){0};
          LODWORD(z_) = 0;
          v51 = z_;
        }
        v52 = vbslq_s8(
            vdupq_lane_s32(
                COERCE_AS(int32x2_t,
                          LANES128_OF(vceqq_s32(v49, v50)).n128_u64[0]),
                0),
            COERCE_AS(int8x16_t, v51), v48);
        {
          __typeof__(v51) z_ = (__typeof__(v51)){0};
          LODWORD(z_) = *(_DWORD*)(v3 + 228) & 4;
          v51 = z_;
        }
        LANES64(v53).n64_u64[0] =
            LANES128_OF(vceqq_s32(COERCE_AS(int32x4_t, v51), v50)).n128_u64[0];
        v54 = v52;
        LANES128(v54).n128_u32[1] = 0;
        v55 = vbslq_s8(vdupq_lane_s32(v53, 0), v54, v52);
        if (*(_BYTE*)(v3 + 232) == 1) {
          v56 = vmuls_lane_f32(
              v14, COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1);
          *(float*)&v57 = vmuls_lane_f32(v15, v55, 2);
          LANES128(v55).n128_f32[0] = v13 * LANES128(v55).n128_f32[0];
          LANES128(v55).n128_f32[1] = v56;
          LANES128(v55).n128_u64[1] = v57;
        }
        v58 = *(int8x16_t*)(v12 + 336);
        LANES128(v59).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v60).n128_u64[0] = LANES128(v55).n128_u64[0];
        LANES128(v60).n128_u64[1] = LANES128(v59).n128_u64[0];
        v61 = vmulq_f32(v58, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v62).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v63).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
        *(int8x8_t*)&LANES128(v63).n128_i8[8] =
            vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v64 = vmulq_f32(v60, v63);
        LANES128(v60).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v65 = vmlaq_f32(vmulq_f32(v61, v62),
                        COERCE_AS(float32x4_t, GameData_1a83800), v64);
        LANES128(v64).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v60).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v61).n128_u64[0]), 1);
        LANES128(v59).n128_u64[1] = LANES128(v64).n128_u64[0];
        LANES128(v64).n128_u64[1] = LANES128(v55).n128_u64[0];
        LANES128(v66).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v66).n128_i8[8] =
            vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v61).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v67 = vmlsq_f32(vmlaq_f32(v65, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v64, v60)),
                        v66, v59);
        LANES128(v66).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v68).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v69).n128_u64[0] = *(_QWORD*)(v12 + 336);
        LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
        LANES128(v69).n128_u64[1] = LANES128(v61).n128_u64[0];
        *(int8x8_t*)&LANES128(v68).n128_i8[8] =
            vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v59).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v70 = vmlaq_f32(vmulq_f32(v66, v67),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v69, v68));
        LANES128(v68).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v59).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 1);
        LANES128(v61).n128_u64[1] = LANES128(v68).n128_u64[0];
        LANES128(v68).n128_u64[1] = LANES128(v69).n128_u64[0];
        LANES128(v58).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v58).n128_i8[8] =
            vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v71 = *(float32x4_t*)(v12 + 304);
        v72 = vmlsq_f32(vmlaq_f32(v70, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v68, v59)),
                        v58, v61);
        LANES128(v72).n128_u32[3] = 0;
        v73 = vaddq_f32(v71,
                        vmulq_n_f32(v72, COERCE_FLOAT(*(_OWORD*)(v3 + 236))));
        v74 = vsubq_f32(v71, v73);
        v75 = vmulq_f32(v74, v74);
        LANES128(v75).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          *(_QWORD*)(v12 + 304) = LANES128(v73).n128_u64[0];
          v76 = *(_OWORD*)(v12 + 304);
          *(_DWORD*)(v12 + 296) |= 1u;
          *((_QWORD*)&v76 + 1) = LANES128(v73).n128_u32[2];
          *(_OWORD*)(v12 + 304) = v76;
        }
      }
      v20 = *(_DWORD*)(v3 + 228);
    }
    if ((v20 & 1) != 0) {
      v198 = v4;
      v191 = v14;
      v192 = v15;
      v77 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, LANES128(v196).n128_f32[0]), v46,
                         COERCE_AS(float32x2_t, LANES128(v196).n128_u64[0]), 1),
          v47, v196, 2);
      v78 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, LANES128(v195).n128_f32[0]), v46,
                         COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]), 1),
          v47, v195, 2);
      v79 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, LANES128(v194).n128_f32[0]), v46,
                         COERCE_AS(float32x2_t, LANES128(v194).n128_u64[0]), 1),
          v47, v194, 2);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                memory_order_acquire) &
           1) == 0) {
        v180 = v79;
        v182 = v78;
        v185 = v77;
        v189 = v48;
        v176 = __cxa_guard_acquire((__int64)&GameData_21a6150);
        v79 = v180;
        v78 = v182;
        v77 = v185;
        v48 = v189;
        if (v176 != 0) {
          v177 = *((_QWORD*)GameData_212c548 + 1);
          *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
          *((_QWORD*)&GameData_21a6140 + 1) = v177;
          __cxa_guard_release((__int64)&GameData_21a6150);
          v79 = v180;
          v78 = v182;
          v77 = v185;
          v48 = v189;
        }
      }
      {
        __typeof__(v80) z_ = (__typeof__(v80)){0};
        LODWORD(z_) = 0;
        v80 = z_;
      }
      LANES128(v81).n128_u64[0] = 0;
      HIDWORD(v80) = DWORD1(GameData_21a6140);
      LANES128(v81).n128_u64[1] = DWORD2(GameData_21a6140);
      v202_.v202 = v77;
      v202_.v203 = v78;
      v202_.v204 = v79;
      v202_.v205 = v48;
      LANES128(v82).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v80),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v82).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v80), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v83).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v83).n128_i8[8] =
          vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v84 = vmulq_f32(vmulq_f32(v82, COERCE_AS(float32x4_t,
                                               (unsigned int)GameData_21a6140)),
                      v83);
      LANES128(v83).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v80),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v83).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v80), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v85).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v86 = vzip2q_s32(
          COERCE_AS(int32x4_t, (unsigned int)GameData_21a6140),
          vzip1q_s32(COERCE_AS(int32x4_t, v80), COERCE_AS(int32x4_t, 0)));
      *(int8x8_t*)&LANES128(v85).n128_i8[8] =
          vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v87 = vzip1q_s32(
          vzip2q_s32(COERCE_AS(int32x4_t, (unsigned int)GameData_21a6140), v81),
          COERCE_AS(int32x4_t, 0));
      v88 = LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
      LANES128(v89).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v90 = vsubq_f32(
          v84,
          vmulq_f32(vmulq_f32(v83, COERCE_AS(float32x4_t,
                                             (unsigned int)GameData_21a6140)),
                    v85));
      LANES128(v90).n128_u64[0] = LANES128_OF(vpaddq_f32(v90, v90)).n128_u64[0];
      v91 = vaddq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v90).n128_u64[0]), 0),
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v90).n128_u64[0]), 1));
      v92 = vrecpeq_f32(v91);
      v93 = vmulq_f32(v92, vrecpsq_f32(v92, v91));
      v94 = vrecpsq_f32(v93, v91);
      v95 = vceqzq_f32(v91);
      v96 = vmulq_f32(v93, v94);
      LANES128(v94).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v94).n128_i8[8] =
          vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v97).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v89).n128_i8[8] =
          vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v87).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v97).n128_u64[1] = v88;
      *(int8x8_t*)&LANES128(v87).n128_i8[8] =
          vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v98 = vmulq_f32(v96, vmlsq_f32(vmulq_f32(v94, v97), v87, v89));
      LANES128(v99).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(COERCE_AS(int8x16_t, (unsigned int)GameData_21a6140),
                        COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v99).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, (unsigned int)GameData_21a6140),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v100).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(COERCE_AS(int8x16_t, (unsigned int)GameData_21a6140),
                        COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v100).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, (unsigned int)GameData_21a6140),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v101 = vmulq_f32(v96, vmlsq_f32(vmulq_f32(v89, v99), v97, v100));
      v102 = vbicq_s8(v98, v95);
      v103 = vmulq_f32(v96, vmlsq_f32(vmulq_f32(v87, v100), v99, v94));
      LANES128(v96).n128_u64[0] = 0x8000000080000000LL;
      LANES128(v96).n128_u64[1] = 0x8000000080000000LL;
      v104 = vbicq_s8(v101, v95);
      v105 = vbicq_s8(v103, v95);
      v106 = vbicq_s8(vmlsq_f32(vmlsq_f32(vmulq_f32(v98, v96),
                                          COERCE_AS(float32x4_t, 0), v101),
                                COERCE_AS(float32x4_t, 0), v103),
                      v95);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v181 = v102;
        v183 = v104;
        v186 = v105;
        v190 = v106;
        v178 = __cxa_guard_acquire((__int64)&GameData_21a6130);
        v102 = v181;
        v104 = v183;
        v105 = v186;
        v106 = v190;
        if (v178 != 0) {
          v179 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v179;
          __cxa_guard_release((__int64)&GameData_21a6130);
          v102 = v181;
          v104 = v183;
          v105 = v186;
          v106 = v190;
        }
      }
      v202_.v202 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v102, LANES128(v202_.v202).n128_f32[0]), v104,
              COERCE_AS(float32x2_t, LANES128(v202_.v202).n128_u64[0]), 1),
          v105, v202_.v202, 2);
      v202_.v203 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v102, LANES128(v202_.v203).n128_f32[0]), v104,
              COERCE_AS(float32x2_t, LANES128(v202_.v203).n128_u64[0]), 1),
          v105, v202_.v203, 2);
      v202_.v204 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v102, LANES128(v202_.v204).n128_f32[0]), v104,
              COERCE_AS(float32x2_t, LANES128(v202_.v204).n128_u64[0]), 1),
          v105, v202_.v204, 2);
      v202_.v205 = vaddq_f32(
          v106,
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v102, *(float*)&GameData_21a6120),
                             v104, *(float32x2_t*)&GameData_21a6120, 1),
              v105, COERCE_AS(float32x4_t, GameData_21a6120), 2));
      Quat_624bc0((void*)((int8x16_t*)&v206), (__int64)&v202_.v202);
      v107 = vmuls_lane_f32(*((float*)&v206 + 1), *(float32x4_t*)&v206, 2);
      v108 = vmuls_lane_f32(*((float*)&v206 + 1), *(float32x2_t*)&v206, 1);
      v110 = atan2(
          (float)(v107 + (float)(*(float*)&v206 * *((float*)&v206 + 3))) +
              (float)(v107 + (float)(*(float*)&v206 * *((float*)&v206 + 3))),
          (LANES128_OF(vmulq_f32(*(float32x4_t*)&v206, *(float32x4_t*)&v206))
               .n128_f32[0] +
           v108) * -0x1.0000000000000p+1 +
              0x1.0000000000000p+0);
      *(float*)&v110 = *(double*)&v110;
      v187 = LODWORD(v110);
      v113 = v206;
      v111 = vmuls_lane_f32(-*(float*)&v113, *(float32x4_t*)&v113, 2) +
             (float)(*((float*)&v206 + 1) * *((float*)&v206 + 3));
      *(_QWORD*)&v112 = -0x1.0000000000000p+0;
      *(double*)&v113 = v111 + v111;
      if (*(double*)&v113 > 0x1.0000000000000p+0) {
        *(double*)&v113 = 0x1.0000000000000p+0;
      }
      if (*(double*)&v113 < -0x1.0000000000000p+0) {
        *(double*)&v113 = -0x1.0000000000000p+0;
      }
      v114 = asin(v113, v112);
      v115 = *(float32x4_t*)&v206;
      *(float*)&v114 = *(double*)&v114;
      v184 = LODWORD(v114);
      *(float*)&v114 =
          vmuls_lane_f32(LANES128(v115).n128_f32[0],
                         COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]), 1);
      v117 =
          atan2((float)(*(float*)&v114 +
                        (float)(*((float*)&v206 + 2) * *((float*)&v206 + 3))) +
                    (float)(*(float*)&v114 + (float)(*((float*)&v206 + 2) *
                                                     *((float*)&v206 + 3))),
                (v108 + vmuls_lane_f32(LANES128(v115).n128_f32[2], v115, 2)) *
                        -0x1.0000000000000p+1 +
                    0x1.0000000000000p+0);
      v118 = *(double*)&v117;
      LANES64(v119).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(COERCE_AS(float32x2_t, LODWORD(v118)),
                           COERCE_AS(float32x2_t, LODWORD(v118))),
                  vmul_f32(COERCE_AS(float32x2_t, __PAIR64__(v184, v187)),
                           COERCE_AS(float32x2_t, __PAIR64__(v184, v187)))))
              .n64_u64[0];
      if (LANES64_OF(vpadd_f32(v119, v119)).n64_f32[0] > 0x0.0p+0f) {
        LANES128(v120).n128_u64[0] = __PAIR64__(v184, v187);
        LANES128(v120).n128_u64[1] = LODWORD(v118);
        v188 = vmulq_n_f32(v120, COERCE_FLOAT(*(_OWORD*)(v3 + 236)));
        v121 = cos(LANES128(v188).n128_f32[2] * 0x1.0000000000000p-1);
        v122 = sin(LANES128(v188).n128_f32[2] * 0x1.0000000000000p-1);
        v123 = cos(LANES128(v188).n128_f32[0] * 0x1.0000000000000p-1);
        v124 = sin(LANES128(v188).n128_f32[0] * 0x1.0000000000000p-1);
        v125 = LANES128(v188).n128_f32[1] * 0x1.0000000000000p-1;
        v126 = cos(v125);
        v127 = sin(v125);
        v128 = PSEUDO_UNFUSED(v122 * v124 * v126) +
               PSEUDO_UNFUSED(v121 * v123) * v127;
        LANES128(v129).n128_f32[0] =
            v121 * v124 * v126 - PSEUDO_UNFUSED(v127 * (v122 * v123));
        *(float*)&v128 = v128;
        *(float*)&v130 = PSEUDO_UNFUSED(v122 * v124 * v127) +
                         PSEUDO_UNFUSED(v121 * v123) * v126;
        *(float*)&v127 =
            v122 * v123 * v126 - PSEUDO_UNFUSED(v127 * (v121 * v124));
        LANES128(v129).n128_u32[1] = LODWORD(v128);
        LANES128(v131).n128_u64[0] = LANES128(v129).n128_u64[0];
        LANES128(v131).n128_u64[1] = __PAIR64__(v130, LODWORD(v127));
        v132 = *(int8x16_t*)(v12 + 336);
        LANES128(v133).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v129).n128_u64[1] = LANES128(v131).n128_u64[1];
        LANES128(v134).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v135).n128_u64[0] = *(_QWORD*)(v12 + 336);
        LANES128(v133).n128_u64[1] = LANES128(v133).n128_u64[0];
        LANES128(v135).n128_u64[1] = LANES128(v134).n128_u64[0];
        v136 = vmulq_f32(v133, v131);
        LANES128(v131).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v131).n128_i8[8] =
            vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v137 = vmulq_f32(v135, v131);
        LANES128(v135).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v138 = vmlaq_f32(v136, COERCE_AS(float32x4_t, GameData_1a83800), v137);
        LANES128(v137).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v132, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v135).n128_i8[8] =
            vdup_lane_s32(*(int32x2_t*)&v128, 0);
        LANES128(v134).n128_u64[1] = LANES128(v137).n128_u64[0];
        LANES128(v137).n128_u64[1] = *(_QWORD*)(v12 + 336);
        LANES128(v139).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v139).n128_i8[8] =
            vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v140 =
            vmlsq_f32(vmlaq_f32(v138, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v137, v135)),
                      v139, v134);
        v201 = v140;
        LANES64(v141).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v132, v140)))).n64_u64[0];
        if ((LANES64(v141).n64_u8[0] & 1) != 0 ||
            (LANES64(v141).n64_u8[2] & 1) != 0 ||
            (LANES64(v141).n64_u8[4] & 1) != 0 ||
            (LANES64(v141).n64_u8[6] & 1) != 0) {
          v142 = *(_DWORD*)(v12 + 296) | 1;
          *(_QWORD*)(v12 + 336) = LANES128(v140).n128_u64[0];
          *(_QWORD*)(v12 + 344) =
              LANES128_OF(vextq_s8(v140, v140, 8u)).n128_u64[0];
          *(_DWORD*)(v12 + 296) = v142;
          math_622ac0((void*)(&v206), (float32x2_t*)&v201);
          v143 = DWORD2(v206);
          *(_QWORD*)(v12 + 320) = *(_QWORD*)&v206;
          v144 = *(_OWORD*)(v12 + 320);
          *((_QWORD*)&v144 + 1) = v143;
          *(_OWORD*)(v12 + 320) = v144;
        }
      }
      v4 = v198;
      v14 = v191;
      v15 = v192;
    }
    v7 = *(_QWORD*)(v3 + 8);
  }
  *((float*)&v4 + 1) = v14;
  if (v12 != v7) {
    v199 = v4;
    v193 = v15;
    wld_a8b5a0(v12);
    v15 = v193;
    v4 = v199;
    v7 = *(_QWORD*)(v3 + 8);
  }
  *((float*)&v4 + 2) = v15;
  v200 = v4;
  wld_a8b5a0(v7);
  v145 = *(float32x4_t**)(v3 + 24);
  v146 = *(float32x4_t**)(v3 + 8);
  v147 = vsubq_f32(v145[27], v146[27]);
  v148 = vmulq_f32(v147, v147);
  LANES128(v148).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v148, v148, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    goto LABEL_33;
  }
  v149 = vsubq_f32(v145[28], v146[28]);
  v150 = vmulq_f32(v149, v149);
  LANES128(v150).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v150, v150, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f ||
      (v151 = vsubq_f32(v145[29], v146[29]), v152 = vmulq_f32(v151, v151),
       LANES128(v152).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v152, v152, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0])))
               .n64_f32[0] != 0x0.0p+0f) ||
      (v153 = vsubq_f32(v145[30], v146[30]), v154 = vmulq_f32(v153, v153),
       LANES128(v154).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v154, v154, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0])))
               .n64_f32[0] != 0x0.0p+0f)) {
  LABEL_33:
    v155 = LANES128(v146[30]).n128_u64[1];
    LANES128(v145[29]).n128_u64[1] = LANES128(v146[29]).n128_u64[1];
    LANES128(v145[30]).n128_u64[1] = v155;
    v156 = LANES128(v146[28]).n128_u64[1];
    LANES128(v145[27]).n128_u64[1] = LANES128(v146[27]).n128_u64[1];
    LANES128(v145[28]).n128_u64[1] = v156;
    v157 = LANES128(v146[27]).n128_u64[0];
    LANES128(v145[28]).n128_u64[0] = LANES128(v146[28]).n128_u64[0];
    LANES128(v145[27]).n128_u64[0] = v157;
    v158 = LANES128(v146[29]).n128_u64[0];
    LANES128(v145[30]).n128_u64[0] = LANES128(v146[30]).n128_u64[0];
    LANES128(v145[29]).n128_u64[0] = v158;
    LANES128(v145[31]).n128_u8[8] = 1;
    LANES128(v145[32]).n128_u32[0] = 3;
    LANES128(v145[32]).n128_u8[4] = 1;
    v146 = *(float32x4_t**)(v3 + 8);
  }
  LANES64(v159).n64_u32[0] = 0;
  LANES128(v160).n128_u64[0] = 0;
  v161 = v146[19];
  v162 = v146[21];
  LANES64(v159).n64_u32[1] = DWORD1(v200);
  LANES128(v160).n128_u64[1] = DWORD2(v200);
  LANES128(v162).n128_u32[3] = 0;
  LANES128(v163).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v162, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v164).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v162).n128_u64[0])))
          .n64_u64[0];
  LANES128(v165).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v162, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v166 = LANES64_OF(vqtbl1_s8(v162, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
             .n64_u64[0];
  *(int8x8_t*)&LANES128(v163).n128_i8[8] =
      vqtbl1_s8(v162, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v164).n128_u64[1] = LANES128(v163).n128_u64[1];
  LANES128(v165).n128_u64[1] = v166;
  v167 = vmulq_f32(v163, v162);
  v168 = vmulq_f32(v164, v164);
  v207.val[1] = vmulq_f32(v165, v165);
  v208.val[1] = vaddq_f32(v167, v167);
  LANES128(v162).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v162, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v162).n128_u64[1] = v166;
  v207.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v207.val[1], v207.val[1]), vaddq_f32(v168, v168)));
  v169 = vmulq_laneq_f32(v162, v146[21], 3);
  v170 = vaddq_f32(v169, v169);
  v209.val[0] = vaddq_f32(v208.val[1], v170);
  v209.val[1] = vsubq_f32(v208.val[1], v170);
  LANES128(v208.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v209, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v207.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v209, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v208.val[1]).n128_i8[8] =
      vqtbl2_s8(v209, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v207.val[1]).n128_i8[8] =
      vqtbl2_s8(v209, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v208.val[0] = v207.val[0];
  LANES128(v170).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v170).n128_i8[8] =
      vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v209.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v209.val[0]).n128_i8[8] =
      vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v208.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v208.val[0]).n128_i8[8] =
      vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v207.val[0] = vmlaq_f32(vmlaq_f32(vmulq_n_f32(v170, *(float*)&v200),
                                    COERCE_AS(float32x4_t, 0), v209.val[0]),
                          COERCE_AS(float32x4_t, 0), v208.val[0]);
  v171 = vmlaq_f32(vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v170),
                                  v209.val[0], v159, 1),
                   COERCE_AS(float32x4_t, 0), v208.val[0]);
  v172 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v170),
                                   COERCE_AS(float32x4_t, 0), v209.val[0]),
                         v208.val[0], v160, 2);
  v173 =
      vaddq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v170, COERCE_AS(float32x4_t, 0)),
                                    COERCE_AS(float32x4_t, 0), v209.val[0]),
                          COERCE_AS(float32x4_t, 0), v208.val[0]),
                COERCE_AS(float32x4_t, 0));
  LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
  v174 = *a3;
  *v174 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v207.val[0]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v207.val[0]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v207.val[0], 2);
  v174[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v171).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v171).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), v171, 2);
  v174[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v172).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), v172, 2);
  v174[3] = vaddq_f32(
      v161,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v173).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v173, 2));
  if ((*(_BYTE*)(v3 + 208) & 1) == 0) {
    *(_BYTE*)(v3 + 208) = 1;
  }
  *(float32x4_t*)(v3 + 144) = v196;
  *(float32x4_t*)(v3 + 160) = v195;
  *(float32x4_t*)(v3 + 176) = v194;
  *(long double*)(v3 + 192) = v197;
  return v197;
}

void llvm_libcxx_21_libcxx_include___functional_c0e160(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  int v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64** v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  _QWORD* v47;
  _QWORD* v48;
  unsigned __int64 v49;
  float v50;
  float v51;
  _BOOL8 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 primeEm;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  _QWORD* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;
  struct {
    __int64 v88;
    unsigned __int64 v89;
    char* v90;
    __int64 v91;
  } v88_;
  struct {
    __int64 v92;
    unsigned __int64 v93;
    char* v94;
  } v92_;

  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(*(_QWORD*)a2 + 592LL) != 0) {
    v3 = ElfFile_631220((__int64*)(*(_QWORD*)a2 + 800LL),
                        "world::data::map::crowd::s_Data");
    v4 = v3;
    if (*(_DWORD*)(v3 + 4) == 0) {
      goto LABEL_169;
    }
    v5 = 0;
    v82 = (_QWORD*)(v2 + 16);
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    v83 = v3;
    while (1) {
      v7 = *(const char**)(*(_QWORD*)(v4 + 24) + 8 * v5);
      v8 = strlen(v7);
      if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_171:
        String_60a1d0();
      }
      v9 = v8;
      if (v8 >= 0x17) {
        break;
      }
      v10 = (char*)&v92_.v92 + 1;
      LOBYTE(v92_.v92) = 2 * v8;
      if (v8 != 0) {
        goto LABEL_12;
      }
    LABEL_13:
      v10[v9] = 0;
      GameRoutine_1a09ce0((__int64)&v92_.v92, ".bntx", 5u);
      if ((v92_.v92 & 1) != 0) {
        v12 = v92_.v94;
      }
      else {
        v12 = (char*)&v92_.v92 + 1;
      }
      if (v12 == nullptr ||
          (v13 = *snd_g_fileIndex_ptr[0], v14 = strlen(v12),
           (fs_6360e0(v13, (__int64)v12, v14, 0, 0) & 1) == 0)) {
        v24 = 0;
        *(_BYTE*)(v2 + 100) = 0;
        if ((v92_.v92 & 1) != 0) {
          goto LABEL_163;
        }
        goto LABEL_167;
      }
      v15 = *(_QWORD*)(v4 + 24);
      v86_.v86 = 0;
      v86_.v87 = 0;
      if ((v92_.v92 & 1) != 0) {
        v16 = v92_.v93;
      }
      else {
        v16 = (unsigned __int64)(unsigned __int8)v92_.v92 >> 1;
      }
      if ((v92_.v92 & 1) != 0) {
        v17 = (char*)v92_.v94;
      }
      else {
        v17 = (char*)&v92_.v92 + 1;
      }
      v18 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
          **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 40LL))(
          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v17, v16, &v86_.v86);
      v19 = *(const char**)(v15 + 8 * v5);
      v20 = v18;
      v21 = strlen(v19);
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_171;
      }
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v21 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate(*v6, v25, 16, 0);
        v88_.v89 = v22;
        v88_.v90 = v23;
        v88_.v88 = v25 | 1;
      }
      else {
        v23 = (char*)&v88_.v88 + 1;
        LOBYTE(v88_.v88) = 2 * v21;
        if (v21 == 0) {
          goto LABEL_35;
        }
      }
      memmove((__int64)v23, (__int64)v19, v22);
    LABEL_35:
      v23[v22] = 0;
      v88_.v91 = v20;
      v26 = v88_.v89;
      v27 = (__int64)v88_.v90;
      v28 = v88_.v88 & 1;
      if (v28 != 0) {
        v29 = v88_.v90;
      }
      else {
        v29 = (char*)&v88_.v88 + 1;
      }
      if ((v88_.v88 & 1) != 0) {
        v30 = v88_.v89;
      }
      else {
        v30 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
      }
      v31 = std___1___hash_memory((__int64)v29, v30);
      v32 = *(_QWORD*)(v2 + 8);
      v85 = v31;
      if (v32 == 0) {
      LABEL_78:
        v6 = (__int64*)fw_memory_g_heap_manager_ptr;
        v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
        v48 = v47;
        *v47 = 0;
        v47[1] = v85;
        if (v28 != 0) {
          fw_text_String_CopyTerminated(v47 + 2, v27, v26);
        }
        else {
          v49 = v88_.v89;
          v47[2] = v88_.v88;
          v47[3] = v49;
          v47[4] = v88_.v90;
        }
        v48[5] = v20;
        v50 = *(float*)(v2 + 32);
        v51 = (float)(unsigned __int64)(*(_QWORD*)(v2 + 24) + 1LL);
        if (v32 != 0 && !((float)(v50 * (float)v32) < v51)) {
          goto LABEL_147;
        }
        v52 = v32 < 3 || (v32 & (v32 - 1)) != 0;
        v53 = v52 | (2 * v32);
        v54 = vcvtps_u64_f32(v51 / v50);
        if (v53 <= v54) {
          primeEm = v54;
        }
        else {
          primeEm = v53;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v56 = *(_QWORD*)(v2 + 8);
        if (primeEm <= v56) {
          if (primeEm < v56) {
            v61 = vcvtps_u64_f32((float)*(unsigned __int64*)(v2 + 24) /
                                 *(float*)(v2 + 32));
            if (v56 < 3 || (v56 & (v56 - 1)) != 0) {
              v61 = std___1___next_prime(v61);
            }
            else {
              v62 = 1LL << ((-(char)__clz((unsigned long long)(v61 - 1))) & 63);
              if (v61 >= 2) {
                v61 = v62;
              }
            }
            if (primeEm <= v61) {
              primeEm = v61;
            }
            if (primeEm < v56) {
              if (primeEm != 0) {
                goto LABEL_94;
              }
              v74 = *(_QWORD*)v2;
              *(_QWORD*)v2 = 0;
              if (v74 != 0) {
                v75 = 128;
                if (*(_QWORD*)(*v6 + 200) == 0) {
                  v75 = 56;
                }
                nn_mem_StandardAllocator_Free(*v6 + v75, v74);
              }
              *(_QWORD*)(v2 + 8) = 0;
            }
          }
          goto LABEL_143;
        }
      LABEL_94:
        if (primeEm >> 61 != 0) {
          GameRoutine_60a210();
        }
        v57 = fw_memory_HeapManager_Allocate(*v6, 8 * primeEm, 16, 0);
        v58 = *(_QWORD*)v2;
        *(_QWORD*)v2 = v57;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v59, v58);
        }
        *(_QWORD*)(v2 + 8) = primeEm;
        if (primeEm >= 8) {
          v60 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)v2 + 8 * v60 + 48) = 0;
            v63 = *(_QWORD*)v2 + 8 * v60;
            v60 += 8;
            *(_QWORD*)(v63 + 56) = 0;
          } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v60);
        }
        else {
          v60 = 0;
        }
        v64 = primeEm & 7;
        if ((primeEm & 7) != 0) {
          v65 = 8 * v60;
          do {
            --v64;
            *(_QWORD*)(*(_QWORD*)v2 + v65) = 0;
            v65 += 8;
          } while (v64 != 0);
        }
        v66 = (_QWORD*)*v82;
        if (*v82 == 0) {
          goto LABEL_143;
        }
        v67 = v66[1];
        v68 = primeEm - 1;
        if ((primeEm & (primeEm - 1)) == 0) {
          v71 = v67 & v68;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v71) = v82;
          while (1) {
            v72 = (_QWORD*)*v66;
            if (*v66 == 0) {
              break;
            }
            v73 = v72[1] & v68;
            if (v73 == v71) {
              v66 = (_QWORD*)*v66;
            }
            else if (*(_QWORD*)(*(_QWORD*)v2 + 8 * v73) != 0) {
              *v66 = *v72;
              *v72 = **(_QWORD**)(*(_QWORD*)v2 + 8 * v73);
              **(_QWORD**)(*(_QWORD*)v2 + 8 * v73) = v72;
            }
            else {
              *(_QWORD*)(*(_QWORD*)v2 + 8 * v73) = v66;
              v66 = v72;
              v71 = v73;
            }
          }
          goto LABEL_143;
        }
        if (v67 >= primeEm) {
          v67 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)v2 + 8 * v67) = v82;
        v69 = (_QWORD*)*v66;
        if (*v66 == 0) {
        LABEL_143:
          v32 = *(_QWORD*)(v2 + 8);
          if ((v32 & (v32 - 1)) != 0) {
            v22 = v85;
            if (v85 >= v32) {
              v22 = v85 % v32;
            }
          }
          else {
            v22 = (v32 - 1) & v85;
          }
        LABEL_147:
          v76 = *(_QWORD*)v2;
          v77 = *(_QWORD**)(*(_QWORD*)v2 + 8 * v22);
          if (v77 != nullptr) {
            *v48 = *v77;
            *v77 = v48;
          }
          else {
            *v48 = *v82;
            *v82 = v48;
            *(_QWORD*)(v76 + 8 * v22) = v82;
            if (*v48 != 0) {
              v78 = *(_QWORD*)(*v48 + 8LL);
              if ((v32 & (v32 - 1)) != 0) {
                if (v78 >= v32) {
                  v78 %= v32;
                }
              }
              else {
                v78 &= v32 - 1;
              }
              *(_QWORD*)(*(_QWORD*)v2 + 8 * v78) = v48;
            }
          }
          ++*(_QWORD*)(v2 + 24);
          v4 = v83;
          if ((v88_.v88 & 1) != 0) {
            goto LABEL_156;
          }
          goto LABEL_160;
        }
        while (2) {
          v70 = v69[1];
          if (v70 >= primeEm) {
            v70 %= primeEm;
          }
          if (v70 != v67) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 8 * v70) == 0) {
              *(_QWORD*)(*(_QWORD*)v2 + 8 * v70) = v66;
            LABEL_120:
              v66 = v69;
              v69 = (_QWORD*)*v69;
              v67 = v70;
              if (v69 == nullptr) {
                goto LABEL_143;
              }
              continue;
            }
            *v66 = *v69;
            *v69 = **(_QWORD**)(*(_QWORD*)v2 + 8 * v70);
            **(_QWORD**)(*(_QWORD*)v2 + 8 * v70) = v69;
            v69 = v66;
          }
          break;
        }
        v70 = v67;
        goto LABEL_120;
      }
      v84 = v26;
      v33 = v32 - 1;
      v34 = v31;
      if ((v32 & (v32 - 1)) != 0) {
        v22 = v31;
        if (v31 >= v32) {
          v22 = v31 % v32;
        }
      }
      else {
        v22 = v33 & v31;
      }
      v35 = *(__int64***)(*(_QWORD*)v2 + 8 * v22);
      if (v35 == nullptr) {
        goto LABEL_76;
      }
      v81 = v27;
      v36 = *v35;
      if (*v35 == nullptr) {
      LABEL_75:
        v27 = v81;
      LABEL_76:
        v26 = v84;
        goto LABEL_78;
      }
      if ((v32 & v33) != 0) {
        v26 = v84;
        while (1) {
          v37 = v36[1];
          if (v37 == v34) {
            v38 = *((unsigned __int8*)v36 + 16);
            v39 = v36[3];
            if ((v38 & 1) == 0) {
              v39 = v38 >> 1;
            }
            if (v39 == v30) {
              v40 = (v38 & 1) != 0 ? v36[4] : (__int64)v36 + 17;
              v41 = memcmp(v40, (__int64)v29, v30);
              v34 = v85;
              if (v41 == 0) {
                goto LABEL_73;
              }
            }
          }
          else {
            if (v37 >= v32) {
              v37 %= v32;
            }
            if (v37 != v22) {
            LABEL_77:
              v27 = v81;
              goto LABEL_78;
            }
          }
          v36 = (__int64*)*v36;
          if (v36 == nullptr) {
            goto LABEL_77;
          }
        }
      }
      while (1) {
        v42 = v36[1];
        if (v42 != v34) {
          if ((v42 & v33) != v22) {
            goto LABEL_75;
          }
          goto LABEL_64;
        }
        v43 = *((unsigned __int8*)v36 + 16);
        v44 = v36[3];
        if ((v43 & 1) == 0) {
          v44 = v43 >> 1;
        }
        if (v44 == v30) {
          v45 = (v43 & 1) != 0 ? v36[4] : (__int64)v36 + 17;
          v46 = memcmp(v45, (__int64)v29, v30);
          v34 = v85;
          if (v46 == 0) {
            break;
          }
        }
      LABEL_64:
        v36 = (__int64*)*v36;
        if (v36 == nullptr) {
          goto LABEL_75;
        }
      }
    LABEL_73:
      v6 = (__int64*)fw_memory_g_heap_manager_ptr;
      v4 = v83;
      if (v28 != 0) {
      LABEL_156:
        if (v88_.v90 != nullptr) {
          v79 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v79, (__int64)v88_.v90);
        }
      }
    LABEL_160:
      if (v86_.v87 != 0) {
        std___1___shared_weak_count___release_weak(v86_.v87);
      }
      v24 = 1;
      if ((v92_.v92 & 1) != 0) {
      LABEL_163:
        if (v92_.v94 != nullptr) {
          v80 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v80 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v80, (__int64)v92_.v94);
        }
      }
    LABEL_167:
      if ((v24 & 1) != 0 && ++v5 < (unsigned __int64)*(unsigned int*)(v4 + 4)) {
        continue;
      }
    LABEL_169:
      *(_QWORD*)(v2 + 88) = v4;
      *(_DWORD*)(v2 + 96) = 2;
      return;
    }
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (const char*)fw_memory_HeapManager_Allocate(*v6, v11, 16, 0);
    v92_.v93 = v9;
    v92_.v94 = v10;
    v92_.v92 = v11 | 1;
  LABEL_12:
    memmove((__int64)v10, (__int64)v7, v9);
    goto LABEL_13;
  }
  *(_BYTE*)(v2 + 100) = 0;
}

void llvm_libcxx_21_libcxx_include___functional_f19a80(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  float v6;
  unsigned __int64 v7;
  float32x4_t v8;
  float v9;
  __int64 v10;
  float32x4_t v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  __int64 (**v14)();
  __int64* v15;
  __int64 v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t* v19;
  float32x4_t* i;
  long double v21;
  unsigned __int8 v22;
  unsigned __int8 v23;
  __int16 v24;
  __int64 v25;
  unsigned __int8 v26;
  unsigned __int8 v27;
  long double v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  void (***v33)(_QWORD);
  __int64 (**v34)();
  void (***v35)(_QWORD);
  void (**v36)(_QWORD);
  bool v37;
  unsigned __int8* v38;
  char* v39;
  __int64 (**v40)();
  __int64* v41;
  __int64* v42;
  __int64 v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t* v46;
  float32x4_t* j;
  long double v48;
  unsigned __int8 v49;
  unsigned __int8 v50;
  __int16 v51;
  __int64 v52;
  unsigned __int8 v53;
  unsigned __int8 v54;
  long double v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 (**v60)();
  void (***v61)(_QWORD);
  __int64* v62;
  void (***v63)(_QWORD);
  void (**v64)(_QWORD);
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64* v68;
  float v69;
  float v70;
  float v71;
  unsigned __int64 v72;
  float32x4_t v73;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
  } v74_;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;
  struct {
    _QWORD v78[4];
    _QWORD* v79;
  } v78_;
  struct {
    _QWORD v80[4];
    _QWORD* v81;
  } v80_;
  struct {
    float32x4_t v82;
    __int64* v83;
    char gap296_[8];
    float32x4_t* v84;
    char gap312_[56];
    float32x4_t* v85;
    __int64 v86;
    char gap384_[8];
    __int64 v87;
    __int64 v88;
    char gap408_[40];
    long double v89;
    char gap464_[52];
    char v90;
    char gap517_[18];
    char v91;
  } v82_;
  struct {
    unsigned __int8* v92;
    unsigned __int8* v93;
    __int64 v94;
  } v92_;
  struct {
    unsigned __int8* v95;
    __int64 v96;
    __int64 v97;
  } v95_;

  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  if (*a2 == 0) {
    return;
  }
  if (*(_QWORD*)(v2 + 392) == 0) {
    return;
  }
  if ((*(_BYTE*)(v2 + 417) & 0x1C) != 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 8);
  if ((*(float (**)(__int64))(*(_QWORD*)(v2 + 152) + 16LL))(v2 + 152) <=
          0x0.0p+0f ||
      *(_WORD*)(v2 + 1964) == 0) {
    return;
  }
  v4 = *(_DWORD*)(v2 + 592);
  v5 = *(char*)(v2 + 585);
  v6 = (float)(unsigned int)(v4 - 1) * 0x1.4000000000000p+1f;
  if (v4 <= 0) {
    v6 = 0x0.0p+0f;
  }
  v7 = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(unsigned int)(v5 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v6);
  v70 = (float)((float)((float)((float)(unsigned int)(v5 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v6;
  v71 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 584) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v6;
  LANES128(v8).n128_u64[0] = LODWORD(v71);
  v67 = v7;
  LANES128(v8).n128_u64[1] = v7;
  v82_.v82 = v8;
  v9 = Unit_6c7fa0(v2, (__int64)&v82_.v82),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v95_.v96 = 0;
  v95_.v97 = 0;
  v69 = v9;
  v92_.v94 = 0;
  v95_.v95 = nullptr;
  LANES128(v82_.v82).n128_u64[0] = (unsigned __int64)GameData_1ff2750;
  LANES128(v82_.v82).n128_u64[1] = (unsigned __int64)&v92_.v92;
  v92_.v92 = nullptr;
  v92_.v93 = nullptr;
  v82_.v83 = (__int64*)&v95_.v95;
  v82_.v84 = &v82_.v82;
  v72 = __PAIR64__(LODWORD(v9), LODWORD(v71));
  GameHr_8f7c50((unsigned __int8*)(v2 + 1960), v2, (__int64)&v82_.v82),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v82_.v84 == &v82_.v82) {
    v10 = 32;
    goto LABEL_12;
  }
  if (v82_.v84 != nullptr) {
    v10 = 40;
  LABEL_12:
    (*(void (**)(void*))(LANES128(*(v82_.v84)).n128_u64[0] + v10))(
        (void*)v82_.v84),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LANES128(v11).n128_u64[0] = v72;
  v12 = v95_.v95;
  v13 = (unsigned __int8*)v95_.v96;
  LANES128(v11).n128_u64[1] = v67;
  v73 = v11;
  if (v95_.v95 != (unsigned __int8*)v95_.v96) {
    v14 = GameData_1ff27d0;
    v68 = GameData_212f8d8[0] + 2;
    v15 = GameData_212f8b0[0] + 2;
    do {
      game_map_f54910((__int64)&v82_.v82),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v17 = vsubq_f32(v73, *(float32x4_t*)&v82_.v89);
      LANES128(v82_.v82).n128_u64[0] = (unsigned __int64)v68;
      v82_.v90 = 0;
      v18 = vmulq_f32(v17, v17);
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v19 = v82_.v85;
        for (i = (float32x4_t*)v82_.v86; v19 != i; v19 += 4) {
          v19[1] = vsubq_f32(v19[1], v17);
        }
      }
      *(_QWORD*)&v21 = __PAIR64__(LODWORD(v69), LODWORD(v71));
      *((_QWORD*)&v21 + 1) = LODWORD(v70);
      v82_.v89 = v21;
      v22 = *v12;
      v23 = v12[1];
      v80_.v80[0] = v14;
      v80_.v80[1] = &v82_.v91;
      v80_.v80[2] = &v95_.v95;
      v80_.v81 = v80_.v80;
      v24 = MapDrawConst_fcbcc0(v21, v3, 1, v22, v23, (__int64)v80_.v80, 1),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v80_.v81 == v80_.v80) {
        v25 = 32;
      }
      else {
        if (v80_.v81 == nullptr) {
          goto LABEL_27;
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*v80_.v81 + v25))((__int64)v80_.v81),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_27:
      GameHr_fcacb0(v3, (__int64)&v82_.v82, 1, (unsigned int)(char)*v12,
                    (unsigned int)(char)v12[1], v24, (__int64)GameData_212c958),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v26 = *v12;
      v27 = v12[1];
      v78_.v78[2] = &v95_.v95;
      v78_.v79 = v78_.v78;
      v78_.v78[0] = GameData_1ff2850;
      v78_.v78[1] = &v82_.v91;
      v29 = MapDrawConst_fcbcc0(v28, v3, 1, v26, v27, (__int64)v78_.v78, 0),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v78_.v79 == v78_.v78) {
        v30 = 32;
        goto LABEL_31;
      }
      if (v78_.v79 != nullptr) {
        v30 = 40;
      LABEL_31:
        (*(void (**)(__int64))(*v78_.v79 + v30))((__int64)v78_.v79),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      MapDrawConst_fcc4f0(v3, v3 + 64, 1, &v82_.v82, (unsigned int)(char)*v12,
                          (unsigned int)(char)v12[1], v29),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      MapPanelRage_f1a220((__int64**)(v3 + 16), (__int64)&v82_.v82),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LANES128(v82_.v82).n128_u64[0] = (unsigned __int64)v15;
      if (v82_.v87 != 0) {
        v82_.v88 = v82_.v87;
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v82_.v87),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v32 = (__int64)v82_.v85;
      if (v82_.v85 != nullptr) {
        if (v82_.v85 == (float32x4_t*)v82_.v86) {
          goto LABEL_15;
        }
        v33 = (void (***)(_QWORD))(v82_.v86 - 64),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v34 = v14;
        v35 = (void (***)(_QWORD))(v82_.v86 - 64),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
        do {
          v36 = *v35;
          v35 -= 8;
          (*v36)(v33);
          v37 = v33 == (void (***)(_QWORD))v32,
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v33 = v35;
        } while (!v37);
        v14 = v34;
        v82_.v86 = v32;
        v32 = (__int64)v82_.v85;
        if (v82_.v85 != nullptr) {
        LABEL_15:
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v32),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v12 += 4;
    } while (v12 != v13);
  }
  v38 = v92_.v92;
  v39 = (char*)v92_.v93;
  if (v92_.v92 == v92_.v93) {
    goto LABEL_74;
  }
  v40 = GameData_1ff28d0;
  v41 = GameData_212f8d8[0] + 2;
  v42 = GameData_212f8b0[0] + 2;
  do {
    game_map_f54910((__int64)&v82_.v82),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LANES128(v82_.v82).n128_u64[0] = (unsigned __int64)v41;
    v44 = vsubq_f32(v73, *(float32x4_t*)&v82_.v89);
    v82_.v90 = 0;
    v45 = vmulq_f32(v44, v44);
    LANES128(v45).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_f32[0] > 0x0.0p+0f) {
      v46 = v82_.v85;
      for (j = (float32x4_t*)v82_.v86; v46 != j; v46 += 4) {
        v46[1] = vsubq_f32(v46[1], v44);
      }
    }
    v82_.v90 = 1;
    *(_QWORD*)&v48 = __PAIR64__(LODWORD(v69), LODWORD(v71));
    *((_QWORD*)&v48 + 1) = LODWORD(v70);
    v82_.v89 = v48;
    v49 = *v38;
    v50 = v38[1];
    v76_.v76[0] = v40;
    v76_.v76[1] = &v82_.v91;
    v76_.v76[2] = &v92_.v92;
    v76_.v77 = v76_.v76;
    v51 = MapDrawConst_fcbcc0(v48, v3, 1, v49, v50, (__int64)v76_.v76, 1),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v76_.v77 == v76_.v76) {
      v52 = 32;
    }
    else {
      if (v76_.v77 == nullptr) {
        goto LABEL_57;
      }
      v52 = 40;
    }
    (*(void (**)(__int64))(*v76_.v77 + v52))((__int64)v76_.v77),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_57:
    GameHr_fcacb0(v3, (__int64)&v82_.v82, 1, (unsigned int)(char)*v38,
                  (unsigned int)(char)v38[1], v51, (__int64)GameData_212c958),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v53 = *v38;
    v54 = v38[1];
    v74_.v74[0] = GameData_1ff2950;
    v74_.v74[1] = &v82_.v91;
    v74_.v75 = v74_.v74;
    v74_.v74[2] = &v92_.v92;
    v56 = MapDrawConst_fcbcc0(v55, v3, 1, v53, v54, (__int64)v74_.v74, 0),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v74_.v75 == v74_.v74) {
      v57 = 32;
    }
    else {
      if (v74_.v75 == nullptr) {
        goto LABEL_62;
      }
      v57 = 40;
    }
    (*(void (**)(__int64))(*v74_.v75 + v57))((__int64)v74_.v75),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_62:
    MapDrawConst_fcc4f0(v3, v3 + 64, 1, &v82_.v82, (unsigned int)(char)*v38,
                        (unsigned int)(char)v38[1], v56),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    MapPanelRage_f1a220((__int64**)(v3 + 40), (__int64)&v82_.v82),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LANES128(v82_.v82).n128_u64[0] = (unsigned __int64)v42;
    if (v82_.v87 != 0) {
      v82_.v88 = v82_.v87;
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v82_.v87),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v59 = (__int64)v82_.v85;
    if (v82_.v85 != nullptr) {
      if (v82_.v85 == (float32x4_t*)v82_.v86) {
        goto LABEL_45;
      }
      v60 = v40;
      v61 = (void (***)(_QWORD))(v82_.v86 - 64),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v62 = v41;
      v63 = (void (***)(_QWORD))(v82_.v86 - 64),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      do {
        v64 = *v63;
        v63 -= 8;
        (*v64)(v61);
        v37 = v61 == (void (***)(_QWORD))v59,
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v61 = v63;
      } while (!v37);
      v41 = v62;
      v40 = v60;
      v82_.v86 = v59;
      v59 = (__int64)v82_.v85;
      if (v82_.v85 != nullptr) {
      LABEL_45:
        v43 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v59),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v38 += 4;
  } while (v38 != (unsigned __int8*)v39);
  v38 = v92_.v92;
LABEL_74:
  if (v38 != nullptr) {
    v92_.v93 = v38;
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  (__int64)v38),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v95_.v95 != nullptr) {
    v95_.v96 = (__int64)v95_.v95;
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v66,
                                  (__int64)v95_.v95),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_10e7a70(
    __int64 a1, float32x4_t a2, float32x4_t a3, float32x4_t a4, float32x4_t a5,
    float32x4_t a6, int8x16_t a7, __int64 a8, int8x16_t** a9, __int64 a10,
    __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int128 a15,
    __int64 a16, __int64 a17, __int64 a18, __int128 a19, __int64 a20,
    __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
    __int64 a26, __int64 a27, __int64 a28, __int64 a29)
{
  return GameRoutine_10e65a0(*(_QWORD*)(a1 + 8), a9, 0, a10, a11, a12, a13, a14,
                             a15, a2, a3, a4, a5, a16, a17, a18, a6, a7, a19,
                             a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
}

void llvm_libcxx_21_libcxx_include___functional_1665330(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  struct {
    _QWORD v14[2];
    char* v15;
  } v14_;
  __int64 v16[2];
  __int64 v17[2];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 16);
  snd_Fade_Fade_10c830((__int64)v14_.v14, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_Obelisk_Description",
                 (__int64)"SE_SYS_Decide_Obelisk_Description",
                 (__int64)v14_.v14, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v14_.v14);
  v5 = *(unsigned __int8*)(v3 + 83);
  if (v5 == 10) {
    v6 = nullptr;
  }
  else {
    v6 = (&GameData_2066090)[v5];
  }
  v7 = game_util_Format("MID_Obelisk_HowToPlay_%s", v6);
  v8 = GameRoutine_1a09c70(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v11, 16, 0);
    v14_.v14[1] = v9;
    v14_.v15 = v10;
    v14_.v14[0] = v11 | 1;
    goto LABEL_12;
  }
  LOBYTE(v14_.v14[0]) = 2 * v8;
  v10 = (char*)v14_.v14 + 1;
  if (v8 != 0) {
  LABEL_12:
    GameRoutine_1a0b940((__int64)v10, (__int64)v7, v9);
  }
  v10[v9] = 0;
  if ((v14_.v14[0] & 1) != 0) {
    v12 = v14_.v15;
  }
  else {
    v12 = (char*)v14_.v14 + 1;
  }
  v16[0] = (__int64)v12;
  v16[1] = GameRoutine_1a09c70(v12);
  v17[0] = (__int64)&GameData_1a9f09e;
  v17[1] = 0;
  Message_16f9b50(v2, v16, v17);
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v14_.v15);
  }
  GameData_225d6e8[*(int*)(a1 + 8)] = 1;
}

void llvm_libcxx_21_libcxx_include___functional_1665d40(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  char* v29;
  __int64 v30;
  char v31;
  __int64 v32;
  char* v33;
  _QWORD* v34;
  __int64 v35;
  bool v36;
  bool v37;
  char v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  char v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  char v56;
  _QWORD* v57;
  struct {
    __int64 v58;
    int* v59;
    char* v60;
    char gap40_[8];
    __int64* v61;
    char gap56_[20];
    int v62;
  } v58_;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1120, 16, 0);
  v58_.v58 = 0;
  v58_.v59 = nullptr;
  game_menu_16dcd30((__int64)v2, (__int64)"ObeliskMenu", &v58_.v58, 0);
  v3 = GameData_2131b18[0];
  v4 = (__int64)v58_.v59;
  v2[138] = 0;
  *v2 = v3 + 2;
  v2[22] = v3 + 144;
  v2[132] = v3 + 170;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *v2 = game_menu_TitleMenu_Destroy_TitleMenu_16667c0_ptr;
  v2[22] = game_menu_MenuInput_InputUnknown00_ptr_2077ba0;
  v2[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2077c70;
  ProcInst_657850((__int64)v2, (__int64)GameData_212c730, "ProcObeliskMenu", 1,
                  a1);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_BYTE*)(v6 + 17) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 257;
  v7 = *v5;
  *(_BYTE*)(v6 + 82) = 1;
  v8 = fw_memory_HeapManager_Allocate(v7, 296, 16, 0);
  *(_QWORD*)(v8 + 16) = 0;
  v9 = GameData_2131678;
  *(_DWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_DWORD*)(v8 + 48) = 0x2000;
  v10 = v9 + 16;
  *(_QWORD*)(v8 + 24) = 0;
  *(_DWORD*)(v8 + 104) = 0;
  *(_WORD*)(v8 + 108) = 256;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_WORD*)(v8 + 80) = 0;
  *(_DWORD*)(v8 + 112) = -1082130432;
  *(_WORD*)(v8 + 116) = 0;
  *(_WORD*)(v8 + 136) = 0;
  *(_BYTE*)(v8 + 160) = 0;
  *(_BYTE*)(v8 + 288) = 0;
  *(_QWORD*)(v8 + 272) = 0;
  *(_QWORD*)(v8 + 280) = 0;
  *(_QWORD*)(v8 + 256) = 0;
  *(_QWORD*)(v8 + 264) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_QWORD*)(v8 + 248) = 0;
  *(_QWORD*)(v8 + 224) = 0;
  *(_QWORD*)(v8 + 232) = 0;
  *(_QWORD*)(v8 + 208) = 0;
  *(_QWORD*)(v8 + 216) = 0;
  *(_QWORD*)(v8 + 192) = 0;
  *(_QWORD*)(v8 + 200) = 0;
  *(_QWORD*)(v8 + 176) = 0;
  *(_QWORD*)(v8 + 184) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_DWORD*)(v8 + 127) = 0;
  *(_DWORD*)(v8 + 292) = 2;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 88) = v8 + 24;
  *(_QWORD*)(v6 + 96) = v8;
  *(_QWORD*)v8 = v9 + 16;
  *(_QWORD*)(v8 + 8) = 0;
  *(_QWORD*)v6 = game_facility_anonymous_MemoryMenuItem_vtable;
  BasicMenuCursor_16e0c00(v2, v6);
  v11 = fw_memory_HeapManager_Allocate(*v5, 104, 16, 0);
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_BYTE*)(v11 + 17) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 257;
  v12 = *v5;
  *(_BYTE*)(v11 + 82) = 1;
  v13 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)v13 = v10;
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_DWORD*)(v13 + 48) = 0x2000;
  *(_DWORD*)(v13 + 104) = 0;
  *(_WORD*)(v13 + 108) = 256;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 0;
  *(_DWORD*)(v13 + 112) = -1082130432;
  *(_WORD*)(v13 + 116) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_BYTE*)(v13 + 160) = 0;
  *(_BYTE*)(v13 + 288) = 0;
  *(_QWORD*)(v13 + 272) = 0;
  *(_QWORD*)(v13 + 280) = 0;
  *(_QWORD*)(v13 + 256) = 0;
  *(_QWORD*)(v13 + 264) = 0;
  *(_QWORD*)(v13 + 240) = 0;
  *(_QWORD*)(v13 + 248) = 0;
  *(_QWORD*)(v13 + 224) = 0;
  *(_QWORD*)(v13 + 232) = 0;
  *(_QWORD*)(v13 + 208) = 0;
  *(_QWORD*)(v13 + 216) = 0;
  *(_QWORD*)(v13 + 192) = 0;
  *(_QWORD*)(v13 + 200) = 0;
  *(_QWORD*)(v13 + 176) = 0;
  *(_QWORD*)(v13 + 184) = 0;
  *(_QWORD*)(v13 + 168) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_DWORD*)(v13 + 127) = 0;
  *(_DWORD*)(v13 + 292) = 2;
  *(_QWORD*)(v11 + 96) = v13;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v11 + 88) = v13 + 24;
  *(_QWORD*)v11 = game_facility_anonymous_ObeliskDestinyMenuItem_vtable_2078c18;
  BasicMenuCursor_16e0c00(v2, v11);
  v14 = fw_memory_HeapManager_Allocate(*v5, 104, 16, 0);
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_BYTE*)(v14 + 17) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 257;
  v15 = *v5;
  *(_BYTE*)(v14 + 82) = 1;
  v16 = fw_memory_HeapManager_Allocate(v15, 296, 16, 0);
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)v16 = v10;
  *(_DWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_DWORD*)(v16 + 48) = 0x2000;
  *(_DWORD*)(v16 + 104) = 0;
  *(_WORD*)(v16 + 108) = 256;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_WORD*)(v16 + 80) = 0;
  *(_DWORD*)(v16 + 112) = -1082130432;
  *(_WORD*)(v16 + 116) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_BYTE*)(v16 + 160) = 0;
  *(_BYTE*)(v16 + 288) = 0;
  *(_QWORD*)(v16 + 272) = 0;
  *(_QWORD*)(v16 + 280) = 0;
  *(_QWORD*)(v16 + 256) = 0;
  *(_QWORD*)(v16 + 264) = 0;
  *(_QWORD*)(v16 + 240) = 0;
  *(_QWORD*)(v16 + 248) = 0;
  *(_QWORD*)(v16 + 224) = 0;
  *(_QWORD*)(v16 + 232) = 0;
  *(_QWORD*)(v16 + 208) = 0;
  *(_QWORD*)(v16 + 216) = 0;
  *(_QWORD*)(v16 + 192) = 0;
  *(_QWORD*)(v16 + 200) = 0;
  *(_QWORD*)(v16 + 176) = 0;
  *(_QWORD*)(v16 + 184) = 0;
  *(_QWORD*)(v16 + 168) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_DWORD*)(v16 + 127) = 0;
  *(_DWORD*)(v16 + 292) = 2;
  *(_QWORD*)(v14 + 96) = v16;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v14 + 88) = v16 + 24;
  *(_QWORD*)v14 =
      game_facility_anonymous_ObeliskCausationMenuItem_vtable_2078e88;
  v57 = v2;
  BasicMenuCursor_16e0c00(v2, v14);
  v17 = fw_memory_HeapManager_Allocate(*v5, 104, 16, 0);
  *(_QWORD*)(v17 + 8) = 0;
  *(_WORD*)(v17 + 16) = 0;
  *(_DWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_QWORD*)(v17 + 72) = 0;
  *(_WORD*)(v17 + 80) = 257;
  v18 = *v5;
  *(_BYTE*)(v17 + 82) = 1;
  v19 = fw_memory_HeapManager_Allocate(v18, 296, 16, 0);
  *(_WORD*)(v19 + 108) = 256;
  *(_QWORD*)(v19 + 8) = 0;
  *(_QWORD*)(v19 + 16) = 0;
  v20 = game_GameModeData_instance_;
  *(_QWORD*)v19 = v10;
  *(_DWORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 40) = 0;
  *(_DWORD*)(v19 + 48) = 0x2000;
  *(_DWORD*)(v19 + 104) = 0;
  *(_QWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_WORD*)(v19 + 80) = 0;
  *(_DWORD*)(v19 + 112) = -1082130432;
  *(_WORD*)(v19 + 116) = 0;
  *(_WORD*)(v19 + 136) = 0;
  *(_BYTE*)(v19 + 160) = 0;
  *(_BYTE*)(v19 + 288) = 0;
  *(_QWORD*)(v19 + 272) = 0;
  *(_QWORD*)(v19 + 280) = 0;
  *(_QWORD*)(v19 + 256) = 0;
  *(_QWORD*)(v19 + 264) = 0;
  *(_QWORD*)(v19 + 240) = 0;
  *(_QWORD*)(v19 + 248) = 0;
  *(_QWORD*)(v19 + 224) = 0;
  *(_QWORD*)(v19 + 232) = 0;
  *(_QWORD*)(v19 + 208) = 0;
  *(_QWORD*)(v19 + 216) = 0;
  *(_QWORD*)(v19 + 192) = 0;
  *(_QWORD*)(v19 + 200) = 0;
  *(_QWORD*)(v19 + 176) = 0;
  *(_QWORD*)(v19 + 184) = 0;
  *(_QWORD*)(v19 + 168) = 0;
  *(_QWORD*)(v19 + 120) = 0;
  *(_DWORD*)(v19 + 127) = 0;
  *(_DWORD*)(v19 + 292) = 2;
  *(_QWORD*)(v17 + 96) = v19;
  *(_QWORD*)(v19 + 24) = 0;
  *(_QWORD*)(v17 + 88) = v19 + 24;
  *(_QWORD*)v17 = game_facility_anonymous_CausationMergeMenuItem_vtable;
  if (v20 != 0) {
    LOBYTE(v20) = *(_DWORD*)(v20 + 60) == 3;
  }
  *(_BYTE*)(v17 + 81) = v20;
  LODWORD(v58_.v58) = 145;
  v21 = (_QWORD*)game_UnitPool_GetFirst((int*)&v58_.v58);
  if (v21 != nullptr) {
    v22 = (_QWORD*)v21[54];
    if (v22 == nullptr) {
      v23 = v21[55];
      if (v23 != 0 &&
          (unsigned int)(v24 = *(unsigned __int8*)(v23 + 16)) <= 8) {
        while (1) {
          v55 = v24 + 1;
          if (((2 << v24) & 0x90) != 0) {
            v22 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v24 + 1) + 556000);
            if (v22 != nullptr) {
              break;
            }
          }
          ++v24;
          if (v55 == 9) {
            goto LABEL_10;
          }
        }
      }
      else {
      LABEL_10:
        v22 = nullptr;
      }
    }
    if (*(_QWORD*)(v21[49] + 40LL) != 0) {
      v25 = *(const char**)(v21[49] + 40LL);
    }
    else {
      v25 = &GameData_1a9f09e;
    }
    v26 = GameRoutine_1a09c70(v25);
    if (v26 > 0xFFFFFFFFFFFFFFF6LL) {
    LABEL_73:
      String_60a1d0();
    }
    v27 = v26;
    v56 = 0;
    while (v27 < 0x17) {
      v29 = (char*)&v58_.v58 + 1;
      LOBYTE(v58_.v58) = 2 * v27;
      if (v27 != 0) {
        goto LABEL_28;
      }
    LABEL_29:
      v29[v27] = 0;
      v31 = v58_.v58;
      v32 = (__int64)v58_.v60;
      if ((v58_.v58 & 1) != 0) {
        v33 = v58_.v60;
      }
      else {
        v33 = (char*)&v58_.v58 + 1;
      }
      if (GameRoutine_1a09d30(v33, "Kai") != 0 &&
          GameRoutine_1a09d30(v33, "Dit") != 0 &&
          GameRoutine_1a09d30(v33, "Seo") != 0 &&
          GameRoutine_1a09d30(v33, "Led") != 0 &&
          GameRoutine_1a09d30(v33, "Bel") != 0 &&
          GameRoutine_1a09d30(v33, "Tal") != 0 &&
          GameRoutine_1a09d30(v33, "Orh") != 0 &&
          GameRoutine_1a09d30(v33, "Anh") != 0) {
        v34 = (_QWORD*)GameRoutine_8ea9a0(
            *(_QWORD*)(game_GameModeData_instance_ + 176));
        v35 = v34[1];
        v36 = v35 == *v34;
        v37 = v35 != *v34;
        if (v36) {
          v38 = 0;
        }
        else {
          v38 = 2;
        }
        v56 |= v37;
        if ((v31 & 1) == 0) {
          goto LABEL_50;
        }
      }
      else {
        v38 = 4;
        if ((v31 & 1) == 0) {
          goto LABEL_50;
        }
      }
      if (v32 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v32);
      }
    LABEL_50:
      if ((v38 & 3) != 0 || v22 == nullptr) {
        v43 = v56;
        goto LABEL_62;
      }
      v28 = (_QWORD*)v22[54];
      if (v28 == nullptr) {
        v40 = v22[55];
        if (v40 != 0 &&
            (unsigned int)(v41 = *(unsigned __int8*)(v40 + 16)) <= 8) {
          while (1) {
            v42 = v41 + 1;
            if (((2 << v41) & 0x90) != 0) {
              v28 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v41 + 1) + 556000);
              if (v28 != nullptr) {
                break;
              }
            }
            ++v41;
            if (v42 == 9) {
              goto LABEL_16;
            }
          }
        }
        else {
        LABEL_16:
          v28 = nullptr;
        }
      }
      if (*(_QWORD*)(v22[49] + 40LL) != 0) {
        v25 = *(const char**)(v22[49] + 40LL);
      }
      else {
        v25 = &GameData_1a9f09e;
      }
      v27 = GameRoutine_1a09c70(v25);
      v22 = v28;
      if (v27 > 0xFFFFFFFFFFFFFFF6LL) {
        goto LABEL_73;
      }
    }
    if ((v27 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v27 | 7) + 1;
    }
    v29 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v30, 16, 0);
    v58_.v59 = (int*)v27;
    v58_.v60 = v29;
    v58_.v58 = v30 | 1;
  LABEL_28:
    GameRoutine_1a0b940((__int64)v29, (__int64)v25, v27);
    goto LABEL_29;
  }
  v43 = 0;
LABEL_62:
  *(_BYTE*)(v17 + 82) = v43 & 1;
  BasicMenuCursor_16e0c00(v57, v17);
  v44 = (__int64*)fw_memory_g_heap_manager_ptr;
  v45 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       104, 16, 0);
  *(_QWORD*)(v45 + 8) = 0;
  *(_WORD*)(v45 + 16) = 0;
  *(_DWORD*)(v45 + 40) = 0;
  *(_QWORD*)(v45 + 48) = 0;
  *(_QWORD*)(v45 + 56) = 0;
  *(_QWORD*)(v45 + 64) = 0;
  *(_QWORD*)(v45 + 72) = 0;
  *(_WORD*)(v45 + 80) = 257;
  v46 = *v44;
  *(_BYTE*)(v45 + 82) = 1;
  v47 = fw_memory_HeapManager_Allocate(v46, 296, 16, 0);
  *(_QWORD*)(v47 + 16) = 0;
  v48 = GameData_2131678;
  *(_DWORD*)(v47 + 32) = 0;
  *(_QWORD*)(v47 + 40) = 0;
  *(_DWORD*)(v47 + 104) = 0;
  *(_QWORD*)(v47 + 56) = 0;
  *(_QWORD*)(v47 + 64) = 0;
  *(_QWORD*)(v47 + 72) = 0;
  *(_WORD*)(v47 + 80) = 0;
  *(_WORD*)(v47 + 116) = 0;
  *(_WORD*)(v47 + 136) = 0;
  *(_BYTE*)(v47 + 160) = 0;
  *(_BYTE*)(v47 + 288) = 0;
  *(_QWORD*)(v47 + 272) = 0;
  *(_QWORD*)(v47 + 280) = 0;
  *(_QWORD*)(v47 + 256) = 0;
  *(_QWORD*)(v47 + 264) = 0;
  *(_QWORD*)(v47 + 240) = 0;
  *(_QWORD*)(v47 + 248) = 0;
  *(_QWORD*)(v47 + 224) = 0;
  *(_QWORD*)(v47 + 232) = 0;
  *(_QWORD*)(v47 + 208) = 0;
  *(_QWORD*)(v47 + 216) = 0;
  *(_QWORD*)(v47 + 192) = 0;
  *(_QWORD*)(v47 + 200) = 0;
  *(_QWORD*)(v47 + 176) = 0;
  *(_QWORD*)(v47 + 184) = 0;
  *(_QWORD*)(v47 + 168) = 0;
  *(_QWORD*)(v47 + 120) = 0;
  *(_DWORD*)(v47 + 127) = 0;
  *(_QWORD*)(v45 + 96) = v47;
  v58_.v62 = 0;
  *(_QWORD*)v47 = v48 + 16;
  *(_QWORD*)(v47 + 8) = 0;
  *(_DWORD*)(v47 + 48) = 0x2000;
  *(_WORD*)(v47 + 108) = 256;
  *(_DWORD*)(v47 + 112) = -1082130432;
  *(_DWORD*)(v47 + 292) = 2;
  *(_QWORD*)(v47 + 24) = 0;
  *(_QWORD*)v45 = game_facility_anonymous_CausationTransporterMenuItem_vtable;
  v49 = game_GameModeData_instance_;
  *(_QWORD*)(v45 + 88) = v47 + 24;
  v50 = *(const char**)(v49 + 176);
  v58_.v61 = &v58_.v58;
  v58_.v60 = v50;
  v58_.v58 = GameData_212db18[0] + 16;
  v58_.v59 = &v58_.v62;
  GameConst_7f97f0((__int64)&v58_.v58);
  if (v58_.v61 == &v58_.v58) {
    v51 = 32;
    goto LABEL_66;
  }
  if (v58_.v61 != nullptr) {
    v51 = 40;
  LABEL_66:
    (*(void (**)(__int64))(*v58_.v61 + v51))((__int64)v58_.v61);
  }
  *(_BYTE*)(v45 + 81) = v58_.v62 > 1;
  BasicMenuCursor_16e0c00(v57, v45);
  v52 = fw_memory_HeapManager_Allocate(*v44, 104, 16, 0);
  *(_QWORD*)(v52 + 80) = 0;
  *(_QWORD*)(v52 + 88) = 0;
  *(_QWORD*)(v52 + 24) = 0;
  *(_QWORD*)(v52 + 32) = 0;
  *(_QWORD*)(v52 + 8) = 0;
  *(_QWORD*)(v52 + 16) = 0;
  *(_BYTE*)(v52 + 17) = 0;
  *(_QWORD*)(v52 + 40) = 0;
  *(_QWORD*)(v52 + 48) = 0;
  *(_QWORD*)(v52 + 56) = 0;
  *(_QWORD*)(v52 + 64) = 0;
  *(_QWORD*)(v52 + 72) = 0;
  *(_WORD*)(v52 + 80) = 257;
  v53 = *v44;
  *(_BYTE*)(v52 + 82) = 1;
  v54 = fw_memory_HeapManager_Allocate(v53, 296, 16, 0);
  *(_QWORD*)(v54 + 8) = 0;
  *(_QWORD*)(v54 + 16) = 0;
  *(_DWORD*)(v54 + 32) = 0;
  *(_QWORD*)(v54 + 40) = 0;
  *(_DWORD*)(v54 + 104) = 0;
  *(_QWORD*)(v54 + 56) = 0;
  *(_QWORD*)(v54 + 64) = 0;
  *(_QWORD*)(v54 + 72) = 0;
  *(_WORD*)(v54 + 80) = 0;
  *(_WORD*)(v54 + 116) = 0;
  *(_WORD*)(v54 + 136) = 0;
  *(_BYTE*)(v54 + 160) = 0;
  *(_QWORD*)v54 = v48 + 16;
  *(_BYTE*)(v54 + 288) = 0;
  *(_QWORD*)(v54 + 272) = 0;
  *(_QWORD*)(v54 + 280) = 0;
  *(_QWORD*)(v54 + 256) = 0;
  *(_QWORD*)(v54 + 264) = 0;
  *(_QWORD*)(v54 + 240) = 0;
  *(_QWORD*)(v54 + 248) = 0;
  *(_QWORD*)(v54 + 224) = 0;
  *(_QWORD*)(v54 + 232) = 0;
  *(_QWORD*)(v54 + 208) = 0;
  *(_QWORD*)(v54 + 216) = 0;
  *(_QWORD*)(v54 + 192) = 0;
  *(_QWORD*)(v54 + 200) = 0;
  *(_QWORD*)(v54 + 176) = 0;
  *(_QWORD*)(v54 + 184) = 0;
  *(_QWORD*)(v54 + 168) = 0;
  *(_QWORD*)(v54 + 120) = 0;
  *(_DWORD*)(v54 + 48) = 0x2000;
  *(_DWORD*)(v54 + 127) = 0;
  *(_QWORD*)(v52 + 96) = v54;
  *(_WORD*)(v54 + 108) = 256;
  *(_DWORD*)(v54 + 112) = -1082130432;
  *(_DWORD*)(v54 + 292) = 2;
  *(_QWORD*)v52 = game_facility_anonymous_DownDifficultyItem_vtable;
  *(_QWORD*)(v54 + 24) = 0;
  *(_QWORD*)(v52 + 88) = v54 + 24;
  BasicMenuCursor_16e0c00(v57, v52);
}

__int64 llvm_libcxx_21_libcxx_include___functional_16c4ea0(__int64 a1,
                                                           __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64** v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int64* v26;
    void* v27;
    _QWORD* v28;
    char gap72_[8];
    unsigned __int64* v29;
  } v26_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26_.v26 = nullptr;
  v26_.v27 = nullptr;
  if ((unsigned __int8)Impl_13261c0(a2) == 14) {
    v6 = "MID_GmapMenu_ReMakeFarm";
  }
  else {
    v6 = "MID_GmapMenu_MakeFarm";
  }
  game_menu_16dcd30(v5, (__int64)"BelongingMenu", &v26_.v26, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = GameData_212d6a8;
  v8 = (__int64)v26_.v27;
  *(_QWORD*)v5 = GameData_212d6a8 + 2;
  *(_QWORD*)(v5 + 176) = v7 + 143;
  *(_QWORD*)(v5 + 1056) = v7 + 169;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v8),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v5 + 1104) = 0;
  *(_QWORD*)(v5 + 1096) = 0;
  *(_QWORD*)(v5 + 1064) = 0;
  *(_QWORD*)(v5 + 1072) = 0;
  *(_QWORD*)(v5 + 1080) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1088) = v5 + 1096;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 1176) = v6;
  *(_DWORD*)(v5 + 1144) = 1065353216;
  v9 = GameData_2131ba8[0];
  *(_QWORD*)v5 = GameData_2131ba8[0] + 16;
  *(_QWORD*)(v5 + 176) = v9 + 1200;
  *(_QWORD*)(v5 + 1056) = v9 + 1408;
  BasicMenuCursor_16de1f0((__int64*)v5, 3, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)v5 = game_gmap_MakeFarmMenu_vtable;
  *(_QWORD*)(v5 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2093e10;
  *(_QWORD*)(v5 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2093ee0;
  ProcInst_657850(v5, (__int64)GameData_212c730, "MakeFarmMenu", 1, a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  v12 = v10;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_BYTE*)(v10 + 82) = 1;
  *(_WORD*)(v10 + 80) = 257;
  *(_DWORD*)(v10 + 40) = -1;
  *(_QWORD*)v10 = GameData_2131ba0[0] + 16;
  v13 = *(_QWORD*)(v5 + 344);
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v12 + 8) = v5;
  *(_QWORD*)(v5 + 344) = v12;
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 5) {
    v24_.v24[0] = GameData_2094908;
    v24_.v24[1] = v5;
    v16 = &v26_.v26;
    v24_.v25 = v24_.v24;
    v17 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v26_.v28 = v24_.v24;
    v26_.v29 = (unsigned __int64*)&v26_.v26;
    v18 = *(unsigned int*)(v17 + 80);
    v26_.v26 = GameData_212d7f8[0] + 2;
    v26_.v27 = (__int128*)((char*)0x10LL + 4);
    if ((int)v18 < 1) {
      goto LABEL_20;
    }
    v19 = 0;
    v20 = 12 * v18;
    do {
      v11 = *(_QWORD*)(v17 + 8) + v19;
      if (*(_WORD*)(v11 + 2) != 0) {
        if (v26_.v29 == nullptr) {
          GameRoutine_60a310(),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        (*(void (**)(unsigned __int64*))(*v26_.v29 + 48))(v26_.v29),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v19 += 12;
    } while (v20 != v19);
    v16 = (__int64**)v26_.v29;
    if (v26_.v29 == (unsigned __int64*)&v26_.v26) {
    LABEL_20:
      v21 = 4;
    }
    else {
      if (v26_.v29 == nullptr) {
        goto LABEL_22;
      }
      v21 = 5;
    }
    ((void (*)(__int64**, __int64))(*v16)[v21])(v16, v11),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_22:
    if (v24_.v25 == v24_.v24) {
      v22 = 32;
    }
    else {
      if (v24_.v25 == nullptr) {
        goto LABEL_27;
      }
      v22 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v24_.v25 + v22))(v24_.v25, v11),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_27;
  }
  v24_.v24[0] = 0;
  v26_.v27 = &GameData_1a8f344;
  v26_.v26 = (__int64*)game_HashString((__int64)&GameData_1a8f344),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  UnitItem_6e8800((__int64)v24_.v24, (unsigned __int64*)&v26_.v26),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = GameRoutine_89aac0(
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      v24_.v24),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = fw_memory_HeapManager_Allocate(*v4, 88, 16, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_DWORD*)(v15 + 40) = v14;
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)v15 = game_gmap_anonymous_MakeFarmMenuItem_vtable;
  *(_QWORD*)(v15 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v5, v15),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_27:
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1032LL))(v5),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v5;
}

__int64 llvm_libcxx_21_libcxx_include___functional_16c5260(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64** v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  struct {
    __int64* v35;
    __int64 v36;
    _QWORD* v37;
    char gap72_[8];
    __int64** v38;
  } v35_;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  game_menu_16dcd30(v3, (__int64)"BelongingMenu", &v35_.v35, 0),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = GameData_212d6a8;
  v5 = v35_.v36;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak(v5),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1064) = 0;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1112) = 0;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_QWORD*)(v3 + 1128) = 0;
  *(_QWORD*)(v3 + 1088) = v3 + 1096;
  *(_QWORD*)(v3 + 1136) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1160) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_DWORD*)(v3 + 1144) = 1065353216;
  *(_QWORD*)(v3 + 1176) = "MID_GmapMenu_BoostFarm";
  v6 = GameData_2131ba8[0];
  *(_QWORD*)v3 = GameData_2131ba8[0] + 16;
  *(_QWORD*)(v3 + 176) = v6 + 1200;
  *(_QWORD*)(v3 + 1056) = v6 + 1408;
  BasicMenuCursor_16de1f0((__int64*)v3, 3, 0),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_QWORD*)v3 = game_gmap_BoostFarmMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2094788;
  *(_QWORD*)(v3 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2094858;
  BasicMenuCursor_16de1f0((__int64*)v3, 1, 0),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  ProcInst_657850(v3, (__int64)GameData_212c730, "BoostFarmMenu", 1, a1),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v7 = *(_QWORD*)(*GameData_212c790 + 8);
  v8 = *(_DWORD*)(v7 + 56);
  v9 = *(__int64**)(v7 + 8);
  v10 = *(__int64**)(v7 + 16);
  if ((v8 & 0x80000000) == 0) {
    while (v9 != v10) {
      v12 = (__int64*)*v9++;
      v11 = v12;
      if (*((_DWORD*)v12 + 21) == v8) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v11 = nullptr;
    goto LABEL_11;
  }
  if (v9 == v10) {
    goto LABEL_10;
  }
  while (1) {
    v11 = (__int64*)*v9;
    if (*(_QWORD*)(*v9 + 96) == 0 && v11[69] == 0) {
      break;
    }
    if (++v9 == v10) {
      goto LABEL_10;
    }
  }
LABEL_11:
  v13 = *((_DWORD*)v11 + 135);
  v14 = __OFSUB__(v13, 1);
  v15 = (unsigned int)(v13 - 1);
  if (((v15 & 0x80000000) != 0LL) == v14) {
    v16 = v11[3];
    v17 = v11[4] - v16;
    v18 = (__int64*)(v16 + 8LL * (unsigned int)v15);
    if (v15 < v17 >> 3) {
      v11 = v18;
    }
  }
  v19 = *v11;
  v20 = fw_memory_HeapManager_Allocate(*v2, 88, 16, 0),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_WORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  v23 = v20;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_WORD*)(v20 + 80) = 257;
  *(_BYTE*)(v20 + 82) = 1;
  *(_DWORD*)(v20 + 40) = -1;
  *(_QWORD*)v20 = GameData_2131ba0[0] + 16;
  v24 = *(_QWORD*)(v3 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  *(_QWORD*)(v23 + 8) = v3;
  *(_QWORD*)(v3 + 344) = v23;
  v25 = &v35_.v35;
  v33_.v33[2] = v19;
  v33_.v33[0] = GameData_2094988;
  v33_.v33[1] = v3;
  v33_.v34 = v33_.v33;
  v26 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v35_.v37 = v33_.v33;
  v35_.v38 = &v35_.v35;
  v27 = *(unsigned int*)(v26 + 80);
  v35_.v35 = GameData_212d7f8[0] + 2;
  v35_.v36 = 22;
  if ((int)v27 < 1) {
    goto LABEL_29;
  }
  v28 = 0;
  v29 = 12 * v27;
  do {
    v21 = *(_QWORD*)(v26 + 8) + v28;
    if (*(_WORD*)(v21 + 2) != 0) {
      if (v35_.v38 == nullptr) {
        GameRoutine_60a310(),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      ((void (*)(__int64**))(*v35_.v38)[6])(v35_.v38),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v28 += 12;
  } while (v29 != v28);
  v25 = v35_.v38;
  if (v35_.v38 == &v35_.v35) {
  LABEL_29:
    v30 = 4;
  }
  else {
    if (v35_.v38 == nullptr) {
      goto LABEL_31;
    }
    v30 = 5;
  }
  ((void (*)(__int64**, __int64, __int64))(*v25)[v30])(v25, v21, v22),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_31:
  if (v33_.v34 == v33_.v33) {
    v31 = 32;
    goto LABEL_35;
  }
  if (v33_.v34 != nullptr) {
    v31 = 40;
  LABEL_35:
    (*(void (**)(_QWORD*, __int64, __int64))(*v33_.v34 + v31))(v33_.v34, v21,
                                                               v22),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return v3;
}

#pragma GCC visibility pop
