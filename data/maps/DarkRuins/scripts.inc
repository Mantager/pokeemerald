DarkRuins_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DarkRuins_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DarkRuins_OnFrame
	.byte 0

DarkRuins_OnFrame::
	map_script_2 VAR_STORY_EVENT_PROGRESS, 7, DarkRuins_ExplanationEvent
	.2byte 0

DarkRuins_OnLoad::
	compare VAR_DARK_RUINS_ROOMS_COMPLETED, 4
	call_if_lt DarkRuins_EventScript_CloseDoor
	end

DarkRuins_ExplanationEvent::
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, DarkRuins_Movement_FaceUp
	waitmovement 0
	delay 8
	msgbox DarkRuins_Text_ArumExplanation, MSGBOX_DEFAULT
	closemessage
	applymovement 1, DarkRuins_Movement_MoveUp
	applymovement EVENT_OBJ_ID_PLAYER, DarkRuins_Movement_MoveUp
	waitmovement 0
	delay 8
	call DarkRuins_EventScript_OpenDoor
	applymovement 1, DarkRuins_Movement_FaceDown
	waitmovement 0
	msgbox DarkRuins_Text_ArumWaitAtEnd, MSGBOX_DEFAULT
	closemessage
	delay 8
	fadescreen 1
	setflag FLAG_MEET_ARUM_DARK_RUINS_LOBBY
	setvar VAR_STORY_EVENT_PROGRESS, 8
	call DarkRuins_EventScript_CloseDoor
	removeobject 1
	fadescreen 0
	releaseall
	end

DarkRuins_EventScript_CloseDoor::
	setmetatile 18, 0, METATILE_ColorRuinsGeneric_WallTop_Purple, 1
	setmetatile 18, 1, METATILE_ColorRuinsGeneric_WallBottom, 1
	special DrawWholeMapView
	return

DarkRuins_EventScript_OpenDoor::
	playse SE_BAN
	setmetatile 18, 0, METATILE_ColorRuinsGeneric_DoorTopPurple, 0
	setmetatile 18, 1, METATILE_ColorRuinsGeneric_DoorBottom, 0
	special DrawWholeMapView
	return

DarkRuins_Movement_MoveUp:
	walk_up
	walk_up
	step_end

DarkRuins_Movement_FaceDown:
	face_down
	step_end

DarkRuins_Movement_FaceUp:
	face_up
	step_end
