#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float* nn_vfx_5d8dd0(float* result, float*, float*, float*);
bool nn_vfx_5d93c0(float* a1, float* a2);

bool nn_vfx_5d93c0(float* a1, float* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  float v4;
  float* v5;
  float* v6;
  _QWORD* v7;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float* v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  float* v39;
  __int64 v40;
  int v41;
  char* v42;
  float v43;
  float v44;
  int v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  float v49;
  float v51;
  __int64 v52;
  __int64 v53;

  v2 = ((char*)a2 - (char*)a1) >> 3;
  if (v2 <= 2) {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      v3 = *(a2 - 2);
      v4 = *a1;
      if (v3 >= 0x0.0p+0f || v4 >= 0x0.0p+0f) {
        if (v3 < v4) {
          goto LABEL_56;
        }
      }
      else if (v3 > v4) {
        goto LABEL_56;
      }
      return true;
    }
  LABEL_22:
    v15 = a1[2];
    v16 = *a1;
    v17 = a1 + 4;
    if (v15 >= 0x0.0p+0f || v16 >= 0x0.0p+0f) {
      if (v15 >= v16) {
        goto LABEL_25;
      }
    }
    else if (v15 <= v16) {
    LABEL_25:
      v18 = *v17;
      if (v15 >= 0x0.0p+0f || v18 >= 0x0.0p+0f) {
        if (v18 >= v15) {
          goto LABEL_83;
        }
      }
      else if (v18 <= v15) {
        goto LABEL_83;
      }
      v31 = *((_QWORD*)a1 + 1);
      v30 = *((_QWORD*)a1 + 2);
      *((_QWORD*)a1 + 1) = v30;
      *((_QWORD*)a1 + 2) = v31;
      if (*(float*)&v30 < 0x0.0p+0f && v16 < 0x0.0p+0f) {
        if (v16 >= *(float*)&v30) {
          goto LABEL_83;
        }
      }
      else if (v16 <= *(float*)&v30) {
      LABEL_83:
        v39 = a1 + 6;
        if (a1 + 6 == a2) {
          return true;
        }
        v40 = 0;
        v41 = 0;
        while (1) {
          v43 = *v39;
          v44 = *v17;
          if (*v39 >= 0x0.0p+0f || v44 >= 0x0.0p+0f) {
            if (v43 >= v44) {
              goto LABEL_88;
            }
          }
          else if (v43 <= v44) {
            goto LABEL_88;
          }
          v45 = *((_DWORD*)v39 + 1);
          v46 = v40;
          *(_QWORD*)v39 = *(_QWORD*)v17;
          v47 = v40;
          if (v43 < 0x0.0p+0f) {
            do {
              v48 = (char*)a1 + v47;
              v49 = *(float*)((char*)a1 + v47 + 8);
              if (v49 >= 0x0.0p+0f) {
                if (v49 <= v43) {
                  v42 = (char*)a1 + v47;
                  goto LABEL_86;
                }
              }
              else if (v49 >= v43) {
                goto LABEL_87;
              }
              v17 -= 2;
              v47 -= 8;
              *((_QWORD*)v48 + 2) = *((_QWORD*)v48 + 1);
            } while (v47 != -16);
          LABEL_97:
            v17 = a1;
          }
          else {
            while (1) {
              v42 = (char*)a1 + v46;
              if (*(float*)((char*)a1 + v46 + 8) <= v43) {
                break;
              }
              v46 -= 8;
              *((_QWORD*)v42 + 2) = *((_QWORD*)v42 + 1);
              if (v46 == -16) {
                goto LABEL_97;
              }
            }
          LABEL_86:
            v17 = (float*)(v42 + 16);
          }
        LABEL_87:
          ++v41;
          *v17 = v43;
          *((_DWORD*)v17 + 1) = v45;
          if (v41 == 8) {
            return v39 + 2 == a2;
          }
        LABEL_88:
          v17 = v39;
          v39 += 2;
          v40 += 8;
          if (v39 == a2) {
            return true;
          }
        }
      }
      v38 = *(_QWORD*)a1;
      *(_QWORD*)a1 = v30;
      *((_QWORD*)a1 + 1) = v38;
      goto LABEL_83;
    }
    v20 = *v17;
    if (v15 >= 0x0.0p+0f || v20 >= 0x0.0p+0f) {
      if (v20 >= v15) {
      LABEL_39:
        v21 = *(_QWORD*)a1;
        {
          __typeof__(v22) z_ = (__typeof__(v22)){0};
          LODWORD(z_) = *(_QWORD*)a1;
          v22 = z_;
        }
        *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
        *((_QWORD*)a1 + 1) = v21;
        if (v20 >= 0x0.0p+0f || v22 >= 0x0.0p+0f) {
          if (v20 >= v22) {
            goto LABEL_83;
          }
        }
        else if (v20 <= v22) {
          goto LABEL_83;
        }
        *((_QWORD*)a1 + 1) = *((_QWORD*)a1 + 2);
      LABEL_80:
        *((_QWORD*)a1 + 2) = v21;
        goto LABEL_83;
      }
    }
    else if (v20 <= v15) {
      goto LABEL_39;
    }
    v21 = *(_QWORD*)a1;
    *(_QWORD*)a1 = *((_QWORD*)a1 + 2);
    goto LABEL_80;
  }
  if (v2 == 3) {
    v12 = a1[2];
    v13 = *a1;
    if (v12 >= 0x0.0p+0f || v13 >= 0x0.0p+0f) {
      if (v12 >= v13) {
        goto LABEL_18;
      }
    }
    else if (v12 <= v13) {
    LABEL_18:
      v14 = *(a2 - 2);
      if (v12 >= 0x0.0p+0f || v14 >= 0x0.0p+0f) {
        if (v14 >= v12) {
          return true;
        }
      }
      else if (v14 <= v12) {
        return true;
      }
      v26 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = *((_QWORD*)a2 - 1);
      *((_QWORD*)a2 - 1) = v26;
      v27 = a1[2];
      v28 = *a1;
      if (v27 >= 0x0.0p+0f || v28 >= 0x0.0p+0f) {
        if (v27 >= v28) {
          return true;
        }
      }
      else if (v27 <= v28) {
        return true;
      }
      v37 = *(_QWORD*)a1;
      *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = v37;
      return true;
    }
    v19 = *(a2 - 2);
    if (v12 >= 0x0.0p+0f || v19 >= 0x0.0p+0f) {
      if (v19 >= v12) {
        goto LABEL_65;
      }
    }
    else if (v19 <= v12) {
    LABEL_65:
      v29 = *(_QWORD*)a1;
      *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = v29;
      v32 = *(a2 - 2);
      if (v32 >= 0x0.0p+0f || *(float*)&v29 >= 0x0.0p+0f) {
        if (v32 >= *(float*)&v29) {
          return true;
        }
      }
      else if (v32 <= *(float*)&v29) {
        return true;
      }
      *((_QWORD*)a1 + 1) = *((_QWORD*)a2 - 1);
      goto LABEL_57;
    }
  LABEL_56:
    v29 = *(_QWORD*)a1;
    *(_QWORD*)a1 = *((_QWORD*)a2 - 1);
  LABEL_57:
    *((_QWORD*)a2 - 1) = v29;
    return true;
  }
  if (v2 == 4) {
    nn_vfx_5d8dd0(a1, a1 + 2, a1 + 4, a2 - 2);
    return true;
  }
  if (v2 != 5) {
    goto LABEL_22;
  }
  v5 = a1 + 2;
  v6 = a1 + 4;
  v7 = a1 + 6;
  nn_vfx_5d8dd0(a1, a1 + 2, a1 + 4, a1 + 6);
  v10 = *(a2 - 2);
  v11 = a1[6];
  if (v10 >= 0x0.0p+0f || v11 >= 0x0.0p+0f) {
    if (v10 >= v11) {
      return true;
    }
  }
  else if (v10 <= v11) {
    return true;
  }
  v23 = *v7;
  *v7 = *((_QWORD*)a2 - 1);
  *((_QWORD*)a2 - 1) = v23;
  v24 = *(float*)v7;
  v25 = *v6;
  if (*(float*)v7 >= 0x0.0p+0f || v25 >= 0x0.0p+0f) {
    if (v24 >= v25) {
      return true;
    }
  }
  else if (v24 <= v25) {
    return true;
  }
  v33 = *v7;
  v34 = *v5;
  v35 = *(_QWORD*)v6;
  v36 = COERCE_FLOAT(*v7);
  *(_QWORD*)v6 = *v7;
  *v7 = v35;
  if (v36 >= 0x0.0p+0f || v34 >= 0x0.0p+0f) {
    if (v34 <= v36) {
      return true;
    }
  }
  else if (v34 >= v36) {
    return true;
  }
  v51 = *a1;
  v52 = *((_QWORD*)a1 + 1);
  *((_QWORD*)a1 + 1) = v33;
  *((_QWORD*)a1 + 2) = v52;
  if (v36 >= 0x0.0p+0f || v51 >= 0x0.0p+0f) {
    if (v51 <= v36) {
      return true;
    }
  }
  else if (v51 >= v36) {
    return true;
  }
  v53 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v33;
  *((_QWORD*)a1 + 1) = v53;
  return true;
}

#pragma GCC visibility pop
