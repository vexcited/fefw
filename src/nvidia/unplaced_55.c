#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
__int64* NgxRoutine_bf140(__int64*, unsigned __int64, int);
__int64* NgxRoutine_bf140_alt1(__int64*, unsigned __int64, unsigned int);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf70(__int64, __int64);
__int64 NgxRoutine_e1380(unsigned __int8*, unsigned __int8*, _DWORD*,
                         unsigned int);
__int64 freelocale_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 newlocale_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_29120(__int64*, unsigned __int64);
__int64 nvidia_dlss_rel_source_common_b4b90(__int64, __int64, __int64, __int64,
                                            ...);
__int64 nvidia_dlss_rel_source_common_b4c00(__int64 result, __int64, __int64,
                                            __int64, __int64, __int64, __int64,
                                            __int64, char);
__int64 nvidia_e1920(__int64, _DWORD*);
__int64 nvidia_e1a10(__int64, __int64, __int64);
__int64 uselocale_plt(_QWORD);
__int64 wcrtomb_plt(_QWORD, _QWORD, _QWORD);
__int64 wcsnrtombs_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 wcsrtombs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wmemchr_plt(__int64, unsigned int, unsigned __int64);
__int64 wmemchr_plt_alt1(_QWORD);
extern __int64 (*NgxData_94ec10[])();
extern __int64 NgxData_2b70a48;
extern char* NgxData_9511c8;
unsigned __int64 NgxRoutine_e1240(const char*, unsigned __int8*, _DWORD*, int);
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
unsigned __int64 strlen_plt(const char*);
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
_DWORD* nvidia_4440(__int64 a1);
_DWORD* nvidia_5200(__int64 a1);
_DWORD* nvidia_5800(__int64 a1);
_DWORD* nvidia_5b20(__int64 a1);
__attribute__((swiftcall)) void nvidia_33440(PSEUDO_X8 x8_, _DWORD* a1,
                                             char* a2);
__int64 nvidia_afb40(int a1, __int64 a2, __int64 a3);
_QWORD* nvidia_b10c0(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4);
_QWORD* nvidia_c7240(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     unsigned __int64* a6);
_QWORD* nvidia_c7900(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
__int64 nvidia_dbd00(__int64 a1, __int64* a2, _DWORD* a3, _DWORD* a4,
                     _QWORD* a5, _BYTE* a6, _BYTE* a7, _QWORD* a8);
void _Unwind_Resume_plt(__int64);
void __attribute__((noreturn)) unplaced_55_c789c(__int64 a1);
_QWORD* NgxRoutine_bf700(_QWORD* result);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64 NgxRoutine_baf00(_QWORD);
__int64 NgxRoutine_bc9e0();
__int64 NgxRoutine_be820(void);
__int64 NgxRoutine_bf010(void);
__int64 NgxRoutine_d6d40(__int64, __int64, __int64, __int64, __int64, int);
__int64 NgxRoutine_d7f40(__int64, __int64, __int64, __int64, __int64, int);
__int64 NgxRoutine_daf20();
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_dfc20(__int64*);
__int64 NgxRoutine_e0e80(void);
__int64 NgxRoutine_e0fa0(void);
__int64 nvidia_c97d0();
__int64 nvidia_cd0e0(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);
__int64 nvidia_cdb60(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);
__int64 std_exception_Destroy_exception_plt();
char* nvidia_e1af0(_WORD*, char*, unsigned __int64, unsigned int);
char* nvidia_e1af0_alt1();
extern _UNKNOWN NgxData_2b89de8;
extern void (*NgxData_954740)();
void __attribute__((noreturn)) NgxRoutine_baf40();
void __attribute__((noreturn)) NgxRoutine_baf40_alt1(__int64);
void __cxa_free_exception_plt();
void __cxa_guard_abort_plt(__int64);
void free_plt(__int64);
void free_plt_alt1();
void __attribute__((noreturn)) nvidia_b3380();
void __attribute__((noreturn)) nvidia_bb7f4(__int64 a1);
void __attribute__((noreturn)) nvidia_bb914(__int64 a1);
void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);
void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);
__int64 nvidia_be80c(__int64 a1);
__int64 nvidia_beffc(__int64 a1);
void __attribute__((noreturn))
nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn)) nvidia_c15c0(__int64 a1);
void __attribute__((noreturn)) nvidia_c1c80(__int64 a1);
void __attribute__((noreturn)) nvidia_c2340(__int64 a1);
void __attribute__((noreturn)) nvidia_c2a00(__int64 a1);
void __attribute__((noreturn)) nvidia_c30c0(__int64 a1);
void __attribute__((noreturn)) nvidia_c3780(__int64 a1);
void __attribute__((noreturn)) nvidia_c3da4(__int64 a1);
void __attribute__((noreturn)) nvidia_c43c4(__int64 a1);
void __attribute__((noreturn)) nvidia_c49e4(__int64 a1);
void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1);
void __attribute__((noreturn)) nvidia_c645c(__int64 a1);
void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1);
void __attribute__((noreturn)) nvidia_c71dc(__int64 a1);
void __attribute__((noreturn)) nvidia_c789c(__int64 a1);
void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1);
void __attribute__((noreturn)) nvidia_c8580(__int64 a1);
void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1);
void __attribute__((noreturn)) nvidia_c91c0(__int64 a1);
__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);
__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_cb280(__int64 a1);
void __attribute__((noreturn)) nvidia_cb75c(__int64 a1);
__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);
__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_ccb00(__int64 a1);
void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1);
void __attribute__((noreturn)) nvidia_d0e64(__int64 a1);
void __attribute__((noreturn)) nvidia_d18f8(__int64 a1);
void __attribute__((noreturn)) nvidia_d1c74(__int64 a1);
void __attribute__((noreturn))
nvidia_d37b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             void (*a16)(void));
void __attribute__((noreturn))
nvidia_d3fc8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             void (*a36)(void));
void __attribute__((noreturn))
nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41);
void __attribute__((noreturn)) nvidia_d5944(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12, __int64 a13,
                                            __int64 a14, void (*a15)(void));
void __attribute__((noreturn))
nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43);
void __attribute__((noreturn)) nvidia_d71f4(__int64 a1);
void __attribute__((noreturn)) nvidia_d8484(__int64 a1);
void __attribute__((noreturn)) nvidia_d8b18(__int64 a1);
void __attribute__((noreturn)) nvidia_dc098(__int64 a1);
void __attribute__((noreturn)) nvidia_dc0b0(__int64 a1);
void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1);
void __attribute__((noreturn)) nvidia_dc44c(__int64 a1);
void __attribute__((noreturn)) nvidia_dc464(__int64 a1);
void __attribute__((noreturn)) nvidia_dc47c(__int64 a1);
void __attribute__((noreturn)) nvidia_dc738(__int64 a1);
void __attribute__((noreturn)) nvidia_dc750(__int64 a1);
void __attribute__((noreturn)) nvidia_dc868(__int64 a1);
__int64 nvidia_e0e68(__int64 a1);
__int64 nvidia_e0f88(__int64 a1);
char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10);
void __attribute__((noreturn)) nvidia_e21bc(__int64 a1);
__attribute__((no_builtin("memset", "memcpy", "memmove")))
__attribute__((swiftcall)) void

nvidia_33440(PSEUDO_X8 x8_, _DWORD* a1, char* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  struct {
    char v41;
    char gap1_[7];
    __int64 v42;
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } f_;
  _DWORD* v46;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v46 = a1;
  if (a2 != nullptr) {
    v4 = a2;
  }
  else {
    v4 = "";
  }
  result = strlen_plt(v4),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_42;
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v7 = (char*)NgxRoutine_420(v9),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    f_.v44 = v6;
    f_.v45 = v7;
    f_.v43 = v9 | 1;
  }
  else {
    LOBYTE(f_.v43) = 2 * result;
    v7 = (char*)&f_.v43 + 1;
    if (result == 0) {
      v8 = v46;
      BYTE1(f_.v43) = 0;
      if (v46 == nullptr) {
        goto LABEL_31;
      }
      goto LABEL_14;
    }
  }
  result = memcpy_plt((__int64)v7, (__int64)v4, v6),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v8 = v46;
  v7[v6] = 0;
  if (v8 == nullptr) {
  LABEL_31:
    v34 = f_.v44;
    *a3 = f_.v43;
    a3[1] = v34;
    a3[2] = (__int64)f_.v45;
    {
      result;
      return;
    }
  }
LABEL_14:
  if (*(_DWORD*)v8 == 0) {
    goto LABEL_31;
  }
  v10 = newlocale_plt(6, "C", 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v10 == 0) {
    v32 = "newlocale(LC_ALL, \"C\") failed";
    v33 = 30;
  LABEL_30:
    result = nvidia_dlss_rel_source_common_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-str_unix.cpp",
        v33, (__int64)"WStrToUTF8Str", (__int64)v32, v11, v12, v13, v14,
        f_.v41),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_31;
  }
  v15 = v10;
  v16 = ((__int64 (*)(void))uselocale_plt)(),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  f_.v42 = 0;
  v17 = wcsrtombs_plt(0, &v46, 0, &f_.v42),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v18 = v17 + 1;
  if (v17 == -1) {
    uselocale_plt(v16),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    freelocale_plt(v15),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v32 = "wcsrtombs failed";
    v33 = 44;
    goto LABEL_30;
  }
  if (v17 + 1 < 0) {
    nvidia_dlss_rel_source_common_33410(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v19 = v17;
  v20 = NgxRoutine_420(v17 + 1),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v21 = v18 & 7;
  v22 = (const char*)v20;
  v23 = (_QWORD*)v20;
  if ((v18 & 7) != 0) {
    v23 = (_QWORD*)v20;
    do {
      *(_BYTE*)v23 = 0;
      v23 = (_QWORD*)((char*)v23 + 1);
      --v21;
    } while (v21 != 0);
  }
  if (v19 >= 7) {
    do {
      *v23++ = 0;
    } while (v23 != (_QWORD*)(v20 + v18));
  }
  memset_plt((__int64)&f_.v42, 0, 8u),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v24 = wcsrtombs_plt(v22, &v46, v18, &f_.v42),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  uselocale_plt(v16),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  freelocale_plt(v15),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v24 == -1) {
    nvidia_dlss_rel_source_common_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-str_unix.cpp",
        61, (__int64)"WStrToUTF8Str", (__int64)"wcsrtombs failed", v25, v26,
        v27, v28, f_.v41),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v35 = f_.v44;
    v36 = v22;
    v37 = v18;
    *a3 = f_.v43;
    a3[1] = v35;
    a3[2] = (__int64)f_.v45;
    {
      NgxRoutine_430(v36, v37),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      return;
    }
  }
  v29 = strlen_plt(v22),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_42:
    NgxRoutine_27cb0(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v29 | 7) + 1;
    }
    v39 = NgxRoutine_420(v38),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    a3[1] = v30;
    a3[2] = v39;
    *a3 = v38 | 1;
    v31 = v39;
    goto LABEL_38;
  }
  *(_BYTE*)a3 = 2 * v29;
  v31 = (__int64)a3 + 1;
  if (v29 != 0) {
  LABEL_38:
    memcpy_plt(v31, (__int64)v22, v30),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  *(_BYTE*)(v31 + v30) = 0;
  v40 = f_.v43;
  result = NgxRoutine_430(v22, v18),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v40 & 1) != 0) {
    v36 = f_.v45;
    v37 = f_.v43 & 0xFFFFFFFFFFFFFFFELL;
    {
      NgxRoutine_430(v36, v37),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nvidia_afb40(int a1, __int64 a2, __int64 a3)
{
  __int64 (*v4)(void);

  if (a1 < 17) {
    if (NgxData_2b70a48 != 0) {
      if (a2 != 0 && a3 != 0) {
        v4 = *(__int64 (**)(void))(NgxData_2b70a48 + 120LL * (unsigned int)a1 +
                                   32864);
        if (v4 != nullptr) {
          return v4();
        }
        else {
          return 3134193675LL;
        }
      }
      else {
        nvidia_dlss_rel_source_common_b4b90(
            (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
            444, (__int64)"NVSDK_NGX_GetScratchBufferSize",
            (__int64)"error: invalid byte size or invalid parameters interface "
                     "pointer");
        return 3134193669LL;
      }
    }
    else {
      return 3134193671LL;
    }
  }
  else {
    nvidia_dlss_rel_source_common_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
        438, (__int64)"NVSDK_NGX_GetScratchBufferSize",
        (__int64)"error: required feature is not supported by NGX runtime, "
                 "please update display driver");
    return 3134193676LL;
  }
}

_QWORD* nvidia_b10c0(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  unsigned __int8* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  unsigned __int8* v32;
  _QWORD* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  float v39;
  float v40;
  __int64 v41;
  _QWORD* v42;
  float v44;
  _BOOL8 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = (__int64)(a2 + 1);
  }
  else {
    v11 = *((_QWORD*)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = NgxRoutine_baf70(v11, v12);
  v14 = *(_QWORD*)(a1 + 8);
  v15 = v13;
  if (v14 == 0) {
    goto LABEL_54;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v4 = v13;
    if (v13 >= v14) {
      v4 = v13 % v14;
    }
    v17 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  else {
    v4 = v16 & v13;
    v17 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v16 & v13));
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  v18 = (_QWORD*)*v17;
  if (*v17 != 0) {
    if ((v14 & v16) == 0) {
      while (1) {
        v26 = v18[1];
        if (v26 == v15) {
          v27 = *((unsigned __int8*)v18 + 16);
          if ((v27 & 1) != 0) {
            v28 = v18[3];
          }
          else {
            v28 = v27 >> 1;
          }
          v29 = *a2;
          v30 = *((_QWORD*)a2 + 1);
          if ((v29 & 1) == 0) {
            v30 = v29 >> 1;
          }
          if (v28 == v30) {
            v31 = (v27 & 1) != 0 ? (_QWORD*)v18[4] : (_QWORD*)((char*)v18 + 17);
            v32 = (v29 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)memcmp_plt(v31, v32) == 0) {
              return v18;
            }
          }
        }
        else if ((v26 & v16) != v4) {
          goto LABEL_54;
        }
        v18 = (_QWORD*)*v18;
        if (v18 == nullptr) {
          goto LABEL_54;
        }
      }
    }
    do {
      v19 = v18[1];
      if (v19 == v15) {
        v20 = *((unsigned __int8*)v18 + 16);
        if ((v20 & 1) != 0) {
          v21 = v18[3];
        }
        else {
          v21 = v20 >> 1;
        }
        v22 = *a2;
        v23 = *((_QWORD*)a2 + 1);
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (v21 == v23) {
          v24 = (v20 & 1) != 0 ? (_QWORD*)v18[4] : (_QWORD*)((char*)v18 + 17);
          v25 = (v22 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)memcmp_plt(v24, v25) == 0) {
            return v18;
          }
        }
      }
      else {
        if (v19 >= v14) {
          v19 %= v14;
        }
        if (v19 != v4) {
          break;
        }
      }
      v18 = (_QWORD*)*v18;
    } while (v18 != nullptr);
  }
LABEL_54:
  v33 = (_QWORD*)NgxRoutine_420(56);
  v34 = *a4;
  *v33 = 0;
  v33[1] = v15;
  v18 = v33;
  v35 = *v34;
  v36 = v34[2];
  v33[3] = v34[1];
  v33[4] = v36;
  v33[2] = v35;
  v34[1] = 0;
  v34[2] = 0;
  *v34 = 0;
  v37 = (_QWORD*)NgxRoutine_420(16);
  *v37 = 0;
  v37[1] = 0;
  v18[5] = v37;
  v38 = (_QWORD*)NgxRoutine_420(32);
  v39 = *(float*)(a1 + 32);
  v38[2] = 0;
  v38[3] = v37;
  v18[6] = v38;
  *v38 = NgxData_94ec10;
  v38[1] = 0;
  v40 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v14 == 0 || (float)(v39 * (float)v14) < v40) {
    v44 = v40 / v39;
    v45 = true;
    if (v14 >= 3) {
      v45 = (v14 & (v14 - 1)) != 0;
    }
    v46 = v45 | (2 * v14);
    v47 = vcvtps_u64_f32(v44);
    if (v46 <= v47) {
      v48 = v47;
    }
    else {
      v48 = v46;
    }
    if (v48 == 1) {
      v48 = 2;
    }
    else if ((v48 & (v48 - 1)) != 0) {
      v48 = NgxRoutine_e2400(v48);
    }
    v49 = *(_QWORD*)(a1 + 8);
    if (v48 > v49) {
      goto LABEL_70;
    }
    if (v48 < v49) {
      v50 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v49 >= 3 && (v49 & (v49 - 1)) == 0) {
        v51 = 1LL << -(char)__clz(v50 - 1);
        if (v50 >= 2) {
          v50 = v51;
        }
        if (v48 <= v50) {
          v48 = v50;
        }
        if (v48 >= v49) {
          goto LABEL_83;
        }
      LABEL_70:
        nvidia_29120((__int64*)a1, v48);
        goto LABEL_83;
      }
      v52 = NgxRoutine_e2400(v50);
      if (v48 <= v52) {
        v48 = v52;
      }
      if (v48 < v49) {
        goto LABEL_70;
      }
    }
  LABEL_83:
    v14 = *(_QWORD*)(a1 + 8);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
        v41 = *(_QWORD*)a1;
        v42 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v15 % v14));
        if (v42 != nullptr) {
          goto LABEL_57;
        }
      }
      else {
        v4 = v15;
        v41 = *(_QWORD*)a1;
        v42 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v15);
        if (v42 != nullptr) {
          goto LABEL_57;
        }
      }
    }
    else {
      v4 = (v14 - 1) & v15;
      v41 = *(_QWORD*)a1;
      v42 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
      if (v42 != nullptr) {
        goto LABEL_57;
      }
    }
  LABEL_88:
    v53 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v18;
    *v18 = v53;
    *(_QWORD*)(v41 + 8 * v4) = a1 + 16;
    if (*v18 != 0) {
      v54 = *(_QWORD*)(*v18 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v54 >= v14) {
          v54 %= v14;
        }
        *(_QWORD*)(v41 + 8 * v54) = v18;
      }
      else {
        *(_QWORD*)(v41 + 8 * (v54 & (v14 - 1))) = v18;
      }
    }
    goto LABEL_58;
  }
  v41 = *(_QWORD*)a1;
  v42 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v42 == nullptr) {
    goto LABEL_88;
  }
LABEL_57:
  *v18 = *v42;
  *v42 = v18;
LABEL_58:
  ++*(_QWORD*)(a1 + 24);
  return v18;
}

void __attribute__((noreturn)) nvidia_b3380() { NgxData_954740(); }

void __attribute__((noreturn)) nvidia_bb7f4(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_bc9e0(),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  NgxRoutine_db240((__int64*)(v4 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_bb914(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_bc9e0(),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  NgxRoutine_db240((__int64*)(v4 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_be80c(__int64 a1)
{

  __cxa_free_exception_plt();
  _Unwind_Resume_plt(a1);
  return NgxRoutine_be820();
}

__int64 nvidia_beffc(__int64 a1)
{

  std_exception_Destroy_exception_plt();
  _Unwind_Resume_plt(a1);
  return NgxRoutine_bf010();
}

void __attribute__((noreturn))

nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LABEL_4:
    NgxRoutine_430(a14, a12 & 0xFFFFFFFFFFFFFFFELL),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  NgxRoutine_430(a11, a9 & 0xFFFFFFFFFFFFFFFELL),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v16),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v18 = v17;
  NgxRoutine_db240((__int64*)(v14 - 32)),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v18),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v20 = v19;
  NgxRoutine_db240((__int64*)(v14 - 32)),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v20),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c15c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c1c80(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c2340(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c2a00(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c30c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c3780(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c3da4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c43c4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c49e4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_bf700((_QWORD*)(v9 + 24)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_bf700(&a9),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  NgxRoutine_bf700(&a9),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v14),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v16 = v15;
  NgxRoutine_db240((__int64*)(v10 - 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v16),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v18 = v17;
  NgxRoutine_db240((__int64*)(v10 - 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v18),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c645c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c71dc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c7240(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     unsigned __int64* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  unsigned __int8* v16;
  char* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  unsigned int* v24;
  unsigned int v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  struct {
    char gap0_[16];
    __int64 v60;
    _BYTE v61[4];
    int v62;
    char gap32_[152];
    __int64 v63;
    __int64 v64;
    unsigned __int8* v65;
    _QWORD v66[3];
    char gap232_[4];
    int v67;
    char gap240_[100];
    int v68[3];
    __int64 v69;
  } f_;

  f_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&f_.v67);
  nvidia_e1920(a4, f_.v68);
  f_.v64 = 0;
  f_.v65 = nullptr;
  f_.v63 = 0;
  NgxRoutine_bf140(&f_.v63, 0x16u, 0);
  v14 = f_.v61;
  v15 = 0;
  f_.v60 = v12;
  if ((f_.v63 & 1) != 0) {
    v16 = f_.v65;
  }
  else {
    v16 = (unsigned __int8*)&f_.v63 + 1;
  }
  v17 = (const char*)v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((f_.v63 & 1) != 0) {
      v23 = f_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)f_.v63 >> 1;
    }
    if (v16 != (unsigned __int8*)&v17[v23]) {
      v24 = (unsigned int*)a2[3];
      if (v24 == (unsigned int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((f_.v63 & 1) != 0) {
        v26 = f_.v65;
        f_.v64 = 2 * v23;
      }
      else {
        LOBYTE(f_.v63) = 4 * v23;
        v26 = (unsigned __int8*)&f_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140(&f_.v63, v23, 0);
    }
    v27 = f_.v64;
    v28 = 22;
    if ((f_.v63 & 1) != 0) {
      v28 = (f_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)f_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140(&f_.v63, v28 - v27, 0);
      v17 = (char*)&f_.v63 + 1;
      if ((f_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = (const char*)f_.v65;
      goto LABEL_47;
    }
    if ((f_.v63 & 1) != 0) {
      f_.v64 = v28;
      f_.v65[v28] = 0;
      v17 = (char*)&f_.v63 + 1;
      if ((f_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(f_.v63) = 2 * v28;
      *((_BYTE*)&f_.v63 + v28 + 1) = 0;
      v17 = (char*)&f_.v63 + 1;
      if ((f_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = (unsigned __int8*)&v17[v23];
    v24 = (unsigned int*)a2[3];
    if (v24 == (unsigned int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == (unsigned __int8*)v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((f_.v66[0] & 1) != 0) {
      v29 = f_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(f_.v66[0]) >> 1;
    }
    if (v25 != f_.v68[0] | v29 == 0) {
      v31 = wmemchr_plt(v13, v25, 0x1Au);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= f_.v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == (unsigned __int8*)v17 || v16 - (unsigned __int8*)v17 > 2 ||
            *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(__int64))(*a2 + 80LL))((__int64)a2);
    }
    else {
      if (v14 - f_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((f_.v66[0] & 1) != 0) {
    v36 = f_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(f_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - f_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e1240(v17, v16, a5, v12);
  v38 = LOBYTE(f_.v66[0]);
  *a6 = v37;
  v39 = f_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - f_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (f_.v61 != v14 && f_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &f_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(f_.v66[0]);
      v40 = f_.v66[0] & 1;
    }
    v46 = (_BYTE*)f_.v66[2];
    if (v40 == 0) {
      v46 = (char*)f_.v66 + 1;
    }
    if (f_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *(int*)v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = f_.v66[1];
      }
      v48 = f_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *(_DWORD*)v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *(_DWORD*)a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(__int64))(*a2 + 72LL))((__int64)a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(__int64))(*a3 + 72LL))((__int64)a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *(_DWORD*)a5 |= 2u;
  }
LABEL_136:
  if ((f_.v63 & 1) != 0) {
    NgxRoutine_430(f_.v65, f_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((f_.v66[0] & 1) != 0) {
    NgxRoutine_430(f_.v66[2], f_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) unplaced_55_c789c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c789c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c7900(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  int v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  int* v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  int* v24;
  int v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  int* v43;
  int v44;
  _BYTE* v46;
  __int64 v47;
  _DWORD* v48;
  _BYTE* v49;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  _BOOL4 v54;
  int* v55;
  int v56;
  struct {
    char gap0_[16];
    __int64 v60;
    _BYTE v61[4];
    int v62;
    char gap32_[152];
    __int64 v63;
    __int64 v64;
    unsigned __int8* v65;
    _QWORD v66[3];
    char gap232_[108];
    int v68[3];
    __int64 v69;
  } f_;
  int v67;

  f_.v69 = v6;
  v11 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v11 != 0) {
    if (v11 == 64) {
      v12 = 8;
    }
    else if (v11 == 8) {
      v12 = 16;
    }
    else {
      v12 = 10;
    }
  }
  else {
    v12 = 0;
  }
  v13 = nvidia_e1a10(a1, a4, (__int64)&v67);
  nvidia_e1920(a4, f_.v68);
  f_.v64 = 0;
  f_.v65 = nullptr;
  f_.v63 = 0;
  NgxRoutine_bf140_alt1(&f_.v63, 0x16u, 0);
  v14 = f_.v61;
  v15 = 0;
  f_.v60 = v12;
  if ((f_.v63 & 1) != 0) {
    v16 = f_.v65;
  }
  else {
    v16 = (unsigned __int8*)&f_.v63 + 1;
  }
  v17 = v16;
  while (1) {
    if (a2 != nullptr) {
      v18 = (int*)a2[3];
      if (v18 == (int*)a2[4]) {
        v19 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
      }
      else {
        v19 = *v18;
      }
      v20 = v19 == -1;
      if (v19 == -1) {
        a2 = nullptr;
      }
    }
    else {
      v20 = true;
    }
    if (a3 != nullptr) {
      break;
    }
    if (v20) {
      goto LABEL_88;
    }
  LABEL_29:
    if ((f_.v63 & 1) != 0) {
      v23 = f_.v64;
    }
    else {
      v23 = (unsigned __int64)(unsigned __int8)f_.v63 >> 1;
    }
    if (v16 != &v17[v23]) {
      v24 = (int*)a2[3];
      if (v24 == (int*)a2[4]) {
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if (v23 < 1) {
      if ((f_.v63 & 1) != 0) {
        v26 = f_.v65;
        f_.v64 = 2 * v23;
      }
      else {
        LOBYTE(f_.v63) = 4 * v23;
        v26 = (unsigned __int8*)&f_.v63 + 1;
      }
      v26[2 * v23] = 0;
    }
    else {
      NgxRoutine_bf140_alt1(&f_.v63, v23, 0);
    }
    v27 = f_.v64;
    v28 = 22;
    if ((f_.v63 & 1) != 0) {
      v28 = (f_.v63 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v27 = (unsigned __int8)f_.v63 >> 1;
    }
    if (v28 > v27) {
      NgxRoutine_bf140_alt1(&f_.v63, v28 - v27, 0);
      v17 = (unsigned __int8*)&f_.v63 + 1;
      if ((f_.v63 & 1) == 0) {
        goto LABEL_47;
      }
    LABEL_46:
      v17 = f_.v65;
      goto LABEL_47;
    }
    if ((f_.v63 & 1) != 0) {
      f_.v64 = v28;
      f_.v65[v28] = 0;
      v17 = (unsigned __int8*)&f_.v63 + 1;
      if ((f_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
    else {
      LOBYTE(f_.v63) = 2 * v28;
      *((_BYTE*)&f_.v63 + v28 + 1) = 0;
      v17 = (unsigned __int8*)&f_.v63 + 1;
      if ((f_.v63 & 1) != 0) {
        goto LABEL_46;
      }
    }
  LABEL_47:
    v16 = &v17[v23];
    v24 = (int*)a2[3];
    if (v24 == (int*)a2[4]) {
    LABEL_48:
      v25 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
      goto LABEL_49;
    }
  LABEL_34:
    v25 = *v24;
  LABEL_49:
    if (v16 == v17) {
      if (v25 == *(_DWORD*)(v13 + 96)) {
        v34 = 43;
        v15 = 0;
        goto LABEL_86;
      }
      if (v25 == *(_DWORD*)(v13 + 100)) {
        v34 = 45;
        v15 = 0;
        goto LABEL_86;
      }
    }
    if ((f_.v66[0] & 1) != 0) {
      v29 = f_.v66[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(f_.v66[0]) >> 1;
    }
    if (v25 != f_.v68[0] || v29 == 0) {
      v31 = wmemchr_plt_alt1(v13);
      v32 = v13 + 104;
      if (v31 != 0) {
        v32 = v31;
      }
      v33 = (v32 - v13) >> 2;
      if (v33 > 23) {
        goto LABEL_88;
      }
      switch (v12) {
      case 8u:
      LABEL_64:
        if (v33 >= f_.v60) {
          goto LABEL_88;
        }
        break;
      case 0x10u:
        if (v33 < 22) {
          break;
        }
        if (v16 == v17 || v16 - v17 > 2 || *(v16 - 1) != 48) {
          goto LABEL_88;
        }
        v15 = 0;
        v34 = NgxData_9511c8[v33];
      LABEL_86:
        *v16++ = v34;
        v35 = a2[3];
        if (v35 == a2[4]) {
          goto LABEL_87;
        }
        goto LABEL_12;
      case 0xAu:
        goto LABEL_64;
      default:
        break;
      }
      ++v15;
      *v16++ = NgxData_9511c8[v33];
    LABEL_80:
      v35 = a2[3];
      if (v35 != a2[4]) {
        goto LABEL_12;
      }
    LABEL_87:
      (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
    }
    else {
      if (v14 - f_.v61 > 159) {
        goto LABEL_80;
      }
      *(_DWORD*)v14 = v15;
      v14 += 4;
      v15 = 0;
      v35 = a2[3];
      if (v35 == a2[4]) {
        goto LABEL_87;
      }
    LABEL_12:
      a2[3] = v35 + 4;
    }
  }
  v21 = (int*)a3[3];
  if (v21 == (int*)a3[4]) {
    v22 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
  }
  else {
    v22 = *v21;
  }
  if (v22 == -1) {
    a3 = nullptr;
  }
  if (v20 != (v22 == -1)) {
    goto LABEL_29;
  }
LABEL_88:
  if ((f_.v66[0] & 1) != 0) {
    v36 = f_.v66[1];
  }
  else {
    v36 = (unsigned __int64)LOBYTE(f_.v66[0]) >> 1;
  }
  if (v36 != 0 && v14 - f_.v61 <= 159) {
    *(_DWORD*)v14 = v15;
    v14 += 4;
  }
  v37 = NgxRoutine_e1380(v17, v16, a5, v12);
  v38 = LOBYTE(f_.v66[0]);
  *a6 = v37;
  v39 = f_.v66[1];
  v40 = v38 & 1;
  if ((v38 & 1) == 0) {
    v39 = v38 >> 1;
  }
  if (v14 - f_.v61 >= 5 && v39 != 0) {
    v41 = v14 - 4;
    if (f_.v61 != v14 && f_.v61 < v14 - 4) {
      v42 = (int*)(v14 - 4);
      v43 = &f_.v62;
      do {
        v44 = *(v43 - 1);
        *(v43 - 1) = *v42;
        *v42-- = v44;
      } while (v43++ < v42);
      LODWORD(v38) = LOBYTE(f_.v66[0]);
      v40 = f_.v66[0] & 1;
    }
    v46 = (_BYTE*)f_.v66[2];
    if (v40 == 0) {
      v46 = (char*)f_.v66 + 1;
    }
    if (f_.v61 >= (_BYTE*)v41) {
    LABEL_117:
      v51 = (unsigned __int8)*v46;
      if (*v46 != 0 && v51 != 255 && *v41 - 1 >= v51) {
        goto LABEL_120;
      }
    }
    else {
      v47 = (unsigned int)v38 >> 1;
      if (v40 != 0) {
        v47 = f_.v66[1];
      }
      v48 = f_.v61;
      v49 = &v46[v47];
      while (1) {
        v50 = (unsigned __int8)*v46;
        if (*v46 != 0 && v50 != 255 && *v48 != v50) {
          break;
        }
        ++v48;
        if (v49 - v46 > 1) {
          ++v46;
        }
        if (v48 >= v41) {
          goto LABEL_117;
        }
      }
    LABEL_120:
      *a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v54 = true;
    if (a3 != nullptr) {
      goto LABEL_131;
    }
  LABEL_125:
    if (v54) {
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v52 = (int*)a2[3];
  if (v52 == (int*)a2[4]) {
    v53 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
  }
  else {
    v53 = *v52;
  }
  v54 = v53 == -1;
  if (v53 == -1) {
    a2 = nullptr;
  }
  if (a3 == nullptr) {
    goto LABEL_125;
  }
LABEL_131:
  v55 = (int*)a3[3];
  if (v55 == (int*)a3[4]) {
    v56 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
  }
  else {
    v56 = *v55;
  }
  if (((v54 ^ (v56 == -1)) & 1) == 0) {
  LABEL_135:
    *a5 |= 2u;
  }
LABEL_136:
  if ((f_.v63 & 1) != 0) {
    NgxRoutine_430(f_.v65, f_.v63 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((f_.v66[0] & 1) != 0) {
    NgxRoutine_430(f_.v66[2], f_.v66[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8580(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c91c0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{

  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8);
  if ((a10 & 1) != 0) {
    NgxRoutine_430(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  return nvidia_c97d0();
}

__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  struct {
    __int64 v44;
    char gap24_[3];
    _BYTE v45[45];
  } v44_;
  struct {
    unsigned __int8 v46;
    unsigned __int8 v47;
    _BYTE v48[6];
  } v46_;
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46_.v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v46_.v47;
      v46_.v46 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v46_.v47;
      v46_.v46 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v49, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v46_.v46;
    goto LABEL_60;
  }
  if (v46_.v46 != 45 && v46_.v46 != 43) {
    if (v26 - (char*)&v46_.v46 >= 2 && v46_.v46 == 48 &&
        (v46_.v47 | 0x20) == 0x78) {
      v40 = v46_.v48;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v46_.v47;
LABEL_60:
  nvidia_be650((void*)((__int64)&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46_.v46, v40, v27, (__int64)v44_.v45, &v44_.v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v44_.v45, v44_.v44, v43, v18, v16);
}

__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  struct {
    __int64 v44;
    char gap24_[3];
    _BYTE v45[45];
  } v44_;
  struct {
    unsigned __int8 v46;
    unsigned __int8 v47;
    _BYTE v48[22];
  } v46_;
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46_.v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v46_.v47;
      v46_.v46 = 48;
    }
    else if (v21 == 8) {
      v17 = v46_.v48;
      v46_.v46 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v46_.v47 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v49, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 & v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v46_.v46;
    goto LABEL_54;
  }
  if (v46_.v46 != 45 && v46_.v46 != 43) {
    if (v25 - (char*)&v46_.v46 >= 2 && v46_.v46 == 48 &&
        (v46_.v47 | 0x20) == 0x78) {
      v40 = v46_.v48;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v46_.v47;
LABEL_54:
  nvidia_be650((void*)((__int64)&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46_.v46, v40, v26, (__int64)v44_.v45, &v44_.v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v44_.v45, v44_.v44, v43, v18, v16);
}

void __attribute__((noreturn)) nvidia_cb280(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = v8;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v11),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v13),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  free_plt(v1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_cb75c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = v8;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v11),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v13),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  free_plt(v1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned __int64 v29;
  char v30;
  char* v31;
  unsigned __int8* v32;
  unsigned __int64 v33;
  __int64 i;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned __int8* v45;
  __int64 v47;
  struct {
    __int64 v48;
    char gap16_[4];
    _BYTE v49[180];
  } v48_;
  struct {
    unsigned __int8 v50;
    unsigned __int8 v51;
    _BYTE v52[6];
  } v50_;
  _QWORD v53[2];
  __int64 v54[7];

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a12),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v14;
  if ((a9 & 1) != 0) {
    NgxRoutine_430(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  _Unwind_Resume_plt(v15),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53[0] = v12;
  v53[1] = v17;
  v54[6] = v15;
  v19 = *(_DWORD*)(v18 + 8);
  v21 = v20;
  v22 = &v50_.v50;
  v23 = v18;
  v25 = v24;
  v26 = v19 & 0x4A;
  if (v26 == 8) {
    v27 = 16;
  }
  else {
    v27 = 10;
  }
  if (v26 == 64) {
    v28 = 8;
  }
  else {
    v28 = v27;
  }
  if ((v16 & 0x8000000000000000LL) != 0) {
    if (v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v29 = -(__int64)v16;
      v22 = &v50_.v51;
      v50_.v50 = 45;
    }
  }
  else {
    if ((v19 & 0x800) == 0 || v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v22 = &v50_.v51;
      v50_.v50 = 43;
    LABEL_17:
      v29 = v16;
    }
  }
  if (v16 != 0 && (v19 & 0x200) != 0) {
    if (v26 == 64) {
      *v22++ = 48;
    }
    else if (v26 == 8) {
      *v22 = 48;
      if ((v19 & 0x4000) != 0) {
        v30 = 88;
      }
      else {
        v30 = 120;
      }
      v22[1] = v30;
      v22 += 2;
    }
  }
  v31 = nvidia_e1af0(v22, (char*)v53, v29, v28),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = (unsigned __int8*)v31;
  if ((~v19 & 0x4008) == 0) {
    v33 = v22 - (unsigned __int8*)v31;
    if (v22 != (unsigned __int8*)v31) {
      for (i = ((_BYTE)v31 - (_BYTE)v22) & 7; i != 0; *v22++ = v35) {
        v35 = *v22;
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        --i;
      }
      if (v33 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v36 = *v22;
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          *v22 = v36;
          v37 = v22[1];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v22[1] = v37;
          v38 = v22[2];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v22[2] = v38;
          v39 = v22[3];
          if ((unsigned int)(v39 - 97) < 6) {
            LOBYTE(v39) = v39 - 32;
          }
          v22[3] = v39;
          v40 = v22[4];
          if ((unsigned int)(v40 - 97) < 6) {
            LOBYTE(v40) = v40 - 32;
          }
          v22[4] = v40;
          v41 = v22[5];
          if ((unsigned int)(v41 - 97) < 6) {
            LOBYTE(v41) = v41 - 32;
          }
          v22[5] = v41;
          v42 = v22[6];
          if ((unsigned int)(v42 - 97) < 6) {
            LOBYTE(v42) = v42 - 32;
          }
          v22[6] = v42;
          v43 = v22[7];
          if ((unsigned int)(v43 - 97) < 6) {
            LOBYTE(v43) = v43 - 32;
          }
          v22[7] = v43;
          v22 += 8;
        } while (v22 != (unsigned __int8*)v31);
      }
    }
  }
  v44 = *(_DWORD*)(v23 + 8) & 0xB0;
  if (v44 == 32) {
    v45 = (unsigned __int8*)v31;
    goto LABEL_62;
  }
  if (v44 != 16) {
  LABEL_61:
    v45 = &v50_.v50;
    goto LABEL_62;
  }
  if (v50_.v50 != 45 && v50_.v50 != 43) {
    if (v31 - (char*)&v50_.v50 >= 2 && v50_.v50 == 48 &&
        (v50_.v51 | 0x20) == 0x78) {
      v45 = v50_.v52;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  v45 = &v50_.v51;
LABEL_62:
  nvidia_be650((void*)((__int64)&v47), v23),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v50_.v50, v45, v32, (__int64)v48_.v49, v54, &v48_.v48, &v47),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v47),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v25, (__int64)v48_.v49, v54[0], v48_.v48, v23, v21);
}

__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  struct {
    __int64 v43;
    char gap16_[4];
    _BYTE v44[180];
  } v43_;
  struct {
    unsigned __int8 v45;
    unsigned __int8 v46;
    _BYTE v47[6];
  } v45_;
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45_.v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v45_.v46;
      v45_.v45 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v45_.v46;
      v45_.v45 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v48, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v45_.v45;
    goto LABEL_60;
  }
  if (v45_.v45 != 45 && v45_.v45 != 43) {
    if (v26 - (char*)&v45_.v45 >= 2 && v45_.v45 == 48 &&
        (v45_.v46 | 0x20) == 0x78) {
      v40 = v45_.v47;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v45_.v46;
LABEL_60:
  nvidia_be650((void*)((__int64)&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45_.v45, v40, v27, (__int64)v43_.v44, v49, &v43_.v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v43_.v44, v49[0], v43_.v43, v18, v16);
}

__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  struct {
    __int64 v43;
    char gap16_[4];
    _BYTE v44[180];
  } v43_;
  struct {
    unsigned __int8 v45;
    unsigned __int8 v46;
    _BYTE v47[22];
  } v45_;
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45_.v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v45_.v46;
      v45_.v45 = 48;
    }
    else if (v21 == 8) {
      v17 = v45_.v47;
      v45_.v45 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v45_.v46 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v48, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 & v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v45_.v45;
    goto LABEL_54;
  }
  if (v45_.v45 != 45 && v45_.v45 != 43) {
    if (v25 - (char*)&v45_.v45 >= 2 && v45_.v45 == 48 &&
        (v45_.v46 | 0x20) == 0x78) {
      v40 = v45_.v47;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v45_.v46;
LABEL_54:
  nvidia_be650((void*)((__int64)&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45_.v45, v40, v26, (__int64)v43_.v44, v49, &v43_.v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v43_.v44, v49[0], v43_.v43, v18, v16);
}

void __attribute__((noreturn)) nvidia_ccb00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = v8;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v11),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v13),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  free_plt(v1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v7),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = v8;
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v11),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v13),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  free_plt(v1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d0e64(__int64 a1)
{
  __int64 v1;

  NgxRoutine_db240((__int64*)(v1 - 32));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d18f8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d1c74(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  NgxRoutine_db240((__int64*)(v1 - 152));
  v3 = *(_QWORD*)(v1 - 136);
  *(_QWORD*)(v1 - 136) = 0;
  if (v3 != 0) {
    (*(void (**)(void))(v1 - 128))();
  }
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn))

nvidia_d37b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             void (*a16)(void))
{
  __int64 v17;

  NgxRoutine_db240(&a13);
  v17 = a15;
  a15 = 0;
  if (v17 != 0) {
    a16();
  }
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn))

nvidia_d3fc8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             void (*a36)(void))
{
  __int64 v37;

  NgxRoutine_db240(&a33);
  v37 = a35;
  a35 = 0;
  if (v37 != 0) {
    a36();
  }
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn))

nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41)
{
  __int64 v41;

  if ((a27 & 1) != 0) {
    NgxRoutine_430(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  NgxRoutine_430(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  NgxRoutine_430(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      _Unwind_Resume_plt(a1);
      NgxRoutine_baf40();
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  NgxRoutine_430(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

void __attribute__((noreturn)) nvidia_d5944(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12, __int64 a13,
                                            __int64 a14, void (*a15)(void))
{
  __int64 v16;

  NgxRoutine_db240(&a12);
  v16 = a14;
  a14 = 0;
  if (v16 != 0) {
    a15();
  }
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn))

nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43)
{
  __int64 v43;
  __int64 v44;
  __int64 v46;
  __int64 v47;

  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v47 = v46;
  if ((a35 & 1) != 0) {
    NgxRoutine_430(a37, a35 & 0xFFFFFFFFFFFFFFFELL),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((a38 & 1) == 0) {
    LABEL_3:
      if ((a41 & 1) == 0) {
      LABEL_8:
        NgxRoutine_db240((__int64*)(v44 - 232)),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v43 != 0) {
          goto LABEL_11;
        }
        while (a17 == 0) {
          _Unwind_Resume_plt(v47),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        LABEL_11:
          free_plt(v43),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        free_plt(a17),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        _Unwind_Resume_plt(v47),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __udf(0);
      }
    LABEL_7:
      NgxRoutine_430(a43, a41 & 0xFFFFFFFFFFFFFFFELL),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      goto LABEL_8;
    }
  }
  else if ((a38 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a40, a38 & 0xFFFFFFFFFFFFFFFELL),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((a41 & 1) == 0) {
    goto LABEL_8;
  }
  goto LABEL_7;
}

void __attribute__((noreturn)) nvidia_d71f4(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(v2 - 104) & 1) != 0) {
    goto LABEL_5;
  }
LABEL_2:
  if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
    while (1) {
      NgxRoutine_430(*(_QWORD*)(v2 - 64),
                     *(_QWORD*)(v2 - 80) & 0xFFFFFFFFFFFFFFFELL),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 56) & 1) != 0) {
        break;
      }
    LABEL_4:
      NgxRoutine_db240((__int64*)(v2 - 16)),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      _Unwind_Resume_plt(a1),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt_alt1(),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 104) & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_5:
      NgxRoutine_430(*(_QWORD*)(v2 - 88),
                     *(_QWORD*)(v2 - 104) & 0xFFFFFFFFFFFFFFFELL),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 80) & 1) == 0) {
        goto LABEL_3;
      }
    }
  }
  else {
  LABEL_3:
    if ((*(_BYTE*)(v2 - 56) & 1) == 0) {
      goto LABEL_4;
    }
  }
  NgxRoutine_430(*(_QWORD*)(v2 - 40),
                 *(_QWORD*)(v2 - 56) & 0xFFFFFFFFFFFFFFFELL),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_db240((__int64*)(v2 - 16)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  NgxRoutine_db240((__int64*)(v2 - 16)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d8484(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(v2 - 104) & 1) != 0) {
    goto LABEL_5;
  }
LABEL_2:
  if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
    while (1) {
      NgxRoutine_430(*(_QWORD*)(v2 - 64),
                     (4LL * *(_QWORD*)(v2 - 80)) & 0xFFFFFFFFFFFFFFF8LL),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 56) & 1) != 0) {
        break;
      }
    LABEL_4:
      NgxRoutine_db240((__int64*)(v2 - 16)),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      _Unwind_Resume_plt(a1),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      free_plt_alt1(),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 104) & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_5:
      NgxRoutine_430(*(_QWORD*)(v2 - 88),
                     (4LL * *(_QWORD*)(v2 - 104)) & 0xFFFFFFFFFFFFFFF8LL),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((*(_BYTE*)(v2 - 80) & 1) == 0) {
        goto LABEL_3;
      }
    }
  }
  else {
  LABEL_3:
    if ((*(_BYTE*)(v2 - 56) & 1) == 0) {
      goto LABEL_4;
    }
  }
  NgxRoutine_430(*(_QWORD*)(v2 - 40),
                 *(_QWORD*)(v2 - 56) & 0xFFFFFFFFFFFFFFFELL),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  NgxRoutine_db240((__int64*)(v2 - 16)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  NgxRoutine_db240((__int64*)(v2 - 16)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v5),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d8b18(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  NgxRoutine_baf00(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(v1 + 304),
                   *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_daf20();
  NgxRoutine_baf00(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_dbd00(__int64 a1, __int64* a2, _DWORD* a3, _DWORD* a4,
                     _QWORD* a5, _BYTE* a6, _BYTE* a7, _QWORD* a8)
{
  _BYTE* v10;
  _DWORD* v12;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  _BYTE* v22;
  char v23;
  _BYTE* v24;
  char v25;
  _BYTE* v26;
  char v27;
  _BYTE* v28;
  char v29;
  _BYTE* v30;
  char v31;
  _BYTE* v32;
  char v33;
  _BYTE* v34;
  char v35;
  _BYTE* v36;
  char v37;
  _BYTE* v38;
  char v39;
  _DWORD* v40;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  struct {
    char gap0_[28];
    _BYTE v47[4];
    __int64 v48;
    __int64 v49;
  } f_;

  v10 = a6;
  v12 = a3;
  v14 = a3;
  if (a3 != a4) {
    v14 = a3;
    while (*(_DWORD*)v14 != 0) {
      if (++v14 == a4) {
        v14 = a4;
        break;
      }
    }
  }
  *a8 = a6;
  *a5 = a3;
  while (1) {
    if (v12 == a4 || v10 == a7) {
      return v12 != a4;
    }
    f_.v48 = *a2;
    v15 = uselocale_plt(*(_QWORD*)(a1 + 16));
    f_.v49 = v15;
    v16 = wcsnrtombs_plt(v10, a5, v14 - v12, a7 - v10, a2);
    if (v15 != 0) {
      uselocale_plt(v15);
    }
    if (v16 == 0) {
      return 1;
    }
    if (v16 == -1) {
      break;
    }
    {
      v10 = (_BYTE*)(*a8 + v16);
      __asm__ volatile("" ::"r"(v10));
    }
    *a8 = v10;
    if (v10 == a7) {
      v12 = (_DWORD*)*a5;
      return v12 != a4;
    }
    if (v14 == a4) {
      v14 = a4;
      v12 = (_DWORD*)*a5;
    }
    else {
      v17 = uselocale_plt(*(_QWORD*)(a1 + 16));
      f_.v49 = v17;
      v18 = wcrtomb_plt(f_.v47, 0, a2);
      if (v17 != 0) {
        uselocale_plt(v17);
      }
      if (v18 == -1) {
        return 2;
      }
      if (v18 > (unsigned __int64)&a7[-*a8]) {
        return 1;
      }
      if (v18 != 0) {
        v19 = v18 & 7;
        if ((v18 & 7) != 0) {
          v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          v21 = f_.v47;
          do {
            v22 = (_BYTE*)*a8;
            {
              v23 = *v21++;
              __asm__ volatile("" ::"r"(v23));
            }
            --v19;
            ++*a8;
            *v22 = v23;
          } while (v19 != 0);
          if (v18 < 8) {
            goto LABEL_26;
          }
          do {
          LABEL_25:
            v24 = (_BYTE*)*a8;
            {
              v25 = *v21;
              __asm__ volatile("" ::"r"(v25));
            }
            v20 -= 8LL;
            ++*a8;
            *v24 = v25;
            v26 = (_BYTE*)*a8;
            {
              v27 = v21[1];
              __asm__ volatile("" ::"r"(v27));
            }
            ++*a8;
            *v26 = v27;
            v28 = (_BYTE*)*a8;
            {
              v29 = v21[2];
              __asm__ volatile("" ::"r"(v29));
            }
            ++*a8;
            *v28 = v29;
            v30 = (_BYTE*)*a8;
            {
              v31 = v21[3];
              __asm__ volatile("" ::"r"(v31));
            }
            ++*a8;
            *v30 = v31;
            v32 = (_BYTE*)*a8;
            {
              v33 = v21[4];
              __asm__ volatile("" ::"r"(v33));
            }
            ++*a8;
            *v32 = v33;
            v34 = (_BYTE*)*a8;
            {
              v35 = v21[5];
              __asm__ volatile("" ::"r"(v35));
            }
            ++*a8;
            *v34 = v35;
            v36 = (_BYTE*)*a8;
            {
              v37 = v21[6];
              __asm__ volatile("" ::"r"(v37));
            }
            ++*a8;
            *v36 = v37;
            v38 = (_BYTE*)*a8;
            {
              v39 = v21[7];
              __asm__ volatile("" ::"r"(v39));
            }
            v21 += 8;
            ++*a8;
            *v38 = v39;
          } while (v20 != 0);
          goto LABEL_26;
        }
        v21 = f_.v47;
        v20 = v18;
        if (v18 >= 8) {
          goto LABEL_25;
        }
      }
    LABEL_26:
      v14 = a4;
      {
        v12 = (_DWORD*)(*a5 + 4LL);
        __asm__ volatile("" ::"r"(v12));
      }
      *a5 = v12;
      v40 = v12;
      if (v12 == a4) {
      LABEL_7:
        v10 = (_BYTE*)*a8;
      }
      else {
        while (*(_DWORD*)v40 != 0) {
          if (++v40 == a4) {
            v14 = a4;
            goto LABEL_7;
          }
        }
        v10 = (_BYTE*)*a8;
        v14 = v40;
      }
    }
  }
  for (*a8 = v10; v12 != (_DWORD*)*a5; *a8 = v10) {
    {
      v42 = *(_DWORD*)v12;
      __asm__ volatile("" ::"r"(v42));
    }
    v43 = uselocale_plt(*(_QWORD*)(a1 + 16));
    f_.v49 = v43;
    v44 = wcrtomb_plt(v10, v42, &f_.v48);
    if (v43 != 0) {
      uselocale_plt(v43);
    }
    if (v44 == -1) {
      break;
    }
    ++v12;
    {
      v10 = (_BYTE*)(*a8 + v44);
      __asm__ volatile("" ::"r"(v10));
    }
  }
  *a5 = v12;
  return 2;
}

void __attribute__((noreturn)) nvidia_dc098(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn)) nvidia_dc0b0(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc44c(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn)) nvidia_dc464(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  NgxRoutine_baf40();
}

void __attribute__((noreturn)) nvidia_dc47c(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc738(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  NgxRoutine_baf40_alt1(a1);
}

void __attribute__((noreturn)) nvidia_dc750(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  NgxRoutine_baf40_alt1(a1);
}

void __attribute__((noreturn)) nvidia_dc868(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_e0e68(__int64 a1)
{
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8);
  _Unwind_Resume_plt(a1);
  return NgxRoutine_e0e80();
}

__int64 nvidia_e0f88(__int64 a1)
{
  __cxa_guard_abort_plt((__int64)&NgxData_2b89de8);
  _Unwind_Resume_plt(a1);
  return NgxRoutine_e0fa0();
}

char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{

  NgxRoutine_db240(&a10);
  _Unwind_Resume_plt(a1);
  return nvidia_e1af0_alt1();
}

void __attribute__((noreturn)) nvidia_e21bc(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 40));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
