---
---
---
name: trap_obj_set_scissoring
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 6, 65 ; trap_obj_set_scissoring (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000627EC0) ----------------------------------------------------
void __fastcall Ts::trap_obj_set_scissoring(BD_VALUE_25 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r30
  unsigned __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  if ( *(_DWORD *)&(*args)[4] )
  {
    v1 = *(unsigned int *)args;
    v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v1 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v1 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v2);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    *(_DWORD *)(unsigned int)(*(_DWORD *)(v1 + 4) + 1896) |= 0x20u;
  }
  else
  {
    v3 = *(unsigned int *)args;
    v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v3 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v3 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v4);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    *(_DWORD *)(unsigned int)(*(_DWORD *)(v3 + 4) + 1896) &= 0xFFFFFFDF;
  }
}
// 627EF0: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

