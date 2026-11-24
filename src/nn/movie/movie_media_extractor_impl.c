#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memchr_plt(__int64, int, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 nn_movie_detail_AllocateMemory(unsigned __int64, __int64);
__int64 nn_movie_detail_MediaExtractorImpl_SetUriMedia_plt(_QWORD, _QWORD,
                                                           _QWORD);
unsigned __int64 strlen_plt(const char*);
void __attribute__((noreturn)) unplaced_dc4d0();
void nn_movie_detail_FreeMemory(__int64, _DWORD*);
__int64 nn_movie_MediaExtractor_SetUriMedia(void* this_, char* a2, int a3);

__int64 nn_movie_MediaExtractor_SetUriMedia(void* this_, char* a2, int a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  char v24;
  unsigned __int64 v25;
  __int64 v26;
  _DWORD* v27;
  unsigned int v28;
  unsigned __int64 v30;
  char* v31;
  int v32;
  int v33;
  struct {
    _QWORD v35[2];
    char* v36;
    _DWORD* v37;
  } v35_;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
    _DWORD* v41;
  } v38_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
    _DWORD* v45;
  } v42_;

  v3 = *(_QWORD*)this_;
  v4 = 256768;
  if (*(_QWORD*)this_ == 0) {
    return v4;
  }
  if (a3 < 1) {
    return 257280;
  }
  v42_.v42 = 0;
  v42_.v43 = 0;
  v42_.v44 = nullptr;
  v42_.v45 = (_DWORD*)(v3 + 8);
  v7 = strlen_plt(a2);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_77:
    unplaced_dc4d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)nn_movie_detail_AllocateMemory(v10, v3 + 8);
    v42_.v43 = v8;
    v42_.v44 = v9;
    v42_.v42 = v10 | 1;
    goto LABEL_12;
  }
  LOBYTE(v42_.v42) = 2 * v7;
  v9 = (char*)&v42_.v42 + 1;
  if (v7 != 0) {
  LABEL_12:
    memmove_plt((__int64)v9, (__int64)a2, v8);
  }
  v9[v8] = 0;
  v38_.v39 = 0;
  v38_.v40 = nullptr;
  v38_.v38 = 0;
  if ((v42_.v42 & 1) != 0) {
    v11 = v42_.v44;
  }
  else {
    v11 = (char*)&v42_.v42 + 1;
  }
  if ((v42_.v42 & 1) != 0) {
    v12 = v42_.v43;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)v42_.v42 >> 1;
  }
  v13 = &v11[v12];
  if ((__int64)v12 >= 1) {
    v14 = v12;
    v15 = (__int64)v11;
    do {
      v16 = (char*)memchr_plt(v15, 58, v14);
      if (v16 == nullptr) {
        break;
      }
      if (*v16 == 58) {
        goto LABEL_25;
      }
      v15 = (__int64)(v16 + 1);
      v14 = (unsigned __int64)&v13[-v15];
    } while ((__int64)&v13[-v15] > 0);
  }
  v16 = &v11[v12];
LABEL_25:
  v17 = v16 - v11;
  if (v12 < v16 - v11) {
    v17 = v12;
  }
  if (v16 != v13) {
    v12 = v17;
  }
  v35_.v37 = v42_.v45;
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v12 | 7) + 1;
    }
    v18 = (const char*)nn_movie_detail_AllocateMemory(v19, (__int64)v42_.v45);
    v35_.v35[1] = v12;
    v35_.v36 = v18;
    v35_.v35[0] = v19 | 1;
    goto LABEL_37;
  }
  LOBYTE(v35_.v35[0]) = 2 * v12;
  v18 = (char*)v35_.v35 + 1;
  if (v12 != 0) {
  LABEL_37:
    memmove_plt((__int64)v18, (__int64)v11, v12);
  }
  v18[v12] = 0;
  v38_.v41 = (_DWORD*)(v3 + 8);
  if ((v35_.v35[0] & 1) != 0) {
    v20 = v35_.v36;
  }
  else {
    v20 = (char*)v35_.v35 + 1;
  }
  v21 = strlen_plt(v20);
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  v22 = v21;
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v21 | 7) + 1;
    }
    v23 = (char*)nn_movie_detail_AllocateMemory(v30, v3 + 8);
    v38_.v39 = v22;
    v38_.v40 = v23;
    v38_.v38 = v30 | 1;
  }
  else {
    LOBYTE(v38_.v38) = 2 * v21;
    v23 = (char*)&v38_.v38 + 1;
    if (v21 == 0) {
      BYTE1(v38_.v38) = 0;
      if ((v35_.v35[0] & 1) == 0) {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
  }
  memmove_plt((__int64)v23, (__int64)v20, v22);
  v23[v22] = 0;
  if ((v35_.v35[0] & 1) != 0) {
  LABEL_45:
    nn_movie_detail_FreeMemory((__int64)v35_.v36, v35_.v37);
  }
LABEL_46:
  v24 = v38_.v38;
  v25 = v38_.v39;
  if ((v38_.v38 & 1) == 0) {
    v25 = (unsigned __int8)v38_.v38 >> 1;
  }
  if (v25 == 5) {
    v31 = v38_.v40;
    v26 = (unsigned int)a3;
    if ((v38_.v38 & 1) == 0) {
      v31 = (char*)&v38_.v38 + 1;
    }
    v32 = *(_DWORD*)v31;
    v33 = (unsigned __int8)v31[4];
    if (v32 != 1886680168 | v33 != 115) {
    LABEL_53:
      if (*(_QWORD*)v3 != 0) {
        v28 = nn_movie_detail_MediaExtractorImpl_SetUriMedia_plt(*(_QWORD*)v3,
                                                                 a2, v26);
        if ((v28 & 0x3FFFFF) == 0x40100) {
          v4 = 0;
        }
        else {
          v4 = v28;
        }
      }
      if ((v24 & 1) == 0) {
        goto LABEL_59;
      }
      goto LABEL_58;
    }
  }
  else {
    v26 = (unsigned int)a3;
    if (v25 != 4) {
      goto LABEL_53;
    }
    v27 = v38_.v40;
    if ((v38_.v38 & 1) == 0) {
      v27 = (_DWORD*)((char*)&v38_.v38 + 1);
    }
    if (*(_DWORD*)v27 != 1886680168) {
      goto LABEL_53;
    }
  }
  v4 = 524032;
  if ((v38_.v38 & 1) != 0) {
  LABEL_58:
    nn_movie_detail_FreeMemory((__int64)v38_.v40, v38_.v41);
  }
LABEL_59:
  if ((v42_.v42 & 1) != 0) {
    nn_movie_detail_FreeMemory((__int64)v42_.v44, v42_.v45);
  }
  return v4;
}

#pragma GCC visibility pop
