#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1a1f40(unsigned int);
_DWORD* CudaDriverRoutine_1a28d0(unsigned int);
_QWORD* CudaDriverRoutine_1a0e10(_QWORD* result);
_QWORD* CudaDriverRoutine_2221c0(__int64, __int64, unsigned __int64);
_QWORD* CudaDriverRoutine_222ce0();
_QWORD* CudaDriverRoutine_d39b0(_QWORD* result, _QWORD*);
__int64* CudaDriverRoutine_2231b0(__int64* result, __int64, __int64);
__int64 CudaDriverRoutine_105570(_QWORD*, unsigned __int64, __int64*,
                                 unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_106620(const char*, __int64*, _QWORD*);
__int64 CudaDriverRoutine_106f80(__int64, int, _QWORD*);
__int64 CudaDriverRoutine_107040(__int64, int, _QWORD*);
__int64 CudaDriverRoutine_107100(__int64, int, _QWORD*);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108450(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_1085d0(__int64);
__int64 CudaDriverRoutine_1090c0(__int64*);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_111d60(__int64, __int64, const char*, int, __int64,
                                 __int64*);
__int64 CudaDriverRoutine_11abf0(__int64, unsigned int);
__int64 CudaDriverRoutine_11d4d0(__int64, __int64, __int64*, _DWORD*);
__int64 CudaDriverRoutine_11d580(__int64, const char*, _DWORD*);
__int64 CudaDriverRoutine_11d680(__int64);
__int64 CudaDriverRoutine_124ee0();
__int64 CudaDriverRoutine_1272d0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_1274c0(__int64 result);
__int64 CudaDriverRoutine_127670(__int64 result);
__int64 CudaDriverRoutine_12cff0(_QWORD*, __int64);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(__int64, __int64));
__int64 CudaDriverRoutine_12e060(__int64, unsigned int, _DWORD*, int, int);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_19be40(__int64, _BYTE*);
__int64 CudaDriverRoutine_19e6d0(__int64, _QWORD*);
__int64 CudaDriverRoutine_19e6f0(__int64, __int64, __int64, int);
__int64 CudaDriverRoutine_1a0600();
__int64 CudaDriverRoutine_1a0930(__int64 result);
__int64 CudaDriverRoutine_1a2800(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a2910(__int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a3020(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1a40e0(__int64 result);
__int64 CudaDriverRoutine_1b4920(__int64, __int128*, __int64*, __int64*);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1ebbc0(__int64);
__int64 CudaDriverRoutine_1fc4a0(__int64, __int64, unsigned int, bool*);
__int64 CudaDriverRoutine_1fc5a0(unsigned int*, __int64, int, bool*);
__int64 CudaDriverRoutine_203600(__int64, _QWORD*);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_2222a0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_222520(__int64);
__int64 CudaDriverRoutine_222580(__int64, __int64);
__int64 CudaDriverRoutine_222630(__int64 result);
__int64 CudaDriverRoutine_2229a0(__int64);
__int64 CudaDriverRoutine_222a80(__int64, __int64, __int64);
__int64 CudaDriverRoutine_222d10(__int64, __int64);
__int64 CudaDriverRoutine_222da0(__int64 result);
__int64 CudaDriverRoutine_223080(_QWORD**, void (*)(_QWORD, __int64), __int64);
__int64 CudaDriverRoutine_223120(_QWORD*);
__int64 CudaDriverRoutine_225250(__int64, unsigned int, _DWORD*, _DWORD*,
                                 _QWORD*, _QWORD*, _QWORD*, int*);
__int64 CudaDriverRoutine_23c180(__int64, unsigned int*);
__int64 CudaDriverRoutine_30a40(char, __int64, __int64, __int64);
__int64 CudaDriverRoutine_4d0d0(__int64 result);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_72290(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int, __int64,
                                unsigned int);
__int64 CudaDriverRoutine_72520(unsigned int, unsigned int, unsigned int,
                                unsigned int, __int64*);
__int64 CudaDriverRoutine_72770(unsigned int, unsigned int, unsigned int,
                                unsigned int, __int64*);
__int64 CudaDriverRoutine_72cf0(unsigned int, unsigned int, unsigned int,
                                unsigned int, _DWORD*);
__int64 CudaDriverRoutine_73110(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int, __int64, __int64);
__int64 CudaDriverRoutine_745a0(unsigned int, __int64, __int64, __int64*,
                                char*);
__int64 CudaDriverRoutine_75480(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int, __int64);
__int64 CudaDriverRoutine_75860(unsigned int, unsigned int, unsigned int,
                                unsigned int, __int64);
__int64 CudaDriverRoutine_76a90();
__int64 CudaDriverRoutine_76b10();
__int64 CudaDriverRoutine_76b80();
__int64 CudaDriverRoutine_7a0e0();
__int64 CudaDriverRoutine_7a100();
__int64 CudaDriverRoutine_7a190();
__int64 CudaDriverRoutine_7a210();
__int64 CudaDriverRoutine_7a2a0(__int64, __int64);
__int64 CudaDriverRoutine_7a4f0();
__int64 CudaDriverRoutine_7a510();
__int64 CudaDriverRoutine_7a5d0();
__int64 CudaDriverRoutine_7a690(__int64*);
__int64 CudaDriverRoutine_7a740(_QWORD*, _QWORD*, const char*);
__int64 CudaDriverRoutine_811a0(__int64, _QWORD*, unsigned __int64*);
__int64 CudaDriverRoutine_83ba0();
__int64 CudaDriverRoutine_8aaa0(__int64, __int64);
__int64 CudaDriverRoutine_97120(__int64, __int64, const char*, int, __int64*);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_a2830(__int64 result);
__int64 CudaDriverRoutine_a2880(__int64, __int64 (*)(_QWORD*, __int64),
                                __int64);
__int64 CudaDriverRoutine_a2a80(_QWORD*, _BOOL8, __int64);
__int64 CudaDriverRoutine_a3070(__int64, _QWORD*);
__int64 CudaDriverRoutine_a4110(_QWORD*, __int64 (*)(__int64*, __int64),
                                __int64);
__int64 CudaDriverRoutine_ab590(_QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_bbbb0(__int64, __int64);
__int64 CudaDriverRoutine_bbc20(__int64, __int64);
__int64 CudaDriverRoutine_bbc90(__int64, __int64);
__int64 CudaDriverRoutine_c7b70(__int64, __int64, __int64);
__int64 CudaDriverRoutine_c7c10(__int64 result);
__int64 CudaDriverRoutine_c7ca0(__int64, unsigned int*, __int64);
__int64 CudaDriverRoutine_c7d30(__int64, unsigned int*);
__int64 CudaDriverRoutine_d3940(__int64, __int64);
__int64 CudaDriverRoutine_d4810(__int64);
__int64 CudaDriverRoutine_dcd80(__int64, __int64, int);
__int64 CudaDriverRoutine_e3120(__int64);
__int64 CudaDriverRoutine_e58b0(__int64, int*, __int64*, __int64, __int64,
                                __int64, __int64);
__int64 CudaDriverRoutine_e9a20(__int64, __int64, __int64, unsigned int, char);
__int64 CudaDriverRoutine_eae50();
__int64 CudaDriverRoutine_eae90();
__int64 CudaDriverRoutine_eafc0();
__int64 CudaDriverRoutine_eb440(__int64 result, unsigned __int64, __int64,
                                bool*);
__int64 CudaDriverRoutine_ee120(__int64);
__int64 CudaDriverRoutine_ee160(__int64, __int64, _QWORD*, char, unsigned int);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverRoutine_f6230(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64);
__int64 CudaDriverStub_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_108070(_QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a2960(__int64, __int64, __int64);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_203210(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverStub_2033a0(unsigned __int64, __int64);
__int64 CudaDriverStub_57450(void);
__int64 CudaDriverStub_89350(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_11a410(__int64, __int64, const char*, int, char, __int64*);
__int64 cuda_driver_11e8e0(__int64, __int64, const char*, int, char, __int64*,
                           int);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_773f0(__int64);
__int64 cuda_driver_7a800(const char*, __int64*);
__int64 cuda_driver_9a090(__int64, int, _DWORD*);
__int64 cuda_driver_c30d0(_QWORD*, int, _DWORD*);
__int64 cuda_driver_c3200(__int64, char);
__int64 cuda_driver_c36c0(__int64);
__int64 cuda_driver_d4980(__int64, __int64);
__int64 cuda_driver_d5f10(__int64, __int64, _QWORD*, char);
__int64 cuda_driver_d6100(__int64*, __int64, int, __int64*, __int64, __int64,
                          __int64, int);
__int64 cuda_driver_d6360(__int64*, __int64, __int64*, __int64, __int64,
                          __int64, __int64, __int64, int);
__int64 cuda_driver_d7810(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          char, __int64*, __int64, __int64, unsigned int);
__int64 cuda_driver_d7cf0(__int64 result, __int64*, __int64);
__int64 cuda_driver_d7d60(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          unsigned __int64*, char, _DWORD*);
__int64 cuda_driver_e45e0(int*, __int64*, unsigned int, __int64);
__int64 cuda_driver_e5650(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 cuda_driver_e8c60(_QWORD*);
__int64 cuda_driver_ea5c0(__int64 result);
__int64 cuda_driver_ea620(__int64, char);
__int64 cuda_driver_eb200(__int64, __int64, __int64, __int64, unsigned __int64);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 cuda_driver_unplaced_4_89f80(__int64*, __int64, __int128*, unsigned int,
                                     __int64);
__int64 cuda_driver_unplaced_5_d83a0(__int64*, __int64, __int64*, __int64,
                                     __int64, __int64, __int64, int);
__int64 cuda_driver_unplaced_5_d8640(_QWORD*, __int128*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nvidia_11a720(__int64);
__int64 nvidia_12cef0(__int64*, _QWORD*);
__int64 nvidia_12d000(__int64*, unsigned __int64, _QWORD*);
__int64 nvidia_1cb040(__int64, unsigned int, unsigned int, int, int, int);
__int64 nvidia_d6550(__int64*, __int64, __int64*, __int64, __int64, __int64,
                     __int64, __int64, _DWORD*, int);
__int64 nvidia_d6af0(__int64 result, __int64*, __int64);
__int64 nvidia_e96c0(__int64, __int64, _QWORD*);
__int64 nvidia_ed630(__int64, __int64, const char*, ...);
__int64 toolsEvaluateBlock(__int64, __int64, _BYTE*, unsigned __int64, _QWORD*);
__int64 tools_shared_readelf_225160(__int64, unsigned int, unsigned int,
                                    __int64, int);
__int64 zstd_decompress_223310(__int64 result, __int64);
bool CudaDriverRoutine_1a0620(_BOOL8 result);
bool CudaDriverRoutine_1a0fd0();
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_985b0(int);
bool CudaDriverRoutine_a2850(__int64);
unsigned __int8 CudaDriverRoutine_bbe70(__int64);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_d4800(__int64);
unsigned __int8 cuda_driver_predicates_9ae50(__int64);
const char* CudaDriverRoutine_12ec20(const char* result);
extern _DWORD CudaDriverData_1432df4;
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432198;
extern _UNKNOWN* CudaDriverData_14364f8;
extern _UNKNOWN* CudaDriverData_1440828;
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN CudaDriverData_14347c0;
extern _UNKNOWN CudaDriverData_143b9a0;
extern __int128 CudaDriverData_1116080;
extern __int16 CudaDriverData_1436018;
extern __int64 (*CudaDriverData_1423010)();
extern __int64 (*CudaDriverData_14232a0)();
extern __int64 (*CudaDriverData_1432df8)(_QWORD);
extern __int64 (*CudaDriverStub_222170_ptr[2])();
extern __int64 (*cuda_driver_109c80_ptr)();
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_14230e0;
extern __int64 CudaDriverData_1423360;
extern __int64 CudaDriverData_1423370;
extern __int64 CudaDriverData_14324d0;
extern __int64 CudaDriverData_1432618;
extern __int64 CudaDriverData_1432620;
extern __int64 CudaDriverData_1432628;
extern __int64 CudaDriverData_14348c0[];
extern __int64 CudaDriverData_143b998;
extern __int64 CudaDriverData_143bd88;
extern __int64 CudaDriverData_14403e8;
extern char CudaDriverData_1432650[256];
extern char CudaDriverData_1432df0;
extern char CudaDriverData_143b971;
extern char CudaDriverData_143b972;
extern int CudaDriverData_1432c60[];
extern int CudaDriverData_1432c64;
extern int CudaDriverData_1434ac0;
int (**cuda_driver_2226e0(int (**result)(_QWORD), __int64))(_QWORD);
int memcmp_plt(__int64, __int64, unsigned __int64);
int strcmp_plt(const char*, const char*);
long double cuda_driver_e4e00(__int64, char);
unsigned __int64 CudaDriverRoutine_a3190(__int64, unsigned int, unsigned int);
unsigned int* CudaDriverRoutine_b4720(unsigned int);
void CudaDriverRoutine_129750();
void CudaDriverRoutine_4730();
__int64 nvidia_26c0(__int64 a1);
__int64 nvidia_58ee0(__int64 a1, __int64* a2);
__int64 nvidia_5a580(__int64 a1, __int64 a2, unsigned int a3);
__int64 nvidia_6ce60(__int64 a1);
__int64 nvidia_70450(unsigned int a1, __int64 a2, __int64* a3, unsigned int a4);
__int64 nvidia_70640(unsigned int a1, unsigned int a2, unsigned int a3,
                     _QWORD* a4);
__int64 nvidia_70c70(unsigned int a1, __int64 a2, unsigned int a3);
__int64 nvidia_747e0(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4,
                     int a5);
__int64 nvidia_74b30(__int64 a1, __int64 a2);
__int64 nvidia_74c80(__int64 a1, __int64 a2);
__int64 nvidia_78ce0(char* a1);
__int64 nvidia_847c0(__int64 result);
__int64 nvidia_8cad0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_8eea0(__int64 result);
__int64 nvidia_91dc0(__int64 a1, __int64 a2);
__int64 nvidia_af8c0(__int64 a1, __int64* a2);
__int64 nvidia_d6ca0(_QWORD* a1, __int64 a2, int a3, _DWORD* a4);
__int64 nvidia_e9c60(__int64* a1, __int64 a2, int* a3, __int64* a4,
                     unsigned int a5, __int64 a6, __int64 a7, unsigned int a8,
                     char a9);
__int64 nvidia_1092a0(__int64** a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 nvidia_10e520(__int64* a1, __int64* a2);
void nvidia_124d80();
__int64 nvidia_1255b0(__int64 a1);
__int64 nvidia_127d40();
__int64 nvidia_12b0c0();
__int64 nvidia_12f540();
__int64 nvidia_19eee0(__int64 a1, __int64 a2, unsigned int a3, __int64* a4);
__int64 nvidia_1b5c60(__int64 a1);
__int64 nvidia_1b5d70(__int64 a1);
__int64 nvidia_1b5e00(__int64 a1);
__int64 nvidia_1b5fe0(__int64 a1);
__int64 nvidia_1c25c0(__int64 a1, unsigned __int8 a2, int a3);
__int64 nvidia_1c2670(__int64 a1, unsigned __int8 a2, unsigned int a3);
__int64 nvidia_1c45e0(__int64 a1, unsigned int a2, int a3);
__int64 nvidia_1c4ab0(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned __int64 a4, __int64 a5, unsigned int a6);
__int64 nvidia_1c5030(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, int* a6);
__int64 nvidia_1cabe0(__int64 a1, __int64 a2, unsigned __int64* a3);
__int64 nvidia_1cb9d0(__int64 a1, int a2);
__int64 nvidia_1cbaa0(__int64 a1, unsigned int a2, unsigned int a3, bool* a4);
__int64 nvidia_1cc4e0(__int64 a1);
__int64 nvidia_1de600(__int64* a1, __n128* a2, __int64 a3);
__int64 nvidia_1e21c0(__int64 a1);
__int64 nvidia_1f5430(__int64 a1);
__int64 nvidia_20e090(__int64 a1, _DWORD* a2);
__int64 nvidia_215c40(unsigned int a1, unsigned int a2, int a3);
__int64 nvidia_21f010(__int64 a1, unsigned int* a2);
__int64 nvidia_222dc0(__int64* a1, __int64 a2, void (*a3)(__int64, __int64),
                      char a4);
__int64 nvidia_23db70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5);
__int64 nvidia_240160(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
bool CudaDriverStub_d4800_alt1(__int64);
bool cuda_driver_predicates_9ae50_alt1(__int64);

__int64 nvidia_26c0(__int64 a1)
{
  __int64 result;
  char v3;
  int v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int* v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  bool v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int* v63;
  int* v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  bool v76;
  int v77;
  unsigned int v78;
  int v79;
  int v80;
  __int16 v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  int v85;
  int* v86;
  int v87;
  unsigned int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 vars0;
  __int64 _28;
  __int64 vars10;
  __int64 _38;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_11d680(a1);
  }
  v3 = nvidia_11a720(a1);
  if (CudaDriverStub_985a0(*(_QWORD*)a1)) {
    v4 = *(_DWORD*)(a1 + 32);
    if (v4 == 1 || v4 == 2 && *(_BYTE*)(a1 + 556) != 0) {
      v5 = *(_DWORD**)(a1 + 72);
      if (*(_DWORD*)(a1 + 552) == 0 && v5 == nullptr) {
        vars0 = v99;
        _28 = v100;
        vars10 = _38;
        result = ((__int64 (*)(__int64))CudaDriverStub_985a0)(*(_QWORD*)a1);
        v85 = 0;
        *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
        *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
        v86 = (int*)(a1 + 208);
        v87 = (unsigned __int16)*(_DWORD*)(a1 + 96);
        v88 = (unsigned __int8)*(_DWORD*)(a1 + 96);
        if (v88 <= 0x6F) {
          v89 = 9;
          switch ((unsigned __int8)*(_DWORD*)(a1 + 96)) {
          case 1u:
          case 8u:
          case 0x60u:
            goto LABEL_161;
          case 2u:
          case 9u:
          case 0x10u:
            goto LABEL_165;
          case 3u:
          case 0xAu:
          case 0x20u:
            v90 = *(_DWORD*)(a1 + 104);
            switch (v90) {
            case 1:
              v85 = 15;
              break;
            case 4:
              v85 = 1;
              break;
            case 2:
              v85 = 4;
              break;
            default:
              goto LABEL_169;
            }
            break;
          case 0x50u:
            goto LABEL_179;
          default:
            goto LABEL_187;
          }
          goto LABEL_186;
        }
        if (v88 == 112 || v88 == 144) {
        LABEL_165:
          v92 = *(_DWORD*)(a1 + 104);
          switch (v92) {
          case 1:
            v85 = 27;
            goto LABEL_186;
          case 4:
            v85 = 3;
            goto LABEL_186;
          case 2:
            v85 = 12;
            goto LABEL_186;
          default:
            break;
          }
        }
        else {
          if (v88 != 128) {
            goto LABEL_187;
          }
        LABEL_161:
          v91 = *(_DWORD*)(a1 + 104);
          switch (v91) {
          case 1:
            v85 = 29;
            goto LABEL_186;
          case 4:
            v85 = 8;
            goto LABEL_186;
          case 2:
            v85 = 24;
          LABEL_186:
            *v86 = v85;
          LABEL_187:
            v93 = (unsigned __int8)v87;
            if ((unsigned __int8)v87 <= 0x4Fu) {
              goto LABEL_188;
            }
            goto LABEL_170;
          default:
            break;
          }
        }
      LABEL_169:
        v85 = 0;
        v93 = (unsigned __int8)*(_DWORD*)(a1 + 96);
        if ((unsigned int)v93 <= 0x4F) {
        LABEL_188:
          if ((unsigned int)v93 > 0x20) {
            goto LABEL_195;
          }
          if (((1LL << v93) & 0xE) != 0) {
            v94 = 299520;
            goto LABEL_193;
          }
          if (((1LL << v93) & 0x700) != 0) {
            v94 = 224640;
            goto LABEL_193;
          }
          if (((1LL << v93) & 0x100010000LL) != 0) {
            v85 |= 0x7FF80u;
            goto LABEL_194;
          }
          goto LABEL_195;
        }
      LABEL_170:
        if (v93 <= 111) {
          if (v93 != 80) {
            v89 = v85;
            if (v93 != 96) {
              goto LABEL_195;
            }
          LABEL_179:
            v85 = v89 | 0x24900;
          LABEL_194:
            *v86 = v85;
            goto LABEL_195;
          }
        }
        else if (v93 != 112) {
          if (v93 == 128 || v93 == 144) {
            v94 = 74880;
          LABEL_193:
            v85 |= v94;
            goto LABEL_194;
          }
        LABEL_195:
          v95 = *(_DWORD*)(a1 + 104);
          switch (v95) {
          case 4:
            v41 = v87 == 3680;
            v96 = v85 | 0x58D00000;
            v97 = v85 | 0x54E00000;
            if (v41) {
              v96 = v97;
            }
            break;
          case 2:
            v96 = v85 | 0xD00000;
            break;
          case 1:
            v96 = v85 | 0x100000;
            break;
          default:
          LABEL_204:
            v98 = *(_QWORD*)(a1 + 40);
            *(_DWORD*)(a1 + 212) = v98;
            *(_DWORD*)(a1 + 216) = DWORDn(v98, sizeof(v98) / 4 - 1) & 0x1FFFF;
            LODWORD(v98) = *(int*)(a1 + 64) - 1;
            *(_DWORD*)(a1 + 220) = WORD1(v98);
            *(_DWORD*)(a1 + 224) = v98 & 0x1FFFF | 0xE3000000;
            return result;
          }
          *v86 = v96;
          goto LABEL_204;
        }
        v89 = v85;
        goto LABEL_179;
      }
      v16 = *(_QWORD*)a1;
      CudaDriverStub_985a0(*(_QWORD*)a1);
      v17 = 0;
      *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
      *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
      v18 = (int*)(a1 + 208);
      v19 = (unsigned __int16)*(_DWORD*)(a1 + 96);
      v20 = (unsigned __int8)*(_DWORD*)(a1 + 96);
      if (v20 <= 0x6F) {
        v21 = 9;
        switch ((unsigned __int8)*(_DWORD*)(a1 + 96)) {
        case 1u:
        case 8u:
        case 0x60u:
          goto LABEL_41;
        case 2u:
        case 9u:
        case 0x10u:
          goto LABEL_45;
        case 3u:
        case 0xAu:
        case 0x20u:
          v22 = *(_DWORD*)(a1 + 104);
          switch (v22) {
          case 1:
            v17 = 15;
            break;
          case 4:
            v17 = 1;
            break;
          case 2:
            v17 = 4;
            break;
          default:
            goto LABEL_49;
          }
          break;
        case 0x50u:
          goto LABEL_110;
        default:
          goto LABEL_118;
        }
        goto LABEL_117;
      }
      if (v20 == 112 || v20 == 144) {
      LABEL_45:
        v26 = *(_DWORD*)(a1 + 104);
        switch (v26) {
        case 1:
          v17 = 27;
          goto LABEL_117;
        case 4:
          v17 = 3;
          goto LABEL_117;
        case 2:
          v17 = 12;
          goto LABEL_117;
        default:
          break;
        }
      }
      else {
        if (v20 != 128) {
          goto LABEL_118;
        }
      LABEL_41:
        v25 = *(_DWORD*)(a1 + 104);
        switch (v25) {
        case 1:
          v17 = 29;
          goto LABEL_117;
        case 4:
          v17 = 8;
          goto LABEL_117;
        case 2:
          v17 = 24;
        LABEL_117:
          *v18 = v17;
        LABEL_118:
          v27 = (unsigned __int8)v19;
          if ((unsigned __int8)v19 <= 0x4Fu) {
            goto LABEL_119;
          }
          goto LABEL_50;
        default:
          break;
        }
      }
    LABEL_49:
      v17 = 0;
      v27 = (unsigned __int8)*(_DWORD*)(a1 + 96);
      if ((unsigned int)v27 <= 0x4F) {
      LABEL_119:
        if ((unsigned int)v27 > 0x20) {
          goto LABEL_126;
        }
        if (((1LL << v27) & 0xE) != 0) {
          v28 = 299520;
          goto LABEL_124;
        }
        if (((1LL << v27) & 0x700) != 0) {
          v28 = 224640;
          goto LABEL_124;
        }
        if (((1LL << v27) & 0x100010000LL) != 0) {
          v17 |= 0x7FF80u;
          goto LABEL_125;
        }
        goto LABEL_126;
      }
    LABEL_50:
      if (v27 <= 111) {
        if (v27 != 80) {
          v21 = v17;
          if (v27 != 96) {
            goto LABEL_126;
          }
        LABEL_110:
          v17 = v21 | 0x24900;
        LABEL_125:
          *v18 = v17;
          goto LABEL_126;
        }
      }
      else if (v27 != 112) {
        if (v27 == 128 || v27 == 144) {
          v28 = 74880;
        LABEL_124:
          v17 |= v28;
          goto LABEL_125;
        }
      LABEL_126:
        v59 = *(_DWORD*)(a1 + 104);
        if (v59 == 4) {
          if (v19 == 3680) {
            v61 = 1423966208;
          }
          else {
            v61 = 1490026496;
          }
        }
        else {
          if (v59 != 2) {
            if (v59 == 1) {
              v60 = v17 | 0x100000;
            LABEL_137:
              *v18 = v60;
            }
            if (*(_DWORD*)(a1 + 552) != 0) {
              v62 = *(_DWORD*)(a1 + 140);
              result = *(_QWORD*)(a1 + 56);
              v63 = (int*)(a1 + 144);
              v64 = (int*)(a1 + 148);
              v65 = v62;
              v66 = *(_DWORD*)(a1 + 52);
              if (v66 != 0) {
              LABEL_140:
                v67 = result & 0xFFFFFFE0 | *(_DWORD*)(a1 + 212) & 0x1F;
              LABEL_143:
                v68 = *v63;
                v69 = *v64;
                v70 = *(_DWORD*)(a1 + 216) & 0xFF1E0000 |
                      DWORDn(result, sizeof(result) / 4 - 1) & 0x1FFFF;
                if (v66 != 0) {
                  v70 |= 0x400000u;
                }
                *(_DWORD*)(a1 + 212) = v67;
                *(_DWORD*)(a1 + 216) = v70 | 0x1E000000;
                v71 = v65 + 0x1FFFF;
                v72 = *(unsigned __int16*)(a1 + 222) << 16;
                if (v66 != 0) {
                  v73 = *(_DWORD*)(a1 + 224);
                  v74 = *(_DWORD*)(a1 + 228);
                  v75 = (unsigned __int16)(v66 >> 5);
                  v76 = v68 != 0;
                  v77 = v68 - 1;
                  v78 = v66 >> 4;
                  v79 = v72 | v75;
                  if (!v76) {
                    v77 = 0;
                  }
                  v80 = v78 & 0x20000;
                  v76 = v69 != 0;
                  v81 = v69 - 1;
                  if (!v76) {
                    v81 = 0;
                  }
                  *(_DWORD*)(a1 + 220) = v79;
                  *(_DWORD*)(a1 + 224) = ((4 * v77) & 0x40000 | v71 & 0x1FFFF |
                                          v80 | v73 & 0x18780000) -
                                         478150656;
                  *(_DWORD*)(a1 + 228) = (unsigned __int16)v77 |
                                         ((v81 & 0x3FFF) << 16) |
                                         v74 & 0xC0000000;
                }
                else {
                  v82 = v62 - 1;
                  v83 = v72 | HIWORD(v82);
                  v84 = v71 & 0x10000 | (unsigned __int16)v82 |
                        *(_DWORD*)(a1 + 224) & 0x187E0000 | 0xE3000000;
                  *(_DWORD*)(a1 + 220) = v83;
                  *(_DWORD*)(a1 + 224) = v84;
                }
                return result;
              }
            }
            else {
              result = CudaDriverRoutine_8aaa0((__int64)v5, v16);
              v62 = v5[3];
              v63 = v5 + 4;
              v64 = v5 + 5;
              v65 = v5[28] / v5[27];
              v66 = *(_DWORD*)(a1 + 52);
              if (v66 != 0) {
                goto LABEL_140;
              }
            }
            v67 = result;
            goto LABEL_143;
          }
          v61 = 13631488;
        }
        v60 = v17 | v61;
        goto LABEL_137;
      }
      v21 = v17;
      goto LABEL_110;
    }
  }
  v6 = *(_QWORD*)(a1 + 72);
  v7 = *(_QWORD*)(v6 + 200);
  if (v7 != 0) {
    v8 = **(_QWORD**)(v7 + 64);
  }
  else {
    v8 = *(_QWORD*)(a1 + 72);
  }
  v9 = *(_DWORD*)(v6 + 128);
  v10 = *(_DWORD*)(a1 + 96);
  v11 = *(_QWORD*)a1;
  v12 = 0;
  *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
  *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
  v13 = 9;
  switch ((char)v10) {
  case 1:
  case 8:
  case 96:
  case -128:
  case -64:
  case -63:
  case -62:
  case -58:
  case -57:
  case -56:
    v15 = *(_DWORD*)(a1 + 104);
    switch (v15) {
    case 1:
      v13 = 29;
      break;
    case 4:
      v13 = 8;
      break;
    case 2:
      v13 = 24;
      break;
    default:
      goto LABEL_32;
    }
    goto LABEL_60;
  case 2:
  case 9:
  case 16:
  case 112:
  case -112:
  case -61:
  case -60:
  case -59:
  case -55:
  case -54:
  case -53:
    v14 = *(_DWORD*)(a1 + 104);
    switch (v14) {
    case 1:
      v13 = 27;
      break;
    case 4:
      v13 = 3;
      break;
    case 2:
      v13 = 12;
      break;
    default:
      goto LABEL_32;
    }
    goto LABEL_60;
  case 3:
  case 10:
  case 32:
  case -96:
    v23 = *(_DWORD*)(a1 + 104);
    switch (v23) {
    case 1:
      v13 = 15;
      goto LABEL_60;
    case 4:
      v13 = 1;
      goto LABEL_60;
    case 2:
      v13 = 4;
    LABEL_60:
      *(_DWORD*)(a1 + 208) = v13;
      v12 = v13;
    LABEL_61:
      v10 = (unsigned __int16)v10;
      v24 = 299520;
      if (v3 != 0) {
        goto LABEL_62;
      }
    LABEL_67:
      v12 |= v24;
      *(_DWORD*)(a1 + 208) = v12;
      goto LABEL_68;
    default:
      break;
    }
  LABEL_32:
    v12 = 0;
    v10 = (unsigned __int16)v10;
    v24 = 299520;
    if (v3 == 0) {
      goto LABEL_67;
    }
  LABEL_62:
    v24 = 524160;
    switch ((char)v10) {
    case 1:
    case 2:
    case 3:
      v24 = 299520;
      goto LABEL_67;
    case 8:
    case 9:
    case 10:
      v24 = 224640;
      goto LABEL_67;
    case 16:
    case 32:
      goto LABEL_67;
    case 80:
    case 96:
    case 112:
    case -64:
    case -63:
    case -62:
    case -61:
    case -60:
    case -59:
      v24 = 149760;
      goto LABEL_67;
    case -128:
    case -112:
    case -58:
    case -57:
    case -56:
    case -55:
    case -54:
    case -53:
      v24 = 74880;
      goto LABEL_67;
    default:
      break;
    }
  LABEL_68:
    v29 = *(_DWORD*)(a1 + 104);
    switch (v29) {
    case 4:
      if (v3 != 0 && v10 == 3680) {
        v31 = 1423966208;
      }
      else {
        v31 = 1490026496;
      }
      goto LABEL_77;
    case 2:
      v31 = 13631488;
    LABEL_77:
      v30 = v12 | v31;
      goto LABEL_78;
    case 1:
      v30 = v12 | 0x100000;
    LABEL_78:
      *(_DWORD*)(a1 + 208) = v30;
      break;
    default:
      break;
    }
    CudaDriverRoutine_8aaa0(v8, v11);
    v32 = *(_DWORD*)(a1 + 212);
    *(_DWORD*)(a1 + 212) =
        CudaDriverRoutine_8aaa0(v8, v11) & 0xFFFFFE00 | v32 & 0x1FF;
    CudaDriverRoutine_8aaa0(v8, v11);
    v33 = *(_DWORD*)(a1 + 216) & 0xE11E0000;
    result = CudaDriverRoutine_8aaa0(v8, v11);
    *(_DWORD*)(a1 + 216) =
        v33 | 0x1E600000 | DWORDn(result, sizeof(result) / 4 - 1) & 0x1FFFF;
    v34 = *(_DWORD*)(a1 + 220) & 0xFFFFFFF8 | *(_DWORD*)(v8 + 40) & 7;
    *(_DWORD*)(a1 + 220) = v34;
    v35 = v34 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v8 + 44) & 7));
    *(_DWORD*)(a1 + 220) = v35;
    v36 = v35 & 0xFFFFFE3F | ((*(_DWORD*)(v8 + 48) & 7) << 6);
    *(_DWORD*)(a1 + 220) = v36;
    v37 = *(_QWORD*)(v8 + 200);
    if (v37 != 0) {
      *(_DWORD*)(a1 + 220) =
          (v36 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v37 + 40) << 28)) -
          0x10000000;
    }
    v38 = *(_DWORD*)(a1 + 224) & 0xFFFE0000 |
          (*(_DWORD*)(v8 + 112) / *(int*)(v8 + 108) - 1) & 0x1FFFF;
    *(_DWORD*)(a1 + 224) = v38;
    v39 = *(_DWORD*)(v8 + 8);
    if (v39 > 3) {
      v40 = v39 - 5;
      v41 = v39 == 4;
      v42 = v38 & 0xF87FFFFF | 0x2000000;
      if (!v41) {
        v42 = v38;
      }
      v38 = v38 & 0xF87FFFFF | 0x2800000;
      if (v40 >= 3) {
        v38 = v42;
      }
      goto LABEL_99;
    }
    if (v39 != 1) {
      if (v39 != 2) {
        if (v39 == 3) {
          v43 = v38 & 0xF87FFFFF | 0x1000000;
          *(_DWORD*)(a1 + 224) = v43;
          v44 = v43 & 0xFFFBFFFF;
          v45 = *(_DWORD*)(v8 + 16);
          if (v45 != 0) {
            v46 = (4 * v45 + 524284) & 0x40000;
          }
          else {
            v46 = 0;
          }
          v47 = v46 | v44;
          *(_DWORD*)(a1 + 224) = v47;
          v48 = v47 & 0xFFFDFFFF;
          v49 = *(_DWORD*)(v8 + 20);
          if (v49 != 0) {
            v50 = (8 * v49 + 262136) & 0x20000;
          }
          else {
            v50 = 0;
          }
          v38 = v48 | v50;
        }
        goto LABEL_99;
      }
    LABEL_97:
      v51 = v38 & 0xF87FFFFF;
      v52 = v51 | 0x800000;
      v38 = v51 | 0x3800000;
      if (*(_QWORD*)(v8 + 200) != 0) {
        v38 = v52;
      }
      goto LABEL_99;
    }
    if (*(_BYTE*)(a1 + 528) != 0) {
      goto LABEL_97;
    }
    v38 &= 0xF87FFFFF;
  LABEL_99:
    *(_DWORD*)(a1 + 224) = v38 | 0xE0000000;
    v53 = *(_DWORD*)(v8 + 16);
    if (v53 != 0) {
      v54 = (unsigned __int16)(v53 - 1);
    }
    else {
      v54 = 0;
    }
    v55 = v54 | (*(unsigned __int16*)(a1 + 230) << 16);
    *(_DWORD*)(a1 + 228) = v55;
    v56 = v55 & 0xC000FFFF;
    v57 = *(_DWORD*)(v8 + 20);
    if (v57 != 0) {
      v58 = ((v57 << 16) + 1073676288) & 0x3FFF0000;
    }
    else {
      v58 = 0;
    }
    *(_DWORD*)(a1 + 228) = v58 | v56;
    if (*(_QWORD*)(v8 + 200) != 0) {
      *(_DWORD*)(a1 + 236) =
          *(_DWORD*)(a1 + 236) & 0xFFFFFF00 | (16 * (v9 & 0xF)) | v9 & 0xF;
    }
    return result;
  case 80:
    goto LABEL_60;
  default:
    goto LABEL_61;
  }
}

__int64 nvidia_58ee0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void* v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  _BYTE* v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v38;
  struct {
    _DWORD v39[2];
    __int64 v40;
    char gap16_[8];
    int v41;
    int v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    int v47;
    int v48;
    int v49;
  } v39_;

  v2 = *a2;
  v3 = a1 + 0x8000;
  v6 = *(_QWORD*)(*a2 + 8);
  *(_DWORD*)(a1 + 32) = *((_DWORD*)a2 + 4);
  *(_QWORD*)a1 = *a2;
  v7 = a2[1];
  *(_BYTE*)(a1 + 36) = 1;
  *(_QWORD*)(a1 + 33816) = v7;
  v8 = (__int64*)a2[3];
  *(_QWORD*)(a1 + 33824) = v8;
  if ((*(_BYTE*)(*(_QWORD*)(v6 + 64) + 16976LL) & 0x10) != 0) {
    v9 = *((_DWORD*)a2 + 8);
  }
  else {
    v9 = 0;
  }
  *(_DWORD*)(a1 + 40) = v9;
  *(_BYTE*)(a1 + 34233) = *((_BYTE*)a2 + 40);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(v7 + 24);
  v10 = *v8;
  while (v10 != 0) {
    v11 = v10;
    v10 = *(_QWORD*)(v10 + 33832);
    if (v10 == 0) {
      *(_QWORD*)(a1 + 33840) = v11;
      v12 = *(_QWORD*)(v11 + 33832);
      *(_QWORD*)(a1 + 33832) = v12;
      if (v12 != 0) {
        *(_QWORD*)(v12 + 33840) = a1;
      }
      *(_QWORD*)(v11 + 33832) = a1;
      goto LABEL_12;
    }
  }
  *(_QWORD*)(a1 + 33832) = *v8;
  *v8 = a1;
  v13 = **(_QWORD**)(a1 + 33824);
  v14 = *(_QWORD*)(v13 + 33832);
  if (v14 != 0) {
    *(_QWORD*)(v14 + 33840) = v13;
  }
LABEL_12:
  (*(void (**)(__int64))(*(_QWORD*)(v6 + 64) + 20824LL))(a1);
  *(_DWORD*)(v3 + 1400) = *((_DWORD*)a2 + 9);
  v15 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    *(_BYTE*)(v3 + 1458) = 1;
  }
  if (CudaDriverRoutine_98110(v6)) {
    CudaDriverStub_57450();
  }
  v17 = (*(__int64 (**)(__int64))(v3 + 1128))(a1);
  if (CudaDriverRoutine_98110(v6)) {
    CudaDriverStub_57450();
  }
  if (v17 == 0) {
    if (*(_QWORD*)(v3 + 1000) == 0) {
      v24 = *(_QWORD*)(v2 + 8);
      v25 = *(_QWORD*)(v24 + 1912);
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v15) >= 2u &&
          *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v15) == 0 &&
          *(_DWORD*)(*(_QWORD*)(v3 + 1048) + 36LL) == 11) {
        v25 = *(_QWORD*)(v24 + 1928);
      }
      v20 = CudaDriverRoutine_203600(v25, (_QWORD*)(v3 + 1000));
      if (v20 != 0) {
      LABEL_38:
        v17 = v20;
        (*(void (**)(__int64))(v3 + 1136))(a1);
        v26 = *(_QWORD*)(v3 + 1000);
        if (v26 != 0) {
          CudaDriverRoutine_203f30(v26);
        }
        v27 = *(_QWORD*)(v3 + 1024);
        if (v27 != 0) {
          CudaDriverRoutine_203f30(v27);
        }
        return v17;
      }
      v38 = *(_DWORD*)(a1 + 32);
      *(_BYTE*)(v3 + 1016) = 0;
      if (v38 == 11) {
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 1000) + 56LL) + 24LL) = a1;
      }
    }
    v18 = *(_QWORD*)(v2 + 8);
    v19 = *(_QWORD*)(v18 + 1920);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v15) >= 2u &&
        *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v15) == 0 &&
        *(_DWORD*)(*(_QWORD*)(v3 + 1048) + 36LL) == 11) {
      v19 = *(_QWORD*)(v18 + 1928);
    }
    v20 = CudaDriverRoutine_203600(v19, (_QWORD*)(a1 + 33792));
    if (v20 == 0) {
      *(_QWORD*)(v3 + 1032) = 0;
      v21 = *(unsigned int*)(v2 + 34312);
      *(_DWORD*)(a1 + 24) = v21;
      *(_QWORD*)(v2 + 48 + 8 * v21) = a1;
      ++*(_DWORD*)(v2 + 34312);
      if ((*((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)v15) & 1) != 0 &&
          *(_BYTE*)(a1 + 36) != 0) {
        v22 = (_BYTE*)(*(_QWORD*)a1 + 132792LL);
        v23 = *(_DWORD*)(*(_QWORD*)(v3 + 1056) + 20LL) == 1;
        *(_BYTE*)(a1 + 37) = v23;
        *v22 &= v23;
        if (*(_BYTE*)(a1 + 37) != 0) {
          goto LABEL_45;
        }
      }
      else {
        v28 = *(_QWORD*)a1;
        *(_BYTE*)(a1 + 37) = 0;
        *(_BYTE*)(v28 + 132792) = 0;
        if (*(_BYTE*)(a1 + 37) != 0) {
          goto LABEL_45;
        }
      }
      if (*(_DWORD*)(a1 + 24) != 0) {
        v29 = *(_QWORD*)(v2 + 48) + 8LL;
        goto LABEL_49;
      }
    LABEL_45:
      v29 = a1 + 8;
      if ((unsigned int)(*(int*)(*(_QWORD*)(v3 + 1048) + 36LL) - 14) <
          0xFFFFFFFC) {
        v30 = 41;
      }
      else {
        v30 = 42;
      }
      CudaDriverRoutine_107f40((_QWORD*)(a1 + 8), v30, 0);
    LABEL_49:
      v31 = *(_QWORD*)a1;
      *(_QWORD*)(v3 + 1008) = v29;
      *(_QWORD*)(a1 + 33752) = 0;
      *(_QWORD*)(a1 + 33760) = 0;
      *(_QWORD*)(a1 + 33744) = 0;
      *(_QWORD*)(v3 + 968) = v31;
      if (*(int*)((char*)((int*)0x24LL) + (_QWORD)CudaDriverData_1432198) !=
          0) {
        v32 = *(_DWORD*)(a1 + 32);
        v39_.v40 = v6;
        v39_.v39[0] = 80;
        v39_.v41 = *(_DWORD*)(a1 + 24);
        v39_.v42 = v32;
        v33 = *(_QWORD*)(a1 + 48);
        v39_.v43 = *(unsigned int*)(v33 + 16);
        v34 = CudaDriverStub_1db800(*(_QWORD*)(v33 + 24));
        v35 = *(_QWORD*)(a1 + 48);
        v39_.v46 = v34;
        v39_.v39[1] = *(_DWORD*)(v35 + 8);
        v39_.v44 = a1 + 76;
        v39_.v45 = 5;
        v36 = *(_DWORD*)(a1 + 96);
        v39_.v47 = *(_DWORD*)(*(_QWORD*)(v6 + 64) + 3392LL);
        v39_.v48 = *(_DWORD*)(*(_QWORD*)(v3 + 1056) + 16LL);
        v39_.v49 = v36;
        cuda_driver_20b420(0xDu, 9u, (__int64)v39_.v39);
      }
      return 0;
    }
    goto LABEL_38;
  }
  return v17;
}

__int64 nvidia_5a580(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  int v8;
  int v9;

  v6 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v6 = *(_QWORD*)(*(_QWORD*)a1 + 48LL);
  }
  CudaDriverStub_107f90(v6 + 8, 0, 0);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &
          *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) ==
              0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v8 = *(_DWORD*)(a1 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v8 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        v9 = *(_DWORD*)(a1 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v9 != 0);
    }
  }
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 33824) + 128LL))(
      *(_QWORD*)(a1 + 33824), a2, a3);
  if (*(_BYTE*)(a1 + 37) != 0) {
    return CudaDriverStub_108070(a1 + 8);
  }
  else {
    return CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)a1 + 48LL) + 8LL);
  }
}

__int64 nvidia_6ce60(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  _QWORD** v9;
  __int64 i;
  __int64 v11;
  _QWORD* v12;

  if (a1 == 0) {
    return 29;
  }
  v2 = a1 + 248;
  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    v4 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32306416LL) + 176LL))(
        *(_QWORD*)(a1 + 8), v1, a1 + 536, *(unsigned int*)(a1 + 524));
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32306416LL);
    if (*(_DWORD*)v5 != 1) {
      v4 = (*(__int64 (**)(__int64, __int64, __int64))(v5 + 160))(a1, v2,
                                                                  a1 + 256);
    }
    v6 = v4;
    v7 = *(_QWORD*)(a1 + 8);
    if (a1 != *(_QWORD*)(v7 + 24)) {
      goto LABEL_7;
    }
  }
  else {
    v6 = 0;
    v7 = *(_QWORD*)(a1 + 8);
    if (a1 != *(_QWORD*)(v7 + 24)) {
      goto LABEL_7;
    }
  }
  *(_QWORD*)(v7 + 24) = 0;
LABEL_7:
  CudaDriverRoutine_222a80(*(_QWORD*)(a1 + 24),
                           (__int64)CudaDriverRoutine_76a90, 0);
  *(_QWORD*)(a1 + 24) = 0;
  CudaDriverRoutine_2231b0((__int64*)(a1 + 136),
                           (__int64)CudaDriverRoutine_76b10, 0);
  v8 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 136) = 0;
  if (v8 != 0) {
    CudaDriverRoutine_222a80(v8, (__int64)CudaDriverRoutine_76b80, 0);
    *(_QWORD*)(a1 + 152) = 0;
  }
  v9 = (_QWORD**)CudaDriverRoutine_2229a0(*(_QWORD*)(a1 + 120));
  for (i = CudaDriverRoutine_4d0d0((__int64)v9); i != 0;
       i = CudaDriverRoutine_4d0d0(v11)) {
    v11 = i;
    v12 = (_QWORD*)CudaDriverRoutine_222da0(i);
    CudaDriverRoutine_1a0e10(v12);
  }
  CudaDriverRoutine_223080(v9, nullptr, 0);
  CudaDriverRoutine_1a0930(a1);
  return v6;
}

__int64 nvidia_70450(unsigned int a1, __int64 a2, __int64* a3, unsigned int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  struct {
    __int64 v13;
    char gap16_[28];
    _BYTE v14[4];
  } v13_;

  if (a3 == nullptr) {
    return 4;
  }
  result =
      CudaDriverRoutine_6cac0(0x1Fu, a1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
  if ((_DWORD)result != 0) {
    return result;
  }
  v9 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
  v10 = zstd_decompress_223310(CudaDriverData_14324d0, a2);
  if (v10 != 0) {
    v11 = v10;
    result = CudaDriverRoutine_19be40(v10, v13_.v14);
    if ((_DWORD)result != 0) {
      return result;
    }
    if ((v13_.v14[0] & 1) != 0) {
      return 18;
    }
    v12 = a2 - *(_QWORD*)(v11 + 48);
    if (v12 < *(_QWORD*)(v11 + 56)) {
      result = (*(__int64 (**)(__int64, __int64, __int64))(v9 + 23376048))(
          v12, (__int64)&v13_.v13, a4);
      if ((_DWORD)result != 0) {
        return result;
      }
      a2 = *(_QWORD*)(v11 + 48) + v13_.v13;
    }
  }
  *a3 = a2;
  return 0;
}

__int64 nvidia_70640(unsigned int a1, unsigned int a2, unsigned int a3,
                     _QWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;

  result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    if (a4 != nullptr) {
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        v9 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
        result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            v9 + 23375528))(v9, a2, a3, (__int64)&v10);
        if ((_DWORD)result == 0) {
          *a4 = v10;
        }
      }
    }
    else {
      return 4;
    }
  }
  return result;
}

__int64 nvidia_70c70(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  __int64 v7;

  result = 4;
  if (a2 != 0 && a3 != 0) {
    result =
        CudaDriverRoutine_6cac0(0xFu, a1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      v7 = *((_QWORD*)CudaDriverData_1422118 + a1 + 35);
      if ((*(unsigned int (**)(__int64, __int64, __int64))(v7 + 20560))(
              v7, a2, a3) != 0) {
        return 2;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_747e0(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4,
                     int a5)
{
  __int64 v5;
  int v7;

  v7 = a5;
  v5 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
      v5 + 23375880))(v5, a2, a3, 4LL * a4, (__int64)&v7, 4);
}

__int64 nvidia_74b30(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 result;
  _BYTE v7[4];

  v7[0] = 0;
  if (a1 == 0) {
    return 10;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 10;
  }
  if (*(_DWORD*)(v2 + 1088) != *(_DWORD*)a2) {
    return 0;
  }
  if (!CudaDriverRoutine_1a0620(a1)) {
    return 0;
  }
  v5 = *(unsigned int*)(a1 + 260);
  if ((_DWORD)v5 == 0) {
    return 0;
  }
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)(a1 + 8) + 23376368LL))(
      *(_QWORD*)(a1 + 8), v5, *(unsigned int*)(a1 + 240), (__int64)v7);
  if ((_DWORD)result != 0) {
    *(_BYTE*)(a2 + 5) = 0;
  }
  else {
    result = 0;
    if (v7[0] == 1) {
      *(_WORD*)(a2 + 4) = 1;
    }
    else {
      *(_BYTE*)(a2 + 4) = 1;
    }
  }
  return result;
}

__int64 nvidia_74c80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 result;

  if (a1 == 0) {
    return 10;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 10;
  }
  if (*(_DWORD*)(v2 + 1088) != *(_DWORD*)a2) {
    return 0;
  }
  if (!CudaDriverRoutine_1a0620(a1)) {
    return 0;
  }
  v5 = *(unsigned int*)(a1 + 260);
  if ((_DWORD)v5 == 0) {
    return 0;
  }
  result = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)(a1 + 8) + 23376376LL))(*(_QWORD*)(a1 + 8), v5,
                                        *(unsigned int*)(a1 + 240));
  if ((_DWORD)result != 0) {
    *(_BYTE*)(a2 + 6) = 0;
  }
  return result;
}

__int64 nvidia_78ce0(char* a1)
{
  int v2;
  unsigned int v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  char* v16;
  unsigned int* v17;
  int v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD** v27;
  __int64 v28;
  __int64 i;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64* v48;
  _QWORD* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64* v66;
  __int64* v67;
  int v68;
  __int64 v69;
  __int64 v70;
  char v71;
  int v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  _DWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  int v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  _QWORD* v102;
  int v103;
  __int64 v104;
  __int64 v105;
  _QWORD** v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  int v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  char v126;
  __int64 v127;
  _QWORD** v128;
  __int64 v129;
  __int64 v130;
  __int64 (**v131)(__int64, __int64, __int64, __int64, __int64, __int64,
                   __int64);
  __int64 v132;
  __int64 (**v133)(__int64, __int64, __int64, __int64, __int64);
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  unsigned int* v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  _QWORD* v144;
  struct {
    __int64 v145;
    char gap160_[4];
    int v146;
  } v145_;
  struct {
    __int64 v147;
    int v148;
    int v149;
  } v147_;
  struct {
    char v150[4];
    int v151;
  } v150_;
  struct {
    int v152;
    char v153[4];
  } v152_;
  __int64 v154;
  __int64 v155;
  struct {
    __int64 v156;
    char gap224_[4];
    _DWORD v157[3];
  } v156_;

  v2 = CudaDriverRoutine_7a690(&CudaDriverData_1432628);
  if (v2 != 0) {
    goto LABEL_2;
  }
  v4 = CudaDriverRoutine_222ce0();
  CudaDriverData_1432618 = (__int64)v4;
  if (v4 == nullptr) {
    LODWORD(v147_.v147) = 0;
    v2 = 1;
    goto LABEL_11;
  }
  v5 = (__int64)v4;
  if ((unsigned int)CudaDriverRoutine_223120(&CudaDriverData_1432620) != 0) {
    goto LABEL_7;
  }
  v7 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    goto LABEL_187;
  }
  v8 = 0;
  v9 = CudaDriverData_1432628;
  v10 = (__int64*)CudaDriverData_1423000;
  v144 = (_QWORD*)CudaDriverData_1432628;
LABEL_19:
  v11 = *v10;
  if (v11 == 0 || (v12 = *(_QWORD*)(v11 + 8 * v8)) == 0) {
    v2 = 5;
    goto LABEL_2;
  }
  v13 = CudaDriverRoutine_12e510(1, 112);
  if (v13 == 0) {
  LABEL_193:
    v2 = 37;
    goto LABEL_2;
  }
  v14 = v13;
  *(_DWORD*)(v13 + 48) = v8;
  v15 = (_QWORD*)v9;
  v16 = (char*)&v7[v8];
  v17 = (unsigned int*)(v12 + 23372880);
  *(_DWORD*)(v14 + 52) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3176LL);
  *(_DWORD*)(v14 + 56) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3180LL);
  *(_DWORD*)(v14 + 60) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3732LL);
  *(_DWORD*)(v14 + 64) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3756LL);
  *(_DWORD*)(v14 + 68) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3924LL);
  *(_DWORD*)(v14 + 88) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 4192LL);
  *(_DWORD*)(v14 + 80) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3152LL);
  *(_DWORD*)(v14 + 84) = *(_DWORD*)(*((_QWORD*)v16 + 35) + 3156LL);
  *(_DWORD*)(v14 + 92) = *(_DWORD*)v12;
  *(_DWORD*)(v14 + 72) = *(_DWORD*)(v12 + 23372896);
  *(_DWORD*)(v14 + 76) = *(_DWORD*)(v12 + 23372900);
  *(_DWORD*)(v14 + 96) = *(_DWORD*)(v12 + 23372904);
  *(_DWORD*)(v14 + 100) = *(_DWORD*)(v12 + 23372908);
  v18 = CudaDriverRoutine_7a740(v15, &v145_.v145,
                                (const char*)(*((_QWORD*)v16 + 35) + 2054LL));
  if (v18 == 0) {
    *(_QWORD*)(v14 + 40) = v145_.v145;
    if ((*(unsigned int (**)(__int64, __int64, __int64))(*((_QWORD*)v16 + 35) +
                                                         20560LL))(
            *((_QWORD*)v16 + 35), (__int64)CudaDriverData_1432650, 256) != 0) {
    LABEL_192:
      CudaDriverRoutine_12e340(v14);
      v2 = 1;
      goto LABEL_2;
    }
    v9 = (__int64)v144;
    v18 = CudaDriverRoutine_7a740(v144, &v145_.v145, CudaDriverData_1432650);
    if (v18 == 0) {
      *(_QWORD*)(v14 + 24) = v145_.v145;
      v18 = CudaDriverRoutine_7a740(v144, &v145_.v145,
                                    (const char*)(v7[v8 + 35] + 6LL));
      if (v18 == 0) {
        *(_QWORD*)(v14 + 32) = v145_.v145;
        if ((unsigned int)CudaDriverRoutine_222d10(v5, v14) != 0) {
          goto LABEL_192;
        }
        if (*(_DWORD*)v12 == 5) {
          goto LABEL_28;
        }
        v19 = *(_QWORD*)(v12 + 24);
        v20 = (_QWORD*)CudaDriverData_1423000;
        if (v19 != 0) {
          v21 = *(_QWORD*)(v19 + 112);
          if (v21 != 0) {
            v22 = *(_QWORD*)(v19 + 568);
            if (v22 != 0) {
              v23 = *((_QWORD*)v17 + 301);
              if (v23 != 0 && *(_DWORD*)(v7[v8 + 35] + 16860LL) == 0) {
                CudaDriverRoutine_19e6f0(v21, v22, v23 * *v17, 1);
              }
            }
          }
        }
        v24 = CudaDriverRoutine_2221c0((__int64)CudaDriverStub_222170_ptr[0],
                                       (__int64)CudaDriverData_1423010, 0x10u);
        *(_QWORD*)v14 = v24;
        if (v24 == nullptr) {
          goto LABEL_7;
        }
        v25 = (__int64)v24;
        v143 = v8;
        v26 = *(_QWORD*)(*v20 + 8 * v8);
        v27 = (_QWORD**)CudaDriverRoutine_2229a0(*(_QWORD*)(v26 + 16));
        v28 = CudaDriverRoutine_4d0d0((__int64)v27);
        if (v28 != 0) {
          for (i = v28; i != 0; i = CudaDriverRoutine_4d0d0(i)) {
            v30 = CudaDriverRoutine_222da0(i);
            if (*(_DWORD*)(v30 + 72) != 0) {
              v31 = v30;
              do {
                v32 = (*(__int64 (**)(__int64, __int64, __int64))(
                    v26 + 23376328))(v26, v31, (__int64)&v147_.v147);
                if (v32 != 0) {
                  v2 = v32;
                  CudaDriverRoutine_223080(v27, nullptr, 0);
                  goto LABEL_2;
                }
                v31 = v147_.v147;
              } while (*(_DWORD*)(v147_.v147 + 72) != 0);
            }
          }
        }
        CudaDriverRoutine_223080(v27, nullptr, 0);
        v33 = CudaDriverRoutine_222520(*(_QWORD*)(v26 + 16));
        if (v33 != 0) {
          v34 = v33;
          while (1) {
            v35 = CudaDriverRoutine_222630(v34);
            if (v35 == 0) {
              goto LABEL_196;
            }
            v36 = *(_QWORD*)(v35 + 16);
            v37 = (__int64*)v35;
            if (v36 != 0) {
              v38 = *(_QWORD*)(v36 + 8);
              v39 = CudaDriverRoutine_811a0(v38, &v156_.v156,
                                            (unsigned __int64*)&v155);
              if (v39 != 0 ||
                  (v39 = (*(__int64 (**)(__int64, __int64, __int64))(
                       v26 + 23376168))(v26, *v37, (__int64)&v154)) != 0) {
                v2 = v39;
                goto LABEL_2;
              }
              v40 = CudaDriverRoutine_12e510(1, 152);
              if (v40 == 0) {
                v2 = 37;
                goto LABEL_2;
              }
              v41 = v40;
              *(_QWORD*)(v40 + 16) = *v37;
              *(_QWORD*)(v40 + 24) =
                  **(_QWORD**)(*(_QWORD*)(v37[1] + 72) + 16LL);
              *(_QWORD*)(v40 + 32) = *(_QWORD*)(v37[2] + 8);
              *(_QWORD*)(v40 + 40) = *(_QWORD*)(v37[2] + 48);
              *(_QWORD*)(v40 + 48) = **(_QWORD**)(v37[2] + 72);
              *(_DWORD*)(v40 + 88) = *((_DWORD*)v37 + 6);
              *(_DWORD*)(v40 + 92) = *((_DWORD*)v37 + 7);
              *(_DWORD*)(v40 + 96) = *((_DWORD*)v37 + 8);
              *(_DWORD*)(v40 + 100) = *((_DWORD*)v37 + 9);
              *(_DWORD*)(v40 + 104) = *((_DWORD*)v37 + 10);
              *(_DWORD*)(v40 + 108) = *((_DWORD*)v37 + 11);
              v42 = *(_BYTE*)(*(_QWORD*)(v37[2] + 72) + 88LL) != 0 ? 1 : 2;
              *(_DWORD*)(v40 + 72) = v42;
              *(_DWORD*)(v40 + 76) = *((_DWORD*)v37 + 18);
              *(_QWORD*)(v40 + 64) = v156_.v156;
              *(_DWORD*)(v40 + 112) = *(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v37[1] + 72) + 16LL) +
                                    84LL);
              *(_DWORD*)(v40 + 116) =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v37[1] + 72) + 16LL) + 32LL);
              v43 = v155;
              *(_QWORD*)v40 = 0;
              *(_QWORD*)(v40 + 8) = v43;
              *(_QWORD*)(v40 + 56) = v37[8];
              *(_DWORD*)(v40 + 80) = v154;
              *(_DWORD*)(v40 + 84) = *(_DWORD*)(v38 + 392);
              if ((unsigned int)CudaDriverRoutine_2222a0(v25, *v37, v40) != 0) {
                break;
              }
            }
            v34 = CudaDriverRoutine_222580(*(_QWORD*)(v26 + 16), v34);
            if (v34 == 0) {
              goto LABEL_58;
            }
          }
          CudaDriverRoutine_12e340(v41);
        LABEL_196:
          v2 = 1;
          goto LABEL_2;
        }
      LABEL_58:
        v44 = CudaDriverRoutine_222ce0();
        *(_QWORD*)(v14 + 8) = v44;
        if (v44 == nullptr) {
          goto LABEL_196;
        }
        v145_.v146 = 0;
        v45 = (__int64*)CudaDriverData_1423000;
        v46 = v143;
        if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8 * v143) +
                       23372880LL) == 0) {
          goto LABEL_161;
        }
        v142 = 0;
        v130 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8 * v143);
      LABEL_61:
        v47 = CudaDriverRoutine_12e510(1, 56);
        if (v47 == 0) {
          goto LABEL_193;
        }
        v48 = (__int64*)v47;
        v49 = CudaDriverRoutine_2221c0((__int64)CudaDriverStub_222170_ptr[0],
                                       (__int64)CudaDriverData_1423010, 0x10u);
        *v48 = (__int64)v49;
        if (v49 == nullptr) {
          v2 = 1;
          goto LABEL_231;
        }
        v147_.v149 = 0;
        *((_DWORD*)v48 + 2) = v142;
        v137 = *(_QWORD*)(*v45 + 8 * v46);
        v50 = *(unsigned int*)(v137 + 23372884);
        if ((_DWORD)v50 == 0) {
          goto LABEL_159;
        }
        v51 = 0;
        v136 = v48;
        v132 = 91280 * v142;
        v52 = v137 + 91280 * v142 + 1240;
      LABEL_66:
        v53 = v52 + 1424 * v51;
        if (*(_DWORD*)v53 == 0) {
          goto LABEL_65;
        }
        v54 = (__int64*)cuda_driver_2226e0((int (**)(_QWORD))*v48,
                                           *(unsigned int*)(v53 + 24));
        if (v54 != nullptr) {
          goto LABEL_78;
        }
        v55 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            v137 + 23375528))(v137, v142, (unsigned int)v51,
                              (__int64)&v147_.v147);
        if (v55 != 0) {
          v2 = v55;
          goto LABEL_227;
        }
        v56 = CudaDriverRoutine_12e510(1, 88);
        if (v56 != 0) {
          v57 = v147_.v147;
          v54 = (__int64*)v56;
          *(_QWORD*)(v56 + 32) = *(_QWORD*)(v53 + 8);
          v58 = v147_.v148;
          *(_QWORD*)(v56 + 40) = v57;
          *(_DWORD*)(v56 + 48) = v58;
          *(_DWORD*)(v56 + 16) = *(_DWORD*)(v137 + 23372904);
          *(_DWORD*)(v56 + 20) = *(_DWORD*)(v137 + 23372908);
          if (*(_DWORD*)(v53 + 28) == 0 ||
              (cuda_driver_773f0(**(_QWORD**)(v137 + 24)) & 4) != 0) {
            *v54 = 0;
            v54[1] = 0;
            v45 = (__int64*)CudaDriverData_1423000;
          }
          else {
            v59 = CudaDriverRoutine_12e510(1, *(unsigned int*)(v53 + 28));
            *v54 = v59;
            v45 = (__int64*)CudaDriverData_1423000;
            if (v59 == 0 || (v54[1] = *(unsigned int*)(v53 + 28),
                             (*(void (**)(__int64, __int64, __int64, __int64,
                                          __int64, __int64))(v137 + 23375656))(
                                 v137, v142, (unsigned int)v51, 0, v59,
                                 *(unsigned int*)(v53 + 28)),
                             *v54 == 0)) {
              v2 = 37;
              v128 = (_QWORD**)v54[3];
              if (v128 == nullptr) {
                goto LABEL_226;
              }
            LABEL_223:
              if ((unsigned int)CudaDriverRoutine_223080(
                      v128, (void (*)(_QWORD, __int64))CudaDriverRoutine_7a190,
                      (__int64)&v147_.v149) != 0) {
                v147_.v149 = 1;
              }
              v54[3] = 0;
              goto LABEL_226;
            }
          }
          v60 = CudaDriverRoutine_222ce0();
          v54[3] = (__int64)v60;
          if (v60 == nullptr ||
              (unsigned int)CudaDriverRoutine_2222a0(
                  *v48, *(unsigned int*)(v53 + 24), (__int64)v54) != 0) {
          LABEL_198:
            v2 = 1;
            v128 = (_QWORD**)v54[3];
            if (v128 != nullptr) {
              goto LABEL_223;
            }
          LABEL_226:
            CudaDriverRoutine_12e340(*v54);
            CudaDriverRoutine_12e340((__int64)v54);
            goto LABEL_227;
          }
        LABEL_78:
          v61 = *v45;
          v150_.v151 = 0;
          v150_.v150[0] = 0;
          v62 = *(_QWORD*)(v61 + 8 * v46);
          v63 = v62 + 91280 * v142 + 1096 + 1424 * v51;
          v65 = *(_DWORD*)(v63 + 144);
          v64 = v63 + 144;
          if (v65 == 0) {
            v48 = v136;
            v2 = 4;
            v128 = (_QWORD**)v54[3];
            if (v128 != nullptr) {
              goto LABEL_223;
            }
            goto LABEL_226;
          }
          v139 = v54;
          v66 = (__int64*)cuda_driver_2226e0(*(int (***)(_QWORD))v14,
                                             *(_QWORD*)(v64 + 8));
          if (v66 == nullptr) {
            v2 = 21;
            goto LABEL_211;
          }
          v67 = v66;
          v68 = CudaDriverRoutine_745a0(v143, v142, (unsigned int)v51, &v155,
                                        v150_.v150);
          if (v68 != 0) {
            v2 = v68;
            goto LABEL_211;
          }
          v69 = CudaDriverRoutine_12e510(1, 120);
          if (v69 == 0) {
            v2 = 37;
          LABEL_211:
            v48 = v136;
            v54 = v139;
            v128 = (_QWORD**)v139[3];
            if (v128 != nullptr) {
              goto LABEL_223;
            }
            goto LABEL_226;
          }
          *(_DWORD*)(v69 + 64) = v51;
          *(_DWORD*)(v69 + 68) = *(_DWORD*)(v64 + 32);
          *(_DWORD*)(v69 + 72) = *(_DWORD*)(v64 + 36);
          if (v51 > 0x3F) {
            v71 = 64 - v51;
            if ((unsigned int)v51 > 0x40) {
              v71 = 0;
            }
            v70 = *(_QWORD*)(v62 + 91280 * v142 + 1184) >> v51 << v71;
          }
          else {
            v70 = *(_QWORD*)(v62 + 91280 * v142 + 1176) >> v51;
          }
          *(_DWORD*)(v69 + 76) = v70 & 1;
          *(_DWORD*)(v69 + 8) = *(int*)(v64 + 520) - *(int*)(v64 + 536);
          *(_DWORD*)(v69 + 12) = *(_DWORD*)(v64 + 536);
          v72 = (unsigned __int8)v150_.v150[0];
          *(_DWORD*)(v69 + 80) = (unsigned __int8)v150_.v150[0];
          if (v72 == 1) {
            *(_QWORD*)(v69 + 56) = v155;
          }
          v141 = v69;
          v73 = *(unsigned int*)(v62 + 23372904);
          if ((_DWORD)v73 != 0) {
            *(_QWORD*)(v69 + 32) = 4 * v73;
            v74 = CudaDriverRoutine_12e510(1, 4 * v73);
            *(_QWORD*)(v141 + 24) = v74;
            if (v74 == 0) {
              goto LABEL_197;
            }
            v75 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                  __int64))(v62 + 23375704))(
                v62, (unsigned int)v142, (unsigned int)v51, 0, v74,
                *(unsigned int*)(v141 + 32));
            if (v75 != 0) {
              goto LABEL_200;
            }
          }
          v76 = *(unsigned int*)(v62 + 23372908);
          if ((_DWORD)v76 != 0) {
            *(_QWORD*)(v141 + 48) = 4 * v76;
            v77 = CudaDriverRoutine_12e510(1, 4 * v76);
            *(_QWORD*)(v141 + 40) = v77;
            if (v77 == 0) {
              goto LABEL_197;
            }
            v75 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
                v62 + 23375720))(v62, (unsigned int)v142, (unsigned int)v51,
                                 *(unsigned int*)(v62 + 23372908), v77);
            if (v75 != 0) {
            LABEL_200:
              v54 = v139;
              v2 = v75;
              goto LABEL_201;
            }
          }
          if (*v67 == 0 && v67[1] != 0) {
            v78 = CudaDriverRoutine_12e510(1, v67[1]);
            *v67 = v78;
            if (v78 == 0) {
            LABEL_197:
              v54 = v139;
              v2 = 37;
            LABEL_201:
              v48 = v136;
              if (*(_QWORD*)v141 != 0) {
                if ((unsigned int)CudaDriverRoutine_223080(
                        *(_QWORD***)v141,
                        (void (*)(_QWORD, __int64))CudaDriverRoutine_7a100,
                        (__int64)&v150_.v151) != 0) {
                  v150_.v151 = 1;
                }
                v129 = v141;
                *(_QWORD*)v141 = 0;
              }
              else {
                v129 = v141;
              }
            LABEL_222:
              CudaDriverRoutine_12e340(*(_QWORD*)(v129 + 24));
              CudaDriverRoutine_12e340(*(_QWORD*)(v129 + 40));
              CudaDriverRoutine_12e340(v129);
              v128 = (_QWORD**)v54[3];
              if (v128 != nullptr) {
                goto LABEL_223;
              }
              goto LABEL_226;
            }
            v75 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                  __int64))(v62 + 23375664))(
                v62, (unsigned int)v142, (unsigned int)v51, v67[8], v78,
                *((unsigned int*)v67 + 2));
            if (v75 != 0) {
              goto LABEL_200;
            }
          }
          *(_DWORD*)(v141 + 16) = *((_DWORD*)v67 + 21);
          v79 = CudaDriverRoutine_222ce0();
          *(_QWORD*)v141 = v79;
          if (v79 == nullptr) {
            v48 = v136;
            v54 = v139;
            v129 = v141;
            v2 = 1;
            goto LABEL_222;
          }
          LODWORD(v154) = 0;
          v46 = v143;
          v80 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8 * v143);
          v140 = (unsigned int*)(v80 + 23372892);
          v54 = v139;
          v138 = v80;
          if (CudaDriverRoutine_1a0fd0() &&
              (v81 = *(__int64**)(v80 + 24)) != nullptr && v81[14] != 0 &&
              (cuda_driver_773f0(*v81) & 8) == 0) {
            v82 = v80 + v132 + 1424 * v51;
            if (*(_DWORD*)(v82 + 2624) == 1) {
              v83 = *(_QWORD*)(v80 + 24);
              v84 = *(_QWORD*)(v83 + 96) + *(unsigned int*)(v141 + 12);
            }
            else {
              v84 = *(_QWORD*)(*(_QWORD*)(v82 + 2632) + 8LL) +
                    *(unsigned int*)(v141 + 12);
              v83 = *(_QWORD*)(v80 + 24);
            }
            v85 = v80 + 23372892;
            v2 = CudaDriverRoutine_19e6f0(
                *(_QWORD*)(v83 + 112), v84,
                *v140 * (unsigned __int64)*(unsigned int*)(v141 + 8), 1);
            v86 = *v140;
            if ((_DWORD)v86 == 0) {
              goto LABEL_150;
            }
          }
          else {
            v85 = v80 + 23372892;
            v2 = 0;
            v86 = *v140;
            if ((_DWORD)v86 == 0) {
              goto LABEL_150;
            }
          }
          v87 = 0;
          v88 = v138 + v132 + 1424 * v51;
          v135 = v88 + 1296;
          v131 = (__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64, __int64))(v85 + 2780);
          v133 = (__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
              v85 + 2852);
          v134 = v88 + 2104;
          while (1) {
            if (((*(_DWORD*)(v141 + 68) >> v87) & 1) != 0) {
              v89 = CudaDriverRoutine_12e510(1, 96);
              if (v89 == 0) {
                goto LABEL_197;
              }
              v90 = v89;
              *(_DWORD*)(v89 + 56) = v87;
              v91 = CudaDriverRoutine_72770(v143, v142, v51, v87,
                                            (__int64*)(v89 + 40));
              if (v91 != 0) {
                goto LABEL_135;
              }
              v91 = CudaDriverRoutine_72520(v143, v142, v51, v87,
                                            (__int64*)(v90 + 48));
              if (v91 != 0) {
                goto LABEL_135;
              }
              v92 = (_DWORD*)(v135 + 12 * v87);
              *(_DWORD*)(v90 + 60) = *(_DWORD*)v92;
              *(_DWORD*)(v90 + 64) = v92[1];
              *(_DWORD*)(v90 + 68) = v92[2];
              v93 = CudaDriverRoutine_12e510(1, 4LL * v140[2]);
              *(_QWORD*)(v90 + 24) = v93;
              if (v93 == 0) {
                goto LABEL_145;
              }
              v91 = CudaDriverRoutine_75480(v143, v142, v51, v87, v140[2], v93);
              if (v91 != 0) {
                goto LABEL_135;
              }
              v91 = CudaDriverRoutine_75860(v143, v142, v51, v87,
                                            (__int64)&v152_.v152);
              if (v91 != 0) {
                goto LABEL_135;
              }
              *(_DWORD*)(v90 + 84) = v152_.v152;
              *(_QWORD*)(v90 + 32) = 4LL * v140[2];
              if ((cuda_driver_773f0(**(_QWORD**)(v138 + 24)) & 8) != 0) {
                v94 = v141;
                *(_QWORD*)(v90 + 8) = 0;
              }
              else {
                v94 = v141;
                v95 = CudaDriverRoutine_12e510(1, *(unsigned int*)(v141 + 8));
                *(_QWORD*)(v90 + 8) = v95;
                if (v95 == 0) {
                  goto LABEL_145;
                }
                v91 = (*v131)(v138, (unsigned int)v142, (unsigned int)v51,
                              (unsigned int)v87, *(unsigned int*)(v141 + 12),
                              v95, *(unsigned int*)(v141 + 8));
                if (v91 != 0) {
                LABEL_135:
                  v2 = v91;
                  v106 = *(_QWORD***)v90;
                  if (*(_QWORD*)v90 == 0) {
                    goto LABEL_149;
                  }
                LABEL_146:
                  if ((unsigned int)CudaDriverRoutine_223080(
                          v106,
                          (void (*)(_QWORD, __int64))CudaDriverRoutine_7a0e0,
                          (__int64)&v154) != 0) {
                    LODWORD(v154) = 1;
                  }
                  *(_QWORD*)v90 = 0;
                  goto LABEL_149;
                }
              }
              *(_DWORD*)(v90 + 72) = *(_DWORD*)(v134 + 4 * v87);
              v96 = CudaDriverRoutine_12e510(
                  1, 4LL * *(unsigned int*)(v141 + 16));
              *(_QWORD*)(v90 + 16) = v96;
              if (v96 == 0) {
              LABEL_145:
                v2 = 37;
                v106 = *(_QWORD***)v90;
                if (*(_QWORD*)v90 == 0) {
                  goto LABEL_149;
                }
                goto LABEL_146;
              }
              v91 = CudaDriverRoutine_72290(v143, v142, v51, v87, 0, v96,
                                            *(_DWORD*)(v94 + 16));
              if (v91 != 0) {
                goto LABEL_135;
              }
              v91 = (*v133)(v138, (unsigned int)v142, (unsigned int)v51,
                            (unsigned int)v87, (__int64)v156_.v157);
              if (v91 != 0) {
                goto LABEL_135;
              }
              *(_DWORD*)(v90 + 80) = v156_.v157[0];
              v91 = CudaDriverRoutine_72cf0(v143, v142, v51, v87, v156_.v157);
              if (v91 != 0) {
                goto LABEL_135;
              }
              *(_DWORD*)(v90 + 76) = v156_.v157[0];
              v97 = CudaDriverRoutine_222ce0();
              *(_QWORD*)v90 = v97;
              if (v97 == nullptr) {
                v2 = 0;
                goto LABEL_149;
              }
              v98 = *(_DWORD*)(v90 + 76);
              v152_.v153[0] = 0;
              v156_.v156 = 0;
              if (v98 != 0) {
                v99 = 0;
                v100 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 +
                                             8 * v143) +
                                  24LL);
                while (1) {
                  v101 = CudaDriverRoutine_12e510(1, 24);
                  if (v101 == 0) {
                    v2 = 37;
                    v106 = *(_QWORD***)v90;
                    if (*(_QWORD*)v90 != 0) {
                      goto LABEL_146;
                    }
                    goto LABEL_149;
                  }
                  v102 = (_QWORD*)v101;
                  *(_DWORD*)(v101 + 16) = v99;
                  v103 = CudaDriverRoutine_73110(v143, v142, v51, v87, v99,
                                                 (__int64)&v156_.v156,
                                                 (__int64)v152_.v153);
                  if (v103 != 0) {
                    v2 = v103;
                    CudaDriverRoutine_12e340((__int64)v102);
                    v106 = *(_QWORD***)v90;
                    if (*(_QWORD*)v90 != 0) {
                      goto LABEL_146;
                    }
                    goto LABEL_149;
                  }
                  v104 = zstd_decompress_223310(*(_QWORD*)(v100 + 128),
                                                v156_.v156);
                  if (v104 == 0) {
                    v2 = 3;
                    CudaDriverRoutine_12e340((__int64)v102);
                    v106 = *(_QWORD***)v90;
                    if (*(_QWORD*)v90 != 0) {
                      goto LABEL_146;
                    }
                    goto LABEL_149;
                  }
                  v105 = v156_.v156 - *(_QWORD*)(v104 + 40);
                  *v102 = v105;
                  v102[1] = *(_QWORD*)(v104 + 48) + v105;
                  if ((unsigned int)CudaDriverRoutine_222d10(
                          *(_QWORD*)v90, (__int64)v102) != 0) {
                    break;
                  }
                  if (++v99 >= *(_DWORD*)(v90 + 76)) {
                    goto LABEL_133;
                  }
                }
                v2 = 1;
                CudaDriverRoutine_12e340((__int64)v102);
                v106 = *(_QWORD***)v90;
                if (*(_QWORD*)v90 != 0) {
                  goto LABEL_146;
                }
              LABEL_149:
                CudaDriverRoutine_12e340(*(_QWORD*)(v90 + 24));
                CudaDriverRoutine_12e340(*(_QWORD*)(v90 + 8));
                CudaDriverRoutine_12e340(*(_QWORD*)(v90 + 16));
                CudaDriverRoutine_12e340(v90);
                v46 = v143;
                v54 = v139;
              LABEL_150:
                if (v2 != 0) {
                  goto LABEL_201;
                }
                v48 = v136;
                if ((unsigned int)CudaDriverRoutine_222d10(v54[3], v141) != 0) {
                  goto LABEL_198;
                }
                v50 = *(unsigned int*)(v137 + 23372884);
                v45 = (__int64*)CudaDriverData_1423000;
                v52 = v137 + 91280 * v142 + 1240;
              LABEL_65:
                if (++v51 < v50) {
                  goto LABEL_66;
                }
              LABEL_159:
                if ((unsigned int)CudaDriverRoutine_222d10(*(_QWORD*)(v14 + 8),
                                                           (__int64)v48) != 0) {
                  v2 = 1;
                  goto LABEL_227;
                }
                if (++v142 >=
                    (unsigned __int64)*(unsigned int*)(v130 + 23372880)) {
                LABEL_161:
                  v107 = CudaDriverRoutine_222ce0();
                  *(_QWORD*)(v14 + 16) = v107;
                  if (v107 != nullptr) {
                    v108 = *v45;
                    v156_.v157[0] = 0;
                    v109 = *(_QWORD*)(v108 + 8 * v46);
                    v110 = CudaDriverRoutine_222520(*(_QWORD*)(v109 + 32));
                    if (v110 != 0) {
                      v111 = v110;
                      while (1) {
                        v112 = CudaDriverRoutine_222630(v111);
                        if (v112 == 0) {
                          goto LABEL_7;
                        }
                        v113 = (__int64*)v112;
                        v111 = CudaDriverRoutine_222580(*(_QWORD*)(v109 + 32),
                                                        v111);
                        v114 = (*(__int64 (**)(__int64, __int64, __int64,
                                               __int64, __int64,
                                               __int64))(v109 + 23376568))(
                            (__int64)v113, (__int64)&v156_.v156, 0,
                            (__int64)&v155, 0, (__int64)&v154);
                        if (v114 != 0) {
                          goto LABEL_188;
                        }
                        v115 = CudaDriverRoutine_12e510(1, 48);
                        if (v115 == 0) {
                          goto LABEL_193;
                        }
                        v116 = (__int64*)v115;
                        *(_QWORD*)(v115 + 8) = *v113;
                        *(_DWORD*)(v115 + 40) = *(_DWORD*)(v113[1] + 1088);
                        *(_DWORD*)(v115 + 44) = v113[4];
                        v117 = v155;
                        *(_QWORD*)(v115 + 16) = v156_.v156;
                        *(_QWORD*)(v115 + 24) = v117;
                        *(_QWORD*)(v115 + 32) = v154;
                        v118 = CudaDriverRoutine_222ce0();
                        *v116 = (__int64)v118;
                        if (v118 == nullptr) {
                          break;
                        }
                        v119 = CudaDriverRoutine_222520(v113[3]);
                        if (v119 != 0) {
                          v120 = v119;
                          while (1) {
                            v122 = CudaDriverRoutine_222630(v120);
                            if (v122 == 0) {
                              break;
                            }
                            v123 = v122;
                            v120 = CudaDriverRoutine_222580(v113[3], v120);
                            if ((*(_BYTE*)(v123 + 90) & 1) != 0) {
                              v124 = CudaDriverRoutine_12e510(1, 32);
                              if (v124 == 0) {
                                v2 = 37;
                                goto LABEL_216;
                              }
                              v125 = (_QWORD*)v124;
                              *(_QWORD*)(v124 + 16) = *(_QWORD*)(v123 + 56);
                              *(_QWORD*)(v124 + 8) = *(_QWORD*)(v123 + 40);
                              v121 = (cuda_driver_773f0(*v113) & 1) != 0
                                         ? 0LL
                                         : *(_QWORD*)(v123 + 48);
                              *v125 = v121;
                              v125[3] = *(_QWORD*)v123;
                              if ((unsigned int)CudaDriverRoutine_222d10(
                                      *v116, (__int64)v125) != 0) {
                                CudaDriverRoutine_12e340((__int64)v125);
                                break;
                              }
                            }
                            if (v120 == 0) {
                              goto LABEL_178;
                            }
                          }
                        LABEL_215:
                          v2 = 1;
                        LABEL_216:
                          if (*v116 != 0) {
                            if ((unsigned int)CudaDriverRoutine_223080(
                                    (_QWORD**)*v116,
                                    (void (*)(_QWORD,
                                              __int64))CudaDriverRoutine_7a4f0,
                                    (__int64)v156_.v157) != 0) {
                              v156_.v157[0] = 1;
                            }
                            *v116 = 0;
                          }
                        LABEL_220:
                          CudaDriverRoutine_12e340((__int64)v116);
                          goto LABEL_2;
                        }
                      LABEL_178:
                        if ((unsigned int)CudaDriverRoutine_222d10(
                                *(_QWORD*)(v14 + 16), (__int64)v116) != 0) {
                          goto LABEL_215;
                        }
                        if ((cuda_driver_773f0(*v113) & 2) == 0) {
                          v114 =
                              CudaDriverRoutine_19e6d0(v113[14], &v147_.v147);
                          if (v114 != 0) {
                            goto LABEL_188;
                          }
                          v114 = CudaDriverRoutine_7a2a0((__int64)v113,
                                                         v147_.v147);
                          if (v114 != 0) {
                            goto LABEL_188;
                          }
                        }
                        if (v111 == 0) {
                          goto LABEL_183;
                        }
                      }
                      v2 = 1;
                      goto LABEL_220;
                    }
                  LABEL_183:
                    v126 = cuda_driver_773f0(0);
                    v7 = CudaDriverData_1422118;
                    v8 = v143;
                    v9 = (__int64)v144;
                    if ((v126 & 2) == 0) {
                      v127 = CudaDriverRoutine_1a0600();
                      v114 = CudaDriverRoutine_19e6d0(v127, &v147_.v147);
                      if (v114 != 0 || (v114 = CudaDriverRoutine_7a2a0(
                                            0, v147_.v147)) != 0) {
                      LABEL_188:
                        v2 = v114;
                        goto LABEL_2;
                      }
                    }
                  LABEL_28:
                    ++v8;
                    v10 = (__int64*)CudaDriverData_1423000;
                    if (v8 >= *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                               (_QWORD)v7)) {
                    LABEL_187:
                      v114 = cuda_driver_7a800(a1, &CudaDriverData_1432618);
                      goto LABEL_188;
                    }
                    goto LABEL_19;
                  }
                LABEL_7:
                  v2 = 1;
                  goto LABEL_2;
                }
                goto LABEL_61;
              }
            LABEL_133:
              if ((unsigned int)CudaDriverRoutine_222d10(*(_QWORD*)v141, v90) !=
                  0) {
                v2 = 1;
                v106 = *(_QWORD***)v90;
                if (*(_QWORD*)v90 == 0) {
                  goto LABEL_149;
                }
                goto LABEL_146;
              }
              v54 = v139;
              v46 = v143;
              v2 = 0;
              v86 = *v140;
            }
            if (++v87 >= v86) {
              goto LABEL_150;
            }
          }
        }
        v2 = 37;
      LABEL_227:
        if (*v48 != 0) {
          if ((unsigned int)CudaDriverRoutine_222a80(
                  *v48, (__int64)CudaDriverRoutine_7a210,
                  (__int64)&v145_.v146) != 0) {
            v145_.v146 = 1;
          }
          *v48 = 0;
        }
      LABEL_231:
        CudaDriverRoutine_12e340((__int64)v48);
      LABEL_2:
        LODWORD(v147_.v147) = 0;
        if (CudaDriverData_1432618 != 0) {
          if ((unsigned int)CudaDriverRoutine_223080(
                  (_QWORD**)CudaDriverData_1432618,
                  (void (*)(_QWORD, __int64))CudaDriverRoutine_7a510,
                  (__int64)&v147_.v147) != 0) {
            v3 = 1;
            goto LABEL_16;
          }
          v3 = v147_.v147;
          if ((_DWORD)v147_.v147 != 0) {
            goto LABEL_16;
          }
          CudaDriverData_1432618 = (__int64)CudaDriverRoutine_222ce0();
        }
      LABEL_11:
        if (CudaDriverData_1432620 != 0) {
          CudaDriverRoutine_2231b0(&CudaDriverData_1432620,
                                   (__int64)CudaDriverRoutine_7a5d0,
                                   (__int64)&v147_.v147);
        }
        if ((_DWORD)v147_.v147 != 0) {
          v3 = v147_.v147;
        }
        else {
          v3 = v2;
        }
      LABEL_16:
        CudaDriverRoutine_83ba0();
        return v3;
      }
    }
  }
  v2 = v18;
  CudaDriverRoutine_12e340(v14);
  goto LABEL_2;
}

__int64 nvidia_847c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  bool v4;
  int v5;
  __int64 v6;
  char v7;
  unsigned int* v8;
  _DWORD* v9;
  unsigned int v10;
  int v11;
  __int64* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  unsigned int* v17;
  _DWORD* v18;
  unsigned int v19;
  struct {
    __int64 v20;
    char gap16_[4];
    int v21;
  } v20_;
  struct {
    char gap16_[8];
    _BYTE v22[24];
    __int128 v23;
  } v22_;

  if (result != 0) {
    v1 = result;
    v2 = result + 536;
    v20_.v21 = -1;
    v20_.v20 = result + 536;
    v3 = CudaDriverRoutine_12e060((__int64)&v20_.v20, 1u, &v20_.v21, 1, 0);
    if (v3 < 0) {
      return 28;
    }
    else {
      v4 = v3 == 0;
      v5 = v3;
      v6 = *(_QWORD*)(v1 + 8);
      v7 = v4;
      if (v5 != 0) {
        result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v6 + 32306416) +
                                                    80LL))(v6, v1);
      }
      else {
        v8 = *(unsigned int**)(*(_QWORD*)CudaDriverData_1423000 +
                               8LL * *(unsigned int*)(v6 + 1088));
        result = *v8;
        if ((_DWORD)result == 0) {
          v9 = v8 + 5843220;
          if (v8[5843814] == 2) {
          LABEL_10:
            result = 0;
          }
          else if (*(_DWORD*)v9 != 0) {
            v10 = 0;
            while (1) {
              result = (*((__int64 (**)(__int64, __int64, __int64))v8 +
                          2921919))((__int64)v8, v10, (__int64)v22_.v22);
              if ((_DWORD)result != 0) {
                break;
              }
              if (v22_.v23 != 0) {
                goto LABEL_10;
              }
              if (++v10 >= *(_DWORD*)v9) {
                goto LABEL_16;
              }
            }
          }
          else {
          LABEL_16:
            result = 28;
          }
        }
      }
      if ((_DWORD)result == 0) {
        v11 = 0;
        v12 = (__int64*)CudaDriverData_1423000;
        while (1) {
          v13 = (v7 & 1) != 0 ? v11 : v11 + 1;
          if ((v7 & 1) != 0 ||
              (unsigned int)(v11 + 1) >=
                  *(_DWORD*)(*(_QWORD*)(v1 + 8) + 23372880LL)) {
            return 0;
          }
          v20_.v21 = -1;
          v20_.v20 = v2;
          v14 =
              CudaDriverRoutine_12e060((__int64)&v20_.v20, 1u, &v20_.v21, 1, 0);
          if (v14 < 0) {
            return 28;
          }
          v15 = v14;
          v4 = v14 == 0;
          v16 = *(_QWORD*)(v1 + 8);
          v7 = v4;
          if (v15 != 0) {
            result = (*(__int64 (**)(__int64, __int64))(
                *(_QWORD*)(v16 + 32306416) + 80LL))(v16, v1);
          }
          else {
            v17 = *(unsigned int**)(*v12 + 8LL * *(unsigned int*)(v16 + 1088));
            result = *v17;
            if ((_DWORD)result == 0) {
              v18 = v17 + 5843220;
              if (v17[5843814] == 2) {
                result = 0;
              }
              else if (*(_DWORD*)v18 != 0) {
                v19 = 0;
                while (1) {
                  result = (*((__int64 (**)(__int64, __int64, __int64))v17 +
                              2921919))((__int64)v17, v19, (__int64)v22_.v22);
                  if ((_DWORD)result != 0) {
                    goto LABEL_40;
                  }
                  if (v22_.v23 != 0) {
                    break;
                  }
                  if (++v19 >= *(_DWORD*)v18) {
                    result = 28;
                  LABEL_40:
                    v12 = &CudaDriverData_14403e8;
                    goto LABEL_20;
                  }
                }
                result = 0;
                v12 = (__int64*)CudaDriverData_1423000;
              }
              else {
                result = 28;
              }
            }
          }
        LABEL_20:
          v11 = v13;
          if ((_DWORD)result != 0) {
            return result;
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_8cad0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = *(_QWORD*)(a1 + 64);
  v8 = 0;
  result = (*(__int64 (**)(__int64, __int64, __int64))(v3 + 18808))(
      a1, a2, (__int64)&v8);
  if ((_DWORD)result == 0) {
    v6 = v8;
    *(_DWORD*)a3 = 0;
    v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v6);
    *(_DWORD*)(a3 + 136) = 0;
    *(_QWORD*)(a3 + 8) = v7;
  }
  return result;
}

__int64 nvidia_8eea0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int* i;
  int v10;
  __int64 (*v11)(__int64, __int64, __int64);
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int j;
  int* v20;
  int v21;
  __int64 (*v22)(__int64, __int64, __int64);
  __int64 v23;

  v1 = *(__int64**)(result + 1216);
  if (v1 != nullptr) {
    v2 = v1[2];
    v3 = *v1;
    v4 = CudaDriverData_1432c60[0];
    v5 = v2 + 8;
    v6 = v2 + 12;
    LODWORD(v7) = CudaDriverData_1432c60[0];
    while (*(_DWORD*)(v6 + 32LL * (unsigned int)v7) != 1) {
      LODWORD(v7) = (v7 + 1) & 0x1F;
      if ((_DWORD)v7 == CudaDriverData_1432c60[0]) {
        return result;
      }
    }
    v8 = v5 + 32LL * (unsigned int)v7;
    for (i = (int*)(v8 + 4); *(_DWORD*)(v8 + 4) == 1; i = (int*)(v8 + 4)) {
      __builtin_arm_dmb(0xDu);
      ++CudaDriverData_1432c64;
      v11 = *(__int64 (**)(__int64, __int64, __int64))&CudaDriverData_1432c60
                [4 * (unsigned __int64)*(unsigned int*)(v8 + 8) + 4];
      if (v11 != nullptr) {
        result = v11(v3, *(_QWORD*)(v8 + 16), (__int64)&v23);
        *(_QWORD*)(v8 + 24) = v23;
        __builtin_arm_dmb(0xFu);
        if ((_DWORD)result == 0) {
          v10 = 2;
          goto LABEL_10;
        }
      }
      else {
        __builtin_arm_dmb(0xFu);
      }
      v10 = 3;
    LABEL_10:
      *i = v10;
      v7 = ((_BYTE)v7 + 1) & 0x1F;
      __builtin_arm_dmb(0xFu);
      v8 = v5 + 32 * v7;
    }
    CudaDriverData_1432c60[0] = v7;
    if (v4 != (_DWORD)v7) {
    LABEL_18:
      v13 = v1[2];
      v14 = *v1;
      LODWORD(v15) = v7;
      v16 = v13 + 8;
      v17 = v13 + 12;
      while (*(_DWORD*)(v17 + 32LL * (unsigned int)v15) != 1) {
        LODWORD(v15) = (v15 + 1) & 0x1F;
        if ((_DWORD)v15 == (_DWORD)v7) {
          LODWORD(v15) = v7;
        LABEL_17:
          CudaDriverData_1432c60[0] = v15;
          v12 = (_DWORD)v7 == (_DWORD)v15;
          LODWORD(v7) = v15;
          if (v12) {
            return result;
          }
          goto LABEL_18;
        }
      }
      v18 = v16 + 32LL * (unsigned int)v15;
      v20 = (int*)(v18 + 4);
      for (j = *(_DWORD*)(v18 + 4);; j = *(_DWORD*)(v18 + 4)) {
        if (j != 1) {
          goto LABEL_17;
        }
        __builtin_arm_dmb(0xDu);
        ++CudaDriverData_1432c64;
        v22 = *(__int64 (**)(__int64, __int64, __int64))&CudaDriverData_1432c60
                  [4 * (unsigned __int64)*(unsigned int*)(v18 + 8) + 4];
        if (v22 == nullptr) {
          break;
        }
        result = v22(v14, *(_QWORD*)(v18 + 16), (__int64)&v23);
        *(_QWORD*)(v18 + 24) = v23;
        __builtin_arm_dmb(0xFu);
        if ((_DWORD)result != 0) {
          goto LABEL_24;
        }
        v21 = 2;
      LABEL_25:
        *v20 = v21;
        v15 = ((_BYTE)v15 + 1) & 0x1F;
        __builtin_arm_dmb(0xFu);
        v18 = v16 + 32 * v15;
        v20 = (int*)(v18 + 4);
      }
      __builtin_arm_dmb(0xFu);
    LABEL_24:
      v21 = 3;
      goto LABEL_25;
    }
  }
  return result;
}

__int64 nvidia_91dc0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;

  v4 = CudaDriverData_1422118;
  result = CudaDriverRoutine_ee160(
      a2,
      832LL * *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                               (_QWORD)CudaDriverData_1422118),
      &v18, 0, 3u);
  if ((_DWORD)result == 0) {
    v6 = v18;
    *(_QWORD*)(a1 + 568) = v18;
    v7 = cuda_driver_helpers_1db920(*(_QWORD*)(a2 + 80), v6);
    if (v7 != 0) {
      v8 = v7;
      v9 = CudaDriverStub_12e330(832);
      if (v9 != 0) {
        v10 = v9;
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v4) != 0) {
          v11 = 0;
          while (1) {
            memset_plt(v10, 0, 0x340u);
            for (i = 1; i != 144; ++i) {
              v13 = cuda_driver_9a090(v4[v11 + 35], i, &v17);
              v14 = v17;
              if (v13 != 0) {
                v14 = -1;
              }
              *(_DWORD*)(v10 + 4 * i) = v14;
            }
            v15 = (*(__int64 (**)(__int64, __int64, __int64))(
                v4[v11 + 35] + 20560LL))(v4[v11 + 35], v10 + 576, 256);
            if (v15 != 0) {
              break;
            }
            v15 = CudaDriverRoutine_f6230(a2, v8, 832 * v11, v10, 832,
                                          *(_QWORD*)(a2 + 96), 2u, 0);
            if (v15 != 0) {
              break;
            }
            if (++v11 >=
                (unsigned __int64)*(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                                   (_QWORD)v4)) {
              goto LABEL_13;
            }
          }
          v16 = v15;
        }
        else {
        LABEL_13:
          v16 = 0;
        }
        CudaDriverRoutine_12e340(v10);
        return v16;
      }
      else {
        return 2;
      }
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 nvidia_af8c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  bool v8;
  _WORD* v9;
  __int16 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  char** v16;
  char** v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned int v40;
  char v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 i;
  int v46;
  unsigned int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  char v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 32);
  v5 = *(_QWORD*)(v4 + 24);
  switch (*(_DWORD*)a1) {
  case 1:
    v26 = *(_DWORD*)(a1 + 8);
    v27 = *((_DWORD*)a2 + 2);
    v28 = a1;
    v29 = a2[3];
    v65 = 0;
    v30 = CudaDriverRoutine_a3190(v29, v26, v27);
    if (v30 == 0) {
      return 200;
    }
    result = CudaDriverRoutine_105570((_QWORD*)v4, v30, &v64,
                                      (unsigned __int64*)&v65, 0);
    if ((_DWORD)result == 0) {
      v31 = v64;
      v32 = v28;
      v33 = *(unsigned int*)(v28 + 12);
      v34 = (*(__int64 (**)(__int64))(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a2 + 32) + 24LL) + 64LL) +
          18872LL))(*a2);
      v35 = *(unsigned int*)(v32 + 16);
      if (v35 > 4 * v65) {
        return 200;
      }
      if ((_DWORD)v35 != 0) {
        v36 = 0;
        do {
          *(_DWORD*)(v31 + 4 * v33 + 4 * v36++) += v34;
        } while (v36 < *(unsigned int*)(v32 + 16));
      }
      return 0;
    }
    return result;
  case 2:
    *(_WORD*)(v2 + 977) |= 1u;
    return 0;
  case 3:
    v20 = *(_DWORD*)(a1 + 8);
    v21 = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 3812LL);
    if (v20 <= 1) {
      v20 = 1;
    }
    if (v20 >= v21) {
      v20 = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 3812LL);
    }
    *(_DWORD*)(v2 + 344) = v20;
    v22 = *(_DWORD*)(a1 + 12);
    if (v22 <= 1) {
      v22 = 1;
    }
    if (v22 >= v21) {
      v22 = v21;
    }
    *(_DWORD*)(*a2 + 348) = v22;
    v23 = *(_DWORD*)(a1 + 16);
    if (v23 <= 1) {
      v23 = 1;
    }
    if (v23 < v21) {
      v21 = v23;
    }
    *(_DWORD*)(*a2 + 352) = v21;
    return 0;
  case 4:
    *(_DWORD*)(v2 + 236) = *(_DWORD*)(a1 + 12);
    if (*(_QWORD*)(*a2 + 656) != 0) {
      return 200;
    }
    v24 = a1;
    *(_QWORD*)(*a2 + 656) = CudaDriverStub_12e330(*(unsigned int*)(a1 + 16));
    v25 = *(_QWORD*)(*a2 + 656);
    if (v25 == 0) {
      return 2;
    }
    memset_plt(v25, 0, *(unsigned int*)(v24 + 16));
    return 0;
  case 5:
    if (*(_DWORD*)(a1 + 8) == 0) {
      return 0;
    }
    v11 = 0;
    while (1) {
      v12 = a1;
      v13 = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 4 * v11);
      v14 = *(_QWORD*)(*a2 + 1080);
      if (v14 == 0) {
        *(_QWORD*)(*a2 + 1080) = CudaDriverRoutine_1a28d0(8);
        v14 = *(_QWORD*)(*a2 + 1080);
        if (v14 == 0) {
          break;
        }
      }
      result = CudaDriverStub_1a2960(v14, v13, 0);
      if ((_DWORD)result != 0) {
        return result;
      }
      v16 = (const char**)CudaDriverRoutine_11abf0(a2[2], v13);
      if (v16 != nullptr) {
        v17 = v16;
        result = CudaDriverRoutine_11d580(v5, *v16, &v64);
        if ((_DWORD)result == 500) {
          CudaDriverRoutine_11d4d0(v5, (__int64)*v17, &v65, &v63);
          if (v65 != 0) {
            *(_DWORD*)(*a2 + 864) |= 1 << v63;
          }
          else if ((**v17 != 95 ||
                    strcmp_plt(*v17, "__cuda_syscall_32f3056bbb") != 0) &&
                   *((_DWORD*)v17 + 4) == 1 && (*(_BYTE*)(v4 + 412) & 1) == 0) {
            *(_WORD*)(*a2 + 977) |= 0x8000u;
            if ((*(_BYTE*)(v4 + 380) & 1) == 0) {
              return 500;
            }
          }
        }
        else {
          if ((_DWORD)result != 0) {
            return result;
          }
          v18 = *a2;
          if ((unsigned int)v64 > 0x3F) {
            *(_QWORD*)(v18 + 856) |= 1LL << v64;
          }
          else {
            *(_QWORD*)(v18 + 848) |= 1LL << v64;
          }
        }
      }
      ++v11;
      a1 = v12;
      if (v11 >= *(unsigned int*)(v12 + 8)) {
        return 0;
      }
    }
    return 2;
  case 6:
    *(_DWORD*)(v2 + 428) = *(_DWORD*)(a1 + 8);
    *(_DWORD*)(*a2 + 432) = *(_DWORD*)(a1 + 12);
    *(_DWORD*)(*a2 + 436) = *(_DWORD*)(a1 + 16);
    return 0;
  case 7:
  case 8:
    if (*(_DWORD*)(*(_QWORD*)(v5 + 64) + 11708LL) !=
        *(unsigned __int8*)(a1 + 8)) {
      return 200;
    }
    return 0;
  case 9:
    v37 = *(_DWORD*)(a1 + 8);
    v38 = *(unsigned __int16*)(a1 + 12);
    v39 = *(_QWORD*)(a1 + 16);
    v40 = *(_DWORD*)(a1 + 24);
    v41 = *(_BYTE*)(a1 + 28);
    v60 = *(unsigned __int16*)(a1 + 30);
    v61 = *(_BYTE*)(a1 + 32);
    v62 = *(unsigned __int16*)(a1 + 14);
    if (CudaDriverStub_12d100(a2 + 9) <= v38) {
      v65 = 0;
      v42 = v38 - CudaDriverStub_12d100(a2 + 9) + 1;
      result = nvidia_12d000(a2 + 9, v42, &v65);
      if ((_DWORD)result != 0) {
        return result;
      }
      memset_plt(v65, 0, 104 * v42);
    }
    v43 = CudaDriverRoutine_12cff0(a2 + 9, v38);
    if (CudaDriverRoutine_985b0(*(_DWORD*)(v4 + 32))) {
      result = 200;
      switch (v40) {
      case 1u:
      case 6u:
        goto LABEL_105;
      case 2u:
      case 0xAu:
        return result;
      case 3u:
        *(_DWORD*)v43 = 3;
        *(_DWORD*)(v43 + 8) = 2;
        *(_DWORD*)(v43 + 12) = v39;
        break;
      case 4u:
        result = 1;
        *(_DWORD*)v43 = 1;
        *(_DWORD*)(v43 + 8) = 4;
        v49 = *((unsigned __int8*)a2 + 32);
        v50 = *(_QWORD*)(*a2 + 32);
        v51 = *(_QWORD*)(v50 + 24);
        if (*(_DWORD*)(*(_QWORD*)(v51 + 64) + 11716LL) < (unsigned int)v49) {
          return result;
        }
        *((_BYTE*)a2 + 32) = v49 + 1;
        if (*(_DWORD*)(*(_QWORD*)(v51 + 64) + 3776LL) <= (unsigned int)v49) {
          return result;
        }
        result = CudaDriverRoutine_97120(v51, v50, nullptr, 0, &v65);
        if ((_DWORD)result != 0) {
          return result;
        }
        v52 = v65;
        *(_DWORD*)(v65 + 64) = v49;
        *(_QWORD*)(a2[21] + 8LL * (unsigned int)v49) = v52;
        v53 = a2[22];
        if (v53 <= v49 + 1) {
          v53 = v49 + 1;
        }
        a2[22] = v53;
        result = nvidia_12cef0(a2 + 5, &v64);
        if ((_DWORD)result != 0) {
          return result;
        }
        v54 = v64;
        *(_DWORD*)v64 = v38;
        *(_DWORD*)(v54 + 4) = v49;
        break;
      case 5u:
        *(_DWORD*)v43 = 3;
        *(_DWORD*)(v43 + 8) = 1;
        break;
      case 7u:
        v65 = 0;
        if ((v41 & 1) == 0) {
          result = cuda_driver_11e8e0(v5, v4, nullptr, 0, 0, &v65,
                                      *(_DWORD*)(v4 + 32));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bbbb0(v2, v65);
            if ((_DWORD)result == 0) {
              *(_DWORD*)v43 = 5;
              v48 = 1;
              goto LABEL_130;
            }
          }
          return result;
        }
        result = CudaDriverRoutine_106f80(v4, v37, &v65);
        if ((_DWORD)result != 0) {
          return result;
        }
        *(_DWORD*)v43 = 2;
        v56 = 1;
        goto LABEL_137;
      case 8u:
        v65 = 0;
        if ((v41 & 1) == 0) {
          result = cuda_driver_11a410(v5, v4, nullptr, 0, 0, &v65);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bbc20(v2, v65);
            if ((_DWORD)result == 0) {
              *(_DWORD*)v43 = 5;
              v48 = 3;
              goto LABEL_130;
            }
          }
          return result;
        }
        result = CudaDriverRoutine_107040(v4, v37, &v65);
        if ((_DWORD)result != 0) {
          return result;
        }
        *(_DWORD*)v43 = 2;
        v56 = 3;
        goto LABEL_137;
      case 9u:
        v65 = 0;
        if ((v41 & 1) != 0) {
          result = CudaDriverRoutine_107100(v4, v37, &v65);
          if ((_DWORD)result != 0) {
            return result;
          }
          v56 = 2;
          *(_DWORD*)v43 = 2;
        LABEL_137:
          *(_DWORD*)(v43 + 8) = v56;
          *(_QWORD*)(v43 + 16) = v65;
        }
        else {
          result = CudaDriverRoutine_111d60(v5, v4, nullptr, 0, 2, &v65);
          if ((_DWORD)result != 0) {
            return result;
          }
          result = CudaDriverRoutine_bbc90(v2, v65);
          if ((_DWORD)result != 0) {
            return result;
          }
          *(_DWORD*)v43 = 5;
          v48 = 2;
        LABEL_130:
          v55 = v65;
          *(_DWORD*)(v43 + 8) = v48;
          *(_DWORD*)(v43 + 20) = (v41 & 2) != 0;
          *(_QWORD*)(v43 + 24) = v55;
          *(_DWORD*)(v43 + 12) = v62;
          *(_DWORD*)(v43 + 16) = v60;
        }
        break;
      default:
        return 999;
      }
    }
    else {
      if (v40 > 0xA) {
        return 999;
      }
      if (((1 << v40) & 0x79C) != 0) {
        return 200;
      }
      if (((1 << v40) & 0x62) == 0) {
        return 999;
      }
    LABEL_105:
      *(_DWORD*)v43 = 4;
      *(_DWORD*)(v43 + 8) = v62;
      *(_DWORD*)(v43 + 12) = v60;
      *(_DWORD*)(v43 + 16) = (v41 & 2) != 0;
      v47 = *(_DWORD*)(*a2 + 632);
      if (v47 <= v60 + v62) {
        v47 = v60 + v62;
      }
      *(_DWORD*)(*a2 + 632) = v47;
    }
    if ((v41 & 4) == 0) {
      goto LABEL_143;
    }
    v57 = 13;
    if ((v41 & 2) == 0) {
      v57 = 17;
    }
    result = nvidia_12cef0(&a2[v57], &v65);
    if ((_DWORD)result == 0) {
      *(_DWORD*)v65 = v62;
    LABEL_143:
      v58 = *a2;
      if ((*((_BYTE*)a2 + 33) & 1) == 0) {
        LOBYTE(v59) = v61 & 1;
      LABEL_146:
        *(_BYTE*)(v58 + 1088) = v59;
        *((_BYTE*)a2 + 33) |= 1u;
        return 0;
      }
      v59 = *(unsigned __int8*)(v58 + 1088);
      if (v59 == (v61 & 1)) {
        goto LABEL_146;
      }
      return 200;
    }
    return result;
  case 0xA:
    *(_DWORD*)(v2 + 240) = *(unsigned __int16*)(a1 + 8);
    return 0;
  case 0xB:
    *(_QWORD*)(v2 + 912) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(*a2 + 920) = *(unsigned int*)(a1 + 8);
    return 0;
  case 0xC:
    *(_QWORD*)(v2 + 928) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(*a2 + 936) = *(unsigned int*)(a1 + 8);
    return 0;
  case 0xD:
    if (*(_BYTE*)(a1 + 12) != 0) {
      v19 = *(_DWORD*)(a1 + 8);
      *(_DWORD*)(v2 + 356) = v19;
      *(_DWORD*)(*a2 + 364) = v19;
    }
    else {
      *(_DWORD*)(v2 + 356) = 0;
      *(_DWORD*)(*a2 + 364) = 0;
    }
    return 0;
  case 0xE:
    v9 = (_WORD*)(v2 + 977);
    v10 = *(_WORD*)(v2 + 977) | 8;
    goto LABEL_74;
  case 0xF:
    *(_WORD*)(v2 + 977) |= 0x10u;
    v9 = (_WORD*)(*a2 + 977);
    v10 = *v9 | 0x20;
  LABEL_74:
    *v9 = v10;
    *(_WORD*)(*(_QWORD*)(*a2 + 32) + 36LL) |= 0x20u;
    return 0;
  case 0x10:
    *(_WORD*)(v2 + 977) |= 0x40u;
    return 0;
  case 0x11:
    *(_BYTE*)(v4 + 376) = 1;
    return 0;
  case 0x12:
    *(_WORD*)(v2 + 977) |= 0x80u;
    return 0;
  case 0x13:
    *(_WORD*)(v2 + 977) |= 0x100u;
    return 0;
  case 0x14:
    if (*(_BYTE*)(a1 + 8) != 0) {
      *(_WORD*)(v2 + 977) |= 0x200u;
    }
    if (*(_BYTE*)(a1 + 10) != 0) {
      *(_WORD*)(*a2 + 977) |= 0x400u;
    }
    if (*(_BYTE*)(a1 + 11) != 0) {
      *(_BYTE*)(*a2 + 1114) = 1;
    }
    return 0;
  case 0x15:
    *(_DWORD*)(v2 + 444) = *(_DWORD*)(a1 + 8);
    *(_DWORD*)(*a2 + 448) = *(_DWORD*)(a1 + 12);
    *(_DWORD*)(*a2 + 452) = *(_DWORD*)(a1 + 16);
    *(_BYTE*)(*a2 + 440) = 1;
    return 0;
  case 0x16:
    *(_BYTE*)(v2 + 441) = 1;
    return 0;
  case 0x17:
    *(_DWORD*)(v2 + 456) = *(_DWORD*)(a1 + 8);
    return 0;
  case 0x18:
    *(_BYTE*)(v2 + 400) = 1;
    return 0;
  case 0x19:
    *(_DWORD*)(v2 + 396) = *(_DWORD*)(a1 + 8);
    return 0;
  case 0x1A:
    *(_WORD*)(v2 + 977) |= 0x4000u;
    return 0;
  case 0x1B:
    v44 = *(unsigned int*)(a1 + 8);
    if ((_DWORD)v44 != 0) {
      for (i = 0; i < v44; ++i) {
        v46 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * i);
        if (v46 != 0) {
          *(_QWORD*)(*a2 + 872) |= 1LL << v46;
          v44 = *(unsigned int*)(a1 + 8);
        }
      }
    }
    return 0;
  case 0x1C:
    v6 = *(_BYTE*)(a1 + 8) != 0;
    if (*(_BYTE*)(a1 + 8) != 0) {
      v7 = 2;
    }
    else {
      v7 = 1;
    }
    if (*(_BYTE*)(a1 + 9) != 0) {
      v6 = v7;
    }
    if (*(_BYTE*)(a1 + 10) != 0) {
      ++v6;
    }
    if (*(_BYTE*)(a1 + 11) != 0) {
      ++v6;
    }
    v8 = (*(unsigned __int8*)(a1 + 13) | v6 | (*(_BYTE*)(a1 + 12) != 0)) != 0;
    if (*(_BYTE*)(a1 + 14) == 0 || v8) {
      *(_BYTE*)(v2 + 1113) = v8;
      *(_BYTE*)(*a2 + 1112) = 1;
    }
    else {
      *(_BYTE*)(v2 + 1112) = 0;
    }
    return 0;
  case 0x1D:
    *(_DWORD*)(v2 + 76) = *(_DWORD*)(a1 + 8);
    return 0;
  case 0x1E:
    *(_BYTE*)(v2 + 979) |= 1u;
    return 0;
  default:
    return 999;
  }
}

__int64 nvidia_d6ca0(_QWORD* a1, __int64 a2, int a3, _DWORD* a4)
{
  _DWORD* v4;
  _DWORD* v8;
  __int64 result;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  void* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int128 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int128 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int128 v41;
  __int128 v42;
  __int64 v43;
  __int64 v44;
  __int128 v45;
  __int128 v46;
  _QWORD* v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v68;
  _QWORD* v69;
  __int64 i;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  unsigned int v78;
  _DWORD* v79;
  unsigned int v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  int v87;
  _DWORD* v88;
  _QWORD* v89;
  struct {
    __int128 v90;
    __int128 v91;
    __int128 v92;
    __int128 v93;
    __int128 v94;
    __int128 v95;
    __int128 v96;
    __int128 v97;
    __int128 v98;
    __int128 v99;
    __int128 v100;
    __int128 v101;
    __int64 v102;
  } v90_;
  struct {
    __int128 v103;
    __int128 v104;
    __int128 v105;
    __int64 v106;
  } v103_;
  _QWORD* v107;
  __int64 v108[3];

  v4 = a4;
  if (a4 == nullptr) {
    v8 = nullptr;
    result = cuda_driver_c30d0(&v89, a3, nullptr);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_8:
    v10 = v89;
    if (a3 == 1) {
      if (v4 != nullptr) {
        v89[42] = v4;
        v12 = CudaDriverRoutine_dcd80((__int64)v10, a2, 1);
        if (v12 != 0) {
          goto LABEL_153;
        }
        goto LABEL_22;
      }
      v4 = v89;
    }
    else if (a3 == 2) {
      v11 = v89;
      if (!CudaDriverStub_d4800_alt1(a2)) {
        v12 = CudaDriverRoutine_d4810(a2);
        if (v12 != 0) {
          goto LABEL_153;
        }
        v12 = cuda_driver_d4980((__int64)v11, a2);
        if (v12 != 0) {
          goto LABEL_153;
        }
      }
      if ((*(_DWORD*)(a2 + 252) != 0 ||
           (v20 = *(_QWORD*)(a2 + 336)) != 0 && *(_DWORD*)(v20 + 252) != 0) &&
          *(_DWORD*)(a2 + 60) != 0) {
        nvidia_ed630((__int64)"CUDA", 0,
                     "Graphs with conditional nodes cannot be instantiated "
                     "more than once");
      LABEL_54:
        v12 = 801;
        goto LABEL_153;
      }
      if (*(_BYTE*)(a2 + 332) != 0) {
        if (*(_BYTE*)(a2 + 333) != 0) {
          nvidia_ed630((__int64)"CUDA", 0,
                       "Graphs with device-updatable kernel nodes nodes cannot "
                       "be instantiated more than once");
          goto LABEL_54;
        }
        *((_BYTE*)v11 + 414) = 1;
        *(_BYTE*)(a2 + 333) = 1;
      }
      if (v4 == nullptr) {
        v8 = v89;
        v4 = v89;
      }
      v12 = CudaDriverRoutine_dcd80((__int64)v89, a2, 2);
      if (v12 != 0) {
        goto LABEL_153;
      }
    LABEL_22:
      v12 = CudaDriverRoutine_c7b70((__int64)v89, a2, (__int64)v8);
      if (v12 == 0) {
        v13 = *(_QWORD*)(a2 + 104);
        if (v13 == 0) {
        LABEL_124:
          v69 = v89;
          for (i = v89[23]; i != 0; i = v69[23]) {
            v71 = *(_QWORD*)(i + 1168);
            v69[23] = v71;
            if (v71 != 0) {
              *(_QWORD*)(v71 + 1160) = 0;
            }
            *(_OWORD*)(i + 1160) = (__typeof__(*(_OWORD*)(i + 1160))){0};
          }
          v72 = *(_QWORD*)(a2 + 184);
          if (v72 != 0) {
            v73 = 0;
            do {
              v74 = v73;
              v73 = CudaDriverRoutine_c7d30((__int64)v89, (unsigned int*)v72);
              if (v74 != 0) {
                *(_QWORD*)(v73 + 1160) = v74;
                v75 = *(_QWORD*)(v74 + 1168);
                *(_QWORD*)(v73 + 1168) = v75;
                if (v75 != 0) {
                  *(_QWORD*)(v75 + 1160) = v73;
                }
                *(_QWORD*)(v74 + 1168) = v73;
              }
              else {
                v76 = v89;
                *(_QWORD*)(v73 + 1168) = v89[23];
                v76[23] = v73;
                v77 = *(_QWORD*)(v73 + 1168);
                if (v77 != 0) {
                  *(_QWORD*)(v77 + 1160) = v73;
                }
              }
              v72 = *(_QWORD*)(v72 + 1168);
            } while (v72 != 0);
            v69 = v89;
          }
          CudaDriverRoutine_c7c10((__int64)v69);
          v78 = CudaDriverRoutine_1a3020(a2 + 24, (unsigned __int8*)&v89);
          v79 = v89;
          if (v78 == 0) {
            v89[1] = a2;
            v79[4] = *(_DWORD*)a2;
            v79[51] = *(_DWORD*)(a2 + 204);
            v79[52] = *(_DWORD*)(a2 + 208);
            *a1 = v79;
            cuda_driver_d7cf0((__int64)v79, nullptr, 0);
            return 0;
          }
          v80 = v78;
          goto LABEL_154;
        }
        if (a3 != 3) {
          v21 = CudaDriverData_14225e0;
          while (2) {
            v22 = *(unsigned int*)(v13 + 4);
            v107 = nullptr;
            switch (v22) {
            case 0LL:
              v41 = *(_OWORD*)(v13 + 32);
              v42 = *(_OWORD*)(v13 + 48);
              v43 = *(_QWORD*)(v13 + 1200);
              v103_.v106 = *(_QWORD*)(v13 + 80);
              v103_.v103 = v41;
              v103_.v104 = v42;
              v103_.v105 = *(_OWORD*)(v13 + 64);
              v12 = cuda_driver_d6360((__int64*)&v107, (__int64)v89, nullptr, 0,
                                      0, 0, (__int64)&v103_.v103, v43, 2);
              if (v12 == 0) {
                v44 = (__int64)v107;
                v12 = CudaDriverRoutine_30a40(1, 0, (__int64)v107, v13);
                v45 = *(_OWORD*)(v13 + 808);
                v46 = *(_OWORD*)(v13 + 840);
                *(_OWORD*)(v44 + 824) = *(_OWORD*)(v13 + 824);
                *(_OWORD*)(v44 + 840) = v46;
                *(_OWORD*)(v44 + 808) = v45;
                if (*(_BYTE*)(v13 + 560) != 0) {
                  *(_BYTE*)(v44 + 560) = 1;
                  *(_BYTE*)(v44 + 561) = *(_BYTE*)(v13 + 561);
                  *(_DWORD*)(v44 + 564) = *(_DWORD*)(v13 + 564);
                  *(_DWORD*)(v44 + 568) = *(_DWORD*)(v13 + 568);
                  *(_DWORD*)(v44 + 572) = *(_DWORD*)(v13 + 572);
                  *(_DWORD*)(v44 + 576) = *(_DWORD*)(v13 + 576);
                  *(_DWORD*)(v44 + 580) = *(_DWORD*)(v13 + 580);
                  *(_DWORD*)(v44 + 584) = *(_DWORD*)(v13 + 584);
                  *(_DWORD*)(v44 + 588) = *(_DWORD*)(v13 + 588);
                  *(_DWORD*)(v44 + 592) = *(_DWORD*)(v13 + 592);
                }
              }
              goto LABEL_104;
            case 1LL:
              v47 = v89;
              memcpy_plt((__int64)&v103_.v103, v13 + 40, 0x1D8u);
              v48 = *(_OWORD*)(v13 + 696);
              v49 = *(_OWORD*)(v13 + 712);
              v90_.v102 = *(_QWORD*)(v13 + 728);
              v90_.v100 = v48;
              v90_.v101 = v49;
              v50 = *(_OWORD*)(v13 + 648);
              v90_.v96 = *(_OWORD*)(v13 + 632);
              v90_.v97 = v50;
              v51 = *(_OWORD*)(v13 + 680);
              v90_.v98 = *(_OWORD*)(v13 + 664);
              v90_.v99 = v51;
              v52 = *(_OWORD*)(v13 + 584);
              v90_.v92 = *(_OWORD*)(v13 + 568);
              v90_.v93 = v52;
              v53 = *(_OWORD*)(v13 + 616);
              v90_.v94 = *(_OWORD*)(v13 + 600);
              v90_.v95 = v53;
              v54 = *(_OWORD*)(v13 + 552);
              v88 = *(_DWORD**)(v13 + 752);
              v90_.v90 = *(_OWORD*)(v13 + 536);
              v90_.v91 = v54;
              v12 = nvidia_d6550((__int64*)&v107, (__int64)v47, nullptr, 0, 0,
                                 0, (__int64)&v103_.v103, (__int64)&v90_.v90,
                                 v88, 2);
              goto LABEL_104;
            case 2LL:
              v27 = *(_OWORD*)(v13 + 40);
              v28 = *(_OWORD*)(v13 + 56);
              v29 = *(_QWORD*)(v13 + 1200);
              v30 = v89;
              v108[0] = 0;
              v103_.v103 = v27;
              v103_.v104 = v28;
              v103_.v105 = *(_OWORD*)(v13 + 72);
              v12 =
                  cuda_driver_d6100(v108, (__int64)v89, 2, nullptr, 0, 0, 0, 2);
              if (v12 == 0) {
                v31 = v108[0];
                *(_QWORD*)((char*)((_UNKNOWN*)0x13CLL) + v108[0] + 4) = v30[15];
                v30[15] = v31 + 32;
                v32 = *(_QWORD*)((char*)((_UNKNOWN*)0x13CLL) + v31 + 4);
                if (v32 != 0) {
                  *(_QWORD*)(v32 + 280) = v31 + 32;
                }
                if (v30[16] == 0) {
                  v30[16] = v30[15];
                }
                nvidia_d6af0(v31, (__int64*)&v103_.v103, v29);
                v107 = (_QWORD*)v31;
                v12 = 0;
                *(_DWORD*)((char*)((char*)0x20LL) + v31) = 5;
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                               *(__int64*)((char*)((__int64*)0x10LL) +
                                           (_QWORD)v21) +
                               4) != 0) {
                  v33 = *(int*)((char*)((int*)0x4LL) + v31);
                  LODWORD(v90_.v90) = 24;
                  DWORD1(v90_.v90) = v33;
                  *((_QWORD*)&v90_.v90 + 1) =
                      *(__int64*)((char*)((__int64*)0x18LL) + v31);
                  *(_QWORD*)&v90_.v91 = v31;
                  cuda_driver_20b420(2u, 0x25u, (__int64)&v90_.v90);
                  v12 = 0;
                }
              }
              goto LABEL_104;
            case 3LL:
              v34 = *(_OWORD*)(v13 + 32);
              v108[0] = 0;
              v90_.v90 = v34;
              v12 =
                  cuda_driver_d6100(v108, (__int64)v89, 3, nullptr, 0, 0, 0, 2);
              if (v12 != 0) {
                goto LABEL_104;
              }
              v35 = v108[0];
              *(_OWORD*)((char*)((char*)0x20LL) + v108[0]) = v90_.v90;
              if (*(_DWORD*)((char*)((__int64*)0x30LL) +
                             *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                                        (_QWORD)v21)) != 0) {
                LODWORD(v103_.v103) = 40;
                v36 = *(__int64*)((char*)((__int64*)0x18LL) + v35);
                *((_QWORD*)&v103_.v104 + 1) = v35 + 32;
                *((_QWORD*)&v103_.v103 + 1) = v36;
                *(_QWORD*)&v103_.v104 = v35;
                cuda_driver_20b420(0x13u, 0xCu, (__int64)&v103_.v103);
                v12 = 0;
              }
              v37 = *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v21);
              v107 = (_QWORD*)v35;
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + v37 + 4) == 0) {
                goto LABEL_104;
              }
              v38 = *(int*)((char*)((int*)0x4LL) + v35);
              LODWORD(v103_.v103) = 24;
              DWORD1(v103_.v103) = v38;
              *((_QWORD*)&v103_.v103 + 1) =
                  *(__int64*)((char*)((__int64*)0x18LL) + v35);
              *(_QWORD*)&v103_.v104 = v35;
              goto LABEL_91;
            case 4LL:
              v12 = cuda_driver_d7810(&v107, (__int64)v89, 0, 0, 0, 0, 1,
                                      (__int64*)(v13 + 32),
                                      *(_QWORD*)(v13 + 48), (__int64)v4, 2u);
              goto LABEL_104;
            case 5LL:
              *(_QWORD*)&v90_.v90 = 0;
              v12 = cuda_driver_d6100((__int64*)&v90_.v90, (__int64)v89, 5,
                                      nullptr, 0, 0, 0, 2);
              if (v12 != 0) {
                goto LABEL_104;
              }
              v55 = *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v21);
              v107 = (_QWORD*)v90_.v90;
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + v55 + 4) == 0) {
                goto LABEL_104;
              }
              v56 = 0;
              LODWORD(v103_.v103) = 24;
              if ((_QWORD)v90_.v90 != 0) {
                v57 = *(__int64*)((char*)((__int64*)0x18LL) + v90_.v90);
                DWORD1(v103_.v103) = *(int*)((char*)((int*)0x4LL) + v90_.v90);
              }
              else {
                v57 = 0;
              }
              *((_QWORD*)&v103_.v103 + 1) = v57;
              *(_QWORD*)&v103_.v104 = v90_.v90;
              goto LABEL_103;
            case 6LL:
              v39 = *(_QWORD*)(v13 + 32);
              *(_QWORD*)&v90_.v90 = 0;
              v40 = 6;
              goto LABEL_88;
            case 7LL:
              v39 = *(_QWORD*)(v13 + 32);
              v40 = 7;
              *(_QWORD*)&v90_.v90 = 0;
            LABEL_88:
              v12 = cuda_driver_d6100((__int64*)&v90_.v90, (__int64)v89, v40,
                                      nullptr, 0, 0, 0, 2);
              if (v12 != 0) {
                goto LABEL_104;
              }
              v58 = v90_.v90;
              v59 = *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v21);
              *(_QWORD*)(v90_.v90 + 32) = v39;
              v107 = (_QWORD*)v58;
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + v59 + 4) == 0) {
                goto LABEL_104;
              }
              v60 = *(_DWORD*)(v58 + 4);
              LODWORD(v103_.v103) = 24;
              DWORD1(v103_.v103) = v60;
              *((_QWORD*)&v103_.v103 + 1) = *(_QWORD*)(v58 + 24);
              *(_QWORD*)&v103_.v104 = v58;
            LABEL_91:
              v56 = v12;
            LABEL_103:
              cuda_driver_20b420(2u, 0x25u, (__int64)&v103_.v103);
              v12 = v56;
              goto LABEL_104;
            case 8LL:
              *(_QWORD*)&v90_.v90 = 0;
              v23 = cuda_driver_d6100((__int64*)&v90_.v90, (__int64)v89, 8,
                                      nullptr, 0, 0, 0, 2);
              v24 = v90_.v90;
              if (v23 != 0) {
                goto LABEL_94;
              }
              v23 = cuda_driver_unplaced_5_d8640((_QWORD*)v90_.v90,
                                                 (__int128*)(v13 + 32));
              if (v23 != 0) {
                goto LABEL_94;
              }
              v62 = *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v21);
              v107 = (_QWORD*)v24;
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + v62 + 4) == 0) {
                goto LABEL_100;
              }
              LODWORD(v103_.v103) = 24;
              if (v24 == 0) {
                goto LABEL_98;
              }
              goto LABEL_63;
            case 9LL:
              *(_QWORD*)&v90_.v90 = 0;
              v23 = cuda_driver_d6100((__int64*)&v90_.v90, (__int64)v89, 9,
                                      nullptr, 0, 0, 0, 2);
              v24 = v90_.v90;
              if (v23 != 0 ||
                  (v23 = cuda_driver_unplaced_5_d8640(
                       (_QWORD*)v90_.v90, (__int128*)(v13 + 32))) != 0) {
              LABEL_94:
                v61 = v23;
                cuda_driver_c3200(v24, 0);
                v12 = v61;
              }
              else {
                v25 = *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v21);
                v107 = (_QWORD*)v24;
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + v25 + 4) != 0) {
                  LODWORD(v103_.v103) = 24;
                  if (v24 != 0) {
                  LABEL_63:
                    v26 = *(__int64*)((char*)((__int64*)0x18LL) + v24);
                    DWORD1(v103_.v103) = *(int*)((char*)((int*)0x4LL) + v24);
                  }
                  else {
                  LABEL_98:
                    v26 = 0;
                  }
                  *((_QWORD*)&v103_.v103 + 1) = v26;
                  *(_QWORD*)&v103_.v104 = v24;
                  cuda_driver_20b420(2u, 0x25u, (__int64)&v103_.v103);
                  v12 = 0;
                }
                else {
                LABEL_100:
                  v12 = 0;
                }
              }
            LABEL_104:
              if (v12 != 0) {
                v17 = v107;
              }
              else {
                if (v4 != nullptr) {
                  if (v4[1] == 2) {
                    v63 = (__int64)v4;
                  }
                  else {
                    v63 = 0;
                  }
                }
                else {
                  v63 = 0;
                }
                v17 = v107;
                v12 = CudaDriverRoutine_c7ca0((__int64)v107, (unsigned int*)v13,
                                              v63);
                if (*(_DWORD*)((char*)((_UNKNOWN*)0xB0LL) +
                               *(__int64*)((char*)((__int64*)0x10LL) +
                                           (_QWORD)v21) +
                               4) != 0) {
                  v64 = v17[139];
                  v65 = v12;
                  LODWORD(v103_.v103) = 40;
                  *((_QWORD*)&v103_.v103 + 1) = v17[3];
                  *(_QWORD*)&v103_.v104 = v17;
                  if (v64 != 0) {
                    v66 = *(_QWORD*)(v64 + 24);
                  }
                  else {
                    v66 = 0;
                  }
                  *((_QWORD*)&v103_.v104 + 1) = v66;
                  *(_QWORD*)&v103_.v105 = v64;
                  cuda_driver_20b420(2u, 0x2Du, (__int64)&v103_.v103);
                  v12 = v65;
                }
              }
              if (v12 != 0 & v17 != nullptr) {
                goto LABEL_152;
              }
              if (v12 != 0) {
                goto LABEL_153;
              }
              v13 = *(_QWORD*)(v13 + 1136);
              if (v13 == 0) {
                goto LABEL_123;
              }
              continue;
            case 10LL:
            case 11LL:
              v12 = cuda_driver_d6100((__int64*)&v107, (__int64)v89, v22,
                                      nullptr, 0, 0, 0, 2);
              goto LABEL_104;
            case 12LL:
              v12 = cuda_driver_unplaced_5_d83a0((__int64*)&v107, (__int64)v89,
                                                 nullptr, 0, 0, 0, v13 + 32, 2);
              goto LABEL_104;
            case 13LL:
              v12 = cuda_driver_d7d60(&v107, (__int64)v89, 0, 0, 0, 0,
                                      (unsigned __int64*)(v13 + 32), 1, v4);
              goto LABEL_104;
            default:
              v12 = 999;
              goto LABEL_153;
            }
          }
        }
        while (1) {
          *(_QWORD*)&v103_.v103 = 0;
          v14 = v89;
          v15 = *(_DWORD*)(v13 + 4);
          if (v15 == 4) {
            v12 = cuda_driver_d7810(&v103_.v103, (__int64)v89, 0, 0, 0, 0, 1,
                                    (__int64*)(v13 + 32), *(_QWORD*)(v13 + 48),
                                    0, 2u);
          }
          else {
            v12 = v15 == 13
                      ? cuda_driver_d7d60(&v103_.v103, (__int64)v89, 0, 0, 0, 0,
                                          (unsigned __int64*)(v13 + 32), 1,
                                          nullptr)
                      : cuda_driver_d6100((__int64*)&v103_.v103, (__int64)v89,
                                          v15, nullptr, 0, 0, 0, 2);
          }
          if (v12 != 0) {
            break;
          }
          v16 = *(_DWORD*)(v13 + 4);
          v17 = (_QWORD*)v103_.v103;
          if (v16 > 9) {
            if (v16 == 10) {
              v12 = CudaDriverRoutine_d3940(v103_.v103, *(_QWORD*)(v13 + 1112));
              if (v12 != 0) {
                goto LABEL_152;
              }
            }
            else if (v16 == 11) {
              CudaDriverRoutine_d39b0((_QWORD*)v103_.v103,
                                      *(_QWORD**)(v13 + 1112));
            }
          }
          else if (v16 == 1) {
            *(_QWORD*)(v103_.v103 + 768) = v14[17];
            v14[17] = v17 + 4;
            v19 = v17[96];
            if (v19 != 0) {
              *(_QWORD*)(v19 + 728) = v17 + 4;
            }
            if (v14[18] == 0) {
              v14[18] = v14[17];
            }
          }
          else if (v16 == 2) {
            *(_QWORD*)(v103_.v103 + 320) = v14[15];
            v14[15] = v17 + 4;
            v18 = v17[40];
            if (v18 != 0) {
              *(_QWORD*)(v18 + 280) = v17 + 4;
            }
            if (v14[16] == 0) {
              v14[16] = v14[15];
            }
          }
          v12 = CudaDriverRoutine_c7ca0((__int64)v17, (unsigned int*)v13, 0);
          *(_QWORD*)(v13 + 1120) = v17;
          if (v12 != 0) {
          LABEL_152:
            v87 = v12;
            cuda_driver_c3200((__int64)v17, 0);
            v12 = v87;
            break;
          }
          v13 = *(_QWORD*)(v13 + 1136);
          if (v13 == 0) {
          LABEL_123:
            v68 = *(_QWORD*)(a2 + 104);
            if (v68 == 0) {
              goto LABEL_124;
            }
            while (1) {
              v81 = v89;
              v82 = CudaDriverRoutine_c7d30((__int64)v89, (unsigned int*)v68);
              v83 = *(unsigned int*)(v68 + 1036);
              if ((_DWORD)v83 != 0) {
                break;
              }
            LABEL_146:
              v68 = *(_QWORD*)(v68 + 1136);
              if (v68 == 0) {
                goto LABEL_124;
              }
            }
            v84 = v82;
            v85 = (_QWORD*)(*(_QWORD*)(v68 + 1000) + 8LL);
            while (1) {
              v86 = CudaDriverRoutine_c7d30((__int64)v81,
                                            (unsigned int*)*(v85 - 1));
              v12 = cuda_driver_d5f10(v86, v84, v85, 0);
              if (v12 != 0) {
                goto LABEL_153;
              }
              --v83;
              v85 += 2;
              if (v83 == 0) {
                goto LABEL_146;
              }
            }
          }
        }
      }
    LABEL_153:
      v80 = v12;
      v79 = v89;
    LABEL_154:
      cuda_driver_c36c0((__int64)v79);
      return v80;
    }
    v12 = CudaDriverRoutine_dcd80((__int64)v89, a2, a3);
    if (v12 != 0) {
      goto LABEL_153;
    }
    goto LABEL_22;
  }
  if (a4[1] == 2) {
    v8 = a4;
  }
  else {
    v8 = nullptr;
  }
  result = cuda_driver_c30d0(&v89, a3, v8);
  if ((_DWORD)result == 0) {
    goto LABEL_8;
  }
  return result;
}

__int64 nvidia_e9c60(__int64* a1, __int64 a2, int* a3, __int64* a4,
                     unsigned int a5, __int64 a6, __int64 a7, unsigned int a8,
                     char a9)
{
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  char v20;
  unsigned int v21;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  int v32;
  int v33;
  __int64 v34;
  char* v35;
  char v36;
  int v37;
  unsigned __int64 v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  char v42;
  int v43;
  __int64 v44;
  unsigned int* v45;
  int* v46;
  int v47;
  unsigned int v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  char* v57;
  char* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64* v61;
  _QWORD* v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  int v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  __int64 v87;
  char v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64* v94;
  unsigned int v95;
  char v96;
  int v97;
  __int64 v98;
  __int64 v99;
  struct {
    __int128 v100;
    __int128 v101;
    __int128 v102;
    __int64 v103;
  } v100_;
  _QWORD v104[3];
  __int64 v105;
  _BYTE v106[56];
  struct {
    _BYTE v107[56];
    int v108;
  } v107_;
  struct {
    _QWORD v109[8];
    __int128 v110;
    __int128 v111;
    __int128 v112;
    __int128 v113;
  } v109_;
  __int64 v114;
  _DWORD v115[64];
  _QWORD v116[32];
  unsigned __int64 v117;
  struct {
    _QWORD v118[2];
    __int64 v119;
    char gap1112_[8];
    __int64 v120;
    char gap1128_[12];
    bool v121;
  } v118_;

  v100_.v103 = 0;
  v100_.v101 = (__typeof__(v100_.v101)){0};
  v100_.v102 = (__typeof__(v100_.v102)){0};
  v100_.v100 = (__typeof__(v100_.v100)){0};
  v17 = CudaDriverRoutine_12e510(1, 4552);
  v18 = 2;
  if (v17 == 0) {
    return v18;
  }
  v19 = v17;
  CudaDriverRoutine_108450((_QWORD*)(v17 + 4120), 63, 0);
  *(_QWORD*)(v19 + 4144) = CudaDriverRoutine_1a1f40(128);
  *(_QWORD*)(v19 + 4152) = CudaDriverRoutine_1a1f40(8);
  *(_DWORD*)v19 = 2;
  if ((unsigned int)CudaDriverRoutine_e9a20(v19, a6, a7, a8, a9) != 0) {
    goto LABEL_3;
  }
  v21 = cuda_driver_e45e0(a3, a4, a5, (__int64)&v100_.v100);
  if (v21 != 0) {
    goto LABEL_5;
  }
  if (DWORD2(v100_.v102) != 0) {
    if (*((_QWORD*)&v100_.v101 + 1) == 0 || (_QWORD)v100_.v102 == 0) {
      nvidia_ed630(
          (__int64)"CUDA", 0,
          "CU_JIT_GLOBAL_SYMBOL_NAMES, CU_JIT_GLOBAL_SYMBOL_ADDRESSES and "
          "CU_JIT_GLOBAL_SYMBOL_COUNT must be specified together\n");
    LABEL_3:
      v20 = 0;
      v18 = 1;
      goto LABEL_7;
    }
    v23 = CudaDriverRoutine_12e510(DWORD2(v100_.v102), 8);
    *(_QWORD*)(v19 + 4440) = v23;
    if (v23 == 0 || (v24 = CudaDriverRoutine_12e510(DWORD2(v100_.v102), 8),
                     *(_QWORD*)(v19 + 4448) = v24, v24 == 0)) {
    LABEL_6:
      v20 = 0;
      goto LABEL_7;
    }
    if (DWORD2(v100_.v102) != 0) {
      v25 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(v19 + 4440) + 8 * v25) =
            *(_QWORD*)(*((_QWORD*)&v100_.v101 + 1) + 8 * v25);
        *(_QWORD*)(*(_QWORD*)(v19 + 4448) + 8 * v25) =
            *(_QWORD*)(v100_.v102 + 8 * v25);
        ++v25;
        v26 = DWORD2(v100_.v102);
      } while (v25 < DWORD2(v100_.v102));
    }
    else {
      v26 = 0;
    }
    *(_DWORD*)(v19 + 4456) = v26;
  }
  v27 = (unsigned int)CudaDriverData_1434ac0;
  if (CudaDriverData_1434ac0 != 0) {
    v28 = CudaDriverData_14348c0;
    while (1) {
      v30 = *v28++;
      v29 = v30;
      if ((*(_WORD*)(v30 + 16848) & 0x20) != 0) {
        break;
      }
      if (--v27 == 0) {
        goto LABEL_27;
      }
    }
    *(_QWORD*)(v19 + 4168) = CudaDriverStub_9b050(v29);
  }
LABEL_27:
  v31 = *(__int64**)(v19 + 4168);
  if (v31 != nullptr) {
    v21 = CudaDriverRoutine_1272d0(*v31, v19, (_QWORD*)(v19 + 4160));
    if (v21 != 0) {
    LABEL_5:
      v18 = v21;
      goto LABEL_6;
    }
    v32 = 1;
  }
  else {
    v32 = 0;
  }
  v33 = *(_DWORD*)a2;
  v114 = a2;
  if (v33 == 1180844977) {
    v34 = *(_QWORD*)(a2 + 8);
    if (*(int*)(a2 + 4) > 1) {
      if (v34 != 0) {
      LABEL_37:
        v114 = *(_QWORD*)(a2 + 8);
        goto LABEL_38;
      }
    }
    else {
      v35 = *(const char**)(a2 + 16);
      if (v34 != 0) {
        if (v35 == nullptr) {
          goto LABEL_37;
        }
      }
      else if (v35 != nullptr && (unsigned int)CudaDriverRoutine_106620(
                                     v35, &v114, nullptr) == 0) {
        v36 = 0;
        *(_BYTE*)(v19 + 4177) &= ~1u;
        v37 = CudaDriverData_1434ac0;
        if (CudaDriverData_1434ac0 != 0) {
          goto LABEL_39;
        }
      LABEL_113:
        v18 = 0;
        goto LABEL_114;
      }
    }
    *(_DWORD*)(v19 + 4104) = CudaDriverData_1434ac0;
    goto LABEL_118;
  }
LABEL_38:
  v36 = 1;
  v37 = CudaDriverData_1434ac0;
  if (CudaDriverData_1434ac0 == 0) {
    goto LABEL_113;
  }
LABEL_39:
  v96 = v36;
  v97 = v32;
  v38 = 0;
  v39 = 0;
  v99 = v19 + 8;
  v98 = v19 + 40;
  do {
    v105 = 0;
    v40 = *((_QWORD*)&CudaDriverData_14347a8 + v38 + 35);
    memset(v109_.v109, 0, sizeof(v109_.v109));
    v109_.v110 = (__typeof__(v109_.v110)){0};
    v109_.v111 = (__typeof__(v109_.v111)){0};
    v109_.v112 = (__typeof__(v109_.v112)){0};
    v109_.v113 = (__typeof__(v109_.v113)){0};
    v41 = CudaDriverRoutine_e58b0(v40, a3, a4, a5, (__int64)v107_.v107,
                                  (__int64)&v105, (__int64)v106);
    if (v41 != 0) {
    LABEL_41:
      v18 = v41;
    LABEL_42:
      v42 = 1;
      goto LABEL_43;
    }
    if (v107_.v108 != 0) {
      v43 = (unsigned __int16)v107_.v108;
      if (v39 == 0) {
        goto LABEL_56;
      }
    }
    else {
      v43 = CudaDriverRoutine_e3120(v40 + 2054);
      if (v39 == 0) {
        goto LABEL_56;
      }
    }
    v44 = v39;
    v45 = v115;
    v46 = (int*)v116;
    while (1) {
      v47 = *v46++;
      if (v43 == v47) {
        break;
      }
      ++v45;
      if (--v44 == 0) {
        goto LABEL_56;
      }
    }
    v48 = *v45;
    if (*v45 != -1) {
      v49 = v99 + ((__int64)(int)v48 << 6);
      v50 = v99 + (v38 << 6);
      v51 = *(_QWORD*)(v49 + 32);
      v52 = *(_QWORD*)v49;
      *(_BYTE*)(v50 + 40) = 0;
      *(_BYTE*)(v50 + 24) = 0;
      *(_QWORD*)(v50 + 32) = v51;
      v54 = *(_QWORD*)(v49 + 8);
      v53 = *(_QWORD*)(v49 + 16);
      LOBYTE(v49) = *(_BYTE*)(v49 + 56);
      *(_QWORD*)(v50 + 8) = v54;
      *(_QWORD*)(v50 + 16) = v53;
      *(_BYTE*)(v50 + 56) = v49;
      *(_QWORD*)v50 = CudaDriverRoutine_a2830(v52);
      v55 = *(_QWORD*)(v19 + 4144);
      v118_.v118[0] = __PAIR64__(v38, v48);
      CudaDriverRoutine_1a2800(
          v55, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_eae50,
          (__int64)v118_.v118);
      v18 = 0;
      goto LABEL_42;
    }
  LABEL_56:
    v56 = cuda_driver_e5650(v40, v114, (__int64)v109_.v109, v105,
                            (__int64)v107_.v107, (__int64)v106);
    if (v56 != 0) {
      v18 = 0;
      v42 = 1;
      *(_DWORD*)(v19 + 4180 + 4 * v38) = v56;
      goto LABEL_43;
    }
    v57 = (const char*)v109_.v113;
    *((_DWORD*)v116 + v39) = v43;
    v115[v39++] = v38;
    if (v57 != nullptr) {
      v58 = CudaDriverRoutine_12ec20(v57);
      v59 = v38 << 6;
      v42 = 1;
      *(_QWORD*)(v98 + (v38 << 6)) = v58;
      if (v58 == nullptr) {
        v18 = 2;
        goto LABEL_43;
      }
    }
    else {
      v59 = v38 << 6;
      v42 = 0;
      *(_QWORD*)(v98 + (v38 << 6)) = "cuLibraryLoadData";
    }
    *(_BYTE*)(v19 + 48 + v59) = v42;
    v60 = v99 + (v38 << 6);
    v41 = CudaDriverRoutine_a2a80((_QWORD*)v60, *((_BOOL8*)&v109_.v110 + 1),
                                  *((__int64*)&v109_.v111 + 1));
    if (v41 != 0) {
      goto LABEL_41;
    }
    if (*(_QWORD*)v60 != 0) {
      *(_BYTE*)(v60 + 56) = CudaDriverRoutine_a2850(*(_QWORD*)v60);
    }
    v95 = v39;
    if ((_BYTE)v109_.v112 != 0) {
      v61 = (__int64*)(v99 + (v38 << 6));
      *(_QWORD*)(v60 + 8) = *((_QWORD*)&v109_.v110 + 1);
      v42 = 1;
      *((_BYTE*)v61 + 24) = 1;
      LOBYTE(v109_.v112) = 0;
    }
    else if ((*(_BYTE*)(v19 + 4177) & 1) != 0) {
      v61 = (__int64*)(v99 + (v38 << 6));
      *(_QWORD*)(v60 + 8) = *((_QWORD*)&v109_.v110 + 1);
      if (v109_.v109[0] != 0) {
        v42 = 0;
        v61[6] = v109_.v109[0];
      }
      else {
        v42 = 1;
      }
    }
    else {
      v64 = CudaDriverStub_12e330(*((_QWORD*)&v109_.v111 + 1));
      *(_QWORD*)(v60 + 8) = v64;
      v61 = (__int64*)(v99 + (v38 << 6));
      v42 = 1;
      if (v64 == 0) {
        v39 = v95;
        v18 = 2;
        goto LABEL_43;
      }
      memcpy_plt(v64, *((__int64*)&v109_.v110 + 1),
                 *((unsigned __int64*)&v109_.v111 + 1));
      *((_BYTE*)v61 + 24) = 1;
    }
    v62 = (_QWORD*)*v61;
    v61[2] = *((_QWORD*)&v109_.v111 + 1);
    v104[0] = v19;
    v104[1] = v40;
    v104[2] = v62;
    v63 = CudaDriverRoutine_a4110(
        v62, (__int64 (*)(__int64*, __int64))CudaDriverRoutine_eae90,
        (__int64)v104);
    if (v63 != 0 ||
        (v63 = CudaDriverRoutine_ab590((_QWORD*)*v61, v19, v40)) != 0) {
      v39 = v95;
      v18 = v63;
      goto LABEL_43;
    }
    v65 = *v61;
    v94 = v61;
    v66 = CudaDriverRoutine_a3070(*v61, &v117);
    v67 = v117;
    if ((*(_BYTE*)(v19 + 4480) & 4) != 0) {
      if (*(_QWORD*)(v19 + 4504) != 0) {
        v91 = v66;
        v93 = v117;
        v39 = v95;
        v18 = CudaDriverRoutine_eb440(v66, v117, 0, (bool*)v118_.v118);
        if (v18 != 0) {
          goto LABEL_104;
        }
        if (LOBYTE(v118_.v118[0]) != 0) {
          if (cuda_driver_predicates_9ae50_alt1(v40)) {
            goto LABEL_95;
          }
        }
        else {
          v72 = *(_QWORD*)(v19 + 4512);
          if (v93 < v72 || memcmp_plt(*(_QWORD*)(v19 + 4504), v91, v72) != 0) {
          LABEL_95:
            nvidia_ed630(
                (__int64)"CUDA", 0,
                "Library uses universal function/data table but indexes don't "
                "have the correct values. Use the latest Nvidi"
                "a toolkit and tools to generate the binary.\n");
          LABEL_102:
            nvidia_ed630((__int64)"CUDA", 0,
                         "You can inspect the binary with cuobjdump or readelf "
                         "to check for corrupted/missing entries.\n");
            v18 = 200;
            goto LABEL_103;
          }
        }
      }
      else {
        v39 = v95;
        v18 = CudaDriverRoutine_eb440(v66, v117, 0, (bool*)v118_.v118);
        if (v18 != 0) {
          goto LABEL_104;
        }
        if (LOBYTE(v118_.v118[0]) == 0) {
          nvidia_ed630((__int64)"CUDA", 0,
                       "Library uses universal function/data table but fatbin "
                       "missing entries. Use the latest Nvidia toolkit and too"
                       "ls to generate the binary.\n");
          goto LABEL_102;
        }
      }
    LABEL_92:
      v18 = 0;
      goto LABEL_103;
    }
    if ((*(_BYTE*)(v19 + 4480) & 2) != 0) {
      v68 = v66;
      v69 = v19;
      v70 = v40;
      v71 = v65;
    LABEL_89:
      v18 = cuda_driver_eb200(v69, v70, v71, v68, v67);
      goto LABEL_103;
    }
    v89 = v65;
    v90 = v66;
    v92 = v117;
    v39 = v95;
    v18 = CudaDriverRoutine_eb440(v66, v117, (__int64)v118_.v118, &v118_.v121);
    if (v18 != 0) {
      goto LABEL_104;
    }
    if (!v118_.v121) {
      v73 = v118_.v119;
      if (v118_.v119 != 0) {
        v74 = CudaDriverStub_12e330(v118_.v119);
        *(_QWORD*)(v19 + 4464) = v74;
        if (v74 == 0) {
          v18 = 2;
          goto LABEL_103;
        }
      }
      v75 = v118_.v120;
      if (v118_.v120 != 0) {
        v76 = CudaDriverStub_12e330(v118_.v120);
        *(_QWORD*)(v19 + 4472) = v76;
        if (v76 == 0) {
          CudaDriverRoutine_12e340(*(_QWORD*)(v19 + 4464));
          v18 = 2;
          goto LABEL_103;
        }
      }
      v71 = v89;
      v68 = v90;
      v69 = v19;
      v70 = v40;
      v67 = v92;
      *(_QWORD*)(v19 + 4488) = v73;
      *(_QWORD*)(v19 + 4496) = v75;
      *(_BYTE*)(v19 + 4480) |= 3u;
      goto LABEL_89;
    }
    if (!cuda_driver_predicates_9ae50_alt1(v40)) {
      goto LABEL_92;
    }
    v18 = 0;
    *(_BYTE*)(v19 + 4480) |= 6u;
  LABEL_103:
    v39 = v95;
  LABEL_104:
    if (v18 == 0) {
      v77 = *v94;
      v118_.v118[0] = v19;
      v118_.v118[1] = v40;
      v118_.v119 = v77;
      v18 = CudaDriverRoutine_a2880(
          v77, (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_eafc0,
          (__int64)v118_.v118);
    }
  LABEL_43:
    CudaDriverStub_107f90(&CudaDriverData_14347c0, 0, 0);
    cuda_driver_e4e00((__int64)v109_.v109, v42);
    CudaDriverStub_108070(&CudaDriverData_14347c0);
    CudaDriverRoutine_12e340(v105);
    v37 = CudaDriverData_1434ac0;
    if (v18 != 0) {
      goto LABEL_108;
    }
    ++v38;
  } while (v38 < (unsigned int)CudaDriverData_1434ac0);
  v18 = 0;
LABEL_108:
  v36 = v96;
  v32 = v97;
LABEL_114:
  *(_DWORD*)(v19 + 4104) = v37;
  if ((v36 & 1) == 0) {
    CudaDriverRoutine_12e340(v114);
  }
  if (v18 != 0) {
    v20 = 0;
  LABEL_143:
    if (v32 != 0) {
      v88 = v20;
      CudaDriverRoutine_1274c0(*(_QWORD*)(v19 + 4160));
      v20 = v88;
    }
  LABEL_7:
    cuda_driver_ea620(v19, v20);
    return v18;
  }
LABEL_118:
  if (*(_QWORD*)(v19 + 4168) != 0) {
    v78 = CudaDriverRoutine_127670(*(_QWORD*)(v19 + 4160));
    if (v78 != 0) {
      v18 = v78;
      v20 = 0;
      goto LABEL_143;
    }
    CudaDriverRoutine_1274c0(*(_QWORD*)(v19 + 4160));
    v32 = 0;
  }
  cuda_driver_ea5c0(v19);
  cuda_driver_108520((__int64)&CudaDriverData_143b9a0);
  if (CudaDriverData_143b971 != 0) {
    v79 = 0;
    if (CudaDriverData_143b972 != 0) {
      goto LABEL_136;
    }
  }
  v80 = cuda_driver_e8c60(v116);
  v81 = v116[0];
  v79 = v80;
  if (v80 == 0 && v116[0] != 0) {
    v18 = 2;
    goto LABEL_127;
  }
  if (v116[0] == 0) {
  LABEL_136:
    *(_QWORD*)(v19 + 4544) = CudaDriverData_143b998;
    CudaDriverData_143b998 = v19;
    v87 = *(_QWORD*)(v19 + 4544);
    if (v87 != 0) {
      *(_QWORD*)(v87 + 4536) = v19;
    }
    CudaDriverRoutine_1085d0((__int64)&CudaDriverData_143b9a0);
    v18 = 0;
    *a1 = v19;
    goto LABEL_139;
  }
  v82 = (__int64*)v80;
  v83 = (unsigned __int8)CudaDriverData_143b971;
  while (2) {
    v85 = *v82++;
    v84 = v85;
    if (v83 != 0 && (CudaDriverData_143b972 != 0 ||
                     *(_BYTE*)(v19 + 64 +
                               ((unsigned __int64)**(unsigned int**)(v84 + 64)
                                << 6)) == 0)) {
    LABEL_130:
      if (--v81 == 0) {
        goto LABEL_136;
      }
      continue;
    }
    break;
  }
  v86 = nvidia_e96c0(v19, v84, nullptr);
  if (v86 == 0) {
    v83 = (unsigned __int8)CudaDriverData_143b971;
    goto LABEL_130;
  }
  v18 = v86;
LABEL_127:
  CudaDriverRoutine_1085d0((__int64)&CudaDriverData_143b9a0);
LABEL_139:
  if (v79 != 0) {
    CudaDriverRoutine_12e340(v79);
  }
  if (v18 != 0) {
    v20 = 1;
    goto LABEL_143;
  }
  return v18;
}

__int64 nvidia_1092a0(__int64** a1, __int64 a2, __int64 a3, unsigned int a4)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  void (*v22)(__int64, double);
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  struct {
    unsigned int v28;
    char gap4_[4];
    __int64 v29;
    int v30;
    char gap20_[4];
    __int64 v31;
  } v28_;
  __int64 v32;
  struct {
    _QWORD v33[2];
    int v34;
    char gap60_[4];
    __int64 (*v35)();
    __int64 v36;
    __int64 v37;
  } v33_;
  __int64 v38[48];
  unsigned __int64 v39;
  __int64 v40;
  _QWORD v41[3];
  __int64 v42;

  if (*(_QWORD*)(a2 + 16336) != 0) {
    if (a4 > 3) {
      return 999;
    }
    goto LABEL_3;
  }
  v13 = a3;
  v14 = a4;
  v15 = CudaDriverRoutine_12e510(1, 32);
  if (v15 == 0) {
    return 2;
  }
  v16 = v15;
  cuda_driver_108520(a2 + 24);
  *(_QWORD*)(a2 + 16336) = v16;
  CudaDriverRoutine_12df40(&CudaDriverData_1432df4,
                           (void (*)(__int64, __int64))CudaDriverData_14232a0);
  v17 = *(_QWORD*)(a2 + 16336);
  if (CudaDriverData_1432df0 != 1) {
    CudaDriverRoutine_107f40((_QWORD*)(v17 + 8), 5, 0);
    CudaDriverRoutine_1085d0(a2 + 24);
    a4 = v14;
    a3 = v13;
    if (v14 > 3) {
      return 999;
    }
  LABEL_3:
    v28_.v29 = a3;
    v28_.v28 = a4;
    v38[1] = 2;
    v38[2] = (__int64)&v28_.v28;
    v38[0] = 0x200000001LL;
    CudaDriverData_1432df8(v38);
    if (DWORDn(v38[0], sizeof(v38[0]) / 4 - 1) == 0) {
      CudaDriverStub_107f90(*(_QWORD*)(a2 + 16336) + 8LL, 0, 0);
      v6 = *(_QWORD*)(*(_QWORD*)(a2 + 16336) + 24LL);
      if (v6 != 0) {
        while (*(_QWORD*)(v6 + 40) != v28_.v31) {
          v6 = *(_QWORD*)(v6 + 160);
          if (v6 == 0) {
            goto LABEL_7;
          }
        }
        if (v28_.v28 == 2) {
          ++*(_DWORD*)(v6 + 128);
        }
        v12 = 0;
        *a1 = (__int64*)v6;
        goto LABEL_28;
      }
    LABEL_7:
      v42 = 0;
      v39 = 0;
      v40 = 0;
      v7 = CudaDriverRoutine_12e510(1, 168);
      if (v7 == 0) {
        v12 = 2;
        goto LABEL_28;
      }
      *(_QWORD*)v7 = a2;
      v8 = (__int64*)v7;
      *(_OWORD*)(v7 + 24) = (__typeof__(*(_OWORD*)(v7 + 24))){0};
      *(_OWORD*)(v7 + 8) = (__typeof__(*(_OWORD*)(v7 + 8))){0};
      *(_OWORD*)(v7 + 120) = (__typeof__(*(_OWORD*)(v7 + 120))){0};
      *(_OWORD*)(v7 + 40) = (__typeof__(*(_OWORD*)(v7 + 40))){0};
      *(_OWORD*)(v7 + 152) = (__typeof__(*(_OWORD*)(v7 + 152))){0};
      *(_OWORD*)(v7 + 136) = (__typeof__(*(_OWORD*)(v7 + 136))){0};
      *(_OWORD*)(v7 + 104) = (__typeof__(*(_OWORD*)(v7 + 104))){0};
      *(_OWORD*)(v7 + 88) = (__typeof__(*(_OWORD*)(v7 + 88))){0};
      *(_OWORD*)(v7 + 72) = (__typeof__(*(_OWORD*)(v7 + 72))){0};
      v9 = v28_.v30;
      *(_OWORD*)(v7 + 56) = (__typeof__(*(_OWORD*)(v7 + 56))){0};
      *(_DWORD*)(v7 + 128) = 1;
      *(_DWORD*)(v7 + 48) = v9;
      *(_QWORD*)(v7 + 32) = CudaDriverRoutine_1a28d0(16);
      v32 = v28_.v31;
      v33_.v35 = cuda_driver_109c80_ptr;
      v10 = CudaDriverStub_203210(a2, 0, 2, 0, (__int64)&v39);
      if (v10 == 0) {
        v8[15] = v39;
        v11 = *(_QWORD*)(a2 + 80);
        *(_OWORD*)v38 = CudaDriverData_1116080;
        memset(&v38[2], 0, 368);
        v10 = cuda_driver_1da1b0(v11, v38, 0x10000, &v40);
        if (v10 == 0) {
          v10 = CudaDriverStub_2033a0(v39, v40);
          if (v10 == 0) {
            if (*(_DWORD*)(*(_QWORD*)(*v8 + 64) + 21864LL) == 4) {
              (*(void (**)(__int64, __int64))(
                  *(_QWORD*)(*(_QWORD*)(v40 + 72) + 632LL) + 2320LL))(
                  *(_QWORD*)(v40 + 72), (__int64)v33_.v33 + 4);
              LODWORD(v33_.v33[0]) = v38[27];
            }
            v19 = CudaDriverStub_1dbf90(v40);
            v33_.v33[1] = v19;
            v20 = v40;
            v21 = v33_.v33[0];
            *((_DWORD*)v8 + 24) = v19;
            v33_.v34 = 0;
            v41[0] = 0x200000001LL;
            v8[14] = v20;
            v8[11] = v21;
            v41[1] = 0;
            v41[2] = &v32;
            v22 = (void (*)(__int64, double))CudaDriverData_1432df8;
            *(__int64*)((char*)v8 + 100) = 0x100000000LL;
            v22((__int64)v41, COERCE_DOUBLE(0x100000000LL));
            if (DWORDn(v41[0], sizeof(v41[0]) / 4 - 1) != 0) {
              v12 = 999;
              goto LABEL_12;
            }
            v23 = v33_.v37;
            v38[0] = 0x91D001A49LL;
            memset(&v38[1], 0, 376);
            v38[27] = v33_.v36;
            v8[7] = v33_.v36;
            v10 = cuda_driver_1da1b0(*(_QWORD*)(a2 + 80), v38, v23, &v42);
            if (v10 == 0) {
              v24 = v32;
              v8[10] = v42;
              v25 = v33_.v37;
              v8[5] = v24;
              *((_DWORD*)v8 + 16) = v25;
              v8[20] = *(_QWORD*)(*(_QWORD*)(a2 + 16336) + 24LL);
              *(_QWORD*)(*(_QWORD*)(a2 + 16336) + 24LL) = v8;
              v26 = *(_QWORD*)(*(_QWORD*)(a2 + 16336) + 24LL);
              v27 = *(_QWORD*)(v26 + 160);
              if (v27 != 0) {
                *(_QWORD*)(v27 + 152) = v26;
              }
              v12 = 0;
              *a1 = v8;
              goto LABEL_28;
            }
          }
        }
      }
      v12 = v10;
    LABEL_12:
      CudaDriverRoutine_1090c0(v8);
      CudaDriverRoutine_12e340((__int64)v8);
    LABEL_28:
      CudaDriverStub_108070(*(_QWORD*)(a2 + 16336) + 8LL);
      return v12;
    }
    return 999;
  }
  if (v17 != 0) {
    while (*(_QWORD*)(v17 + 24) != 0) {
      CudaDriverRoutine_1090c0(*(__int64**)(v17 + 24));
      v17 = *(_QWORD*)(a2 + 16336);
    }
    CudaDriverRoutine_12e340(v17);
  }
  CudaDriverRoutine_1085d0(a2 + 24);
  return 999;
}

__int64 nvidia_10e520(__int64* a1, __int64* a2)
{
  unsigned int* v4;
  _QWORD* v5;
  unsigned int v6;
  unsigned int* v7;
  char* v8;
  bool v10;

  v4 = (unsigned int*)(a2 + 23);
  CudaDriverRoutine_eec70(*a2, *a1);
  v5 = (_QWORD*)CudaDriverData_14230e0;
  CudaDriverStub_107f90(*(_QWORD*)CudaDriverData_14230e0, 0, 0);
  if ((unsigned int)CudaDriverRoutine_1fc4a0((__int64)v4, (__int64)a1, 1u,
                                             &v10) != 0) {
    if (v10) {
      v6 = (*(__int64 (**)(__int64, __int64))(*a1 + 21048))(*a1, *a2);
      if (v6 != 0) {
        v7 = CudaDriverRoutine_b4720(v6);
        if (v7 != nullptr) {
          v8 = *((const char**)v7 + 1);
        }
        else {
          v8 = "UNRECOGNIZED_ERROR";
        }
        nvidia_ed630(
            (__int64)"CUDA", 0,
            "Failed to enable peer mapping in the OS abstraction layer: %s\n",
            v8);
        CudaDriverRoutine_1fc5a0(v4, (__int64)a1, 1, nullptr);
      }
    }
    else {
      v6 = 0;
    }
  }
  else {
    v6 = 2;
  }
  CudaDriverStub_108070(*v5);
  return v6;
}

void nvidia_124d80()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;

  if (CudaDriverData_143bd88 != 0) {
    CudaDriverRoutine_129750();
    v0 = CudaDriverData_143bd88;
    if (*(_QWORD*)(CudaDriverData_143bd88 + 472) != 0) {
      CudaDriverRoutine_1a40e0(*(_QWORD*)(CudaDriverData_143bd88 + 472));
      v0 = CudaDriverData_143bd88;
      *(_QWORD*)(CudaDriverData_143bd88 + 472) = 0;
    }
    if (*(_QWORD*)(v0 + 464) != 0) {
      CudaDriverRoutine_1a40e0(*(_QWORD*)(v0 + 464));
      v0 = CudaDriverData_143bd88;
      *(_QWORD*)(CudaDriverData_143bd88 + 464) = 0;
    }
    if (*(_QWORD*)(v0 + 448) != 0) {
      CudaDriverRoutine_1a2b00(
          *(_QWORD*)(v0 + 448),
          (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_124ee0, 0);
      CudaDriverRoutine_1a2910(*(_QWORD*)(CudaDriverData_143bd88 + 448));
      v0 = CudaDriverData_143bd88;
      *(_QWORD*)(CudaDriverData_143bd88 + 448) = 0;
    }
    if (*(_QWORD*)(v0 + 40) != 0) {
      CudaDriverRoutine_1a2910(*(_QWORD*)(v0 + 40));
      v0 = CudaDriverData_143bd88;
      *(_QWORD*)(CudaDriverData_143bd88 + 40) = 0;
    }
    if (*(_BYTE*)(v0 + 440) != 0) {
      if (*(_BYTE*)(v0 + 441) != 0) {
        CudaDriverStub_107f90(v0, 0, 0);
        (*(void (**)(__int64))(CudaDriverData_143bd88 + 96))(0);
        CudaDriverStub_108070(CudaDriverData_143bd88);
      }
      v1 = (unsigned int)CudaDriverData_1434ac0;
      if (CudaDriverData_1434ac0 != 0) {
        v2 = 0;
        do {
          v3 = *((_QWORD*)&CudaDriverData_14347a8 + v2 + 35);
          if ((*(_WORD*)(v3 + 16848) & 0x20) != 0) {
            (*(void (**)(__int64))(CudaDriverData_143bd88 + 64))(v3);
            v1 = (unsigned int)CudaDriverData_1434ac0;
          }
          ++v2;
        } while (v2 < v1);
      }
    }
    CudaDriverRoutine_107f60((_QWORD*)CudaDriverData_143bd88);
    CudaDriverRoutine_12e340(CudaDriverData_143bd88);
    CudaDriverData_143bd88 = 0;
  }
}

__int64 nvidia_1255b0(__int64 a1)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;

  if (*(_BYTE*)(a1 + 376) == 0) {
    return 0;
  }
  if ((*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) + 16848LL) & 0x20) ==
      0) {
    return 801;
  }
  v3 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverStub_107f90(*(_QWORD*)CudaDriverData_1423360, 0, 0);
  v4 = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(v4 + 64);
  if (*(_DWORD*)(v5 + 17076) == 0) {
    v6 = (*(__int64 (**)(__int64))(*v3 + 136LL))(v5);
    if (v6 != 0) {
      goto LABEL_8;
    }
    v4 = *(_QWORD*)(a1 + 24);
  }
  v6 = 0;
  *(_BYTE*)(a1 + 377) = 1;
  ++*(_DWORD*)(*(_QWORD*)(v4 + 64) + 17076LL);
LABEL_8:
  v7 = v6;
  CudaDriverStub_108070(*v3);
  return v7;
}

__int64 nvidia_127d40()
{
  unsigned int v0;
  _QWORD* v1;
  unsigned __int64 v2;
  __int64 v4;
  __int64 v6;
  int v7;

  if ((CudaDriverData_1436018 & 1) == 0) {
    return 0;
  }
  v1 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverStub_107f90(*(_QWORD*)CudaDriverData_1423360, 0, 0);
  v2 = (unsigned int)CudaDriverData_1434ac0;
  if (*(_DWORD*)(*v1 + 456LL) == 0 | CudaDriverData_1434ac0 == 0) {
  LABEL_8:
    v0 = 0;
    goto LABEL_25;
  }
  v4 = 0;
  while (*(_DWORD*)(*v1 + 4 * v4 + 480) == 0 | v2 == 0) {
  LABEL_9:
    if (++v4 >= v2) {
      goto LABEL_8;
    }
  }
  v6 = 0;
  while (1) {
    if (v4 != v6 && *(_QWORD*)(*v1 + 8 * v6 + 736) != 0) {
      if ((unsigned __int8)CudaDriverRoutine_eec70(
              CudaDriverData_14348c0[v4], CudaDriverData_14348c0[v6]) == 0 ||
          (unsigned __int8)CudaDriverRoutine_eec70(
              CudaDriverData_14348c0[v6], CudaDriverData_14348c0[v4]) == 0) {
        break;
      }
      v7 = (*(__int64 (**)(__int64, __int64))(
          CudaDriverData_14348c0[v4] + 21048))(CudaDriverData_14348c0[v4],
                                               CudaDriverData_14348c0[v6]);
      if (v7 != 0) {
        if (v7 == 711) {
          v0 = 1;
          *(_BYTE*)(*v1 + 1312LL) = 1;
          goto LABEL_25;
        }
      }
      else {
        (*(void (**)(__int64, __int64))(CudaDriverData_14348c0[v4] + 21056))(
            CudaDriverData_14348c0[v4], CudaDriverData_14348c0[v6]);
      }
    }
    v2 = (unsigned int)CudaDriverData_1434ac0;
    if (++v6 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
      goto LABEL_9;
    }
  }
  v0 = 1;
LABEL_25:
  CudaDriverStub_108070(*v1);
  return v0;
}

__int64 nvidia_12b0c0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 result;

  *(_QWORD*)CudaDriverData_1423370 = 0;
  v0 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    return 0;
  }
  v1 = 0;
  while (1) {
    result = (*(__int64 (**)(__int64))(v0[v1 + 35] + 20392LL))(v0[v1 + 35]);
    if ((_DWORD)result != 0) {
      break;
    }
    if (++v1 >= (unsigned __int64)*(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                                   (_QWORD)v0)) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_12f540()
{
  __int64 v0;
  __int64 result;

  if (CudaDriverData_1434ac0 == 0) {
    return 0;
  }
  v0 = 0;
  while (1) {
    result = (*(__int64 (**)(__int64))(
        *((_QWORD*)&CudaDriverData_14347a8 + v0 + 35) + 21168LL))(
        *((_QWORD*)&CudaDriverData_14347a8 + v0 + 35));
    if ((_DWORD)result != 0) {
      break;
    }
    if (++v0 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_19eee0(__int64 a1, __int64 a2, unsigned int a3, __int64* a4)
{
  __int64 v4;
  __int64 v8;
  int v9;
  unsigned int* v10;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  struct {
    unsigned int v30;
    unsigned int v31;
  } v30_;
  __int64 v32;
  unsigned __int64 v33;
  _BYTE* v34;
  __int64 v35;

  v4 = *(_QWORD*)a1;
  v35 = 0;
  if (v4 == 0) {
    return 4;
  }
  *a4 = 0;
  v8 = *(_QWORD*)a1;
  if (a2 == 0) {
    v13 = *(unsigned int*)(a1 + 8);
    v14 = *(unsigned int*)(a1 + 12);
    v15 = *(unsigned int*)(a1 + 16);
    v16 = HIBYTE(a3);
    *a4 = 0;
    if (HIBYTE(a3) == 11) {
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64))(v8 + 23375704))(
          v8, v13, v14, 4 * (a3 & 0xFFFFFF), (__int64)&v34, 4);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else if (v16 == 6) {
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64, __int64))(v8 + 23375672))(
          v8, v13, v14, v15, a3 & 0xFFFFFF, (__int64)&v34, 8);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      if (v16 != 5) {
        return 10;
      }
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64, __int64, __int64))(v8 + 23375696))(
          v8, v13, v14, v15, a3 & 0xFFFFFF, (__int64)&v34, 1, 1);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    *a4 = (int)v34;
    return 0;
  }
  v9 = *(_DWORD*)(v8 + 23375260);
  v10 = (unsigned int*)a1;
  if ((unsigned int)CudaDriverRoutine_225250(a2, a3, (_DWORD*)&v35 + 1, &v35,
                                             &v32, &v34, &v33,
                                             (int*)&v30_.v30) != 0) {
    return 0;
  }
  v17 = v30_.v30;
  result = 10;
  if ((int)v30_.v30 > 2) {
    v18 = a2;
    v19 = v10;
    if (v30_.v30 == 3) {
      v20 = *(unsigned int**)(a2 + 80);
      if (v20 == nullptr) {
        return result;
      }
      v21 = *(_DWORD*)(a2 + 92);
      if (v21 == 0) {
        v28 = *v20;
        if (*v20 == (v9 | 0x5000000)) {
          v29 = (__int64)v10;
          v28 = v9 | 0x5000000;
        }
        else if (v28 == a3) {
          v18 = *(_QWORD*)(a2 + 16);
          v29 = (__int64)v10;
          v28 = a3;
        }
        else {
          v29 = (__int64)v10;
        }
        result = nvidia_19eee0(v29, v18, v28, &v32);
        if ((_DWORD)result != 0) {
          return result;
        }
        v21 = *(int*)(a2 + 88) + v32;
        v19 = v10;
      }
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                               __int64, __int64))(*(_QWORD*)v19 + 23375672LL))(
          *(_QWORD*)v19, v19[2], v19[3], v19[4], (unsigned int)(v35 + v21),
          (__int64)&v30_.v31, 4);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_30;
    }
    if (v30_.v30 == 4) {
      v25 = DWORDn(v35, sizeof(v35) / 4 - 1);
      if (a3 == DWORDn(v35, sizeof(v35) / 4 - 1)) {
        v18 = *(_QWORD*)(a2 + 16);
        v26 = (__int64)v10;
        v25 = a3;
      }
      else {
        v26 = (__int64)v10;
      }
      result = nvidia_19eee0(v26, v18, v25, a4);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_41;
    }
    if (v30_.v30 != 6) {
      return result;
    }
    if ((unsigned int)toolsEvaluateBlock((__int64)v10, a2, v34, v33, a4) == 0) {
      return 0;
    }
    return 10;
  }
  if (v30_.v30 == 0) {
  LABEL_17:
    *a4 = v17;
    return 0;
  }
  if (v30_.v30 != 1) {
    if (v30_.v30 == 2) {
      v17 = v32;
      goto LABEL_17;
    }
    return result;
  }
  v23 = *(_QWORD*)(a2 + 16);
  if (*(_DWORD*)(a2 + 32) != 0 || v23 == 0 || *(_DWORD*)(v23 + 32) == 0) {
    result =
        nvidia_19eee0((__int64)v10, v23, DWORDn(v35, sizeof(v35) / 4 - 1), a4);
    if ((_DWORD)result != 0) {
      return result;
    }
    v24 = *(_QWORD*)(a2 + 16);
    if (v24 != 0) {
      v22 = *a4;
      if (DWORDn(v35, sizeof(v35) / 4 - 1) !=
          (*(_DWORD*)(*(_QWORD*)v10 + 23375260LL) | 0x5000000)) {
        goto LABEL_42;
      }
      v22 += *(int*)(v24 + 36);
      goto LABEL_36;
    }
  LABEL_41:
    v22 = *a4;
  LABEL_42:
    if ((unsigned int)tools_shared_readelf_225160(a2, a3, 0, v22, 2) == 0) {
      return 0;
    }
    return 10;
  }
  v27 = zstd_decompress_223310(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 24LL) + 136LL),
      *(_QWORD*)(v23 + 56));
  if (v27 == 0) {
    return 1;
  }
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64))(*(_QWORD*)v10 + 23376648LL))(
      *(_QWORD*)v10, v27, v10[2], v10[3], v10[4], a3 & 0xFFFFFF,
      (__int64)&v30_.v31);
  if ((_DWORD)result == 0) {
  LABEL_30:
    v22 = v30_.v31;
  LABEL_36:
    *a4 = v22;
    goto LABEL_42;
  }
  return result;
}

__int64 nvidia_1b5c60(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  struct {
    char gap0_[8];
    __int64 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int64 v32;
  } v8_;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = *(_QWORD*)(a1 + 64);
  v3 = **(__int64***)a1;
  v4 = *(_QWORD*)v1;
  v5 = *v3;
  v6 = *(_QWORD*)(*(_QWORD*)v1 + 48LL);
  v34 = 0;
  v35 = 0;
  v33 = 0;
  if ((*(unsigned int (**)(__int64, __int64, __int64, __int64, __int64))(
          v6 + 56))(v4, (__int64)&v35, (__int64)&v34, (__int64)&v33, v1) != 0) {
    return 0;
  }
  v8_.v32 = 0;
  v8_.v26 = (__typeof__(v8_.v26)){0};
  v8_.v27 = (__typeof__(v8_.v27)){0};
  v8_.v28 = (__typeof__(v8_.v28)){0};
  v8_.v29 = (__typeof__(v8_.v29)){0};
  v8_.v25 = (__typeof__(v8_.v25)){0};
  v8_.v24 = (__typeof__(v8_.v24)){0};
  v8_.v23 = (__typeof__(v8_.v23)){0};
  v8_.v22 = (__typeof__(v8_.v22)){0};
  v8_.v21 = (__typeof__(v8_.v21)){0};
  v8_.v20 = (__typeof__(v8_.v20)){0};
  v8_.v19 = (__typeof__(v8_.v19)){0};
  v8_.v18 = (__typeof__(v8_.v18)){0};
  v8_.v17 = (__typeof__(v8_.v17)){0};
  v8_.v8 = 0x4000020C000202LL;
  v8_.v30 = (__typeof__(v8_.v30)){0};
  v8_.v31 = (__typeof__(v8_.v31)){0};
  v8_.v9 = (__typeof__(v8_.v9)){0};
  v8_.v10 = (__typeof__(v8_.v10)){0};
  v8_.v11 = (__typeof__(v8_.v11)){0};
  v8_.v12 = (__typeof__(v8_.v12)){0};
  v8_.v13 = (__typeof__(v8_.v13)){0};
  v8_.v14 = (__typeof__(v8_.v14)){0};
  v8_.v15 = (__typeof__(v8_.v15)){0};
  v8_.v16 = (__typeof__(v8_.v16)){0};
  result =
      cuda_driver_1da1b0(*(_QWORD*)(v5 + 80), &v8_.v8, v33, (_QWORD*)(a1 + 32));
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_ee120(*(_QWORD*)(a1 + 32));
    return 0;
  }
  return result;
}

__int64 nvidia_1b5d70(__int64 a1)
{
  __int64* v1;
  __int64** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v1 = *(__int64**)(a1 + 64);
  v3 = *(__int64***)a1;
  v4 = *v1;
  v9 = 0;
  v5 = **v3;
  v6 = *(_QWORD*)(v4 + 48);
  v8 = 0;
  result = (*(__int64 (**)(__int64, __int64, __int64))(v6 + 32))(
      v4, (__int64)&v9, (__int64)v1);
  if ((_DWORD)result == 0) {
    result = cuda_driver_unplaced_4_89f80(&v8, v5, (__int128*)(v9 + 8),
                                          *(_DWORD*)(a1 + 20), 0);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(a1 + 40) = v8;
    }
  }
  return result;
}

__int64 nvidia_1b5e00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64** v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  __int64 v21;
  struct {
    _QWORD v22[9];
    __int64 v23;
  } v22_;
  __int64 v24;
  __int64 v25;

  v2 = CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 12), 8);
  *(_QWORD*)(a1 + 48) = v2;
  if (v2 == 0) {
    return 2;
  }
  if (*(_DWORD*)(a1 + 12) != 0) {
    v3 = 0;
    while (1) {
      *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v3) =
          CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 20), 8);
      if (*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v3) == 0) {
        return 2;
      }
      v4 = *(unsigned int*)(a1 + 12);
      if (++v3 >= v4) {
        if (*(_DWORD*)(a1 + 12) == 0) {
          return 0;
        }
        LODWORD(v5) = *(_DWORD*)(a1 + 20);
        if (*(_DWORD*)(a1 + 16) >= (unsigned int)v5) {
          return 0;
        }
        v6 = 0;
        while (1) {
          v8 = *(unsigned int*)(a1 + 16);
          if ((unsigned int)v8 < (unsigned int)v5) {
            break;
          }
        LABEL_12:
          ++v6;
          result = 0;
          if (v6 >= v4) {
            return result;
          }
        }
        v9 = 40 * v8;
        while (1) {
          v10 = *(__int64**)(a1 + 64);
          v11 = *(__int64***)a1;
          v12 = *v10;
          v25 = 0;
          v13 = **v11;
          v14 = *(_QWORD*)(v12 + 48);
          v24 = 0;
          result =
              (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
                  v14 + 40))(v12, (__int64)&v25, (__int64)v10, (unsigned int)v6,
                             (unsigned int)v8);
          if ((_DWORD)result != 0) {
            return result;
          }
          v15 = *(_QWORD*)(a1 + 40);
          v22_.v23 = 0;
          v16 = *(_QWORD*)(v15 + 88);
          *(_OWORD*)&v22_.v22[7] = (__typeof__(*(_OWORD*)&v22_.v22[7])){0};
          *(_OWORD*)&v22_.v22[5] = (__typeof__(*(_OWORD*)&v22_.v22[5])){0};
          *(_OWORD*)&v22_.v22[3] = (__typeof__(*(_OWORD*)&v22_.v22[3])){0};
          *(_OWORD*)&v22_.v22[1] = (__typeof__(*(_OWORD*)&v22_.v22[1])){0};
          v17 = *(_DWORD*)(v15 + 48);
          v22_.v22[0] = v16;
          v18 = *(_QWORD*)(v15 + 32) + v9;
          DWORDn(v22_.v22[1], sizeof(v22_.v22[1]) / 4 - 1) =
              *(int*)(v18 + 24) + v17 * v6;
          v22_.v22[2] = *(unsigned int*)(v18 + 32);
          v19 = *(_OWORD*)v18;
          v20 = *(_OWORD*)(v18 + 16);
          v21 = *(_QWORD*)(v18 + 32);
          LODWORD(v22_.v22[8]) = v8;
          v22_.v22[7] = v21;
          *(_OWORD*)&v22_.v22[5] = v20;
          *(_OWORD*)&v22_.v22[3] = v19;
          v22_.v23 = *(_QWORD*)(v15 + 48);
          result = CudaDriverStub_89350((__int64)&v24, v13, v25 + 12,
                                        (__int64)v22_.v22, 0);
          if ((_DWORD)result != 0) {
            return result;
          }
          v9 += 40;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v6) + 8 * v8++) = v24;
          v5 = *(unsigned int*)(a1 + 20);
          if (v8 >= v5) {
            v4 = *(unsigned int*)(a1 + 12);
            goto LABEL_12;
          }
        }
      }
    }
  }
  return 0;
}

__int64 nvidia_1b5fe0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64* v9;
  __int64** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128* v15;

  v2 = CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 12), 8);
  *(_QWORD*)(a1 + 56) = v2;
  if (v2 == 0) {
    return 2;
  }
  if (*(_DWORD*)(a1 + 12) == 0) {
    return 0;
  }
  v3 = 0;
  do {
    *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v3) =
        CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 20), 8);
    if (*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v3) == 0) {
      return 2;
    }
    v4 = *(unsigned int*)(a1 + 12);
    ++v3;
  } while (v3 < v4);
  if (*(_DWORD*)(a1 + 12) == 0) {
    return 0;
  }
  LODWORD(v5) = *(_DWORD*)(a1 + 20);
  if (*(_DWORD*)(a1 + 16) >= (unsigned int)v5) {
    return 0;
  }
  v6 = 0;
  while (1) {
    v8 = *(unsigned int*)(a1 + 16);
    if ((unsigned int)v8 < (unsigned int)v5) {
      break;
    }
  LABEL_13:
    ++v6;
    result = 0;
    if (v6 >= v4) {
      return result;
    }
  }
  while (1) {
    v9 = *(__int64**)(a1 + 64);
    v10 = *(__int64***)a1;
    v11 = *v9;
    v15 = nullptr;
    v12 = **v10;
    v13 = *(_QWORD*)(v11 + 48);
    v14 = 0;
    result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        v13 + 48))(v11, (__int64)&v15, (__int64)v9, (unsigned int)v6,
                   (unsigned int)v8);
    if ((_DWORD)result != 0) {
      return result;
    }
    result = CudaDriverRoutine_1b4920(v12, v15, nullptr, &v14);
    if ((_DWORD)result != 0) {
      return result;
    }
    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v6) + 8 * v8++) = v14;
    v5 = *(unsigned int*)(a1 + 20);
    if (v8 >= v5) {
      v4 = *(unsigned int*)(a1 + 12);
      goto LABEL_13;
    }
  }
}

__int64 nvidia_1c25c0(__int64 a1, unsigned __int8 a2, int a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  unsigned __int64 v10;

  v4 = *(_QWORD**)(a1 + 24);
  if (v4 == nullptr) {
    return 29;
  }
  v5 = a1;
  v6 = a1 + 23375840;
  v7 = a2 | ((*(_QWORD*)&a3 & 0xFFFFFFLL) << 20);
  v8 = v4[24] + v4[22] - v4[21];
  v10 = v7 | 0xEF5400000007FF00LL;
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(a1 + 23375840))(
      (__int64)v4, v8, (__int64)&v10, 8);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(__int64))(v6 + 280))(v5);
  }
  return result;
}

__int64 nvidia_1c2670(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;

  v4 = *(_QWORD**)(a1 + 24);
  if (v4 == nullptr) {
    return 29;
  }
  v5 = a1;
  v6 = a1 + 23375840;
  v7 = a2 | ((unsigned __int64)a3 << 20);
  v8 = v4[25] + v4[22] - v4[21];
  v10 = v7 | 0x10000000000F000LL;
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(a1 + 23375840))(
      (__int64)v4, v8, (__int64)&v10, 8);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(__int64))(v6 + 280))(v5);
  }
  return result;
}

__int64 nvidia_1c45e0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 (*v9)(__int64, __int64, __int64, __int64);
  unsigned int v10;
  struct {
    unsigned int v11;
    unsigned int v12;
  } v11_;

  v6 = a1 + 23375808;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 32306416) + 328LL))(a1) & 1) !=
      0) {
    result = (*(__int64 (**)(__int64, __int64, __int64))v6)(a1, a2,
                                                            (__int64)&v11_.v12);
    if ((_DWORD)result == 0) {
      v8 = *(_QWORD*)(a1 + 24);
      if (v8 != 0) {
        return (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)(a1 + 32306416) + 216LL))(v8, v11_.v12, a3 != 0);
      }
      else {
        return 29;
      }
    }
  }
  else {
    v9 = *(__int64 (**)(__int64, __int64, __int64, __int64))(v6 + 800);
    v10 = 0;
    result = v9(a1, 1, a2, (__int64)&v10);
    if ((_DWORD)result == 0) {
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)(a1 + 32306416) + 8LL))(a1, 1, v10, (__int64)&v11_.v11);
      if ((_DWORD)result == 0) {
        v11_.v11 = v11_.v11 & 0xFFFFFFF7 | (8 * (a3 & 1));
        return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)(a1 + 32306416) + 24LL))(a1, 1, v10, (__int64)&v11_.v11);
      }
    }
  }
  return result;
}

__int64 nvidia_1c4ab0(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 result;
  __int64 v7;
  __int64 v11;

  v11 = 0;
  if (DWORDn(a4, sizeof(a4) / 4 - 1) != 0) {
    return 8;
  }
  if (*(_DWORD*)(a1 + 91280LL * a2 + 1424LL * a3 + 1268) <
      a6 + (unsigned int)a4) {
    return 8;
  }
  v7 = a1 + 23375776;
  if (*(_DWORD*)(a1 + 23377132) == 5) {
    return (*(__int64 (**)(__int64, unsigned int, unsigned int,
                           unsigned __int64, __int64, unsigned int))(
        a1 + 23376496))(a1, a2, a3, a4, a5, a6);
  }
  nvidia_1cb040(a1, a2, a3, a4, a6, 1);
  result = (*(__int64 (**)(__int64, __int64))(v7 + 152))(*(_QWORD*)(a1 + 24),
                                                         (__int64)&v11);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, __int64))v7)(
        *(_QWORD*)(a1 + 24), v11, a5, a6);
  }
  return result;
}

__int64 nvidia_1c5030(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, int* a6)
{
  unsigned int v6;
  char v10;
  int64x2_t v11;
  char v12;
  __int64 v13;
  int v14;

  v6 = 4;
  v14 = 0;
  if (a5 > 8) {
    return v6;
  }
  if (a6 == nullptr) {
    return v6;
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64))(a1 + 23375672))(
      a1, a2, a3, a4,
      (unsigned int)(*(int*)(a1 + 91280LL * (unsigned int)a2 +
                             1424LL * (unsigned int)a3 + 1760) -
                     300),
      (__int64)&v14, 4);
  if (v6 != 0) {
    return v6;
  }
  if (a5 == 0) {
    return 0;
  }
  v10 = v14;
  v11 = vdupq_n_s64((unsigned __int64)a5 - 1);
  *a6 = v14 & 1;
  v12 = a5 + 3;
  if (LANES128(v11).n128_u64[1] != 0) {
    a6[1] = (v10 & 2) != 0;
    if (LANES128(v11).n128_u64[0] >= 2) {
    LABEL_8:
      a6[2] = (v10 & 4) != 0;
      v13 = v12 & 0x1C;
      if (LANES128(v11).n128_u64[1] < 3) {
        goto LABEL_9;
      }
    LABEL_13:
      a6[3] = (v10 & 8) != 0;
      if (v13 == 4) {
        goto LABEL_23;
      }
      goto LABEL_14;
    }
  }
  else if (LANES128(v11).n128_u64[0] >= 2) {
    goto LABEL_8;
  }
  v13 = v12 & 0x1C;
  if (LANES128(v11).n128_u64[1] >= 3) {
    goto LABEL_13;
  }
LABEL_9:
  if (v13 == 4) {
    goto LABEL_23;
  }
LABEL_14:
  if (LANES128(v11).n128_u64[0] < 4) {
    if (LANES128(v11).n128_u64[1] < 5) {
    LABEL_16:
      if (LANES128(v11).n128_u64[0] >= 6) {
        goto LABEL_17;
      }
    LABEL_21:
      if (LANES128(v11).n128_u64[1] < 7) {
        goto LABEL_23;
      }
      goto LABEL_22;
    }
  }
  else {
    a6[4] = (v10 & 0x10) != 0;
    if (LANES128(v11).n128_u64[1] < 5) {
      goto LABEL_16;
    }
  }
  a6[5] = (v10 & 0x20) != 0;
  if (LANES128(v11).n128_u64[0] < 6) {
    goto LABEL_21;
  }
LABEL_17:
  a6[6] = (v10 & 0x40) != 0;
  if (LANES128(v11).n128_u64[1] >= 7) {
  LABEL_22:
    a6[7] = v10 < 0;
  }
LABEL_23:
  if (a5 == 8) {
    a6[7] = 1;
    return 0;
  }
  return 0;
}

__int64 nvidia_1cabe0(__int64 a1, __int64 a2, unsigned __int64* a3)
{
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;

  result = 4;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    if (*(_DWORD*)a2 != 0) {
      return 0;
    }
    else {
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)(a3[2] + 8) + 23376000LL))(
          a3[2], *(_QWORD*)(a2 + 8), *(_QWORD*)(a2 + 24) + *(_QWORD*)(a2 + 8),
          0xE30000000007000FLL);
      if ((_DWORD)result == 0) {
        v7 = *(_QWORD*)(a2 + 8);
        if (v7 > *a3) {
          return 0;
        }
        v8 = *(_QWORD*)(a2 + 24) + v7;
        if (v8 <= *a3) {
          return 0;
        }
        else if (a3[1] <= v8) {
          return (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64,
                                 __int64))(*(_QWORD*)(a3[2] + 8) + 23376000LL))(
              a3[2], *a3, a3[1], 0xE360000000000001LL);
        }
        else {
          return 10;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_1cb9d0(__int64 a1, int a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  struct {
    int v8;
    int v9;
  } v8_;

  result = *(_QWORD*)(a1 + 24);
  if (result == 0) {
    return result;
  }
  if (!CudaDriverRoutine_1a0620(result)) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 24);
  v8_.v9 = a2;
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64))(a1 + 23375912))(
      v5, 0, 0, 0, *(_QWORD*)(v5 + 208), (__int64)&v8_.v9, 4);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a2 != 1) {
    if (a2 == 0) {
      v6 = 0;
      goto LABEL_9;
    }
    return 0;
  }
  v6 = 4097;
LABEL_9:
  v7 = *(_QWORD*)(a1 + 24);
  v8_.v8 = v6;
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64))(a1 + 23375912))(
      v7, 0, 0, 0, *(_QWORD*)(v7 + 40) + 4LL, (__int64)&v8_.v8, 4);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

__int64 nvidia_1cbaa0(__int64 a1, unsigned int a2, unsigned int a3, bool* a4)
{
  __int64 result;
  int v7;

  if (a4 == nullptr) {
    return 4;
  }
  *a4 = true;
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                             __int64, __int64))(a1 + 23375768))(
        result, 0, 0, 0,
        *(_QWORD*)(result + 216) +
            4LL * (*(int*)(a1 + 91280LL * a2 + 1424LL * a3 + 1264) + 32 * a2),
        (__int64)&v7, 4);
    if ((_DWORD)result == 0) {
      *a4 = v7 != 0;
    }
  }
  return result;
}

__int64 nvidia_1cc4e0(__int64 a1)
{
  __int64 (**v1)(__int64, __int64, __int64, __int64, __int64, __int64, __int64);
  unsigned __int64 v2;
  __int64 v3;
  _DWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _DWORD* v16;
  int v17;

  v1 = (__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                     __int64))(a1 + 23372880);
  v2 = *(unsigned int*)(a1 + 23372880);
  if ((_DWORD)v2 == 0) {
    return 0;
  }
  v3 = a1 + 1096;
  v4 = (_DWORD*)(a1 + 1272);
  v5 = 0;
  v15 = a1 + 1096;
  while (2) {
    while (1) {
      v6 = (_QWORD*)(v3 + 91280 * v5);
      if (v6[6] == 0 && v6[7] == 0) {
        break;
      }
      if (*((_DWORD*)v1 + 1) == 0) {
        break;
      }
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v16 = v4;
      do {
        if (v7 > 0x3F) {
          v12 = 64 - v7;
          if ((unsigned int)v7 > 0x40) {
            v12 = 0;
          }
          if (((v6[7] >> v7 << v12) & 1) == 0) {
            goto LABEL_9;
          }
        }
        else if (((v6[6] >> v7) & 1) == 0) {
          goto LABEL_9;
        }
        if (*(_DWORD*)v4 != 0) {
          v13 = a1;
          result = v1[349](a1, (unsigned int)v5, (unsigned int)v7, 0,
                           (unsigned int)(v4[122] - 280), (__int64)&v17, 4);
          if ((_DWORD)result != 0) {
            return result;
          }
          if (v17 != 0) {
            if (v7 > 0x3F) {
              v10 |= 1LL << v7;
            }
            else {
              v11 |= 1LL << v7;
              v9 |= 1LL << v7;
            }
            if (v7 > 0x3F) {
              v8 |= 1LL << v7;
            }
          }
          a1 = v13;
        }
      LABEL_9:
        ++v7;
        v4 += 356;
      } while (v7 < *((unsigned int*)v1 + 1));
      v2 = *(unsigned int*)v1;
      v3 = v15;
      ++v5;
      v4 = v16 + 22820;
      v6[10] = v11;
      v6[11] = v10;
      v6[8] = v9;
      v6[9] = v8;
      if (v5 >= v2) {
        return 0;
      }
    }
    ++v5;
    v4 += 22820;
    v6[10] = 0;
    v6[11] = 0;
    v6[8] = 0;
    v6[9] = 0;
    if (v5 < v2) {
      continue;
    }
    return 0;
  }
}

__int64 nvidia_1de600(__int64* a1, __n128* a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int32 v12;
  unsigned __int32 v13;
  __int64 v14;
  __int64 (*v15)(__int64, __int64, __int64, __int64, __int64, __int64, __n128,
                 __n128, __n128);
  __n128 v16;
  __n128 v17;
  __int64 v19;
  _QWORD v20[18];
  struct {
    _BYTE v21[144];
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int128 v32;
    __int128 v33;
    __int64 v34;
  } v21_;

  v3 = LANES128(a2[4]).n128_u64[0];
  v7 = LANES128(a2[2]).n128_i64[0];
  v8 = *a1;
  v19 = 0;
  *a1 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)(v3 + 64) + 19256LL))(
      v8, v7, *(unsigned int*)(*(_QWORD*)(v3 + 64) + 3800LL), (__int64)&v19);
  v9 = LANES128(a2[6]).n128_u64[0];
  v10 = LANES128(a2[4]).n128_i64[0];
  v11 = LANES128(a2[4]).n128_i64[1];
  v12 = LANES128(a2[5]).n128_u32[0];
  v13 = LANES128(a2[6]).n128_u32[2];
  v14 = *(_QWORD*)(v10 + 64);
  v21_.v34 = 0;
  memset(&v21_.v21[16], 0, 128);
  *(_OWORD*)v21_.v21 = (__typeof__(*(_OWORD*)v21_.v21)){0};
  v15 = *(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                       __n128, __n128, __n128))(v14 + 18688);
  *(_QWORD*)&v21_.v21[28] = v9;
  v16 = a2[5];
  v17 = vextq_s8(v16, v16, 4u);
  *(__n128*)&v21_.v21[12] = v16;
  *(_QWORD*)&v21_.v21[4] = LANES128(v17).n128_u64[0];
  v21_.v22 = (__typeof__(v21_.v22)){0};
  v21_.v23 = (__typeof__(v21_.v23)){0};
  v21_.v24 = (__typeof__(v21_.v24)){0};
  v21_.v25 = (__typeof__(v21_.v25)){0};
  v21_.v26 = (__typeof__(v21_.v26)){0};
  v21_.v27 = (__typeof__(v21_.v27)){0};
  v21_.v28 = (__typeof__(v21_.v28)){0};
  v21_.v29 = (__typeof__(v21_.v29)){0};
  v21_.v30 = (__typeof__(v21_.v30)){0};
  v21_.v31 = (__typeof__(v21_.v31)){0};
  v21_.v32 = (__typeof__(v21_.v32)){0};
  v21_.v33 = (__typeof__(v21_.v33)){0};
  *(_DWORD*)v21_.v21 = v12;
  LODWORD(v21_.v22) = v13;
  memset(v20, 0, sizeof(v20));
  return v15(v10, v11, 0, (__int64)v20, a3, v19, COERCE_AS(__n128, 0), v16,
             v17);
}

__int64 nvidia_1e21c0(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  _QWORD* v7;
  __int64 v8;
  __int128* v9;
  __int64 v10;
  __int128 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  void (*v40)(__int64);
  int v41;
  _DWORD* v42;
  struct {
    char gap0_[4];
    int v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    int v47;
    int v48;
    __int64 v49;
  } v43_;

  v1 = *(_QWORD**)(a1 + 8);
  v3 = *(_QWORD*)(*v1 + 8LL);
  *(_DWORD*)(a1 + 20) = 1;
  v4 = *(_DWORD*)(a1 + 32);
  v5 = *(_QWORD*)(v3 + 64);
  if (v4 == 11 | v4 == 0) {
    if ((*(_BYTE*)(v5 + 16976) & 4) == 0) {
      return 0;
    }
  }
  else if (v4 > 0xA ||
           (*(unsigned __int8 (**)(__int64))(v5 + 21112))(v5) == 0) {
    return 0;
  }
  v7 = (_QWORD*)CudaDriverStub_12e330(24);
  *(_QWORD*)(a1 + 88) = v7;
  if (v7 != nullptr) {
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v8 = v1[25];
    if (a1 != v8) {
      v9 = *(__int128**)(v8 + 88);
      v10 = *(_QWORD*)(a1 + 88);
      v12 = *v9;
      *(_QWORD*)(v10 + 16) = *((_QWORD*)v9 + 2);
      *(_OWORD*)v10 = v12;
      return 0;
    }
    v20 = *(__int64**)(a1 + 8);
    v21 = *v20;
    v22 = *((_DWORD*)v20 + 8);
    v23 = *(_QWORD*)(v21 + 8);
    v24 = *(_QWORD*)(v23 + 64);
    if ((*(_BYTE*)(v23 + 1952) & 4) != 0 && v22 == 0) {
      **(_QWORD**)(a1 + 88) = **(
          _QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v24 + 16864) +
                                                     72LL) +
                                          33160LL) +
                               200LL) +
                    88LL);
      goto LABEL_34;
    }
    v25 = *(_QWORD*)(*(_QWORD*)(v24 + 19824) + 88LL);
    v43_.v45 = *(_QWORD*)(a1 + 88);
    v43_.v46 = 0;
    v43_.v43 = 28;
    v43_.v44 = v25;
    v26 = CudaDriverData_1422bb0;
    if (*(unsigned int*)((char*)((int*)0x4LL) + CudaDriverData_1422bb0) >= 3) {
      v27 = v23 + 16144;
      if (v22 != 0) {
        v27 = 0;
      }
      v43_.v46 = v27;
    }
    v28 = (*(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x13CLL) +
                                    CudaDriverData_1422bb0 +
                                    4))((__int64)&v43_.v43);
    if ((_DWORD)v28 != 0) {
      v29 = CudaDriverRoutine_1e9390(v28);
      *(_BYTE*)(*(_QWORD*)(a1 + 88) + 16LL) = 1;
      if (v29 != 0) {
        v30 = v29;
        v31 = **(_QWORD**)(a1 + 88);
        v43_.v43 = 12;
        v43_.v44 = v31;
        (*(void (**)(__int64))((char*)((_UNKNOWN*)0x10CLL) + v26 + 4))(
            (__int64)&v43_.v43);
        v13 = v30;
        goto LABEL_14;
      }
    }
    else {
      *(_BYTE*)(*(_QWORD*)(a1 + 88) + 16LL) = 1;
    }
  LABEL_34:
    if (*(_DWORD*)(a1 + 32) == 0 &&
        *(_DWORD*)(*(_QWORD*)(v3 + 64) + 4204LL) != 0) {
      v43_.v43 = 32;
      v32 = *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL);
      v43_.v47 = 2;
      v33 = *(_QWORD*)(v32 + 80);
      v43_.v45 = **(_QWORD**)(a1 + 88);
      v34 = CudaDriverRoutine_1ebbc0(v33);
      v35 = *(_QWORD*)(a1 + 88);
      v43_.v46 = v34;
      v43_.v44 = v35 + 8;
      v36 = CudaDriverData_1422bb0;
      v37 = (*(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x138LL) +
                                      CudaDriverData_1422bb0))(
          (__int64)&v43_.v43);
      if ((_DWORD)v37 != 0) {
        v13 = CudaDriverRoutine_1e9390(v37);
        if (v13 != 0) {
          v43_.v48 = 12;
          v38 = *(_QWORD*)(a1 + 88);
          if (v38 != 0) {
            v39 = *(_QWORD*)(v38 + 8);
            if (v39 != 0) {
              v43_.v49 = v39;
              v40 = *(void (**)(__int64))((char*)((_UNKNOWN*)0x108LL) + v36);
              v41 = v13;
              v40((__int64)&v43_.v48);
              v13 = v41;
              *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) = 0;
            }
          }
          goto LABEL_14;
        }
      }
      if (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 16LL) != 0) {
        v42 = *(_DWORD**)(a1 + 8);
        if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v42 + 8LL) + 64LL) +
                       4204LL) == 0 ||
            v42[8] != 0) {
          v13 = 800;
          goto LABEL_14;
        }
      }
    }
    return 0;
  }
  v13 = 2;
LABEL_14:
  v14 = *(_QWORD*)(a1 + 8);
  v15 = 0x2E8BA2E8BA2E8BA3LL *
        ((signed __int64)(a1 - *(_QWORD*)(v14 + 200)) >> 4);
  v16 = (unsigned int)(*(int*)(v14 + 208) - 1);
  v17 = *(_QWORD*)(a1 + 88);
  if (v15 != v16 || v17 == 0) {
    goto LABEL_21;
  }
  v43_.v43 = 12;
  if (*(_QWORD*)(v17 + 8) != 0) {
    v43_.v44 = *(_QWORD*)(v17 + 8);
    v18 = v13;
    (*(void (**)(__int64))((char*)((_UNKNOWN*)0x108LL) +
                           CudaDriverData_1422bb0))((__int64)&v43_.v43);
    v13 = v18;
    *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) = 0;
    v17 = *(_QWORD*)(a1 + 88);
  }
  if (*(_QWORD*)v17 != 0) {
    v19 = v13;
    if (*(_BYTE*)(v17 + 16) != 0) {
      v43_.v44 = *(_QWORD*)v17;
      v43_.v43 = 12;
      ((void (*)(__int64))CudaDriverData_1440828)((__int64)&v43_.v43);
      v17 = *(_QWORD*)(a1 + 88);
    }
  }
  else {
  LABEL_21:
    v19 = v13;
  }
  CudaDriverRoutine_12e340(v17);
  *(_QWORD*)(a1 + 88) = 0;
  return v19;
}

__int64 nvidia_1f5430(__int64 a1)
{
  _BOOL8 v2;

  if (a1 == 0 || *(_QWORD*)(a1 + 8) == 0) {
    return 10;
  }
  v2 = CudaDriverRoutine_1a0620(a1);
  if (!v2) {
    return 0;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32306416LL) +
                                 312LL))(v2) &
       1) != 0) {
    return (*(__int64 (**)(__int64))(
        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32306416LL) + 272LL))(a1);
  }
  if (*(_DWORD*)(a1 + 260) != 0) {
    return (*(__int64 (**)(void))(*(_QWORD*)(a1 + 8) + 23376376LL))();
  }
  else {
    return 0;
  }
}

__int64 nvidia_20e090(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 72);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 33160)) != 0 &&
        (v7 = *(_QWORD*)(v6 + 200)) != 0 && *(_DWORD*)(v6 + 212) != 0) {
      v8 = (*(__int64 (**)(__int64))(v7 + 168))(v7);
      *(_DWORD*)a2 = v8;
      return 0;
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 nvidia_215c40(unsigned int a1, unsigned int a2, int a3)
{
  __int64 result;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  _BYTE v10[8];

  if (a1 >= CudaDriverData_1434ac0) {
    return 101;
  }
  result = 1;
  if (a2 <= 2) {
    v5 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a1 + 35);
    if (v5 != 0) {
      result = (*(__int64 (**)(__int64, __int64, __int64))(v5 + 20488))(
          *((_QWORD*)&CudaDriverData_14347a8 + (int)a1 + 35), 0, (__int64)v10);
      if ((_DWORD)result == 0) {
        v8 = 4;
        if (a2 <= 1) {
          v8 = 0;
        }
        v9 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a1 + 35);
        *(_DWORD*)&v10[v8] = a3;
        return (*(__int64 (**)(__int64, __int64))(v9 + 20496))(v9,
                                                               (__int64)v10);
      }
    }
  }
  return result;
}

__int64 nvidia_21f010(__int64 a1, unsigned int* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 (**v5)(__int64);
  int v7;
  unsigned __int64 v9;
  _DWORD v10[3];
  __int64 v11;
  int v12;

  v12 = 0;
  v11 = 0;
  if (a1 == 0) {
    return 1;
  }
  if (a2 == nullptr) {
    return 1;
  }
  v3 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(a1 + 848);
  v10[1] = (v4 & 0x1000000000000000LL) != 0;
  v5 = *(__int64 (***)(__int64))(a1 + 1056);
  if (v5 != nullptr) {
    v7 = (*v5)(a1);
    v4 = *(_QWORD*)(a1 + 848);
    v3 = *a2;
  }
  else {
    v7 = 0;
  }
  v10[2] = v7;
  DWORDn(v11, sizeof(v11) / 4 - 1) = (v4 & 0x400000000000000LL) != 0;
  if (v3 >= 0x18) {
    v9 = 24;
  }
  else {
    v9 = v3;
  }
  v10[0] = v9;
  memcpy_plt((__int64)a2, (__int64)v10, v9);
  return 0;
}

__int64 nvidia_222dc0(__int64* a1, __int64 a2, void (*a3)(__int64, __int64),
                      char a4)
{
  _QWORD* v4;
  __int64 v6;
  char v9;
  __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;

  if (a1 == nullptr) {
    return 2;
  }
  v4 = (_QWORD*)*a1;
  if (*a1 == 0) {
    return 0;
  }
  v6 = v4[1];
  if (a3 != nullptr) {
    v9 = a4;
    if (a4 != 0) {
      for (; a2 == v6; v6 = v4[1]) {
        a3(v6, 0);
        v4 = *(_QWORD**)*a1;
        CudaDriverRoutine_12e340(*a1);
        v10 = a1[2];
        *a1 = (__int64)v4;
        a1[2] = v10 - 1;
        if (v4 == nullptr) {
          goto LABEL_46;
        }
      }
    LABEL_21:
      v16 = (_QWORD*)*v4;
      if (*v4 != 0) {
        if (a3 != nullptr) {
          if (v9 == 0) {
            while (1) {
              v18 = v16[1];
              if (v18 == a2) {
                break;
              }
              v4 = v16;
              v16 = (_QWORD*)*v16;
              if (v16 == nullptr) {
                return 0;
              }
            }
            a3(v18, 0);
            goto LABEL_42;
          }
          do {
            v17 = v16[1];
            if (v17 == a2) {
              a3(v17, 0);
              *v4 = *v16;
              CudaDriverRoutine_12e340((__int64)v16);
              v16 = (_QWORD*)*v4;
              --a1[2];
              if (*v4 == 0) {
                a1[1] = (__int64)v4;
              }
            }
            else {
              v4 = v16;
              v16 = (_QWORD*)*v16;
            }
          } while (v16 != nullptr);
        }
        else {
          if (v9 == 0) {
            while (v16[1] != a2) {
              v4 = v16;
              v16 = (_QWORD*)*v16;
              if (v16 == nullptr) {
                return 0;
              }
            }
          LABEL_42:
            *v4 = *v16;
            CudaDriverRoutine_12e340((__int64)v16);
            --a1[2];
            if (*v4 == 0) {
              a1[1] = (__int64)v4;
              return 0;
            }
            return 0;
          }
          do {
            v19 = (_QWORD*)*v16;
            if (v16[1] == a2) {
              *v4 = v19;
              CudaDriverRoutine_12e340((__int64)v16);
              v19 = (_QWORD*)*v4;
              --a1[2];
              if (*v4 == 0) {
                a1[1] = (__int64)v4;
              }
            }
            else {
              v4 = v16;
            }
            v16 = v19;
          } while (v19 != nullptr);
        }
      }
      return 0;
    }
    if (a2 != v6) {
      goto LABEL_21;
    }
    a3(v6, 0);
    v14 = *(_QWORD*)*a1;
    CudaDriverRoutine_12e340(*a1);
    v15 = a1[2];
    *a1 = v14;
    a1[2] = v15 - 1;
    if (v14 != 0) {
      return 0;
    }
  }
  else {
    if (a4 != 0) {
      v9 = a4;
      if (a2 == v6) {
        v12 = v4;
        while (1) {
          v4 = (_QWORD*)*v12;
          CudaDriverRoutine_12e340((__int64)v12);
          v13 = a1[2];
          *a1 = (__int64)v4;
          a1[2] = v13 - 1;
          if (v4 == nullptr) {
            goto LABEL_46;
          }
          v12 = v4;
          if (a2 != v4[1]) {
            goto LABEL_21;
          }
        }
      }
      goto LABEL_21;
    }
    if (a2 != v6) {
      v9 = a4;
      goto LABEL_21;
    }
    v20 = *v4;
    CudaDriverRoutine_12e340((__int64)v4);
    v21 = a1[2];
    *a1 = v20;
    a1[2] = v21 - 1;
    if (v20 != 0) {
      return 0;
    }
  }
LABEL_46:
  a1[1] = 0;
  return 0;
}

__int64 nvidia_23db70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5)
{
  unsigned int v5;
  unsigned int* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  struct {
    _BYTE v20[4];
    unsigned int v21;
  } v20_;
  __int64 v22;

  v5 = 4;
  v22 = 0;
  v20_.v21 = 0;
  if (a1 != 0 && a5 != nullptr) {
    if (*(_QWORD*)(a1 + 24) == 0) {
      return 4;
    }
    *a5 = 0;
    v7 = (unsigned int*)(a1 + 23375260);
    if (((*(_DWORD*)(a1 + 91280LL * (unsigned int)a2 +
                     1424LL * (unsigned int)a3 + 1276) >>
          a4) &
         1) != 0) {
      v8 = a4;
      v9 = a1;
      v10 = a2;
      v11 = a3;
      if ((*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              a1 + 23375416))(a1, a2, a3, (__int64)&v22) != 0) {
        return 1;
      }
    }
    else {
      v9 = a1;
      v10 = a2;
      v11 = a3;
      v8 = a4;
      if ((*(unsigned int (**)(__int64, __int64, __int64, __int64, __int64))(
              a1 + 23375488))(a1, a2, a3, a4, (__int64)&v22) != 0) {
        return 1;
      }
    }
    v5 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64))(v7 + 109))(
        v9, v10, v11, v8, *v7, (__int64)&v20_.v21, 1, 1);
    if (v5 == 0) {
      v12 = v10;
      v13 = v11;
      v14 = v9;
      v15 = v12;
      v16 = v8;
      v20_.v20[0] = 0;
      v17 = v14;
      v5 = (*(__int64 (**)(__int64, __int64, __int64))(v7 + 231))(
          v14, v20_.v21, (__int64)v20_.v20);
      if (v5 == 0) {
        if (v20_.v20[0] == 1) {
          return (unsigned int)(*(__int64 (**)(
              __int64, __int64, __int64, __int64, __int64, __int64, __int64))(
              v7 + 103))(v17, v15, v13, v16, v7[3], (__int64)a5, 8);
        }
        else {
          return (unsigned int)(*(__int64 (**)(__int64, __int64, __int64,
                                               __int64, __int64, __int64,
                                               __int64, __int64))(v7 + 109))(
              v17, v15, v13, v16, v7[5], (__int64)a5, 2, 0);
        }
      }
    }
  }
  return v5;
}

__int64 nvidia_240160(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  _DWORD* v5;
  int v11;
  __int64 result;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  char v36[4];
  struct {
    int v37;
    int v38;
  } v37_;
  struct {
    unsigned int v39;
    int v40;
  } v39_;
  __int64 v41;
  struct {
    unsigned int v42;
    char gap76_[4];
    __int64 v43;
    __int64 v44;
    __int64 v45;
    char gap104_[4];
    unsigned int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    char gap140_[4];
    __int64 v54;
    __int64 v55;
    int v56;
    int v57;
    int v58;
    char gap172_[4];
    __int64 v59;
    char gap184_[8];
    int v60;
  } v42_;

  v5 = *(_DWORD**)a4;
  v37_.v37 = 0;
  v36[0] = 0;
  *(_QWORD*)(a4 + 8) = v5;
  *(_QWORD*)(a4 + 24) = v5 + 64;
  v5[152] = -1;
  v11 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a5 + 16),
                                *(_DWORD*)(a4 + 288));
  result = CudaDriverRoutine_10a2a0(a1, a2, (unsigned int*)a5,
                                    *(int*)(a4 + 172) * *(int*)(a4 + 168) *
                                        *(int*)(a4 + 176),
                                    *(unsigned int*)(a4 + 288), &v37_.v37, v36,
                                    (_DWORD*)&v35 + 1, &v35, nullptr);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (v37_.v37 == 0) {
    return 701;
  }
  v13 = *(int*)(*(_QWORD*)(a1 + 64) + 3800LL) + *(int*)(a4 + 276);
  if (v13 > *(_DWORD*)(a2 + 232) && CudaDriverRoutine_bbe70(a2) &&
      v13 - *(int*)(a2 + 232) > 0x20) {
    return 701;
  }
  v5[152] = v11;
  v34 = a3;
  v14 = *(unsigned __int8*)(a5 + 8);
  v15 = *(_DWORD*)(a5 + 44);
  v16 = CudaDriverRoutine_98340(a1);
  v17 = *(_DWORD*)a5;
  v18 = *(_DWORD*)(v16 + 16092);
  v19 = DWORDn(v35, sizeof(v35) / 4 - 1);
  v42_.v42 = v15;
  v41 = v35;
  v37_.v38 = 0;
  if (v17 != 0) {
    v20 = v17;
  }
  else {
    v20 = v18;
  }
  if (CudaDriverData_14364f8 != nullptr) {
    ((void (*)(__int64, __int64, __int64, __int64))CudaDriverData_14364f8)(
        (unsigned int)v35, (__int64)&v39_.v40, (__int64)&v37_.v38,
        (__int64)&v39_.v39);
    v21 = v39_.v39;
    v22 = v39_.v40;
    v23 = v37_.v38;
    v24 = v34;
  }
  else {
    if (v14 != 0) {
      CudaDriverRoutine_23c180(0, (unsigned int*)&v41);
      CudaDriverRoutine_23c180(0, &v42_.v42);
      v21 = v42_.v42;
      v24 = v34;
      if (v42_.v42 > v19) {
        if (v42_.v42 >= (unsigned int)v41) {
          v22 = v41;
        }
        else {
          v22 = v42_.v42;
        }
        v23 = v42_.v42;
        goto LABEL_30;
      }
      v39_.v39 = v19;
      CudaDriverRoutine_23c180(0, &v39_.v39);
      v21 = v39_.v39;
    }
    else {
      v24 = v34;
      if (v20 == 0) {
        CudaDriverRoutine_23c180(0, (unsigned int*)&v41);
        v23 = v41;
        v21 = 98304;
        v22 = v41;
        goto LABEL_30;
      }
      CudaDriverRoutine_23c180(0, (unsigned int*)&v41 + 1);
      if (v20 == 3) {
        v21 = DWORDn(v41, sizeof(v41) / 4 - 1);
        if (DWORDn(v41, sizeof(v41) / 4 - 1) <= 0x10000) {
          v21 = 0x10000;
        }
      }
      else {
        if (v20 != 2) {
          if (v20 == 1) {
            v21 = 98304;
            v23 = 98304;
            v22 = 98304;
          }
          else {
            v21 = 0;
            v23 = 0;
            v22 = 0;
          }
          goto LABEL_30;
        }
        v21 = DWORDn(v41, sizeof(v41) / 4 - 1);
      }
    }
    v23 = v21;
    v22 = v21;
  }
LABEL_30:
  v5[153] = v22;
  v5[154] = v23;
  v5[155] = v21;
  v25 = CudaDriverRoutine_98340(a1);
  v26 = *(_DWORD*)(a4 + 288);
  if (*(_DWORD*)((char*)((char*)0x20LL) +
                 *(__int64*)((char*)((__int64*)0x18LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v27 = *(_QWORD*)(a2 + 32);
    v28 = *(_DWORD*)a5;
    v29 = *(_DWORD*)(a5 + 36);
    v42_.v42 = 128;
    v42_.v44 = v27;
    v42_.v45 = a2;
    v31 = *(_DWORD*)(a5 + 12);
    v30 = *(_DWORD*)(a5 + 16);
    v42_.v43 = v25;
    v42_.v50 = 0;
    v42_.v51 = v11;
    v42_.v52 = v29;
    v42_.v53 = v29;
    v42_.v54 = v24;
    v42_.v55 = 0x100000001LL;
    v42_.v59 = a4;
    v42_.v48 = v30;
    v42_.v49 = v26;
    v32 = *(_DWORD*)(v25 + 16092);
    v33 = *(_DWORD*)(a2 + 392);
    if (v28 != 0) {
      v32 = v28;
    }
    v42_.v46 = v32;
    v42_.v47 = v33;
    v42_.v56 = *(unsigned __int8*)(a5 + 8);
    v42_.v57 = v31;
    v42_.v58 = v5[154];
    v42_.v60 = *(_DWORD*)(a5 + 28);
    cuda_driver_20b420(3u, 8u, (__int64)&v42_.v42);
  }
  return 0;
}

#pragma GCC visibility pop
