FarmerField_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FarmerField_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, FarmerField_OnLoad
	.byte 0

FarmerField_OnLoad::
	goto_if_set FLAG_OBTAINED_RELIC_CROWN, FarmerField_EventScript_OpenShrub
	end

FarmerField_OnFrame::
	map_script_2 VAR_STORY_EVENT_PROGRESS, 0, FarmerField_IntroEvent
	.2byte 0

FarmerField_EventScript_OpenShrub::
	setmetatile 9, 6, METATILE_Fortree_ShrubOpen, 1
	special DrawWholeMapView
	return

FarmerField_IntroEvent::
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerFaceUp
	waitmovement 0
	lock
	removeobject 13
	msgbox FarmerField_Text_MyNameIsPulp, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 12
	msgbox FarmerField_Text_RuralFarmer, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 11
	msgbox FarmerField_Text_BerryFarmer, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 10
	msgbox FarmerField_Text_EveryoneHasAJob, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 9
	msgbox FarmerField_Text_LifeIsTough, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 8
	msgbox FarmerField_Text_GoWithoutFood, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerMovePatch
	waitmovement 0
	removeobject 1
	msgbox FarmerField_Text_HaveADream, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 7
	msgbox FarmerField_Text_DontKnowHow, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 6
	msgbox FarmerField_Text_WantToGetAway, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 5
	msgbox FarmerField_Text_WantToMoveCity, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 4
	msgbox FarmerField_Text_CityIsAmazing, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, FarmerField_Movement_PlayerPace
	waitmovement 0
	removeobject 3
	msgbox FarmerField_Text_AllDone, MSGBOX_DEFAULT
	setvar VAR_STORY_EVENT_PROGRESS, 1
	givemon SPECIES_DEDENNE, 15, ITEM_NONE
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_PULP_BYROAD_MECHANIC
	setflag FLAG_LOG_PULP_BYROAD
	giveitem ITEM_BERRY_PACKAGE, 1
	setrespawn HEAL_LOCATION_JAM_KEY_MAP
	release
	return

FarmerField_Movement_PlayerPace:
	walk_left
	face_up
	step_end

FarmerField_Movement_PlayerMovePatch:
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

FarmerField_Movement_PlayerFaceUp:
	face_up
	step_end
