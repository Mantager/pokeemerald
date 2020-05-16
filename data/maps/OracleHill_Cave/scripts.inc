OracleHill_Cave_MapScripts::
	.byte 0

OracleHill_EventScript_Oracle::
	lock
	faceplayer
	goto_if_set FLAG_MEET_ORACLE, OracleHill_EventScript_OracleAfterFirstMeeting
	msgbox OracleHill_Text_OracleGreeting, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, OracleHill_Movement_PlayerSitDown
	waitmovement 0
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, OracleHill_Movement_CameraMoveUp
	waitmovement 0
	delay 50
	msgbox OracleHill_Text_OracleNext, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox OracleHill_Text_OracleYouWannaMove, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox OracleHill_Text_OracleYourEyes, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox OracleHill_Text_OracleVeryWell, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox OracleHill_Text_OracleLegend, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox OracleHill_Text_OracleLongShot, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox OracleHill_Text_OracleCheckRuins, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement 1, OracleHill_Movement_OracleMoveDown
	waitmovement 0
	giveitem_std ITEM_BRAILLE_GUIDE, 1
	setflag FLAG_MEET_ORACLE
	delay 30
	applymovement 1, OracleHill_Movement_OracleMoveBack
	waitmovement 0
	delay 30
	msgbox OracleHill_Text_OracleGuideExplain, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_CAMERA, OracleHill_Movement_OracleMoveDown
	waitmovement 0
	special RemoveCameraObject
	delay 30
	release
	end

OracleHill_EventScript_OracleAfterFirstMeeting::
	msgbox OracleHill_Text_OracleGoodLuck, MSGBOX_DEFAULT
	closemessage
	release
	end

OracleHill_Movement_PlayerSitDown:
	walk_down
	walk_down
	face_up
	step_end

OracleHill_Movement_CameraMoveUp:
	walk_up
	walk_up
	step_end

OracleHill_Movement_OracleMoveDown:
	walk_down
	walk_down
	step_end

OracleHill_Movement_OracleMoveBack:
	walk_up
	walk_up
	face_down
	step_end
