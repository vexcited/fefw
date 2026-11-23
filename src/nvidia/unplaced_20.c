#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
__int64 NgxRoutine_dfab0(__int64 result, unsigned __int64);
__int64 NgxRoutine_e0c40();
__int64 NgxRoutine_e21e0(unsigned __int64*, __int64, void (*)(__int64));
__int64 uselocale_plt(_QWORD);
__int64 vasprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vfprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vsscanf_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* NgxData_9511d8;
extern _UNKNOWN* NgxData_9511f8;
extern _UNKNOWN* NgxData_951350;
extern _UNKNOWN* NgxData_951380;
extern _UNKNOWN* NgxData_9522a0;
extern _UNKNOWN NgxData_2b70b30;
extern char NgxData_2b78b2f;
extern void (*NgxData_9513b0[27])();
int vsnprintf_plt(__int64, unsigned __int64, const char*, __int64);
void abort_plt();
void util_log_b4d10(__int64, unsigned int, __int64, __int64, unsigned int,
                    _QWORD*);
_DWORD* nvidia_60a0(__int64 a1);
void nvidia_ae900(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                  __int64 a5, ...);
char* nvidia_b41e0(char* result, ...);
__int64 nvidia_d9890(__int64 a1, __int64 a2);
__int64 nvidia_da0e0(__int64 a1, __int64 a2);
__int64 nvidia_da6d0(__int64 a1, __int64 a2);
__int64 nvidia_dadf0(__int64 a1, __int64 a2);
__int64 nvidia_e1860(__int64 a1, __int64 a2, __int64 a3, ...);
__int64 nvidia_e2030(__int64 a1, unsigned __int64 a2, __int64 a3, char* a4,
                     ...);
__int64 nvidia_e2100(__int64 a1, __int64 a2, __int64 a3, ...);
void __attribute__((noreturn)) nvidia_e2370(__int64 a1, ...);
void nvidia_ae900(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                  __int64 a5, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a5);
  __builtin_va_start(va1, a5);
  util_log_b4d10(a2, a3, a4, a5, 1u, (__int64)&va);
}
char* nvidia_b41e0(char* result, ...)
{
  __int64 (**v1)(void*);
  __builtin_va_list va;
  __builtin_va_list va1;

  v1 = (__int64 (**)(void*))NgxData_9522a0;
  if (*(_QWORD*)NgxData_9522a0 != 0) {
    __builtin_va_start(va, result);
    __builtin_va_start(va1, result);
    vsnprintf_plt((__int64)&NgxData_2b70b30, 0x8000u, result, (__int64)&va1);
    NgxData_2b78b2f = 0;
    return (const char*)(*v1)(&NgxData_2b70b30);
  }
  return result;
}
__int64 nvidia_d9890(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511d8;
  v10 = NgxData_9511d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}
__int64 nvidia_da0e0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511f8;
  v10 = NgxData_9511f8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511f8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511f8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}
__int64 nvidia_da6d0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951350;
  v10 = NgxData_951350;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951350,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951350, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}
__int64 nvidia_dadf0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951380;
  v10 = NgxData_951380;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951380,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951380, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}
__int64 nvidia_e1860(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v5;
  unsigned int v6;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a3);
  v5 = uselocale_plt(a2);
  __builtin_va_copy(va1, va);
  v6 = vsscanf_plt(a1, a3, (__int64)&va1);
  if (v5 != 0) {
    uselocale_plt(v5);
  }
  return v6;
}
__int64 nvidia_e2030(__int64 a1, unsigned __int64 a2, __int64 a3, char* a4, ...)
{
  __int64 v7;
  unsigned int v8;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a4);
  v7 = uselocale_plt(a3);
  __builtin_va_copy(va1, va);
  v8 = vsnprintf_plt(a1, a2, a4, (__int64)&va1);
  if (v7 != 0) {
    uselocale_plt(v7);
  }
  return v8;
}
__int64 nvidia_e2100(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v5;
  unsigned int v6;
  __builtin_va_list va1;
  __int64 v9;
  __builtin_va_list va;

  __builtin_va_start(va, a3);
  v5 = uselocale_plt(a2);
  __builtin_va_copy(va1, va);
  v9 = v5;
  v6 = vasprintf_plt(a1, a3, (__int64)&va1);
  if (v5 != 0) {
    uselocale_plt(v5);
  }
  return v6;
}
void __attribute__((noreturn)) nvidia_e2370(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  vfprintf_plt(*(_QWORD*)NgxData_9513b0[0], a1, (__int64)&va);
  abort_plt();
}
#pragma GCC visibility pop
