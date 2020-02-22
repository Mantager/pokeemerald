ColorRuinsRed_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ColorRuinsRed_1F_OnLoad
	.byte 0

ColorRuinsRed_1F_OnLoad::
	goto_if_unset FLAG_COLOR_RUINS_RED_PUZZLE, ColorRuinsRed_1F_EventScript_CloseDoor
	end

ColorRuinsRed_1F_EventScript_CloseDoor::
	setflag FLAG_HIDE_COLOR_RUINS_RED_STATUE
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_WallTop_Red, 1
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_WallBottom, 1
	special DrawWholeMapView
	end

ColorRuinsRed_1F_EventScript_OpenDoor::
	playse SE_BAN
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_DoorTopRed, 0
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_DoorBottom, 0
	special DrawWholeMapView
	releaseall
	end

ColorRuinsRed_1F_EventScript_StrangeWall::
	goto_if_unset FLAG_COLOR_RUINS_RED_PUZZLE, ColorRuinsRed_1F_EventScript_ShowStatue
	end

ColorRuinsRed_1F_EventScript_ShowStatue::
	lockall
	delay 20
	fadescreen 1
	clearflag FLAG_HIDE_COLOR_RUINS_RED_STATUE
	addobject 1
	fadescreen 0
	delay 20
	releaseall
	end

ColorRuinsRed_1F_EventScript_StatuePuzzle::
	compare VAR_COLOR_RUINS_RED_COUNTER, 0
	goto_if_eq ColorRuinsRed_1F_EventScript_FirstStepPuzzle
	compare VAR_COLOR_RUINS_RED_COUNTER, 1
	goto_if_eq ColorRuinsRed_1F_EventScript_SecondStepPuzzle
	compare VAR_COLOR_RUINS_RED_COUNTER, 2
	goto_if_eq ColorRuinsRed_1F_EventScript_ThirdStepPuzzle
	compare VAR_COLOR_RUINS_RED_COUNTER, 3
	goto_if_eq ColorRuinsRed_1F_EventScript_FourthStepPuzzle
	compare VAR_COLOR_RUINS_RED_COUNTER, 4
	goto_if_eq ColorRuinsRed_1F_EventScript_FifthStepPuzzle
	compare VAR_COLOR_RUINS_RED_COUNTER, 5
	goto_if_eq ColorRuinsRed_1F_EventScript_LastStepPuzzle
	end

ColorRuinsRed_1F_EventScript_FirstStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 9
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setobjectxy 1, 4, 11
	setvar VAR_COLOR_RUINS_RED_COUNTER, 1
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_SecondStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 5
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setobjectxy 1, 6, 7
	setvar VAR_COLOR_RUINS_RED_COUNTER, 2
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_ThirdStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 7
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setobjectxy 1, 6, 13
	setvar VAR_COLOR_RUINS_RED_COUNTER, 3
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_FourthStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 7
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setobjectxy 1, 12, 6
	setvar VAR_COLOR_RUINS_RED_COUNTER, 4
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_FifthStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 13
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setobjectxy 1, 8, 3
	setvar VAR_COLOR_RUINS_RED_COUNTER, 5
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_LastStepPuzzle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 9
	goto_if_ne ColorRuinsRed_1F_EventScript_ResetCounter
	fadescreen 1
	setflag FLAG_COLOR_RUINS_RED_PUZZLE
	setflag FLAG_HIDE_COLOR_RUINS_RED_STATUE
	removeobject 1
	fadescreen 0
	delay 20
	goto ColorRuinsRed_1F_EventScript_OpenDoor
	end

ColorRuinsRed_1F_EventScript_ResetCounter::
	fadescreen 1
	setobjectxy 1, 8, 9
	setvar VAR_COLOR_RUINS_RED_COUNTER, 0
	fadescreen 0
	releaseall
	end

ColorRuinsRed_1F_EventScript_GiveChaseTranslated::
	msgbox ColorRuinsRed_1F_Text_GiveChase, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsRed_1F_EventScript_KeepToRightTranslated::
	msgbox ColorRuinsRed_1F_Text_KeepToRight, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsRed_1F_EventScript_StrongOpponentsTranslated::
	msgbox ColorRuinsRed_1F_Text_StrongOpponents, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsRed_1F_EventScript_RighteousPathTranslated::
	msgbox ColorRuinsRed_1F_Text_RighteousPath, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsRed_1F_EventScript_CheapRiceTranslated::
	msgbox ColorRuinsRed_1F_Text_CheapRice, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsRed_1F_Text_GiveChase:
	.string "SUMMON THE STATUE AND GIVE CHASE.$"

ColorRuinsRed_1F_Text_KeepToRight:
	.string "KEEPING TO THE RIGHT IS THE KEY.$"

ColorRuinsRed_1F_Text_StrongOpponents:
	.string "STRONG OPPONENTS GIVE GREAT REWARDS.$"

ColorRuinsRed_1F_Text_RighteousPath:
	.string "I WANT TO WALK A RIGHTEOUS PATH.$"

ColorRuinsRed_1F_Text_CheapRice:
	.string "CHEAP RICE TODAY ONLY$"
