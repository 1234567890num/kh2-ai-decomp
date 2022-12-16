---
---
---
name: trap_tutorial_is_open
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
syscall 1, 301 ; trap_tutorial_is_open (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::WINDOW_SYSTEM_TUTORIAL::IsOpen()
/----- (000000000050B868) ----------------------------------------------------
void __fastcall YS::trap_tutorial_is_open(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::WINDOW_SYSTEM_TUTORIAL::IsOpen();
}
->
/----- (00000000004BDD40) ----------------------------------------------------
bool __cdecl YS::WINDOW_SYSTEM_TUTORIAL::IsOpen()
{
  return YS::IsSystemTutorialWindowOpen;
}
// 7FEC3A: using guessed type char YS::IsSystemTutorialWindowOpen;


---
---
---
appears in:
ard\eh18\full.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX210_EH\b_ex.bdscript ((M) Luxord’s card (time?) (EX))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX250\b_ex.bdscript ((?) Xemna’s dragon’s arms (Anchored))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX280\b_ex.bdscript ((F) Xemnas armor - Saïx’s claymore)
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
obj\B_EX300\b_ex.bdscript ((?) Xemnas armor - ???)
obj\B_EX310\b_ex.bdscript ((F) Xemnas armor - Xaldin’s spears)
obj\B_EX320\b_ex.bdscript ((F) Xemnas armor - Axel’s chakrams)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\B_NM110_R_ARM\b_nm.bdscript ((B) The Experiment (Right Hand))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\B_TR020\b_tr.bdscript ((B) MCP)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL030\f_al.bdscript ((F) ??? (AL))
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_AL080\f_al.bdscript ((F) ??? (AL))
obj\F_AL090_01\f_al.bdscript ((F) Falling pillar 1 (AL))
obj\F_AL090_02\f_al.bdscript ((F) Falling pillar 2 (AL))
obj\F_AL090_03\f_al.bdscript ((F) Falling pillar 3 (AL))
obj\F_AL100\f_al.bdscript ((F) Sandstorm (AL))
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_AL170\f_al.bdscript ((F) Tip of tower (AL))
obj\F_BB000\f_bb.bdscript ((F) ??? (BB))
obj\F_BB010\f_bb.bdscript ((F) ??? (BB))
obj\F_BB020\f_bb.bdscript ((F) ??? (BB))
obj\F_BB030\f_bb.bdscript ((F) ??? (BB))
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_BB110\f_bb.bdscript ((F) Minigame’s crank (BB))
obj\F_BB120\f_bb.bdscript ((F) Minigame’s box (BB))
obj\F_BB130\f_bb.bdscript ((F) ??? - Minigame related? (BB))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_CA020\f_ca.bdscript ((F) Isla de Muerta’s chest’s lid (CA))
obj\F_CA030_DARK\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA030_LIGHT\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA040\f_ca.bdscript ((F) Anchor (CA))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
obj\F_EH000\f_eh.bdscript ((F) Crooked Ascension room (EH))
obj\F_EH010\f_eh.bdscript ((F) Twilight’s View room (EH))
obj\F_EH020\f_eh.bdscript ((F) Big vertical white line (EH))
obj\F_EH030\f_eh.bdscript ((F) Crooked Ascension room’s horizontal columns (EH))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_EX210\f_ex.bdscript ((F) Vexen’s Absent Silhouette portal (can’t be used))
obj\F_EX220\f_ex.bdscript ((F) Lexeus’ Absent Silhouette portal (can’t be used))
obj\F_EX230\f_ex.bdscript ((F) Zexion’s Absent Silhouette portal (can’t be used))
obj\F_EX240\f_ex.bdscript ((F) Marluxia’s Absent Silhouette portal (can’t be used))
obj\F_EX250\f_ex.bdscript ((F) Larxene’s Absent Silhouette portal (can’t be used))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HB030\f_hb.bdscript ((F) ??? (HB))
obj\F_HB040\f_hb.bdscript ((F) CoR’s orb (red) (HB))
obj\F_HB040_BL\f_hb.bdscript ((F) CoR’s orb (blue) (HB))
obj\F_HB040_WH\f_hb.bdscript ((F) CoR’s orb (white) (HB))
obj\F_HB040_YE\f_hb.bdscript ((F) CoR’s orb (yellow) (HB))
obj\F_HB050\f_hb.bdscript ((F) CoR’s pushing pillar (HB))
obj\F_HB050_23\f_hb.bdscript ((F) CoR’s pushing pillar 2 (HB))
obj\F_HB060\f_hb.bdscript ((F) CoR’s rising pillar (HB))
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_HB110\f_hb.bdscript ((F) ??? (HB))
obj\F_HB120\f_hb.bdscript ((F) ??? (HB))
obj\F_HB130\f_hb.bdscript ((F) ??? (HB))
obj\F_HB140\f_hb.bdscript ((F) Cavern of Remembrance big pushing block (HB))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_HE020_A1\f_he.bdscript ((F) Rock 1 (grey) (HE))
obj\F_HE020_A2\f_he.bdscript ((F) Rock 2 (grey) (HE))
obj\F_HE020_B1\f_he.bdscript ((F) Rock 1 (green) (HE))
obj\F_HE020_B2\f_he.bdscript ((F) Rock 2 (green) (HE))
obj\F_HE020_C1\f_he.bdscript ((F) Rock 1 (blue) (HE))
obj\F_HE020_C2\f_he.bdscript ((F) Rock 2 (blue) (HE))
obj\F_HE020_PETE\f_he.bdscript ((F) Falling boulder (Pete battle) (HE))
obj\F_HE020_PO\f_he.bdscript ((F) Falling crystal (PO))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_HE110\f_he.bdscript ((F) Mist Sphere (HE))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_MU030\f_mu.bdscript ((F) ??? (MU))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM000\f_nm.bdscript ((F) Guillotine blade (NM))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM030\f_nm.bdscript ((F) Swinging gates (NM))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_NM090\f_nm.bdscript ((F) Oogie’s punch (NM))
obj\F_NM120\f_nm.bdscript ((F) Oogie’s spikes (NM))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_NM140\f_nm.bdscript ((F) ??? (NM))
obj\F_NM150\f_nm.bdscript ((F) ??? (NM))
obj\F_NM160\f_nm.bdscript ((F) Lever (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR080\tr_w.bdscript ((F) Light cycle’s wall (TR))
obj\F_TR090\tr_w.bdscript ((F) Light cycle’s wall 2 (TR))
obj\F_TR100\tr_w.bdscript ((F) Light cycle’s wall 3 (single panel) (TR))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT030\f_tt.bdscript ((F) Cargo Climb’s cart (TT))
obj\F_TT030_ETC\f_tt.bdscript ((F) Cargo Climb’s cart (ETC) (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\F_TT100\f_tt.bdscript ((F) Trashcan (TT))
obj\F_TT100_FREE\f_tt.bdscript ((F) Trashcan (FREE) (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT110_FREE\f_tt.bdscript ((F) Dog’s sack (FREE) (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI060_PETE\f_wi.bdscript ((F) Cannon tower (PETE) (WI))
obj\F_WI070\f_wi.bdscript ((F) Toy box (WI))
obj\F_WI080\f_wi.bdscript ((F) Box with stuff (WI))
obj\F_WI090\f_wi.bdscript ((F) Sofa 1 (WI))
obj\F_WI100\f_wi.bdscript ((F) Chair 1 (WI))
obj\F_WI110\f_wi.bdscript ((F) Chair 2 (WI))
obj\F_WI120\f_wi.bdscript ((F) Piano (WI))
obj\F_WI130\f_wi.bdscript ((F) Wardrobe 1 (WI))
obj\F_WI140\f_wi.bdscript ((F) Wardrobe 2 (WI))
obj\F_WI150\f_wi.bdscript ((F) Wardrobe 3 (WI))
obj\F_WI160\f_wi.bdscript ((F) Ceiling lamp (WI))
obj\F_WI170\f_wi.bdscript ((F) Fireplace (WI))
obj\F_WI180\f_wi.bdscript ((F) Chimney (WI))
obj\F_WI190\f_wi.bdscript ((F) Train toy (WI))
obj\F_WI200\f_wi.bdscript ((F) Stool (WI))
obj\F_WI210\f_wi.bdscript ((F) Dog bed (WI))
obj\F_WI220\f_wi.bdscript ((F) Sofa 2 (WI))
obj\F_WI230\f_wi.bdscript ((F) Wall deer trophy (WI))
obj\F_WI240\f_wi.bdscript ((F) Wall lamp (WI))
obj\F_WI250\f_wi.bdscript ((F) Christmas tree (WI))
obj\F_WI260\f_wi.bdscript ((F) Drawer (WI))
obj\F_WI270\f_wi.bdscript ((F) Wardrobe 4 (WI))
obj\F_WI280\f_wi.bdscript ((F) Wardrobe 5 (WI))
obj\F_WI290\f_wi.bdscript ((F) Painting (WI))
obj\F_WI300\f_wi.bdscript ((F) Shelf (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\F_WI380\f_wi.bdscript ((F) Steamboat with Corner stone in cage (WI))
obj\F_WI380_RTN\f_wi.bdscript ((F) Steamboat with Corner stone in cage (RTN) (WI))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\G_EX250_EH\g_ex.bdscript ()
obj\M_AL020_FIRE\m_al.bdscript ((M) Fiery Globe)
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_FIRE_RAW\m_al.bdscript ((M) Fiery Globe (RAW))
obj\M_AL020_ICEE\m_al.bdscript ((M) Icy Cube)
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
obj\M_AL020_ICEE_RAW\m_al.bdscript ((M) Icy Cube (RAW))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\M_EX010\m_ex.bdscript ((M) Soldier)
obj\M_EX010_NM\m_ex.bdscript ((M) Soldier (NM))
obj\M_EX010_TR\m_ex.bdscript ((M) Soldier (TR))
obj\M_EX010_WI\m_ex.bdscript ((M) Soldier (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX570\m_ex.bdscript ((M) Assault Rider)
obj\M_EX580\m_ex.bdscript ((M) Nightwalker)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX600_LC\m_ex.bdscript ((M) Magnum Loader (white))
obj\M_EX600_LC_ATK\m_ex.bdscript ((M) Magnum Loader (blue))
obj\M_EX600_LC_CHG\m_ex.bdscript ((M) Magnum Loader (yellow))
obj\M_EX600_LC_GRD\m_ex.bdscript ((M) Magnum Loader (green))
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI\m_ex.bdscript ((M) Rapid Thruster (WI))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX790\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_CHRISTMAS\m_ex.bdscript ((M) Toy Soldier)
obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript ((M) Toy Soldier (NM))
obj\M_EX790_HALLOWEEN\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript ((M) Graveyard (NM))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX870\m_ex.bdscript ((M) Sorcerer v2 - Cubes?)
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX960\m_ex.bdscript ((M) Sorcerer)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM010_BTL\n_cm.bdscript ((N) Larxene (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX650_BTL1\tt_a.bdscript ((N) Villager (boy) (BTL1) (EX))
obj\N_EX650_BTL10\tt_a.bdscript ((N) Villager (boy) (BTL10) (EX))
obj\N_EX650_BTL2\tt_a.bdscript ((N) Villager (boy) (BTL2) (EX))
obj\N_EX670_BTL1\tt_a.bdscript ((N) Villager (girl) (BTL1) (EX))
obj\N_EX670_BTL10\tt_a.bdscript ((N) Villager (girl) (BTL10) (EX))
obj\N_EX670_BTL2\tt_a.bdscript ((N) Villager (girl) (BTL2) (EX))
obj\N_EX680_BTL1\tt_a.bdscript ((N) Villager (man) (BTL1) (EX))
obj\N_EX680_BTL10\tt_a.bdscript ((N) Villager (man) (BTL10) (EX))
obj\N_EX680_BTL2\tt_a.bdscript ((N) Villager (man) (BTL2) (EX))
obj\N_EX690_BTL1\tt_a.bdscript ((N) Villager (woman) (BTL1) (EX))
obj\N_EX690_BTL10\tt_a.bdscript ((N) Villager (woman) (BTL10) (EX))
obj\N_EX690_BTL2\tt_a.bdscript ((N) Villager (woman) (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB570_BOSS\n_hb.bdscript ((N) Tifa (BOSS) (HB))
obj\N_HB570_BTL\n_hb.bdscript ((N) Tifa (BTL) (HB))
obj\N_HB570_BTL2\n_hb.bdscript ((N) Tifa (BTL2) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\N_HB580_BTL2\n_hb.bdscript ((N) Yuffie (BTL2) (HB))
obj\N_HB590_BTL\n_hb.bdscript ((N) Sephiroth (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_HE040_BTL\n_he.bdscript ((N) Pegasus (BTL) (HE))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_2\n_nm.bdscript ((N) Lock (BTL2) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_2\n_nm.bdscript ((N) Shock (BTL2) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_2\n_nm.bdscript ((N) Barrel (BTL2) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_BB000\p_bb.bdscript ((P) Beast)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EH000_SIDECAR\p_eh.bdscript ((P) Riku riding sidecar)
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
obj\P_EX230\p_ex.bdscript ((P) Mickey (with Keyblade))
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from ard\eh18\full.bdscript
L29:
 syscall 1, 301 ; trap_tutorial_is_open (0 in, 1 out)
 jz L36
 halt 
 jmp L29
