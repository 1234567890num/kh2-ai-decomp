---
---
---
name: trap_obj_set_jump_motion
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
syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004FE0C8) ----------------------------------------------------
void __fastcall YS::trap_obj_set_jump_motion(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  int v4; // r3
  __int64 v5; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
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
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(_DWORD *)&(*args)[4];
  v5 = *(unsigned int *)(v2 + 4);
  *(_DWORD *)(v5 + 0x100) = v4 + 1;
  *(_DWORD *)(v5 + 260) = v4 + 2;
}
// 4FE0EC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

