---
---
---
name: trap_stputs
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
push unk1 ; (unknown)  (pushFromPAi: L10345 ; ___ai 'shock_down!!!' (L10345),L10382 ; ___ai 'lock_down!!!' (L10382),L10808 ; ___ai 'barrel_down!!!' (L10808),L11025 ; ___ai 'cap donald' (L11025),L11040 ; ___ai 'cap goofy' (L11040),...)
syscall 0, 26 ; trap_stputs (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6E68) ----------------------------------------------------
void __fastcall YS::trap_stputs(BD_VALUE_16 *args)
{
  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
    YS::DBGWIN::StatusPrintf(
      "[%s]%s\n",
      (const char *)*(unsigned int *)(unsigned int)YS::VM::Current,
      (const char *)(*args)[0]);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
---
---
---
appears in:
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
L1205:
 pushFromFSpVal 16
 jz L1215
 pushFromPAi L28319 ; ___ai 'cap donald' (L28319)
 syscall 0, 26 ; trap_stputs (1 in, 0 out)
 jmp L1215
