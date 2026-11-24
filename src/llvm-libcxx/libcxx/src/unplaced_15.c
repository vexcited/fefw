#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_81add0(void);
__int64 SdkRoutine_81c700(void);
__int64 SdkRoutine_829dc0(void);
__int64 SdkRoutine_82ad70(_QWORD*);
__int64 SdkRoutine_82dbb0(__int64 result, unsigned __int64);
__int64 SdkRoutine_82dd20(__int64*);
__int64 SdkRoutine_82f0b0();
__int64 SdkRoutine_82f620(void);
__int64 SdkRoutine_830970(void);
__int64 SdkRoutine_857220(__int64, unsigned __int64);
__int64 SdkRoutine_87cb10();
__int64 SdkRoutine_87cb10_alt1(__int64);
__int64 locale_82f740(void);
__int64 locale_830290(void);
__int64 std___1___call_once_plt(__int64, __int64, __int64);
__int64 std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(__int64*);
__int64 std___1___time_get_Destroy___time_get(_QWORD*);
__int64 std___1_ctype_byname_Destroy_ctype_byname(__int64);
__int64 std___1_locale_locale_81b330(void);
__int64 std___1_locale_name(void);
extern _UNKNOWN SdkData_1060b80;
extern _UNKNOWN SdkData_1060ba0;
extern void (*SdkData_e89448[136])();
extern void (*SdkData_e89458[134])();
extern void (*SdkData_e89488[128])();
extern void (*SdkData_e89690[63])();
extern void (*SdkData_e89698[62])();
extern void (*SdkData_e896a8[60])();
void _Unwind_Resume_plt(__int64);
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) SdkRoutine_7cd620_alt1(__int64);
void __attribute__((noreturn)) locale_7f6090();
void __cxa_guard_abort_plt(__int64);
void std___1_locale_Destroy_locale_plt(__int64);
__int64 llvm_libcxx_libcxx_src_8197c0(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_819900(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_819cc0(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_819e00(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_819f40(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_81a300(__int64 a1, __int64 a2);
__int64 llvm_libcxx_libcxx_src_81adb8(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81b25c(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_81b318(__int64 a1);
__int64 llvm_libcxx_libcxx_src_81b398(__int64 a1);
__int64 llvm_libcxx_libcxx_src_81c6c8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81dd40(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81de08(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e458(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e470(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e488(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e80c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e824(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e83c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eaf8(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eb10(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81ec28(__int64 a1);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_822ab8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_822e78(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_823008(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_829060(__int64 a1);
__int64 llvm_libcxx_libcxx_src_829d70(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_829e70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_82a58c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
__int64 llvm_libcxx_libcxx_src_82abec(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_82ae98(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_82f608(__int64 a1);
__int64 llvm_libcxx_libcxx_src_82f728(__int64 a1);
__int64 llvm_libcxx_libcxx_src_83027c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10);
__int64 llvm_libcxx_libcxx_src_83095c(__int64 a1);

__int64 llvm_libcxx_libcxx_src_8197c0(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e89690[0];
  v12 = SdkData_e89690[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89690[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e89690[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_819900(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e89698[0];
  v12 = SdkData_e89698[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89698[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e89698[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_819cc0(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e89448[0];
  v12 = SdkData_e89448[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89448[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e89448[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_819e00(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e89488[0];
  v12 = SdkData_e89488[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89488[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e89488[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_819f40(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e89458[0];
  v12 = SdkData_e89458[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89458[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e89458[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_81a300(__int64 a1, __int64 a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 result;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  v4 = SdkData_e896a8[0];
  v12 = SdkData_e896a8[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896a8[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt((__int64)SdkData_e896a8[0], (__int64)&v13,
                            (__int64)SdkRoutine_82f0b0);
  }
  v5 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  v6 = *(_QWORD*)(a2 + 16);
  if (v5 >= (signed __int64)(*(_QWORD*)(a2 + 24) - v6) >> 3 ||
      (v7 = *(_QWORD*)(v6 + 8 * v5)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(a1 + 16);
  v9 = (__int64*)(a1 + 16);
  v10 = (signed __int64)(*(_QWORD*)(a1 + 24) - v8) >> 3;
  if (v10 <= v5) {
    if (v5 + 1 <= v10) {
      if (v5 + 1 < v10) {
        *(_QWORD*)(a1 + 24) = v8 + 8 * (v5 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0(a1 + 16, v5 + 1 - v10);
      v8 = *v9;
    }
  }
  result = *(_QWORD*)(v8 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v9 + 8 * v5) = v7;
  return result;
}

__int64 llvm_libcxx_libcxx_src_81adb8(__int64 a1)
{
  __cxa_guard_abort_plt((__int64)&SdkData_1060ba0);
  _Unwind_Resume_plt(a1);
  return SdkRoutine_81add0();
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_81b25c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  __int64 v14;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    SdkRoutine_857220(v12, 0x138u),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt(a1),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    a1 = v14;
  }
  SdkRoutine_857220(v12, 0x138u),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_81b318(__int64 a1)
{
  __int64 v1;

  SdkRoutine_857220(v1, 0x138u);
  _Unwind_Resume_plt(a1);
  return std___1_locale_locale_81b330();
}

__int64 llvm_libcxx_libcxx_src_81b398(__int64 a1)
{
  __int64 v1;

  SdkRoutine_857220(v1, 0x138u);
  _Unwind_Resume_plt(a1);
  return std___1_locale_name();
}

__int64 llvm_libcxx_libcxx_src_81c6c8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12)
{

  SdkRoutine_87cb10();
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, (4 * a10) & 0xFFFFFFFFFFFFFFF8LL);
  }
  _Unwind_Resume_plt(a1);
  return SdkRoutine_81c700();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81dd40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81de08(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e458(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e470(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e488(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e80c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e824(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e83c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eaf8(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eb10(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81ec28(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_822ab8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13)
{
  __int64 v13;
  __int64 v15;
  __int64 v16;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_82dd20(&a13),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v16 = v15;
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v16),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_822e78(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13)
{
  __int64 v13;
  __int64 v15;
  __int64 v16;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_82dd20(&a13),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v16 = v15;
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v16),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_823008(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_829060(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10(),
      v10 = COERCE_AS(__typeof__(v10),
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
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = v4;
  SdkRoutine_82dd20((__int64*)(v2 - 16)),
      v10 = COERCE_AS(__typeof__(v10),
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
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v6;
  SdkRoutine_87cb10(),
      v10 = COERCE_AS(__typeof__(v10),
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
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = v8;
  SdkRoutine_87cb10(),
      v10 = COERCE_AS(__typeof__(v10),
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
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = v10;
  SdkRoutine_87cb10(),
      v10 = COERCE_AS(__typeof__(v10),
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
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_829d70(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_82dd20(&a9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = v10;
  SdkRoutine_82dd20(&a9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v11),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v12;
  SdkRoutine_82dd20(&a9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v15 = v14;
  SdkRoutine_82dd20(&a9),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return SdkRoutine_829dc0();
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_829e70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_46;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_47;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_49:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_89;
      }
    LABEL_45:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_46:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_49;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_50;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_45;
  }
LABEL_89:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  std___1___time_get_Destroy___time_get((_QWORD*)v10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_82a58c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_47;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_48;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_89:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_45;
      }
    LABEL_46:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_48:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_50;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_89;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_46;
  }
LABEL_45:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  goto LABEL_46;
}

__int64 llvm_libcxx_libcxx_src_82abec(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10)
{
  _QWORD* v10;
  _QWORD* v12;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_82ad70(&a10),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 130)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 127)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 124)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 121)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 118)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 115)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 112)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 109)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 106)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 103)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 100)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 97)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 94)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 91)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 88)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 85)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 82)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 79)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 76)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 73)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 70)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 67)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 64)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 61)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 58)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 55)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 52)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 49)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 46)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 43)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 40)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 37)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 34)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 31)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 28)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 25)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 22)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 19)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 16)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 13)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 10)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 7)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 4)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v10 + 1)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1___time_get_Destroy___time_get(v10),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return SdkRoutine_82ad70(v12);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_82ae98(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  _QWORD* v12;
  __int64 v14;
  __int64 v15;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_82ad70(&a10),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 130)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 127)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 124)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 121)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 118)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 115)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 112)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 109)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 106)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 103)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 100)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 97)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 94)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 91)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 88)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 85)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 82)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 79)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 76)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 73)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 70)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 67)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 64)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 61)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 58)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 55)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 52)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 49)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 46)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 43)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 40)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 37)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 34)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 31)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 28)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 25)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 22)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 19)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 16)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 13)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 10)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 7)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 4)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_87cb10_alt1((__int64)(v12 + 1)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1___time_get_Destroy___time_get(v12),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(a1),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v15 = v14;
  if ((a10 & 1) == 0) {
    _Unwind_Resume_plt(v14),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt(v15),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_82f608(__int64 a1)
{
  __cxa_guard_abort_plt((__int64)&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  return SdkRoutine_82f620();
}

__int64 llvm_libcxx_libcxx_src_82f728(__int64 a1)
{
  __cxa_guard_abort_plt((__int64)&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  return locale_82f740();
}

__int64 llvm_libcxx_libcxx_src_83027c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10)
{
  std___1_locale_Destroy_locale_plt((__int64)&a10);
  _Unwind_Resume_plt(a1);
  return locale_830290();
}

__int64 llvm_libcxx_libcxx_src_83095c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 40));
  _Unwind_Resume_plt(a1);
  return SdkRoutine_830970();
}

#pragma GCC visibility pop
