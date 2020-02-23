ColorRuinsBlue_B1F_MapScripts::
	.byte 0

ColorRuinsBlue_B1F_EventScript_GiantWall::
	lockall
	msgbox ColorRuinsYellow_B1F_Text_LotsOfWriting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	delay 15
	msgbox ColorRuinsBlue_B1F_Text_AfterTheAttack, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_COLOR_RUINS_BLUE_WALL_READ
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 8
	goto_if_eq ColorRuinsBlue_B1F_EventScript_CreateLeftHole
	goto ColorRuinsBlue_B1F_EventScript_CreateRightHole
	end

ColorRuinsBlue_B1F_EventScript_CreateLeftHole::
	setmetatile 8, 5, METATILE_Cave_CrackedFloorHole, 1
	special DrawWholeMapView
	playse SE_RU_GASYAN
	goto ColorRuinsBlue_B1F_EventScript_FallThroughHole
	end

ColorRuinsBlue_B1F_EventScript_CreateRightHole::
	setmetatile 9, 5, METATILE_Cave_CrackedFloorHole, 1
	special DrawWholeMapView
	playse SE_RU_GASYAN
	goto ColorRuinsBlue_B1F_EventScript_FallThroughHole
	end

ColorRuinsBlue_B1F_EventScript_FallThroughHole::
	delay 40
	applymovement EVENT_OBJ_ID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_RU_HYUU
	delay 60
	compare VAR_STORY_EVENT_PROGRESS, 5
	call_if_eq ColorRuinsBlue_B1F_EventScript_SetVar
	setrespawn HEAL_LOCATION_DARK_CITY_ENTRANCE
	warphole MAP_DARK_CITY_ENTRANCE
	waitstate
	end

ColorRuinsBlue_B1F_EventScript_SetVar::
	setvar VAR_STORY_EVENT_PROGRESS, 6
	return

ColorRuinsBlue_B1F_Text_AfterTheAttack:
	.string "AFTER THE ATTACK SOME OF US\n"
	.string "RETURNED TO OUR FORMER HOMES.\p"
	.string "IT WAS OUR LUCK THAT THE\n"
	.string "PILLAGERS HAD NOT SETTLED.\p"
	.string "EVERYTHING WAS INTACT\n"
	.string "OUR PLAN HAD WORKED.\p"
	.string "WE THEN BEGAN -\p"
	.string "The rest of the wall is damaged\n"
	.string "to a point of being unreadable.$"
