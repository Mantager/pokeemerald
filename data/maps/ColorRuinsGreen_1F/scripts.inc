ColorRuinsGreen_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ColorRuinsGreen_1F_OnLoad
	.byte 0

ColorRuinsGreen_1F_OnLoad::
	goto_if_unset FLAG_COLOR_RUINS_GREEN_PUZZLE, ColorRuinsGreen_1F_EventScript_CloseDoor
	end

ColorRuinsGreen_1F_EventScript_FirstStepPuzzle::
	lockall
	compare VAR_COLOR_RUINS_GREEN_COUNTER, 0
	goto_if_ne ColorRuinsGreen_1F_EventScript_ResetCounter
	setvar VAR_COLOR_RUINS_GREEN_COUNTER, 1
	releaseall
	end

ColorRuinsGreen_1F_EventScript_SecondStepPuzzle::
	lockall
	compare VAR_COLOR_RUINS_GREEN_COUNTER, 1
	goto_if_ne ColorRuinsGreen_1F_EventScript_ResetCounter
	setvar VAR_COLOR_RUINS_GREEN_COUNTER, 2
	releaseall
	end

ColorRuinsGreen_1F_EventScript_ThirdStepPuzzle::
	lockall
	compare VAR_COLOR_RUINS_GREEN_COUNTER, 2
	goto_if_ne ColorRuinsGreen_1F_EventScript_ResetCounter
	setvar VAR_COLOR_RUINS_GREEN_COUNTER, 3
	releaseall
	end

ColorRuinsGreen_1F_EventScript_LastStepPuzzle::
	lockall
	compare VAR_COLOR_RUINS_GREEN_COUNTER, 3
	goto_if_ne ColorRuinsGreen_1F_EventScript_ResetCounter
	goto_if_set FLAG_COLOR_RUINS_GREEN_PUZZLE, ColorRuinsGreen_1F_EventScript_ResetCounter
	setvar VAR_STORY_EVENT_PROGRESS, 6
	setflag FLAG_COLOR_RUINS_GREEN_PUZZLE
	delay 20
	goto ColorRuinsGreen_1F_EventScript_OpenDoor
	releaseall
	end

ColorRuinsGreen_1F_EventScript_OpenDoor::
	playse SE_BAN
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_DoorTopGreen, 0
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_DoorBottom, 0
	special DrawWholeMapView
	releaseall
	end

ColorRuinsGreen_1F_EventScript_ResetCounter::
	setvar VAR_COLOR_RUINS_GREEN_COUNTER, 0
	releaseall
	end

ColorRuinsGreen_1F_EventScript_CloseDoor::
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_WallTop_Green, 1
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_WallBottom, 1
	special DrawWholeMapView
	end

ColorRuinsGreen_1F_EventScript_TouchCornersTranslated::
	msgbox ColorRuinsGreen_1F_Text_TouchCorners, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_BallsFromNuggetsTranslated::
	msgbox ColorRuinsGreen_1F_Text_BallsFromNuggets, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_CarnivineBestTranslated::
	msgbox ColorRuinsGreen_1F_Text_CarnivineBest, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_MushroomsDustTranslated::
	msgbox ColorRuinsGreen_1F_Text_MushroomsDust, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_QinqinWasHereTranslated::
	msgbox ColorRuinsGreen_1F_Text_QinqinWasHere, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_SunStoneEvolvedTranslated::
	msgbox ColorRuinsGreen_1F_Text_SunStoneEvolved, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_UniteTheCountryTranslated::
	msgbox ColorRuinsGreen_1F_Text_UniteTheCountry, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_SwimmingInTheMarshTranslated::
	msgbox ColorRuinsGreen_1F_Text_SwimmingInTheMarsh, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_AnotherColorRuinsTranslated::
	msgbox ColorRuinsGreen_1F_Text_AnotherColorRuins, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_PureHeartsTranslated::
	msgbox ColorRuinsGreen_1F_Text_PureHearts, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_1F_EventScript_MoneyIsNotAllTranslated::
	msgbox ColorRuinsGreen_1F_Text_MoneyIsNotAll, MSGBOX_DEFAULT
	closemessage
	end
