ColorRuinsYellow_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ColorRuinsYellow_1F_OnLoad
	.byte 0

ColorRuinsYellow_1F_OnLoad::
	goto_if_unset FLAG_COLOR_RUINS_YELLOW_PUZZLE, ColorRuinsYellow_1F_EventScript_CloseDoor
	end

ColorRuinsYellow_1F_EventScript_CloseBrailleMsg::
	waitbuttonpress
	closebraillemessage
	releaseall
	end

ColorRuinsYellow_1F_EventScript_Pillar1::
	goto_if_unset FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_ResetCounter
	compare VAR_COLOR_RUINS_YELLOW_COUNTER, 0
	goto_if_ne ColorRuinsYellow_1F_EventScript_ResetCounter
	setvar VAR_COLOR_RUINS_YELLOW_COUNTER, 1
	playse SE_SEIKAI
	end

ColorRuinsYellow_1F_EventScript_Pillar2::
	goto_if_unset FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_ResetCounter
	compare VAR_COLOR_RUINS_YELLOW_COUNTER, 1
	goto_if_ne ColorRuinsYellow_1F_EventScript_ResetCounter
	setvar VAR_COLOR_RUINS_YELLOW_COUNTER, 2
	playse SE_SEIKAI
	end

ColorRuinsYellow_1F_EventScript_Pillar3::
	goto_if_unset FLAG_COLOR_RUINS_YELLOW_PUZZLE, ColorRuinsYellow_1F_EventScript_Pillar3_Next
	end

ColorRuinsYellow_1F_EventScript_Pillar3_Next::
	lockall
	goto_if_unset FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_ResetCounter
	compare VAR_COLOR_RUINS_YELLOW_COUNTER, 2
	goto_if_ne ColorRuinsYellow_1F_EventScript_ResetCounter
	setflag FLAG_COLOR_RUINS_YELLOW_PUZZLE
	delay 20
	goto ColorRuinsYellow_1F_EventScript_OpenDoor
	releaseall
	end

ColorRuinsYellow_1F_EventScript_OpenDoor::
	playse SE_BAN
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_DoorTopYellow, 0
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_DoorBottom, 0
	special DrawWholeMapView
	releaseall
	end

ColorRuinsYellow_1F_EventScript_CloseDoor::
	setmetatile 8, 0, METATILE_ColorRuinsGeneric_WallTop_Yellow, 1
	setmetatile 8, 1, METATILE_ColorRuinsGeneric_WallBottom, 1
	special DrawWholeMapView
	end

ColorRuinsYellow_1F_EventScript_ResetCounter::
	setvar VAR_COLOR_RUINS_YELLOW_COUNTER, 0
	playse SE_HAZURE
	end

ColorRuinsYellow_1F_EventScript_TouchPillars::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_TouchPillarsTranslated
	braillemessage ColorRuinsYellow_1F_Braille_TouchPillars
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_TouchPillarsTranslated::
	msgbox ColorRuinsYellow_1F_Text_TouchPillars, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_SacredStones::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_SacredStonesTranslated
	braillemessage ColorRuinsYellow_1F_Braille_SacredStones
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_SacredStonesTranslated::
	msgbox ColorRuinsYellow_1F_Text_SacredStones, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_MazhouTei::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_MazhouTeiTranslated
	braillemessage ColorRuinsYellow_1F_Braille_MazhouTei
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_MazhouTeiTranslated::
	msgbox ColorRuinsYellow_1F_Text_MazhouTei, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_GoldenCups::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_GoldenCupsTranslated
	braillemessage ColorRuinsYellow_1F_Braille_GoldenCups
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_GoldenCupsTranslated::
	msgbox ColorRuinsYellow_1F_Text_GoldenCups, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_VermillionBird::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_VermillionBirdTranslated
	braillemessage ColorRuinsYellow_1F_Braille_VermillionBird
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_VermillionBirdTranslated::
	msgbox ColorRuinsYellow_1F_Text_VermillionBird, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_TalkingToPeople::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_TalkingToPeopleTranslated
	braillemessage ColorRuinsYellow_1F_Braille_TalkingToPeople
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_TalkingToPeopleTranslated::
	msgbox ColorRuinsYellow_1F_Text_TalkingToPeople, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_CurseTheEmperor::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_CurseTheEmperorTranslated
	braillemessage ColorRuinsYellow_1F_Braille_CurseTheEmperor
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_CurseTheEmperorTranslated::
	msgbox ColorRuinsYellow_1F_Text_CurseTheEmperor, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_EventScript_PurpleTrees::
	lockall
	goto_if_set FLAG_MEET_ORACLE, ColorRuinsYellow_1F_EventScript_PurpleTreesTranslated
	braillemessage ColorRuinsYellow_1F_Braille_PurpleTrees
	goto ColorRuinsYellow_1F_EventScript_CloseBrailleMsg
	end

ColorRuinsYellow_1F_EventScript_PurpleTreesTranslated::
	msgbox ColorRuinsYellow_1F_Text_PurpleTrees, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsYellow_1F_Text_TouchPillars:
	.string "TOUCH PILLARS FROM RIGHT TO LEFT.$"

ColorRuinsYellow_1F_Text_SacredStones:
	.string "SACRED STONES LIE BENEATH GOLD.$"

ColorRuinsYellow_1F_Text_MazhouTei:
	.string "MAZHOU X TEI. TOGETHER IN HARMONY.$"

ColorRuinsYellow_1F_Text_GoldenCups:
	.string "GOLDEN CUPS. MANY YUAN$"

ColorRuinsYellow_1F_Text_VermillionBird:
	.string "I SAW A VERMILLION BIRD IN EAST.$"

ColorRuinsYellow_1F_Text_TalkingToPeople:
	.string "I AM NOT GOOD AT TALKING TO PEOPLE.$"

ColorRuinsYellow_1F_Text_CurseTheEmperor:
	.string "CURSE THE EMPEROR. HE IS A FRAUD.$"

ColorRuinsYellow_1F_Text_PurpleTrees:
	.string "STAY AWAY FROM PURPLE TALKING TREES.$"
