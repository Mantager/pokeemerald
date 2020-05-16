ChoVillage_House5_MapScripts::
	.byte 0

ChoVillage_House5_EventScript_WhatIsStrength::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_ROCK_SMASH, ChoVillage_House5_EventScript_RockSmashLearned
	msgbox ChoVillage_House5_Text_WhatIsStrength, MSGBOX_DEFAULT
	call_if_set FLAG_COLOR_RUINS_YELLOW_WALL_READ, ChoVillage_House5_EventScript_TeachRockSmash
	release
	end

ChoVillage_House5_EventScript_TeachRockSmash::
	msgbox ChoVillage_House5_Text_TellAboutRuins, MSGBOX_DEFAULT
	closemessage
	msgbox ChoVillage_House5_Text_RockSmashTutorial, MSGBOX_DEFAULT
	closemessage
	delay 15
	applymovement 1, ChoVillage_House5_Movement_BlackBeltJump
	msgbox ChoVillage_House5_Text_Wacha, MSGBOX_DEFAULT
	waitmovement 0
	closemessage
	delay 8
	faceplayer
	msgbox ChoVillage_House5_Text_SeePrettyEasy, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_OBTAINED_ROCK_SMASH
	giveitem_std ITEM_POWER_GLOVE, 1
	msgbox ChoVillage_House5_Text_PowerGloveExplain, MSGBOX_DEFAULT
	return

ChoVillage_House5_EventScript_RockSmashLearned::
	msgbox ChoVillage_House5_Text_SmashRocksEverywhere, MSGBOX_DEFAULT
	release
	end

ChoVillage_House5_Movement_BlackBeltJump:
	jump_in_place_left
	delay_8
	step_end
