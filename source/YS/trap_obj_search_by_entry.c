/----- (0000000000501F64) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_entry(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByEntry(*(_DWORD *)&(*args)[4]);
}

