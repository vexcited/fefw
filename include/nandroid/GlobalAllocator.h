#pragma once

#include <stddef.h>

// The SDK global allocation functions through their PLT entries, since the
// inline movie heap versions of MovieHeap.h take the plain names.
extern "C" void* nandroid_global_new(size_t size) __asm__("plt__Znwm");
extern "C" void nandroid_global_delete(void* pointer,
                                       size_t size) noexcept
    __asm__("plt__ZdlPvm");

namespace nandroid {

// A few AOSP containers keep the SDK global allocation functions for their
// nodes, so their allocator calls them directly.
template <class T>
struct GlobalAllocator {
  using value_type = T;

  GlobalAllocator() noexcept = default;

  template <class U>
  GlobalAllocator(const GlobalAllocator<U>&) noexcept
  {
  }

  T* allocate(size_t count)
  {
    return static_cast<T*>(nandroid_global_new(count * sizeof(T)));
  }

  void deallocate(T* pointer, size_t count) noexcept
  {
    nandroid_global_delete(pointer, count * sizeof(T));
  }
};

template <class T, class U>
bool operator==(const GlobalAllocator<T>&, const GlobalAllocator<U>&) noexcept
{
  return true;
}

template <class T, class U>
bool operator!=(const GlobalAllocator<T>&, const GlobalAllocator<U>&) noexcept
{
  return false;
}

}
