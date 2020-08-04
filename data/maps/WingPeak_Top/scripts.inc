WingPeak_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 9
	goto_if_eq WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_PISTA_VILLAGE_STATE, 11
	goto_if_le WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_PISTA_VILLAGE_STATE, 12
	goto_if_eq WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_WING_PEAK_TOP_HIDE_NAS
	goto WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setflag FLAG_WING_PEAK_TOP_HIDE_MISLE
	goto WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	clearflag FLAG_WING_PEAK_TOP_HIDE_MISLE
	addobject 5
	clearflag FLAG_WING_PEAK_TOP_HIDE_NAS
	addobject 4
	setobjectxy 4, 22, 8
	setobjectxyperm 4, 22, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectxy 2, 21, 8
	setobjectxyperm 2, 21, 8
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxy 1, 24, 10
	setobjectxyperm 1, 24, 10
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setobjectxy 3, 25, 9
	setobjectxyperm 3, 25, 9
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	goto WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_3, 0, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	map_script_2 VAR_PISTA_VILLAGE_STATE, 9, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	map_script_2 VAR_PISTA_VILLAGE_STATE, 12, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	.2byte 0

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	compare VAR_PISTA_VILLAGE_STATE, 11
	goto_if_ge WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
	setvar VAR_TEMP_3, 1
	end

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
	setmetatile 20, 6, 0x079, 1
	setmetatile 21, 6, 0x079, 1
	setmetatile 24, 6, 0x079, 1
	setmetatile 25, 6, 0x079, 1
	setmetatile 20, 7, 0x001, 0
	setmetatile 21, 7, 0x001, 0
	setmetatile 22, 7, 0x001, 0
	setmetatile 23, 7, 0x001, 0
	setmetatile 24, 7, 0x001, 0
	setmetatile 25, 7, 0x001, 0
	setmetatile 22, 8, 0x001, 0
	setmetatile 23, 8, 0x001, 0
	setmetatile 25, 8, 0x001, 0
	setmetatile 26, 8, 0x001, 0
	setmetatile 25, 9, 0x001, 0
	setmetatile 26, 9, 0x001, 0
	setmetatile 23, 5, 0x09F, 0
	setmetatile 23, 6, 0x0A7, 0
	special DrawWholeMapView
	goto WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	lockall
	clearflag FLAG_WING_PEAK_TOP_HIDE_NAS
	addobject 4
	applymovement 4, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
	closemessage
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1
	closemessage
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	setflag FLAG_WING_PEAK_TOP_HIDE_NAS
	removeobject 4
	setvar VAR_PISTA_VILLAGE_STATE, 10
	releaseall
	end

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
	lockall
	playbgm MUS_END, 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	delay 4
	applymovement 1, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceUp
	applymovement 4, Common_Movement_FaceUp
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	delay 4
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 1, Common_Movement_ExclamationMark
	delay 4
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	delay 4
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2
	applymovement 2, WingPeak_Top_Movement_FernMoveToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_4
	closemessage
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_5
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_Top_Movement_PlayerMoveToMisle
	message WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_7
	waitmessage
	waitmovement 0
	delay 4
	applymovement 5, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_8
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_9
	closemessage
	special SpawnCameraObject
	applymovement 2, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_CAMERA, WingPeak_Top_Movement_CameraMoveToFern
	applymovement 1, Common_Movement_WalkRight
	waitmovement 1
	applymovement 1, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_10
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_11
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_12
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_13
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_14
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_15
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_16
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_17
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, WingPeak_Top_Movement_CameraMoveToMalimo
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_18
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_19
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_20
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_21
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_22
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_23
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_24
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_25
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_26
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_27
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_28
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_29
	applymovement OBJ_EVENT_ID_CAMERA, WingPeak_Top_Movement_CameraMoveBack
	waitmovement 0
	special RemoveCameraObject
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_30
	closemessage
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_31
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_32
	closemessage
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_33
	closemessage
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_34
	closemessage
	delay 8
	message WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_35
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 4, Common_Movement_FaceRight
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 1, Common_Movement_FaceLeft
	applymovement 3, Common_Movement_FaceLeft
	waitmessage
	waitmovement 0
	closemessage
	delay 8
	applymovement 1, Common_Movement_WalkInPlaceLeft
	applymovement 3, Common_Movement_WalkInPlaceLeft
	applymovement 5, Common_Movement_WalkInPlaceLeft
	applymovement 4, Common_Movement_WalkInPlaceRight
	applymovement 2, Common_Movement_WalkInPlaceDown
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_36
	closemessage
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	setrespawn HEAL_LOCATION_PRIME_CITY_CLAD_BUILDING_3F_CLAD_ROOM
	fadescreenspeed FADE_TO_BLACK, 24
	setvar VAR_PISTA_VILLAGE_STATE, 13
	special GameClear
	waitstate
	releaseall
	end


WingPeak_Top_Trigger_TopEvent::
	lockall
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	delay 16
	msgbox WingPeak_Top_Trigger_TopEvent_Text_0
	delay 8
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_1
	closemessage
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_2
	closemessage
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_3
	closemessage
	delay 8
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_4
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setobjectxy 4, VAR_TEMP_1, VAR_TEMP_2
	setobjectxyperm 4, VAR_TEMP_1, VAR_TEMP_2
	clearflag FLAG_WING_PEAK_TOP_HIDE_NAS
	addobject 4
	compare VAR_TEMP_1, 23
	goto_if_eq WingPeak_Top_Trigger_TopEvent_2
WingPeak_Top_Trigger_TopEvent_1:
	compare VAR_TEMP_1, 24
	goto_if_eq WingPeak_Top_Trigger_TopEvent_5
WingPeak_Top_Trigger_TopEvent_4:
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	delay 4
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	delay 4
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	delay 4
	waitmovement 0
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_5
	closemessage
	delay 16
	msgbox WingPeak_Top_Trigger_TopEvent_Text_6
	closemessage
	delay 16
	msgbox WingPeak_Top_Trigger_TopEvent_Text_7
	closemessage
	delay 16
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_8
	closemessage
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_9
	closemessage
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_10
	delay 64
	message WingPeak_Top_Trigger_TopEvent_Text_11
	waitmessage
	message WingPeak_Top_Trigger_TopEvent_Text_12
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 2
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	delay 2
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	delay 2
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	delay 2
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	delay 2
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceUp
	applymovement 4, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_13
	closemessage
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_14
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_15
	closemessage
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_16
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_17
	closemessage
	msgbox WingPeak_Top_Trigger_TopEvent_Text_18
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	message WingPeak_Top_Trigger_TopEvent_Text_19
	waitmessage
	closemessage
	delay 8
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_20
	closemessage
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_21
	closemessage
	applymovement 4, Common_Movement_WalkUp3
	delay 8
	applymovement 2, Common_Movement_WalkLeftBackwards
	waitmovement 4
	delay 8
	fadescreen 1
	playse SE_BOWA2
	waitse
	msgbox WingPeak_Top_Trigger_TopEvent_Text_22
	closemessage
	delay 8
	playmoncry SPECIES_BOUFFALANT, 0
	waitmoncry
	delay 16
	playse SE_OP_BASYU
	waitse
	delay 8
	msgbox WingPeak_Top_Trigger_TopEvent_Text_23
	closemessage
	playse SE_BOWA2
	waitse
	applymovement 1, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	setmetatile 20, 6, 0x079, 1
	setmetatile 21, 6, 0x079, 1
	setmetatile 24, 6, 0x079, 1
	setmetatile 25, 6, 0x079, 1
	setmetatile 20, 7, 0x001, 0
	setmetatile 21, 7, 0x001, 0
	setmetatile 22, 7, 0x001, 0
	setmetatile 23, 7, 0x001, 0
	setmetatile 24, 7, 0x001, 0
	setmetatile 25, 7, 0x001, 0
	setmetatile 22, 8, 0x001, 0
	setmetatile 23, 8, 0x001, 0
	setmetatile 25, 8, 0x001, 0
	setmetatile 26, 8, 0x001, 0
	setmetatile 25, 9, 0x001, 0
	setmetatile 26, 9, 0x001, 0
	setmetatile 23, 5, 0x09F, 0
	setmetatile 23, 6, 0x0A7, 0
	special DrawWholeMapView
	fadescreen 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_24
	closemessage
	msgbox WingPeak_Top_Trigger_TopEvent_Text_25
	closemessage
	msgbox WingPeak_Top_Trigger_TopEvent_Text_26
	closemessage
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_27
	closemessage
	delay 8
	applymovement 4, Common_Movement_WalkUp2
	waitmovement 0
	removeobject 4
	setflag FLAG_WING_PEAK_TOP_HIDE_NAS
	playse SE_KAIDAN
	waitse
	setvar VAR_PISTA_VILLAGE_STATE, 11
	releaseall
	end

WingPeak_Top_Trigger_TopEvent_2:
	applymovement 4, WingPeak_Top_Movement_NasMoveRight
	goto WingPeak_Top_Trigger_TopEvent_1

WingPeak_Top_Trigger_TopEvent_5:
	applymovement 4, WingPeak_Top_Movement_NasMoveLeft
	goto WingPeak_Top_Trigger_TopEvent_4


WingPeak_Top_EventScript_Fern::
	lock
	faceplayer
	msgbox WingPeak_Top_EventScript_Fern_Text_0
	closemessage
	msgbox WingPeak_Top_EventScript_Fern_Text_1
	closemessage
	msgbox WingPeak_Top_EventScript_Fern_Text_2
	release
	end


WingPeak_Top_EventScript_Malimo::
	lock
	faceplayer
	msgbox WingPeak_Top_EventScript_Malimo_Text_0
	release
	end


WingPeak_Top_EventScript_Ryan::
	lock
	faceplayer
	msgbox WingPeak_Top_EventScript_Ryan_Text_0
	release
	end


WingPeak_Top_Movement_NasMoveLeft:
	walk_left
	face_up
	step_end

WingPeak_Top_Movement_NasMoveRight:
	walk_right
	face_up
	step_end

WingPeak_Top_EventScript_DebugExcjinnBGM::
	lock
	faceplayer
	delay 96
	playbgm MUS_VS_EXCJINN, 0
	release
	end


WingPeak_Top_EventScript_CaveDoor::
	lock
	msgbox WingPeak_Top_EventScript_CaveDoor_Text_0, MSGBOX_YESNO
	closemessage
	release
	end


WingPeak_Top_Movement_FernMoveToPlayer:
	walk_fast_up
	walk_fast_right
	step_end

WingPeak_Top_Movement_PlayerMoveToMisle:
	walk_down
	walk_down
	face_right
	step_end

WingPeak_Top_Movement_CameraMoveToFern:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	step_end

WingPeak_Top_Movement_CameraMoveToMalimo:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	step_end

WingPeak_Top_Movement_CameraMoveBack:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	step_end

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
	.string "Clad.\nWe're pretty close to the top now.\pAre you ready?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
	.string "Ready as I'll ever be.\nLet's go.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0:
	.string "{COLOR}{BLUE}Clad!\nYou're okay!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1:
	.string "{COLOR}{GREEN}Hey, our swim star made it!\nJust what happened in there?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2:
	.string "Well as it turns out, that\ngenie is real!\pIt granted the kid's wish to\nbe rescued, but tried to trap us\lin the cave to replace him!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3:
	.string "{COLOR}{RED}Whaaaaat?!\nSo that means the wish-granting genie\lwas an evil spirit the whole time?!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_4:
	.string "It said something about one door\nopening and another one closing.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_5:
	.string "{COLOR}{GREEN}Sounds like some petty tit-for-tat\nthing to me.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_6:
	.string "{COLOR}{BLUE}Right?\nWhy couldn't it just let the kid out?\pPokémon sure are confusing.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_7:
	.string "Speaking of the kid…\nare you okay, man?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_8:
	.string "I'm hanging on…\nyou guys are so nice.\pYou and the other guy saved my life…\pEveryone out here fed me, and\ngave me a blanket, and well…\lthank you all so much.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_9:
	.string "{COLOR}{GREEN}Dude, you were barely alive when\nyou came out of there…\pThere's no need for thanks.\nWe did what we should have.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_10:
	.string "{COLOR}{RED}By the way, Nas, I forgive you.\nI think I do, anyway.\pYou hurt me back in the day.\nBut it seems you're willing to change…\pI mean, you came up here just\nto save that guy…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_11:
	.string "I realised, Fern.\pThe way I treated people just made\nthem not want anything to do\lwith me.\pI didn't have anyone… because I was\ntoo concerned with picking on others.\pI thought that if I didn't, then\nI'd become a target, too.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_12:
	.string "{COLOR}{RED}The world isn't as scary as you think,\nyou know…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_13:
	.string "{COLOR}{RED}After all, I was able to meet such\namazing friends over the years.\pClad, Malimo, and Rye too…\nThey're worth so much to me.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_14:
	.string "I suppose so…\nno, wait, I know so.\pEven after everything I've done, you're\ntalking to me like this…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_15:
	.string "{COLOR}{RED}If you're willing to change, then I\ndon't hold a grudge.\pI think the ability to change…\nthat's one of humanity's good points.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_16:
	.string "Fern…\nyou're pretty interesting.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_17:
	.string "{COLOR}{RED}Haha, right?!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_18:
	.string "{COLOR}{BLUE}Well, looks like the genie wasn't what\nwe all thought it was gonna be…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_19:
	.string "{COLOR}{GREEN}Yeah…\nIt's not a big deal, though, is it?\pI think this is one of those\ntimes where the end result doesn't\lmatter so much.\pAfter all, the trip here\nwas a lot of fun.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_20:
	.string "{COLOR}{BLUE}I can get behind that.\pThis journey felt so freeing.\pBefore this trip, I was really going\ncrazy with pressure from parents.\pCram school every day, extra homework,\nand prep for entrance exams to\lthe best college in the country…\pIt really did a number on me.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_21:
	.string "{COLOR}{GREEN}I get the feeling that wasn't what\nyou really wanted to be doing.\pI mean, we're fourteen years old!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_22:
	.string "{COLOR}{BLUE}You're right.\nBut also, things are tough for you\ltoo, aren't they?\pWorking in the fields and having to miss\nschool some days because of it…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_23:
	.string "{COLOR}{GREEN}I've got no choice in that.\nI'm from Yanuras Town.\pI haven't got the wealth of you\ncity kids.\pI have to do the jobs that\nthe more well-off don't want to\ldo…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_24:
	.string "{COLOR}{BLUE}But does it really have to\nbe that way?\pY'know, I was thinking.\pI want to go and do an apprenticeship\nabroad after I'm finished with school.\pYou should come too.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_25:
	.string "{COLOR}{GREEN}What kind of apprenticeship?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_26:
	.string "{COLOR}{BLUE}Basicially, it's working on vehicles.\pWhen we were in Pista Village, I\nchecked out the bike shop, and\lthe owner there told me about it.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_27:
	.string "{COLOR}{GREEN}I don't know…\pI mean, I can't just leave my\nfamily on their own.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_28:
	.string "{COLOR}{BLUE}Well, this is for the future…\pTo build a better foundation for\nthe future.\pJust sleep on it, alright?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_29:
	.string "{COLOR}{GREEN}Okay.$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_30:
	.string "So, your name…\nwhat is it, man?\pAnd what were you doing all\nthe way up here, anyway?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_31:
	.string "My name…\nit's Misle.\pI came here climbing…\nI want to be a professional climber.\pYou're Clad, right…?\nI saw you on TV.\lYou won this year's Swim-Off…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_32:
	.string "That's me, all right.\pLook… when I trained for the\nSwim-Off, I trained super hard, too.\pBut I almost broke my leg by\ntraining too much once, and…\pAnyway, my point is that you\nshouldn't overdo it.\pIt's dangerous, here, y'know.\pOn this trip, I remembered something\nreally important.\pLife is really beautiful, so you\nshould take care of yourself.\pThat way, you can experience it all…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_33:
	.string "Yeah…\nBy the way…\pI'm kind of craving a burger now…$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_34:
	.string "Hahaha!\nThen shall we get going?\pWe'll go and get a whole stack of\nburgers from the best burger place\lI know!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_35:
	.string "Everyone!\nLet's go home!$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_36:
	.string "Y{COLOR}{RED}e{COLOR}{BLUE}a{COLOR}{GREEN}h!$"

WingPeak_Top_Trigger_TopEvent_Text_0:
	.string "Hey, everyone.$"

WingPeak_Top_Trigger_TopEvent_Text_1:
	.string "{COLOR}{RED}Finally!\nYou took your time, Clad!$"

WingPeak_Top_Trigger_TopEvent_Text_2:
	.string "{COLOR}{GREEN}Man, you're just too impatient, Fern.$"

WingPeak_Top_Trigger_TopEvent_Text_3:
	.string "{COLOR}{BLUE}That makes four of us now, anyway.\nEveryone's all here.$"

WingPeak_Top_Trigger_TopEvent_Text_4:
	.string "Actually, there's someone else.$"

WingPeak_Top_Trigger_TopEvent_Text_5:
	.string "{COLOR}{RED}Nas?!\nWhy is Nas here?!$"

WingPeak_Top_Trigger_TopEvent_Text_6:
	.string "Nas wants to apologise.$"

WingPeak_Top_Trigger_TopEvent_Text_7:
	.string "{COLOR}{RED}Apologise?\nI don't believe it.\lAre you for real?\lDid you bring him here?$"

WingPeak_Top_Trigger_TopEvent_Text_8:
	.string "Wait, Fern!\nIt's true.\pI… I'm sorry, dude.\nI was wrong.\pI picked on you… not because\nI didn't understand you…\lbut because I didn't understand\lthe world.$"

WingPeak_Top_Trigger_TopEvent_Text_9:
	.string "{COLOR}{RED}… …\n… …$"

WingPeak_Top_Trigger_TopEvent_Text_10:
	.string "I made other people's lives a\nmisery because I thought that\leveryone was out to get me.\pBut from today, that changes.\pI came here to save someone.$"

WingPeak_Top_Trigger_TopEvent_Text_11:
	.string "Save someone?\nWhat do you-$"

WingPeak_Top_Trigger_TopEvent_Text_12:
	.string "I-is someone out there?!\nPlease!$"

WingPeak_Top_Trigger_TopEvent_Text_13:
	.string "That's it!\nThat's him!$"

WingPeak_Top_Trigger_TopEvent_Text_14:
	.string "{COLOR}{BLUE}…'Him'?\nWhat do you mean?$"

WingPeak_Top_Trigger_TopEvent_Text_15:
	.string "Since we left Prime City, I've\nbeen seeing things.\pThis kid… he appears and disappears,\nand tells me to save him.$"

WingPeak_Top_Trigger_TopEvent_Text_16:
	.string "{COLOR}{GREEN}Woah.\nThat's some real sci-fi stuff.$"

WingPeak_Top_Trigger_TopEvent_Text_17:
	.string "He also says to come to Wing Peak.\pI've seen it as well.$"

WingPeak_Top_Trigger_TopEvent_Text_18:
	.string "{COLOR}{BLUE}So you were led here by the kid…\pAnd Clad, you were on the way\nto Wing Peak regardless as\lwe were travelling together.$"

WingPeak_Top_Trigger_TopEvent_Text_19:
	.string "Urgh…\nPlease help me!\lI can't get out…\lI'm… so tired…$"

WingPeak_Top_Trigger_TopEvent_Text_20:
	.string "{COLOR}{GREEN}So the kid's in there?\pBut we can't get in anyway.\nIt's closed off by rocks.\pTrust me, we were trying to clear\nthe entrance whilst we were waiting.$"

WingPeak_Top_Trigger_TopEvent_Text_21:
	.string "Haha, that's no problem for me!$"

WingPeak_Top_Trigger_TopEvent_Text_22:
	.string "Bouffalant, use Head Charge!$"

WingPeak_Top_Trigger_TopEvent_Text_23:
	.string "Good job, Bouffalant.\nReturn!$"

WingPeak_Top_Trigger_TopEvent_Text_24:
	.string "There we go!\nThe way's now clear!$"

WingPeak_Top_Trigger_TopEvent_Text_25:
	.string "{COLOR}{BLUE}Bouffalant's strength is nuts…$"

WingPeak_Top_Trigger_TopEvent_Text_26:
	.string "{COLOR}{GREEN}You're telling me.$"

WingPeak_Top_Trigger_TopEvent_Text_27:
	.string "Well, Clad, let's go rescue that kid!$"

WingPeak_Top_EventScript_Fern_Text_0:
	.string "{COLOR}{RED}…$"

WingPeak_Top_EventScript_Fern_Text_1:
	.string "You alright?$"

WingPeak_Top_EventScript_Fern_Text_2:
	.string "{COLOR}{RED}Yeah…\nJust a bit taken aback.$"

WingPeak_Top_EventScript_Malimo_Text_0:
	.string "{COLOR}{BLUE}I wonder how long that kid's been\ntrapped inside…\pHe must be hanging on by the\nskin of his teeth.$"

WingPeak_Top_EventScript_Ryan_Text_0:
	.string "{COLOR}{GREEN}We'll wait here for you guys to\ncome back.\pI've got some food for the\nkid in my bag here.$"

WingPeak_Top_EventScript_CaveDoor_Text_0:
	.string "The entrance is tight, but\nyou can make it through.\pWill you go in?$"
