---
---
---
name: trap_friend_get_target_last_position
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
syscall 10, 8 ; trap_friend_get_target_last_position (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
const kn::FVector *__fastcall kn::Friend::getTargetLastPosition(kn::Friend_0 *const this)
/----- (00000000006115BC) ----------------------------------------------------
void __fastcall kn::trap_friend_get_target_last_position(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  const kn::FVector *v4; // r3
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
  v4 = kn::Friend::getTargetLastPosition((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&kn::resultVector, v4);
  *(_DWORD *)args = (unsigned int)&kn::resultVector;
}
// 6115E0: variable 'back_chain' is possibly undefined
// 3EAC580: using guessed type int kn::resultVector;
->
/----- (00000000000E54C8) ----------------------------------------------------
const kn::FVector *__fastcall kn::Friend::getTargetLastPosition(kn::Friend_0 *const this)
{
  return (const kn::FVector *)(unsigned int)((_DWORD)this + 3056);
}


---
---
---
appears in:

---
---
---
example usage from NA

