#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_64b750(__int64 result, __int64, __int64);
extern _UNKNOWN* SdkData_e89ba0;
__int64 nvidia_64d350(__int64 result, __int64* a2, __int64* a3, int a4, int a5,
                      int a6, int a7, int a8, int a9);

__int64 nvidia_64d350(__int64 result, __int64* a2, __int64* a3, int a4, int a5,
                      int a6, int a7, int a8, int a9)
{
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  _DWORD* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char v29;
  __int64 v30;
  int v31;
  _BOOL4 v32;
  _BOOL4 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  _DWORD* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  _DWORD* v43;
  int v44;
  _DWORD* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _DWORD* v49;
  char* v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  char v61;
  int v62;
  int v63;
  int v64;
  char v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;

  {
    v9 = *((_DWORD*)a3 + 10);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *((_DWORD*)a3 + 13);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *((_DWORD*)a2 + 2);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *((_DWORD*)a2 + 6);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *((_DWORD*)a2 + 18);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *((_DWORD*)a3 + 2);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *((_DWORD*)a3 + 6);
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v16 = *((_DWORD*)a3 + 18);
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = *((_DWORD*)a3 + 20);
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v75 = *((_DWORD*)a3 + 12);
    __asm__ volatile("" ::"r"(v75));
  }
  {
    v76 = *((_DWORD*)a3 + 11);
    __asm__ volatile("" ::"r"(v76));
  }
  {
    v18 = *((_DWORD*)a2 + 20);
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v77 = *((_DWORD*)a3 + 14);
    __asm__ volatile("" ::"r"(v77));
  }
  {
    v20 = *((_DWORD*)a3 + 8);
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v19 = *((_DWORD*)a3 + 9);
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v78 = *a3;
    __asm__ volatile("" ::"r"(v78));
  }
  {
    v79 = *a2;
    __asm__ volatile("" ::"r"(v79));
  }
  {
    v21 = *((_DWORD*)a2 + 8);
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = *((_DWORD*)a2 + 11);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v73 = *((_DWORD*)a2 + 9);
    __asm__ volatile("" ::"r"(v73));
  }
  {
    v74 = *((_DWORD*)a2 + 10);
    __asm__ volatile("" ::"r"(v74));
  }
  {
    v23 = *((_DWORD*)a2 + 12);
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v71 = *((_DWORD*)a2 + 14);
    __asm__ volatile("" ::"r"(v71));
  }
  {
    v72 = *((_DWORD*)a2 + 13);
    __asm__ volatile("" ::"r"(v72));
  }
  {
    v24 = *(_DWORD**)result;
    __asm__ volatile("" ::"r"(v24));
  }
  if ((unsigned __int64)(*(_QWORD*)result + 196LL) > *(_QWORD*)(result + 8)) {
    {
      v66 = *((_DWORD*)a3 + 9);
      __asm__ volatile("" ::"r"(v66));
    }
    {
      v67 = *((_DWORD*)a3 + 10);
      __asm__ volatile("" ::"r"(v67));
    }
    v25 = a8;
    v26 = a4;
    {
      v68 = *((_DWORD*)a3 + 20);
      __asm__ volatile("" ::"r"(v68));
    }
    v69 = v11;
    v27 = a6;
    {
      v28 = *((_DWORD*)a3 + 8);
      __asm__ volatile("" ::"r"(v28));
    }
    v29 = v22;
    {
      v64 = *((_DWORD*)a3 + 2);
      __asm__ volatile("" ::"r"(v64));
    }
    {
      v65 = *((_DWORD*)a3 + 13);
      __asm__ volatile("" ::"r"(v65));
    }
    v62 = v12;
    v63 = a7;
    v70 = a5;
    v61 = v23;
    v30 = result;
    v10 = v21;
    v31 = v18;
    nvidia_64b750(result, (__int64)v24,
                  4LL * (unsigned int)(*(int*)(result + 104) + 49));
    v18 = v31;
    LOBYTE(v22) = v29;
    v21 = v10;
    result = v30;
    LOBYTE(v23) = v61;
    v12 = v62;
    v11 = v69;
    a5 = v70;
    a6 = v27;
    a4 = v26;
    a8 = v25;
    v20 = v28;
    a7 = v63;
    v14 = v64;
    {
      v24 = *(_DWORD**)result;
      __asm__ volatile("" ::"r"(v24));
    }
    LOBYTE(v10) = v65;
    v19 = v66;
    v9 = v67;
    v17 = v68;
  }
  v32 = true;
  if (v17 != 51 && v18 != 51 && v18 != 53) {
    v32 = v17 == 53;
  }
  v33 = v12 != v15 && v32;
  if (v33) {
    v34 = v13;
    v35 = v16;
    v36 = a6;
    v37 = a4;
  }
  else {
    v37 = v13 * a4;
    v34 = 1;
    v35 = 1;
    v36 = v16 * a6;
    a8 *= v13;
    v21 *= v13;
    v20 *= v16;
  }
  if (v12 == 2) {
    *(_DWORD*)v24 = 536969674;
    v24[1] = v22 & 0xF | (unsigned __int8)(16 * (v23 & 0xF)) |
             ((v72 & 0xF) << 8) | 0x1000;
    v24[2] = 536969675;
    v24[3] = (v21 + 64 / v34 * v71 - 1) & -(64 / v34 * v71);
    v24[4] = 536969676;
    v38 = 1 << v72;
    v24[5] = v73;
    if (v74 < 1 << v72) {
      v38 = v74;
    }
    v24[6] = 536969677;
    v24[7] = v38;
    v39 = v24 + 8;
    if (v37 < 0x10000) {
      v42 = (unsigned __int16)v37 | ((unsigned __int16)a5 << 16);
      v40 = 1;
      *(_DWORD*)v39 = 536969679;
      v41 = 2;
    }
    else {
      v40 = 2;
      v24[8] = 537035217;
      v24[9] = v37;
      v41 = 3;
      v42 = a5;
    }
  }
  else {
    v41 = 2;
    v40 = 1;
    v39 = v24;
    *(_DWORD*)v24 = 536969476;
    v42 = v11;
  }
  v39[v40] = v42;
  {
    v43 = &v39[v41];
    __asm__ volatile("" ::"r"(v43));
  }
  if (v15 == 2) {
    *(_DWORD*)v43 = 536969667;
    v43[1] = v76 & 0xF | (unsigned __int8)(16 * (v75 & 0xF)) |
             ((v10 & 0xF) << 8) | 0x1000;
    v43[2] = 536969668;
    v43[3] = (v20 + 64 / v35 * v77 - 1) & -(64 / v35 * v77);
    v44 = 1 << v10;
    v43[4] = 536969669;
    v43[5] = v19;
    if (v9 < 1 << v10) {
      v44 = v9;
    }
    v43[6] = 536969670;
    v43[7] = v44;
    v45 = v43 + 8;
    if (v36 < 0x10000) {
      v48 = (unsigned __int16)v36 | ((unsigned __int16)a7 << 16);
      v47 = 2;
      v46 = 1;
      *(_DWORD*)v45 = 536969672;
    }
    else {
      v46 = 2;
      v43[8] = 537035219;
      v43[9] = v36;
      v47 = 3;
      v48 = a7;
    }
  }
  else {
    v47 = 2;
    v46 = 1;
    v45 = v43;
    *(_DWORD*)v43 = 536969477;
    v48 = v14;
  }
  v45[v46] = v48;
  {
    v49 = &v45[v47];
    __asm__ volatile("" ::"r"(v49));
  }
  v50 = (char*)SdkData_e89ba0 + 48LL * v17;
  if (v50[14] != 0 || v50[15] != 0) {
    v51 = 0x4000000;
    v52 = a9;
    if (!v33) {
      goto LABEL_34;
    }
  }
  else {
    v51 = 0;
    v52 = a9;
    if (!v33) {
      goto LABEL_34;
    }
  }
  v51 |= 0x400u;
  v53 = (v34 << 20) + 3145728;
  if (v12 == 2) {
    v54 = 8451;
  }
  else {
    v54 = 801;
  }
  *(_DWORD*)v49 = 536969666;
  v49[1] = v53 & 0x300000 | v54 | ((v35 << 24) + 50331648) & 0x3000000;
  v49 += 2;
LABEL_34:
  if (v12 == 2) {
    v55 = 6;
  }
  else {
    v55 = 134;
  }
  LODWORD(v56) = v11 * a5 + v13 * a4;
  v49[8] = v52;
  v49[9] = 536969408;
  LODWORD(v57) = v14 * a7 + v16 * a6;
  v49[6] = 537035014;
  v49[7] = a8;
  if (v12 == 2) {
    v56 = 0;
  }
  else {
    v56 = (unsigned int)v56;
  }
  if (v15 == 2) {
    v57 = 0;
  }
  else {
    v57 = (unsigned int)v57;
  }
  v58 = v79 + v56;
  v49[2] = v58;
  v49[3] = 537035010;
  v59 = v78 + v57;
  *(_DWORD*)v49 = 537035008;
  v49[1] = DWORDn(v58, sizeof(v58) / 4 - 1);
  v49[4] = DWORDn(v59, sizeof(v59) / 4 - 1);
  v49[5] = v59;
  v60 = v51 & 0x7FFFF60 | v55 | 0x100;
  if (v15 == 2) {
    v60 = v51 & 0x7FFFC60 | v55 & 0xFFFFFCFF;
  }
  v49[10] = v60 | 0x200;
  *(_QWORD*)result = v49 + 11;
  return result;
}

#pragma GCC visibility pop
