Common_EventScript_PkmnCenterMainClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
    compare VAR_PKMN_CENTER_MAIN_MART_STATE, 0
    call_if_eq Common_EventScript_PkmnCenterMainClerk_Initial
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Common_EventScript_PkmnCenterMainClerk_Initial::
    pokemart PkmnCenter_Mart_MainInitial
    return

	.align 2
PkmnCenter_Mart_MainInitial:
	.2byte ITEM_POKE_BALL
    .2byte ITEM_POTION
    .2byte ITEM_PARALYZE_HEAL
    .2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE
	release
	end
