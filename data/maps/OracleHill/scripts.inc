OracleHill_MapScripts::
	.byte 0

OracleHill_EventScript_Xiu::
	trainerbattle_single TRAINER_XIU, OracleHill_Text_XiuIntro, OracleHill_Text_XiuDefeat
	msgbox OracleHill_Text_XiuPostBattle, MSGBOX_AUTOCLOSE
	end

OracleHill_EventScript_OldWoman::
	lock
	faceplayer
	msgbox OracleHill_Text_OldWoman, MSGBOX_DEFAULT
	release
	end

OracleHill_EventScript_CaveRoadblock::
	lock
	faceplayer
	msgbox OracleHill_Text_CaveRoadblock, MSGBOX_DEFAULT
	release
	end
