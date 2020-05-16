JamKeyMap_MapScripts::
	.byte 0

JamKeyMap_EventScript_TriggerMechanicTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto JamKeyMap_EventScript_MechanicEndGame
	end
	
JamKeyMap_EventScript_TriggerMechanicMiddle::
	lockall
	setvar VAR_TEMP_1, 1
	goto JamKeyMap_EventScript_MechanicEndGame
	end
	
JamKeyMap_EventScript_TriggerMechanicBottom::
	lockall
	setvar VAR_TEMP_1, 2
	goto JamKeyMap_EventScript_MechanicEndGame
	end

JamKeyMap_EventScript_TriggerCantLeave::
	lock
	msgbox JamKeyMap_Text_CantLeave, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_WalkDown
	waitmovement 0
	release
	end

JamKeyMap_EventScript_MechanicEndGame::
	applymovement 2, JamKeyMap_Movement_MechanicFacePlayer
	waitmovement 0
	msgbox JamKeyMap_Text_MechanicHey, MSGBOX_DEFAULT
	closemessage
	compare VAR_TEMP_1, 0
	call_if_eq JamKeyMap_EventScript_MoveToMechanicTop
	compare VAR_TEMP_1, 1
	call_if_eq JamKeyMap_EventScript_MoveToMechanicMiddle
	compare VAR_TEMP_1, 2
	call_if_eq JamKeyMap_EventScript_MoveToMechanicBottom
	msgbox JamKeyMap_Text_GoodAsNew, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setflag FLAG_PULP_BYROAD_MECHANIC
	removeobject 2
	setvar VAR_STORY_EVENT_PROGRESS, 10
	fadescreen 0
	delay 16
	releaseall
	end

JamKeyMap_EventScript_Mechanic::
	lock
	msgbox JamKeyMap_Text_Mechanic, MSGBOX_DEFAULT
	release
	end

JamKeyMap_EventScript_MoveToMechanicTop::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicTop
	waitmovement 0
	return

JamKeyMap_EventScript_MoveToMechanicMiddle::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicMiddle
	waitmovement 0
	return

JamKeyMap_EventScript_MoveToMechanicBottom::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicBottom
	waitmovement 0
	return

JamKeyMap_EventScript_Truck::
	lock
	compare VAR_STORY_EVENT_PROGRESS, 1
	goto_if_eq JamKeyMap_EventScript_TruckInitialEvent
	compare VAR_STORY_EVENT_PROGRESS, 2
	goto_if_eq JamKeyMap_EventScript_TruckWontMove
	compare VAR_STORY_EVENT_PROGRESS, 10
	goto_if_eq JamKeyMap_EventScript_LogFinalFight
	release
	end

JamKeyMap_EventScript_TruckWontMove::
	msgbox JamKeyMap_Text_TruckWontStart, MSGBOX_DEFAULT
	release
	end

JamKeyMap_EventScript_TruckInitialEvent::
	msgbox JamKeyMap_Text_PulpUrgh, MSGBOX_DEFAULT
	setvar VAR_STORY_EVENT_PROGRESS, 2
	release
	end

JamKeyMap_EventScript_LogFinalFight::
	fadescreen 1
	clearflag FLAG_LOG_PULP_BYROAD
	addobject 3
	fadescreen 0
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MechanicFacePlayer
	waitmovement 0
	delay 30
	msgbox JamKeyMap_Text_LogPleaseBattleMe, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setvar VAR_STORY_EVENT_PROGRESS, 11
	fadescreen 0
	delay 8
	release
	end

JamKeyMap_EventScript_Log::
	lock
	faceplayer
	msgbox JamKeyMap_Text_LogIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LOG_2, JamKeyMap_Text_LogDefeat
	fadeoutbgm 0
	delay 40
	playbgm MUS_END, 0
	msgbox JamKeyMap_Text_LogPostBattle, MSGBOX_DEFAULT
	closemessage
	delay 40
	setvar VAR_STORY_EVENT_PROGRESS, 12
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_GameClearMale
	end

JamKeyMap_Movement_MoveToMechanicTop:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MoveToMechanicMiddle:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MoveToMechanicBottom:
	walk_left
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MechanicFacePlayer:
	face_right
	step_end

JamKeyMap_Movement_WalkDown:
	walk_down
	step_end
