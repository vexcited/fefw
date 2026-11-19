#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 strncpy_plt(__int64, const char*, unsigned __int64);
int strcmp_plt(const char*, const char*);
int strncmp_plt(const char*, const char*, unsigned __int64);
unsigned __int64 strlen_plt(const char*);
__int64 nvidia_cuda_devtools_common_tools_shared_226220(__int64 a1);

__int64 nvidia_cuda_devtools_common_tools_shared_226220(__int64 a1)
{
  int v1;
  unsigned int* v2;
  unsigned int* v3;
  __int64 v4;
  int v5;
  _DWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  unsigned int* v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int16* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int* v35;
  char v36;
  __int64 v37;
  unsigned __int64 v38;
  int v39;
  unsigned int* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned int* v43;
  unsigned __int64 v44;
  unsigned int* v45;
  __int64 v46;
  char v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned int* v51;
  unsigned int v52;
  _DWORD* v53;
  unsigned int* v56;
  char v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned int v63;
  bool v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v74;
  unsigned __int64 v75;
  int v76;
  __int64 v77;

  v1 = *(unsigned __int16*)(a1 + 48);
  if (*(_WORD*)(a1 + 48) != 0) {
    v2 = (unsigned int*)(a1 + 32);
    v3 = (unsigned int*)(a1 + *(unsigned int*)(a1 + 32));
    LODWORD(v4) = *(_DWORD*)(a1 + 32);
    v5 = *(unsigned __int16*)(a1 + 48);
    v6 = v3;
    while (v6[1] != 2) {
      v6 += 10;
      if (--v5 == 0) {
        v6 = nullptr;
        break;
      }
    }
    v7 = *(unsigned __int16*)(a1 + 48);
    v8 = *(unsigned __int16*)(a1 + 48);
  }
  else {
    v2 = (unsigned int*)(a1 + 32);
    v4 = *(unsigned int*)(a1 + 32);
    v3 = (unsigned int*)(a1 + v4);
    v8 = *(unsigned int*)(a1 + v4 + 20);
    if ((_DWORD)v8 == 0) {
      return 5;
    }
    v14 = *(_DWORD*)(a1 + v4 + 20);
    v6 = (_DWORD*)(a1 + v4);
    while (v6[1] != 2) {
      v6 += 10;
      if (--v14 == 0) {
        v7 = 0;
        v6 = nullptr;
        goto LABEL_7;
      }
    }
    v7 = 0;
  }
LABEL_7:
  v72 = v8;
  if (*(_WORD*)(a1 + 48) != 0) {
    v9 = *(unsigned __int16*)(a1 + 50);
    v10 = *(unsigned __int16*)(a1 + 46);
    v69 = v2;
    v11 = v7;
    v12 = v3;
    v74 = a1 + 16;
    v76 = v4;
    v13 = a1 + *(unsigned int*)(a1 + 16 + (unsigned int)(v4 + v10 * v9));
    while (strcmp_plt((const char*)(v13 + *v12), ".shstrtab") != 0) {
      v12 += 10;
      if (--v11 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v15 = v3[5];
    if (v15 == 0) {
      return 5;
    }
    v9 = *(unsigned __int16*)(a1 + 50);
    v10 = *(unsigned __int16*)(a1 + 46);
    v74 = a1 + 16;
    v12 = v3;
    v69 = v2;
    v76 = v4;
    v16 = a1 + *(unsigned int*)(a1 + (unsigned int)(v4 + v10 * v9) + 16);
    while (strcmp_plt((const char*)(v16 + *v12), ".shstrtab") != 0) {
      v12 += 10;
      if (--v15 == 0) {
      LABEL_21:
        v12 = nullptr;
        break;
      }
    }
  }
  if (v1 != 0) {
    v17 = a1 + *(unsigned int*)(v74 + (unsigned int)(v76 + v10 * v9));
    while (strcmp_plt((const char*)(v17 + *v3), ".strtab") != 0) {
      v3 += 10;
      if (--v7 == 0) {
        return 5;
      }
    }
    goto LABEL_33;
  }
  v18 = v3[5];
  if (v18 == 0) {
    return 5;
  }
  v19 = a1 + *(unsigned int*)(v74 + v76 +
                              *(unsigned __int16*)(a1 + 46) *
                                  (unsigned int)*(unsigned __int16*)(a1 + 50));
  while (strcmp_plt((const char*)(v19 + *v3), ".strtab") != 0) {
    v3 += 10;
    if (--v18 == 0) {
      return 5;
    }
  }
LABEL_33:
  v21 = v72;
  result = 5;
  if (v12 != nullptr && v6 != nullptr) {
    v22 = v6[9];
    if (v22 != 0) {
      v24 = (unsigned int)v6[4];
      v23 = v6[5];
      v25 = v12[4];
      v26 = v3[4];
      v77 = CudaDriverRoutine_12e510(v72, 4);
      if (v77 != 0) {
        if (v22 > v23) {
        LABEL_38:
          CudaDriverRoutine_12e340(v77);
          return 0;
        }
        v70 = v23 / v22;
        if (v23 / v22 <= 1) {
          v27 = 1;
        }
        else {
          v27 = v23 / v22;
        }
        v28 = v27 & 3;
        if (v23 / v22 < 4) {
          v29 = a1;
          v30 = 0;
        LABEL_47:
          if (v28 != 0) {
            v31 = (unsigned __int16*)(v24 + 16 * v30 + v29 + 14);
            do {
              if ((*(_BYTE*)(v31 - 1) & 0xF) == 3) {
                *(_DWORD*)(v77 + 4LL * *v31) = v30;
              }
              LODWORD(v30) = v30 + 1;
              v31 += 8;
              --v28;
            } while (v28 != 0);
          }
          v32 = v29 + v24;
          v33 = v29 + v25;
          v34 = 0;
          v71 = v29 + v26;
          v68 = v29 + 20;
          while (1) {
            v35 = (unsigned int*)(v32 + 16 * v34);
            if ((*((_BYTE*)v35 + 13) & 8) == 0) {
              goto LABEL_53;
            }
            v36 = *((_BYTE*)v35 + 12);
            v37 = *v35;
            v75 = *((unsigned __int16*)v35 + 7);
            if ((_DWORD)v37 != 0) {
              v38 = strlen_plt((const char*)(v71 + v37));
              strncpy_plt(v71 + v37, ".hidden", v38 + 1);
            }
            *v35 = v37;
            v39 = v75;
            v35[3] = 0;
            *(_QWORD*)(v35 + 1) = 0;
            *((_BYTE*)v35 + 12) = v36;
            if ((_DWORD)v75 == 0) {
              goto LABEL_53;
            }
            if (*(_WORD*)(a1 + 48) != 0) {
              if (*(unsigned __int16*)(a1 + 48) <= v75) {
                goto LABEL_70;
              }
            }
            else if (*(unsigned int*)(v68 + *v69) <= v75) {
            LABEL_70:
              v45 =
                  (unsigned int*)(v32 + 16LL * *(unsigned int*)(v77 + 4 * v75));
              if (*((unsigned __int16*)v45 + 7) != (_DWORD)v75) {
                goto LABEL_66;
              }
              goto LABEL_71;
            }
            v40 = (unsigned int*)(a1 + *(_DWORD*)(a1 + 32) +
                                  *(unsigned __int16*)(a1 + 46) *
                                      (unsigned int)v75);
            v41 = *v40;
            if ((_DWORD)v41 != 0) {
              v42 = strlen_plt((const char*)(v33 + v41));
              strncpy_plt(v33 + v41, ".hidden", v42 + 1);
            }
            v43 = v40 + 1;
            if (v40[1] != 8) {
              v44 = v40[5];
              if ((_DWORD)v44 != 0) {
                memset_plt(a1 + v40[4], 0, v44);
              }
            }
            *v40 = v41;
            v39 = v75;
            v43[8] = 0;
            *(_OWORD*)v43 = (__typeof__(*(_OWORD*)v43)){0};
            *((_OWORD*)v43 + 1) = (__typeof__(*((_OWORD*)v43 + 1))){0};
            v45 = (unsigned int*)(v32 + 16LL * *(unsigned int*)(v77 + 4 * v75));
            if (*((unsigned __int16*)v45 + 7) != (_DWORD)v75) {
            LABEL_66:
              v46 = *(unsigned int*)(a1 + 32);
              if (*(_WORD*)(a1 + 48) == 0) {
                goto LABEL_74;
              }
              goto LABEL_67;
            }
          LABEL_71:
            v47 = *((_BYTE*)v45 + 12);
            v48 = *v45;
            if ((_DWORD)v48 != 0) {
              v49 = strlen_plt((const char*)(v71 + v48));
              strncpy_plt(v71 + v48, ".hidden", v49 + 1);
            }
            v45[3] = 0;
            *((_BYTE*)v45 + 12) = v47;
            v21 = v72;
            *v45 = v48;
            v39 = v75;
            *(_QWORD*)(v45 + 1) = 0;
            v46 = *(unsigned int*)(a1 + 32);
            if (*(_WORD*)(a1 + 48) == 0) {
            LABEL_74:
              if (*(_DWORD*)(v68 + v46) == 0 || a1 == 0) {
                goto LABEL_53;
              }
            LABEL_76:
              v50 = 0;
              v51 = (unsigned int*)(a1 + v46);
              while (2) {
                if (v51[7] == v39) {
                  v53 = v51 + 1;
                  v52 = v51[1];
                  if (v52 == 4 || v52 == 9 || v52 == 1879048192) {
                  LABEL_88:
                    v56 =
                        (unsigned int*)(v32 +
                                        16LL * *(unsigned int*)(v77 + 4 * v50));
                    if (v50 == *((unsigned __int16*)v56 + 7)) {
                      v57 = *((_BYTE*)v56 + 12);
                      v58 = *v56;
                      if ((_DWORD)v58 != 0) {
                        v59 = strlen_plt((const char*)(v71 + v58));
                        strncpy_plt(v71 + v58, ".hidden", v59 + 1);
                      }
                      v56[3] = 0;
                      *((_BYTE*)v56 + 12) = v57;
                      v21 = v72;
                      *(_QWORD*)(v56 + 1) = 0;
                      *v56 = v58;
                    }
                    v60 = *v51;
                    if ((_DWORD)v60 != 0) {
                      v61 = strlen_plt((const char*)(v33 + v60));
                      strncpy_plt(v33 + v60, ".hidden", v61 + 1);
                    }
                    if (*v53 != 8) {
                      v62 = v51[5];
                      if ((_DWORD)v62 != 0) {
                        memset_plt(a1 + v51[4], 0, v62);
                      }
                    }
                    *v51 = v60;
                    v39 = v75;
                    v51[9] = 0;
                    *(_OWORD*)v53 = (__typeof__(*(_OWORD*)v53)){0};
                    *(_OWORD*)(v51 + 5) = (__typeof__(*(_OWORD*)(v51 + 5))){0};
                  }
                  else {
                    v63 = v51[6];
                    if (v52 == 1 && v63 == 0) {
                      if (strncmp_plt((const char*)(v33 + *v51), ".nv.constant",
                                      0xCu) == 0) {
                        goto LABEL_88;
                      }
                    }
                    else {
                      v65 = v52 == 8 && v63 == 0;
                      if (v65 && strncmp_plt((const char*)(v33 + *v51),
                                             ".nv.shared.", 0xBu) == 0) {
                        goto LABEL_88;
                      }
                    }
                  }
                }
                ++v50;
                v51 += 10;
                if (v21 == v50) {
                  goto LABEL_53;
                }
                continue;
              }
            }
          LABEL_67:
            if (a1 != 0) {
              goto LABEL_76;
            }
          LABEL_53:
            if (++v34 >= v70) {
              goto LABEL_38;
            }
          }
        }
        v29 = a1;
        v66 = v27 & 0xFFFFFFFC;
        v30 = 0;
        v67 = v24 + a1 + 44;
        while (1) {
          if ((*(_BYTE*)(v67 - 32) & 0xF) == 3) {
            *(_DWORD*)(v77 + 4LL * *(unsigned __int16*)(v67 - 30)) = v30;
            if ((*(_BYTE*)(v67 - 16) & 0xF) != 3) {
              goto LABEL_114;
            }
          }
          else if ((*(_BYTE*)(v67 - 16) & 0xF) != 3) {
          LABEL_114:
            if ((*(_BYTE*)v67 & 0xF) == 3) {
              goto LABEL_115;
            }
            goto LABEL_119;
          }
          *(_DWORD*)(v77 + 4LL * *(unsigned __int16*)(v67 - 14)) = v30 + 1;
          if ((*(_BYTE*)v67 & 0xF) == 3) {
          LABEL_115:
            *(_DWORD*)(v77 + 4LL * *(unsigned __int16*)(v67 + 2)) = v30 + 2;
            if ((*(_BYTE*)(v67 + 16) & 0xF) == 3) {
              goto LABEL_120;
            }
            goto LABEL_111;
          }
        LABEL_119:
          if ((*(_BYTE*)(v67 + 16) & 0xF) == 3) {
          LABEL_120:
            *(_DWORD*)(v77 + 4LL * *(unsigned __int16*)(v67 + 18)) = v30 + 3;
          }
        LABEL_111:
          v30 += 4;
          v67 += 64;
          if (v66 == v30) {
            goto LABEL_47;
          }
        }
      }
      return 3;
    }
    else {
      return 4;
    }
  }
  return result;
}

#pragma GCC visibility pop
