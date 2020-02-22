ColorRuinsBlue_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ColorRuinsBlue_1F_OnLoad
	.byte 0

ColorRuinsBlue_1F_OnLoad::
	goto_if_unset FLAG_COLOR_RUINS_BLUE_PUZZLE, ColorRuinsBlue_1F_EventScript_CloseDoor
	end

ColorRuinsBlue_1F_EventScript_CloseDoor::
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_WallTop_Blue, 1
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_WallBottom, 1
	special DrawWholeMapView
	end

ColorRuinsBlue_1F_EventScript_OpenDoor::
	playse SE_BAN
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_DoorTopBlue, 0
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_DoorBottom, 0
	special DrawWholeMapView
	releaseall
	end

ColorRuinsBlue_1F_EventScript_RainMaker::
	msgbox ColorRuinsBlue_1F_Text_TouchedWall, MSGBOX_DEFAULT
	closemessage
	goto_if_unset FLAG_COLOR_RUINS_BLUE_PUZZLE, ColorRuinsBlue_1F_EventScript_RainCreate
	delay 30
	msgbox ColorRuinsBlue_1F_Text_NothingHappened, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_RainCreate::
	setweather WEATHER_RAIN
	doweather
	delay 20
	setflag FLAG_COLOR_RUINS_BLUE_PUZZLE
	goto ColorRuinsBlue_1F_EventScript_OpenDoor

ColorRuinsBlue_1F_EventScript_TriggerRainTranslated::
	msgbox ColorRuinsBlue_1F_Text_TriggerRain, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_TiredMindsTranslated::
	msgbox ColorRuinsBlue_1F_Text_TiredMinds, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_WhitePearlTranslated::
	msgbox ColorRuinsBlue_1F_Text_WhitePearls, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_HotSpringTranslated::
	msgbox ColorRuinsBlue_1F_Text_HotSpring, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_BambooCropTranslated::
	msgbox ColorRuinsBlue_1F_Text_BambooCrop, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_ShadowsDanceTranslated::
	msgbox ColorRuinsBlue_1F_Text_ShadowsDance, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_EventScript_PerfectPetalsTranslated::
	msgbox ColorRuinsBlue_1F_Text_PerfectPetals, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsBlue_1F_Text_TouchedWall:
	.string "{PLAYER} touched the wall…$"

ColorRuinsBlue_1F_Text_NothingHappened:
	.string "But nothing happened.$"

ColorRuinsBlue_1F_Text_TriggerRain:
	.string "FIND THE WALL AND TRIGGER THE RAIN$"

ColorRuinsBlue_1F_Text_TiredMinds:
	.string "TIRED MINDS THINK HARD$"

ColorRuinsBlue_1F_Text_WhitePearls:
	.string "SOMEONE SAID WHITE PEARLS LIE IN THE RIVER$"

ColorRuinsBlue_1F_Text_HotSpring:
	.string "THERE IS A HOT SPRING NEAR HERE$"

ColorRuinsBlue_1F_Text_BambooCrop:
	.string "MY BAMBOO CROP HAS BEEN BURNT DOWN$"

ColorRuinsBlue_1F_Text_ShadowsDance:
	.string "SHADOWS DANCE IN THE SKY$"

ColorRuinsBlue_1F_Text_PerfectPetals:
	.string "PERFECT PETALS ARE HARD TO COME BY$"
