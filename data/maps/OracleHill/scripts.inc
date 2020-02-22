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

OracleHill_Text_XiuIntro:
	.string "Check out my adorable little\n"
	.string "Pokémon friends!$"

OracleHill_Text_XiuDefeat:
	.string "Oh, I lost.$"

OracleHill_Text_XiuPostBattle:
	.string "When I get older, I want to\n"
	.string "become the Oracle's apprentice.$"

OracleHill_Text_OldWoman:
	.string "Fu fu fu fu…\p"
	.string "This path leads to the Oracle's cave.\p"
	.string "But I'm sure you knew that, didn't you?$"

OracleHill_Text_CaveRoadblock:
	.string "I'm sorry, but the Oracle is at\n"
	.string "a ceremony right now…\p"
	.string "He will be back shortly, but surely\n"
	.string "you have errands to run in the\l"
	.string "meantime, hmm?$"
