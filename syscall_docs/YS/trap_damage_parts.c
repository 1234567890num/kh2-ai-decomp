---
---
---
name: trap_damage_parts
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
push unk1 ; (unknown)  (pushFromFSp: 4)
syscall 2, 70 ; trap_damage_parts (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F41A4) ----------------------------------------------------
void __fastcall YS::trap_damage_parts(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0x25LL);
}

//BASIC
---
---
---
appears in:
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
---
---
---
example usage from obj\B_AL020\b_al.bdscript
L3611:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 4
 syscall 2, 70 ; trap_damage_parts (1 in, 1 out)
 dup 
 pushImm 0
 sub 
 jz L3649
 dup 
 pushImm 1
 sub 
 jz L3649
 jmp L3693
