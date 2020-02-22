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

FarmerField_Text_MyNameIsPulp:
	.string "My name is Pulp.$"

FarmerField_Text_RuralFarmer:
	.string "I'm a farmer in a rural, poor\n"
	.string "area in the middle of nowhere.$"

FarmerField_Text_BerryFarmer:
	.string "Specifically, I'm a Berry farmer.$"

FarmerField_Text_EveryoneHasAJob:
	.string "Everyone here has a job, and mine\n"
	.string "is to grow Berries and sell them.$"

FarmerField_Text_LifeIsTough:
	.string "Life is tough here.\n"
	.string "All of us have to work hard to survive.$"

FarmerField_Text_GoWithoutFood:
	.string "If you can't work, then you can't make\n"
	.string "money, and you have to go without food.$"

FarmerField_Text_HaveADream:
	.string "But I have a dream!$"

FarmerField_Text_DontKnowHow:
	.string "I don't know how to achieve it, but…$"

FarmerField_Text_WantToGetAway:
	.string "I want to escape this rural lifestyle.\p"
	.string "I want to grow Berries on a\n"
	.string "wider scale.$"

FarmerField_Text_WantToMoveCity:
	.string "I want to move to Honzhu City,\n"
	.string "a gigantic city in the south!$"

FarmerField_Text_CityIsAmazing:
	.string "Honzhu City is amazing.\p"
	.string "It's a bustling metropolis with\n"
	.string "opportunities to do all kinds of things.\p"
	.string "It's a very rich city full of\n"
	.string "all kinds of people.\p"
	.string "My late father told me stories of\n"
	.string "Honzhu, as he got to visit once\l"
	.string "when he was a young man.\p"
	.string "And since then, it's been my dream\n"
	.string "to escape this place and move there.$"

FarmerField_Text_AllDone:
	.string "…All done!\n"
	.string "Finally, I managed to pick all the\n"
	.string "Berries for the mechanic's order.\p"
	.string "Now to get in the truck and deliver\n"
	.string "it to him!$"