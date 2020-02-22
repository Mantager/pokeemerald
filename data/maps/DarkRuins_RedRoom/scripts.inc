DarkRuins_RedRoom_MapScripts::
	.byte 0

DarkRuins_RedRoom_EventScript_RoomGuide::
	lock
	msgbox DarkRuins_RedRoom_Text_RoomGuide, MSGBOX_DEFAULT
	release
	end

DarkRuins_RedRoom_EventScript_Baozhai::
	lock
	faceplayer
	goto_if_set FLAG_DARK_RUINS_RED_COMPLETE, DarkRuins_RedRoom_EventScript_BaozhaiPostBattle
	msgbox DarkRuins_RedRoom_Text_Congratulations, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BAOZHAI, DarkRuins_RedRoom_Text_BaozhaiDefeat
	msgbox DarkRuins_RedRoom_Text_BaozhaiPostBattle, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_FANFA5
	msgbox DarkRuins_YellowRoom_Text_PuzzleComplete, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	addvar VAR_DARK_RUINS_ROOMS_COMPLETED, 1
	setflag FLAG_DARK_RUINS_RED_COMPLETE
	release
	end

DarkRuins_RedRoom_EventScript_BaozhaiPostBattle::
	msgbox DarkRuins_RedRoom_Text_BaozhaiAfter, MSGBOX_DEFAULT
	release
	end

DarkRuins_RedRoom_Text_RoomGuide:
	.string "These boulders are replicas, so\n"
	.string "you should be able to move them\l"
	.string "with ease.$"

DarkRuins_RedRoom_Text_Congratulations:
	.string "You pushed your way to victory!\n"
	.string "Congratulations!\p"
	.string "But now, you need to push past\n"
	.string "my powerful Pokémon team!$"

DarkRuins_RedRoom_Text_BaozhaiDefeat:
	.string "I hope I could push you to your\n"
	.string "limits!$"

DarkRuins_RedRoom_Text_BaozhaiPostBattle:
	.string "Okay, good job.\n"
	.string "You're tough!$"

DarkRuins_RedRoom_Text_BaozhaiAfter:
	.string "Real boulders aren't as easy to\n"
	.string "push as these replicas.$"
