ColorRuinsYellow_B1F_MapScripts::
	.byte 0

ColorRuinsYellow_B1F_EventScript_GiantWall::
	lockall
	msgbox ColorRuinsYellow_B1F_Text_LotsOfWriting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	delay 15
	msgbox ColorRuinsYellow_B1F_Text_ColorRuinsHistory, MSGBOX_DEFAULT
	closemessage
	goto_if_set FLAG_COLOR_RUINS_YELLOW_WALL_READ, ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	compare VAR_STORY_EVENT_PROGRESS, 4
	call_if_eq ColorRuinsYellow_B1F_EventScript_SetVar
	setflag FLAG_COLOR_RUINS_YELLOW_WALL_READ
	releaseall
	end

ColorRuinsYellow_B1F_EventScript_DecidedNotToRead::
	releaseall
	end

ColorRuinsYellow_B1F_EventScript_SetVar::
	setvar VAR_STORY_EVENT_PROGRESS, 15
	return
