---
---
---
name: trap_obj_start_mpdrive
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
syscall 1, 353 ; trap_obj_start_mpdrive (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::start_mpdrive(YS::BTLOBJ *const this, double ratio)
/----- (0000000000501DE0) ----------------------------------------------------
void __fastcall YS::trap_obj_start_mpdrive(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::start_mpdrive((YS::BTLOBJ *const)v4, *(float *)&(*args)[4]);
}
// 501E04: variable 'back_chain' is possibly undefined
->
/----- (0000000000413B20) ----------------------------------------------------
void __fastcall YS::BTLOBJ::start_mpdrive(YS::BTLOBJ *const this, double ratio)
{
  YS::SHEET::mpdrive(
    *(unsigned int *)&this->baseclass_0[1164],
    (float)(*(float *)(*(unsigned int *)&this->baseclass_0[300] + 0x1CLL) * (float)ratio));
}


---
---
---
appears in:

---
---
---
example usage from NA

