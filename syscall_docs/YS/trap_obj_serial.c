---
---
---
name: trap_obj_serial
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
syscall 1, 144 ; trap_obj_serial (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_serial(YS::OBJ_125 *const this)
/----- (00000000004F7D58) ----------------------------------------------------
void __fastcall YS::trap_obj_serial(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  *(_DWORD *)args = YS::OBJ::get_serial((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4));
}
// 4F7D7C: variable 'back_chain' is possibly undefined
->
/----- (00000000004606E8) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_serial(YS::OBJ_125 *const this)
{
  __int64 v1; // r3
  __int64 result; // r3

  v1 = *(unsigned int *)&(*this)[2076];
  if ( (_DWORD)v1 )
    result = *(unsigned __int16 *)(v1 + 30);
  else
    result = 0LL;
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

