StargazePoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StargazePoint_OnTransition
	.byte 0

StargazePoint_OnTransition::
	compare VAR_STORY_INTRO_STATE, 4
	call_if_lt StargazePoint_EventScript_HideMantleRival
	compare VAR_STORY_INTRO_STATE, 5
	call_if_gt StargazePoint_EventScript_HideMantleRival
	end

StargazePoint_EventScript_HideMantleRival::
	setobjectxyperm 2, 17, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

StargazePoint_EventScript_FlowerShopSign::
	msgbox StargazePoint_Text_FlowerShopSign, MSGBOX_SIGN
	end

StargazePoint_EventScript_StarterChooseTest::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setvar VAR_STORY_INTRO_STATE, 4
	special ChooseStarter
	waitstate
	special HealPlayerParty
	fadescreen 1
	removeobject VAR_LAST_TALKED
	fadescreen 0
	release
	end

StargazePoint_Text_FlowerShopSign:
	.string "Stargaze Florists\n"
	.string "Every flower tells a story.$"
