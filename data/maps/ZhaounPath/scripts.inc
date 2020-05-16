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
