---
---
---
name: trap_obj_set_skateboard_mode
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
syscall 1, 302 ; trap_obj_set_skateboard_mode (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SORA::set_skateboard_mode(YS::SORA_2 *const this, int mode)
/----- (00000000004FA18C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_skateboard_mode(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 0x1000000) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_sora()",
      "common",
      "../yasui/libys/sora.h",
      72LL,
      "TOSORA",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/sora.h", 72);
  }
  YS::SORA::set_skateboard_mode((YS::SORA_2 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 4FA1B0: variable 'back_chain' is possibly undefined
->
/----- (000000000049EC84) ----------------------------------------------------
void __fastcall YS::SORA::set_skateboard_mode(YS::SORA_2 *const this, int mode)
{
  __int64 back_chain; // [sp+0h] [-90h]

  if ( mode < 0 || mode >= 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "mode >= 0 && mode < SKATEBOARD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\sora.cpp",
      437LL,
      "set_skateboard_mode",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\sora.cpp", 437);
  }
  *(_DWORD *)&(*this)[2928] = mode;
}
// 49ECAC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

