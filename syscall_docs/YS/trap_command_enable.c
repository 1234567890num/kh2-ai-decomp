---
---
---
name: trap_command_enable
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
syscall 1, 334 ; trap_command_enable (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::INDICATION::Enable()
/----- (0000000000508760) ----------------------------------------------------
void __fastcall YS::trap_command_enable(BD_VALUE_21 *args)
{
  YS::INDICATION::enable((YS::INDICATION_3 *const)*((unsigned int *)YS::PLAYER::Player + 719));
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (00000000004EA14C) ----------------------------------------------------
void __cdecl YS::INDICATION::Enable()
{
  if ( YS::Current )
    YS::INDICATION::enable((YS::INDICATION_3 *const)(unsigned int)YS::Current);
}
// 7FED74: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

