---
---
---
name: trap_obj_hook_stop
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
syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PARTY::hook(YS::PARTY_63 *const this, YS::VM_332 *vm)
/----- (00000000004FD3EC) ----------------------------------------------------
void __fastcall YS::trap_obj_hook_stop(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

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
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  YS::PARTY::hook((YS::PARTY_63 *const)v3, 0LL);
}
// 4FD40C: variable 'back_chain' is possibly undefined
->
/----- (0000000000478424) ----------------------------------------------------
void __fastcall YS::PARTY::hook(YS::PARTY_63 *const this, YS::VM_332 *vm)
{
  int v3; // r30
  unsigned int *v4; // r31

  v3 = (int)vm;
  v4 = (unsigned int *)*(unsigned int *)&(*this)[2796];
  if ( (_DWORD)v4 )
  {
    YS::VM::~VM((YS::VM_377 *const)*(unsigned int *)&(*this)[2796]);
    YS::VM::operator delete(v4);
  }
  *(_DWORD *)&(*this)[2796] = v3;
}


---
---
---
appears in:

---
---
---
example usage from NA

