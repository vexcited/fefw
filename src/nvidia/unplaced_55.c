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
#pragma GCC visibility pop
