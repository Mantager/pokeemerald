ZhaounPath_MapScripts::
	.byte 0

ZhaounPath_EventScript_NoGrassKid::
	lock
	faceplayer
	msgbox ZhaounPath_Text_NoTallGrass, MSGBOX_DEFAULT
	release
	end

ZhaounPath_EventScript_Pengfei::
	trainerbattle_single TRAINER_PENGFEI, ZhaounPath_Text_PengfeiIntro, ZhaounPath_Text_PengfeiDefeat
	msgbox ZhaounPath_Text_PengfeiPostBattle, MSGBOX_AUTOCLOSE
	end

ZhaounPath_EventScript_Yao::
	trainerbattle_single TRAINER_YAO, ZhaounPath_Text_YaoIntro, ZhaounPath_Text_YaoDefeat
	msgbox ZhaounPath_Text_YaoPostBattle, MSGBOX_AUTOCLOSE
	end

ZhaounPath_Text_NoTallGrass:
	.string "There isn't much tall grass here…\n"
	.string "Did somebody cut it all down?$"

ZhaounPath_Text_PengfeiIntro:
	.string "I can't find any wild Pokémon…\n"
	.string "That really bugs me!$"

ZhaounPath_Text_PengfeiDefeat:
	.string "Losing bugs me too!$"

ZhaounPath_Text_PengfeiPostBattle:
	.string "There are exotic Bug-type Pokémon\n"
	.string "in this area, so I catch and\l"
	.string "sell them to researchers.$"

ZhaounPath_Text_YaoIntro:
	.string "Hey, stop there!\n"
	.string "I'm going to beat you!$"

ZhaounPath_Text_YaoDefeat:
	.string "No, it can't be!$"

ZhaounPath_Text_YaoPostBattle:
	.string "I'm trying to escape my dad.\n"
	.string "He wants me to be in charge of our\l"
	.string "potato farm, but I don't want to be!$"
