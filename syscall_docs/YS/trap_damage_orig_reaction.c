---
---
---
name: trap_damage_orig_reaction
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
syscall 2, 64 ; trap_damage_orig_reaction (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F406C) ----------------------------------------------------
void __fastcall YS::trap_damage_orig_reaction(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0x27LL);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

