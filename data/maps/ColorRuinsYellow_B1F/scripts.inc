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

ColorRuinsYellow_B1F_Text_LotsOfWriting:
	.string "This wall is filled with writing…\n"
	.string "Would you like to read it?$"

ColorRuinsYellow_B1F_Text_ColorRuinsHistory:
	.string "WE CARVED THESE CAVES INTO RUINS.\n"
	.string "IT TOOK MANY YEARS.\p"
	.string "BLOOD, SWEAT AND TEARS WERE SHED\n"
	.string "DURING THE CREATION OF THIS PLACE.\p"
	.string "THE PURPOSE OF THESE COLOR RUINS\n"
	.string "IS TO STORE INFORMATION FOR\l"
	.string "OURSELVES AND OUR CHILDREN.\p"
	.string "IMPORTANT EVENTS ARE ETERNALLY\n"
	.string "ETCHED INTO HARD STONE.\p"
	.string "FROM BIRTH RECORDS TO RANDOM\n"
	.string "MUSINGS, REMEMBERANCE IS VITAL.$"
