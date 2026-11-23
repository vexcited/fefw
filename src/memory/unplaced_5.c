#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_654050_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_654050");
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
__attribute__((swiftcall)) void
    LegionGambitCamera_e59fd0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_f31720(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CalculateAllocatedSizeHeap_5c7400(__int64, __int64, __int64*);
__int64 CharacterTrailModule_d3c310(__int64);
__int64 FloatingHelp_18ac7f0(void);
__int64 GameHr_112e290(_QWORD);
__int64 GameHr_15651c0(_QWORD);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_13140f0(__int64 result);
__int64 GameRoutine_15e1350(_QWORD);
__int64 GameRoutine_17b7d20(_QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c7e20(__int64);
__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_66ae00(__int64 result);
__int64 GameRoutine_8ecf00(__int64 result, __int64);
__int64 LayoutArchive_13669e0(_QWORD);
__int64 Manager_130e260(__int64);
__int64 Manager_130f220(__int64);
__int64 Manager_130f9a0(__int64);
__int64 Manager_13114c0(__int64 result);
__int64 ProcLoadingSeq_9b84e0(_QWORD);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 RenderTask_136a130(_QWORD);
__int64 SimpleTelopImpl_17c9530(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a1b00(__int64*, float);
__int64 game_15d1d80(_QWORD);
__int64 game_1735b60(_QWORD);
__int64 game_173df20(_QWORD);
__int64 game_19ef080(_QWORD);
__int64 game_f2f4e0(__int64 result);
__int64 game_gameui_1569ce0(_QWORD);
__int64 game_gameui_17aa8e0(void);
__int64 game_gameui_18a2660(void);
__int64 game_gameui_19aeaf0(void);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_prepo_Array_Clear(__int64);
__int64 nn_prepo_PlayReport_Add_1a0ae20(__int64, const char*, __int64);
__int64 nn_prepo_PlayReport_GetCount(__int64);
__int64 nn_prepo_PlayReport_Save(__int64, __int64);
__int64 nn_prepo_PlayReport_SetEventId(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _DWORD* GameData_212d8a0;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (*GameData_1fa94c8[])();
extern __int64 (*GameData_1fa9548[])();
extern __int64 (*GameData_1fa95c8[])();
extern __int64 (*GameData_1fa9648[])();
extern __int64 (*GameData_1fa96c8[])();
extern __int64 (*GameData_1fe6e10[])();
extern __int64 (*GameData_1fe6e60[])();
extern __int64 (*GameData_1fe6eb0[])();
extern __int64 (*GameData_2025c18[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d898;
extern __int64* GameData_212ee40[2];
extern __int64* GameData_212ee68[4];
extern __int64* GameData_212f7d8[3];
extern __int64* GameData_212f878;
extern __int64* GameData_21320a8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_212da38;
extern __int64 GameData_2136448[3];
extern __int64 GameData_21c9668;
extern __int64 GameData_2240f18;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern int* GameData_21320b0[8];
extern int GameData_21d87e8;
extern int GameData_21d87f8;
float log10f(float);
float powf(float, float);
float32x4_t game_10be1a0(__int64, __int64);
int __cxa_guard_acquire(__int64);
struct PseudoSret TextTagProcessor_1908c60(_QWORD, _QWORD);
struct PseudoSret TextTagProcessor_1908f00(_QWORD, _QWORD);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CharacterTrailModule_d3b6a0(__int64);
void GameRoutine_1311810(__int64);
void GameRoutine_1311ce0(__int64);
void GameRoutine_1312b50(__int64);
void Manager_130fb60(__int64);
void Manager_130fdc0(__int64);
void Manager_13122a0(__int64);
void Manager_1312e60(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d38e30();
void __attribute__((noreturn)) GameRoutine_e5aa20();
void __cxa_guard_release(__int64);
void game_playreport_13108c0(__int64, _QWORD*);
void game_playreport_Manager_ReportReliance(__int64);
void nn_diag_detail_AbortImpl_1a0a590();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void nn_prepo_PlayReport_Clear(__int64);
__int64 memory_177800(__int64 a1, __int64 a2, int* a3);
__int64 memory_5c65e0(__int64 result, __int64 a2);
__int64 memory_5c6e20(__int64 a1, __int64 a2, __int64* a3);
_QWORD* memory_8b4c00();
__int64 memory_c0df60(__int64 result);
void memory_d3c160(__int64 a1);
__int64 memory_e59440(__int64 a1, __int64 a2);
void memory_f43d50(__int64 a1);
void memory_130dae0(__int64 a1, __int64 a2);
_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_a934d0(_QWORD* result, _QWORD*);
_QWORD* snd_SeqVoice_getHandles(_QWORD* result, __int64, int);
__attribute__((swiftcall)) void CmdBtlCameraCutBase_e82a10(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void GameRoutine_1a0a7c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void MagicInst_10a4bf0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void fs_639720(PSEUDO_X8, __int64, const char*);
__attribute__((swiftcall)) void game_character_10b49e0(PSEUDO_X8,
                                                       __int64 result, _BYTE*);
__attribute__((swiftcall)) void game_cmdbtl_e83e40(PSEUDO_X8, __int64,
                                                   __int64*);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34420(
    PSEUDO_X8, __int64, __int64, unsigned __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___vector_b35d00(PSEUDO_X8, _QWORD*, __int64,
                                              unsigned __int64, __int64,
                                              __int64, __int64, _QWORD*);
__attribute__((swiftcall)) void snd_a1b360(PSEUDO_X8, unsigned __int8* result,
                                           unsigned __int64, unsigned __int64);
__attribute__((swiftcall)) void snd_a1b510(PSEUDO_X8, __int64,
                                           unsigned __int8*);
__int64* VoiceRootRegistry_a1b100(__int64);
__int64 Archive_106500(__int64, const char*, unsigned __int8*);
__int64 BaseNx_278a40(__int64, __int64, unsigned int);
__int64 CharacterAnimator_107a6f0(__int64);
__int64 FileManager_10e120(__int64, __int64);
__int64 GameRoutine_10a27e0(__int64 result);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a060(const char*, const char*);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_27a290(_QWORD);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_a1b200(unsigned __int8*, const char*);
__int64 GameRoutine_a1b490(__int64, __int64);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 GameRoutine_b36980(_QWORD*, __int64);
__int64 GameRoutine_eaec10(__int64*, __int64);
__int64 MagicInst_10a3ae0(__int64 result, float);
__int64 Scene_a70a20(_QWORD*, __int64);
__int64 SoundArchivePlayer_279410(__int64, const char*, unsigned __int64,
                                  unsigned int);
__int64 SoundArchivePlayer_27a2a0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_alt1(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt2(__int64, __int64, __int64,
                                            unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 g3d_a6c880(__int64*, __int64, unsigned __int64);
__int64 game_14a3920(__int64 result);
__int64 gfx_render_DecalObject_DecalObject(__int64);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD);
__int64 std___1___shared_weak_count_lock_alt1(_QWORD);
__int64 wld_c03400(_QWORD*);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
__int64 GameRoutine_10a2760(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN GameData_1b7ee48;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82d30;
extern __int128 GameData_1a830f0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fc1030[])();
extern __int64 (*GameData_1fedea0[3])();
extern __int64 (*GameData_20ad9b8[])();
extern __int64 (*decltype_c81af0_ptr_1fede88[6])();
extern __int64 (*game_cmdbtl_CmdBtlEventTurnBase_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20ad8e8[])();
extern __int64 (*game_menu_anonymous_ProcGuideMenu_vtable_20ad468[])();
extern __int64* GameData_212e248[2];
extern __int64* GameData_212ea58;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
float CmdBtlCameraCutBase_e82510(__int64, __int64);
float CmdBtlCameraCutBase_e82b40(__int64, _QWORD*);
float CmdBtlUnit_e7d750(_QWORD*);
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0ab40(float, float);
float GameRoutine_5eaef0(__int64, float32x4_t*, float, float, float, float,
                         double, double);
float game_10a2940(__int64);
float32x4_t* MagicInst_10a3950(float32x4_t* result, float32x4_t*, float32x4_t*);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_a1b440(__int64, const char*);
unsigned __int64 Manager_6326c0(__int64*, const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void DecalModule_a92840(__int64*, _QWORD*);
void DecalModule_a929a0(_QWORD*);
void GameRoutine_10a51c0(float32x4_t*, float);
void __attribute__((noreturn)) GameRoutine_a93290();
void __attribute__((noreturn)) GameRoutine_a932d0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void llvm_libcxx_21_libcxx_include___vector_b36540(_QWORD*, __int64);
__int64 memory_a19f00(__int64 result, __int64 a2);
__int64 memory_a91f40(_QWORD* a1, __int64 a2, __int64 a3);
__int64 memory_c04c40(__int64 a1);
void memory_e82ea0(__int64 a1);
void memory_eaeda0(__int64 a1, int a2, __int64* a3);
__int64 memory_10a2280(__int64 result);
void memory_1712bf0(_QWORD* a1);
void memory_1712cd0(_QWORD* a1);
float GameRoutine_5eaef0_alt1();
_QWORD* GameRoutine_654050_alt2(_QWORD* result, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
float game_10be1a0_alt1(__int64, __int64);

__int64 memory_177800(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v9;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  float v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  float* v36;
  float v37;
  float v38;
  float v39;
  float v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  float v46;
  float* v47;
  float v48;
  float v49;
  float v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  float v58;
  float v59;
  float v60;
  float v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  float v67;
  float* v68;
  float v69;
  float v70;
  float v71;
  int v72;
  int v73;
  float* v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float* v84;
  __int64 v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float* v94;
  __int64 v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  float* v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float* v114;
  __int64 v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  __int64 v124;
  float* v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  v5 = v3 / v4;
  if (v3 % v4 != 0) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  if (v5 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  nn_os_LockMutex(a1 + 6304);
  v9 = *a3;
  if (v5 >= 1 && v9 >= 1) {
    v11 = 0;
    do {
      if (v9 >= 1) {
        v12 = 0;
        v13 = a2 + 4LL * v9 * a3[3] * v11;
        do {
          v14 = *(_DWORD*)(v13 + 4 * v12++);
          v15 = *(float**)(*(_QWORD*)(a1 + 104) + 8LL);
          v16 = (float)v14;
          v17 = v15[7];
          v18 = v15[9];
          v19 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v17 * v15[5])) +
                                        (float)(v15[4] * v16)) +
                                (float)(v15[6] * v15[8])) -
                        (float)(v15[2] * v18)) -
                (float)(v15[3] * v15[10]);
          *(float*)(a1 + 112 + 4LL * *(int*)(a1 + 1136)) =
              vcvts_n_f32_s32((int)v19, 0xFu);
          v20 = *(_DWORD*)(a1 + 1136);
          if (v20 <= 254) {
            v21 = v20 + 1;
          }
          else {
            v21 = 0;
          }
          *(_DWORD*)(a1 + 1136) = v21;
          v15[7] = v16;
          v15[8] = v17;
          v15[9] = v19;
          v15[10] = v18;
          v9 = *a3;
        } while (v12 < *a3);
        if (v9 >= 1) {
          v22 = v13 + 4LL * v9;
          v23 = 0;
          do {
            v24 = *(_DWORD*)(v22 + 4 * v23++);
            v25 = (float)v24;
            v26 = *(float**)(*(_QWORD*)(a1 + 104) + 8LL);
            v27 = v26[11];
            v28 = v26[13];
            v29 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v27 * v26[5])) +
                                        (float)(v26[4] * v25)) +
                                (float)(v26[6] * v26[12])) -
                        (float)(v26[2] * v28)) -
                (float)(v26[3] * v26[14]);
            *(float*)(a1 + 3208 + 4LL * *(int*)(a1 + 4232)) =
                vcvts_n_f32_s32((int)v29, 0xFu);
            v30 = *(_DWORD*)(a1 + 4232);
            if (v30 <= 254) {
              v31 = v30 + 1;
            }
            else {
              v31 = 0;
            }
            *(_DWORD*)(a1 + 4232) = v31;
            v26[11] = v25;
            v26[12] = v27;
            v26[13] = v29;
            v26[14] = v28;
          } while (v23 < *a3);
          v9 = *a3;
        }
      }
      ++v11;
    } while (v11 != v5);
    if (v9 >= 1) {
      v32 = 0;
      do {
        if (v9 >= 1) {
          v33 = 0;
          v34 = a2 + 4LL * v9 * a3[3] * v32;
          do {
            v35 = *(_DWORD*)(v34 + 4 * v33++);
            v36 = *(float**)(*(_QWORD*)(a1 + 104) + 16LL);
            v37 = (float)v35;
            v38 = v36[7];
            v39 = v36[9];
            v40 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v38 * v36[5])) +
                                        (float)(v36[4] * v37)) +
                                (float)(v36[6] * v36[8])) -
                        (float)(v36[2] * v39)) -
                (float)(v36[3] * v36[10]);
            *(float*)(a1 + 1144 + 4LL * *(int*)(a1 + 2168)) =
                vcvts_n_f32_s32((int)v40, 0xFu);
            v41 = *(_DWORD*)(a1 + 2168);
            if (v41 <= 254) {
              v42 = v41 + 1;
            }
            else {
              v42 = 0;
            }
            *(_DWORD*)(a1 + 2168) = v42;
            v36[7] = v37;
            v36[8] = v38;
            v36[9] = v40;
            v36[10] = v39;
            v9 = *a3;
          } while (v33 < *a3);
          if (v9 >= 1) {
            v43 = v34 + 4LL * v9;
            v44 = 0;
            do {
              v45 = *(_DWORD*)(v43 + 4 * v44++);
              v46 = (float)v45;
              v47 = *(float**)(*(_QWORD*)(a1 + 104) + 16LL);
              v48 = v47[11];
              v49 = v47[13];
              v50 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v48 *
                                                                   v47[5])) +
                                            (float)(v47[4] * v46)) +
                                    (float)(v47[6] * v47[12])) -
                            (float)(v47[2] * v49)) -
                    (float)(v47[3] * v47[14]);
              *(float*)(a1 + 4240 + 4LL * *(int*)(a1 + 5264)) =
                  vcvts_n_f32_s32((int)v50, 0xFu);
              v51 = *(_DWORD*)(a1 + 5264);
              if (v51 <= 254) {
                v52 = v51 + 1;
              }
              else {
                v52 = 0;
              }
              *(_DWORD*)(a1 + 5264) = v52;
              v47[11] = v46;
              v47[12] = v48;
              v47[13] = v50;
              v47[14] = v49;
            } while (v44 < *a3);
            v9 = *a3;
          }
        }
        ++v32;
      } while (v32 != v5);
    }
    if (v9 >= 1) {
      v53 = 0;
      LODWORD(v54) = v9;
      do {
        if ((int)v54 >= 1) {
          v55 = 0;
          v56 = a2 + 4LL * (int)v54 * a3[3] * v53;
          do {
            v57 = *(_DWORD*)(v56 + 4 * v55++);
            v54 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL);
            v58 = (float)v57;
            v59 = *(float*)(v54 + 28);
            v60 = *(float*)(v54 + 36);
            v61 = (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                              v59 * *(float*)(v54 + 20))) +
                                          (float)(*(float*)(v54 + 16) * v58)) +
                                  (float)(*(float*)(v54 + 24) *
                                          *(float*)(v54 + 32))) -
                          (float)(*(float*)(v54 + 8) * v60)) -
                  (float)(*(float*)(v54 + 12) * *(float*)(v54 + 40));
            *(float*)(a1 + 2176 + 4LL * *(int*)(a1 + 3200)) =
                vcvts_n_f32_s32((int)v61, 0xFu);
            v62 = *(_DWORD*)(a1 + 3200);
            if (v62 <= 254) {
              v63 = v62 + 1;
            }
            else {
              v63 = 0;
            }
            *(_DWORD*)(a1 + 3200) = v63;
            *(float*)(v54 + 28) = v58;
            *(float*)(v54 + 32) = v59;
            *(float*)(v54 + 36) = v61;
            *(float*)(v54 + 40) = v60;
            LODWORD(v54) = *a3;
          } while (v55 < *a3);
          if ((int)v54 >= 1) {
            v64 = v56 + 4LL * (int)v54;
            v65 = 0;
            do {
              v66 = *(_DWORD*)(v64 + 4 * v65++);
              v67 = (float)v66;
              v68 = *(float**)(*(_QWORD*)(a1 + 104) + 24LL);
              v69 = v68[11];
              v70 = v68[13];
              v71 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v69 *
                                                                   v68[5])) +
                                            (float)(v68[4] * v67)) +
                                    (float)(v68[6] * v68[12])) -
                            (float)(v68[2] * v70)) -
                    (float)(v68[3] * v68[14]);
              *(float*)(a1 + 5272 + 4LL * *(int*)(a1 + 6296)) =
                  vcvts_n_f32_s32((int)v71, 0xFu);
              v72 = *(_DWORD*)(a1 + 6296);
              if (v72 <= 254) {
                v73 = v72 + 1;
              }
              else {
                v73 = 0;
              }
              *(_DWORD*)(a1 + 6296) = v73;
              v68[11] = v67;
              v68[12] = v69;
              v68[13] = v71;
              v68[14] = v70;
              v54 = *a3;
            } while (v65 < v54);
          }
        }
        ++v53;
      } while (v53 != v5);
    }
  }
  v74 = (float*)(a1 + 172);
  v75 = 255;
  v76 = *(float*)(a1 + 112) * *(float*)(a1 + 112);
  do {
    v75 -= 15;
    v77 = *(v74 - 5);
    v78 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v76 + (float)(*(v74 - 14) * *(v74 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 13) * *(v74 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 12) * *(v74 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 11) * *(v74 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v74 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v74 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v74 -
                                                                                                                                           9) *
                                                                                                                                         *(v74 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v74 -
                                                                                                            8) *
                                                                                                          *(v74 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v74 -
                                                                          7) *
                                                                        *(v74 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v74 - 6) *
                                                            *(v74 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v77 * v77)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v74 - 4) * *(v74 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v74 - 3) * *(v74 - 3));
    v79 = *(v74 - 1);
    v80 = (float)(PSEUDO_UNFUSED(v78 * 0x1.0000000000000p-1f)) +
          (float)(*(v74 - 2) * *(v74 - 2));
    v81 = *v74;
    v74 += 15;
    v76 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v80 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v79 * v79)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v81 * v81)) *
          0x1.0000000000000p-1f;
  } while (v75 != 0);
  v82 = sqrtf(v76);
  if (v82 == 0x0.0p+0f) {
    v83 = -0x1.9000000000000p+6f;
  }
  else {
    v83 = log10f(v82) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 1140) = v83;
  v84 = (float*)(a1 + 3268);
  v85 = 255;
  v86 = *(float*)(a1 + 3208) * *(float*)(a1 + 3208);
  do {
    v85 -= 15;
    v87 = *(v84 - 5);
    v88 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v86 + (float)(*(v84 - 14) * *(v84 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 13) * *(v84 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 12) * *(v84 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 11) * *(v84 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v84 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v84 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v84 -
                                                                                                                                           9) *
                                                                                                                                         *(v84 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v84 -
                                                                                                            8) *
                                                                                                          *(v84 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v84 -
                                                                          7) *
                                                                        *(v84 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v84 - 6) *
                                                            *(v84 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v87 * v87)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v84 - 4) * *(v84 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v84 - 3) * *(v84 - 3));
    v89 = *(v84 - 1);
    v90 = (float)(PSEUDO_UNFUSED(v88 * 0x1.0000000000000p-1f)) +
          (float)(*(v84 - 2) * *(v84 - 2));
    v91 = *v84;
    v84 += 15;
    v86 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v90 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v89 * v89)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v91 * v91)) *
          0x1.0000000000000p-1f;
  } while (v85 != 0);
  v92 = sqrtf(v86);
  if (v92 == 0x0.0p+0f) {
    v93 = -0x1.9000000000000p+6f;
  }
  else {
    v93 = log10f(v92) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 4236) = v93;
  v94 = (float*)(a1 + 1204);
  v95 = 255;
  v96 = *(float*)(a1 + 1144) * *(float*)(a1 + 1144);
  do {
    v95 -= 15;
    v97 = *(v94 - 5);
    v98 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v96 + (float)(*(v94 - 14) * *(v94 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 13) * *(v94 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 12) * *(v94 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 11) * *(v94 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v94 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v94 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v94 -
                                                                                                                                           9) *
                                                                                                                                         *(v94 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v94 -
                                                                                                            8) *
                                                                                                          *(v94 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v94 -
                                                                          7) *
                                                                        *(v94 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v94 - 6) *
                                                            *(v94 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v97 * v97)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v94 - 4) * *(v94 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v94 - 3) * *(v94 - 3));
    v99 = *(v94 - 1);
    v100 = (float)(PSEUDO_UNFUSED(v98 * 0x1.0000000000000p-1f)) +
           (float)(*(v94 - 2) * *(v94 - 2));
    v101 = *v94;
    v94 += 15;
    v96 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v100 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v99 * v99)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v101 * v101)) *
          0x1.0000000000000p-1f;
  } while (v95 != 0);
  v102 = sqrtf(v96);
  if (v102 == 0x0.0p+0f) {
    v103 = -0x1.9000000000000p+6f;
  }
  else {
    v103 = log10f(v102) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 2172) = v103;
  v104 = 255;
  v105 = (float*)(a1 + 4300);
  v106 = *(float*)(a1 + 4240) * *(float*)(a1 + 4240);
  do {
    v104 -= 15;
    v107 = *(v105 - 5);
    v108 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v106 + (float)(*(v105 - 14) * *(v105 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 13) * *(v105 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 12) * *(v105 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 11) * *(v105 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v105 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v105 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v105 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v105 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v105 -
                                                                                                                    8) *
                                                                                                                  *(v105 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v105 -
                                                                                     7) *
                                                                                   *(v105 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v105 - 6) *
                                                    *(v105 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v107 * v107)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v105 - 4) * *(v105 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v105 - 3) * *(v105 - 3));
    v109 = *(v105 - 1);
    v110 = (float)(PSEUDO_UNFUSED(v108 * 0x1.0000000000000p-1f)) +
           (float)(*(v105 - 2) * *(v105 - 2));
    v111 = *v105;
    v105 += 15;
    v106 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v110 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v109 * v109)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v111 * v111)) *
           0x1.0000000000000p-1f;
  } while (v104 != 0);
  v112 = sqrtf(v106);
  if (v112 == 0x0.0p+0f) {
    v113 = -0x1.9000000000000p+6f;
  }
  else {
    v113 = log10f(v112) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 5268) = v113;
  v114 = (float*)(a1 + 2236);
  v115 = 255;
  v116 = *(float*)(a1 + 2176) * *(float*)(a1 + 2176);
  do {
    v115 -= 15;
    v117 = *(v114 - 5);
    v118 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v116 + (float)(*(v114 - 14) * *(v114 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 13) * *(v114 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 12) * *(v114 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 11) * *(v114 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v114 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v114 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v114 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v114 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v114 -
                                                                                                                    8) *
                                                                                                                  *(v114 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v114 -
                                                                                     7) *
                                                                                   *(v114 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v114 - 6) *
                                                    *(v114 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v117 * v117)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v114 - 4) * *(v114 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v114 - 3) * *(v114 - 3));
    v119 = *(v114 - 1);
    v120 = (float)(PSEUDO_UNFUSED(v118 * 0x1.0000000000000p-1f)) +
           (float)(*(v114 - 2) * *(v114 - 2));
    v121 = *v114;
    v114 += 15;
    v116 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v120 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v119 * v119)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v121 * v121)) *
           0x1.0000000000000p-1f;
  } while (v115 != 0);
  v122 = sqrtf(v116);
  if (v122 == 0x0.0p+0f) {
    v123 = -0x1.9000000000000p+6f;
  }
  else {
    v123 = log10f(v122) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 3204) = v123;
  v124 = 255;
  v125 = (float*)(a1 + 5332);
  v126 = *(float*)(a1 + 5272) * *(float*)(a1 + 5272);
  do {
    v124 -= 15;
    v127 = *(v125 - 5);
    v128 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v126 + (float)(*(v125 - 14) * *(v125 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 13) * *(v125 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 12) * *(v125 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 11) * *(v125 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v125 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v125 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v125 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v125 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v125 -
                                                                                                                    8) *
                                                                                                                  *(v125 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v125 -
                                                                                     7) *
                                                                                   *(v125 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v125 - 6) *
                                                    *(v125 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v127 * v127)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v125 - 4) * *(v125 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v125 - 3) * *(v125 - 3));
    v129 = *(v125 - 1);
    v130 = (float)(PSEUDO_UNFUSED(v128 * 0x1.0000000000000p-1f)) +
           (float)(*(v125 - 2) * *(v125 - 2));
    v131 = *v125;
    v125 += 15;
    v126 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v130 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v129 * v129)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v131 * v131)) *
           0x1.0000000000000p-1f;
  } while (v124 != 0);
  v132 = sqrtf(v126);
  if (v132 == 0x0.0p+0f) {
    v133 = -0x1.9000000000000p+6f;
  }
  else {
    v133 = log10f(v132) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 6300) = v133;
  return nn_os_UnlockMutex(a1 + 6304);
}

__int64 memory_a19f00(__int64 result, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  signed __int64 v37;
  char* v38;
  char* v39;
  char* v40;
  signed __int64 v41;
  __int64 v42;
  char* v43;
  int v44;
  char* v45;
  char* v46;
  _BOOL4 v47;
  bool v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  char v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  char* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  unsigned __int64 v71;
  char v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  char* v76;
  char* v77;
  __int64 v78;
  char* v79;
  _QWORD* v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  _QWORD* v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  unsigned __int64 v102;
  char* v103;
  __int64 v104;
  unsigned __int64 v105;
  char* v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  unsigned __int64 v111;
  char* v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  char* v119;
  char* v120;
  __int64 v121;
  char v122;
  __int64 v123;
  __int64 v124;
  char* v125;
  char v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  struct {
    _QWORD v138[2];
    __int64 v139;
  } v138_;
  struct {
    _QWORD v140[2];
    __int64 v141;
  } v140_;
  struct {
    _QWORD v142[2];
    __int64 v143;
  } v142_;
  struct {
    _QWORD v144[2];
    char* v145;
  } v144_;
  struct {
    __int64 v146;
    unsigned __int64 v147;
    char* v148;
  } v146_;
  struct {
    __int64 v149;
    unsigned __int64 v150;
    char* v151;
  } v149_;
  struct {
    __int64 v152[2];
    __int64 v153;
  } v152_;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  int v157;
  char v158;
  char v159;
  __int16 v160;
  char v161;
  __int64 v162;
  char v163;
  char v164;
  __int16 v165;
  char v166;
  int v167;
  __int16 v168;
  __int16 v169;
  char v170;
  char v171;
  __int16 v172;
  char v173;
  __int64 v174;
  char v175;
  char v176;
  __int16 v177;
  char v178;
  __int64 v179;
  char v180;
  char v181;
  __int16 v182;
  char v183;
  int v184;
  __int16 v185;
  __int16 v186;
  char v187;
  char v188;
  __int16 v189;
  char v190;
  __int64 v191;
  char v192;
  char v193;
  __int16 v194;
  char v195;
  int v196;
  __int16 v197;
  __int64 v198;
  int v199;
  __int64 v200;
  struct {
    __int64 v201;
    unsigned __int64 v202;
    char* v203;
  } v201_;
  struct {
    __int64 v204;
    char gap1104_[4];
    unsigned int v205;
  } v204_;
  struct {
    _QWORD v206[2];
    char* v207;
  } v206_;
  struct {
    _QWORD v208[2];
    char* v209;
  } v208_;
  struct {
    __int64 v210;
    unsigned __int64 v211;
    char* v212;
  } v210_;
  struct {
    __int128 v213;
    char* v214;
  } v213_;
  struct {
    __int64 v215;
    int v216;
  } v215_;

  v3 = (_QWORD*)result;
  if (*(_BYTE*)(result + 40) == 1) {
    v4 = GameRoutine_118ff0(*GameData_212e248[0]);
    result = FileManager_10e120(v4, (__int64)(v3 + 3));
    *((_BYTE*)v3 + 40) = 0;
  }
  if (a2 == 0) {
    return result;
  }
  v5 = snd_fnd_WeakHandle_get(a2);
  result = v5 - 5592;
  v6 = v5 != 0 ? v5 - 5592 : 0LL;
  *v3 = v6;
  if (v5 == 0) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 104LL))(result);
  {
    v7 = *snd_s_target_ptr;
    __asm__ volatile("" ::"r"(v7));
  }
  if (*snd_s_target_ptr == 0) {
    return result;
  }
  {
    v8 = *(_QWORD*)(*v3 + 5664LL);
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = VoiceRootRegistry_a1b100(a2);
  v10 = GameRoutine_190240(*v3 + 5680LL);
  if (v9 != nullptr) {
    v201_.v201 = 0;
    LODWORD(v201_.v202) = 0x2000;
    snd_SeqVoice_getHandles(v9, (__int64)&v201_.v201, 1);
    result = snd_fnd_WeakHandle_isValid(&v201_.v201);
    if ((result & 1) == 0) {
      return result;
    }
    result = snd_fnd_WeakHandle_get((__int64)&v201_.v201);
    {
      v8 = *(_QWORD*)(result + 72);
      __asm__ volatile("" ::"r"(v8));
    }
    if (v8 == 0) {
      return result;
    }
    v11 = snd_fnd_WeakHandle_get((__int64)&v201_.v201);
    v12 = GameRoutine_190240(v11 + 88);
    v13 = snd_fnd_WeakHandle_get((__int64)&v201_.v201);
    if (v13 != 0) {
      v14 = v13 - 5592;
    }
    else {
      v14 = 0;
    }
    v15 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v7 + 216LL))(v7, v14);
    v16 = GameRoutine_118fd0(*GameData_212e248[0]);
    v17 = snd_fnd_WeakHandle_get((__int64)&v201_.v201);
    v18 = (unsigned __int8*)GameRoutine_190240(v17 + 120);
    v19 = Archive_106500(v16, "sound", v18);
    if (v19 == 0) {
      v20 = nullptr;
      goto LABEL_19;
    }
  }
  else {
    v12 = v10;
    v15 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v7 + 216LL))(v7, *v3);
    v21 = GameRoutine_118fd0(*GameData_212e248[0]);
    v22 = (unsigned __int8*)GameRoutine_190240(*v3 + 5712LL);
    v19 = Archive_106500(v21, "sound", v22);
    if (v19 == 0) {
      v215_.v215 = 0;
      v215_.v216 = 0x2000;
      goto LABEL_25;
    }
  }
  {
    v20 = *(const char**)(v19 + 8);
    __asm__ volatile("" ::"r"(v20));
  }
LABEL_19:
  v215_.v215 = 0;
  v215_.v216 = 0x2000;
  if (v20 != nullptr) {
    v23 = GameRoutine_1a09c70(v20);
    if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_316;
    }
    v24 = v23;
    if (v23 >= 0x17) {
      if ((v23 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v23 | 7) + 1;
      }
      v25 = (char*)fw_memory_HeapManager_Allocate_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v29, 16, 0);
      v201_.v202 = v24;
      v201_.v203 = v25;
      v201_.v201 = v29 | 1;
    }
    else {
      LOBYTE(v201_.v201) = 2 * v23;
      v25 = (char*)&v201_.v201 + 1;
      if (v23 == 0) {
      LABEL_34:
        v25[v24] = 0;
        if ((v201_.v201 & 1) != 0) {
          v30 = v201_.v203;
        }
        else {
          v30 = (char*)&v201_.v201 + 1;
        }
        if ((v201_.v201 & 1) != 0) {
          v31 = v201_.v202;
        }
        else {
          v31 = (unsigned __int64)(unsigned __int8)v201_.v201 >> 1;
        }
        {
          v32 = &v30[v31];
          __asm__ volatile("" ::"r"(v32));
        }
        if ((__int64)v31 >= 1) {
          v33 = v31;
          v34 = (__int64)v30;
          do {
            v35 = (char*)GameRoutine_1a09c60(v34, 47, v33);
            if (v35 == nullptr) {
              break;
            }
            if (*v35 == 47) {
              goto LABEL_46;
            }
            v34 = (__int64)(v35 + 1);
            {
              v33 = (unsigned __int64)&v32[-v34];
              __asm__ volatile("" ::"r"(v33));
            }
          } while ((__int64)&v32[-v34] > 0);
        }
        {
          v35 = &v30[v31];
          __asm__ volatile("" ::"r"(v35));
        }
      LABEL_46:
        if (v35 == v32) {
          v36 = -1;
        }
        else {
          v36 = v35 - v30;
        }
        if (GameRoutine_1a0a060(v20, "V_JP/") != 0 ||
            GameRoutine_1a0a060(v20, "V_EN/") != 0) {
          v37 = v31 - (v36 + 1);
          if (v31 >= v36 + 1) {
            if (v37 >= 1) {
              {
                v49 = (__int64)&v30[v36 + 1];
                __asm__ volatile("" ::"r"(v49));
              }
              do {
                v50 = (char*)GameRoutine_1a09c60(v49, 47, v37);
                if (v50 == nullptr) {
                  break;
                }
                if (*v50 == 47) {
                  goto LABEL_86;
                }
                v49 = (__int64)(v50 + 1);
                {
                  v37 = (signed __int64)&v32[-v49];
                  __asm__ volatile("" ::"r"(v37));
                }
              } while ((__int64)&v32[-v49] > 0);
            }
            {
              v50 = &v30[v31];
              __asm__ volatile("" ::"r"(v50));
            }
          LABEL_86:
            if (v50 == v32) {
              v36 = -1;
            }
            else {
              v36 = v50 - v30;
            }
            if (v31 != 0) {
            LABEL_54:
              {
                v38 = &v30[v31];
                __asm__ volatile("" ::"r"(v38));
              }
              v39 = v30;
              {
                v40 = &v30[v31];
                __asm__ volatile("" ::"r"(v40));
              }
              while (1) {
                v41 = v38 - v39;
                v42 = (v38 - v39) & 3;
                if (v42 != 0) {
                  v43 = v39;
                  while (1) {
                    v44 = (unsigned __int8)*v43++;
                    if (v44 == 46) {
                      break;
                    }
                    --v42;
                    v39 = v43;
                    if (v42 == 0) {
                      goto LABEL_61;
                    }
                  }
                  v45 = v39 + 1;
                LABEL_73:
                  v48 = v45 == v32;
                LABEL_74:
                  v47 = v48;
                }
                else {
                  v43 = v39;
                LABEL_61:
                  if ((unsigned __int64)(v41 - 1) < 3) {
                    goto LABEL_91;
                  }
                  v45 = v43 + 2;
                  while (1) {
                    if (*(v45 - 2) == 46) {
                      v39 = v45 - 2;
                      --v45;
                      goto LABEL_73;
                    }
                    if (*(v45 - 1) == 46) {
                      v48 = v45 == v32;
                      v39 = v45 - 1;
                      goto LABEL_74;
                    }
                    if (*v45 == 46) {
                      v39 = v45++;
                      goto LABEL_73;
                    }
                    v46 = v45 + 2;
                    v47 = v45 + 2 == v32;
                    if (v45[1] == 46) {
                      break;
                    }
                    v45 += 4;
                    if (v46 == v32) {
                      goto LABEL_91;
                    }
                  }
                  v39 = v45 + 1;
                  v45 += 2;
                }
                v40 = v39;
                v39 = v45;
                if (v47) {
                  goto LABEL_91;
                }
              }
            }
          LABEL_90:
            {
              v40 = &v30[v31];
              __asm__ volatile("" ::"r"(v40));
            }
          LABEL_91:
            if (v31 < v36 + 1) {
            LABEL_317:
              String_60a230();
            }
            if (v40 == v32) {
              v51 = 0;
            }
            else {
              v51 = v40 - v30 + 1;
            }
            v52 = v51 - v36 - 2;
            if (v31 - (v36 + 1) >= v52) {
              v53 = v52;
            }
            else {
              v53 = v31 - (v36 + 1);
            }
            if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_316;
            }
            if (v53 >= 0x17) {
              if ((v53 | 7) == 0x17) {
                v55 = 26;
              }
              else {
                v55 = (v53 | 7) + 1;
              }
              v54 = (char*)fw_memory_HeapManager_Allocate_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v55, 16, 0);
              v155 = v53;
              v156 = (__int64)v54;
              v154 = v55 | 1;
            }
            else {
              LOBYTE(v154) = 2 * v53;
              v54 = (char*)&v154 + 1;
              if (v53 == 0) {
              LABEL_107:
                v54[v53] = 0;
                v56 = v154;
                v57 = v156;
                if ((v154 & 1) != 0) {
                  v58 = (char*)v156;
                }
                else {
                  v58 = (char*)&v154 + 1;
                }
                if ((v154 & 1) != 0) {
                  v59 = v155;
                }
                else {
                  v59 = (unsigned __int64)(unsigned __int8)v154 >> 1;
                }
                v60 = v59 + 24;
                if (v59 + 24 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_316;
                }
                {
                  v61 = *snd_g_fileIndex_ptr[0];
                  __asm__ volatile("" ::"r"(v61));
                }
                if (v60 > 0x16) {
                  if ((v60 | 7) == 0x17) {
                    v64 = 26;
                  }
                  else {
                    v64 = (v60 | 7) + 1;
                  }
                  v63 = fw_memory_HeapManager_Allocate_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v64, 16, 0);
                  v210_.v211 = v59 + 24;
                  v210_.v212 = (const char*)v63;
                  v210_.v210 = v64 | 1;
                  v62 = v64 | 1;
                }
                else {
                  v62 = 2 * v60;
                  v63 = 0;
                  v210_.v211 = 0;
                  v210_.v212 = nullptr;
                  v210_.v210 = (unsigned __int8)(2 * v60);
                }
                if ((v62 & 1) != 0) {
                  v65 = (char*)v63;
                }
                else {
                  v65 = (char*)&v210_.v210 + 1;
                }
                qmemcpy(v65, "Contents:/Sound/lipsync/", 24);
                if ((v62 & 1) != 0) {
                  v66 = (char*)(v63 + 24);
                }
                else {
                  v66 = (char*)&v213_.v213 + 1;
                }
                if (v59 != 0) {
                  GameRoutine_1a0b940((__int64)v66, (__int64)v58, v59);
                }
                v66[v59] = 0;
                v67 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v210_.v210,
                                                   "_fix.lips", 9u);
                {
                  v69 = v67[1];
                  __asm__ volatile("" ::"r"(v69));
                }
                {
                  v68 = v67[2];
                  __asm__ volatile("" ::"r"(v68));
                }
                *(_QWORD*)&v213_.v213 = *v67;
                *((_QWORD*)&v213_.v213 + 1) = v69;
                v213_.v214 = (const char*)v68;
                v67[1] = 0;
                v67[2] = 0;
                *v67 = 0;
                if ((v213_.v213 & 1) != 0) {
                  v70 = v213_.v214;
                }
                else {
                  v70 = (char*)&v213_.v213 + 1;
                }
                if (v70 != nullptr) {
                  v71 = GameRoutine_1a09c70(v70);
                  v72 = fs_6360e0(v61, (__int64)v70, v71, 0, 0);
                  if ((v213_.v213 & 1) == 0) {
                    goto LABEL_139;
                  }
                }
                else {
                  v72 = 0;
                  if ((v213_.v213 & 1) == 0) {
                    goto LABEL_139;
                  }
                }
                if (v213_.v214 != nullptr) {
                  v73 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v73 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                      (__int64)v213_.v214);
                }
              LABEL_139:
                if ((v210_.v210 & 1) != 0 && v210_.v212 != nullptr) {
                  v74 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v74 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                      (__int64)v210_.v212);
                }
                v75 = v59 + 8;
                if ((v72 & 1) != 0) {
                  if (v59 + 8 < 0xFFFFFFFFFFFFFFF7LL) {
                    if (v75 >= 0x17) {
                      if ((v75 | 7) == 0x17) {
                        v78 = 26;
                      }
                      else {
                        v78 = (v75 | 7) + 1;
                      }
                      v79 = (char*)fw_memory_HeapManager_Allocate_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, v78, 16, 0);
                      *((_QWORD*)&v213_.v213 + 1) = v59 + 8;
                      v213_.v214 = v79;
                      *(_QWORD*)&v213_.v213 = v78 | 1;
                      *(_QWORD*)v79 = 0x2F636E797370696CLL;
                      v76 = v79 + 8;
                    }
                    else {
                      v76 = (char*)&v213_.v213 + 9;
                      *((_QWORD*)&v213_.v213 + 1) = 0;
                      v213_.v214 = nullptr;
                      LOBYTE(v213_.v213) = 2 * v75;
                      *(_QWORD*)((char*)&v213_.v213 + 1) = 0x2F636E797370696CLL;
                      if (v59 == 0) {
                      LABEL_158:
                        v76[v59] = 0;
                        v80 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v213_.v213,
                                                           "_fix.lips", 9u);
                        {
                          v82 = v80[1];
                          __asm__ volatile("" ::"r"(v82));
                        }
                        {
                          v81 = (char*)v80[2];
                          __asm__ volatile("" ::"r"(v81));
                        }
                        v208_.v208[0] = *v80;
                        v208_.v208[1] = v82;
                        v208_.v209 = v81;
                        v80[1] = 0;
                        v80[2] = 0;
                        *v80 = 0;
                        v83 = GameRoutine_118ff0(*GameData_212e248[0]);
                        if ((v208_.v208[0] & 1) != 0) {
                          v84 = v208_.v209;
                        }
                        else {
                          v84 = (char*)v208_.v208 + 1;
                        }
                        FileManager_10df70((void*)((__int64)&v210_.v210), v83,
                                           (__int64)v84, 0x40u);
                        GameRoutine_112180((__int64)&v215_.v215,
                                           (__int64)&v210_.v210);
                        v85 = snd_fnd_WeakHandle_get((__int64)&v215_.v215);
                        (*(void (**)(__int64))(*(_QWORD*)v85 + 40LL))(v85);
                        if ((v208_.v208[0] & 1) != 0) {
                          v86 = (__int64)v208_.v209;
                          if (v208_.v209 == nullptr) {
                            goto LABEL_177;
                          }
                        LABEL_174:
                          v95 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v95 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v95,
                              v86);
                        }
                      LABEL_177:
                        if ((v213_.v213 & 1) != 0 && v213_.v214 != nullptr) {
                          v96 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v96 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                              (__int64)v213_.v214);
                        }
                        if ((v56 & 1) != 0 && v57 != 0) {
                          v97 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v97 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v97,
                              v57);
                        }
                        if ((v201_.v201 & 1) == 0) {
                          goto LABEL_314;
                        }
                        v98 = (__int64)v201_.v203;
                        if (v201_.v203 == nullptr) {
                          goto LABEL_314;
                        }
                        goto LABEL_311;
                      }
                    }
                    GameRoutine_1a0b940((__int64)v76, (__int64)v58, v59);
                    goto LABEL_158;
                  }
                LABEL_316:
                  String_60a1d0();
                }
                if (v59 + 8 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_316;
                }
                if (v75 >= 0x17) {
                  if ((v75 | 7) == 0x17) {
                    v87 = 26;
                  }
                  else {
                    v87 = (v75 | 7) + 1;
                  }
                  v88 = (char*)fw_memory_HeapManager_Allocate_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v87, 16, 0);
                  *((_QWORD*)&v213_.v213 + 1) = v59 + 8;
                  v213_.v214 = v88;
                  *(_QWORD*)&v213_.v213 = v87 | 1;
                  *(_QWORD*)v88 = 0x2F636E797370696CLL;
                  v77 = v88 + 8;
                }
                else {
                  v77 = (char*)&v213_.v213 + 9;
                  *((_QWORD*)&v213_.v213 + 1) = 0;
                  v213_.v214 = nullptr;
                  LOBYTE(v213_.v213) = 2 * v75;
                  *(_QWORD*)((char*)&v213_.v213 + 1) = 0x2F636E797370696CLL;
                  if (v59 == 0) {
                  LABEL_169:
                    v77[v59] = 0;
                    v89 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v213_.v213,
                                                       ".lips", 5u);
                    {
                      v91 = v89[1];
                      __asm__ volatile("" ::"r"(v91));
                    }
                    {
                      v90 = (char*)v89[2];
                      __asm__ volatile("" ::"r"(v90));
                    }
                    v206_.v206[0] = *v89;
                    v206_.v206[1] = v91;
                    v206_.v207 = v90;
                    v89[1] = 0;
                    v89[2] = 0;
                    *v89 = 0;
                    v92 = GameRoutine_118ff0(*GameData_212e248[0]);
                    if ((v206_.v206[0] & 1) != 0) {
                      v93 = v206_.v207;
                    }
                    else {
                      v93 = (char*)v206_.v206 + 1;
                    }
                    FileManager_10df70((void*)((__int64)&v210_.v210), v92,
                                       (__int64)v93, 0x40u);
                    GameRoutine_112180((__int64)&v215_.v215,
                                       (__int64)&v210_.v210);
                    v94 = snd_fnd_WeakHandle_get((__int64)&v215_.v215);
                    (*(void (**)(__int64))(*(_QWORD*)v94 + 40LL))(v94);
                    if ((v206_.v206[0] & 1) == 0) {
                      goto LABEL_177;
                    }
                    v86 = (__int64)v206_.v207;
                    if (v206_.v207 == nullptr) {
                      goto LABEL_177;
                    }
                    goto LABEL_174;
                  }
                }
                GameRoutine_1a0b940((__int64)v77, (__int64)v58, v59);
                goto LABEL_169;
              }
            }
            GameRoutine_1a0b940((__int64)v54, (__int64)&v30[v36 + 1], v53);
            goto LABEL_107;
          }
          v36 = -1;
        }
        if (v31 != 0) {
          goto LABEL_54;
        }
        goto LABEL_90;
      }
    }
    GameRoutine_1a0b940((__int64)v25, (__int64)v20, v24);
    goto LABEL_34;
  }
LABEL_25:
  v26 = (*(__int64 (**)(__int64, __int64, unsigned int*, __int64*))(
      *(_QWORD*)v7 + 168LL))(v7, v12, &v204_.v205, &v204_.v204);
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)v7 + 232LL))(v7, v26, v204_.v205, v204_.v204);
  if ((result & 1) != 0) {
    GameRoutine_1a0ba50((__int64)&v201_.v201, 0, 0x301u);
    v27 = v7 + 4088LL * (int)v204_.v205;
    if (*(_QWORD*)(v8 + 16) != 0) {
      result = SoundArchivePlayer_27a2a0(v27 + 2392, v204_.v204);
      v28 = result;
      if (result == 0) {
        return result;
      }
    }
    else {
      v28 = GameRoutine_27a290(v27 + 2392);
    }
    WORD2(v155) = 0;
    BYTE6(v155) = 0;
    v156 = 0x400000007FLL;
    v158 = 0;
    v154 = 0x3F80000000000000LL;
    v157 = 0xFFFF;
    v168 = -1;
    v185 = -1;
    v197 = -1;
    LOBYTE(v155) = 127;
    v159 = 127;
    v161 = 0;
    v160 = 0;
    v163 = 0;
    v164 = 127;
    v167 = 64;
    v166 = 0;
    v165 = 0;
    v169 = 0;
    v170 = 0;
    v171 = 127;
    v162 = 0xFFFF00000040LL;
    v174 = 0xFFFF00000040LL;
    v173 = 0;
    v172 = 0;
    v175 = 0;
    v176 = 127;
    v179 = 0xFFFF00000040LL;
    v178 = 0;
    v177 = 0;
    v180 = 0;
    v181 = 127;
    v184 = 64;
    v183 = 0;
    v182 = 0;
    v186 = 0;
    v187 = 0;
    v188 = 127;
    v191 = 0xFFFF00000040LL;
    v190 = 0;
    v189 = 0;
    v192 = 0;
    v193 = 127;
    v196 = 64;
    v195 = 0;
    v194 = 0;
    v198 = 0;
    v199 = -1;
    v200 = 0;
    BYTE3(v155) = 0;
    *(_WORD*)((char*)&v155 + 1) = 0;
    result = BaseNx_278a40(v28, (__int64)&v154, v26);
    if ((result & 1) != 0) {
      result =
          SoundArchivePlayer_279410(v28, (const char*)&v201_.v201, 0x301u, v26);
    }
    if ((_BYTE)v201_.v201 != 0) {
      Manager_6326c0((__int64*)&v213_.v213, (const char*)&v201_.v201);
      v99 = GameRoutine_a1b200((unsigned __int8*)&v213_.v213, "/");
      v100 = GameRoutine_a1b200((unsigned __int8*)&v213_.v213, ".");
      snd_a1b360((void*)(&v210_.v210), (unsigned __int8*)&v213_.v213, v99 + 1,
                 v100 + ~v99);
      Manager_6326c0(v152_.v152, &GameData_1a9f09e);
      if ((v210_.v210 & 1) != 0) {
        fw_text_String_CopyTerminated(&v149_.v149, (__int64)v210_.v212,
                                      v210_.v211);
      }
      else {
        v149_.v149 = v210_.v210;
        v149_.v150 = v210_.v211;
        v149_.v151 = v210_.v212;
      }
      if (v15 >= 1) {
        v101 = (__int64*)fw_memory_g_heap_manager_ptr;
        while (1) {
          if ((v149_.v149 & 1) != 0) {
            v102 = v149_.v150;
          }
          else {
            v102 = (unsigned __int64)(unsigned __int8)v149_.v149 >> 1;
          }
          if ((v149_.v149 & 1) != 0) {
            v103 = (char*)v149_.v151;
          }
          else {
            v103 = (char*)&v149_.v149 + 1;
          }
          v104 = GameRoutine_1a09c60((__int64)v103, 95, v102);
          v105 = v104 - (_QWORD)v103;
          if (v104 == 0 || v105 == -1) {
            goto LABEL_257;
          }
          if (v102 >= v105) {
            v102 = v104 - (_QWORD)v103;
          }
          if (v102 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_316;
          }
          if (v102 >= 0x17) {
            break;
          }
          v107 = (char*)v144_.v144 + 1;
          LOBYTE(v144_.v144[0]) = 2 * v102;
          if (v102 != 0) {
            goto LABEL_220;
          }
        LABEL_221:
          v107[v102] = 0;
          v109 = (__int64*)GameRoutine_1a09ce0((__int64)v144_.v144, "/", 1u);
          {
            v111 = v109[1];
            __asm__ volatile("" ::"r"(v111));
          }
          {
            v110 = v109[2];
            __asm__ volatile("" ::"r"(v110));
          }
          v146_.v146 = *v109;
          v146_.v147 = v111;
          v146_.v148 = (const char*)v110;
          v109[1] = 0;
          v109[2] = 0;
          *v109 = 0;
          if ((v146_.v146 & 1) != 0) {
            v112 = v146_.v148;
          }
          else {
            v112 = (char*)&v146_.v146 + 1;
          }
          if ((v146_.v146 & 1) != 0) {
            v113 = v146_.v147;
          }
          else {
            v113 = (unsigned __int64)(unsigned __int8)v146_.v146 >> 1;
          }
          GameRoutine_1a09ce0((__int64)v152_.v152, v112, v113);
          if ((v146_.v146 & 1) != 0 && v146_.v148 != nullptr) {
            v114 = 128;
            if (*(_QWORD*)(*v101 + 200) == 0) {
              v114 = 56;
            }
            nn_mem_StandardAllocator_Free(*v101 + v114, (__int64)v146_.v148);
          }
          if ((v144_.v144[0] & 1) != 0 && v144_.v145 != nullptr) {
            v115 = 128;
            if (*(_QWORD*)(*v101 + 200) == 0) {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free(*v101 + v115, (__int64)v144_.v145);
          }
          v116 = v149_.v150;
          if ((v149_.v149 & 1) == 0) {
            v116 = (unsigned __int64)(unsigned __int8)v149_.v149 >> 1;
          }
          if (v105 >= v116) {
            goto LABEL_317;
          }
          v117 = v105 + 1;
          v118 = v116 - (v105 + 1);
          if ((v149_.v149 & 1) != 0) {
            v119 = (char*)v149_.v151;
          }
          else {
            v119 = (char*)&v149_.v149 + 1;
          }
          if (v118 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_316;
          }
          if (v118 >= 0x17) {
            if ((v118 | 7) == 0x17) {
              v121 = 26;
            }
            else {
              v121 = (v118 | 7) + 1;
            }
            v120 = (const char*)fw_memory_HeapManager_Allocate_alt2(*v101, v121,
                                                                    16, 0);
            v146_.v147 = v118;
            v146_.v148 = v120;
            v146_.v146 = v121 | 1;
          LABEL_251:
            GameRoutine_1a0b940((__int64)v120, (__int64)&v119[v117], v118);
            goto LABEL_252;
          }
          v120 = (char*)&v146_.v146 + 1;
          LOBYTE(v146_.v146) = 2 * v118;
          if (v116 != v117) {
            goto LABEL_251;
          }
        LABEL_252:
          v122 = v149_.v149;
          v120[v118] = 0;
          if ((v122 & 1) != 0 && v149_.v151 != nullptr) {
            v123 = 128;
            if (*(_QWORD*)(*v101 + 200) == 0) {
              v123 = 56;
            }
            nn_mem_StandardAllocator_Free(*v101 + v123, (__int64)v149_.v151);
          }
          --v15;
          v149_.v149 = v146_.v146;
          v149_.v150 = v146_.v147;
          v149_.v151 = v146_.v148;
          if (v15 == 0) {
            goto LABEL_257;
          }
        }
        if ((v102 | 7) == 0x17) {
          v108 = 26;
        }
        else {
          v108 = (v102 | 7) + 1;
        }
        v107 = (char*)fw_memory_HeapManager_Allocate_alt2(*v101, v108, 16, 0);
        v144_.v144[1] = v102;
        v144_.v145 = v107;
        v144_.v144[0] = v108 | 1;
      LABEL_220:
        GameRoutine_1a0b940((__int64)v107, (__int64)v103, v102);
        goto LABEL_221;
      }
    LABEL_257:
      {
        v124 = *snd_g_fileIndex_ptr[0];
        __asm__ volatile("" ::"r"(v124));
      }
      GameRoutine_1a0a7c0((void*)(v142_.v142), "Contents:/Sound/lipsync/",
                          v152_.v152);
      snd_a1b510((void*)(v144_.v144), (__int64)v142_.v142,
                 (unsigned __int8*)&v210_.v210);
      fs_639720((void*)(&v146_.v146), (__int64)v144_.v144, "_fix.lips");
      if ((v146_.v146 & 1) != 0) {
        v125 = v146_.v148;
      }
      else {
        v125 = (char*)&v146_.v146 + 1;
      }
      v126 = GameRoutine_a1b440(v124, v125);
      if ((v146_.v146 & 1) != 0 && v146_.v148 != nullptr) {
        v127 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v127 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, (__int64)v146_.v148);
      }
      if ((v144_.v144[0] & 1) != 0 && v144_.v145 != nullptr) {
        v128 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v128 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v128, (__int64)v144_.v145);
      }
      if ((v142_.v142[0] & 1) != 0 && v142_.v143 != 0) {
        v129 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v129 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v129, v142_.v143);
      }
      if ((v126 & 1) != 0) {
        GameRoutine_1a0a7c0((void*)(v144_.v144), "lipsync/", v152_.v152);
        snd_a1b510((void*)(&v146_.v146), (__int64)v144_.v144,
                   (unsigned __int8*)&v210_.v210);
        fs_639720((void*)(v140_.v140), (__int64)&v146_.v146, "_fix.lips");
        GameRoutine_a1b490((__int64)&v215_.v215, (__int64)v140_.v140);
        if ((v140_.v140[0] & 1) == 0) {
          goto LABEL_284;
        }
        v130 = v140_.v141;
        if (v140_.v141 == 0) {
          goto LABEL_284;
        }
      }
      else {
        GameRoutine_1a0a7c0((void*)(v144_.v144), "lipsync/", v152_.v152);
        snd_a1b510((void*)(&v146_.v146), (__int64)v144_.v144,
                   (unsigned __int8*)&v210_.v210);
        fs_639720((void*)(v138_.v138), (__int64)&v146_.v146, ".lips");
        GameRoutine_a1b490((__int64)&v215_.v215, (__int64)v138_.v138);
        if ((v138_.v138[0] & 1) == 0) {
          goto LABEL_284;
        }
        v130 = v138_.v139;
        if (v138_.v139 == 0) {
          goto LABEL_284;
        }
      }
      v131 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v131 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v131, v130);
    LABEL_284:
      if ((v146_.v146 & 1) != 0 && v146_.v148 != nullptr) {
        v132 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v132 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v132, (__int64)v146_.v148);
      }
      if ((v144_.v144[0] & 1) != 0 && v144_.v145 != nullptr) {
        v133 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v133 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v133, (__int64)v144_.v145);
      }
      if ((v149_.v149 & 1) != 0 && v149_.v151 != nullptr) {
        v134 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v134 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, (__int64)v149_.v151);
      }
      if ((v152_.v152[0] & 1) != 0 && v152_.v153 != 0) {
        v135 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v135 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v152_.v153);
      }
      if ((v210_.v210 & 1) != 0 && v210_.v212 != nullptr) {
        v136 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v136 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, (__int64)v210_.v212);
      }
      if ((v213_.v213 & 1) != 0) {
        v98 = (__int64)v213_.v214;
        if (v213_.v214 == nullptr) {
          goto LABEL_314;
        }
      LABEL_311:
        v137 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v137 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v98);
      }
    LABEL_314:
      *((_BYTE*)v3 + 40) = 1;
      result = GameRoutine_112180((__int64)(v3 + 3), (__int64)&v215_.v215);
      v3[1] = 0;
      *((_DWORD*)v3 + 4) = 0;
    }
  }
  return result;
}

__int64 memory_a91f40(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  _QWORD* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  char* v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
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
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  const char* v55;
  unsigned __int64 v56;
  __int128 v57;
  __int64 v58;
  const char* v59;
  _QWORD* v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  const char* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 (**v70)();
  const char* v72;
  unsigned __int64 v73;
  _BOOL4 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  const char* v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  int v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  __int64 (**v105)();
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  unsigned __int64 v117;
  struct {
    char gap0_[48];
    __int64 v118;
    __int64 v119;
    char gap64_[8];
    __int64 (**v121)();
    _QWORD* v122;
    int v123;
    char gap92_[4];
    __int64 (**v124)();
    _QWORD* v125;
    int v126;
    char gap116_[12];
    __int64 (***v127)();
  } f_;
  __int64 v120;

  v3 = a1[5];
  v4 = (_QWORD*)a1[6];
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (char*)v4 - v3;
  v10 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v4 - v3) >> 5);
  v117 = 0xAAAAAAAB00000000LL * (((__int64)v4 - v3) >> 5);
  v11 = (__int64)(v117 + 0x100000000LL) >> 32;
  v12 = v11 - v10;
  if (v11 <= v10) {
    if (v11 >= v10) {
      v20 = a1[6];
      goto LABEL_34;
    }
    v20 = v3 + 96LL * (int)v11;
    if ((_QWORD*)v20 != v4) {
      do {
        v46 = *(v4 - 12);
        v4 -= 12;
        v45 = v46;
        *v4 = 0;
        if (v46 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
        }
      } while (v4 != (_QWORD*)v20);
    }
  LABEL_27:
    a1[6] = v20;
    goto LABEL_34;
  }
  v13 = a1[7];
  if (0xAAAAAAAAAAAAAAABLL * ((v13 - (__int64)v4) >> 5) >= v12) {
    v47 = (__int64*)GameData_212c2a0;
    v20 = (__int64)&v4[12 * v12];
    do {
      v4[10] = 0;
      v4[11] = 0;
      v4[8] = 0;
      v4[9] = 0;
      v4[6] = 0;
      v4[7] = 0;
      v4[4] = 0;
      v4[5] = 0;
      v4[2] = 0;
      v4[3] = 0;
      *v4 = 0;
      v4[1] = 0;
      *((_DWORD*)v4 + 4) = -1;
      v48 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v47);
      v4[9] = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v47);
      v4[11] = v48;
      v49 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 8);
      v4[5] = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47);
      v4[7] = v49;
      v50 = *v47;
      v4[6] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47);
      v4[4] = v50;
      v51 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v47);
      v4[10] = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v47);
      v4[8] = v51;
      v4 += 12;
    } while (v4 != (_QWORD*)v20);
    goto LABEL_27;
  }
  if (v11 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_a93290();
  }
  v14 = 0xAAAAAAAAAAAAAAABLL * ((v13 - v3) >> 5);
  if (2 * v14 > v11) {
    v11 = 2 * v14;
  }
  if (v14 >= 0x155555555555555LL) {
    v15 = 0x2AAAAAAAAAAAAAALL;
  }
  else {
    v15 = v11;
  }
  if (v15 > 0x2AAAAAAAAAAAAAALL) {
    goto LABEL_107;
  }
  v16 = fw_memory_g_heap_manager_ptr;
  v17 = fw_memory_HeapManager_Allocate_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v15, 16, 0);
  v18 = &v9[v17];
  v19 = GameData_212c2a0;
  v20 = (__int64)&v9[96 * v12 + v17];
  v21 = &v9[v17];
  do {
    v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19);
    v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19 + 8);
    *((_QWORD*)v21 + 2) = 0;
    *((_QWORD*)v21 + 3) = 0;
    *(_QWORD*)v21 = 0;
    *((_QWORD*)v21 + 1) = 0;
    *((_DWORD*)v21 + 4) = -1;
    *((_QWORD*)v21 + 8) = v22;
    *((_QWORD*)v21 + 9) = v23;
    v24 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v19);
    *((_QWORD*)v21 + 10) =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v19);
    *((_QWORD*)v21 + 11) = v24;
    v25 = v19[1];
    *((_QWORD*)v21 + 4) = *v19;
    *((_QWORD*)v21 + 5) = v25;
    v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19 + 8);
    *((_QWORD*)v21 + 6) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19);
    *((_QWORD*)v21 + 7) = v26;
    v21 += 96;
  } while (v21 != (char*)v20);
  v27 = 96 * v15;
  v28 = (char*)a1[5];
  v29 = (char*)a1[6];
  v30 = v17 + v27;
  v31 = &v18[v28 - v29];
  if (v29 != v28) {
    v32 = (char*)a1[5];
    v33 = v31;
    do {
      v34 = *(_QWORD*)v32;
      *(_QWORD*)v32 = 0;
      *(_QWORD*)v33 = v34;
      v35 = *((_QWORD*)v32 + 1);
      v36 = *((_QWORD*)v32 + 3);
      *((_QWORD*)v33 + 2) = *((_QWORD*)v32 + 2);
      *((_QWORD*)v33 + 3) = v36;
      *((_QWORD*)v33 + 1) = v35;
      v37 = *((_QWORD*)v32 + 4);
      v38 = *((_QWORD*)v32 + 5);
      v39 = *((_QWORD*)v32 + 7);
      *((_QWORD*)v33 + 6) = *((_QWORD*)v32 + 6);
      *((_QWORD*)v33 + 7) = v39;
      *((_QWORD*)v33 + 4) = v37;
      *((_QWORD*)v33 + 5) = v38;
      v40 = *((_QWORD*)v32 + 8);
      v41 = *((_QWORD*)v32 + 9);
      v42 = *((_QWORD*)v32 + 10);
      v43 = *((_QWORD*)v32 + 11);
      v32 += 96;
      *((_QWORD*)v33 + 10) = v42;
      *((_QWORD*)v33 + 11) = v43;
      *((_QWORD*)v33 + 8) = v40;
      *((_QWORD*)v33 + 9) = v41;
      v33 += 96;
    } while (v32 != v29);
    do {
      v44 = *(_QWORD*)v28;
      *(_QWORD*)v28 = 0;
      if (v44 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
      }
      v28 += 96;
    } while (v28 != v29);
    v28 = (char*)a1[5];
  }
  a1[5] = v31;
  a1[6] = v20;
  a1[7] = v30;
  v8 = (__int64*)v16;
  if (v28 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v52, (__int64)v28);
    v20 = a1[6];
  }
LABEL_34:
  v53 = fw_memory_HeapManager_Allocate_alt2(*v8, 432, 16, 0);
  gfx_render_DecalObject_DecalObject(v53);
  v54 = *(_QWORD*)(v20 - 96);
  *(_QWORD*)(v20 - 96) = v53;
  if (v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54);
    v53 = *(_QWORD*)(v20 - 96);
  }
  v55 = *(const char**)a2;
  v56 = GameRoutine_1a09c70(*(const char**)a2);
  GameRoutine_60a060((char*)(v53 + 8), (__int64)v55, v56);
  v57 = *(_OWORD*)(a2 + 76);
  v58 = *(_QWORD*)(v20 - 96);
  f_.v121 = nullptr;
  f_.v123 = 0;
  *(_OWORD*)(v58 + 272) = v57;
  LODWORD(f_.v122) = -1;
  v59 = *(const char**)(a2 + 24);
  v60 = *(_QWORD**)(game_g_frame_clock + 13424);
  if (v59 != nullptr) {
    v61 = a1[11];
    if (v61 != 0) {
    LABEL_58:
      v75 = *(unsigned int*)(a2 + 36) |
            ((unsigned __int64)*(unsigned int*)(a2 + 32) << 32);
      v76 = GameRoutine_1a09c70(v59);
      v77 = *(const char**)(a2 + 16);
      v78 = v76;
      v79 = GameRoutine_1a09c70(v77);
      v80 = a1[12];
      f_.v118 = v61;
      f_.v119 = v80;
      if (v80 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                  memory_order_relaxed);
      }
      llvm_libcxx_21_libcxx_include___vector_b35d00(
          (void*)((__int64)&f_.v124), v60, (__int64)v59, v78, (__int64)v77, v79,
          v75, &f_.v118);
      f_.v121 = f_.v124;
      f_.v122 = f_.v125;
      f_.v123 = f_.v126;
      if (f_.v119 != 0) {
        std___1___shared_weak_count___release_weak(f_.v119);
      }
      v69 = 0xFFFFFFFFLL;
      v70 = nullptr;
      goto LABEL_63;
    }
    v62 = (_QWORD*)fw_memory_HeapManager_Allocate_alt2(*v8, 80, 16, 0);
    v62[2] = 0;
    v63 = a1[12];
    v62[8] = 0;
    *v62 = GameData_1fbf780;
    v62[1] = 0;
    a1[11] = v62 + 4;
    a1[12] = v62;
    if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
      std___1___shared_weak_count___release_weak(v63);
    }
    v64 = (_QWORD*)a1[11];
    f_.v124 = GameData_1fc1030;
    f_.v125 = a1;
    f_.v127 = &f_.v124;
    GameRoutine_a934d0(&f_.v124, v64);
    if (f_.v127 == &f_.v124) {
      v65 = 4;
    }
    else {
      if (f_.v127 == nullptr) {
      LABEL_57:
        v59 = *(const char**)(a2 + 24);
        v61 = a1[11];
        goto LABEL_58;
      }
      v65 = 5;
    }
    ((__int64 (*)(__int64))(*f_.v127)[v65])((__int64)f_.v127);
    goto LABEL_57;
  }
  v120 = a3;
  v66 = *(const char**)(a2 + 16);
  v67 = GameRoutine_1a09c70(v66);
  v68 = g3d_a6c880(&v120, (__int64)v66, v67);
  if (v68 != 0) {
    v69 = *(unsigned int*)(v68 + 144);
    v70 = *(__int64 (***)(void))(*(_QWORD*)(v68 + 128) + 8LL);
    if (v70 != nullptr && v69 != 0xFFFFFFFFLL) {
      if (v70 == nullptr) {
        goto LABEL_63;
      }
      goto LABEL_53;
    }
  }
  else {
    v70 = nullptr;
    v69 = 0xFFFFFFFFLL;
  }
  v72 = *(const char**)(a2 + 16);
  v73 = GameRoutine_1a09c70(v72);
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&f_.v124), (__int64)v60,
      (__int64)"Graphics/Textures/common_default", 0x20u, (__int64)v72, v73, 0);
  f_.v121 = f_.v124;
  f_.v122 = f_.v125;
  f_.v123 = f_.v126;
  if (v70 != nullptr) {
  LABEL_53:
    if (v69 != 0xFFFFFFFFLL) {
      v74 = false;
      goto LABEL_93;
    }
  }
LABEL_63:
  v81 = GameRoutine_b36980(v60, (__int64)&f_.v121);
  if (v81 == 0) {
    v70 = f_.v121;
    v69 = (unsigned int)f_.v122;
    DecalModule_a92840(a1 + 13, &f_.v121);
    v74 = false;
    goto LABEL_93;
  }
  if (v81 == -1) {
    llvm_libcxx_21_libcxx_include___vector_b36540(v60, (__int64)&f_.v121);
    llvm_libcxx_21_libcxx_include___vector_b34420(
        (void*)((__int64)&f_.v124), (__int64)v60,
        (__int64)"Graphics/Textures/common_default", 0x20u,
        (__int64)"Cmn_Default_BC", 14, 0);
    v70 = f_.v124;
    v69 = (unsigned int)f_.v125;
    v74 = false;
    goto LABEL_93;
  }
  v115 = v10;
  v10 = a1[9];
  v82 = a1[10];
  v116 = v81;
  if (v10 >= v82) {
    v84 = a1[8];
    v85 = v10 - v84;
    v86 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v10 - v84) >> 3) + 1;
    if (v86 > 0x492492492492492LL) {
      GameRoutine_a932d0();
    }
    v87 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v82 - v84) >> 3);
    if (2 * v87 > v86) {
      v86 = 2 * v87;
    }
    if (v87 >= 0x249249249249249LL) {
      v88 = 0x492492492492492LL;
    }
    else {
      v88 = v86;
    }
    if (v88 <= 0x492492492492492LL) {
      v89 = 56 * v88;
      v90 = fw_memory_HeapManager_Allocate_alt2(fw_memory_g_heap_manager,
                                                56 * v88, 16, 0);
      v91 = (_QWORD*)(v90 + v85);
      v92 = v90 + v89;
      v83 = v90 + v85 + 56;
      *v91 = 0;
      v91[1] = 0;
      v91[2] = 0;
      v91[3] = 0;
      v91[4] = 0;
      v91[5] = 0;
      v91[6] = 0;
      *((_DWORD*)v91 + 8) = -1;
      if (v84 != v10) {
        v113 = v92;
        v114 = v90;
        v93 = v84;
        v94 = v90;
        do {
          v95 = *(_QWORD*)v93;
          v96 = *(_QWORD*)(v93 + 16);
          *(_QWORD*)(v94 + 8) = *(_QWORD*)(v93 + 8);
          *(_QWORD*)(v94 + 16) = v96;
          *(_QWORD*)v94 = v95;
          *(_QWORD*)(v93 + 8) = 0;
          *(_QWORD*)(v93 + 16) = 0;
          *(_QWORD*)v93 = 0;
          v97 = *(_QWORD*)(v93 + 24);
          v98 = *(_QWORD*)(v93 + 32);
          v99 = *(_QWORD*)(v93 + 40);
          v100 = *(_DWORD*)(v93 + 48);
          v93 += 56;
          *(_DWORD*)(v94 + 48) = v100;
          *(_QWORD*)(v94 + 32) = v98;
          *(_QWORD*)(v94 + 40) = v99;
          *(_QWORD*)(v94 + 24) = v97;
          v94 += 56;
        } while (v93 != v10);
        do {
          if ((*(_BYTE*)v84 & 1) != 0) {
            v101 = *(_QWORD*)(v84 + 16);
            if (v101 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v102 = 128;
              }
              else {
                v102 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v102,
                                            v101);
            }
          }
          v84 += 56;
        } while (v84 != v10);
        v84 = a1[8];
        v92 = v113;
        v90 = v114;
      }
      LODWORD(v10) = v115;
      a1[8] = v90;
      a1[9] = v83;
      a1[10] = v92;
      if (v84 != 0) {
        v103 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v103 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, v84);
      }
      goto LABEL_92;
    }
  LABEL_107:
    GameRoutine_60a210();
  }
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  v83 = v10 + 56;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)v10 = 0;
  *(_DWORD*)(v10 + 32) = -1;
  LODWORD(v10) = v115;
LABEL_92:
  a1[9] = v83;
  *(_DWORD*)(v83 - 8) = v10;
  GameRoutine_60a020(v83 - 56, *(const char**)(a2 + 16));
  v105 = f_.v121;
  v104 = f_.v122;
  *(_DWORD*)(v83 - 16) = f_.v123;
  *(_QWORD*)(v83 - 32) = v105;
  *(_QWORD*)(v83 - 24) = v104;
  v74 = v116 == 2;
LABEL_93:
  *(_DWORD*)(*(_QWORD*)(v20 - 96) + 240LL) = 0;
  v106 = *(_QWORD*)(v20 - 96);
  *(_DWORD*)(v106 + 244) = GameRoutine_ad6000((__int64)"DecalOcclusion", 0xEu);
  if (v70 != nullptr && v69 != 0xFFFFFFFFLL) {
    v107 = *(_QWORD*)(v20 - 96);
    *(_QWORD*)(v20 - 88) = v70;
    *(_DWORD*)(v20 - 80) = v69;
    if (*(_BYTE*)(v107 + 264) == 1) {
      *(_DWORD*)(v107 + 256) = v69;
    }
    else {
      *(_QWORD*)(v107 + 256) = v69;
      *(_BYTE*)(v107 + 264) = 1;
    }
    *(_QWORD*)(v107 + 248) = v70;
    v108 = a1[4];
    if (v108 != 0) {
      v109 = std___1___shared_weak_count_lock(v108);
      if (v109 != 0) {
        v110 = v109;
        v111 = (_QWORD*)a1[3];
        if (v111 != nullptr) {
          *(_QWORD*)(v20 - 72) = Scene_a70a20(v111, *(_QWORD*)(v20 - 96));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
          std___1___shared_weak_count___release_weak(v110);
        }
      }
    }
  }
  *(_DWORD*)(*(_QWORD*)(a1[5] + 96LL * SHIDWORD(v117)) + 36LL) = 0;
  if (v74) {
    DecalModule_a929a0(a1);
  }
  return (unsigned int)v10;
}

__int64 memory_c04c40(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  float v7;
  float v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  unsigned __int64 v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  float32x4_t v40;
  int8x16_t v41;
  int8x16_t v42;
  float32x4_t* v43;
  float32x4_t* v44;
  float32x4_t v45;
  __int64 v46;
  int v47;
  __int64 v48;
  float v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _BYTE* v52;
  unsigned __int64 v53;
  float32x4_t v54;
  int8x16_t v55;
  float v56;
  bool v57;
  unsigned int v58;
  __int64 v59;
  float* v60;
  int v62;
  float v63;
  int v65;
  char v66;
  float v67;
  float v69;
  float v71;
  float v73;
  float v74;
  unsigned __int32 v76;
  unsigned __int32 v77;
  float v79;
  float v80;
  float v81;
  int* v82;
  int* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  float v91;
  __int64 v92;
  __int64 v93;
  float v94;
  int v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  float v99;
  float v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  float v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  signed __int32 v107;
  signed __int32 v108;
  float v109;
  unsigned __int64 v110;
  int v111;
  int v112;
  __int64 v113;
  float v114;
  int v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  __int64 v121;
  __int64 v122;
  struct {
    __int64 v123;
    __int64 v124;
    float32x4_t v125;
    _QWORD v126[8];
    char gap96_[8];
    __int64 v127;
    __int64 v128;
    char gap120_[16];
    __int64 v129;
  } f_;

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  v3 = 0;
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    if ((*(_BYTE*)(v1 + 300) & 0xFD) == 1) {
      v3 = 0;
    }
    else {
      v14 = *(_QWORD*)(a1 + 8);
      do {
        v14 = *(_QWORD*)(v14 + 736);
        v3 = v14 == 0;
      } while (v14 != 0 && *(_BYTE*)(v14 + 289) == 1 &&
               *(_BYTE*)(v14 + 288) == 1 && (*(_BYTE*)(v14 + 300) & 0xFD) != 1);
    }
  }
  v4 = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(a1 + 32);
  if (v4 != v5) {
    do {
      if (*(_QWORD*)v4 != 0 & *(unsigned __int8*)(a1 + 313) != v3) {
        *(_BYTE*)(*(_QWORD*)v4 + 32LL) = v3;
      }
      v4 += 8;
    } while (v4 != v5);
    v1 = *(_QWORD*)(a1 + 8);
  }
  *(_BYTE*)(a1 + 313) = v3;
  v7 = *(float*)(a1 + 304);
  v8 = *(float*)(*(_QWORD*)(v1 + 496) + 16LL);
  wld_c03400(&f_.v127),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = *(_QWORD*)(a1 + 152);
  if (result == 0) {
    goto LABEL_151;
  }
  result = std___1___shared_weak_count_lock(result),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (result == 0 || *(_QWORD*)(a1 + 144) == 0 || GameData_21c6978 == 0) {
    goto LABEL_151;
  }
  v10 = *(_QWORD*)(GameData_21c6978 + 32);
  f_.v124 = result;
  if (*(_QWORD*)(GameData_21c6978 + 24) == v10 ||
      (v11 = *(_QWORD*)(v10 - 8)) == 0) {
    v13 = nullptr;
    goto LABEL_29;
  }
  v13 = *(float**)(v11 + 24);
  v12 = *(_QWORD*)(v11 + 32);
  if (v12 == 0) {
  LABEL_29:
    f_.v123 = 0;
    goto LABEL_30;
  }
  f_.v123 = v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
LABEL_30:
  (*(void (**)(__int64))(*(_QWORD*)v13 + 72LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 56LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 80LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v20 = vmulq_f32(vmulq_f32(v17, v16), v19);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v22 = vsubq_f32(v20, vmulq_f32(vmulq_f32(v17, v19), v21));
  LANES128(v22).n128_u64[0] = LANES128_OF(vpaddq_f32(v22, v22)).n128_u64[0];
  v23 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1));
  v24 = vrecpeq_f32(v23);
  v25 = vmulq_f32(v24, vrecpsq_f32(v24, v23));
  v26 = vmulq_f32(v25, vrecpsq_f32(v25, v23));
  v27 = vzip1q_s32(v17, v18);
  v28 = vzip2q_s32(v17, v18);
  v29 = vzip1q_s32(v15, COERCE_AS(int32x4_t, 0));
  v30 = vzip2q_s32(v27, v29);
  v31 = vzip1q_s32(v28, vzip2q_s32(v15, COERCE_AS(int32x4_t, 0)));
  v32 = vzip1q_s32(v27, v29);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v36 = LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = v36;
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v37 = vmulq_f32(v26, vmlsq_f32(vmulq_f32(v33, v15), v31, v34));
  v38 = vmulq_f32(v26, vmlsq_f32(vmulq_f32(v34, v16), v15, v35));
  v39 = vmulq_f32(v26, vmlsq_f32(vmulq_f32(v31, v35), v16, v33));
  v41 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v37), LANES128(v40).n128_f32[0]),
                     v38, COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1),
      v39, v40, 2);
  v42 = vceqzq_f32(v23);
  *(int8x16_t*)f_.v126 = vbicq_s8(v37, v42);
  *(int8x16_t*)&f_.v126[2] = vbicq_s8(v38, v42);
  *(int8x16_t*)&f_.v126[4] = vbicq_s8(v39, v42);
  *(int8x16_t*)&f_.v126[6] = vbicq_s8(v41, v42);
  GameRoutine_5eaef0_alt1(),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 40LL))((__int64)v13),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = *(float32x4_t**)(a1 + 224);
  v44 = *(float32x4_t**)(a1 + 232);
  f_.v125 = v45;
  if (v43 != v44) {
    v46 = f_.v127;
    v47 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL);
    f_.v129 = a1 + 256;
    if (v47 == 1) {
      v48 = 64;
    }
    else {
      v48 = 8;
    }
    v49 = v13[20] * v13[20];
    do {
      v50 = LANES128(v43[2]).n128_u64[0];
      v51 = LANES128(v43[1]).n128_u64[1];
      v52 = *(_BYTE**)(a1 + 296);
      f_.v126[3] = LANES128(v43[2]).n128_u64[1];
      v53 = LANES128(v43[1]).n128_u64[0];
      f_.v126[1] = v51;
      f_.v126[2] = v50;
      f_.v126[0] = v53;
      if (v52[8] == 1 &&
          ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v52 + 24LL))(
               (__int64)v52, (__int64)f_.v126) &
           1) == 0) {
        v65 = 0;
        v57 = false;
        LANES128(v43[5]).n128_u32[3] = 0;
        LANES128(v43[5]).n128_u64[0] = 0x800000008LL;
        v66 = 1;
        goto LABEL_108;
      }
      v54 = vsubq_f32(*v43, f_.v125);
      v55 = vmulq_f32(v54, v54);
      LANES128(v55).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
              .n64_u64[0];
      {
        __typeof__(v56) z_ = (__typeof__(v56)){0};
        LODWORD(z_) =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
                .n64_u32[0];
        v56 = z_;
      }
      LANES128(v43[6]).n128_f32[0] = v56;
      if (v47 == 1) {
        v57 = false;
        v56 = v49;
      }
      else {
        v57 = *(_BYTE*)(a1 + 312) == 1 &&
              v56 < (float)((float)(*(float*)(a1 + 308) +
                                    LANES128(v43[3]).n128_f32[0]) *
                            (float)(*(float*)(a1 + 308) +
                                    LANES128(v43[3]).n128_f32[0]));
      }
      v58 = *(_DWORD*)(a1 + 248);
      v59 = f_.v129;
      if ((v58 & 0x80000000) == 0) {
        v59 = *(_QWORD*)(v46 + 32) + 56LL * v58 + 24;
      }
      v60 = (float*)&GameData_1b7ee48;
      if (v47 != 1) {
        v60 = (float*)v59;
      }
      if (*v60 >= 0x0.0p+0f & v56 > (float)(*v60 * *v60)) {
        v63 = v60[1];
        if (v63 >= 0x0.0p+0f & v56 > (float)(v63 * v63)) {
          v67 = v60[2];
          if (v67 >= 0x0.0p+0f & v56 > (float)(v67 * v67)) {
            v69 = v60[3];
            if (v69 >= 0x0.0p+0f & v56 > (float)(v69 * v69)) {
              v71 = v60[4];
              if (v71 >= 0x0.0p+0f & v56 > (float)(v71 * v71)) {
                v73 = v60[5];
                v62 = 5;
                if (v73 >= 0x0.0p+0f && v56 > (float)(v73 * v73)) {
                  v74 = v60[6];
                  if (v56 <= (float)(v74 * v74) | v74 < 0x0.0p+0f) {
                    v62 = 6;
                  }
                  else {
                    v62 = 7;
                  }
                }
              }
              else {
                v62 = 4;
              }
            }
            else {
              v62 = 3;
            }
          }
          else {
            v62 = 2;
          }
        }
        else {
          v62 = 1;
        }
      }
      else {
        v62 = 0;
      }
      if (v62 <= (signed __int32)LANES128(v43[5]).n128_u32[2]) {
        v62 = LANES128(v43[5]).n128_i32[2];
      }
      v77 = LANES128(v43[5]).n128_u32[0];
      v76 = LANES128(v43[5]).n128_u32[1];
      if (v77 == v62 | v77 == 8) {
        if (v76 == v77 ||
            (v79 = LANES128(v43[5]).n128_f32[3]) <= 0x1.47ae140000000p-7f) {
          v66 = 0;
          LANES128(v43[5]).n128_u32[0] = v62;
          LANES128(v43[5]).n128_u32[1] = v62;
          v65 = 1;
          LANES128(v43[5]).n128_u32[3] = 0;
          goto LABEL_108;
        }
        LANES128(v43[5]).n128_u32[0] = v76;
        LANES128(v43[5]).n128_u32[1] = v62;
        LANES128(v43[5]).n128_f32[3] = 0x1.0000000000000p+0f - v79;
        if (v62 == v76) {
          goto LABEL_105;
        }
      }
      else {
        if (v76 == v77 || v76 == v62 ||
            (v80 = LANES128(v43[5]).n128_f32[3]) <= 0x1.47ae140000000p-7f) {
          if (v76 != v62) {
            LANES128(v43[5]).n128_u32[1] = v62;
            LANES128(v43[5]).n128_u32[3] = 0;
          }
        LABEL_103:
          if (v62 == v77) {
            goto LABEL_105;
          }
          goto LABEL_104;
        }
        if (v80 <= 0x1.0000000000000p-1f) {
          LANES128(v43[5]).n128_u32[1] = v62;
          goto LABEL_103;
        }
        LANES128(v43[5]).n128_u32[0] = v76;
        LANES128(v43[5]).n128_u32[1] = v62;
        LANES128(v43[5]).n128_u32[3] = 0;
        if (v62 == v76) {
          goto LABEL_105;
        }
      }
    LABEL_104:
      v81 = (float)((float)((float)(v8 * 0x1.0aef000000000p+4f) /
                            0x1.f400000000000p+9f) /
                    v7) +
            LANES128(v43[5]).n128_f32[3];
      LANES128(v43[5]).n128_f32[3] = v81;
      if (v81 >= 0x1.0000000000000p+0f) {
        v66 = 0;
        LANES128(v43[5]).n128_u32[0] = v62;
        LANES128(v43[5]).n128_u32[3] = 0;
        goto LABEL_107;
      }
    LABEL_105:
      v66 = 0;
    LABEL_107:
      v65 = 1;
    LABEL_108:
      v82 = (int*)LANES128(v43[3]).n128_u64[1];
      v83 = (int*)LANES128(v43[4]).n128_u64[0];
      while (v82 != v83) {
        v84 = *v82;
        v85 = *(_QWORD*)(a1 + 24);
        v86 = *(_QWORD*)(v85 + 8 * v84);
        if (v86 != 0) {
          v87 = (int*)(*(_QWORD*)(a1 + 120) + 8 * v84);
          v88 = *v87 == -1 ? *(_QWORD*)(a1 + 288) + 120LL * v87[1]
                           : *(_QWORD*)(v46 + 8) + 144LL * *v87 + 24;
          v89 = v82[1];
          v90 = v88 + v48;
          v91 = *(float*)(v90 + 8LL * LANES128(v43[5]).n128_i32[2]);
          *(_BYTE*)(*(_QWORD*)(v86 + 152) + (v89 << 7) + 48) = v66;
          if (v65 != 0) {
            v92 = *(_QWORD*)(v85 + 8 * v84);
            v93 = v90 + 8LL * LANES128(v43[5]).n128_i32[0];
            v94 = *(float*)v93;
            v95 = *(_DWORD*)(v93 + 4);
            v96 = v89 << 7;
            v97 = *(_QWORD*)(v92 + 152) + (v89 << 7);
            v98 = *(_QWORD*)(v97 + 120);
            v99 = v94 / v91;
            v100 = *(float*)(v90 + 8LL * LANES128(v43[5]).n128_i32[1]) / v91;
            if (v99 > 0x1.0000000000000p+0f) {
              v99 = 0x1.0000000000000p+0f;
            }
            if (v100 > 0x1.0000000000000p+0f) {
              v100 = 0x1.0000000000000p+0f;
            }
            if ((signed __int32)*(_DWORD*)(v92 + 296) < v95) {
              v95 = *(_DWORD*)(v92 + 296);
            }
            *(_DWORD*)(v97 + 56) = v95;
            *(_DWORD*)(*(_QWORD*)(v92 + 152) + v96 + 60) =
                *(_DWORD*)(*(_QWORD*)(v92 + 152) + v96 + 56);
            *(_DWORD*)(*(_QWORD*)(v92 + 152) + v96 + 64) = 0;
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v85 + 8 * v84) + 152LL) + v96 +
                       52) = LANES128(v43[6]).n128_u32[0];
            v101 = *(_QWORD*)(*(_QWORD*)(v85 + 8 * v84) + 152LL) + v96;
            *(_BYTE*)(v101 + 72) = v57;
            v102 = v101 + 72;
            if (*(_BYTE*)(v102 + 32) == 1) {
              *(_BYTE*)(v102 + 32) = 0;
            }
            if (*(_BYTE*)(v102 + 16) == 1) {
              *(_BYTE*)(v102 + 16) = 0;
            }
            *(_DWORD*)(v102 + 4) = 1065353216;
            v103 = (unsigned __int64)(float)(v99 * (float)v98);
            v104 = v100 * (float)v98;
            v105 = (unsigned __int64)v104;
            if (v103 <= (unsigned __int64)v104) {
              v106 = (unsigned __int64)v104;
            }
            else {
              v106 = v103;
            }
            if (v106 < v98) {
              *(_QWORD*)(v102 + 24) = v106;
              *(_BYTE*)(v102 + 32) = 1;
            }
            v108 = LANES128(v43[5]).n128_i32[0];
            v107 = LANES128(v43[5]).n128_i32[1];
            if (v108 != v107) {
              if (v103 != v105) {
                v109 = LANES128(v43[5]).n128_f32[3];
                *(_BYTE*)(v102 + 16) = 1;
                if (v108 <= v107) {
                  v109 = 0x1.0000000000000p+0f - v109;
                }
                if (v105 >= v103) {
                  v110 = v103;
                }
                else {
                  v110 = v105;
                }
                *(_QWORD*)(v102 + 8) = v110;
                *(float*)(v102 + 4) = v109;
                v108 = LANES128(v43[5]).n128_i32[0];
                v107 = LANES128(v43[5]).n128_i32[1];
              }
              v111 = *(_DWORD*)(v90 + 8LL * v108 + 4);
              v112 = *(_DWORD*)(v90 + 8LL * v107 + 4);
              if (v111 != v112) {
                v113 = *(_QWORD*)(v85 + 8 * v84);
                v114 = LANES128(v43[5]).n128_f32[3];
                v115 = *(_DWORD*)(v113 + 296);
                if (v115 >= v111) {
                  v115 = v111;
                }
                *(_DWORD*)(*(_QWORD*)(v113 + 152) + v96 + 56) = v115;
                v116 = *(_DWORD*)(v113 + 296);
                if (v116 >= v112) {
                  v116 = v112;
                }
                *(_DWORD*)(*(_QWORD*)(v113 + 152) + v96 + 60) = v116;
                v117 = *(_QWORD*)(v113 + 152) + v96;
                if (*(_DWORD*)(v117 + 56) == *(_DWORD*)(v117 + 60)) {
                  v114 = 0x0.0p+0f;
                }
                *(float*)(v117 + 64) = v114;
              }
            }
          }
        }
        v82 += 2;
      }
      v43 += 7;
    } while (v43 != v44);
  }
  if (f_.v123 != 0) {
    result = f_.v124;
    if (atomic_fetch_add((atomic_ullong* volatile)(f_.v123 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)f_.v123 + 16LL))(f_.v123),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(f_.v123),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = f_.v124;
    }
  }
  else {
    result = f_.v124;
  }
LABEL_151:
  v118 = *(_QWORD*)(a1 + 24);
  v119 = *(_QWORD*)(a1 + 32);
  if (v118 != v119) {
    v120 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL);
    do {
      if (*(_QWORD*)v118 != 0) {
        *(_DWORD*)(*(_QWORD*)v118 + 36LL) = v120;
      }
      v118 += 8;
    } while (v118 != v119);
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    v121 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v121),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v122 = f_.v128;
  if (f_.v128 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v128 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v122);
  }
  return result;
}

__int64 memory_c0df60(__int64 result)
{
  __int64 v1;
  bool v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;

  v1 = *(_QWORD*)(result + 8);
  v2 = false;
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    if ((*(_BYTE*)(v1 + 300) & 0xFD) == 1) {
      v2 = false;
    }
    else {
      do {
        v1 = *(_QWORD*)(v1 + 736);
        v2 = v1 == 0;
      } while (v1 != 0 && *(_BYTE*)(v1 + 289) == 1 &&
               *(_BYTE*)(v1 + 288) == 1 && (*(_BYTE*)(v1 + 300) & 0xFD) != 1);
    }
  }
  *(_BYTE*)(*(_QWORD*)(result + 24) + 32LL) = v2;
  v3 = *(float32x4_t**)(result + 8);
  v4 = *(float32x4_t*)(result + 96);
  v5 = *(float32x4_t*)(result + 112);
  v6 = *(float32x4_t**)(result + 24);
  v7 = v3[27];
  v8 = v3[28];
  v9 = v3[29];
  v10 = v3[30];
  LOBYTE(v3) = LANES128(v6[21]).n128_u8[0];
  v11 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, COERCE_FLOAT(*(_OWORD*)(result + 80))), v8,
                     *(float32x2_t*)(result + 80), 1),
      v9, *(float32x4_t*)(result + 80), 2);
  v6[17] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, COERCE_FLOAT(*(_OWORD*)(result + 64))), v8,
                     *(float32x2_t*)(result + 64), 1),
      v9, *(float32x4_t*)(result + 64), 2);
  v6[18] = v11;
  v6[19] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v4).n128_f32[0]), v8,
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
      v9, v4, 2);
  v6[20] = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v5).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]), 1),
          v9, v5, 2),
      v10);
  if (((unsigned __int8)v3 & 1) == 0) {
    LANES128(v6[21]).n128_u8[0] = 1;
  }
  *(_DWORD*)(*(_QWORD*)(result + 24) + 36LL) =
      *(_DWORD*)(*(_QWORD*)(result + 8) + 284LL);
  return result;
}

void memory_d3c160(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  float* v7;
  __int64 v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  long double v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;

  if ((CharacterTrailModule_d3c310(a1) & 1) == 0) {
    CharacterTrailModule_d3b6a0(a1);
    v2 = 0x0.0p+0f;
    v3 = 0x0.0p+0f;
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 96LL);
    if (v4 != 0) {
      v5 = GameRoutine_d2b5f0(*(_QWORD*)(v4 + 32) + 72LL);
      v3 = 0x0.0p+0f;
      if ((v5 & 0x100000000LL) != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 72LL) +
                        104LL * (int)v5);
        if (v6 != 0) {
          v7 = *(float**)(v6 + 16);
          if (v7 != nullptr) {
            v3 = *v7 * 0x1.1111120000000p-6f;
          }
        }
      }
    }
    *(float*)(a1 + 124) = v3;
    *(_BYTE*)(a1 + 128) = 1;
    if (*(_BYTE*)(a1 + 176) != 0) {
      v8 = *(_QWORD*)(a1 + 32);
      v2 = 0x1.0000000000000p+0f;
      v9 = *(float*)(v8 + 8) / 0x1.e000000000000p+5f;
      if (v3 > v9) {
        v10 = *(float*)(v8 + 32);
        v2 = 0x0.0p+0f;
        if (v10 > 0x0.0p+0f) {
          v2 = 0x1.0000000000000p+0f - (float)((float)(v3 - v9) / v10);
        }
      }
    }
    v11 = *(_QWORD*)(a1 + 224);
    *(float*)(a1 + 120) = v2;
    if (v11 != 0) {
      v20 = *(float32x4_t*)(a1 + 240);
      v12 = powf(v2, 0x1.8000000000000p+0f);
      v13 = *(long double*)&v20;
      HIDWORD(v13) = vmuls_lane_f32(v12, v20, 3);
      (*(void (**)(_QWORD, const char*, __int64, long double))(
          **(_QWORD**)(a1 + 224) + 56LL))(*(_QWORD*)(a1 + 224),
                                          "BaseColorMultiplier0", 20, v13);
      v14 = *(float*)(a1 + 256);
      v15 = 0x1.0000000000000p+0f;
      if (v14 <= 0x1.0000000000000p+0f) {
        v15 = *(float*)(a1 + 256);
      }
      v16 = v14 + -0x1.0000000000000p+0f;
      if (v16 >= 0x0.0p+0f) {
        v17 = v16;
      }
      else {
        v17 = 0x0.0p+0f;
      }
      v18 = *(float*)(a1 + 120);
      v19 =
          (float)(v18 * v15) + (float)(powf(v18, 0x1.0000000000000p+2f) * v17);
      (*(void (**)(_QWORD, const char*, __int64, float))(
          **(_QWORD**)(a1 + 224) + 16LL))(*(_QWORD*)(a1 + 224),
                                          "EmissionIntensity", 17, v19);
    }
  }
}

__attribute__((no_builtin("memset", "memcpy", "memmove"))) __int64

memory_e59440(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  _DWORD* v10;
  char v11;
  __int64 v12;
  __int64* v13;
  unsigned __int8* v14;
  __int64 v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  char v32;
  __int64 v33;
  unsigned __int8* v34;
  __int64 v35;
  int v36;
  unsigned __int8* v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  __int64 v44;
  unsigned __int64 v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int8* v56;
  __int64 v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  unsigned __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  int v73;
  unsigned __int8* v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int* v80;
  __int64 v81;
  unsigned __int64 v82;
  int v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  __int64* v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  _QWORD* v98;
  long double v99;
  __int64 v100;
  _QWORD* v101;
  __int64* v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  __int64 (**v106)();
  __int64 v107;
  __int64 result;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  char* v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  struct {
    char gap0_[16];
    __int64 (**v128)();
    __int64 v129;
    __int64 (**v130)();
    __int64 v131;
    unsigned __int8* v132;
    char gap56_[8];
    __int64 (***v133)();
  } f_;

  *(_BYTE*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_WORD*)(a1 + 148) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 168) = 14;
  strcpy((char*)(a1 + 169), "no name");
  *(_WORD*)(a1 + 264) = 1;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0x3F00000042200000LL;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0x40F0000000000000LL;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 1064514355;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)a1 = a2;
  *(_BYTE*)(a1 + 266) = 1;
  v4 = fw_memory_HeapManager_Allocate_alt1(*v3, 208, 16, 0);
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)v4 = GameData_1fe6e10;
  v5 = GameData_212f7d8[0];
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 32) = v5 + 2;
  v6 = v4 + 32;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0x3F80000000000000LL;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v124 = v4;
    v125 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v4 = v124;
    if (v125 != 0) {
      v126 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v126;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v4 = v124;
    }
  }
  v7 = GameData_21a6120;
  v8 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_DWORD*)(v4 + 176) = 0;
  *(_QWORD*)(a1 + 40) = v6;
  *(_QWORD*)(a1 + 48) = v4;
  *(_OWORD*)(v4 + 112) = v7;
  *(_QWORD*)(v4 + 128) = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    v4 = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_DWORD*)(*(_QWORD*)a1 + 8LL);
  v10 = X8CALL_X0(void*,
                  LegionGambitCamera_e59fd0((void*)(&f_.v130), v4, v9, 1, 0));
  v11 = (char)f_.v130;
  v12 = (__int64)f_.v132;
  v13 = GameData_212ee68[0];
  if (((unsigned __int8)f_.v130 & 1) != 0) {
    v14 = f_.v132;
  }
  else {
    v14 = (unsigned __int8*)&f_.v130 + 1;
  }
  if (v14 == nullptr) {
    goto LABEL_23;
  }
  v15 = *GameData_212ee68[0];
  v18 = *v14;
  v17 = v14 + 1;
  v16 = v18;
  if (v18 != 0) {
    v19 = 0;
    do {
      v19 = v16 - v19 + 32 * v19;
      v20 = *v17++;
      v16 = v20;
    } while (v20 != 0);
  }
  else {
    v19 = 0;
  }
  v21 = *(_QWORD*)(v15 + 8);
  v22 = *(_QWORD*)(v15 + 16) - v21;
  if (v22 == 0) {
    goto LABEL_23;
  }
  v23 = (int*)(v21 + 24);
  v24 = 0;
  v25 = 0x4EC4EC4EC4EC4EC5LL * (v22 >> 3);
  while (1) {
    v26 = *v23;
    v23 += 26;
    if (v19 == v26) {
      break;
    }
    if (v25 == ++v24) {
      goto LABEL_23;
    }
  }
  if (v24 < 1) {
  LABEL_23:
    v28 = nullptr;
    v29 = 0;
    if (((unsigned __int8)f_.v130 & 1) == 0) {
      goto LABEL_28;
    }
  LABEL_24:
    if (v12 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v30, v12);
    }
    goto LABEL_28;
  }
  if (v25 <= (unsigned int)v24) {
    goto LABEL_167;
  }
  v27 = (__int64)f_.v132;
  v10 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(*v3, 4, 16, 0);
  *v10 = 0;
  v28 = (char*)(v10 + 1);
  v29 = (__int64)v10;
  v12 = v27;
  if ((v11 & 1) != 0) {
    goto LABEL_24;
  }
LABEL_28:
  v31 = X8CALL_X0(void*,
                  LegionGambitCamera_e59fd0((void*)(&f_.v130), v10, v9, 1, 1));
  v32 = (char)f_.v130;
  v33 = (__int64)f_.v132;
  if (((unsigned __int8)f_.v130 & 1) != 0) {
    v34 = f_.v132;
  }
  else {
    v34 = (unsigned __int8*)&f_.v130 + 1;
  }
  if (v34 == nullptr) {
    goto LABEL_53;
  }
  v35 = *v13;
  v38 = *v34;
  v37 = v34 + 1;
  v36 = v38;
  if (v38 != 0) {
    v39 = 0;
    do {
      v39 = v36 - v39 + 32 * v39;
      v40 = *v37++;
      v36 = v40;
    } while (v40 != 0);
  }
  else {
    v39 = 0;
  }
  v41 = *(_QWORD*)(v35 + 8);
  v42 = *(_QWORD*)(v35 + 16) - v41;
  if (v42 == 0) {
    goto LABEL_53;
  }
  v43 = (int*)(v41 + 24);
  v44 = 0;
  v45 = 0x4EC4EC4EC4EC4EC5LL * (v42 >> 3);
  while (1) {
    v46 = *v43;
    v43 += 26;
    if (v39 == v46) {
      break;
    }
    if (v45 == ++v44) {
      goto LABEL_53;
    }
  }
  if (v44 < 1) {
  LABEL_53:
    v52 = v28;
    v53 = v29;
    if (((unsigned __int8)f_.v130 & 1) == 0) {
      goto LABEL_58;
    }
  LABEL_54:
    if (v33 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v33);
    }
    goto LABEL_58;
  }
  if (v45 <= (unsigned int)v44) {
    goto LABEL_167;
  }
  v47 = (unsigned __int64)&v28[-v29];
  v48 = (__int64)&v28[-v29] >> 2;
  v49 = v48 + 1;
  if ((unsigned __int64)(v48 + 1) >> 62 != 0) {
    goto LABEL_168;
  }
  v127 = (__int64)f_.v132;
  if (v47 >> 1 > v49) {
    v49 = v47 >> 1;
  }
  if (v47 >= 0x7FFFFFFFFFFFFFFCLL) {
    v50 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v50 = v49;
  }
  if (v50 != 0) {
    if (v50 >> 62 != 0) {
      goto LABEL_169;
    }
    v51 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v50, 16, 0);
  }
  else {
    v51 = 0;
  }
  v52 = (char*)(v51 + 4 * v50);
  v118 = (unsigned __int64)&v28[-v29];
  v53 = v51 + v47 - 4 * v48;
  *(_DWORD*)(v51 + v47) = 1;
  v28 = (char*)(v51 + v47 + 4);
  v31 = (_QWORD*)memcpy(v53, v29, v118);
  if (v29 != 0) {
    v119 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v119 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v119,
                                  v29);
  }
  v33 = v127;
  if ((v32 & 1) != 0) {
    goto LABEL_54;
  }
LABEL_58:
  v55 = X8CALL_X0(void*,
                  LegionGambitCamera_e59fd0((void*)(&f_.v130), v31, v9, 1, 2));
  if (((unsigned __int8)f_.v130 & 1) != 0) {
    v56 = f_.v132;
  }
  else {
    v56 = (unsigned __int8*)&f_.v130 + 1;
  }
  if (v56 == nullptr) {
    goto LABEL_76;
  }
  v57 = *v13;
  v60 = *v56;
  v59 = v56 + 1;
  v58 = v60;
  if (v60 != 0) {
    v61 = 0;
    do {
      v61 = v58 - v61 + 32 * v61;
      v62 = *v59++;
      v58 = v62;
    } while (v62 != 0);
  }
  else {
    v61 = 0;
  }
  v63 = *(_QWORD*)(v57 + 8);
  v64 = *(_QWORD*)(v57 + 16) - v63;
  if (v64 == 0) {
    goto LABEL_76;
  }
  v65 = (int*)(v63 + 24);
  v66 = 0;
  v67 = 0x4EC4EC4EC4EC4EC5LL * (v64 >> 3);
  while (1) {
    v68 = *v65;
    v65 += 26;
    if (v61 == v68) {
      break;
    }
    if (v67 == ++v66) {
      goto LABEL_76;
    }
  }
  if (v66 < 1) {
    goto LABEL_76;
  }
  if (v67 <= (unsigned int)v66) {
    goto LABEL_167;
  }
  if (v28 < v52) {
    *(_DWORD*)v28 = 2;
    v28 += 4;
  LABEL_76:
    v69 = v53;
    goto LABEL_77;
  }
  v109 = &v28[-v53];
  v110 = (__int64)&v28[-v53] >> 2;
  v111 = v110 + 1;
  if ((unsigned __int64)(v110 + 1) >> 62 != 0) {
    goto LABEL_168;
  }
  if ((__int64)&v52[-v53] >> 1 > v111) {
    v111 = (__int64)&v52[-v53] >> 1;
  }
  if ((unsigned __int64)&v52[-v53] >= 0x7FFFFFFFFFFFFFFCLL) {
    v112 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v112 = v111;
  }
  if (v112 != 0) {
    if (v112 >> 62 != 0) {
      goto LABEL_169;
    }
    v113 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v112, 16, 0);
  }
  else {
    v113 = 0;
  }
  v52 = (char*)(v113 + 4 * v112);
  v120 = (unsigned __int64)&v28[-v53];
  v69 = (__int64)&v109[v113 + -4 * v110];
  *(_DWORD*)&v109[v113] = 2;
  v28 = &v109[v113 + 4];
  v55 = (_QWORD*)memcpy(v69, v53, v120);
  if (v53 != 0) {
    v121 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v121 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v121,
                                  v53);
  }
LABEL_77:
  if (((unsigned __int8)f_.v130 & 1) != 0 && f_.v132 != nullptr) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v70,
                                  (__int64)f_.v132);
  }
  LegionGambitCamera_e59fd0((void*)(&f_.v130), v55, v9, 1, 3);
  if (((unsigned __int8)f_.v130 & 1) != 0) {
    v71 = f_.v132;
  }
  else {
    v71 = (unsigned __int8*)&f_.v130 + 1;
  }
  if (v71 == nullptr) {
    goto LABEL_100;
  }
  v72 = *v13;
  v75 = *v71;
  v74 = v71 + 1;
  v73 = v75;
  if (v75 != 0) {
    v76 = 0;
    do {
      v76 = v73 - v76 + 32 * v76;
      v77 = *v74++;
      v73 = v77;
    } while (v77 != 0);
  }
  else {
    v76 = 0;
  }
  v78 = *(_QWORD*)(v72 + 8);
  v79 = *(_QWORD*)(v72 + 16) - v78;
  if (v79 == 0) {
    goto LABEL_100;
  }
  v80 = (int*)(v78 + 24);
  v81 = 0;
  v82 = 0x4EC4EC4EC4EC4EC5LL * (v79 >> 3);
  while (1) {
    v83 = *v80;
    v80 += 26;
    if (v76 == v83) {
      break;
    }
    if (v82 == ++v81) {
      goto LABEL_100;
    }
  }
  if (v81 < 1) {
    goto LABEL_100;
  }
  if (v82 <= (unsigned int)v81) {
  LABEL_167:
    GameRoutine_d38e30();
  }
  if (v28 < v52) {
    *(_DWORD*)v28 = 3;
    v28 += 4;
  LABEL_100:
    v84 = v69;
    v85 = (__int64*)fw_memory_g_heap_manager_ptr;
    goto LABEL_101;
  }
  v114 = &v28[-v69];
  v115 = (__int64)&v28[-v69] >> 2;
  v116 = v115 + 1;
  if ((unsigned __int64)(v115 + 1) >> 62 != 0) {
  LABEL_168:
    GameRoutine_e5aa20();
  }
  if ((__int64)&v52[-v69] >> 1 > v116) {
    v116 = (__int64)&v52[-v69] >> 1;
  }
  if ((unsigned __int64)&v52[-v69] >= 0x7FFFFFFFFFFFFFFCLL) {
    v116 = 0x3FFFFFFFFFFFFFFFLL;
  }
  if (v116 != 0) {
    if (v116 >> 62 == 0) {
      v85 = (__int64*)fw_memory_g_heap_manager_ptr;
      v117 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v116, 16, 0);
      goto LABEL_161;
    }
  LABEL_169:
    GameRoutine_60a210();
  }
  v117 = 0;
  v85 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_161:
  v122 = (unsigned __int64)&v28[-v69];
  v84 = (__int64)&v114[v117 + -4 * v115];
  *(_DWORD*)&v114[v117] = 3;
  v28 = &v114[v117 + 4];
  memcpy(v84, v69, v122);
  if (v69 != 0) {
    v123 = 128;
    if (*(_QWORD*)(*v85 + 200) == 0) {
      v123 = 56;
    }
    nn_mem_StandardAllocator_Free(*v85 + v123, v69);
  }
LABEL_101:
  if (((unsigned __int8)f_.v130 & 1) != 0 && f_.v132 != nullptr) {
    v86 = 128;
    if (*(_QWORD*)(*v85 + 200) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*v85 + v86, (__int64)f_.v132);
  }
  if (v28 == (char*)v84) {
    *(_DWORD*)(a1 + 144) = 0;
    if (v28 == nullptr) {
      goto LABEL_112;
    }
  }
  else {
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v87 = game_map_MapRandom_instance__ptr[0];
    v88 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v89 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v90 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v87 + 1) = v88;
    v91 = (v90 >> 8) ^ (v89 >> 19) ^ v90 ^ v89;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v87) = v89;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v87 + 4) = v91;
    v92 = v91 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    *(_DWORD*)(a1 + 144) =
        *(_DWORD*)(v84 +
                   4LL * (unsigned int)(v92 %
                                        (int)((unsigned __int64)&v28[-v84] >>
                                              2)));
  }
  v93 = 128;
  if (*(_QWORD*)(*v85 + 200) == 0) {
    v93 = 56;
  }
  nn_mem_StandardAllocator_Free(*v85 + v93, v84);
LABEL_112:
  v94 = *(_QWORD*)(*GameData_212d448[0] + 128);
  if (v94 != 0) {
    v95 = *(_QWORD*)(v94 + 72);
    if (v95 != 0) {
      v96 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v85, 240, 16, 0);
      v97 = v96 + 4;
      v98 = v96;
      v96[1] = 0;
      v96[2] = 0;
      *v96 = GameData_1fe6e60;
      *(float32x4_t*)&v99 = game_10be1a0((__int64)(v96 + 4), v95);
      v100 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 8) = v97;
      *(_QWORD*)(a1 + 16) = v98;
      if (v100 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v100 + 16LL))(v100, v99);
        std___1___shared_weak_count___release_weak(v100);
      }
    }
  }
  v101 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v85, 80, 16, 0);
  v101[2] = 0;
  v102 = GameData_212ee40[0];
  v103 = *(_QWORD*)(a1 + 32);
  v101[8] = 0;
  *v101 = v102 + 2;
  v101[1] = 0;
  *(_QWORD*)(a1 + 24) = v101 + 4;
  *(_QWORD*)(a1 + 32) = v101;
  if (v103 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
    std___1___shared_weak_count___release_weak(v103);
  }
  v104 = *(_QWORD**)(a1 + 24);
  f_.v130 = GameData_1fe6eb0;
  f_.v131 = a1;
  f_.v133 = &f_.v130;
  GameRoutine_654050_alt1(&f_.v130, v104);
  if (f_.v133 == &f_.v130) {
    v105 = 4;
  }
  else {
    if (f_.v133 == nullptr) {
      goto LABEL_125;
    }
    v105 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v133)[v105])((__int64)f_.v133);
LABEL_125:
  v106 = *(__int64 (***)(void))(a1 + 24);
  v107 = *(_QWORD*)(a1 + 32);
  f_.v128 = v106;
  f_.v129 = v107;
  if (v107 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16), 1u,
                              memory_order_relaxed);
    f_.v130 = v106;
    f_.v131 = v107;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66ae00((__int64)&f_.v130);
    std___1___shared_weak_count___release_weak(v107);
  }
  else {
    f_.v130 = v106;
    f_.v131 = 0;
    GameRoutine_66ae00((__int64)&f_.v130);
  }
  GameRoutine_66b000(&GameData_21c9668, &f_.v128);
  result = f_.v129;
  if (f_.v129 != 0) {
    return std___1___shared_weak_count___release_weak(f_.v129);
  }
  return result;
}

void memory_e82ea0(__int64 a1)
{
  bool v1;
  __int64 v2;
  __int64 v3;
  int v5;
  int v6;
  unsigned __int64 v7;
  __int128 v8;
  __int64* v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  __int64* v35;
  float v36;
  __int64 v37;
  __int64 v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float32x4_t v51;
  float v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float v66;
  float v67;
  float32x4_t v68;
  int8x16_t v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float32x4_t v76;
  float32x4_t v77;
  float v78;
  float32x4_t v79;
  int8x16_t v80;
  float v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  float v91;
  float32x4_t v92;
  unsigned __int64 v93;
  float32x4_t v94;
  unsigned __int64 v95;
  __int64 v96;
  float32x4_t v97;
  unsigned __int64 v98;
  float32x4_t v99;
  __int64 v100;
  __int64 v101;
  _QWORD* v102;
  float v103;
  float v104;
  float v105;
  float v106;
  unsigned __int64 v107;
  float32x4_t v108;
  int8x16_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float v112;
  int8x16_t v113;
  float32x4_t v114;
  float v115;
  float32x4_t v116;
  float32x4_t v117;
  int8x16_t v118;
  float v119;
  int8x16_t v120;
  float32x4_t v121;
  int8x16_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  int8x16_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned __int64* v141;
  unsigned __int64* i;
  float v143;
  __int64 v144;
  float v145;
  float v146;
  int32x4_t v147;
  int8x16_t v148;
  float v149;
  float32x4_t v150;
  float32x4_t v151;
  float v152;
  int8x16_t v153;
  float32x4_t v154;
  float32x4_t v155;
  int8x16_t v156;
  float v157;
  int8x16_t v158;
  float32x4_t v159;
  int8x16_t v160;
  float32x4_t v161;
  float32x4_t v162;
  int8x16_t v163;
  int v164;
  __int64 v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  int32x4_t v171;
  int32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float v181;
  float32x4_t v182;
  float v183;
  float v184;
  float v185;
  float32x4_t v186;
  struct {
    int8x16_t v187;
    __int64 v188;
    __int64 v189;
    float v190;
    float v191;
  } v187_;
  __int64 v192[2];
  float32x4_t v193;
  __int64 v194[2];
  float32x4_t v195;
  _QWORD v196[2];

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    return;
  }
  if (*(_QWORD*)(v2 + 8) == -1) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    return;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      goto LABEL_17;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
    }
    else {
      v8 = *(_OWORD*)(v7 + 208);
    }
    if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                        v7 + 160, *((float*)&v8 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_17:
      *(_BYTE*)(a1 + 76) = 1;
    }
  }
  v9 = GameData_212ea58;
  v10 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v11 = GameRoutine_1a0a550(*(float*)(*GameData_212ea58 + 560),
                            0x1.8000000000000p+1f);
  v12 = 0x1.0000000000000p+0f;
  v181 = v11;
  v13 = (float)(0x1.0000000000000p+0f - *(float*)(*v9 + 564)) *
        0x1.921fb60000000p+1f;
  v14 = v13 +
        (float)(roundf(v13 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (!(v14 > 0x1.921fb60000000p+0f)) {
    if (!(v14 < -0x1.921fb60000000p+0f)) {
      goto LABEL_23;
    }
    v15 = -0x1.921fb60000000p+1f;
  }
  else {
    v15 = 0x1.921fb60000000p+1f;
  }
  v12 = -0x1.0000000000000p+0f;
  v14 = v15 - v14;
LABEL_23:
  v16 = v14 * v14;
  v17 = v10 * 0x1.0aef000000000p+4f;
  v18 = *((float*)GameData_212c188 + 1);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v20 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v21 = -*(float*)GameData_212c188;
  v22 = -v19;
  v23 =
      -(float)(v19 -
               (float)((float)(v18 - (float)(*(float*)GameData_212c188 * v16)) *
                       v16));
  v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v177 = -v24;
  v25 = v12 *
        (float)((float)((float)-(
                            float)(v24 -
                                   (float)((float)(v20 + (float)(v23 * v16)) *
                                           v16)) *
                        v16) +
                0x1.0000000000000p+0f);
  v26 = GameRoutine_1a0a550(fabsf(v25), 0x1.0000000000000p-1f);
  v27 = -0x1.0000000000000p+0f;
  v183 = v26;
  if (v25 >= 0x0.0p+0f) {
    v28 = -0x1.0000000000000p+0f;
  }
  else {
    v28 = 0x1.0000000000000p+0f;
  }
  v29 = (float)(PSEUDO_UNFUSED(*(float*)(*v9 + 568) * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(*(float*)(*v9 + 568) * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (!(v29 > 0x1.921fb60000000p+0f)) {
    if (!(v29 < -0x1.921fb60000000p+0f)) {
      v27 = 0x1.0000000000000p+0f;
    }
    else {
      v29 = -0x1.921fb60000000p+1f - v29;
    }
  }
  else {
    v29 = 0x1.921fb60000000p+1f - v29;
  }
  v30 = v17 / 0x1.f400000000000p+9f;
  v31 =
      v27 *
      (float)((float)((float)(v177 +
                              (float)((float)(v20 +
                                              (float)((float)(v22 +
                                                              (float)((float)(v18 +
                                                                              (float)(v21 *
                                                                                      (float)(v29 *
                                                                                              v29))) *
                                                                      (float)(v29 *
                                                                              v29))) *
                                                      (float)(v29 * v29))) *
                                      (float)(v29 * v29))) *
                      (float)(v29 * v29)) +
              0x1.0000000000000p+0f);
  v32 = GameRoutine_1a0a550(fabsf(v31), 0x1.0000000000000p-1f);
  v33 = *v9;
  v34 = v32;
  v35 = *(__int64**)(*v9 + 432);
  if (v31 >= 0x0.0p+0f) {
    v36 = -0x1.0000000000000p+0f;
  }
  else {
    v36 = 0x1.0000000000000p+0f;
  }
  if (*(__int64**)(*v9 + 440) == v35) {
    goto LABEL_46;
  }
  v38 = *v35;
  v37 = v35[1];
  if (v37 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v38 != 0) {
    v1 = *(float*)(v33 + 456) < *(float*)(v38 + 28);
    if (v37 == 0) {
      goto LABEL_43;
    }
  }
  else if (v37 == 0) {
    goto LABEL_43;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
LABEL_43:
  if (v38 == 0) {
  LABEL_46:
    v39 = (float*)(a1 + 72);
    v40 = *(float*)(a1 + 72);
    goto LABEL_47;
  }
  v39 = (float*)(a1 + 72);
  v40 = *(float*)(a1 + 72);
  if (!v1) {
  LABEL_47:
    v41 = fabsf(v30 / 0x1.8000000000000p+2f);
    if (v40 <= 0x1.0000000000000p+0f) {
      if (v40 >= 0x1.0000000000000p+0f) {
        goto LABEL_53;
      }
      v40 = v41 + v40;
      if (v40 <= 0x1.0000000000000p+0f) {
        goto LABEL_53;
      }
    }
    else {
      v40 = v40 - v41;
      if (v40 >= 0x1.0000000000000p+0f) {
        goto LABEL_53;
      }
    }
    v40 = 0x1.0000000000000p+0f;
  LABEL_53:
    *v39 = v40;
  }
  v42 = GameRoutine_1a0a550(v40, 0x1.cccccc0000000p-1f);
  v43 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 48));
  v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16LL) + 440LL);
  if (v44 != 0 &&
      (unsigned __int64)(v45 = *(unsigned __int8*)(v44 + 16)) <= 3) {
    v46 = GameData_1b018e8[v45];
  }
  else {
    v46 = 392;
  }
  v47 = *(_DWORD*)(*v9 + v46 + 672);
  if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v48 = v43;
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak(v48);
  }
  v49 = *(_QWORD*)(a1 + 48);
  v194[0] = *(_QWORD*)(a1 + 40);
  v194[1] = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                              memory_order_relaxed);
    game_cmdbtl_e83e40((void*)(&v195), a1, v194);
    std___1___shared_weak_count___release_weak(v49);
  }
  else {
    game_cmdbtl_e83e40((void*)(&v195), a1, v194);
  }
  v50 = *(_QWORD*)(a1 + 64);
  v192[0] = *(_QWORD*)(a1 + 56);
  v192[1] = v50;
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 16), 1u,
                              memory_order_relaxed);
    game_cmdbtl_e83e40((void*)(&v193), a1, v192);
    std___1___shared_weak_count___release_weak(v50);
  }
  else {
    game_cmdbtl_e83e40((void*)(&v193), a1, v192);
  }
  v51 = v195;
  v52 = (float)((float)(v183 * 0x1.0000000000000p-1f) * v28) +
        0x1.0000000000000p-1f;
  v53 = vaddq_f32(v193, COERCE_AS(float32x4_t, GameData_1a830f0));
  v54 = vaddq_f32(vaddq_f32(v195, COERCE_AS(float32x4_t, GameData_1a830f0)),
                  COERCE_AS(float32x4_t, GameData_1a82d30));
  if (*(_BYTE*)(a1 + 76) == 1) {
    *(_QWORD*)(a1 + 96) = LANES128(v54).n128_u64[0];
    *(_QWORD*)(a1 + 112) = LANES128(v53).n128_u64[0];
    v55 = *(float32x4_t*)(a1 + 96);
    v56 = *(float32x4_t*)(a1 + 112);
    LANES128(v55).n128_u64[1] = LANES128(v54).n128_u32[2];
    LANES128(v56).n128_u32[2] = LANES128(v53).n128_u32[2];
    v57 = v56;
    v178 = v55;
    *(float32x4_t*)(a1 + 96) = v55;
    goto LABEL_107;
  }
  v59 = *(float32x4_t*)(a1 + 96);
  v58 = *(float32x4_t*)(a1 + 112);
  v60 = vsubq_f32(v54, v59);
  v61 = vmulq_f32(v60, v60);
  LANES128(v61).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
          .n64_u64[0];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
          .n64_u64[0];
  v63 = vsubq_f32(v53, v58);
  LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
  v65 = vmulq_f32(v63, v63);
  LANES128(v65).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u64[0];
  v64 = vrsqrteq_f32(v62);
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u64[0];
  v66 = v30 *
        (float)((float)(LANES64_OF(vsqrt_f32(COERCE_AS(
                                       float32x2_t, LANES128(v62).n128_u64[0])))
                            .n64_f32[0] *
                        0x1.8000000000000p+2f) +
                0x1.0000000000000p+0f);
  LODWORD(v67) =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u32[0];
  v68 = vmulq_f32(v64, vrsqrtsq_f32(v64, vmulq_f32(v62, v64)));
  v69 = vbicq_s8(
      vmulq_f32(v60, vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v62, v68)))),
      vceqzq_f32(v62));
  v70 = fabsf(v66 * fabsf(LANES128(v69).n128_f32[0]));
  LODWORD(v71) = HIDWORD(*(_QWORD*)(a1 + 96));
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v59, v54))).n64_u8[0] & 1) == 0) {
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v54, v59))).n64_u8[0] & 1) == 0) {
      LODWORD(v72) = *(_OWORD*)(a1 + 96);
      goto LABEL_75;
    }
    v72 = LANES128(v59).n128_f32[0] + v70;
    if (v72 <= LANES128(v54).n128_f32[0]) {
      goto LABEL_75;
    }
  LABEL_73:
    v72 = LANES128(v54).n128_f32[0];
    goto LABEL_75;
  }
  v72 = LANES128(v59).n128_f32[0] - v70;
  if (v72 < LANES128(v54).n128_f32[0]) {
    goto LABEL_73;
  }
LABEL_75:
  LANES128(v59).n128_u32[0] = *(_QWORD*)(a1 + 104);
  v73 = fabsf(v66 * fabsf(LANES128(v69).n128_f32[1]));
  if (v71 > LANES128(v54).n128_f32[1]) {
    v71 = v71 - v73;
    if (v71 >= LANES128(v54).n128_f32[1]) {
      goto LABEL_81;
    }
  LABEL_80:
    v71 = LANES128(v54).n128_f32[1];
    goto LABEL_81;
  }
  if (v71 < LANES128(v54).n128_f32[1]) {
    v71 = v71 + v73;
    if (v71 > LANES128(v54).n128_f32[1]) {
      goto LABEL_80;
    }
  }
LABEL_81:
  v74 = fabsf(v66 * fabsf(LANES128(v69).n128_f32[2]));
  if (LANES128(v59).n128_f32[2] > LANES128(v54).n128_f32[2]) {
    LANES128(v59).n128_f32[0] = LANES128(v59).n128_f32[2] - v74;
    if ((float)(LANES128(v59).n128_f32[2] - v74) >= LANES128(v54).n128_f32[2]) {
      goto LABEL_87;
    }
  LABEL_86:
    LANES128(v59).n128_u32[0] = LANES128(v54).n128_u32[2];
    goto LABEL_87;
  }
  if (LANES128(v59).n128_f32[2] < LANES128(v54).n128_f32[2]) {
    LANES128(v59).n128_f32[0] = LANES128(v59).n128_f32[2] + v74;
    if ((float)(LANES128(v59).n128_f32[2] + v74) > LANES128(v54).n128_f32[2]) {
      goto LABEL_86;
    }
  }
LABEL_87:
  *(float*)(a1 + 96) = v72;
  *(float*)(a1 + 100) = v71;
  LANES128(v65).n128_u64[1] = LANES128(v65).n128_u64[0];
  v75 = LANES128(v58).n128_f32[1];
  v76 = *(float32x4_t*)(a1 + 96);
  LANES128(v76).n128_u64[1] = LANES128(v59).n128_u32[0];
  v178 = v76;
  *(float32x4_t*)(a1 + 96) = v76;
  v77 = vrsqrteq_f32(v65);
  v78 = v30 *
        (float)((float)(v67 * 0x1.8000000000000p+2f) + 0x1.0000000000000p+0f);
  v79 = vmulq_f32(v77, vrsqrtsq_f32(v77, vmulq_f32(v65, v77)));
  v80 = vbicq_s8(
      vmulq_f32(v63, vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v65, v79)))),
      vceqzq_f32(v65));
  v81 = fabsf(v78 * fabsf(LANES128(v80).n128_f32[0]));
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v58, v53))).n64_u8[0] & 1) == 0) {
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v53, v58))).n64_u8[0] & 1) == 0) {
      v82 = LANES128(v58).n128_f32[0];
      goto LABEL_94;
    }
    v82 = LANES128(v58).n128_f32[0] + v81;
    if (v82 <= LANES128(v53).n128_f32[0]) {
      goto LABEL_94;
    }
  LABEL_92:
    v82 = LANES128(v53).n128_f32[0];
    goto LABEL_94;
  }
  v82 = LANES128(v58).n128_f32[0] - v81;
  if (v82 < LANES128(v53).n128_f32[0]) {
    goto LABEL_92;
  }
LABEL_94:
  LANES128(v58).n128_u32[0] = LANES128(v58).n128_u32[2];
  v83 = fabsf(v78 * fabsf(LANES128(v80).n128_f32[1]));
  if (LANES128(v58).n128_f32[1] > LANES128(v53).n128_f32[1]) {
    v75 = LANES128(v58).n128_f32[1] - v83;
    if ((float)(LANES128(v58).n128_f32[1] - v83) >= LANES128(v53).n128_f32[1]) {
      goto LABEL_100;
    }
  LABEL_99:
    v75 = LANES128(v53).n128_f32[1];
    goto LABEL_100;
  }
  if (LANES128(v58).n128_f32[1] < LANES128(v53).n128_f32[1]) {
    v75 = LANES128(v58).n128_f32[1] + v83;
    if ((float)(LANES128(v58).n128_f32[1] + v83) > LANES128(v53).n128_f32[1]) {
      goto LABEL_99;
    }
  }
LABEL_100:
  v84 = fabsf(v78 * fabsf(LANES128(v80).n128_f32[2]));
  if (LANES128(v58).n128_f32[2] <= LANES128(v53).n128_f32[2]) {
    if (LANES128(v58).n128_f32[2] >= LANES128(v53).n128_f32[2]) {
      goto LABEL_106;
    }
    LANES128(v58).n128_f32[0] = LANES128(v58).n128_f32[2] + v84;
    if ((float)(LANES128(v58).n128_f32[2] + v84) <= LANES128(v53).n128_f32[2]) {
      goto LABEL_106;
    }
  }
  else {
    LANES128(v58).n128_f32[0] = LANES128(v58).n128_f32[2] - v84;
    if ((float)(LANES128(v58).n128_f32[2] - v84) >= LANES128(v53).n128_f32[2]) {
      goto LABEL_106;
    }
  }
  LANES128(v58).n128_u32[0] = LANES128(v53).n128_u32[2];
LABEL_106:
  *(float*)(a1 + 112) = v82;
  *(float*)(a1 + 116) = v75;
  v57 = *(float32x4_t*)(a1 + 112);
  LANES128(v57).n128_u32[2] = LANES128(v58).n128_u32[0];
LABEL_107:
  LANES128(v57).n128_u32[3] = 0;
  v85 = *(_QWORD*)(a1 + 48);
  v174 = v57;
  *(float32x4_t*)(a1 + 112) = v57;
  v184 = 0x1.0000000000000p+0f - v52;
  if (v85 != 0) {
    v167 = v51;
    v86 = *(_QWORD*)(a1 + 40);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 16), 1u,
                              memory_order_relaxed);
    v87 = std___1___shared_weak_count_lock(v85);
    if (v87 != 0 && v86 != 0) {
      v196[0] = v86;
      v196[1] = v85;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 16), 1u,
                                memory_order_relaxed);
      CmdBtlCameraCutBase_e82a10((void*)(&v187_.v187), a1, v196,
                                 *(unsigned __int8*)(a1 + 128));
      std___1___shared_weak_count___release_weak(v85);
      v88 = *(_QWORD*)(v86 + 208);
      if (v88 != 0) {
        v51 = v167;
        v89 = *(_QWORD*)(v88 + 392);
        v90 = *(_QWORD*)(v88 + 400);
        if (v90 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v89 != 0) {
          v91 = *(float*)(*(_QWORD*)(v89 + 11792) + 32LL) *
                (float)(*(float*)(v89 + 32) *
                        (float)(*(float*)(v89 + 40) +
                                (float)((float)(0x1.0000000000000p+0f -
                                                *(float*)(v89 + 40)) *
                                        *(float*)(v88 + 336))));
        }
        else {
          v91 = 0x1.cccccc0000000p+0f;
        }
        if (v90 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_126;
        }
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
        std___1___shared_weak_count___release_weak(v90);
      }
      else {
        v91 = 0x1.cccccc0000000p+0f;
      }
      v51 = v167;
    LABEL_126:
      LODWORD(v93) = 0;
      *((float*)&v93 + 1) = v91 + -0x1.0000000000000p-1f;
      v92 = vaddq_f32(v187_.v187, COERCE_AS(float32x4_t, v93));
    LABEL_127:
      if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v166 = v92;
        v168 = v51;
        (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87);
        std___1___shared_weak_count___release_weak(v87);
        v92 = v166;
        v51 = v168;
      }
      goto LABEL_129;
    }
    v51 = v167;
  }
  else {
    v87 = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v173 = v51;
    v164 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v51 = v173;
    if (v164 != 0) {
      v165 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v165;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v51 = v173;
    }
  }
  v92 = COERCE_AS(float32x4_t, GameData_21a6120);
  if (v87 != 0) {
    goto LABEL_127;
  }
LABEL_129:
  v94 = vmulq_n_f32(vsubq_f32(v92, v51), v184);
  if (v85 != 0) {
    v169 = v94;
    std___1___shared_weak_count___release_weak(v85);
    v94 = v169;
  }
  LODWORD(v95) = 0;
  v96 = *(_QWORD*)(a1 + 64);
  v97 = vaddq_f32(v178, v94);
  LODWORD(v98) = 0;
  *((float*)&v98 + 1) = v184 * 0x1.3333340000000p-2f;
  v99 = vaddq_f32(COERCE_AS(float32x4_t, v98), v174);
  if (v96 != 0) {
    v175 = v99;
    v179 = v97;
    v100 = std___1___shared_weak_count_lock(v96);
    if (v100 != 0) {
      v101 = v100;
      v102 = *(_QWORD**)(a1 + 56);
      if (v102 != nullptr) {
        v103 = CmdBtlUnit_e7d750(v102) + -0x1.8000000000000p+1f;
        v104 = -v103;
        if (v103 < -0x1.0000000000000p+0f) {
          v104 = 0x1.0000000000000p+0f;
        }
        v105 = v104 * -0x1.3333340000000p-2f;
        if (v103 <= 0x0.0p+0f) {
          v106 = v105;
        }
        else {
          v106 = -0x0.0p+0f;
        }
      }
      else {
        v106 = -0x1.3333340000000p-2f;
      }
      v99 = v175;
      v97 = v179;
      LODWORD(v95) = 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
        std___1___shared_weak_count___release_weak(v101);
        v99 = v175;
        v97 = v179;
        LODWORD(v95) = 0;
      }
      goto LABEL_145;
    }
    v99 = v175;
    v97 = v179;
    LODWORD(v95) = 0;
  }
  v106 = -0x1.3333340000000p-2f;
LABEL_145:
  LODWORD(v107) = 0;
  *((float*)&v107 + 1) =
      (float)((float)((float)(v34 * 0x1.0000000000000p-1f) * v36) +
              0x1.0000000000000p-1f) *
      v106;
  v108 = vaddq_f32(v99, COERCE_AS(float32x4_t, v107));
  *((float*)&v95 + 1) = v52 * 0x1.3333340000000p-2f;
  v109 = vaddq_f32(COERCE_AS(float32x4_t, v95),
                   vaddq_f32(v97, COERCE_AS(float32x4_t, v107)));
  v170 = v109;
  v180 = vaddq_f32(COERCE_AS(float32x4_t, v95), v108);
  LANES128(v110).n128_u64[0] = LANES128(v180).n128_u32[0];
  LANES128(v109).n128_u64[1] =
      LANES128_OF(vextq_s8(v109, v109, 8u)).n128_u32[0];
  LANES128(v110).n128_u64[1] =
      LANES128_OF(vextq_s8(v180, v180, 8u)).n128_u32[0];
  v111 = vsubq_f32(v109, v110);
  v176 = v110;
  LANES128(v111).n128_u32[1] = 0;
  v112 = -(float)((float)((float)(*(float*)(a1 + 80) + 0x1.0000000000000p-1f) +
                          (float)(v42 * 0x1.99999a0000000p-4f)) +
                  (float)(v184 * 0x1.3333340000000p-3f));
  if (v47 == 0) {
    v112 = (float)((float)(*(float*)(a1 + 80) + 0x1.0000000000000p-1f) +
                   (float)(v42 * 0x1.99999a0000000p-4f)) +
           (float)(v184 * 0x1.3333340000000p-3f);
  }
  v185 = v112;
  v113 = vmulq_f32(v111, v111);
  LANES128(v113).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v113, v113, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  LANES128(v114).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
          .n64_u64[0];
  v115 = 0x0.0p+0f;
  if (LANES128(v114).n128_f32[0] > 0x0.0p+0f) {
    LANES128(v114).n128_u64[1] = LANES128(v114).n128_u64[0];
    v116 = vrsqrteq_f32(v114);
    v117 = vmulq_f32(v116, vrsqrtsq_f32(v116, vmulq_f32(v114, v116)));
    v118 = vbicq_s8(
        vmulq_f32(v111,
                  vmulq_f32(v117, vrsqrtsq_f32(v117, vmulq_f32(v114, v117)))),
        vceqzq_f32(v114));
    v115 = (float)(GameRoutine_1a0ab40(LANES128(v118).n128_f32[0],
                                       LANES128(v118).n128_f32[2]) *
                   0x1.ca5dc20000000p+5f) *
           0x1.1df46a0000000p-6f;
  }
  v119 = 0x0.0p+0f;
  math_Quat_FromYawPitchRoll((void*)(&v187_.v187), v115, 0x0.0p+0f, 0x0.0p+0f);
  v120 = vmulq_f32(v187_.v187, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v121).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v122).n128_u64[0] = LODWORD(v185);
  LANES128(v123).n128_u64[0] = LODWORD(v185);
  LANES128(v124).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v125).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v121).n128_i8[8] =
      vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v124).n128_u64[1] = LANES128(v124).n128_u64[0];
  LANES128(v123).n128_u64[1] = LANES128(v125).n128_u64[0];
  v126 = vmulq_f32(v123, v121);
  LANES128(v123).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v123).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v120).n128_u64[0]), 1);
  LANES128(v122).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v125).n128_u64[1] = LANES128(v122).n128_u64[0];
  LANES128(v122).n128_u64[1] = LODWORD(v185);
  v127 = vmlaq_f32(vmlaq_f32(vmulq_f32(v120, v124),
                             COERCE_AS(float32x4_t, GameData_1a83800), v126),
                   COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v122, v123));
  LANES128(v128).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v128).n128_i8[8] =
      vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v120).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v187_.v187, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v129 = vmlsq_f32(v127, v128, v125);
  LANES128(v128).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v187_.v187, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v130).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v131).n128_u64[0] = LANES128(v187_.v187).n128_u64[0];
  LANES128(v128).n128_u64[1] = LANES128(v128).n128_u64[0];
  LANES128(v132).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v131).n128_u64[1] = LANES128(v120).n128_u64[0];
  *(int8x8_t*)&LANES128(v130).n128_i8[8] =
      vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v132).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v129).n128_u64[0]), 1);
  v133 =
      vmlaq_f32(vmulq_f32(v128, v129), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v131, v130));
  LANES128(v130).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v187_.v187, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v120).n128_u64[1] = LANES128(v130).n128_u64[0];
  LANES128(v130).n128_u64[1] = LANES128(v187_.v187).n128_u64[0];
  LANES128(v134).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v134).n128_i8[8] =
      vqtbl1_s8(v129, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v135 = vmlsq_f32(vmlaq_f32(v133, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v130, v132)),
                   v134, v120);
  LANES128(v135).n128_u32[3] = 0;
  v186 = vaddq_f32(v170, v135);
  v136 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 48));
  v137 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16LL) + 440LL);
  if (v137 != 0 &&
      (unsigned __int64)(v138 = *(unsigned __int8*)(v137 + 16)) <= 3) {
    v139 = GameData_1b018e8[v138];
  }
  else {
    v139 = 392;
  }
  v140 = *v9 + 672 + ((__int64)*(int*)(*v9 + 672 + v139) << 7);
  v171 = vrev64q_s32(v186);
  v141 = *(unsigned __int64**)(v140 + 40);
  for (i = *(unsigned __int64**)(v140 + 48); v141 != i; v141 += 2) {
    LANES128(v187_.v187).n128_u64[0] = *v141;
    v144 = v141[1];
    LANES128(v187_.v187).n128_u64[1] = v144;
    if (v144 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v144 + 16), 1u,
                                memory_order_relaxed);
      v143 = CmdBtlCameraCutBase_e82b40(a1, &v187_.v187);
      if (v119 < v143) {
        v119 = v143;
      }
      std___1___shared_weak_count___release_weak(v144);
    }
    else {
      v145 = CmdBtlCameraCutBase_e82b40(a1, &v187_.v187);
      if (v119 < v145) {
        v119 = v145;
      }
    }
  }
  v146 = (float)((float)(v52 * 0x1.8000000000000p+0f) + 0x1.4000000000000p+1f) +
         v119;
  v147 = vtrn2q_s32(v171, COERCE_AS(int32x4_t, 0));
  if (atomic_fetch_add((atomic_ullong* volatile)(v136 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v172 = v147;
    (*(void (**)(__int64))(*(_QWORD*)v136 + 16LL))(v136);
    std___1___shared_weak_count___release_weak(v136);
    v147 = v172;
  }
  v187_.v188 = 0;
  v187_.v189 = 0;
  LANES128(v148).n128_u64[0] = LANES128(v186).n128_u64[0];
  LANES128(v148).n128_u64[1] = LANES128(v186).n128_u32[2];
  v187_.v187 = v148;
  v187_.v190 = v146;
  v187_.v191 =
      (float)((float)(v52 * 0x1.4000000000000p+3f) + 0x1.e000000000000p+4f) +
      (float)(v181 * 0x1.0000000000000p+1f);
  v149 = 0x0.0p+0f;
  v150 = vsubq_f32(v147, v176);
  v151 = v150;
  LANES128(v151).n128_u32[1] = 0;
  v153 = vmulq_f32(v151, v151);
  LANES128(v153).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v153, v153, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0])))
          .n64_u64[0];
  v152 = 0x0.0p+0f;
  LANES128(v153).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v153).n128_f32[0] > 0x0.0p+0f) {
    LANES128(v153).n128_u64[1] = LANES128(v153).n128_u64[0];
    v182 = v150;
    v154 = vrsqrteq_f32(v153);
    v155 = vmulq_f32(v154, vrsqrtsq_f32(v154, vmulq_f32(v153, v154)));
    v156 = vbicq_s8(
        vmulq_f32(v151,
                  vmulq_f32(v155, vrsqrtsq_f32(v155, vmulq_f32(v153, v155)))),
        vceqzq_f32(v153));
    v157 = GameRoutine_1a0ab40(LANES128(v156).n128_f32[0],
                               LANES128(v156).n128_f32[2]);
    v150 = v182;
    v152 = v157 * 0x1.ca5dc20000000p+5f;
  }
  v158 = vmulq_f32(v150, v150);
  *(float*)&v187_.v188 = v152;
  LANES128(v158).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v158, v158, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])))
          .n64_u64[0];
  LANES128(v159).n128_u64[1] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]))))
          .n64_u32[0];
  LANES128(v159).n128_u64[0] =
      LANES64_OF(
          vdup_lane_s32(
              vsub_f32(COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])),
              1))
          .n64_u32[0];
  v160 = vmulq_f32(v159, v159);
  LANES128(v160).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v160, v160, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v160).n128_u64[0])))
          .n64_u64[0];
  LANES128(v160).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v160).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v160).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v160).n128_f32[0] > 0x0.0p+0f) {
    LANES128(v160).n128_u64[1] = LANES128(v160).n128_u64[0];
    v161 = vrsqrteq_f32(v160);
    v162 = vmulq_f32(v161, vrsqrtsq_f32(v161, vmulq_f32(v160, v161)));
    v163 = vbicq_s8(
        vmulq_f32(v159,
                  vmulq_f32(v162, vrsqrtsq_f32(v162, vmulq_f32(v160, v162)))),
        vceqzq_f32(v160));
    v149 = GameRoutine_1a0ab40(LANES128(v163).n128_f32[0],
                               LANES128(v163).n128_f32[2]) *
           0x1.ca5dc20000000p+5f;
  }
  *((float*)&v187_.v188 + 1) = v149;
  CmdBtlCameraCutBase_e82510(a1, (__int64)&v187_.v187);
  *(_BYTE*)(a1 + 76) = 0;
}

void memory_eaeda0(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
    _BYTE v17[24];
    int v18;
  } f_;
  _BYTE* v19;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventTurnBase_vtable;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    f_.v17[0] = 0;
    f_.v18 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_1fedea0[v10];
      v19 = f_.v17;
      ((void (*)(_BYTE**, __int64))v11)(&v19, v8);
      f_.v18 = v10;
    }
    GameRoutine_eaec10((__int64*)(a1 + 64), (__int64)f_.v17);
    if (f_.v18 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr_1fede88[f_.v18])(&v19,
                                                                       f_.v17);
    }
  }
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 100) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 14);
  if ((a3[8] & 1) != 0) {
    fw_text_String_CopyTerminated(f_.v15, a3[10], a3[9]);
  }
  else {
    v12 = a3[9];
    v13 = a3[10];
    f_.v15[0] = a3[8];
    f_.v15[1] = v12;
    f_.v16 = v13;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, f_.v15);
  if ((f_.v15[0] & 1) != 0 && f_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  f_.v16);
  }
}

void memory_f43d50(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  unsigned __int32 v22;
  float32x4_t v23;
  float32x4_t v24;
  char v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  __int64 v37;
  float v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float32x4_t* v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float v58;
  float v59;
  float v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float v66;
  bool v67;
  float v68;
  float v69;
  float v70;
  float32x4_t v71;
  unsigned __int64 v72;
  float v73;
  float v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  float v82;
  float32x4_t v83;
  int8x16x2_t v84;
  int8x16x2_t v85;
  int8x16x2_t v86;

  v2 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a55c0) != 0) {
    v76 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v76;
    v77 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v77;
    v78 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v78;
    v79 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v79;
    __cxa_guard_release((__int64)&GameData_21a55c0);
  }
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = GameData_21a5590;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = GameData_21a55b0;
  v3 = *(float*)(a1 + 192) / 0x1.3333340000000p-3f;
  if (v3 <= 0x1.0000000000000p+0f) {
    v4 = *(float*)(a1 + 192) / 0x1.3333340000000p-3f;
  }
  else {
    v4 = 0x1.0000000000000p+0f;
  }
  if (v3 >= 0x0.0p+0f) {
    v5 = v4;
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v6 = powf(v5, 0x1.0000000000000p-1f);
  if (*(_BYTE*)(a1 + 245) != 0) {
    v7 = v6;
  }
  else {
    v7 = 0x1.0000000000000p+0f;
  }
  v8 = (float)(v7 + -0x1.8000000000000p-1f) * 0x1.0000000000000p+2f;
  if (v8 <= 0x1.0000000000000p+0f) {
    v9 = (float)(v7 + -0x1.8000000000000p-1f) * 0x1.0000000000000p+2f;
  }
  else {
    v9 = 0x1.0000000000000p+0f;
  }
  v10 = 0x1.0000000000000p+0f - v9;
  if (v8 >= 0x0.0p+0f) {
    v11 = v10;
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  if ((float)(v7 / 0x1.8000000000000p-1f) <= 0x1.0000000000000p+0f) {
    v12 = v7 / 0x1.8000000000000p-1f;
  }
  else {
    v12 = 0x1.0000000000000p+0f;
  }
  if ((float)(v7 / 0x1.8000000000000p-1f) >= 0x0.0p+0f) {
    v13 = v12;
  }
  else {
    v13 = 0x0.0p+0f;
  }
  if (v7 < 0x1.8000000000000p-1f) {
    v14 = v13;
  }
  else {
    v14 = v11;
  }
  v15 = (float)(fminf(fmaxf(v14, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.0000000000000p-2f) +
        0x1.0000000000000p+0f;
  v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                            memory_order_acquire) &
       1) == 0) {
    v82 = v15;
    v80 = __cxa_guard_acquire((__int64)&GameData_21a6150);
    v15 = v82;
    v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
    if (v80 != 0) {
      v81 = *((_QWORD*)GameData_212c548 + 1);
      *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
      *((_QWORD*)&GameData_21a6140 + 1) = v81;
      __cxa_guard_release((__int64)&GameData_21a6150);
      v15 = v82;
      v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
    }
  }
  LODWORD(v17) = 0;
  LANES128(v18).n128_u64[0] = 0;
  v19 = *(float32x4_t*)(a1 + 48);
  v20 = *(float32x4_t*)(a1 + 64);
  v21 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_21a6140), v15);
  HIDWORD(v17) = LANES128(v21).n128_u32[1];
  LANES128(v18).n128_u64[1] = LANES128(v21).n128_u32[2];
  v22 = LANES128(v21).n128_u32[0];
  v23 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v21).n128_u32[0]),
                      COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
          COERCE_AS(float32x4_t, v17), *(float32x2_t*)(a1 + 16), 1),
      v18, *(float32x4_t*)(a1 + 16), 2);
  v24 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v21).n128_u32[0]),
                      COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
          COERCE_AS(float32x4_t, v17), *(float32x2_t*)(a1 + 32), 1),
      v18, *(float32x4_t*)(a1 + 32), 2);
  *(float32x4_t*)(a1 + 16) = v23;
  *(float32x4_t*)(a1 + 32) = v24;
  *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, v22), LANES128(v19).n128_f32[0]),
          COERCE_AS(float32x4_t, v17),
          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
      v18, v19, 2);
  *(float32x4_t*)(a1 + 64) = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v22),
                                     LANES128(v20).n128_f32[0]),
                         COERCE_AS(float32x4_t, v17),
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
          v18, v20, 2),
      COERCE_AS(float32x4_t, 0));
  math_Quat_FromYawPitchRoll((void*)(&v83), v16, 0x0.0p+0f, 0x0.0p+0f);
  v25 = *(_BYTE*)(a1 + 224);
  v85.val[1] = v83;
  LANES128(v85.val[1]).n128_u32[3] = 0;
  v26 = LANES64_OF(
            vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v83).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v29 = LANES64_OF(
            vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v27).n128_u64[1] = v26;
  LANES128(v28).n128_u64[1] = v29;
  v30 = vmulq_f32(v27, v27);
  v84.val[1] = vmulq_f32(v28, v28);
  v84.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v84.val[1], v84.val[1]), vaddq_f32(v30, v30)));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[1] = v26;
  v32 = vmulq_f32(v31, v85.val[1]);
  v33 = vaddq_f32(v32, v32);
  LANES128(v85.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v85.val[1]).n128_u64[1] = v29;
  v34 = vmulq_laneq_f32(v85.val[1], v83, 3);
  v35 = vaddq_f32(v34, v34);
  v86.val[0] = vaddq_f32(v33, v35);
  v86.val[1] = vsubq_f32(v33, v35);
  LANES128(v85.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v84.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85.val[1]).n128_i8[8] =
      vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v84.val[1]).n128_i8[8] =
      vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v85.val[0] = v84.val[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v86.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v86.val[0]).n128_i8[8] =
      vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v85.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85.val[0]).n128_i8[8] =
      vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v36 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
                     v86.val[0], *(float32x2_t*)(a1 + 16), 1),
      v85.val[0], *(float32x4_t*)(a1 + 16), 2);
  v84.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
                     v86.val[0], *(float32x2_t*)(a1 + 32), 1),
      v85.val[0], *(float32x4_t*)(a1 + 32), 2);
  v84.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 48))),
                     v86.val[0], *(float32x2_t*)(a1 + 48), 1),
      v85.val[0], *(float32x4_t*)(a1 + 48), 2);
  v85.val[0] = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 64))),
                         v86.val[0], *(float32x2_t*)(a1 + 64), 1),
          v85.val[0], *(float32x4_t*)(a1 + 64), 2),
      COERCE_AS(float32x4_t, 0));
  v85.val[1] = *(int8x16_t*)(a1 + 176);
  *(float32x4_t*)(a1 + 16) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v36).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), v36, 2);
  *(float32x4_t*)(a1 + 32) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v84.val[0]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v84.val[0]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v84.val[0], 2);
  *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v84.val[1]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v84.val[1]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v84.val[1], 2);
  *(float32x4_t*)(a1 + 64) = vaddq_f32(
      v85.val[1],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                          LANES128(v85.val[0]).n128_f32[0]),
              COERCE_AS(float32x4_t, GameData_1a83610),
              COERCE_AS(float32x2_t, LANES128(v85.val[0]).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v85.val[0], 2));
  v37 = GameData_212d020[0];
  if ((v25 & 1) != 0) {
    v38 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4LL * *(int*)(a1 + 320) +
                    5520);
    *(float*)(a1 + 352) = v38;
  }
  else {
    v38 = *(float*)(a1 + 352);
  }
  v39 = *(unsigned __int8*)(a1 + 328);
  *(float*)(a1 + 92) = v7 * v38;
  if (v39 == 1) {
    v40 = *(_QWORD*)(a1 + 344);
    v41 = *GameData_212f878;
    if (v40 != 0 && *(_QWORD*)(v40 + 8) != -1) {
      goto LABEL_36;
    }
    game_f31720((void*)(&v83), *(_QWORD*)(*(_QWORD*)v37 + 40LL),
                *(unsigned int*)(a1 + 324));
    v40 = LANES128(v83).n128_i64[1];
    v42 = *(_QWORD*)(a1 + 344);
    *(float32x4_t*)(a1 + 336) = v83;
    if (v42 != 0) {
      std___1___shared_weak_count___release_weak(v42);
      v40 = *(_QWORD*)(a1 + 344);
    }
    if (v40 != 0) {
    LABEL_36:
      v43 = std___1___shared_weak_count_lock(v40);
      if (v43 != 0) {
        v44 = *(float32x4_t**)(a1 + 336);
        v45 = v43;
        if (v44 == nullptr) {
          goto LABEL_50;
        }
        v46 = *(float32x4_t*)(a1 + 16);
        v47 = *(float32x4_t*)(a1 + 32);
        LANES128(v48).n128_u32[0] = 0;
        LANES128(v48).n128_u32[3] = 0;
        v49 = *(float32x4_t*)(a1 + 48);
        v50 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 256))),
                           v47, *(float32x2_t*)(a1 + 256), 1),
            v49, *(float32x4_t*)(a1 + 256), 2);
        v51 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 272))),
                           v47, *(float32x2_t*)(a1 + 272), 1),
            v49, *(float32x4_t*)(a1 + 272), 2);
        v52 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 288))),
                           v47, *(float32x2_t*)(a1 + 288), 1),
            v49, *(float32x4_t*)(a1 + 288), 2);
        v53 = vaddq_f32(
            *(float32x4_t*)(a1 + 64),
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 304))), v47,
                    *(float32x2_t*)(a1 + 304), 1),
                v49, *(float32x4_t*)(a1 + 304), 2));
        v54 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v50).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1);
        v55 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v51).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]), 1);
        v56 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v52).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 1);
        v57 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                       LANES128(v53).n128_f32[0]),
                           COERCE_AS(float32x4_t, GameData_1a83610),
                           COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                           1),
            COERCE_AS(float32x4_t, GameData_1a83090), v53, 2);
        v58 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 228) *
                                     0x1.921fb60000000p+1f)) +
              (float)(roundf(
                          (float)(*(float*)(a1 + 228) * 0x1.921fb60000000p+1f) *
                          0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
        if (!(v58 > 0x1.921fb60000000p+0f)) {
          v60 = 0x1.0000000000000p+0f;
          if (!(v58 < -0x1.921fb60000000p+0f)) {
          LABEL_43:
            v61 = vmlaq_laneq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v51, 2);
            v62 = vmlaq_laneq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v52, 2);
            v63 = vmlaq_laneq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v50, 2);
            *(unsigned __int64*)((char*)LANES128(v48).n128_u64 + 4) =
                *(unsigned int*)(v41 + 1424);
            v64 = vaddq_f32(v48, v57);
            v65 =
                v60 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c188) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c188 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c188) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c188 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      (float)(v58 *
                                                                                                              v58))) *
                                                                                      (float)(v58 *
                                                                                              v58))) *
                                                                   (float)(v58 *
                                                                           v58))) *
                                                   (float)(v58 * v58))) *
                                (float)(v58 * v58)) +
                        0x1.0000000000000p+0f);
            v66 = fabsf(v65);
            v67 = v65 < 0x0.0p+0f;
            v68 = -0x1.0000000000000p+0f;
            v69 = v66 * 0x1.0000000000000p-1f;
            if (v67) {
              v68 = 0x1.0000000000000p+0f;
            }
            v70 = *(float*)(a1 + 92) *
                  (float)((float)(v69 * v68) + 0x1.0000000000000p-1f);
            if ((LANES128(v44[8]).n128_u8[0] & 1) == 0) {
              LANES128(v44[8]).n128_u8[0] = 1;
            }
            LANES128(v44[2]).n128_u64[0] = LANES128(v64).n128_u64[0];
            v44[4] = v63;
            v44[5] = v61;
            v71 = v44[2];
            LANES128(v71).n128_u64[1] = LANES128(v64).n128_u32[2];
            v44[6] = v62;
            v44[7] = v64;
            LANES128(v44[9]).n128_f32[0] = v70;
            v44[2] = v71;
            game_f2f4e0((__int64)v44);
            LANES128(v44[9]).n128_u8[8] = 1;
            v72 = LANES128(v44[10]).n128_u64[0];
            if (v72 != 0) {
              v73 = LANES128(v44[9]).n128_f32[0];
              v74 = LANES128(v44[9]).n128_f32[1];
              v75 = *(__int64**)(v72 + 8);
            }
            else {
              v75 = (__int64*)LANES128(v44[10]).n128_u64[1];
              if (*v75 == 0 || *(_DWORD*)(*v75 + 16) != *((_DWORD*)v75 + 2)) {
                goto LABEL_50;
              }
              v73 = LANES128(v44[9]).n128_f32[0];
              v74 = LANES128(v44[9]).n128_f32[1];
            }
            game_14a1b00(v75, v73 * v74);
          LABEL_50:
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak(v45);
            }
            return;
          }
          v59 = -0x1.921fb60000000p+1f;
        }
        else {
          v59 = 0x1.921fb60000000p+1f;
        }
        v58 = v59 - v58;
        v60 = -0x1.0000000000000p+0f;
        goto LABEL_43;
      }
    }
  }
}

__int64 memory_10a2280(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  float v6;
  float32x4_t* v7;
  __int64 v8;
  float v9;
  __int64** v10;
  __int64** v11;
  float32x4_t* v12;
  _QWORD* v13;
  __int64 v14;
  int16x4_t v15;
  float32x4_t* v16;
  __int64* v17;
  __int64 v18;
  unsigned int v19;
  float32x4_t v20;
  unsigned int i;
  float32x4_t* v22;
  unsigned int v23;
  float32x4_t v24;
  unsigned int j;
  float32x4_t* v26;
  int v27;
  __int64 v28;
  unsigned __int32 v29;
  unsigned __int32 v30;
  unsigned __int64 v31;
  char v32;
  _BYTE* v33;
  _BYTE* v34;
  _BYTE* v35;
  unsigned __int64 v36;
  char v37;
  _BYTE* v38;
  _BYTE* v39;
  _BYTE* v40;
  __int64 v41;
  unsigned __int32 v42;
  __int128 v43;
  float32x4_t v44;
  float32x4_t v45;
  struct {
    float32x4_t v46;
    __int64 v47;
    __int64 v48;
  } v46_;

  v1 = *(_QWORD*)(result + 200);
  if (v1 != 0 && *(_QWORD*)(v1 + 8) != -1 && *(_QWORD*)(result + 208) != 0) {
    v3 = *(_QWORD*)(result + 176);
    if (v3 != 0) {
      v4 = *(_QWORD*)(result + 184);
      if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
        v6 = (float)(*(float*)(*(_QWORD*)(v4 + 304) + 16LL) *
                     0x1.0aef000000000p+4f) *
             0x1.0624de0000000p-10f;
        if (v6 == 0x0.0p+0f) {
          return result;
        }
        if ((~*(_DWORD*)(result + 800) & 0x440) != 0) {
          v7 = (float32x4_t*)result;
          if ((*(_BYTE*)(result + 600) & 1) == 0) {
            v8 = CharacterAnimator_107a6f0(*(_QWORD*)(v4 + 72));
            result = (__int64)v7;
            if (v8 == 0 || v8 == LANES128(v7[13]).n128_u64[1]) {
              goto LABEL_22;
            }
            result = GameRoutine_10a2760(v8 + 104);
            if ((result & 1) == 0) {
              if ((LANES128(v7[8]).n128_u16[4] & 1) != 0) {
                return result;
              }
              result = (__int64)v7;
              return (__int64)ProcInst_657a50(result, 1);
            }
            result = (__int64)v7;
            LANES128(v7[13]).n128_u64[1] = v8;
          }
        LABEL_22:
          v9 = *(float*)(result + 240) - v6;
          *(float*)(result + 236) = *(float*)(result + 236) - v6;
          *(float*)(result + 240) = v9;
          MagicInst_10a3ae0((__int64)&v7[19], v6);
          v10 = (__int64**)LANES128(v7[15]).n128_u64[1];
          v11 = (__int64**)LANES128(v7[16]).n128_u64[0];
          if (v10 != v11) {
            v12 = v7;
            v13 = GameData_212c540;
            do {
              v14 = **v10;
              if (v14 != 0 && *(_DWORD*)(v14 + 16) == *((_DWORD*)*v10 + 2)) {
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21a6130,
                         memory_order_acquire) &
                     1) == 0) {
                  v27 = __cxa_guard_acquire_alt1(&GameData_21a6130);
                  v12 = v7;
                  if (v27 != 0) {
                    v28 = v13[1];
                    *(_QWORD*)&GameData_21a6120 = *v13;
                    *((_QWORD*)&GameData_21a6120 + 1) = v28;
                    __cxa_guard_release_alt1(&GameData_21a6130);
                    v12 = v7;
                  }
                }
                LANES64(v15).n64_u64[0] =
                    LANES64_OF(
                        vmovn_s32(vmvnq_s8(vceqq_f32(
                            v7[33], COERCE_AS(float32x4_t, GameData_21a6120)))))
                        .n64_u64[0];
                if ((LANES64(v15).n64_u8[0] & 1) != 0 ||
                    (LANES64(v15).n64_u8[2] & 1) != 0 ||
                    (v16 = v7 + 32, (LANES64(v15).n64_u8[4] & 1) != 0)) {
                  v16 = v7 + 33;
                }
                v17 = *v10;
                v18 = **v10;
                if (v18 != 0) {
                  if (*(_DWORD*)(v18 + 16) != *((_DWORD*)v17 + 2)) {
                    goto LABEL_80;
                  }
                  v19 = *(_DWORD*)(v18 + 36);
                  if (v19 == 0) {
                    goto LABEL_80;
                  }
                  v20 = *v16;
                  for (i = 0; i < v19; ++i) {
                    if ((int)v19 > (int)i) {
                      v22 = *(float32x4_t**)(v18 + 40 + 8LL * (int)i);
                      if (v22 != nullptr) {
                        v22[3] = v20;
                        LANES128(v22[8]).n128_u8[0] = 1;
                        v19 = *(_DWORD*)(v18 + 36);
                      }
                    }
                  }
                  v17 = *v10;
                  v18 = **v10;
                  if (v18 != 0) {
                  LABEL_80:
                    if (*(_DWORD*)(v18 + 16) == *((_DWORD*)v17 + 2)) {
                      v23 = *(_DWORD*)(v18 + 36);
                      if (v23 != 0) {
                        v24 = v12[29];
                        for (j = 0; j < v23; ++j) {
                          if ((int)v23 > (int)j) {
                            v26 = *(float32x4_t**)(v18 + 40 + 8LL * (int)j);
                            if (v26 != nullptr) {
                              v26[1] = v24;
                              LANES128(v26[8]).n128_u8[0] = 1;
                              v23 = *(_DWORD*)(v18 + 36);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                game_14a3920((__int64)v17);
                v12 = v7;
              }
              v10 += 2;
            } while (v10 != v11);
          }
          GameRoutine_10a27e0((__int64)v7);
          if (LANES128(v7[14]).n128_f32[3] <= 0x0.0p+0f) {
            v29 = LANES128(v7[50]).n128_u32[0];
            if ((v29 & 0x40) == 0) {
              LANES128(v7[50]).n128_u32[0] = v29 | 0x40;
              game_10a2940((__int64)v7);
            }
          }
          GameRoutine_10a51c0(v7, v6);
          v30 = LANES128(v7[50]).n128_u32[0];
          result = (__int64)v7;
          if ((v30 & 0x1000) != 0) {
            v31 = LANES128(v7[9]).n128_u64[1];
            v32 = *(_BYTE*)(v31 + 32);
            v33 = *(_BYTE**)(v31 + 48);
            v34 = (_BYTE*)(v31 + 33);
            if ((v32 & 1) != 0) {
              v35 = v33;
            }
            else {
              v35 = v34;
            }
            game_character_10b49e0((void*)(&v45),
                                   (__int64)&LANES128(v7[41]).n128_i64[1], v35);
            v36 = LANES128(v7[9]).n128_u64[1];
            v37 = *(_BYTE*)(v36 + 56);
            v38 = *(_BYTE**)(v36 + 72);
            v39 = (_BYTE*)(v36 + 57);
            if ((v37 & 1) != 0) {
              v40 = v38;
            }
            else {
              v40 = v39;
            }
            game_character_10b49e0((void*)(&v46_.v46),
                                   (__int64)&LANES128(v7[41]).n128_i64[1], v40);
            v44 = vaddq_f32(v46_.v46, v7[47]);
            MagicInst_10a3950(v7 + 19, &v45, &v44);
            v41 = *(_QWORD*)(LANES128(v7[11]).n128_u64[1] + 64);
            MagicInst_10a4bf0((void*)(&v46_.v46), &v7[19]);
            v42 = LANES128(v46_.v46).n128_u32[2];
            result = (__int64)v7;
            *(_QWORD*)(v41 + 112) = LANES128(v46_.v46).n128_u64[0];
            v43 = *(_OWORD*)(v41 + 112);
            *((_QWORD*)&v43 + 1) = v42;
            *(_OWORD*)(v41 + 112) = v43;
            v30 = LANES128(v7[50]).n128_u32[0];
          }
          if ((v30 & 0x84) == 4 &&
              *(_DWORD*)(*(_QWORD*)(result + 152) + 84LL) == 2) {
            v46_.v47 = 0;
            v46_.v48 = 0;
            v46_.v46 = (__typeof__(v46_.v46)){0};
            GameRoutine_109ded0((__int128*)&v46_.v46, v7 + 29, 0);
            v30 = LANES128(v7[50]).n128_u32[0];
            result = (__int64)v7;
            if (LANES128(v7[29]).n128_f32[1] < LANES128(v46_.v46).n128_f32[1]) {
              v30 |= 0x80u;
              LANES128(v7[40]).n128_u8[8] = 1;
              LANES128(v7[50]).n128_u32[0] = v30;
              LANES128(v7[40]).n128_u32[3] = -1131902839;
            }
          }
          if ((v30 & 4) != 0 &&
              *(float*)(result + 556) > *(float*)(result + 560) &&
              *(float*)(result + 580) > *(float*)(result + 584) &&
              *(float*)(result + 604) > *(float*)(result + 608) &&
              (*(_BYTE*)(result + 624) != 1 ||
               *(float*)(result + 628) > *(float*)(result + 632)) &&
              (*(_BYTE*)(result + 648) != 1 ||
               *(float*)(result + 652) > *(float*)(result + 656)) &&
              (*(_WORD*)(result + 136) & 1) == 0) {
            return (__int64)ProcInst_657a50(result, 1);
          }
          return result;
        }
      }
    }
  }
  if ((*(_WORD*)(result + 136) & 1) != 0) {
    return result;
  }
  return (__int64)ProcInst_657a50(result, 1);
}

void memory_130dae0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (*(_OWORD*)(a1 + 8) == 0) {
    return;
  }
  if (*(_BYTE*)(a2 + 6) == 1) {
    if (game_GameModeData_instance_ == 0) {
      return;
    }
    v4 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v4 == 0) {
      return;
    }
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v5 != 0 && *(_QWORD*)(v5 + 136) == v4 && *(_BYTE*)(v5 + 32) == 0) {
      if ((*(_BYTE*)(v4 + 185) & 0x20) != 0) {
        return;
      }
    }
    else if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x40) == 0) {
      return;
    }
  }
  v6 = GameData_2240f18 + 1;
  *(_QWORD*)(a1 + 288) =
      GameData_2240f18 % 0x64uLL +
      100 * (GameData_21d87e8 % 0x989680u +
             10000000LL *
                 ((3600 * (unsigned __int16)GameData_21d87f8 +
                   HIBYTE(GameData_21d87f8) + 60 * BYTE2(GameData_21d87f8)) %
                  0xF4240u)) +
      1000000000000000LL;
  GameData_2240f18 = v6;
  *(_DWORD*)(a1 + 296) = *(_DWORD*)a2;
  v7 = *(_WORD*)(a2 + 4);
  if ((v7 & 1) != 0 && (*(_BYTE*)(a2 + 6) & 1) == 0) {
    if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1 + 32,
                                                     "basic_chapter") == 0) {
      *(_BYTE*)(a1 + 120) = 1;
    }
    Manager_13114c0(a1 + 32);
    Manager_130f9a0(a1 + 32);
    Manager_130f220(a1 + 32);
    Manager_130e260(a1 + 32);
    if (*(_BYTE*)(a1 + 120) == 1) {
      if ((int)nn_prepo_PlayReport_GetCount(a1 + 32) < 2 ||
          *(_OWORD*)(a1 + 104) == 0) {
        nn_prepo_PlayReport_Clear(a1 + 32);
      }
      else {
        nn_prepo_PlayReport_Save(a1 + 32, a1 + 104);
      }
      *(_BYTE*)(a1 + 120) = 0;
    }
    v7 = *(_WORD*)(a2 + 4);
  }
  if ((v7 & 2) != 0) {
    Manager_130fb60(a1 + 32);
    v7 = *(_WORD*)(a2 + 4);
    if ((v7 & 4) == 0) {
    LABEL_22:
      if ((v7 & 8) == 0) {
        goto LABEL_23;
      }
      goto LABEL_27;
    }
  }
  else if ((v7 & 4) == 0) {
    goto LABEL_22;
  }
  Manager_130fdc0(a1 + 32);
  game_playreport_13108c0(a1 + 32, *(_QWORD**)(a2 + 8));
  v7 = *(_WORD*)(a2 + 4);
  if ((v7 & 8) == 0) {
  LABEL_23:
    if ((v7 & 0x10) == 0) {
      return;
    }
    goto LABEL_28;
  }
LABEL_27:
  game_playreport_Manager_ReportReliance(a1 + 32);
  if ((*(_WORD*)(a2 + 4) & 0x10) == 0) {
    return;
  }
LABEL_28:
  if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1 + 32, "misc") == 0) {
    *(_BYTE*)(a1 + 120) = 1;
  }
  Manager_13114c0(a1 + 32);
  Manager_13122a0(a1 + 32);
  Manager_1312e60(a1 + 32);
  GameRoutine_1311ce0(a1 + 32);
  GameRoutine_1311810(a1 + 32);
  nn_prepo_Array_Clear(a1 + 208);
  v10_.v10[2] = a1 + 208;
  v10_.v10[0] = GameData_2025c18;
  v10_.v10[1] = a1 + 128;
  v10_.v11 = v10_.v10;
  GameRoutine_8ecf00(game_GameModeData_instance_ + 168, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
    goto LABEL_34;
  }
  if (v10_.v11 != nullptr) {
    v9 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
  }
  if (*(_BYTE*)(a1 + 120) == 1) {
    nn_prepo_PlayReport_Add_1a0ae20(a1 + 32, "MapGameOverCount", a1 + 208);
  }
  GameRoutine_1312b50(a1 + 32);
  GameRoutine_13140f0(a1 + 32);
  if (*(_BYTE*)(a1 + 120) == 1) {
    if ((int)nn_prepo_PlayReport_GetCount(a1 + 32) < 2 ||
        *(_OWORD*)(a1 + 104) == 0) {
      nn_prepo_PlayReport_Clear(a1 + 32);
    }
    else {
      nn_prepo_PlayReport_Save(a1 + 32, a1 + 104);
    }
    *(_BYTE*)(a1 + 120) = 0;
  }
}

void memory_1712bf0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[150];
  *a1 = game_menu_anonymous_ProcGuideMenu_vtable_20ad468;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20ad8e8;
  a1[132] = GameData_20ad9b8;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[151] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[144];
  if (v7 == a1 + 140) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[136];
  if (v9 != 0) {
    v10 = *v3;
    a1[137] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void memory_1712cd0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[150];
  *a1 = game_menu_anonymous_ProcGuideMenu_vtable_20ad468;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20ad8e8;
  a1[132] = GameData_20ad9b8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[151] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[144];
  if (v7 == a1 + 140) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[136];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[137] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, (__int64)a1);
}

#pragma GCC visibility pop
