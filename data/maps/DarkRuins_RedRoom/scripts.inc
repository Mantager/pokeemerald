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
