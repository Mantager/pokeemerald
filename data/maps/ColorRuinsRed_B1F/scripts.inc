ColorRuinsRed_B1F_MapScripts::
	.byte 0

ColorRuinsRed_B1F_EventScript_GiantWall::
	lockall
	msgbox ColorRuinsYellow_B1F_Text_LotsOfWriting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	delay 15
	msgbox ColorRuinsRed_B1F_Text_SealingTheRuins, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_COLOR_RUINS_RED_WALL_READ
	releaseall
	end
