PrimeCity_MemlinkChamber_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_FIRST_MEMLINK_COMPLETE, PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_3, 1
	setobjectxy 1, 6, 5
	setobjectxyperm 1, 6, 5
	return

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_3, 1, PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	closemessage
	applymovement 1, PrimeCity_MemlinkChamber_Movement_MoveUp
	waitmovement 0
	setvar VAR_OBJ_GFX_ID_0, 0
	setflag FLAG_FIRST_MEMLINK_COMPLETE
	setvar VAR_TEMP_3, 0
	releaseall
	end


PrimeCity_MemlinkChamber_EventScript_OpponentSetter::
	lock
	msgbox PrimeCity_MemlinkChamber_EventScript_OpponentSetter_Text_0
	closemessage
	setvar VAR_MEMLINK_OPPONENT, TRAINER_G2_NAS_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_NAS
	addobject 2
	clearflag FLAG_HIDE_MEMLINK_OPPONENT
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	setvar VAR_TEMP_4, 0
	release
	end


PrimeCity_MemlinkChamber_Trigger_OpponentFighter::
	compare VAR_MEMLINK_OPPONENT, 0
	goto_if_eq PrimeCity_MemlinkChamber_Trigger_OpponentFighter_1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	delay 4
	trainerbattle_no_intro TRAINER_G2_NAS_2, PrimeCity_MemlinkChamber_Trigger_OpponentFighter_Text_1
	setvar VAR_TEMP_4, 1
	release
	end

PrimeCity_MemlinkChamber_Trigger_OpponentFighter_1:
	msgbox PrimeCity_MemlinkChamber_Trigger_OpponentFighter_Text_0
	setvar VAR_TEMP_4, 1
	release
	end


PrimeCity_MemlinkChamber_Movement_MoveUp:
	walk_up
	walk_up
	face_down
	step_end

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "I shall now walk you through Memlink.\pIf you talk to me, then you can set\nthe opponent that you'd like to battle.$"

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Once an opponent is set, then\nstand on that green tile.\pThe battle will then begin.$"

PrimeCity_MemlinkChamber_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "Please enjoy using Memlink!$"

PrimeCity_MemlinkChamber_EventScript_OpponentSetter_Text_0:
	.string "Setting opponent to Nas.$"

PrimeCity_MemlinkChamber_Trigger_OpponentFighter_Text_0:
	.string "No opponent to fight.$"

PrimeCity_MemlinkChamber_Trigger_OpponentFighter_Text_1:
	.string "Opponent defeated!$"
