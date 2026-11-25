#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_1209d00(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_113f5c0(PSEUDO_X8, unsigned __int8*,
                                             const char*, float);
__int64* GameRoutine_82f300(__int64* result, unsigned __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_1200be0(__int64, unsigned int, unsigned int, int, __int64);
__int64 BaseNx_2ae880(__int64*);
__int64 GameRoutine_112cc60(__int64 result, unsigned __int8*, unsigned __int8*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950_alt1(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2adfb0(__int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_6fc510(__int64);
__int64 Impl_13261c0(__int64);
__int64 MapUtil_753bb0(__int64 result);
__int64 SoundThread_2a1f40(__int64, __int64);
__int64 TargetEnumerator_77c150(__int64 result, __int64*, int, int);
__int64 TargetEnumerator_77e300(__int64, _WORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_9903e0(__int64 result);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_ffa3e0(__int64 result, _QWORD*, _DWORD*);
__int64 game_gmap_13339e0();
__int64 game_map_MapSkill_TryPutTerrain_lambda0_Invoke_912c40(__int64 result,
                                                              __int64);
__int64 game_telop_1376490(__int64, const char*, char);
__int64 llvm_libcxx_21_libcxx_include___functional_7d5160(__int64, char);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___next_prime(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool AIThink_121a340(__int64*, __int64);
bool GameHr_13777b0(__int64, const char*);
bool GameRoutine_6fc7a0(__int64, _QWORD*);
bool game_HasActiveSkill_843420(_DWORD*, _QWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN GameData_1aa5cc9;
extern _UNKNOWN GameData_2167580;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_2236600;
extern _UNKNOWN GameData_2236610;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int16* GameData_212cf08[9];
extern __int64 (*AIThink_121a250_ptr)();
extern __int64 (*AIThink_121b950_ptr[2])();
extern __int64 (*GameData_1fad618[])();
extern __int64 (*GameData_1fb24f8[])();
extern __int64 (*GameData_200e060[])();
extern __int64 (*GameData_2019398[])();
extern __int64 (*game_character_PhysicsObject_vtable[])();
extern __int64* GameData_212c780;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_21309c8[5];
extern __int64 GameData_212e378[2];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd158;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2241708;
extern __int64 GameData_2241710;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
extern char GameData_1a9f09e;
extern int GameData_22365f8;
extern int GameData_2236608;
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
int __cxa_guard_acquire(__int64);
void* BaseNx_2a1b90();
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void GameHr_7aa840(_BYTE*, __int64);
void GameHr_a5aca0(__int64);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_113fc50();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_892740();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64);
void wld_a5f660(__int64, char);
__int64 game_137b40(__int64 a1, __int64 a2);
__int64 game_2ae7a0(__int64* a1);
float game_5bd9a0(_OWORD* a1, _OWORD* a2, __int64 a3, float a4, __int64 a5,
                  __int64 a6, float* a7);
__int64 game_7810b0(__int64 a1, int* a2, int* a3);
__int64 game_7815e0(__int64 a1, int* a2, int* a3);
__int64* game_82eee0(__int64 a1);
__int64 game_910280(__int64 a1, _DWORD* a2, __int64 a3);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);
__int64 game_10fa9e0(__int64 a1, _QWORD* a2);
void game_113de80(_QWORD* a1, __int64 a2, __int64** a3);
__int64 game_1204820(__int64 a1, int a2, __int64 a3, __int64 a4);
__int64 game_13602c0(__int64 a1);
__int64 Trick_7d5160(__int64, char);
void GameRoutine_7aa840(_BYTE*, __int64);

__int64 game_137b40(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _BYTE v8[32];
    _BYTE* v9;
  } v8_;
  __int64 v10;

  nn_os_LockMutex(a1 + 5944);
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v8_.v9 = v8_.v8;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v8_.v8);
      v5 = **(_QWORD**)(a1 + 5816);
      if (v5 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v8_.v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      v5 = **(_QWORD**)(a1 + 5816);
      if (v5 == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
    v8_.v9 = nullptr;
    v5 = **(_QWORD**)(a1 + 5816);
    if (v5 == 0) {
      goto LABEL_8;
    }
  }
  do {
    v10 = v5;
    v5 = *(_QWORD*)(v5 + 5640);
    if (v8_.v9 == nullptr) {
      GameRoutine_60a310();
    }
    (*(void (**)(_BYTE*, __int64*))(*(_QWORD*)v8_.v9 + 48LL))(v8_.v9, &v10);
  } while (v5 != 0);
LABEL_8:
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v8_.v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*(_QWORD*)v8_.v9 + v6))((__int64)v8_.v9);
  }
  return nn_os_UnlockMutex(a1 + 5944);
}

__int64 game_910280(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  char v30;
  _WORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v43;
  __int64 v44;
  _BYTE* v46;
  __int64 v47;
  struct {
    char gap0_[4];
    unsigned __int8 v48;
    char gap5_[3];
    __int64 v49;
    _QWORD v50[4];
    _QWORD* v51;
  } f_;

  result = 0;
  f_.v49 = a1;
  if (a1 == 0) {
    return result;
  }
  {
    v5 = GameData_212c880[0];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *a2 & 0xFFF;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v6);
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_QWORD*)(v7 + 664) == 0) {
    return result;
  }
  if ((*a2 & 0xFFF) == 0 ||
      (GameRoutine_6fc510(
           *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v6)) &
       1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v7 + 273) != 0) {
    {
      v10 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL));
      __asm__ volatile("" ::"r"(v10));
    }
    {
      v11 = *(unsigned __int8*)(v10 + 104);
      __asm__ volatile("" ::"r"(v11));
    }
    {
      v12 = *(unsigned __int8*)(v10 + 273);
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = (unsigned int)(v11 - 5) >= 2 ? 0 : (*a2 >> 19) & 0x1F;
      __asm__ volatile("" ::"r"(v13));
    }
    if (v13 - ((*a2 >> 12) & 0x7F) + v12 < 1) {
      return 0;
    }
  }
  if (!GameRoutine_6fc7a0(v7, (_QWORD*)(a1 + 1744))) {
    return 0;
  }
  {
    v14 = *(_QWORD*)(*v5 + 64);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *a2 & 0xFFF;
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v16 = *(_QWORD*)(*(_QWORD*)(v14 + 8 * v15) + 648LL);
    __asm__ volatile("" ::"r"(v16));
  }
  if (v16 != 0) {
    {
      v17 = *(unsigned __int16*)(v16 + 16);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = *(_QWORD*)(a1 + 1744);
      __asm__ volatile("" ::"r"(v18));
    }
    v19 = v17 & 0xFFF;
    v20 = (v17 >> 5) & 0x7F;
    {
      v21 = *(_QWORD*)(a1 + 1752) - v18;
      __asm__ volatile("" ::"r"(v21));
    }
    LODWORD(f_.v50[0]) = v19;
    if (v20 + 1 <= (unsigned __int64)(v21 >> 2) &&
        ((*(_DWORD*)(v18 + 4LL * (unsigned int)v20) >> v19) & 1) != 0 &&
        game_HasActiveSkill_843420(f_.v50, (_QWORD*)(a1 + 1744))) {
      {
        v14 = *(_QWORD*)(*v5 + 64);
        __asm__ volatile("" ::"r"(v14));
      }
      {
        v15 = *a2 & 0xFFF;
        __asm__ volatile("" ::"r"(v15));
      }
      goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  {
    v22 = *(_QWORD*)(v14 + 8 * v15);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(unsigned __int16*)(v22 + 656);
    __asm__ volatile("" ::"r"(v23));
  }
  if (*(_WORD*)(v22 + 656) == 0) {
    goto LABEL_31;
  }
  {
    v24 = (__int64*)(*(_QWORD*)(v22 + 664) + 8LL);
    __asm__ volatile("" ::"r"(v24));
  }
  while (1) {
    {
      v26 = *v24;
      __asm__ volatile("" ::"r"(v26));
    }
    v24 += 2;
    v25 = v26;
    if (v26 != 0 && *(_BYTE*)(v25 + 57) == 14) {
      break;
    }
    if (--v23 == 0) {
      goto LABEL_31;
    }
  }
  {
    v27 = *(_QWORD*)(GameData_21cd158 + 16);
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = *(_QWORD**)(v27 + 18872);
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v29 = *(_QWORD**)(v27 + 18880);
    __asm__ volatile("" ::"r"(v29));
  }
  if (v28 == v29) {
  LABEL_31:
    v30 = 0;
  }
  else {
    v30 = 0;
    do {
      v31 = (_WORD*)*v28;
      if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v28 + 216LL))(*v28) == a1) {
        if (((*(__int64 (**)(_WORD*))(*(_QWORD*)v31 + 480LL))(v31) & 1) != 0) {
          v31[10] |= 2u;
        }
        else {
          (*(void (**)(_WORD*))(*(_QWORD*)v31 + 416LL))(v31);
        }
        v30 = 1;
        *(_BYTE*)(v27 + 92848) = 1;
      }
      ++v28;
    } while (v28 != v29);
  }
  f_.v48 = v30;
  f_.v50[0] = GameData_1fad618;
  f_.v50[1] = &f_.v48;
  f_.v50[2] = &f_.v49;
  f_.v50[3] = a2;
  f_.v51 = f_.v50;
  if (*(int*)(a3 + 12356) < 1) {
    game_map_MapSkill_TryPutTerrain_lambda0_Invoke_912c40((__int64)f_.v50,
                                                          a3 + 52);
  }
  else {
    v32 = a3 + 68;
    v33 = 0;
    do {
      if (f_.v51 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64))(*f_.v51 + 48LL))(f_.v51, v32);
      ++v33;
      v32 += 12;
    } while (v33 < *(int*)(a3 + 12356));
  }
  if (f_.v51 == f_.v50) {
    v34 = 32;
  }
  else {
    if (f_.v51 == nullptr) {
      goto LABEL_43;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*f_.v51 + v34))((__int64)f_.v51);
LABEL_43:
  result = f_.v48;
  if (f_.v48 != 1) {
    return result;
  }
  v35 = f_.v49;
  v36 = f_.v48;
  Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    f_.v50[0] = GameData_1fb24f8;
    f_.v51 = f_.v50;
    game_9903e0((__int64)f_.v50);
    if (f_.v51 == f_.v50) {
      v43 = 32;
      goto LABEL_50;
    }
    if (f_.v51 != nullptr) {
      v43 = 40;
    LABEL_50:
      (*(void (**)(__int64))(*f_.v51 + v43))((__int64)f_.v51);
    }
  }
  {
    v44 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
    __asm__ volatile("" ::"r"(v44));
  }
  if (*(_WORD*)(v44 + 656) == 0 || *(_QWORD*)(v44 + 856) == 0) {
    v46 = nullptr;
  }
  else {
    v46 = *(_BYTE**)(v44 + 856);
    __asm__ volatile("" ::"r"(v46));
  }
  GameRoutine_7aa840(v46, v35);
  result = v36;
  {
    v47 = *GameData_21309c8[0];
    __asm__ volatile("" ::"r"(v47));
  }
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v47 + 8) == 1 &&
      (*(_BYTE*)(v47 + 9) & 1) == 0) {
    *(_DWORD*)(v47 + 12) |= 0x402u;
  }
  return result;
}

__int64 game_10fa9e0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  bool v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 (***v59)();
  __int64 (***v60)();
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  _BYTE* v70;
  _BYTE* v71;
  bool v72;
  __int64* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  struct {
    _QWORD v102[4];
    _QWORD* v103;
  } v102_;
  struct {
    __int64 (**v104)();
    __int64 v105;
    char gap64_[16];
    __int64 (***v106)();
  } v104_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex((__int64)GameData_212df28),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      56, 16, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (_QWORD*)*a2;
  *(_BYTE*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 17) = 33686018;
  v7 = v5;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)v5 = game_character_PhysicsObject_vtable;
  *(_QWORD*)(v5 + 8) = a1;
  v8 = v6[76];
  v9 = v6[77];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = v6[78];
    *(_QWORD*)(v5 + 24) = v8;
    *(_QWORD*)(v5 + 32) = v9;
  }
  else {
    v10 = v6[78];
    *(_QWORD*)(v5 + 24) = v8;
  }
  *(_QWORD*)(v5 + 40) = v10;
  v11 = *(_DWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_DWORD*)(a1 + 784) = 0;
  *(_DWORD*)(a1 + 296) = v11 & 0xFFFFFFFB;
  v12 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
    v14 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
              1000 -
          *(_QWORD*)(v12 + 136),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = 0x1.e848000000000p+19f;
  }
  else {
    v14 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
          1000000,
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = 0x1.f400000000000p+9f;
  }
  *(float*)(v7 + 48) = (float)v14 / v15;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236610,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2236610) != 0) {
    GameData_2236608 = wld_Crc32(0, "RigidBody", 9u),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release((__int64)&GameData_2236610),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v16 = *(_QWORD*)(a1 + 512);
  v17 = v16;
  do {
    if (v17 == *(_QWORD*)(a1 + 504)) {
      goto LABEL_13;
    }
    v18 = *(_DWORD*)(v17 - 16);
    v17 -= 16;
    v16 -= 16;
  } while (v18 != GameData_2236608);
  if (*(_QWORD*)(a1 + 512) == v16 || (v19 = *(_QWORD*)(v16 + 8)) == 0) {
  LABEL_13:
    nn_os_LockMutex((__int64)&GameData_2167580),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = fw_memory_HeapManager_Allocate(*v4, 96, 16, 0),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(v20 + 16) = 0;
    *(_DWORD*)(v20 + 17) = 33686018;
    v19 = v20;
    v21 = GameData_212e378[0];
    *(_QWORD*)(v20 + 24) = 0;
    *(_WORD*)(v20 + 32) = 0;
    *(_QWORD*)(v20 + 80) = 0;
    *(_QWORD*)v20 = v21 + 16;
    *(_QWORD*)(v20 + 8) = a1;
    wld_a5f660(v20, 1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236610,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2236610) != 0) {
      GameData_2236608 = wld_Crc32(0, "RigidBody", 9u),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release((__int64)&GameData_2236610),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v22 = *(_QWORD*)(a1 + 504);
    v23 = *(_QWORD*)(a1 + 512);
    v24 = v23;
    LODWORD(v104_.v104) = GameData_2236608;
    v104_.v105 = v19;
    while (v24 != v22) {
      v25 = *(_DWORD*)(v24 - 16);
      v24 -= 16;
      if (v25 == GameData_2236608) {
        if ((*(_BYTE*)(v19 + 16) & 1) != 0) {
          goto LABEL_32;
        }
        goto LABEL_26;
      }
    }
    if (v22 == v23 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v22) <= 0x6F) {
      v26 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a1 + 504) = v26;
      *(_QWORD*)(a1 + 512) = v26;
      *(_QWORD*)(a1 + 520) = v26 + 112;
      if (v23 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v27, v22),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    GameRoutine_98f140((__int64*)(a1 + 504), &v104_.v104),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((*(_BYTE*)(v19 + 16) & 1) == 0) {
    LABEL_26:
      *(_BYTE*)(v19 + 16) = 1;
      *(_BYTE*)(v19 + 17) &= ~2u;
      *(_BYTE*)(v19 + 18) &= ~2u;
      *(_BYTE*)(v19 + 19) &= ~2u;
      *(_BYTE*)(v19 + 20) &= ~2u;
      v28 = *(_BYTE**)(v19 + 8);
      v28[632] = 0;
      v28[664] = 0;
      v28[696] = 0;
      v28[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 64LL))(v19),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v29 = *(_BYTE**)(v19 + 8);
      v30 = v29[300] == 3 && v29[301] == 3;
      if (v30 || v29[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 72LL))(v19),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  LABEL_32:
    v31 = *(__int64**)(a1 + 536);
    v32 = *(_QWORD*)(a1 + 544);
    if ((unsigned __int64)v31 >= v32) {
      v34 = *(_QWORD*)(a1 + 528);
      v35 = (char*)v31 - v34;
      v36 = ((__int64)v31 - v34) >> 3;
      v37 = v36 + 1;
      if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        goto LABEL_130;
      }
      v38 = v32 - v34;
      if (v38 >> 2 > v37) {
        v37 = v38 >> 2;
      }
      if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
        v39 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v39 = v37;
      }
      if (v39 != 0) {
        if (v39 >> 61 != 0) {
          goto LABEL_131;
        }
        v40 = fw_memory_HeapManager_Allocate(*v4, 8 * v39, 16, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v40 = 0;
      }
      v41 = v40 + 8 * v39;
      v42 = (unsigned __int64)v31 - v34;
      v43 = (__int64)&v35[v40 + -8 * v36];
      *(_QWORD*)&v35[v40] = v19;
      v33 = (__int64)&v35[v40 + 8];
      GameRoutine_1a0b950(v43, v34, v42),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a1 + 528) = v43;
      *(_QWORD*)(a1 + 536) = v33;
      *(_QWORD*)(a1 + 544) = v41;
      if (v34 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v44, v34),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      *v31 = v19;
      v33 = (__int64)(v31 + 1);
    }
    *(_QWORD*)(a1 + 536) = v33;
    v45 = *(__int64**)(a1 + 560);
    v46 = *(_QWORD*)(a1 + 568);
    if ((unsigned __int64)v45 >= v46) {
      v48 = *(_QWORD*)(a1 + 552);
      v49 = (char*)v45 - v48;
      v50 = ((__int64)v45 - v48) >> 3;
      v51 = v50 + 1;
      if ((unsigned __int64)(v50 + 1) >> 61 != 0) {
        goto LABEL_130;
      }
      v52 = v46 - v48;
      if (v52 >> 2 > v51) {
        v51 = v52 >> 2;
      }
      if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
        v53 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v53 = v51;
      }
      if (v53 != 0) {
        if (v53 >> 61 != 0) {
          goto LABEL_131;
        }
        v54 = fw_memory_HeapManager_Allocate(*v4, 8 * v53, 16, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v54 = 0;
      }
      v55 = v54 + 8 * v53;
      v56 = (unsigned __int64)v45 - v48;
      v57 = (__int64)&v49[v54 + -8 * v50];
      *(_QWORD*)&v49[v54] = v19;
      v47 = (__int64)&v49[v54 + 8];
      GameRoutine_1a0b950(v57, v48, v56),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a1 + 552) = v57;
      *(_QWORD*)(a1 + 560) = v47;
      *(_QWORD*)(a1 + 568) = v55;
      if (v48 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v58, v48),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      *v45 = v19;
      v47 = (__int64)(v45 + 1);
    }
    *(_QWORD*)(a1 + 560) = v47;
    GameRoutine_a8c0c0(a1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 576) = 1;
    nn_os_UnlockMutex((__int64)GameData_212df28),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v59 = (__int64 (***)(void))(v19 + 48),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v102_.v102[0] = GameData_200e060;
  v102_.v102[1] = v7;
  v60 = &v104_.v104;
  v102_.v103 = v102_.v102;
  v104_.v106 = &v104_.v104;
  v104_.v104 = GameData_200e060;
  v104_.v105 = v7;
  if ((__int64 (***)(void))(v19 + 48) != &v104_.v104) {
    v60 = *(__int64 (****)())(v19 + 80),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v60 == v59) {
      v104_.v106 = nullptr;
      ((void (*)(__int64 (***)(void), __int64 (***)(void)))(*v60)[3])(
          v60, &v104_.v104),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(v19 + 80) + 32LL))(
          *(_QWORD*)(v19 + 80)),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v104_.v106 = &v104_.v104;
      *(_QWORD*)(v19 + 48) = GameData_200e060;
      *(_QWORD*)(v19 + 56) = v7;
      v61 = 4;
      v60 = &v104_.v104;
      *(_QWORD*)(v19 + 80) = v59;
      goto LABEL_72;
    }
    *(_QWORD*)(v19 + 48) = GameData_200e060;
    *(_QWORD*)(v19 + 56) = v7;
    v104_.v106 = v60;
    *(_QWORD*)(v19 + 80) = v59;
    if (v60 != &v104_.v104) {
      if (v60 == nullptr) {
        v62 = v102_.v102;
        goto LABEL_76;
      }
      v61 = 5;
    LABEL_72:
      ((void (*)(__int64 (***)(void), __int64))(*v60)[v61])(v60, v13),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v62 = v102_.v103;
      if (v102_.v103 == v102_.v102) {
      LABEL_76:
        v63 = 32;
        goto LABEL_77;
      }
      if (v102_.v103 != nullptr) {
        v63 = 40;
      LABEL_77:
        (*(void (**)(_QWORD*, __int64))(*v62 + v63))(v62, v13),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236600,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_2236600) != 0) {
        GameData_22365f8 = wld_Crc32(0, "PhysicsObject", 0xDu),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        __cxa_guard_release((__int64)&GameData_2236600),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v64 = *(_QWORD*)(a1 + 504);
      v65 = *(_QWORD*)(a1 + 512);
      v66 = v65;
      LODWORD(v104_.v104) = GameData_22365f8;
      v104_.v105 = v7;
      while (v66 != v64) {
        v67 = *(_DWORD*)(v66 - 16);
        v66 -= 16;
        if (v67 == GameData_22365f8) {
          if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
            goto LABEL_97;
          }
          goto LABEL_91;
        }
      }
      if (v64 == v65 &&
          (unsigned __int64)(*(_QWORD*)(a1 + 520) - v64) <= 0x6F) {
        v68 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 504) = v68;
        *(_QWORD*)(a1 + 512) = v68;
        *(_QWORD*)(a1 + 520) = v68 + 112;
        if (v65 != 0) {
          v69 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v69, v64),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      GameRoutine_98f140((__int64*)(a1 + 504), &v104_.v104),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((*(_BYTE*)(v7 + 16) & 1) == 0) {
      LABEL_91:
        *(_BYTE*)(v7 + 16) = 1;
        *(_BYTE*)(v7 + 17) &= ~2u;
        *(_BYTE*)(v7 + 18) &= ~2u;
        *(_BYTE*)(v7 + 19) &= ~2u;
        *(_BYTE*)(v7 + 20) &= ~2u;
        v70 = *(_BYTE**)(v7 + 8);
        v70[632] = 0;
        v70[664] = 0;
        v70[696] = 0;
        v70[728] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v71 = *(_BYTE**)(v7 + 8);
        v72 = v71[300] == 3 && v71[301] == 3;
        if (v72 || v71[302] == 1) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    LABEL_97:
      v73 = *(__int64**)(a1 + 536);
      v74 = *(_QWORD*)(a1 + 544);
      if ((unsigned __int64)v73 >= v74) {
        v76 = *(_QWORD*)(a1 + 528);
        v77 = (char*)v73 - v76;
        v78 = ((__int64)v73 - v76) >> 3;
        v79 = v78 + 1;
        if ((unsigned __int64)(v78 + 1) >> 61 != 0) {
          goto LABEL_130;
        }
        v80 = v74 - v76;
        if (v80 >> 2 > v79) {
          v79 = v80 >> 2;
        }
        if ((unsigned __int64)v80 >= 0x7FFFFFFFFFFFFFF8LL) {
          v81 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v81 = v79;
        }
        if (v81 != 0) {
          if (v81 >> 61 != 0) {
            goto LABEL_131;
          }
          v82 = fw_memory_HeapManager_Allocate(*v4, 8 * v81, 16, 0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v82 = 0;
        }
        v83 = v82 + 8 * v81;
        v84 = (unsigned __int64)v73 - v76;
        v85 = (__int64)&v77[v82 + -8 * v78];
        *(_QWORD*)&v77[v82] = v7;
        v75 = (__int64)&v77[v82 + 8];
        GameRoutine_1a0b950(v85, v76, v84),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 528) = v85;
        *(_QWORD*)(a1 + 536) = v75;
        *(_QWORD*)(a1 + 544) = v83;
        if (v76 != 0) {
          v86 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v86, v76),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        *v73 = v7;
        v75 = (__int64)(v73 + 1);
      }
      *(_QWORD*)(a1 + 536) = v75;
      v87 = *(__int64**)(a1 + 560);
      v88 = *(_QWORD*)(a1 + 568);
      if ((unsigned __int64)v87 < v88) {
        *v87 = v7;
        v89 = (__int64)(v87 + 1);
        goto LABEL_129;
      }
      v90 = *(_QWORD*)(a1 + 552);
      v91 = (char*)v87 - v90;
      v92 = ((__int64)v87 - v90) >> 3;
      v93 = v92 + 1;
      if ((unsigned __int64)(v92 + 1) >> 61 != 0) {
      LABEL_130:
        GameRoutine_98f290(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v94 = v88 - v90;
      if (v94 >> 2 > v93) {
        v93 = v94 >> 2;
      }
      if ((unsigned __int64)v94 >= 0x7FFFFFFFFFFFFFF8LL) {
        v95 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v95 = v93;
      }
      if (v95 != 0) {
        if (v95 >> 61 == 0) {
          v96 = fw_memory_HeapManager_Allocate(*v4, 8 * v95, 16, 0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_125;
        }
      LABEL_131:
        GameRoutine_60a210(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v96 = 0;
    LABEL_125:
      v97 = v96 + 8 * v95;
      v98 = (unsigned __int64)v87 - v90;
      v99 = (__int64)&v91[v96 + -8 * v92];
      *(_QWORD*)&v91[v96] = v7;
      v89 = (__int64)&v91[v96 + 8];
      GameRoutine_1a0b950(v99, v90, v98),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a1 + 552) = v99;
      *(_QWORD*)(a1 + 560) = v89;
      *(_QWORD*)(a1 + 568) = v97;
      if (v90 != 0) {
        v100 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v100, v90),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    LABEL_129:
      *(_QWORD*)(a1 + 560) = v89;
      GameRoutine_a8c0c0(a1),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_BYTE*)(a1 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return v7;
    }
  }
  v61 = 4;
  goto LABEL_72;
}

void game_113de80(_QWORD* a1, __int64 a2, __int64** a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int8 v21;
  unsigned __int8 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int8x16_t v30;
  int8x16_t v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int32 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  char* v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  char v73;
  int v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  int v84;
  unsigned __int64 v85;
  const char* v86;
  char* v87;
  const char* v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  unsigned __int32 v94;
  unsigned __int32 v95;
  unsigned __int32 v96;
  unsigned __int32 v97;
  bool v98;
  float v99;
  unsigned __int32 v100;
  unsigned __int32 v101;
  unsigned __int32 v102;
  unsigned __int32 v103;
  float v104;
  unsigned __int32 v105;
  unsigned __int32 v106;
  unsigned __int32 v107;
  unsigned __int32 v108;
  float v109;
  const char* v110;
  __int64 v111;
  unsigned __int32 v112;
  unsigned __int32 v113;
  unsigned __int32 v114;
  unsigned __int32 v115;
  float v116;
  unsigned __int32 v117;
  unsigned __int32 v118;
  unsigned __int32 v119;
  unsigned __int32 v120;
  float v121;
  unsigned __int32 v122;
  unsigned __int32 v123;
  unsigned __int32 v124;
  unsigned __int32 v125;
  float v126;
  const char* v127;
  const char* v128;
  __int64* v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned __int8 v134;
  __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  const char* v143;
  __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  _QWORD* v147;
  float v148;
  unsigned int v149;
  float v150;
  unsigned __int32 v151;
  __int64 v152;
  float v153;
  unsigned int v154;
  float v155;
  unsigned __int32 v156;
  __int64 v157;
  float v158;
  unsigned int v159;
  float v160;
  unsigned __int32 v161;
  __int64 v162;
  int v163;
  _QWORD* v164;
  __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64* v172;
  char v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v178;
  __int64* v181;
  unsigned __int64 v182;
  _QWORD* v183;
  __int64 v184;
  struct {
    __int64 v185;
    char* v186;
  } v185_;
  int8x16x4_t v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  struct {
    __int64 v190[2];
    char* v191;
  } v190_;
  struct {
    __int64 v192[2];
    char* v193;
  } v192_;
  struct {
    __int64 v194[2];
    char* v195;
  } v194_;
  struct {
    __int16 v196[8];
    __int64 v197;
  } v196_;
  struct {
    _BYTE v198[20];
    char gap316_[4];
    _BYTE v199[19];
    char gap339_[5];
    _QWORD v200[3];
    _QWORD v201[3];
  } v198_;
  struct {
    __int64 v202;
    unsigned __int64 v203;
    char* v204;
  } v202_;
  struct {
    __int64 v205;
    unsigned __int64 v206;
    char* v207;
  } v205_;

  v3 = *a3;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*a3 != a3[1]) {
    v5 = 0;
    v181 = nullptr;
    v182 = 0;
    while (1) {
      if ((*(_BYTE*)v3 & 1) != 0) {
        fw_text_String_CopyTerminated(&v205_.v205, v3[2], v3[1]);
      }
      else {
        v6 = *v3;
        v7 = v3[2];
        v205_.v206 = v3[1];
        v205_.v207 = (char*)v7;
        v205_.v205 = v6;
      }
      v8 = v205_.v206;
      v9 = v205_.v205 & 1;
      v10 = v9 != 0 ? v205_.v206
                    : (unsigned __int64)(unsigned __int8)v205_.v205 >> 1;
      if (v10 != 0) {
        break;
      }
      if (v9 != 0) {
        goto LABEL_86;
      }
    LABEL_3:
      v3 += 3;
      if (v3 == a3[1]) {
        goto LABEL_151;
      }
    }
    v11 = v5;
    v12 = (__int64)v205_.v207;
    v202_.v203 = 0;
    v202_.v204 = nullptr;
    v202_.v202 = 0;
    *(_QWORD*)((char*)v198_.v200 + 3) = 0;
    *(_QWORD*)((char*)&v198_.v200[1] + 3) = 0;
    *(_QWORD*)((char*)v198_.v201 + 3) = 0;
    *(_QWORD*)((char*)&v198_.v201[1] + 3) = 0;
    *(_OWORD*)&v198_.v199[3] = (__typeof__(*(_OWORD*)&v198_.v199[3])){0};
    if (v9 != 0) {
      v13 = v205_.v207;
    }
    else {
      v13 = (char*)&v205_.v205 + 1;
    }
    if (v10 < 1) {
      goto LABEL_31;
    }
    v14 = &v13[v10];
    v15 = v10;
    v16 = (__int64)v13;
    while (1) {
      v17 = (char*)GameRoutine_1a09c60(v16, 40, v15);
      if (v17 == nullptr) {
        goto LABEL_31;
      }
      if (*v17 == 40) {
        break;
      }
      v16 = (__int64)(v17 + 1);
      v15 = (unsigned __int64)&v14[-v16];
      if ((__int64)&v14[-v16] < 1) {
        goto LABEL_31;
      }
    }
    if (v17 == v14 || (v18 = v17 - v13, v17 - v13 == -1)) {
    LABEL_31:
      if (v9 != 0) {
        GameRoutine_64df20(&v202_.v202, v12, v8);
        v21 = 0;
        LOBYTE(v9) = 0;
        v22 = 0;
      }
      else {
        v21 = 0;
        v22 = 0;
        v202_.v202 = v205_.v205;
        v202_.v203 = v205_.v206;
        v202_.v204 = v205_.v207;
      }
      goto LABEL_34;
    }
    if (v10 >= v18) {
      v19 = v17 - v13;
    }
    else {
      v19 = v10;
    }
    if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_308;
    }
    if (v19 >= 0x17) {
      if ((v19 | 7) == 0x17) {
        v55 = 26;
      }
      else {
        v55 = (v19 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate(*v4, v55, 16, 0);
      v185_.v185 = v19;
      v185_.v186 = v20;
      v184 = v55 | 1;
    }
    else {
      v20 = (char*)&v184 + 1;
      LOBYTE(v184) = 2 * v19;
      if (v17 == v13) {
        goto LABEL_96;
      }
    }
    GameRoutine_1a0b940((__int64)v20, (__int64)v13, v19);
  LABEL_96:
    v56 = v202_.v202;
    v20[v19] = 0;
    if ((v56 & 1) != 0 && v202_.v204 != nullptr) {
      v57 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v57, (__int64)v202_.v204);
    }
    v202_.v202 = v184;
    v202_.v203 = v185_.v185;
    v202_.v204 = v185_.v186;
    v58 = v205_.v206;
    if ((v205_.v205 & 1) == 0) {
      v58 = (unsigned __int64)(unsigned __int8)v205_.v205 >> 1;
    }
    if (v18 >= v58) {
      fs_60a230();
    }
    v59 = v18 + 1;
    v60 = v58 - v59;
    if ((v205_.v205 & 1) != 0) {
      v61 = v205_.v207;
    }
    else {
      v61 = (char*)&v205_.v205 + 1;
    }
    if (v60 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_308:
      String_60a1d0();
    }
    if (v60 >= 0x17) {
      if ((v60 | 7) == 0x17) {
        v63 = 26;
      }
      else {
        v63 = (v60 | 7) + 1;
      }
      v62 = (char*)fw_memory_HeapManager_Allocate(*v4, v63, 16, 0);
      v185_.v185 = v60;
      v185_.v186 = v62;
      v184 = v63 | 1;
    }
    else {
      v62 = (char*)&v184 + 1;
      LOBYTE(v184) = 2 * v60;
      if (v58 == v59) {
      LABEL_116:
        v62[v60] = 0;
        v198_.v198[2] = 0;
        v196_.v196[0] = 0;
        *(_WORD*)v198_.v198 = 10498;
        GameRoutine_112cc60((__int64)&v205_.v205, v198_.v198,
                            (unsigned __int8*)v196_.v196);
        if ((v196_.v196[0] & 1) != 0 && v196_.v197 != 0) {
          v64 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v64, v196_.v197);
        }
        v65 = v184;
        if ((v184 & 1) != 0) {
          fw_text_String_CopyTerminated(v194_.v194, (__int64)v185_.v186,
                                        v185_.v185);
        }
        else {
          v194_.v194[0] = v184;
          v194_.v194[1] = v185_.v185;
          v194_.v195 = v185_.v186;
        }
        game_113f5c0((void*)((__int64)v198_.v198), (unsigned __int8*)v194_.v194,
                     "CenterX", 0x0.0p+0f);
        v21 = v198_.v198[0];
        v198_.v201[0] = *(_QWORD*)&v198_.v198[1];
        v198_.v201[1] = *(_QWORD*)&v198_.v198[9];
        *(_DWORD*)((char*)&v198_.v201[1] + 7) = *(_DWORD*)&v198_.v198[16];
        if ((v194_.v194[0] & 1) != 0 && v194_.v195 != nullptr) {
          v66 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v66, (__int64)v194_.v195);
        }
        if ((v65 & 1) != 0) {
          fw_text_String_CopyTerminated(v192_.v192, (__int64)v185_.v186,
                                        v185_.v185);
        }
        else {
          v192_.v192[0] = v184;
          v192_.v192[1] = v185_.v185;
          v192_.v193 = v185_.v186;
        }
        game_113f5c0((void*)((__int64)v198_.v198), (unsigned __int8*)v192_.v192,
                     "CenterY", 0x0.0p+0f);
        LOBYTE(v9) = v198_.v198[0];
        v198_.v200[0] = *(_QWORD*)&v198_.v198[1];
        v198_.v200[1] = *(_QWORD*)&v198_.v198[9];
        *(_DWORD*)((char*)&v198_.v200[1] + 7) = *(_DWORD*)&v198_.v198[16];
        if ((v192_.v192[0] & 1) != 0 && v192_.v193 != nullptr) {
          v67 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v67, (__int64)v192_.v193);
        }
        if ((v65 & 1) != 0) {
          fw_text_String_CopyTerminated(v190_.v190, (__int64)v185_.v186,
                                        v185_.v185);
        }
        else {
          v190_.v190[0] = v184;
          v190_.v190[1] = v185_.v185;
          v190_.v191 = v185_.v186;
        }
        game_113f5c0((void*)((__int64)v198_.v198), (unsigned __int8*)v190_.v190,
                     "Scale", 0x1.0000000000000p+0f);
        v22 = v198_.v198[0];
        qmemcpy(v198_.v199, &v198_.v198[1], sizeof(v198_.v199));
        if ((v190_.v190[0] & 1) != 0 && v190_.v191 != nullptr) {
          v68 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v68, (__int64)v190_.v191);
        }
        if ((v65 & 1) != 0 && v185_.v186 != nullptr) {
          v69 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v69, (__int64)v185_.v186);
        }
      LABEL_34:
        *(unsigned __int64*)((char*)LANES128(v187.val[3]).n128_u64 + 4) = 0;
        v184 = 0;
        v185_.v185 = 0;
        v5 = v11;
        v185_.v186 = nullptr;
        LANES128(v187.val[0]).n128_u8[0] = 0;
        memset(&LANES128(v187.val[0]).n128_u8[4], 0, 17);
        memset(&LANES128(v187.val[1]).n128_i8[8], 0, 17);
        *(unsigned __int64*)((char*)&LANES128(v187.val[2]).n128_u64[1] + 4) =
            0x3F8000003F800000LL;
        if ((v202_.v202 & 1) != 0) {
          GameRoutine_64df20(&v184, (__int64)v202_.v204, v202_.v203);
        }
        else {
          v184 = v202_.v202;
          v185_.v185 = v202_.v203;
          v185_.v186 = v202_.v204;
        }
        LANES128(v187.val[0]).n128_u8[0] = v21;
        LANES128(v187.val[1]).n128_u8[4] = v9;
        LANES128(v187.val[2]).n128_u8[8] = v22;
        *(unsigned __int64*)((char*)LANES128(v187.val[0]).n128_u64 + 1) =
            v198_.v201[0];
        *(unsigned __int64*)((char*)&LANES128(v187.val[0]).n128_u64[1] + 1) =
            v198_.v201[1];
        LANES128(v187.val[1]).n128_u32[0] =
            *(_DWORD*)((char*)&v198_.v201[1] + 7);
        *(unsigned __int64*)((char*)LANES128(v187.val[1]).n128_u64 + 5) =
            v198_.v200[0];
        *(unsigned __int64*)((char*)&LANES128(v187.val[1]).n128_u64[1] + 5) =
            v198_.v200[1];
        LANES128(v187.val[2]).n128_u32[1] =
            *(_DWORD*)((char*)&v198_.v200[1] + 7);
        qmemcpy((char*)&LANES128(v187.val[2]).n128_f32[2] + 1, v198_.v199, 19);
        if ((unsigned __int64)v181 >= v182) {
          v26 = (char*)v181 - v11;
          v27 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v181 - v11) >> 3) + 1;
          if (v27 > 0x2E8BA2E8BA2E8BALL) {
            GameRoutine_113fc50();
          }
          if (0x5D1745D1745D1746LL * ((__int64)(v182 - v11) >> 3) > v27) {
            v27 = 0x5D1745D1745D1746LL * ((__int64)(v182 - v11) >> 3);
          }
          if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL *
                                 ((__int64)(v182 - v11) >> 3)) >=
              0x1745D1745D1745DLL) {
            v28 = 0x2E8BA2E8BA2E8BALL;
          }
          else {
            v28 = v27;
          }
          if (v28 != 0) {
            if (v28 > 0x2E8BA2E8BA2E8BALL) {
              GameRoutine_60a210();
            }
            v29 = fw_memory_HeapManager_Allocate(*v4, 88 * v28, 16, 0);
          }
          else {
            v29 = 0;
          }
          v33 = &v26[v29];
          if ((v184 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)&v26[v29],
                                          (__int64)v185_.v186, v185_.v185);
          }
          else {
            v34 = v185_.v185;
            *(_QWORD*)v33 = v184;
            *((_QWORD*)v33 + 1) = v34;
            *((_QWORD*)v33 + 2) = v185_.v186;
          }
          v35 = LANES128(v187.val[3]).n128_u64[0];
          *(int8x16_t*)(v33 + 56) = v187.val[2];
          v36 = LANES128(v187.val[3]).n128_u32[2];
          *((_QWORD*)v33 + 9) = v35;
          *((_DWORD*)v33 + 20) = v36;
          *(int8x16_t*)(v33 + 24) = v187.val[0];
          *(int8x16_t*)(v33 + 40) = v187.val[1];
          if ((__int64*)v11 != v181) {
            v37 = v11;
            v38 = v29;
            do {
              v39 = *(_QWORD*)v37;
              v40 = *(_QWORD*)(v37 + 16);
              *(_QWORD*)(v38 + 8) = *(_QWORD*)(v37 + 8);
              *(_QWORD*)(v38 + 16) = v40;
              *(_QWORD*)v38 = v39;
              *(_QWORD*)(v37 + 8) = 0;
              *(_QWORD*)(v37 + 16) = 0;
              *(_QWORD*)v37 = 0;
              v42 = *(_QWORD*)(v37 + 64);
              v41 = *(_QWORD*)(v37 + 72);
              v43 = *(_QWORD*)(v37 + 56);
              *(_DWORD*)(v38 + 80) = *(_DWORD*)(v37 + 80);
              *(_QWORD*)(v38 + 64) = v42;
              *(_QWORD*)(v38 + 72) = v41;
              *(_QWORD*)(v38 + 56) = v43;
              v44 = *(_QWORD*)(v37 + 24);
              v45 = *(_QWORD*)(v37 + 32);
              v46 = *(_QWORD*)(v37 + 40);
              v47 = *(_QWORD*)(v37 + 48);
              v37 += 88;
              *(_QWORD*)(v38 + 40) = v46;
              *(_QWORD*)(v38 + 48) = v47;
              *(_QWORD*)(v38 + 24) = v44;
              *(_QWORD*)(v38 + 32) = v45;
              v38 += 88;
            } while ((__int64*)v37 != v181);
            v48 = (__int64*)v11;
            do {
              if ((*(_BYTE*)v48 & 1) != 0) {
                v49 = v48[2];
                if (v49 != 0) {
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v50 = 128;
                  }
                  else {
                    v50 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v50, v49);
                }
              }
              v48 += 11;
            } while (v48 != v181);
          }
          v181 = (__int64*)(v33 + 88);
          v182 = v29 + 88 * v28;
          if (v11 != 0) {
            v4 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v11);
            v5 = v29;
            if ((v184 & 1) == 0) {
              goto LABEL_79;
            }
          }
          else {
            v5 = v29;
            v4 = (__int64*)fw_memory_g_heap_manager_ptr;
            if ((v184 & 1) == 0) {
              goto LABEL_79;
            }
          }
        }
        else {
          if ((v184 & 1) != 0) {
            v25 = v181;
            fw_text_String_CopyTerminated(v181, (__int64)v185_.v186,
                                          v185_.v185);
          }
          else {
            v23 = v184;
            v24 = (__int64)v185_.v186;
            v25 = v181;
            v181[1] = v185_.v185;
            v181[2] = v24;
            *v181 = v23;
          }
          v30 = v187.val[0];
          *(int8x16_t*)(v25 + 5) = v187.val[1];
          *(int8x16_t*)(v25 + 3) = v30;
          v31 = v187.val[2];
          v32 = LANES128(v187.val[3]).n128_u64[0];
          *((_DWORD*)v25 + 20) = LANES128(v187.val[3]).n128_u32[2];
          v25[8] = LANES128(v31).n128_i64[1];
          v25[9] = v32;
          v25[7] = LANES128(v31).n128_u64[0];
          v181 = v25 + 11;
          if ((v184 & 1) == 0) {
            goto LABEL_79;
          }
        }
        if (v185_.v186 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v52 = 128;
          }
          else {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v52, (__int64)v185_.v186);
        }
      LABEL_79:
        if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v53 = 128;
          }
          else {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v53, (__int64)v202_.v204);
        }
        if ((v205_.v205 & 1) == 0) {
          goto LABEL_3;
        }
      LABEL_86:
        if (v205_.v207 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v54 = 128;
          }
          else {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v54, (__int64)v205_.v207);
        }
        goto LABEL_3;
      }
    }
    GameRoutine_1a0b940((__int64)v62, (__int64)&v61[v59], v60);
    goto LABEL_116;
  }
  v5 = 0;
  v181 = nullptr;
LABEL_151:
  v70 = v181;
  v178 = v5;
  v71 = a1[7];
  v183 = a1 + 6;
  if ((_QWORD*)v71 != a1 + 6) {
  LABEL_154:
    if ((__int64*)v5 == v70) {
    LABEL_221:
      if ((*(_BYTE*)(v71 + 20) & 1) == 0) {
        v127 = *(const char**)(v71 + 40);
        *(_BYTE*)(v71 + 20) = 1;
        if ((*(_BYTE*)(v71 + 24) & 1) != 0) {
          v128 = v127;
        }
        else {
          v128 = (const char*)(v71 + 25);
        }
        v129 = (__int64*)GameData_2241708;
        v130 = GameData_2241710;
        while (v129 != (__int64*)v130) {
          v131 = *v129;
          if (GameHr_13777b0(*v129, v128)) {
            v132 = *(_QWORD*)(v131 + 8);
            if (v132 != 0) {
              while (1) {
                if (*(_BYTE*)v132 == 2) {
                  if (*(_DWORD*)(v132 + 32) == 6) {
                    *(_QWORD*)(v131 + 16) = v132;
                    *(_WORD*)(v131 + 136) &= ~0x80u;
                    break;
                  }
                }
                else if (*(_BYTE*)v132 == 0) {
                  break;
                }
                v132 += 64;
              }
            }
          }
          ++v129;
        }
      }
      goto LABEL_153;
    }
    v72 = v178;
    v73 = 0;
    while (1) {
      if ((*(_BYTE*)v72 & 1) != 0) {
        fw_text_String_CopyTerminated(&v184, *(_QWORD*)(v72 + 16),
                                      *(_QWORD*)(v72 + 8));
      }
      else {
        v75 = *(_QWORD*)v72;
        v76 = *(_QWORD*)(v72 + 16);
        v185_.v185 = *(_QWORD*)(v72 + 8);
        v185_.v186 = (char*)v76;
        v184 = v75;
      }
      v77 = *(_QWORD*)(v72 + 24);
      v78 = *(_QWORD*)(v72 + 32);
      v79 = *(_QWORD*)(v72 + 48);
      LANES128(v187.val[1]).n128_u64[0] = *(_QWORD*)(v72 + 40);
      LANES128(v187.val[1]).n128_u64[1] = v79;
      LANES128(v187.val[0]).n128_u64[0] = v77;
      LANES128(v187.val[0]).n128_u64[1] = v78;
      v80 = *(_QWORD*)(v72 + 64);
      v81 = *(_QWORD*)(v72 + 72);
      LODWORD(v79) = *(_DWORD*)(v72 + 80);
      LANES128(v187.val[2]).n128_u64[0] = *(_QWORD*)(v72 + 56);
      LANES128(v187.val[2]).n128_u64[1] = v80;
      LANES128(v187.val[3]).n128_u64[0] = v81;
      LANES128(v187.val[3]).n128_u32[2] = v79;
      if ((v184 & 1) != 0) {
        v82 = v185_.v185;
      }
      else {
        v82 = (unsigned __int64)(unsigned __int8)v184 >> 1;
      }
      v83 = *(unsigned __int8*)(v71 + 24);
      v84 = v83 & 1;
      v85 = v83 >> 1;
      if (v84 != 0) {
        v85 = *(_QWORD*)(v71 + 32);
      }
      if (v82 == v85 &&
          ((v86 = *(const char**)(v71 + 40), (v184 & 1) != 0)
               ? (v87 = v185_.v186)
               : (v87 = (char*)&v184 + 1),
           v84 != 0 ? (v88 = *(const char**)(v71 + 40))
                    : (v88 = (const char*)(v71 + 25)),
           GameRoutine_1a09cf0((__int64)v87, (__int64)v88, v82) == 0)) {
        if (*(_BYTE*)(v71 + 20) == 1) {
          v92 = (__int64*)GameData_2241708;
          v91 = GameData_2241710;
          if (GameData_2241708 != GameData_2241710) {
            do {
              v93 = *v92;
              if (GameHr_13777b0(*v92, v88) &&
                  (*(_WORD*)(v93 + 136) & 1) == 0) {
                ProcInst_657a50(v93, 1);
              }
              ++v92;
            } while (v92 != (__int64*)v91);
            v86 = *(const char**)(v71 + 40);
            v84 = *(_BYTE*)(v71 + 24) & 1;
          }
          if (v84 != 0) {
            v110 = v86;
          }
          else {
            v110 = (const char*)(v71 + 25);
          }
          v111 = game_telop_1376490(a2, v110, 0);
          v4 = &fw_memory_g_heap_manager;
          v70 = v181;
          if (v111 != 0) {
            *(_DWORD*)(v71 + 16) = *(_DWORD*)(v111 + 148);
            if (LANES128(v187.val[0]).n128_u8[0] == 1) {
              v112 = LANES128(v187.val[0]).n128_u32[3];
              v113 = LANES128(v187.val[0]).n128_u32[2];
              v114 = LANES128(v187.val[0]).n128_u32[1];
              v115 = LANES128(v187.val[1]).n128_u32[0];
              v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
              *(_DWORD*)(v71 + 48) = LANES128(v187.val[0]).n128_u32[1];
              *(_DWORD*)(v71 + 52) = v114;
              v116 = 0x0.0p+0f;
              if (!v98) {
                v116 = 0x1.0000000000000p+0f;
                v112 = 0x1.0000000000000p+0f;
                *(_DWORD*)(v71 + 48) = v113;
                *(_DWORD*)(v71 + 52) = v113;
              }
              *(_DWORD*)(v71 + 56) = v113;
              *(float*)(v71 + 60) = v116;
              *(_DWORD*)(v71 + 64) = v112;
              *(_DWORD*)(v71 + 68) = v115;
            }
            v187.val[0] = *(int8x16_t*)((char*)&v187.val[1] + 4);
            LANES128(v187.val[1]).n128_u32[0] =
                LANES128(v187.val[2]).n128_u32[1];
            if (LANES128(v187.val[1]).n128_u8[4] == 1) {
              v117 = LANES128(v187.val[0]).n128_u32[3];
              v118 = LANES128(v187.val[0]).n128_u32[2];
              v119 = LANES128(v187.val[0]).n128_u32[1];
              v120 = LANES128(v187.val[1]).n128_u32[0];
              v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
              *(_DWORD*)(v71 + 72) = LANES128(v187.val[0]).n128_u32[1];
              *(_DWORD*)(v71 + 76) = v119;
              v121 = 0x0.0p+0f;
              if (!v98) {
                v121 = 0x1.0000000000000p+0f;
                v117 = 0x1.0000000000000p+0f;
                *(_DWORD*)(v71 + 72) = v118;
                *(_DWORD*)(v71 + 76) = v118;
              }
              *(_DWORD*)(v71 + 80) = v118;
              *(float*)(v71 + 84) = v121;
              *(_DWORD*)(v71 + 88) = v117;
              *(_DWORD*)(v71 + 92) = v120;
            }
            v187.val[0] = *(int8x16_t*)((char*)&v187.val[2] + 8);
            LANES128(v187.val[1]).n128_u32[0] =
                LANES128(v187.val[3]).n128_u32[2];
            if (LANES128(v187.val[2]).n128_u8[8] == 1) {
              v122 = LANES128(v187.val[0]).n128_u32[3];
              v123 = LANES128(v187.val[0]).n128_u32[2];
              v124 = LANES128(v187.val[0]).n128_u32[1];
              v125 = LANES128(v187.val[1]).n128_u32[0];
              v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
              *(_DWORD*)(v71 + 96) = LANES128(v187.val[0]).n128_u32[1];
              *(_DWORD*)(v71 + 100) = v124;
              v126 = 0x0.0p+0f;
              if (!v98) {
                v126 = 0x1.0000000000000p+0f;
                v122 = 0x1.0000000000000p+0f;
                *(_DWORD*)(v71 + 96) = v123;
                *(_DWORD*)(v71 + 100) = v123;
              }
              *(_DWORD*)(v71 + 104) = v123;
              *(float*)(v71 + 108) = v126;
              *(_DWORD*)(v71 + 112) = v122;
              *(_DWORD*)(v71 + 116) = v125;
            }
            *(_BYTE*)(v71 + 20) = 0;
          }
        }
        else {
          if (LANES128(v187.val[0]).n128_u8[0] == 1) {
            v94 = LANES128(v187.val[0]).n128_u32[3];
            v95 = LANES128(v187.val[0]).n128_u32[2];
            v96 = LANES128(v187.val[0]).n128_u32[1];
            v97 = LANES128(v187.val[1]).n128_u32[0];
            v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
            *(_DWORD*)(v71 + 48) = LANES128(v187.val[0]).n128_u32[1];
            *(_DWORD*)(v71 + 52) = v96;
            v99 = 0x0.0p+0f;
            if (!v98) {
              v99 = 0x1.0000000000000p+0f;
              v94 = 0x1.0000000000000p+0f;
              *(_DWORD*)(v71 + 48) = v95;
              *(_DWORD*)(v71 + 52) = v95;
            }
            *(_DWORD*)(v71 + 56) = v95;
            *(float*)(v71 + 60) = v99;
            *(_DWORD*)(v71 + 64) = v94;
            *(_DWORD*)(v71 + 68) = v97;
          }
          v187.val[0] = *(int8x16_t*)((char*)&v187.val[1] + 4);
          LANES128(v187.val[1]).n128_u32[0] = LANES128(v187.val[2]).n128_u32[1];
          if (LANES128(v187.val[1]).n128_u8[4] == 1) {
            v100 = LANES128(v187.val[0]).n128_u32[3];
            v101 = LANES128(v187.val[0]).n128_u32[2];
            v102 = LANES128(v187.val[0]).n128_u32[1];
            v103 = LANES128(v187.val[1]).n128_u32[0];
            v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
            *(_DWORD*)(v71 + 72) = LANES128(v187.val[0]).n128_u32[1];
            *(_DWORD*)(v71 + 76) = v102;
            v104 = 0x0.0p+0f;
            if (!v98) {
              v104 = 0x1.0000000000000p+0f;
              v100 = 0x1.0000000000000p+0f;
              *(_DWORD*)(v71 + 72) = v101;
              *(_DWORD*)(v71 + 76) = v101;
            }
            *(_DWORD*)(v71 + 80) = v101;
            *(float*)(v71 + 84) = v104;
            *(_DWORD*)(v71 + 88) = v100;
            *(_DWORD*)(v71 + 92) = v103;
          }
          v187.val[0] = *(int8x16_t*)((char*)&v187.val[2] + 8);
          LANES128(v187.val[1]).n128_u32[0] = LANES128(v187.val[3]).n128_u32[2];
          if (LANES128(v187.val[2]).n128_u8[8] == 1) {
            v105 = LANES128(v187.val[0]).n128_u32[3];
            v106 = LANES128(v187.val[0]).n128_u32[2];
            v107 = LANES128(v187.val[0]).n128_u32[1];
            v108 = LANES128(v187.val[1]).n128_u32[0];
            v98 = LANES128(v187.val[0]).n128_f32[3] > 0x0.0p+0f;
            *(_DWORD*)(v71 + 96) = LANES128(v187.val[0]).n128_u32[1];
            *(_DWORD*)(v71 + 100) = v107;
            v109 = 0x0.0p+0f;
            if (!v98) {
              v109 = 0x1.0000000000000p+0f;
              v105 = 0x1.0000000000000p+0f;
              *(_DWORD*)(v71 + 96) = v106;
              *(_DWORD*)(v71 + 100) = v106;
            }
            v89 = 1;
            v73 = 1;
            *(_DWORD*)(v71 + 104) = v106;
            *(float*)(v71 + 108) = v109;
            *(_DWORD*)(v71 + 112) = v105;
            *(_DWORD*)(v71 + 116) = v108;
            goto LABEL_177;
          }
        }
        v89 = 1;
        v73 = 1;
      }
      else {
        v89 = 0;
      }
    LABEL_177:
      if ((v184 & 1) != 0 && v185_.v186 != nullptr) {
        v90 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v90 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v90, (__int64)v185_.v186);
      }
      v72 += 88;
      if ((__int64*)v72 == v70) {
        v74 = 1;
      }
      else {
        v74 = v89;
      }
      if (v74 == 1) {
        if ((v73 & 1) == 0) {
          goto LABEL_221;
        }
      LABEL_153:
        v71 = *(_QWORD*)(v71 + 8);
        v5 = v178;
        if ((_QWORD*)v71 == v183) {
          break;
        }
        goto LABEL_154;
      }
    }
  }
  if ((__int64*)v5 == v70) {
    if (v5 == 0) {
      return;
    }
    goto LABEL_302;
  }
  v133 = v5;
  do {
    v134 = *(_BYTE*)v133;
    v135 = a1[7];
    if ((_QWORD*)v135 == v183) {
      goto LABEL_264;
    }
    v136 = (*(_BYTE*)v133 & 1) != 0 ? *(_QWORD*)(v133 + 8) : v134 >> 1;
    if ((*(_BYTE*)v133 & 1) != 0) {
      while (1) {
        v140 = *(unsigned __int8*)(v135 + 24);
        v141 = *(_QWORD*)(v135 + 32);
        if ((v140 & 1) == 0) {
          v141 = v140 >> 1;
        }
        if (v136 == v141) {
          v142 = (v140 & 1) != 0 ? *(_QWORD*)(v135 + 40) : v135 + 25;
          if (GameRoutine_1a09cf0(*(_QWORD*)(v133 + 16), v142, v136) == 0) {
            break;
          }
        }
        v135 = *(_QWORD*)(v135 + 8);
        if ((_QWORD*)v135 == v183) {
          goto LABEL_264;
        }
      }
    }
    else {
      while (1) {
        v137 = *(unsigned __int8*)(v135 + 24);
        v138 = *(_QWORD*)(v135 + 32);
        if ((v137 & 1) == 0) {
          v138 = v137 >> 1;
        }
        if (v136 == v138) {
          v139 = (v137 & 1) != 0 ? *(_QWORD*)(v135 + 40) : v135 + 25;
          if (GameRoutine_1a09cf0(v133 + 1, v139, v136) == 0) {
            break;
          }
        }
        v135 = *(_QWORD*)(v135 + 8);
        if ((_QWORD*)v135 == v183) {
          goto LABEL_264;
        }
      }
    }
    if ((_QWORD*)v135 == v183) {
    LABEL_264:
      if ((v134 & 1) != 0) {
        v143 = *(const char**)(v133 + 16);
      }
      else {
        v143 = (const char*)(v133 + 1);
      }
      v144 = game_telop_1376490(a2, v143, 0);
      if (v144 != 0) {
        BYTE4(v184) = 0;
        v185_.v185 = 0;
        v185_.v186 = nullptr;
        memset(&v187, 0, 20);
        *(unsigned __int64*)((char*)LANES128(v187.val[1]).n128_u64 + 4) =
            0x3F8000003F800000LL;
        *(unsigned __int64*)((char*)&LANES128(v187.val[1]).n128_u64[1] + 4) = 0;
        *(unsigned __int64*)((char*)LANES128(v187.val[2]).n128_u64 + 4) = 0;
        *(unsigned __int64*)((char*)&LANES128(v187.val[2]).n128_u64[1] + 4) =
            0x3F8000003F800000LL;
        LANES128(v187.val[3]).n128_u32[3] = 1065353216;
        v188 = 0x3F8000003F800000LL;
        v189 = 1065353216;
        *(unsigned __int64*)((char*)LANES128(v187.val[3]).n128_u64 + 4) =
            0x3F80000000000000LL;
        LODWORD(v184) = *(_DWORD*)(v144 + 148);
        if (&v185_.v185 != (__int64*)v133) {
          if ((*(_BYTE*)v133 & 1) != 0) {
            GameRoutine_64df20(&v185_.v185, *(_QWORD*)(v133 + 16),
                               *(_QWORD*)(v133 + 8));
          }
          else {
            v145 = *(_QWORD*)v133;
            v146 = *(_QWORD*)(v133 + 16);
            v185_.v186 = *(char**)(v133 + 8);
            LANES128(v187.val[0]).n128_u64[0] = v146;
            v185_.v185 = v145;
          }
        }
        v147 = (_QWORD*)(v133 + 24);
        if (*(_BYTE*)(v133 + 24) == 1) {
          v148 = *(float*)(v133 + 36);
          v149 = *(_DWORD*)(v133 + 40);
          v150 = 0x0.0p+0f;
          LANES128(v187.val[0]).n128_u32[2] = *(_DWORD*)(v133 + 28);
          LANES128(v187.val[0]).n128_u32[3] = LANES128(v187.val[0]).n128_u32[2];
          v151 = *(_DWORD*)(v133 + 32);
          if (v148 <= 0x0.0p+0f) {
            v150 = 0x1.0000000000000p+0f;
            v148 = 0x1.0000000000000p+0f;
            LANES128(v187.val[0]).n128_u32[2] = *(_DWORD*)(v133 + 32);
            LANES128(v187.val[0]).n128_u32[3] = v151;
          }
          LANES128(v187.val[1]).n128_u64[0] = __PAIR64__(LODWORD(v150), v151);
          LANES128(v187.val[1]).n128_u64[1] = __PAIR64__(v149, LODWORD(v148));
        }
        v152 = *(_QWORD*)(v133 + 52);
        *v147 = *(_QWORD*)(v133 + 44);
        *(_QWORD*)(v133 + 32) = v152;
        *(_DWORD*)(v133 + 40) = *(_DWORD*)(v133 + 60);
        if (*(_BYTE*)(v133 + 24) == 1) {
          v153 = *(float*)(v133 + 36);
          v154 = *(_DWORD*)(v133 + 40);
          v155 = 0x0.0p+0f;
          LANES128(v187.val[2]).n128_u32[0] = *(_DWORD*)(v133 + 28);
          LANES128(v187.val[2]).n128_u32[1] = LANES128(v187.val[2]).n128_u32[0];
          v156 = *(_DWORD*)(v133 + 32);
          if (v153 <= 0x0.0p+0f) {
            v155 = 0x1.0000000000000p+0f;
            v153 = 0x1.0000000000000p+0f;
            LANES128(v187.val[2]).n128_u32[0] = *(_DWORD*)(v133 + 32);
            LANES128(v187.val[2]).n128_u32[1] = v156;
          }
          LANES128(v187.val[2]).n128_u64[1] = __PAIR64__(LODWORD(v155), v156);
          LANES128(v187.val[3]).n128_u64[0] = __PAIR64__(v154, LODWORD(v153));
        }
        v157 = *(_QWORD*)(v133 + 72);
        *v147 = *(_QWORD*)(v133 + 64);
        *(_QWORD*)(v133 + 32) = v157;
        *(_DWORD*)(v133 + 40) = *(_DWORD*)(v133 + 80);
        if (*(_BYTE*)(v133 + 24) == 1) {
          v158 = *(float*)(v133 + 36);
          v159 = *(_DWORD*)(v133 + 40);
          v160 = 0x0.0p+0f;
          LANES128(v187.val[3]).n128_u32[2] = *(_DWORD*)(v133 + 28);
          LANES128(v187.val[3]).n128_u32[3] = LANES128(v187.val[3]).n128_u32[2];
          v161 = *(_DWORD*)(v133 + 32);
          if (v158 <= 0x0.0p+0f) {
            v160 = 0x1.0000000000000p+0f;
            v158 = 0x1.0000000000000p+0f;
            LANES128(v187.val[3]).n128_u32[2] = *(_DWORD*)(v133 + 32);
            LANES128(v187.val[3]).n128_u32[3] = v161;
          }
          v188 = __PAIR64__(LODWORD(v160), v161);
          v189 = __PAIR64__(v159, LODWORD(v158));
        }
        v162 = fw_memory_HeapManager_Allocate(*v4, 120, 16, 0);
        v163 = v184;
        v164 = (_QWORD*)v162;
        *(_QWORD*)v162 = 0;
        *(_QWORD*)(v162 + 8) = 0;
        *(_DWORD*)(v162 + 16) = v163;
        *(_BYTE*)(v162 + 20) = BYTE4(v184);
        if ((v185_.v185 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v162 + 24),
                                        LANES128(v187.val[0]).n128_i64[0],
                                        (unsigned __int64)v185_.v186);
        }
        else {
          v165 = (__int64)v185_.v186;
          *(_QWORD*)(v162 + 24) = v185_.v185;
          *(_QWORD*)(v162 + 32) = v165;
          *(_QWORD*)(v162 + 40) = LANES128(v187.val[0]).n128_u64[0];
        }
        v166 = v188;
        v164[12] = LANES128(v187.val[3]).n128_u64[1];
        v164[13] = v166;
        v164[14] = v189;
        v167 = LANES128(v187.val[2]).n128_u64[0];
        v164[8] = LANES128(v187.val[1]).n128_u64[1];
        v164[9] = v167;
        v168 = LANES128(v187.val[3]).n128_u64[0];
        v164[10] = LANES128(v187.val[2]).n128_u64[1];
        v164[11] = v168;
        v169 = LANES128(v187.val[1]).n128_u64[0];
        v164[6] = LANES128(v187.val[0]).n128_u64[1];
        v164[7] = v169;
        v170 = a1[6];
        *v164 = v170;
        v164[1] = v183;
        *(_QWORD*)(v170 + 8) = v164;
        a1[6] = v164;
        ++a1[8];
        if ((v185_.v185 & 1) != 0 && LANES128(v187.val[0]).n128_u64[0] != 0) {
          v171 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v171 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v171,
                                             LANES128(v187.val[0]).n128_i64[0]);
        }
      }
    }
    v133 += 88;
  } while ((__int64*)v133 != v70);
  v5 = v178;
  if (v178 != 0) {
    v172 = v181;
    do {
      v173 = *((_BYTE*)v172 - 88);
      v172 -= 11;
      if ((v173 & 1) != 0) {
        v174 = *(v181 - 9);
        if (v174 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v175 = 128;
          }
          else {
            v175 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v175,
                                             v174);
        }
      }
      v181 = v172;
    } while (v172 != (__int64*)v178);
  LABEL_302:
    v176 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v176 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v176, v5);
  }
}

__int64 game_1204820(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  __int64 result;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  _BYTE* v17;
  __int64 (*v18)();
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 (**v25)();
  char v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  signed int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 (**v36)();
  int v37;
  int v38;
  __int64* v39;
  signed int v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  bool v49;
  int v50;
  int v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  struct {
    unsigned __int64 v60;
    unsigned __int64 v61;
    int v62;
  } v60_;
  // Order and alignment put both objects at the original's frame offsets.
  struct __attribute__((aligned(16))) {
    __int64 (**v65)();
    unsigned __int64 v66;
    __int64 v67;
    int v68;
    char gap140_[4];
    __int64* v69;
  } v65_;
  struct __attribute__((aligned(16))) {
    _QWORD v63[4];
    _QWORD* v64;
  } v63_;
  __int64 v70;
  __int64 v71;

  v4 = *(_QWORD*)(a1 + 8);
  if (*(int*)(v4 + 592) > 1) {
    return 0;
  }
  v9 = game_g_shared_system_skills_ptr;
  LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
  if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v65_.v65) & 1) !=
      0) {
    return 0;
  }
  if (*(_WORD*)(v4 + 492) == 0 && *(_BYTE*)(v4 + 496) == 0) {
    LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v9) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v65_.v65) & 1) !=
        0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v4 + 416) & 4) != 0) {
    return 0;
  }
  LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v9) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v65_.v65) & 1) !=
      0) {
    return 0;
  }
  v12 = (_BYTE*)a3;
  v13 = *(unsigned __int16*)(a3 + 2);
  v63_.v64 = nullptr;
  if (a2 != 222) {
    if ((_DWORD)v13 == 0xFFFF) {
      LOBYTE(v16) = -1;
    }
    else {
      result = 0;
      if ((v13 & 0x8000) != 0) {
        goto LABEL_88;
      }
      if (*v12 != 1) {
        goto LABEL_88;
      }
      v16 = (unsigned int)v13 >> 8;
      v17 = (_BYTE*)*GameData_212ce98[0];
      if (*GameData_212ce98[0] != 0) {
        result = 0;
        if ((unsigned __int8)v17[26] <=
                (unsigned int)(unsigned __int8)(v13 - v17[24]) ||
            (unsigned __int8)v17[27] <=
                (unsigned int)(unsigned __int8)(BYTE1(v13) - v17[25])) {
          goto LABEL_88;
        }
      }
    }
    if (a2 == 237) {
      v18 = AIThink_121b950_ptr[0];
    }
    else {
      v18 = AIThink_121a250_ptr;
    }
    v65_.v69 = (__int64*)&v65_.v65;
    v65_.v65 = GameData_2019398;
    v65_.v66 = (unsigned __int64)v18;
    GameRoutine_1209d00(&v65_.v65, v63_.v63);
    if (v65_.v69 == (__int64*)&v65_.v65) {
      v19 = 32;
    }
    else {
      if (v65_.v69 == nullptr) {
        goto LABEL_35;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v65_.v69 + v19))((__int64)v65_.v69);
  LABEL_35:
    if ((v13 & 0x80) != 0) {
      v27 = a4;
      v28 = a2;
      v24 = 0;
    }
    else {
      result = 0;
      v20 = (char)v13 + 32 * (char)v16;
      if (v20 >= 0x400) {
        v20 = 0;
      }
      v21 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
      v22 = *(__int16*)(v21 + 2LL * v20 + 2152);
      if (v22 < 0) {
        goto LABEL_88;
      }
      v23 = *(_QWORD*)(v21 + 8);
      if (v23 == 0) {
        goto LABEL_88;
      }
      v24 = v23 + 144LL * (int)v22;
      if (((*(__int64 (**)(unsigned __int64))(*(_QWORD*)v24 + 272LL))(v24) &
           1) == 0) {
        goto LABEL_87;
      }
      v25 = *(__int64 (***)(void))(a1 + 8);
      v60_.v60 = v24;
      v65_.v65 = v25;
      if (v63_.v64 == nullptr) {
      LABEL_94:
        GameRoutine_60a310();
      }
      v26 = (*(__int64 (**)(_QWORD*, __int64 (***)(void), unsigned __int64*))(
          *v63_.v64 + 48LL))(v63_.v64, &v65_.v65, &v60_.v60);
      v27 = a4;
      v28 = a2;
      if ((v26 & 1) == 0) {
      LABEL_87:
        result = 0;
        goto LABEL_88;
      }
    }
    if (v28 == 223) {
      v29 = *(__int16*)(v27 + 2);
      result = 0;
      if (v29 < 0 || *(_BYTE*)v27 != 4) {
        goto LABEL_88;
      }
      v30 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) + 8 * v29);
    }
    else {
      v30 = 0;
    }
    if (v24 == 0) {
      v14 = 0;
      goto LABEL_52;
    }
    v50 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v24 + 56LL))(v24);
    v31 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v24 + 64LL))(v24);
    v32 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v24 + 72LL))(v24);
    v51 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v24 + 80LL))(v24);
    v58 = v50;
    if (v50 != -1) {
      v33 = v51;
      v14 = 0;
    LABEL_53:
      v34 = *(_QWORD*)(a1 + 8);
      LODWORD(v65_.v65) = *(_DWORD*)(v34 + 1976) & 0x400 | 0x128000;
      v35 = GameData_21306a0[0];
      AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], v34, 100,
                       (unsigned int*)&v65_.v65);
      v65_.v68 = -1;
      v60_.v62 = -1;
      v36 = *(__int64 (***)(void))(a1 + 8);
      v65_.v66 = -1;
      v65_.v67 = -4294967290LL;
      v60_.v60 = 0xFFFFFFFF00000000LL;
      v60_.v61 = 0xFFFFFFFF00000000LL;
      v65_.v65 = v36;
      if (v33 >= 1 && v32 >= 1) {
        v54 = v30;
        v37 = 32 * v31;
        v56 = v31 + v33;
        v57 = 0;
        v38 = v58 + v32;
        v55 = -1;
        v39 = GameData_212cfb8[0];
        v59 = -1;
        do {
          v40 = v58;
          do {
            v41 = v37 + v40;
            if (((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v35 + 8LL) +
                             4LL * ((v37 + v40) >> 5) + 2120) >>
                  v40) &
                 1) != 0) {
              if (v41 >= 0x400) {
                v41 = 0;
              }
              v42 = *(_QWORD*)(*v39 + 16);
              v43 = *(__int16*)(v42 + 2LL * v41 + 2152);
              if ((v43 & 0x8000000000000000LL) == 0) {
                v44 = *(_QWORD*)(v42 + 8);
                if (v44 != 0) {
                  v45 = v44 + 144LL * (int)v43;
                  if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 272LL))(v45) &
                       1) != 0 &&
                      (v14 == 0 || (*(__int64 (**)(__int64))(
                                       *(_QWORD*)v45 + 224LL))(v45) == v14)) {
                    v46 = *(_QWORD*)(a1 + 8);
                    v70 = v45;
                    v71 = v46;
                    if (v63_.v64 == nullptr) {
                      goto LABEL_94;
                    }
                    if (((*(__int64 (**)(_QWORD*, __int64*, __int64*))(
                             *v63_.v64 + 48LL))(v63_.v64, &v71, &v70) &
                         1) != 0) {
                      v65_.v66 = __PAIR64__(v31, v40);
                      if (AIThink_121a340((__int64*)&v65_.v65,
                                          (__int64)&v60_.v60)) {
                        LODWORD(v47) = HIDWORD(v60_.v61) + 32 * v60_.v62;
                        v47 = (unsigned int)v47 >= 0x400 ? 0LL
                                                         : (unsigned int)v47;
                        if ((v48 =
                                 *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v35 +
                                                                12880LL) +
                                                     v47 + 64) ^
                                 0xFF,
                             (v59 & 0x80000000) != 0) ||
                            v57 < v48 ||
                            (v57 <= v48 ? (v49 = (int)(v59 | (v55 << 16)) <=
                                                 (int)(HIDWORD(v60_.v61) |
                                                       (v60_.v62 << 16)))
                                        : (v49 = true),
                             !v49)) {
                          v59 = HIDWORD(v60_.v61);
                          v55 = v60_.v62;
                          v57 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v35 +
                                                               12880LL) +
                                                    v47 + 64) ^
                                0xFF;
                        }
                      }
                    }
                  }
                }
              }
            }
            ++v40;
          } while (v40 < v38);
          ++v31;
          v37 += 32;
        } while (v31 < v56);
        if (v59 != -1) {
          result = AIThink_1200be0(a1, v59, v55, 0, v54);
          goto LABEL_88;
        }
      }
      goto LABEL_87;
    }
    goto LABEL_87;
  }
  result = 0;
  if ((v13 & 0x8000) == 0 && *v12 == 4) {
    v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) + 8 * v13);
    v65_.v69 = (__int64*)&v65_.v65;
    v65_.v65 = GameData_2019398;
    v65_.v66 = (unsigned __int64)AIThink_121b950_ptr[0];
    GameRoutine_1209d00(&v65_.v65, v63_.v63);
    if (v65_.v69 == (__int64*)&v65_.v65) {
      v15 = 32;
    }
    else {
      if (v65_.v69 == nullptr) {
      LABEL_51:
        v30 = 0;
      LABEL_52:
        v31 = *(unsigned __int8*)(*GameData_212ce98[0] + 25);
        v32 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
        v33 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
        v58 = *(unsigned __int8*)(*GameData_212ce98[0] + 24);
        goto LABEL_53;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v65_.v69 + v15))((__int64)v65_.v69);
    goto LABEL_51;
  }
LABEL_88:
  if (v63_.v64 == v63_.v63) {
    v53 = result;
    v52 = 32;
    goto LABEL_92;
  }
  if (v63_.v64 != nullptr) {
    v52 = 40;
    v53 = result;
  LABEL_92:
    (*(void (**)(_QWORD*))(*v63_.v64 + v52))(v63_.v64);
    return v53;
  }
  return result;
}

#pragma GCC visibility pop
