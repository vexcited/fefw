#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* SdkRoutine_836230(__int64* result, _QWORD*);
bool SdkRoutine_833240(__int64*, __int64, unsigned __int64);
__int64 SdkRoutine_835ee0(__int64);
__int64 SdkRoutine_8382a0(__int64);
__int64 SdkRoutine_83c2a0(__int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a7f0(__int64,
                                                                      __int64,
                                                                      __int64*,
                                                                      char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a8b0(__int64,
                                                                      __int64,
                                                                      __int64,
                                                                      char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a960(
    __int64, __int64, __int64*, __int64, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aa20(
    __int64, __int64, __int64, __int64, __int64, __int64, char, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ab10(
    __int64, __int64, __int64, __int64, char, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83abe0(
    __int64, __int64, __int64, __int64, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aca0(
    __int64, __int64, __int64, __int64, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ad60(
    __int64, __int64*, __int64, __int64, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83c430(__int64,
                                                                      __int64,
                                                                      char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83cdb0(__int64,
                                                                      __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ce50(__int64,
                                                                      __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83cef0(__int64,
                                                                      __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d040(__int64,
                                                                      __int64,
                                                                      __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d0f0(__int64,
                                                                      __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d790(
    __int64, __int64, __int64, __int64, __int64, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83dca0(
    __int64, __int64, __int64, __int64, char);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_NodeArrayNode_anonymous_itanium_demangle_NodeArray(
    __int64, __int64);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(__int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseExprPrimary(
    unsigned __int8**);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseFunctionParam(__int64*);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parsePointerToMemberConversionExpr(
    __int64, __int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
    unsigned __int8**);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseSubobjectExpr(
    unsigned __int8**);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseType(__int64);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnresolvedName(
    unsigned __int8**, char);
__int64 anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
    _QWORD*, unsigned __int64);
__int64 llvm_libcxx_libcxxabi_src_83c500(unsigned __int8**);
__int64 malloc_plt(unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 realloc_plt(__int64, unsigned __int64);
char* anonymous_itanium_demangle_AbstractManglingParser_make_8377c0(
    __int64, const char*);
extern _UNKNOWN SdkData_e82c40;
extern __int64 (*SdkData_e830b8[])();
extern __int64 (*SdkData_e83310[])();
extern __int64 (*SdkData_e83568[])();
extern __int64 (*SdkData_e83dd8[])();
unsigned __int64 strlen_plt(const char*);
void __attribute__((noreturn)) SdkRoutine_84c1f0(__int64, ...);
void __attribute__((noreturn)) std_terminate_plt(void);
void abort_plt();
char* llvm_libcxx_libcxxabi_src_8393e0(unsigned __int16** a1);

char* llvm_libcxx_libcxxabi_src_8393e0(unsigned __int16** a1)
{
  unsigned __int16* v1;
  unsigned __int16* v2;
  unsigned __int64 v3;
  char* result;
  int v5;
  _BOOL4 v7;
  char v8;
  unsigned __int8* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  unsigned __int8* v16;
  char* v17;
  __int64 v18;
  unsigned __int16* v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  unsigned int v25;
  unsigned __int16* v26;
  char* v27;
  __int64 v28;
  unsigned __int16* v29;
  __int16 v30;
  int v31;
  int v32;
  int v33;
  unsigned __int16* v34;
  unsigned __int16* v35;
  unsigned __int8* v36;
  unsigned __int16* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int16* v40;
  __int64 v41;
  unsigned __int8* v42;
  int v43;
  __int64 v44;
  char* v45;
  signed __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v50;
  char* v51;
  unsigned int v52;
  __int64 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int16* v57;
  unsigned __int16* v58;
  int v59;
  unsigned __int16* v60;
  unsigned __int16* v61;
  unsigned int v62;
  unsigned int v63;
  char* v64;
  unsigned __int16* v65;
  unsigned int v66;
  char* v67;
  __int64 v68;
  unsigned __int16* v69;
  __int16 v70;
  char* v71;
  unsigned __int16* v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int16* v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  signed __int64 v79;
  __int64 v80;
  char* v81;
  char* v82;
  unsigned __int16* v83;
  char* v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int16* v87;
  __int64 v88;
  unsigned __int16* v89;
  unsigned __int8* v90;
  int v91;
  __int64 v92;
  char* v93;
  signed __int64 v94;
  __int64 v95;
  unsigned __int16* v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int16* v99;
  __int64 v100;
  unsigned __int16* v101;
  unsigned __int8* v102;
  int v103;
  __int64 v104;
  char* v105;
  signed __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int16* v109;
  __int64 v110;
  __int64 v111;
  char* v112;
  signed __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int16* v116;
  __int64 v117;
  unsigned __int16* v118;
  __int16 v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  char v123;
  unsigned __int16* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int16* v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  signed __int64 v132;
  __int64 v133;
  char* v134;
  unsigned __int64 v135;
  unsigned __int16* v136;
  unsigned __int8* v137;
  int v138;
  unsigned __int16* v139;
  __int64 v140;
  char* v141;
  signed __int64 v142;
  __int64 v143;
  unsigned int v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  unsigned __int8* v148;
  unsigned int v149;
  unsigned __int8* v150;
  int v151;
  char* v152;
  char* v153;
  char* v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int16* v162;
  unsigned __int8* v163;
  int v164;
  char* v165;
  _QWORD* v166;
  __int64 v167;
  __int64 v168;
  unsigned __int16* v169;
  unsigned __int8* v170;
  int v171;
  __int64 v172;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  char* v178;
  unsigned __int64 v179;
  _BYTE* v180;
  unsigned __int64 v181;
  unsigned __int16* v182;
  __int64 v183;
  unsigned __int16* v184;
  __int16 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int16* v188;
  int v189;
  unsigned __int16* v190;
  unsigned __int16* v191;
  __int64 v192;
  __int64 v193[2];

  v120 = COERCE_AS(__typeof__(v120),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v156 = COERCE_AS(__typeof__(v156),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v160 = COERCE_AS(__typeof__(v160),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v167 = COERCE_AS(__typeof__(v167),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v187 = COERCE_AS(__typeof__(v187),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *a1;
  v2 = a1[1];
  v3 = (char*)v2 - (char*)*a1;
  if (v3 < 2) {
    return nullptr;
  }
  v5 = *v1;
  v7 = v5 != 29543;
  if (v5 == 29543) {
    v3 = (char*)v2 - (char*)++v1;
    *a1 = v1;
    if ((unsigned __int64)((char*)v2 - (char*)v1) < 2) {
      return nullptr;
    }
    v8 = 1;
  }
  else {
    v8 = 0;
  }
  v9 = (unsigned __int8*)v1 + 1;
  v10 = *(unsigned __int8*)v1;
  v11 = 62;
  v12 = 0;
  do {
    v13 = (unsigned __int64)(v12 + v11) >> 1;
    v14 = (unsigned __int8*)&SdkData_e82c40 + 16 * v13;
    v15 = *v14;
    if (v15 < v10 || v15 == v10 && v14[1] < (int)*v9) {
      v12 = v13 + 1;
      v13 = v11;
    }
    v11 = v13;
  } while (v13 != v12);
  v16 = (unsigned __int8*)&SdkData_e82c40 + 16 * v12;
  if (*v16 == v10 && v16[1] == *v9) {
    v17 = *((const char**)v16 + 1);
    v18 = v16[2];
    v19 = v1 + 1;
    *a1 = v1 + 1;
    v20 = strlen_plt(v17),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((int)v18 > 0xA) {
      v21 = v17;
      v22 = v20;
      goto LABEL_40;
    }
    if (v20 >= 8 && *(_QWORD*)v17 == 0x726F74617265706FLL) {
      v21 = v17 + 8;
      v22 = v20 - 8;
      if (v20 != 8 && *v21 == 32) {
        v21 = v17 + 9;
        v22 = v20 - 9;
      }
    LABEL_40:
      v193[0] = (__int64)v21;
      v193[1] = v22;
      result = nullptr;
      switch (v18) {
      case 0LL:
        v25 = v16[3];
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        v26 = a1[614];
        v27 = result;
        v28 = *((_QWORD*)v26 + 1);
        if ((unsigned __int64)(v28 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
          v29 = (unsigned __int16*)malloc_plt(0x1000u),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v29 == nullptr) {
            goto LABEL_288;
          }
          v28 = 0;
          *(_QWORD*)v29 = v26;
          *((_QWORD*)v29 + 1) = 0;
          v26 = v29;
          a1[614] = v29;
        }
        *((_QWORD*)v26 + 1) = v28 + 48;
        *(_QWORD*)((char*)v26 + v28 + 16) = SdkData_e830b8;
        result = (char*)v26 + v28 + 16;
        result[8] = 66;
        v30 = *(unsigned __int16*)((char*)v26 + v28 + 25);
        *((_QWORD*)result + 2) = v21;
        *((_QWORD*)result + 3) = v22;
        *((_QWORD*)result + 4) = v27;
        *(_WORD*)(result + 9) = v30 & 0xF000 | (v25 >> 1) | 0x540;
        return result;
      case 1LL:
        if (v19 == v2 || *(_BYTE*)v19 != 95) {
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83a7f0(
                    (__int64)a1, (__int64)result, v193, v16[3] >> 1);
          }
        }
        else {
          v62 = v16[3];
          *a1 = (unsigned __int16*)((char*)v1 + 3);
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83dca0(
                    (__int64)a1, (__int64)v21, v22, (__int64)result, v62 >> 1);
          }
        }
        return result;
      case 2LL:
        v63 = v16[3];
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != nullptr) {
          v64 = result;
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83d790(
                    (__int64)a1, (__int64)v64, (__int64)v21, v22,
                    (__int64)result, v63 >> 1);
          }
        }
        return result;
      case 3LL:
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != nullptr) {
          v51 = result;
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83a8b0(
                    (__int64)a1, (__int64)v51, (__int64)result, v16[3] >> 1);
          }
        }
        return result;
      case 4LL:
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != nullptr) {
          v71 = result;
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83a960(
                    (__int64)a1, (__int64)v71, v193, (__int64)result,
                    v16[3] >> 1);
          }
        }
        return result;
      case 5LL:
        v72 = (unsigned __int16*)(a1 + 5);
        v73 = ((char*)a1[3] - (char*)a1[2]) >> 3;
        while (2) {
          if (v19 == v2 || *(_BYTE*)v19 != 95) {
            result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (result != nullptr) {
              v75 = a1[3];
              if (v75 != a1[4]) {
                goto LABEL_112;
              }
              v77 = (__int64)a1[2];
              v78 = result;
              v79 = (signed __int64)v75 - v77;
              if ((unsigned __int16*)v77 == v72) {
                v74 = malloc_plt(2 * ((_QWORD)v75 - v77)),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v74 != 0) {
                  if (v75 != v72) {
                    v80 = v74;
                    memmove_plt(v74, v77, v79),
                        v120 = COERCE_AS(
                            __typeof__(v120),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v156 = COERCE_AS(
                            __typeof__(v156),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v160 = COERCE_AS(
                            __typeof__(v160),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v167 = COERCE_AS(
                            __typeof__(v167),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v177 = COERCE_AS(
                            __typeof__(v177),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v187 = COERCE_AS(
                            __typeof__(v187),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v74 = v80;
                  }
                  a1[2] = (unsigned __int16*)v74;
                  goto LABEL_111;
                }
              }
              else {
                v74 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v75 - v77)),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                a1[2] = (unsigned __int16*)v74;
                if (v74 != 0) {
                LABEL_111:
                  v75 = (unsigned __int16*)(v74 + v79);
                  v76 = v74 + 8 * (v79 >> 2);
                  result = v78;
                  a1[4] = (unsigned __int16*)v76;
                LABEL_112:
                  *(_QWORD*)v75 = result;
                  v19 = *a1;
                  v2 = a1[1];
                  a1[3] = v75 + 4;
                  continue;
                }
              }
            LABEL_286:
              abort_plt(),
                  v120 = COERCE_AS(
                      __typeof__(v120),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v156 = COERCE_AS(
                      __typeof__(v156),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v167 = COERCE_AS(
                      __typeof__(v167),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v187 = COERCE_AS(
                      __typeof__(v187),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            return result;
          }
          break;
        }
        *a1 = (unsigned __int16*)((char*)v19 + 1);
        v192 =
            anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                a1, v73),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v121 = v120;
        result =
            (char*)anonymous_itanium_demangle_AbstractManglingParser_parseType(
                (__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        v122 = result;
        v123 = SdkRoutine_833240((__int64*)a1, (__int64)"pi", 2u),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v190 = a1[3];
        v191 = a1[2];
        if ((v123 & 1) != 0) {
          while (1) {
            v124 = *a1;
            if (*a1 != a1[1] && *(_BYTE*)v124 == 69) {
              goto LABEL_186;
            }
            result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (result == nullptr) {
              return result;
            }
            v128 = a1[3];
            if (v128 == a1[4]) {
              v130 = (__int64)a1[2];
              v131 = result;
              v132 = (signed __int64)v128 - v130;
              if ((unsigned __int16*)v130 == v72) {
                v127 = malloc_plt(2 * ((_QWORD)v128 - v130)),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v127 == 0) {
                  goto LABEL_286;
                }
                if (v128 != v72) {
                  v133 = v127;
                  memmove_plt(v127, v130, v132),
                      v120 = COERCE_AS(
                          __typeof__(v120),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v156 = COERCE_AS(
                          __typeof__(v156),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v160 = COERCE_AS(
                          __typeof__(v160),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v167 = COERCE_AS(
                          __typeof__(v167),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v177 = COERCE_AS(
                          __typeof__(v177),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v187 = COERCE_AS(
                          __typeof__(v187),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v127 = v133;
                }
                a1[2] = (unsigned __int16*)v127;
              }
              else {
                v127 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v128 - v130)),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                a1[2] = (unsigned __int16*)v127;
                if (v127 == 0) {
                  goto LABEL_286;
                }
              }
              v128 = (unsigned __int16*)(v127 + v132);
              v129 = v127 + 8 * (v132 >> 2);
              result = v131;
              a1[4] = (unsigned __int16*)v129;
            }
            *(_QWORD*)v128 = result;
            a1[3] = v128 + 4;
          }
        }
        v124 = *a1;
        if (*a1 != a1[1] && *(_BYTE*)v124 == 69) {
        LABEL_186:
          *a1 = (unsigned __int16*)((char*)v124 + 1);
          v125 =
              anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                  a1, ((char*)v190 - (char*)v191) >> 3),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          return (char*)
              anonymous_itanium_demangle_AbstractManglingParser_make_83aa20(
                  (__int64)a1, v192, v121, (__int64)v122, v125, v126, v8,
                  v16[3] & 1);
        }
        return nullptr;
      case 6LL:
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        v65 = a1[614];
        v66 = v16[3];
        v67 = result;
        v68 = *((_QWORD*)v65 + 1);
        if ((unsigned __int64)(v68 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v69 = (unsigned __int16*)malloc_plt(0x1000u),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v69 == nullptr) {
            goto LABEL_288;
          }
          v68 = 0;
          *(_QWORD*)v69 = v65;
          *((_QWORD*)v69 + 1) = 0;
          v65 = v69;
          a1[614] = v69;
        }
        *((_QWORD*)v65 + 1) = v68 + 32;
        *(_QWORD*)((char*)v65 + v68 + 16) = SdkData_e83310;
        result = (char*)v65 + v68 + 16;
        result[8] = 65;
        v70 = *(unsigned __int16*)((char*)v65 + v68 + 25);
        *((_QWORD*)result + 2) = v67;
        result[24] = v8;
        *(_WORD*)(result + 9) = v70 & 0xF000 | (v66 >> 1) | 0x540;
        result[25] = v66 & 1;
        return result;
      case 7LL:
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        v83 = (unsigned __int16*)(a1 + 5);
        v84 = result;
        v85 = ((char*)a1[3] - (char*)a1[2]) >> 3;
        while (2) {
          v89 = *a1;
          if (*a1 != a1[1]) {
            v91 = *(unsigned __int8*)v89;
            v90 = (unsigned __int8*)v89 + 1;
            if (v91 == 69) {
              *a1 = (unsigned __int16*)v90;
              v155 =
                  anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                      a1, v85),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              return (char*)
                  anonymous_itanium_demangle_AbstractManglingParser_make_83ab10(
                      (__int64)a1, (__int64)v84, v155, v156, v16[3] & 1,
                      v16[3] >> 1);
            }
          }
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result == nullptr) {
            return result;
          }
          v87 = a1[3];
          if (v87 != a1[4]) {
            goto LABEL_130;
          }
          v92 = (__int64)a1[2];
          v93 = result;
          v94 = (signed __int64)v87 - v92;
          if ((unsigned __int16*)v92 == v83) {
            v86 = malloc_plt(2 * ((_QWORD)v87 - v92)),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v86 == 0) {
              goto LABEL_286;
            }
            if (v87 != v83) {
              v95 = v86;
              memmove_plt(v86, v92, v94),
                  v120 = COERCE_AS(
                      __typeof__(v120),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v156 = COERCE_AS(
                      __typeof__(v156),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v167 = COERCE_AS(
                      __typeof__(v167),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v187 = COERCE_AS(
                      __typeof__(v187),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v86 = v95;
            }
            a1[2] = (unsigned __int16*)v86;
          }
          else {
            v86 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v87 - v92)),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            a1[2] = (unsigned __int16*)v86;
            if (v86 == 0) {
              goto LABEL_286;
            }
          }
          v87 = (unsigned __int16*)(v86 + v94);
          v88 = v86 + 8 * (v94 >> 2);
          result = v93;
          a1[4] = (unsigned __int16*)v88;
        LABEL_130:
          *(_QWORD*)v87 = result;
          a1[3] = v87 + 4;
          continue;
        }
      case 8LL:
        v54 = *((_BYTE*)a1 + 776);
        *((_BYTE*)a1 + 776) = 0;
        v55 = anonymous_itanium_demangle_AbstractManglingParser_parseType(
            (__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_BYTE*)a1 + 776) = v54;
        if (v55 == 0) {
          return nullptr;
        }
        v56 = ((char*)a1[3] - (char*)a1[2]) >> 3;
        v58 = *a1;
        v57 = a1[1];
        if (*a1 == v57) {
          goto LABEL_206;
        }
        v59 = *(unsigned __int8*)v58;
        if (v59 == 69) {
          *a1 = (unsigned __int16*)((char*)v58 + 1);
        }
        else {
          if (v59 == 95) {
            v60 = (unsigned __int16*)((char*)v58 + 1);
            *a1 = v60;
            v61 = (unsigned __int16*)(a1 + 5);
            while (v60 == v57 || *(_BYTE*)v60 != 69) {
              result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (result == nullptr) {
                return result;
              }
              v109 = a1[3];
              if (v109 == a1[4]) {
                v111 = (__int64)a1[2];
                v112 = result;
                v113 = (signed __int64)v109 - v111;
                if ((unsigned __int16*)v111 == v61) {
                  v108 = malloc_plt(2 * ((_QWORD)v109 - v111)),
                  v120 = COERCE_AS(
                      __typeof__(v120),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v156 = COERCE_AS(
                      __typeof__(v156),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v167 = COERCE_AS(
                      __typeof__(v167),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v187 = COERCE_AS(
                      __typeof__(v187),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v108 == 0) {
                    goto LABEL_286;
                  }
                  if (v109 != v61) {
                    v114 = v108;
                    memmove_plt(v108, v111, v113),
                        v120 = COERCE_AS(
                            __typeof__(v120),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v156 = COERCE_AS(
                            __typeof__(v156),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v160 = COERCE_AS(
                            __typeof__(v160),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v167 = COERCE_AS(
                            __typeof__(v167),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v177 = COERCE_AS(
                            __typeof__(v177),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v187 = COERCE_AS(
                            __typeof__(v187),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v108 = v114;
                  }
                  a1[2] = (unsigned __int16*)v108;
                }
                else {
                  v108 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v109 - v111)),
                  v120 = COERCE_AS(
                      __typeof__(v120),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v156 = COERCE_AS(
                      __typeof__(v156),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v167 = COERCE_AS(
                      __typeof__(v167),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v187 = COERCE_AS(
                      __typeof__(v187),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  a1[2] = (unsigned __int16*)v108;
                  if (v108 == 0) {
                    goto LABEL_286;
                  }
                }
                v109 = (unsigned __int16*)(v108 + v113);
                v110 = v108 + 8 * (v113 >> 2);
                result = v112;
                a1[4] = (unsigned __int16*)v110;
              }
              *(_QWORD*)v109 = result;
              v60 = *a1;
              v57 = a1[1];
              a1[3] = v109 + 4;
            }
            *a1 = (unsigned __int16*)((char*)v60 + 1);
            v159 =
                anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                    a1, v56),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v161 = v160;
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83abe0(
                    (__int64)a1, v55, v159, v161, v16[3] >> 1);
          }
        LABEL_206:
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result == nullptr) {
            return result;
          }
          v139 = a1[3];
          if (v139 == a1[4]) {
            v140 = (__int64)a1[2];
            v141 = result;
            v142 = (signed __int64)v139 - v140;
            if ((unsigned __int16**)v140 == a1 + 5) {
              v143 = malloc_plt(2 * ((_QWORD)v139 - v140)),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v143 == 0) {
                goto LABEL_286;
              }
              if (v139 != (unsigned __int16*)(a1 + 5)) {
                v174 = v143;
                memmove_plt(v143, v140, v142),
                    v120 = COERCE_AS(
                        __typeof__(v120),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v156 = COERCE_AS(
                        __typeof__(v156),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v160 = COERCE_AS(
                        __typeof__(v160),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v167 = COERCE_AS(
                        __typeof__(v167),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v177 = COERCE_AS(
                        __typeof__(v177),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v187 = COERCE_AS(
                        __typeof__(v187),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v143 = v174;
              }
              a1[2] = (unsigned __int16*)v143;
            }
            else {
              v143 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v139 - v140)),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              a1[2] = (unsigned __int16*)v143;
              if (v143 == 0) {
                goto LABEL_286;
              }
            }
            v139 = (unsigned __int16*)(v143 + v142);
            v175 = v143 + 8 * (v142 >> 2);
            result = v141;
            a1[4] = (unsigned __int16*)v175;
          }
          *(_QWORD*)v139 = result;
          a1[3] = v139 + 4;
        }
        v176 =
            anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                a1, v56),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v177 == 1) {
          v161 = 1;
          v159 = v176;
          return (char*)
              anonymous_itanium_demangle_AbstractManglingParser_make_83abe0(
                  (__int64)a1, v55, v159, v161, v16[3] >> 1);
        }
        break;
      case 9LL:
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != nullptr) {
          v81 = result;
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            v82 = result;
            result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (result != nullptr) {
              return (char*)
                  anonymous_itanium_demangle_AbstractManglingParser_make_83aca0(
                      (__int64)a1, (__int64)v81, (__int64)v82, (__int64)result,
                      v16[3] >> 1);
            }
          }
        }
        return result;
      case 10LL:
        return result;
      case 11LL:
        result =
            (char*)anonymous_itanium_demangle_AbstractManglingParser_parseType(
                (__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != nullptr) {
          v50 = result;
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (result != nullptr) {
            return (char*)
                anonymous_itanium_demangle_AbstractManglingParser_make_83ad60(
                    (__int64)a1, v193, (__int64)v50, (__int64)result,
                    v16[3] >> 1);
          }
        }
        return result;
      case 12LL:
        v52 = v16[3];
        if ((v52 & 1) != 0) {
          v53 = anonymous_itanium_demangle_AbstractManglingParser_parseType(
              (__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v53 = (__int64)llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v115 = v53;
        if (v53 == 0) {
          return nullptr;
        }
        v116 = a1[614];
        v117 = *((_QWORD*)v116 + 1);
        if ((unsigned __int64)(v117 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
          v118 = (unsigned __int16*)malloc_plt(0x1000u),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v118 == nullptr) {
            goto LABEL_288;
          }
          v117 = 0;
          *(_QWORD*)v118 = v116;
          *((_QWORD*)v118 + 1) = 0;
          v116 = v118;
          a1[614] = v118;
        }
        *((_QWORD*)v116 + 1) = v117 + 64;
        *(_QWORD*)((char*)v116 + v117 + 16) = SdkData_e83568;
        result = (char*)v116 + v117 + 16;
        result[8] = 60;
        v119 = *(unsigned __int16*)((char*)v116 + v117 + 25);
        *((_QWORD*)result + 2) = v21;
        *((_QWORD*)result + 3) = v22;
        *((_QWORD*)result + 4) = v115;
        *((_QWORD*)result + 5) = 0;
        *((_QWORD*)result + 6) = 0;
        *(_WORD*)(result + 9) = v119 & 0xF000 | (v52 >> 1) | 0x540;
        return result;
      default:
        __builtin_trap();
      }
      return nullptr;
    }
  LABEL_287:
    SdkRoutine_84c1f0(
        (__int64)"libc++abi: operator name does not start with 'operator'"),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  switch (v10) {
  case 'f':
    v23 = *v9;
    if (v23 == 112 || v3 != 2 && v23 == 76 &&
                          (unsigned int)*((unsigned __int8*)v1 + 2) - 48 <= 9) {
      return (char*)
          anonymous_itanium_demangle_AbstractManglingParser_parseFunctionParam(
              (__int64*)a1);
    }
    if (v1 == v2) {
      return nullptr;
    }
    *a1 = (unsigned __int16*)v9;
    if (v2 == (unsigned __int16*)v9) {
      return nullptr;
    }
    v31 = *v9;
    result = nullptr;
    if (v31 > 107) {
      if (v31 == 108) {
        v32 = 1;
      }
      else {
        if (v31 != 114) {
          return result;
        }
        v32 = 0;
      }
      v33 = 0;
    }
    else if (v31 == 76) {
      v32 = 1;
      v33 = 1;
    }
    else {
      if (v31 != 82) {
        return result;
      }
      v32 = 0;
      v33 = 1;
    }
    *a1 = v1 + 1;
    if ((unsigned __int64)((char*)v2 - (char*)(v1 + 1)) < 2) {
      return nullptr;
    }
    v144 = *((unsigned __int8*)v1 + 2);
    v145 = 62;
    v146 = 0;
    do {
      v147 = (unsigned __int64)(v146 + v145) >> 1;
      v148 = (unsigned __int8*)&SdkData_e82c40 + 16 * v147;
      v149 = *v148;
      if (v149 < v144 ||
          v149 == v144 && v148[1] < (int)*((unsigned __int8*)v1 + 3)) {
        v146 = v147 + 1;
        v147 = v145;
      }
      v145 = v147;
    } while (v147 != v146);
    v150 = (unsigned __int8*)&SdkData_e82c40 + 16 * v146;
    if (*v150 != v144) {
      return nullptr;
    }
    if (v150[1] != *((unsigned __int8*)v1 + 3)) {
      return nullptr;
    }
    *a1 = v1 + 2;
    v151 = v150[2];
    if (v151 != 2) {
      if (v151 != 4) {
        return nullptr;
      }
      v152 = *((const char**)v150 + 1);
      if (v152[strlen_plt(v152) - 1] != 42) {
        return nullptr;
      }
    }
    result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      v153 = result;
      if (v33 != 0) {
        result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        if (v32 != 0) {
          v154 = v153;
        }
        else {
          v154 = result;
        }
        if (v32 != 0) {
          v153 = result;
        }
      }
      else {
        v154 = nullptr;
      }
      v178 = *((const char**)v150 + 1);
      v179 = strlen_plt(v178),
      v120 = COERCE_AS(__typeof__(v120),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v156 = COERCE_AS(__typeof__(v156),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v167 = COERCE_AS(__typeof__(v167),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v187 = COERCE_AS(__typeof__(v187),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v179 >= 8 && *(_QWORD*)v178 == 0x726F74617265706FLL) {
        v180 = v178 + 8;
        v181 = v179 - 8;
        if (v179 != 8 && *v180 == 32) {
          v180 = v178 + 9;
          v181 = v179 - 9;
        }
        v182 = a1[614];
        v183 = *((_QWORD*)v182 + 1);
        if ((unsigned __int64)(v183 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
          v184 = (unsigned __int16*)malloc_plt(0x1000u),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v184 == nullptr) {
          LABEL_288:
            std_terminate_plt(),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v183 = 0;
          *(_QWORD*)v184 = v182;
          *((_QWORD*)v184 + 1) = 0;
          v182 = v184;
          a1[614] = v184;
        }
        *((_QWORD*)v182 + 1) = v183 + 64;
        *(_QWORD*)((char*)v182 + v183 + 16) = SdkData_e83dd8;
        result = (char*)v182 + v183 + 16;
        result[8] = 71;
        v185 = *(unsigned __int16*)((char*)v182 + v183 + 25);
        *((_QWORD*)result + 2) = v153;
        *((_QWORD*)result + 3) = v154;
        *((_QWORD*)result + 4) = v180;
        *((_QWORD*)result + 5) = v181;
        result[48] = v32;
        *(_WORD*)(result + 9) = v185 & 0xF000 | 0x540;
        return result;
      }
      goto LABEL_287;
    }
    return result;
  case 'T':
    return (char*)SdkRoutine_8382a0((__int64)a1);
  case 'L':
    return (char*)
        anonymous_itanium_demangle_AbstractManglingParser_parseExprPrimary(
            (unsigned __int8**)a1);
  default:
    break;
  }
  if (*v1 == 27753) {
    v34 = a1[2];
    v35 = a1[3];
    v36 = (unsigned __int8*)(v1 + 1);
    v37 = (unsigned __int16*)(a1 + 5);
    *a1 = (unsigned __int16*)v36;
    v38 = ((char*)v35 - (char*)v34) >> 3;
    while (1) {
      if (v36 != (unsigned __int8*)v2) {
        v43 = *v36;
        v42 = v36 + 1;
        if (v43 == 69) {
          break;
        }
      }
      result = (char*)
          anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(
              (__int64)a1),
      v120 = COERCE_AS(__typeof__(v120),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v156 = COERCE_AS(__typeof__(v156),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v167 = COERCE_AS(__typeof__(v167),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v187 = COERCE_AS(__typeof__(v187),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result == nullptr) {
        return result;
      }
      v40 = a1[3];
      if (v40 == a1[4]) {
        v44 = (__int64)a1[2];
        v45 = result;
        v46 = (signed __int64)v40 - v44;
        if ((unsigned __int16*)v44 == v37) {
          v39 = malloc_plt(2 * ((_QWORD)v40 - v44)),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v39 == 0) {
            goto LABEL_286;
          }
          if (v40 != v37) {
            v47 = v39;
            memmove_plt(v39, v44, v46),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v39 = v47;
          }
          a1[2] = (unsigned __int16*)v39;
        }
        else {
          v39 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v40 - v44)),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          a1[2] = (unsigned __int16*)v39;
          if (v39 == 0) {
            goto LABEL_286;
          }
        }
        v40 = (unsigned __int16*)(v39 + v46);
        v41 = v39 + 8 * (v46 >> 2);
        result = v45;
        a1[4] = (unsigned __int16*)v41;
      }
      *(_QWORD*)v40 = result;
      v36 = (unsigned __int8*)*a1;
      v2 = a1[1];
      a1[3] = v40 + 4;
    }
    *a1 = (unsigned __int16*)v42;
    v48 =
        anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
            a1, v38),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return (char*)
        anonymous_itanium_demangle_AbstractManglingParser_parsePointerToMemberConversionExpr(
            (__int64)a1, v48);
  }
  v24 = (char*)v2 - (char*)v1;
  if ((unsigned __int64)((char*)v2 - (char*)v1) >= 2) {
    if (*v1 == 25453) {
      *a1 = v1 + 1;
      return (char*)SdkRoutine_83c2a0((__int64)a1);
    }
    if (*v1 == 30830) {
      *a1 = v1 + 1;
      result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
      v120 = COERCE_AS(__typeof__(v120),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v156 = COERCE_AS(__typeof__(v156),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v167 = COERCE_AS(__typeof__(v167),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v187 = COERCE_AS(__typeof__(v187),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result != nullptr) {
        return (char*)
            anonymous_itanium_demangle_AbstractManglingParser_make_83c430(
                (__int64)a1, (__int64)result, 2);
      }
      return result;
    }
  }
  if (v2 != v1) {
    if (v24 >= 2 && v10 == 114) {
      if ((*v9 | 0x20) == 0x71) {
        return (char*)llvm_libcxx_libcxxabi_src_83c500((unsigned __int8**)a1);
      }
    }
    else if (v24 < 2) {
      goto LABEL_72;
    }
    if (*v1 == 28531) {
      *a1 = v1 + 1;
      return (char*)
          anonymous_itanium_demangle_AbstractManglingParser_parseSubobjectExpr(
              (unsigned __int8**)a1);
    }
  }
LABEL_72:
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"sp", 2u) & 1) != 0) {
    result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      return (char*)
          anonymous_itanium_demangle_AbstractManglingParser_make_83cdb0(
              (__int64)a1, (__int64)result);
    }
    return result;
  }
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"sZ", 2u) & 1) != 0) {
    if (a1[1] != *a1 && *(_BYTE*)*a1 == 84) {
      result = (char*)SdkRoutine_8382a0((__int64)a1),
      v120 = COERCE_AS(__typeof__(v120),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v156 = COERCE_AS(__typeof__(v156),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v167 = COERCE_AS(__typeof__(v167),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v187 = COERCE_AS(__typeof__(v187),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result != nullptr) {
        return (char*)
            anonymous_itanium_demangle_AbstractManglingParser_make_83ce50(
                (__int64)a1, (__int64)result);
      }
      return result;
    }
    result = (char*)
        anonymous_itanium_demangle_AbstractManglingParser_parseFunctionParam(
            (__int64*)a1),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result == nullptr) {
      return result;
    }
    return (char*)anonymous_itanium_demangle_AbstractManglingParser_make_83cef0(
        (__int64)a1, (__int64)result);
  }
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"sP", 2u) & 1) != 0) {
    v96 = (unsigned __int16*)(a1 + 5);
    v97 = ((char*)a1[3] - (char*)a1[2]) >> 3;
    while (1) {
      v101 = *a1;
      if (*a1 != a1[1]) {
        v103 = *(unsigned __int8*)v101;
        v102 = (unsigned __int8*)v101 + 1;
        if (v103 == 69) {
          break;
        }
      }
      result = (char*)SdkRoutine_835ee0((__int64)a1),
      v120 = COERCE_AS(__typeof__(v120),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v156 = COERCE_AS(__typeof__(v156),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v167 = COERCE_AS(__typeof__(v167),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v187 = COERCE_AS(__typeof__(v187),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result == nullptr) {
        return result;
      }
      v99 = a1[3];
      if (v99 == a1[4]) {
        v104 = (__int64)a1[2];
        v105 = result;
        v106 = (signed __int64)v99 - v104;
        if ((unsigned __int16*)v104 == v96) {
          v98 = malloc_plt(2 * ((_QWORD)v99 - v104)),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v98 == 0) {
            goto LABEL_286;
          }
          if (v99 != v96) {
            v107 = v98;
            memmove_plt(v98, v104, v106),
                v120 =
                    COERCE_AS(__typeof__(v120),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v156 =
                    COERCE_AS(__typeof__(v156),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v167 =
                    COERCE_AS(__typeof__(v167),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v187 =
                    COERCE_AS(__typeof__(v187),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v98 = v107;
          }
          a1[2] = (unsigned __int16*)v98;
        }
        else {
          v98 = realloc_plt((__int64)a1[2], 2 * ((_QWORD)v99 - v104)),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          a1[2] = (unsigned __int16*)v98;
          if (v98 == 0) {
            goto LABEL_286;
          }
        }
        v99 = (unsigned __int16*)(v98 + v106);
        v100 = v98 + 8 * (v106 >> 2);
        result = v105;
        a1[4] = (unsigned __int16*)v100;
      }
      *(_QWORD*)v99 = result;
      a1[3] = v99 + 4;
    }
    *a1 = (unsigned __int16*)v102;
    v157 =
        anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
            a1, v97),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = (char*)
        anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_NodeArrayNode_anonymous_itanium_demangle_NodeArray(
            (__int64)a1, v157),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return (char*)anonymous_itanium_demangle_AbstractManglingParser_make_83cef0(
        (__int64)a1, (__int64)result);
  }
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"tl", 2u) & 1) != 0) {
    result = (char*)anonymous_itanium_demangle_AbstractManglingParser_parseType(
        (__int64)a1),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      v134 = result;
      v135 = ((char*)a1[3] - (char*)a1[2]) >> 3;
      v136 = *a1;
      if (*a1 == a1[1]) {
        goto LABEL_203;
      }
    LABEL_202:
      v138 = *(unsigned __int8*)v136;
      v137 = (unsigned __int8*)v136 + 1;
      if (v138 == 69) {
        *a1 = (unsigned __int16*)v137;
        v172 =
            anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
                a1, v135),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return (char*)
            anonymous_itanium_demangle_AbstractManglingParser_make_83d040(
                (__int64)a1, (__int64)v134, v172);
      }
      else {
      LABEL_203:
        while (1) {
          result = (char*)
              anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(
                  (__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v193[0] = (__int64)result;
          if (result == nullptr) {
            break;
          }
          SdkRoutine_836230((__int64*)a1 + 2, v193),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v136 = *a1;
          if (*a1 != a1[1]) {
            goto LABEL_202;
          }
        }
      }
    }
    return result;
  }
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"tr", 2u) & 1) != 0) {
    return anonymous_itanium_demangle_AbstractManglingParser_make_8377c0(
        (__int64)a1, "throw");
  }
  if ((SdkRoutine_833240((__int64*)a1, (__int64)"tw", 2u) & 1) != 0) {
    result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      return (char*)
          anonymous_itanium_demangle_AbstractManglingParser_make_83d0f0(
              (__int64)a1, (__int64)result);
    }
    return result;
  }
  v162 = *a1;
  if (*a1 == a1[1]) {
    return (char*)
        anonymous_itanium_demangle_AbstractManglingParser_parseUnresolvedName(
            (unsigned __int8**)a1, !v7);
  }
  v164 = *(unsigned __int8*)v162;
  v163 = (unsigned __int8*)v162 + 1;
  if (v164 != 117) {
    return (char*)
        anonymous_itanium_demangle_AbstractManglingParser_parseUnresolvedName(
            (unsigned __int8**)a1, !v7);
  }
  *a1 = (unsigned __int16*)v163;
  result =
      (char*)anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
          (unsigned __int8**)a1),
  v120 = COERCE_AS(__typeof__(v120),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v156 = COERCE_AS(__typeof__(v156),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v160 = COERCE_AS(__typeof__(v160),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v167 = COERCE_AS(__typeof__(v167),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v187 = COERCE_AS(__typeof__(v187),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result != nullptr) {
    v165 = result;
    v166 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 40LL))(
        (__int64)result),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v167 == 8 && *v166 == 0x666F646975755F5FLL) {
      v188 = *a1;
      if (*a1 != a1[1]) {
        v189 = *(unsigned __int8*)v188;
        if (v189 == 122) {
          *a1 = (unsigned __int16*)((char*)v188 + 1);
          result = llvm_libcxx_libcxxabi_src_8393e0((__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_284;
        }
        if (v189 == 116) {
          *a1 = (unsigned __int16*)((char*)v188 + 1);
          result = (char*)
              anonymous_itanium_demangle_AbstractManglingParser_parseType(
                  (__int64)a1),
          v120 = COERCE_AS(__typeof__(v120),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v156 = COERCE_AS(__typeof__(v156),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v167 = COERCE_AS(__typeof__(v167),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v187 = COERCE_AS(__typeof__(v187),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_284:
          v193[0] = (__int64)result;
          if (result == nullptr) {
            return result;
          }
          v168 = (char*)a1[3] - (char*)a1[2];
          SdkRoutine_836230((__int64*)a1 + 2, v193),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v167 = COERCE_AS(__typeof__(v167),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_278;
        }
      }
    }
    v168 = (char*)a1[3] - (char*)a1[2];
    v169 = *a1;
    if (*a1 == a1[1]) {
      goto LABEL_253;
    }
  LABEL_252:
    v171 = *(unsigned __int8*)v169;
    v170 = (unsigned __int8*)v169 + 1;
    if (v171 != 69) {
    LABEL_253:
      while (1) {
        result = (char*)SdkRoutine_835ee0((__int64)a1),
        v120 = COERCE_AS(__typeof__(v120),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v156 = COERCE_AS(__typeof__(v156),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v167 = COERCE_AS(__typeof__(v167),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v187 = COERCE_AS(__typeof__(v187),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v193[0] = (__int64)result;
        if (result == nullptr) {
          return result;
        }
        SdkRoutine_836230((__int64*)a1 + 2, v193),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v169 = *a1;
        if (*a1 != a1[1]) {
          goto LABEL_252;
        }
      }
    }
    *a1 = (unsigned __int16*)v170;
  LABEL_278:
    v186 =
        anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
            a1, v168 >> 3),
    v120 = COERCE_AS(__typeof__(v120),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v156 = COERCE_AS(__typeof__(v156),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v167 = COERCE_AS(__typeof__(v167),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v187 = COERCE_AS(__typeof__(v187),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return (char*)anonymous_itanium_demangle_AbstractManglingParser_make_83ab10(
        (__int64)a1, (__int64)v165, v186, v187, 0, 1);
  }
  return result;
}

#pragma GCC visibility pop
