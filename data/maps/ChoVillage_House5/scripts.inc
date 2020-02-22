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
	
ChoVillage_House5_Text_WhatIsStrength:
	.string "What is strength?\p"
	.string "Obviously, it's the ability\n"
	.string "to clear obstacles in your way!\p"
	.string "Have you ever noticed rugged\n"
	.string "rocks in the field?\p"
	.string "I'll teach you how to smash those\n"
	.string "rocks if you tell me what lies inside\l"
	.string "the yellow Color Ruins!\p"
	.string "Please!\n"
	.string "I've always wanted to know!$"

ChoVillage_House5_Text_TellAboutRuins:
	.string "What?!\p"
	.string "There's a secret cave behind the\n"
	.string "walls of the yellow Color Ruins?!\p"
	.string "I thought that there would totally\n"
	.string "be a pot of gold or something!\p"
	.string "Well, whatever.\n"
	.string "You came to learn how to smash rocks,\l"
	.string "so I'll teach you the art of Rock Smash!$"

ChoVillage_House5_Text_RockSmashTutorial:
	.string "Rock Smash is actually pretty simple.\p"
	.string "Tense your muscles, and then…$"

ChoVillage_House5_Text_Wacha:
	.string "Wachaaaa!$"

ChoVillage_House5_Text_SeePrettyEasy:
	.string "See?\n"
	.string "Pretty easy, right?\p"
	.string "It might be difficult to hit that\n"
	.string "hard though, so take this!$"

ChoVillage_House5_Text_PowerGloveExplain:
	.string "That's a glove I used whilst I was\n"
	.string "first learning how to Rock Smash.\p"
	.string "Any rugged rock should crumble if\n"
	.string "you wear that Power Glove.$"

ChoVillage_House5_Text_SmashRocksEverywhere:
	.string "Smashing rocks is really fun!\n"
	.string "Try it everywhere you go!$"
