PrimeCity_CladBuilding_3F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PRIME_CITY_STATE, 2, PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	delay 32
	fadeoutbgm 1
	lockall
	delay 8
	msgbox PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	message PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmessage
	waitmovement 0
	closemessage
	removeobject 1
	playse SE_W185
	waitse
	delay 8
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	fadeinbgm 1
	releaseall
	setvar VAR_PRIME_CITY_STATE, 3
	end


PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "H-help me…\n"
	.string "Somebody… please…$"

PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Are you okay-$"

PrimeCity_CladBuilding_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "(Wh… what was that?\n"
	.string "He just disappeared…)\p"
	.string "(Am I seeing things?\n"
	.string "I've got no time for this…)$"
