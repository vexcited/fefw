#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD*, __int64);
__int64 CmdBtlParty_e77060(unsigned int, __int64, __int64*);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_ea5c40(__int64, __int64);
__int64 GameRoutine_ea60e0(__int64*, __int64);
__int64 GameRoutine_eab520(__int64, __int64, __int64*);
__int64 GameRoutine_ec1c50(__int64);
__int64 Manager_e9b1b0(_QWORD*);
__int64 MindBtlInfo_Destructor(_QWORD*);
__int64 MindBtlInfo_edb660(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_cmdbtl_e76940(__int64, __int64*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool CmdBtlParty_e773c0(__int64, _QWORD*, _QWORD*, unsigned int);
extern _DWORD GameData_1b94910[3];
extern _QWORD GameData_1b01768[4];
extern _UNKNOWN GameData_1a91cbb;
extern _UNKNOWN GameData_1a95c7b;
extern _UNKNOWN GameData_1a9d8a9;
extern _UNKNOWN GameData_1aa17ad;
extern _UNKNOWN GameData_1ab8b59;
extern _UNKNOWN GameData_1ae685e;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_1feca98[])();
extern __int64 (*GameData_1fed0b8[])();
extern __int64 (*GameData_1fedbe8[3])();
extern __int64 (*decltype_c81af0_ptr_1fedbd0[6])();
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f758;
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_1a91b60;
extern __int64 GameData_212d210[7];
extern __int64 GameData_212f728[3];
extern __int64 GameData_212f730[2];
extern __int64 GameData_212f738;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
typedef __int64 GameAlign_1aa1704 __attribute__((aligned(4)));
extern GameAlign_1aa1704 GameData_1aa1704;
typedef __int64 GameAlign_1ab0d1a __attribute__((aligned(2)));
extern GameAlign_1ab0d1a GameData_1ab0d1a;
typedef __int64 GameAlign_1ad3775 __attribute__((aligned(1)));
extern GameAlign_1ad3775 GameData_1ad3775;
typedef __int64 GameAlign_1ae2cac __attribute__((aligned(4)));
extern GameAlign_1ae2cac GameData_1ae2cac;
unsigned __int64 GameRoutine_1a09c70(const char*);
void CmdBtlMindEnumeration_Destructor(_QWORD*);
void CmdBtlMindEnumeration_ea3900(__int64, __int64*, _DWORD*, __int64);
void GameRoutine_edd530(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c8c1e0();
void __attribute__((noreturn)) GameRoutine_e77e10();
void __attribute__((noreturn)) GameRoutine_ea6540();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_cmdbtl_eaa1a0(__int64 a1, __int64* a2);
__int64 game_cmdbtl_ead240(__int64 a1);
__int64 game_cmdbtl_edc800(_DWORD* a1);

__int64 game_cmdbtl_eaa1a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  char v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD v51[2];
  _QWORD v52[2];
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;
  int v57;
  struct {
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    int v65;
    _DWORD v66[7];
    _QWORD* v67;
    _QWORD* v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    int v72;
  } v58_;
  _QWORD v73[2];
  _QWORD v74[3];

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if ((unsigned int)**(unsigned __int8**)(a1 + 24) - 7 > 2) {
    v5 = 3;
  }
  else {
    v5 = GameData_1b94910[(unsigned __int8)(**(_BYTE**)(a1 + 24) - 7)];
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD**)(a1 + 16);
  v8 = *(_QWORD*)(a1 + 40);
  v9 = v7[1];
  v74[0] = *v7;
  v74[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  v73[0] = v3;
  v73[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    result = ((__int64 (*)(__int64, _QWORD*, _QWORD*,
                           unsigned int))CmdBtlParty_e773c0)(v6, v74, v73, v5);
    v11 = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      result = std___1___shared_weak_count___release_weak(v2);
    }
    if (v9 == 0) {
      goto LABEL_13;
    }
  }
  else {
    result = ((__int64 (*)(__int64, _QWORD*, _QWORD*,
                           unsigned int))CmdBtlParty_e773c0)(v6, v74, v73, v5);
    v11 = result;
    if (v9 == 0) {
      goto LABEL_13;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
    if ((v11 & 1) == 0) {
      goto LABEL_66;
    }
    goto LABEL_14;
  }
LABEL_13:
  if ((v11 & 1) == 0) {
    goto LABEL_66;
  }
LABEL_14:
  v57 = 0;
  memset(v58_.v66, 0, sizeof(v58_.v66));
  v12 = GameData_212f730[0];
  v58_.v58 = GameData_212f730[0] + 16;
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  v14[2] = 0;
  *v14 = GameData_212f7d0[0] + 2;
  v14[1] = 0;
  v15 = GameData_212f968;
  v14[6] = 0;
  v14[7] = 0;
  v14[8] = 0;
  v14[9] = 0;
  v14[10] = 0;
  v14[4] = &v58_.v58;
  v14[5] = 0;
  v58_.v68 = v14;
  v14[3] = v15 + 2;
  v58_.v67 = v14 + 3;
  LODWORD(v15) = *(_DWORD*)(v8 + 8);
  v58_.v69 = 0;
  v58_.v70 = 0;
  v58_.v71 = 0;
  v58_.v72 = 0;
  LOBYTE(v58_.v59) = 0;
  v58_.v61 = 0;
  v58_.v62 = 0;
  v58_.v63 = 0;
  v58_.v64 = 0xFFFFFFFFLL;
  v58_.v65 = 0;
  DWORDn(v58_.v59, sizeof(v58_.v59) / 4 - 1) = (_DWORD)v15;
  LODWORD(v58_.v60) = -1;
  MindBtlInfo_edb660((__int64)&v58_.v58);
  v16 = *(__int64**)(a1 + 16);
  LOBYTE(v58_.v59) = **(_BYTE**)(a1 + 24);
  LODWORD(v58_.v60) = **(_DWORD**)(a1 + 32);
  v17 = *v16;
  v18 = v16[1];
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  v19 = v58_.v63;
  v58_.v62 = v17;
  v58_.v63 = v18;
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak(v19);
  }
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak(v18);
  }
  v20 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 440LL);
  if (v20 != 0 &&
      (unsigned __int64)(v21 = *(unsigned __int8*)(v20 + 16)) <= 3) {
    v22 = GameData_1b01768[v21];
  }
  else {
    v22 = 3;
  }
  v23 = *GameData_212ea58 + (v22 << 7);
  v24 = *(__int64**)(v23 + 712);
  v25 = *(__int64**)(v23 + 720);
  if (v24 == v25) {
    v26 = 0;
  }
  else {
    v26 = 0;
    do {
      v27 = *v24;
      v24 += 2;
      if (v27 == v3) {
        break;
      }
      ++v26;
    } while (v24 != v25);
  }
  v28 = *(__int64**)(a1 + 16);
  LODWORD(v58_.v64) = v26;
  v30 = *v28;
  v29 = v28[1];
  v55_.v55 = v30;
  v55_.v56 = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
  }
  v53_.v53 = v3;
  v53_.v54 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v31 = CmdBtlParty_e77060(v5, (__int64)&v55_.v55, &v53_.v53);
  v32 = v53_.v54;
  DWORDn(v58_.v70, sizeof(v58_.v70) / 4 - 1) = v31;
  if (v53_.v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53_.v54 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = v55_.v56;
  if (v55_.v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  v34 = *(_QWORD**)(a1 + 16);
  v35 = v34[1];
  v52[0] = *v34;
  v52[1] = v35;
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
  v51[0] = v3;
  v51[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    LODWORD(v58_.v71) = GameRoutine_ea5c40((__int64)v52, (__int64)v51);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    LODWORD(v58_.v71) = GameRoutine_ea5c40((__int64)v52, (__int64)v51);
  }
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak(v35);
  }
  v36 = *(_QWORD*)(v8 + 56);
  if (v36 >= *(_QWORD*)(v8 + 64)) {
    v46 = GameRoutine_ea60e0((__int64*)(v8 + 48), (__int64)&v57);
  }
  else {
    *(_DWORD*)v36 = v57;
    *(_QWORD*)(v36 + 8) = GameData_212f738 + 16;
    v37 = v58_.v59;
    v38 = v58_.v61;
    *(_QWORD*)(v36 + 24) = v58_.v60;
    *(_QWORD*)(v36 + 32) = v38;
    *(_QWORD*)(v36 + 16) = v37;
    *(_QWORD*)(v36 + 40) = v58_.v62;
    v39 = v58_.v63;
    *(_QWORD*)(v36 + 48) = v58_.v63;
    if (v39 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                                memory_order_relaxed);
    }
    v40 = v58_.v64;
    *(_QWORD*)(v36 + 72) = 0;
    *(_QWORD*)(v36 + 80) = 0;
    *(_QWORD*)(v36 + 88) = 0;
    *(_QWORD*)(v36 + 56) =
        __PAIR64__(DWORDn(v58_.v64, sizeof(v58_.v64) / 4 - 1), v40);
    *(_DWORD*)(v36 + 64) = v58_.v65;
    *(_DWORD*)(v36 + 68) = v58_.v66[0];
    v42 = *(_QWORD**)&v58_.v66[3];
    v41 = *(_QWORD**)&v58_.v66[1];
    v43 = *(_QWORD*)&v58_.v66[3] - *(_QWORD*)&v58_.v66[1];
    if (*(_QWORD*)&v58_.v66[3] != *(_QWORD*)&v58_.v66[1]) {
      if (0xAAAAAAAAAAAAAAABLL * (v43 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_ea6540();
      }
      v44 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *v13, *(_QWORD*)&v58_.v66[3] - *(_QWORD*)&v58_.v66[1], 16, 0);
      *(_QWORD*)(v36 + 72) = v44;
      *(_QWORD*)(v36 + 80) = v44;
      *(_QWORD*)(v36 + 88) = (char*)v44 + v43;
      do {
        *v44 = *v41;
        v44[1] = v41[1];
        v45 = v41[2];
        v44[2] = v45;
        if (v45 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                    memory_order_relaxed);
        }
        v41 += 3;
        v44 += 3;
      } while (v41 != v42);
      *(_QWORD*)(v36 + 80) = v44;
    }
    *(_QWORD*)(v36 + 8) = v12 + 16;
    *(_QWORD*)(v36 + 96) = v58_.v67;
    v47 = v58_.v68;
    *(_QWORD*)(v36 + 104) = v58_.v68;
    if (v47 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 1), 1u,
                                memory_order_relaxed);
    }
    v48 = v58_.v69;
    v49 = v58_.v70;
    v50 = v58_.v71;
    v46 = v36 + 144;
    *(_DWORD*)(v36 + 136) = v58_.v72;
    *(_QWORD*)(v36 + 120) = v49;
    *(_QWORD*)(v36 + 128) = v50;
    *(_QWORD*)(v36 + 112) = v48;
  }
  *(_QWORD*)(v8 + 56) = v46;
  result = MindBtlInfo_Destructor(&v58_.v58);
LABEL_66:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 game_cmdbtl_ead240(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 (*v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    __int64 v33;
    char* v34;
    char gap40_[8];
    __int64* v35;
  } v32_;

  result = *(_QWORD*)(a1 + 176);
  if (result == 0) {
    return result;
  }
  v3 = __dynamic_cast(result, GameData_212d210[0], GameData_212f758, 0);
  v4 = v3 + 9;
  v5 = v3;
  if ((*(_BYTE*)(v3 + 8) & 1) != 0) {
    v6 = *(const char**)(v3 + 24);
  }
  else {
    v6 = (const char*)(v3 + 9);
  }
  v7 = GameRoutine_1a09c70(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v7 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v32_.v34 = v10;
    v32_.v32 = v11 | 1;
  }
  else {
    LOBYTE(v32_.v32) = 2 * v7;
    v10 = (char*)&v32_.v32 + 1;
    if (v7 == 0) {
      goto LABEL_14;
    }
  }
  GameRoutine_1a0b940((__int64)v10, (__int64)v6, v8);
LABEL_14:
  v10[v8] = 0;
  if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v12, (__int64)v32_.v34);
  }
  v32_.v35 = &v32_.v32;
  v13 = (_QWORD*)*GameData_212ea58;
  v32_.v32 = (__int64)GameData_1fed0b8;
  CmdbtlPartyNatives_e9a800(v13, (__int64)&v32_.v32);
  if (v32_.v35 == &v32_.v32) {
    v14 = 32;
    goto LABEL_23;
  }
  if (v32_.v35 != nullptr) {
    v14 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v32_.v35 + v14))((__int64)v32_.v35);
  }
  v15 = *(_BYTE*)(v5 + 8);
  v16 = *(_QWORD*)(v5 + 24);
  v17 = *(_QWORD*)(v5 + 64);
  v18 = *(_QWORD*)(v5 + 72);
  v32_.v33 = 0;
  v32_.v34 = nullptr;
  v32_.v32 = 0;
  if ((v15 & 1) != 0) {
    v19 = v16;
  }
  else {
    v19 = v4;
  }
  v20 = v18 - v17;
  if (v18 == v17) {
    GameRoutine_eab520(a1, v19, &v32_.v32);
  }
  else {
    if (v20 < 0) {
      GameRoutine_c8c1e0();
    }
    v21 = fw_memory_HeapManager_Allocate(*v9, v18 - v17, 16, 0);
    v22 = 0;
    v32_.v32 = v21;
    v32_.v34 = (char*)(v21 + v20);
    do {
      v23 = v21 + v22;
      *(_BYTE*)v23 = 0;
      *(_DWORD*)(v23 + 24) = -1;
      v24 = *(_DWORD*)(v17 + v22 + 24);
      if (v24 != -1) {
        v25 = GameData_1fedbe8[v24];
        v31 = v21 + v22;
        ((void (*)(__int64*))v25)(&v31);
        *(_DWORD*)(v23 + 24) = v24;
      }
      v22 += 32;
    } while (v17 + v22 != v18);
    v26 = v21 + v22;
    v32_.v33 = v26;
    GameRoutine_eab520(a1, v19, &v32_.v32);
    v27 = -v22;
    v28 = v26 - 32;
    do {
      v29 = *(unsigned int*)(v28 + 24);
      if ((_DWORD)v29 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr_1fedbd0[v29])(&v31,
                                                                        v28);
      }
      *(_DWORD*)(v28 + 24) = -1;
      v28 -= 32;
      v27 += 32;
    } while (v27 != 0);
    if (v32_.v32 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v32_.v32);
    }
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 176) + 88LL))(
      *(_QWORD*)(a1 + 176));
}

__int64 game_cmdbtl_edc800(_DWORD* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 (**v25)();
  __int64 v26;
  bool v27;
  signed int v28;
  __int64 v29;
  char* v30;
  _QWORD* v31;
  unsigned int v32;
  __int64 (***v33)();
  int v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 (**v41)();
  signed int v42;
  __int64 v43;
  __int64* v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 (**v56)();
  int v57;
  __int64 v58;
  signed int v59;
  __int64* v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  __int64 v66;
  __int64 (***v67)();
  __int64 (***v68)();
  char* v69;
  char* v70;
  __int64 v71;
  int v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 (*v76)();
  __int64 v77;
  __int64 v78;
  __int64 (**v79)();
  char v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 (**v84)();
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 (***v90)();
  __int64 (**v91)();
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64* v99;
  int v100;
  unsigned int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  __int64 v105;
  char* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 (**v118)();
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  struct {
    __int64 (**v122)();
    __int64* v123;
    __int64 v124;
    __int64 v125;
    unsigned __int64* v126;
    int v127;
    char gap76_[4];
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    int v132;
  } v122_;
  struct {
    char* v133;
    char* v134;
    char* v135;
  } v133_;
  struct {
    __int64 (**v136)();
    __int64 v137;
    char gap168_[20];
    int v138;
  } v136_;

  v2 = GameData_212dec0[0];
  if ((GameRoutine_ec1c50(*GameData_212dec0[0]) & 1) == 0) {
    goto LABEL_95;
  }
  v3 = a1[13];
  if ((v3 & 0x2000) != 0 || (v3 & 0x20000 | a1[3]) != 0) {
    goto LABEL_95;
  }
  v4 = GameData_212ea58;
  v133_.v133 = nullptr;
  v133_.v134 = nullptr;
  v122_.v122 = GameData_1feca98;
  v122_.v123 = (__int64*)&v133_.v133;
  v122_.v126 = (unsigned __int64*)&v122_.v122;
  CmdbtlPartyNatives_e9aba0((_QWORD*)*GameData_212ea58, (__int64)&v122_.v122);
  if (v122_.v126 == (unsigned __int64*)&v122_.v122) {
    v5 = 32;
  }
  else {
    if (v122_.v126 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v122_.v126 + v5))((__int64)v122_.v126);
LABEL_9:
  if (v133_.v134 == nullptr) {
    goto LABEL_95;
  }
  v6 = *((_QWORD*)v133_.v134 + 1);
  std___1___shared_weak_count___release_weak((__int64)v133_.v134);
  if (v6 == -1) {
    goto LABEL_95;
  }
  v122_.v123 = (__int64*)&GameData_1a9d8a9;
  v7 = 0x0.0p+0f;
  v122_.v122 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a9d8a9);
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v122_.v122);
    if (v8 != 0) {
      v7 = (float)*(int*)(v8 + 32);
    }
  }
  v9 = (int*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 32LL))(a1);
  if (v9 == nullptr) {
    goto LABEL_95;
  }
  v10 = v9[5] + v9[4];
  if (v10 <= 1) {
    v10 = 1;
  }
  if ((float)((float)((float)v9[3] / (float)(unsigned int)v10) *
              0x1.9000000000000p+6f) > v7 ||
      (v11 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 32LL))(a1)) == 0 ||
      (v12 = *(_QWORD*)(v11 + 88)) == 0) {
  LABEL_95:
    if ((GameRoutine_ec1c50(*v2) & 1) == 0 || (a1[13] & 0x2000) != 0 ||
        (a1[13] & 0x800 | a1[3]) != 0) {
      goto LABEL_190;
    }
    v122_.v123 = (__int64*)&GameData_1a91cbb;
    v122_.v122 =
        (__int64 (**)(void))game_HashString((__int64)&GameData_1a91cbb);
    if (game_GameModeData_instance_ != 0 &&
        (v52 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v122_.v122)) != 0) {
      v53 = *(_DWORD*)(v52 + 32);
    }
    else {
      v53 = 0;
    }
    v122_.v123 = (__int64*)&GameData_1a95c7b;
    v122_.v122 =
        (__int64 (**)(void))game_HashString((__int64)&GameData_1a95c7b);
    if (game_GameModeData_instance_ != 0 &&
        (v54 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v122_.v122)) != 0) {
      v55 = *(_DWORD*)(v54 + 32);
    }
    else {
      v55 = 0;
    }
    v122_.v123 = (__int64*)&GameData_1aa17ad;
    v56 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa17ad);
    v57 = game_GameModeData_instance_;
    v122_.v122 = v56;
    if (game_GameModeData_instance_ != 0) {
      v58 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v122_.v122);
      if (v58 != 0) {
        v57 = *(_DWORD*)(v58 + 32);
      }
      else {
        v57 = 0;
      }
    }
    v59 = v53 + v57 * v55;
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v60 = game_map_MapRandom_instance__ptr[0];
    v61 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v62 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v63 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v60 + 1) = v61;
    v64 = (v63 >> 8) ^ (v62 >> 19) ^ v63 ^ v62;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60) = v62;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60 + 4) = v64;
    v65 = v64 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    if ((int)(v65 % 0x64) >= v59) {
      v122_.v123 = (__int64*)&GameData_1aa17ad;
      v122_.v122 =
          (__int64 (**)(void))game_HashString((__int64)&GameData_1aa17ad);
      v133_.v134 = (char*)&GameData_1aa17ad;
      v133_.v133 = (char*)game_HashString((__int64)&GameData_1aa17ad);
      if (game_GameModeData_instance_ != 0 &&
          (v71 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v133_.v133)) != 0) {
        v72 = *(int*)(v71 + 32) + 1;
      }
      else {
        v72 = 1;
      }
      game_VariableManager_SetFlag((__int64)&v122_.v122, v72);
      goto LABEL_190;
    }
    v66 = *GameData_212ea58;
    v136_.v138 = 120832;
    v67 = *(__int64 (****)())(v66 + 968);
    v68 = *(__int64 (****)())(v66 + 976);
    v121 = v66;
    if (v67 == v68) {
      v70 = nullptr;
      v69 = nullptr;
    }
    else {
      v119 = 0;
      v69 = nullptr;
      v70 = nullptr;
      v118 = (__int64 (**)(void))(GameData_212f728[0] + 16);
      do {
        v75 = (__int64)(*v67)[40];
        if (v75 != 0) {
          v76 = (*v67)[39];
          v77 = (__int64)(*v67)[40];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v75 + 16), 1u,
                                    memory_order_relaxed);
          v78 = std___1___shared_weak_count_lock(v77);
          std___1___shared_weak_count___release_weak(v75);
          if (v78 != 0) {
            if (v76 != nullptr &&
                (*(_BYTE*)(*(_QWORD*)v76 + 76LL) & 0x10) != 0) {
              v79 = v67[1];
              v136_.v136 = *v67;
              v136_.v137 = (__int64)v79;
              if (v79 != nullptr) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 1),
                                          1u, memory_order_relaxed);
              }
              v80 = game_cmdbtl_e76940(v121 + 928, (__int64*)&v136_.v136);
              v81 = v136_.v137;
              if (v136_.v137 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v136_.v137 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v82 = v80;
                (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81);
                std___1___shared_weak_count___release_weak(v81);
                v80 = v82;
              }
              if ((v80 & 1) != 0) {
                v133_.v134 = nullptr;
                v133_.v135 = nullptr;
                v133_.v133 = nullptr;
                v83 = (__int64)v67[1];
                v122_.v122 = *v67;
                v122_.v123 = (__int64*)v83;
                if (v83 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v83 + 16),
                                            1u, memory_order_relaxed);
                }
                GameRoutine_edd530((__int64*)&v133_.v133, &v122_.v122);
                if (v122_.v123 != nullptr) {
                  std___1___shared_weak_count___release_weak(
                      (__int64)v122_.v123);
                }
                LODWORD(v122_.v123) = 0;
                v122_.v124 = 0;
                v122_.v125 = 0;
                v122_.v126 = nullptr;
                v122_.v127 = 0;
                v122_.v128 = 0;
                v122_.v129 = 0;
                v122_.v130 = 0;
                v122_.v131 = 0;
                v122_.v132 = 0;
                v122_.v122 = v118;
                CmdBtlMindEnumeration_ea3900((__int64)&v122_.v122,
                                             (__int64*)&v133_.v133, &v136_.v138,
                                             0x100000000LL);
                if (v122_.v132 >= 1) {
                  if ((unsigned __int64)v70 >= v119) {
                    v85 = v70 - v69;
                    v86 = (v70 - v69) >> 4;
                    v87 = v86 + 1;
                    if ((unsigned __int64)(v86 + 1) >> 60 != 0) {
                      GameRoutine_e77e10();
                    }
                    if ((__int64)(v119 - (_QWORD)v69) >> 3 > v87) {
                      v87 = (__int64)(v119 - (_QWORD)v69) >> 3;
                    }
                    if (v119 - (unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v88 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v88 = v87;
                    }
                    if (v88 >> 60 != 0) {
                      GameRoutine_60a210();
                    }
                    v89 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v88, 16,
                        0);
                    v90 = (__int64 (***)(void))(v89 + v85);
                    *v90 = *v67;
                    v91 = v67[1];
                    v90[1] = v91;
                    if (v91 != nullptr) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v91 + 1), 1u,
                          memory_order_relaxed);
                    }
                    v92 = v89 + 16 * v88;
                    v93 = (__int64)&v90[-2 * v86];
                    v70 = (char*)(v90 + 2);
                    v119 = v92;
                    GameRoutine_1a0b950(v93, (__int64)v69, v85);
                    if (v69 != nullptr) {
                      v94 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v94 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v94,
                          (__int64)v69);
                    }
                    v69 = (char*)v93;
                  }
                  else {
                    *(_QWORD*)v70 = *v67;
                    v84 = v67[1];
                    *((_QWORD*)v70 + 1) = v84;
                    if (v84 != nullptr) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v84 + 1), 1u,
                          memory_order_relaxed);
                    }
                    v70 += 16;
                  }
                }
                CmdBtlMindEnumeration_Destructor(&v122_.v122);
                v73 = v133_.v133;
                if (v133_.v133 != nullptr) {
                  v95 = v133_.v134;
                  if (v133_.v133 == v133_.v134) {
                    goto LABEL_119;
                  }
                  do {
                    v96 = *((_QWORD*)v95 - 1);
                    if (v96 != 0) {
                      std___1___shared_weak_count___release_weak(v96);
                    }
                    v95 -= 16;
                  } while (v95 != v73);
                  v133_.v134 = v73;
                  v73 = v133_.v133;
                  if (v133_.v133 != nullptr) {
                  LABEL_119:
                    v74 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v74 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                        (__int64)v73);
                  }
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
              std___1___shared_weak_count___release_weak(v78);
            }
          }
        }
        v67 += 2;
      } while (v67 != v68);
    }
    v97 = (unsigned __int64)(v70 - v69) >> 4;
    if ((int)v97 >= 1) {
      v98 = ((unsigned __int64)(v70 - v69) >> 4) & 0x7FFFFFFF;
      v99 = (__int64*)(v69 + 8);
      do {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v100 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60);
        v101 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60 + 4);
        v102 = *(_DWORD*)v60 ^ (*(_DWORD*)v60 << 11);
        *(_DWORD*)v60 = *((_DWORD*)v60 + 1);
        *((_DWORD*)v60 + 1) = v100;
        v103 = (v102 >> 8) ^ (v101 >> 19) ^ v102 ^ v101;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60) = v101;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v60 + 4) = v103;
        v104 = v103 & 0x7FFFFFFF;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v105 = *(v99 - 1);
        --v98;
        v106 = &v69[16 * (v104 % (unsigned int)v97)];
        *(v99 - 1) = *(_QWORD*)v106;
        *(_QWORD*)v106 = v105;
        v107 = *v99;
        *v99 = *((_QWORD*)v106 + 1);
        v99 += 2;
        *((_QWORD*)v106 + 1) = v107;
      } while (v98 != 0);
    }
    if (v70 == v69) {
      if (v70 == nullptr) {
        goto LABEL_190;
      }
      v108 = 0;
      v109 = 0;
    }
    else {
      v122_.v123 = (__int64*)&GameData_1aa17ad;
      v122_.v122 =
          (__int64 (**)(void))game_HashString((__int64)&GameData_1aa17ad);
      game_VariableManager_SetFlag((__int64)&v122_.v122, 0);
      v109 = *(_QWORD*)v69;
      v108 = *((_QWORD*)v69 + 1);
      if (v108 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v108 + 16), 1u,
                                  memory_order_relaxed);
      }
      do {
        v110 = *((_QWORD*)v70 - 1);
        if (v110 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
          std___1___shared_weak_count___release_weak(v110);
        }
        v70 -= 16;
      } while (v70 != v69);
    }
    v111 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v111,
                                  (__int64)v69);
    if (v108 != 0) {
      v112 = std___1___shared_weak_count_lock(v108);
      std___1___shared_weak_count___release_weak(v108);
      if (v112 != 0) {
        if (v109 != 0) {
          v113 = (_QWORD*)*GameData_212ea58;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v112 + 16), 1u,
                                    memory_order_relaxed);
          Manager_e9b1b0(v113);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v112 + 16), 1u,
                                    memory_order_relaxed);
          v113[154] = v109;
          v114 = v113[155];
          v113[155] = v112;
          if (v114 != 0) {
            std___1___shared_weak_count___release_weak(v114);
          }
          std___1___shared_weak_count___release_weak(v112);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
          std___1___shared_weak_count___release_weak(v112);
        }
        if (v109 != 0) {
          v115 = 0x100000000LL;
          v116 = 6;
          return v116 | v115;
        }
      }
    }
  LABEL_190:
    v115 = 0;
    v116 = 0;
    return v116 | v115;
  }
  v13 = *(_QWORD*)(v11 + 80);
  v14 = *(_QWORD*)(v11 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v14);
  std___1___shared_weak_count___release_weak(v12);
  if (v15 == 0 || v13 == 0) {
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    goto LABEL_95;
  }
  v16 = (_QWORD*)*v4;
  v133_.v133 = nullptr;
  v133_.v134 = nullptr;
  v122_.v122 = GameData_1feca98;
  v122_.v123 = (__int64*)&v133_.v133;
  v122_.v126 = (unsigned __int64*)&v122_.v122;
  CmdbtlPartyNatives_e9aba0(v16, (__int64)&v122_.v122);
  if (v122_.v126 == (unsigned __int64*)&v122_.v122) {
    v17 = 32;
  }
  else {
    if (v122_.v126 == nullptr) {
      goto LABEL_30;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v122_.v126 + v17))((__int64)v122_.v126);
LABEL_30:
  if (v133_.v134 != nullptr) {
    v18 = std___1___shared_weak_count_lock((__int64)v133_.v134);
    if (v18 != 0) {
      v19 = (__int64)v133_.v133;
    }
    else {
      v19 = 0;
    }
    if (v133_.v134 != nullptr) {
      v20 = v18;
      std___1___shared_weak_count___release_weak((__int64)v133_.v134);
      v18 = v20;
    }
  }
  else {
    v18 = 0;
    v19 = 0;
  }
  v21 = *(__int64 (***)(void))(v13 + 16);
  v122_.v124 = 0;
  v122_.v122 = v21;
  v122_.v123 = nullptr;
  if (v21 != nullptr) {
    v22 = (__int64)v21[49];
    v122_.v123 = (__int64*)v22;
    if (v22 != 0) {
      v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v22 + 24) + 1784LL) + 272LL);
    }
    v122_.v124 = v22;
  }
  v23 = *(_QWORD*)(v19 + 16);
  v133_.v135 = nullptr;
  v133_.v133 = (char*)v23;
  v133_.v134 = nullptr;
  if (v23 != 0) {
    v24 = *(char**)(v23 + 392);
    v133_.v134 = v24;
    if (v24 != nullptr) {
      v24 = *(char**)(*(_QWORD*)(*((_QWORD*)v24 + 3) + 1784LL) + 272LL);
    }
    v133_.v135 = v24;
  }
  v120 = v18;
  if ((GameReliance_8e17a0(*(_QWORD**)(game_GameModeData_instance_ + 128),
                           (__int64)&v122_.v122, (__int64)&v133_.v133) &
       0x80000000) != 0) {
    v28 = 0;
    goto LABEL_77;
  }
  v25 = *(__int64 (***)(void))(v13 + 16);
  v122_.v124 = 0;
  v122_.v122 = v25;
  v122_.v123 = nullptr;
  if (v25 != nullptr) {
    v26 = (__int64)v25[49];
    v122_.v123 = (__int64*)v26;
    if (v26 != 0) {
      v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 24) + 1784LL) + 272LL);
    }
    v122_.v124 = v26;
    v27 = v26 == 0;
  }
  else {
    v27 = true;
  }
  v29 = *(_QWORD*)(v19 + 16);
  v133_.v133 = (char*)v29;
  if (v29 == 0) {
    goto LABEL_59;
  }
  v30 = *(char**)(v29 + 392);
  v133_.v134 = v30;
  if (v30 == nullptr) {
    goto LABEL_59;
  }
  v133_.v135 = *(char**)(*(_QWORD*)(*((_QWORD*)v30 + 3) + 1784LL) + 272LL);
  if (v133_.v135 == nullptr) {
    v27 = true;
  }
  if (v27 || (v31 = *(_QWORD**)(game_GameModeData_instance_ + 128),
              ((v32 = GameReliance_8e17a0(v31, (__int64)&v122_.v122,
                                          (__int64)&v133_.v133)) &
               0x80000000) != 0)) {
  LABEL_59:
    v33 = GameData_212dae8;
  }
  else {
    v33 = (__int64 (***)(void))(v31[1] + 56LL * v32);
  }
  v34 = *((unsigned __int8*)v33 + 11);
  if (v34 > 3) {
    if (v34 != 4) {
      if (v34 == 5) {
        LOWORD(v133_.v134) = 13686;
        v35 = &GameData_1a91b60;
        goto LABEL_70;
      }
      goto LABEL_67;
    }
    LOWORD(v133_.v134) = 13430;
    v35 = &GameData_1ae2cac;
  }
  else {
    if (v34 != 2) {
      if (v34 == 3) {
        LOWORD(v133_.v134) = 13174;
        v35 = &GameData_1ad3775;
        goto LABEL_70;
      }
    LABEL_67:
      LOWORD(v133_.v134) = 12662;
      v35 = &GameData_1ab0d1a;
      goto LABEL_70;
    }
    LOWORD(v133_.v134) = 12918;
    v35 = &GameData_1aa1704;
  }
LABEL_70:
  v133_.v133 = (char*)*v35;
  v36 = fw_memory_g_heap_manager_ptr;
  v37 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  *(_BYTE*)(v37 + 44) = 0;
  v122_.v123 = (__int64*)v37;
  *(_WORD*)(v37 + 32) = -30834;
  *(_QWORD*)v37 = 0xE35FBAA4E7878CE6LL;
  *(_QWORD*)(v37 + 8) = 0xA583E3B782E3A482LL;
  *(_QWORD*)(v37 + 16) = 0x83E3BC83E39E83E3LL;
  *(_QWORD*)(v37 + 24) = 0xE78DBBE8B48FE6ABLL;
  *(_QWORD*)(v37 + 34) = v133_.v133;
  *(_WORD*)(v37 + 42) = (_WORD)v133_.v134;
  v122_.v122 = (__int64 (**)(void))game_HashString(v37);
  if (game_GameModeData_instance_ != 0 &&
      (v38 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v122_.v122)) != 0) {
    v28 = *(_DWORD*)(v38 + 32);
  }
  else {
    v28 = 0;
  }
  v39 = 128;
  if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
    v39 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v39, v37);
LABEL_77:
  v122_.v123 = (__int64*)&GameData_1ae685e;
  v122_.v122 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae685e);
  if (game_GameModeData_instance_ != 0) {
    v40 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v122_.v122);
    if (v40 != 0 && *(int*)(v40 + 32) >= 1) {
      v122_.v123 = (__int64*)&GameData_1ab8b59;
      v41 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab8b59);
      v42 = game_GameModeData_instance_;
      v122_.v122 = v41;
      if (game_GameModeData_instance_ != 0) {
        v43 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v122_.v122);
        if (v43 != 0) {
          v42 = *(_DWORD*)(v43 + 32);
        }
        else {
          v42 = 0;
        }
      }
      if (v42 < v28) {
        v28 = v42;
      }
    }
  }
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v44 = game_map_MapRandom_instance__ptr[0];
  v45 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v46 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v47 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v44 + 1) = v45;
  v48 = (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v46;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44 + 4) = v48;
  v49 = v48 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
    std___1___shared_weak_count___release_weak(v120);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  if ((int)(v49 % 0x64) >= v28) {
    goto LABEL_95;
  }
  v122_.v123 = (__int64*)&GameData_1ae685e;
  v122_.v122 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae685e);
  v133_.v134 = (char*)&GameData_1ae685e;
  v133_.v133 = (char*)game_HashString((__int64)&GameData_1ae685e);
  if (game_GameModeData_instance_ != 0 &&
      (v50 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v133_.v133)) != 0) {
    v51 = *(int*)(v50 + 32) + 1;
  }
  else {
    v51 = 1;
  }
  game_VariableManager_SetFlag((__int64)&v122_.v122, v51);
  *(_DWORD*)(*v4 + 1204) |= 0x100u;
  v115 = 0x100000000LL;
  v116 = 7;
  return v116 | v115;
}

#pragma GCC visibility pop
