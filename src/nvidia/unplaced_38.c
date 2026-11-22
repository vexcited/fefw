#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_633a0();
__int64 CudaDriverRoutine_98340(__int64 result);
unsigned __int8 CudaDriverRoutine_99720(__int64);
unsigned __int8 CudaDriverRoutine_9ad80(__int64);
unsigned __int8 CudaDriverRoutine_9ad90(__int64);
unsigned __int8 cuda_driver_predicates_9ae50(__int64);
extern _UNKNOWN* CudaDriverData_1422118;
extern __int128 CudaDriverData_1115db0;
void CudaDriverRoutine_74d0();
void CudaDriverRoutine_74d4();
void CudaDriverRoutine_74dc();
void qsort_plt(__int64, unsigned __int64, unsigned __int64, __int64);
unsigned __int8 nvidia_62d00(__int64 a1);
unsigned __int8 nvidia_1199d0(__int64 a1);

unsigned __int8 nvidia_62d00(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  __int64 v33;
  bool v34;
  char v35;
  int v36;
  unsigned __int64 v37;
  _BYTE* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  bool v45;
  char v46;
  unsigned int v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  char v54;
  __int64 v55;
  char v56;
  int8x16x4_t* v57;
  int8x16_t* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  int32x4_t* v63;
  int32x4_t v64;
  int8x8_t v65;
  __int64 v66;
  int* v67;
  char* v68;
  int v69;
  int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  char v76;
  __int64 v77;
  int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  char v82;
  struct {
    _QWORD v83[2];
    __int64 v84;
    _QWORD v85[32];
  } v83_;
  int8x16x4_t v86;
  int8x16x4_t v87;

  v83_.v83[0] = 0;
  v83_.v83[1] = 0;
  v83_.v84 = 0;
  v2 = a1 + 19848;
  v3 = *(_DWORD*)(a1 + 3736);
  *(_QWORD*)(a1 + 19840) = a1;
  memset(&v83_.v85[14], 0, 144);
  *(_OWORD*)v83_.v85 = (__typeof__(*(_OWORD*)v83_.v85)){0};
  ++*(_QWORD*)(a1 + 19832);
  v4 = *(_DWORD*)(a1 + 4384);
  *(_DWORD*)(a1 + 19860) = v4;
  *(_DWORD*)(a1 + 20296) = v4 / v3;
  memset(&v83_.v85[2], 0, 96);
  result = ((__int64 (*)(__int64))cuda_driver_predicates_9ae50)(a1);
  if ((_BYTE)result != 0) {
    v6 = *(unsigned int*)(a1 + 4384);
    if ((_DWORD)v6 != 0) {
      v7 = a1 + 7536;
      if ((_DWORD)v6 == 1) {
        v8 = 0;
      LABEL_11:
        v17 = ((_BYTE)v6 - (_BYTE)v8) & 3;
        v18 = v8;
        if ((((_BYTE)v6 - (_BYTE)v8) & 3) != 0) {
          v19 = (unsigned int*)(a1 + 4 * v8 + 4464);
          v18 = v8 + v17;
          do {
            --v17;
            v20 = *(unsigned __int16*)(v7 + ((unsigned __int64)*v19 << 6) +
                                       4LL * v19[256]);
            v21 = v19[1024];
            ++v19;
            *((_BYTE*)v83_.v85 + v20) = v21;
          } while (v17 != 0);
        }
        if ((unsigned __int64)(v8 - v6) <= 0xFFFFFFFFFFFFFFFCLL) {
          v22 = v6 - v18;
          v23 = (unsigned int*)(a1 + 4 * v18 + 4464);
          do {
            v22 -= 4;
            v24 = v7 + ((unsigned __int64)v23[1] << 6);
            *((_BYTE*)v83_.v85 +
              *(unsigned __int16*)(v7 + ((unsigned __int64)*v23 << 6) +
                                   4LL * v23[256])) = v23[1024];
            v25 = *(unsigned __int16*)(v24 + 4LL * v23[257]);
            v26 = v23[258];
            *((_BYTE*)v83_.v85 + v25) = v23[1025];
            v27 = v7 + ((unsigned __int64)v23[3] << 6);
            *((_BYTE*)v83_.v85 +
              *(unsigned __int16*)(v7 + ((unsigned __int64)v23[2] << 6) +
                                   4 * v26)) = v23[1026];
            v28 = *(unsigned __int16*)(v27 + 4LL * v23[259]);
            LODWORD(v27) = v23[1027];
            v23 += 4;
            *((_BYTE*)v83_.v85 + v28) = v27;
          } while (v22 != 0);
        }
        goto LABEL_17;
      }
      v11 = (unsigned int*)(a1 + 4464);
      v8 = (unsigned int)v6 & 0xFFFFFFFE;
      v12 = v8;
      do {
        v12 -= 2;
        v13 = *(unsigned __int16*)(v7 + ((unsigned __int64)*v11 << 6) +
                                   4LL * v11[256]);
        v14 = *(unsigned __int16*)(v7 + ((unsigned __int64)v11[1] << 6) +
                                   4LL * v11[257]);
        v15 = v11[1024];
        v16 = v11[1025];
        v11 += 2;
        *((_BYTE*)v83_.v85 + v13) = v15;
        *((_BYTE*)v83_.v85 + v14) = v16;
      } while (v12 != 0);
      if (v8 != v6) {
        goto LABEL_11;
      }
    }
  LABEL_17:
    v29 = *(_DWORD*)(v2 + 448);
    if (v29 != 0) {
      v30 = *(_DWORD*)(a1 + 3716);
      v31 = *(_DWORD*)(v2 + 448) & 3;
      if (v29 >= 4) {
        v47 = v29 & 0xFFFFFFFC;
        v32 = 0;
        do {
          v48 =
              *((unsigned __int8*)v83_.v85 + ((unsigned __int16)v32 & 0xFFFC));
          ++*((_BYTE*)v83_.v83 + v48);
          v34 = (unsigned int)v48 >= v30;
          v49 = v48 - v30;
          if (v34) {
            *(_WORD*)(v2 + 452) |= 1 << v49;
          }
          v50 = (unsigned __int16)v32 & 0xFFFC;
          v51 = *((unsigned __int8*)v83_.v85 + v50 + 1);
          ++*((_BYTE*)v83_.v83 + v51);
          v34 = (unsigned int)v51 >= v30;
          v52 = v51 - v30;
          if (v34) {
            *(_WORD*)(v2 + 452) |= 1 << v52;
          }
          v53 = *((unsigned __int8*)v83_.v85 + v50 + 2);
          ++*((_BYTE*)v83_.v83 + v53);
          v34 = (unsigned int)v53 >= v30;
          v54 = v53 - v30;
          if (v34) {
            *(_WORD*)(v2 + 452) |= 1 << v54;
          }
          v55 = *((unsigned __int8*)v83_.v85 +
                  ((unsigned __int16)v32 & 0xFFFC) + 3);
          ++*((_BYTE*)v83_.v83 + v55);
          v34 = (unsigned int)v55 >= v30;
          v56 = v55 - v30;
          if (v34) {
            *(_WORD*)(v2 + 452) |= 1 << v56;
          }
          v32 += 4;
        } while (v47 != v32);
      }
      else {
        LOWORD(v32) = 0;
      }
      for (; v31 != 0; --v31) {
        v33 = *((unsigned __int8*)v83_.v85 + (unsigned __int16)v32);
        ++*((_BYTE*)v83_.v83 + v33);
        v34 = (unsigned int)v33 >= v30;
        v35 = v33 - v30;
        if (v34) {
          *(_WORD*)(v2 + 452) |= 1 << v35;
        }
        LOWORD(v32) = v32 + 1;
      }
    }
    v36 = *(_DWORD*)(a1 + 3736);
    *(_BYTE*)(v2 + 454) = 0;
    *(_DWORD*)(v2 + 8) = 24;
    v37 = LANES64_OF(vdup_n_s32(4 * v36)).n64_u64[0];
    v38 = (_BYTE*)(v2 + 454);
    *(_QWORD*)(a1 + 19848) = v37;
    v39 = 24;
    v40 = a1 + 19864;
    goto LABEL_65;
  }
  v9 = *(unsigned int*)(a1 + 3480);
  *(_DWORD*)(v2 + 8) = v9;
  if ((_DWORD)v9 != 0) {
    if ((unsigned int)v9 < 4) {
      v10 = 0;
      goto LABEL_59;
    }
    if ((unsigned int)v9 >= 0x20) {
      v57 = (int8x16x4_t*)(a1 + 3548);
      v10 = (unsigned int)v9 & 0xFFFFFFE0;
      v58 = (int8x16_t*)&v83_.v84;
      v59 = v10;
      do {
        v86 = v57[-1];
        v59 -= 32;
        v87 = *v57;
        v57 += 2;
        v58[-1] = vqtbl4q_s8(v86, COERCE_AS(int8x16_t, CudaDriverData_1115db0));
        *v58 = vqtbl4q_s8(v87, COERCE_AS(int8x16_t, CudaDriverData_1115db0));
        v58 += 2;
      } while (v59 != 0);
      if (v10 == v9) {
        goto LABEL_61;
      }
      if ((v9 & 0x1C) == 0) {
      LABEL_59:
        v66 = v9 - v10;
        v67 = (int*)(a1 + 4 * v10 + 3484);
        v68 = (char*)v83_.v83 + v10;
        do {
          v69 = *v67++;
          --v66;
          *v68++ = v69;
        } while (v66 != 0);
        goto LABEL_61;
      }
    }
    else {
      v10 = 0;
    }
    v60 = v10;
    v10 = (unsigned int)v9 & 0xFFFFFFFC;
    v61 = v60 - v10;
    v62 = (_DWORD*)((char*)v83_.v83 + v60);
    v63 = (int32x4_t*)(a1 + 4 * v60 + 3484);
    do {
      v64 = *v63++;
      v61 += 4;
      LANES64(v65).n64_u64[0] = LANES64_OF(vmovn_s32(v64)).n64_u64[0];
      *(_DWORD*)v62++ = LANES64_OF(vuzp1_s8(v65, v65)).n64_u32[0];
    } while (v61 != 0);
    if (v10 != v9) {
      goto LABEL_59;
    }
  }
LABEL_61:
  if (CudaDriverRoutine_9ad80(a1)) {
    qsort_plt((__int64)v83_.v83, *(unsigned int*)(v2 + 8), 1u,
              (__int64)CudaDriverRoutine_633a0);
  }
  *(_DWORD*)v2 = *(_DWORD*)(a1 + 3736);
  result = ((__int64 (*)(__int64))CudaDriverRoutine_9ad80)(a1);
  v70 = *(_DWORD*)(a1 + 3736);
  v71 = *(_DWORD*)(v2 + 8);
  *(_BYTE*)(v2 + 454) = 0;
  *(_DWORD*)(v2 + 4) = v70 << ((unsigned __int8)result != 0);
  if (v71 != 0) {
    v38 = (_BYTE*)(v2 + 454);
    v39 = v71;
    v40 = a1 + 19864;
    if (v71 == 1) {
      v41 = 0;
    LABEL_28:
      if ((v39 & 1) != 0) {
        v42 = *(unsigned __int16*)(v40 + 2 * v41) |
              (unsigned __int16)~(-1 << *((_BYTE*)v83_.v83 + v41));
        *(_WORD*)(v40 + 2 * v41) |= ~(-1 << *((_BYTE*)v83_.v83 + v41));
        if (v42 != 0) {
          v43 = 0;
          v44 = v42;
          do {
            v43 += v44 & 1;
            v45 = v44 > 1;
            v44 >>= 1;
          } while (v45);
          if (v43 > (unsigned __int8)*v38) {
            v46 = 0;
            do {
              v46 += v42 & 1;
              v45 = v42 > 1;
              v42 >>= 1;
            } while (v45);
            *v38 = v46;
          }
        }
      }
      return result;
    }
  LABEL_65:
    v41 = 0;
    do {
      v72 = *(unsigned __int16*)(v40 + 2 * v41);
      v73 = v72 | (unsigned __int16)~(-1 << *((_BYTE*)v83_.v83 + v41));
      *(_WORD*)(v40 + 2 * v41) = v72 | ~(-1 << *((_BYTE*)v83_.v83 + v41));
      if (v73 != 0) {
        v74 = 0;
        v75 = v73;
        do {
          result = v75 & 1;
          v74 += result;
          v45 = v75 > 1;
          v75 >>= 1;
        } while (v45);
        if (v74 > (unsigned __int8)*v38) {
          v76 = 0;
          do {
            v76 += v73 & 1;
            v45 = v73 > 1;
            v73 >>= 1;
          } while (v45);
          *v38 = v76;
        }
      }
      v77 = 2 * (v41 | 1);
      v78 = *(unsigned __int16*)(v40 + v77);
      v79 = v78 | (unsigned __int16)~(-1 << *((_BYTE*)v83_.v83 + (v41 | 1)));
      *(_WORD*)(v40 + v77) = v78 | ~(-1 << *((_BYTE*)v83_.v83 + (v41 | 1)));
      if (v79 != 0) {
        v80 = 0;
        v81 = v79;
        do {
          result = v81 & 1;
          v80 += result;
          v45 = v81 > 1;
          v81 >>= 1;
        } while (v45);
        if (v80 > (unsigned __int8)*v38) {
          v82 = 0;
          do {
            v82 += v79 & 1;
            v45 = v79 > 1;
            v79 >>= 1;
          } while (v45);
          *v38 = v82;
        }
      }
      v41 += 2;
    } while (v41 != (v39 & 0xFFFFFFFE));
    goto LABEL_28;
  }
  return result;
}

unsigned __int8 nvidia_1199d0(__int64 a1)
{
  bool v2;
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 result;
  void* v7;

  v2 = (unsigned __int64)(*(__int64 (**)(__int64))(
           *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 18424LL))(44) > 1;
  v3 = *(_QWORD*)(a1 + 16);
  *(_WORD*)(a1 + 1270) = 0;
  if (v2) {
    v4 = 256;
  }
  else {
    v4 = 0;
  }
  *(_DWORD*)(a1 + 1264) = -1;
  *(_WORD*)(a1 + 1268) = v4;
  *(_OWORD*)(a1 + 1232) = (__typeof__(*(_OWORD*)(a1 + 1232))){0};
  *(_OWORD*)(a1 + 1248) = (__typeof__(*(_OWORD*)(a1 + 1248))){0};
  *(_QWORD*)(a1 + 1272) = 0;
  v5 = CudaDriverRoutine_98340(v3);
  result = ((__int64 (*)(__int64))CudaDriverRoutine_99720)(v5);
  if ((_BYTE)result != 0) {
    result = ((__int64 (*)(__int64))CudaDriverRoutine_9ad90)(
        *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL));
    if ((_BYTE)result != 0) {
      result = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
      if (*(_BYTE*)(result + 16456) != 0) {
        result = (*(__int64 (**)(__int64))(
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 18424LL))(42);
        *(_DWORD*)(a1 + 68) = 1684300900;
        *(_WORD*)(a1 + 72) = 25700;
        *(_DWORD*)(a1 + 74) = 16843009 * (unsigned __int8)result;
        *(_WORD*)(a1 + 78) = 257 * (unsigned __int8)result;
      }
      v7 = CudaDriverData_1422118;
      if (*((_BYTE*)&CudaDriverRoutine_74dc + (_QWORD)CudaDriverData_1422118) !=
          0) {
        *(_BYTE*)(a1 + 74) =
            *((_BYTE*)&CudaDriverRoutine_74d0 + (_QWORD)CudaDriverData_1422118);
        *(_BYTE*)(a1 + 76) = *((_BYTE*)&CudaDriverRoutine_74d4 + (_QWORD)v7);
        *(_BYTE*)(a1 + 78) =
            *((_BYTE*)&CudaDriverRoutine_74d0 + (_QWORD)v7 + 3);
      }
      if (*((_BYTE*)&CudaDriverRoutine_74dc + (_QWORD)v7) != 0) {
        *(_BYTE*)(a1 + 75) = *((_BYTE*)&CudaDriverRoutine_74d0 + (_QWORD)v7);
        *(_BYTE*)(a1 + 77) = *((_BYTE*)&CudaDriverRoutine_74d4 + (_QWORD)v7);
        *(_BYTE*)(a1 + 79) =
            *((_BYTE*)&CudaDriverRoutine_74d0 + (_QWORD)v7 + 2);
      }
      *(_BYTE*)(a1 + 80) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
