PrimeCity_CladBuilding_3F_CladRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PRIME_CITY_STATE, 0, PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	map_script_2 VAR_TEMP_0, 0, PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lock
	delay 16
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	playse SE_DENDOU
	waitse
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
	playse SE_TOREEYE
	waitse
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
	delay 8
	playse SE_TOREEYE
	waitse
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
	delay 8
	playse SE_TOREEYE
	waitse
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
	closemessage
	setmetatile 5, 1, METATILE_GenericBuilding_TV_Off, 1
	special DrawWholeMapView
	playse SE_PN_OFF
	waitse
	fadeoutbgm 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	playse SE_TOREOFF
	waitse
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
	closemessage
	playse SE_PC_OFF
	waitse
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11
	release
	setvar VAR_PRIME_CITY_STATE, 1
	playbgm MUS_B_FRONTIER, 0
	return

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	setmetatile 5, 1, METATILE_GenericBuilding_TV_Off, 1
	special DrawWholeMapView
	setvar VAR_TEMP_0, 1
	return


PrimeCity_CladBuilding_3F_CladRoom_Trigger_LeaveWithoutWailmer::
	lockall
	msgbox PrimeCity_CladBuilding_3F_CladRoom_Trigger_LeaveWithoutWailmer_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end


PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall::
	lockall
	setflag FLAG_PRIME_CITY_HIDE_WAILMER_BALL
	removeobject 1
	playse SE_BOWA2
	waitse
	clearflag FLAG_PRIME_CITY_HIDE_WAILMER
	addobject 2
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	delay 16
	playmoncry SPECIES_WAILMER, 0
	msgbox PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_0
	waitmoncry
	closemessage
	delay 8
	msgbox PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_1
	closemessage
	setflag FLAG_PRIME_CITY_HIDE_WAILMER
	removeobject 2
	playse SE_BOWA2
	waitse
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_WAILMER, 15, ITEM_NONE
	setvar VAR_PRIME_CITY_STATE, 2
	msgbox PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_2
PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_1:
	releaseall
	end

PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_2:
	call Common_EventScript_NameReceivedPartyMon
	goto PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_1


PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "We welcome you back to the\n"
	.string "Ríota Swim-Off, where our contestants\l"
	.string "are still fiercely fighting!$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "We're reaching the end of the final\n"
	.string "round of the competition now!\n$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "After five tough trials, who will\n"
	.string "be the one to take this 1000m race?!\n$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "It looks like Marlon and his\n"
	.string "Carracosta are about to win this!$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
	.string "But wait, what's this?!\p"
	.string "Clad and his partner Wailmer are\n"
	.string "gaining on Marlon, fast!$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
	.string "(My phone's ringing.)\n"
	.string "(I'll just wait until this is finished…)$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
	.string "(Argh. It's not gonna stop, is it?)$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
	.string "(F-i-n-e.)$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
	.string "Yo, it's Clad.\n"
	.string "What's happenin'?$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
	.string "Clad! Malimo here.\n"
	.string "We're meeting at the Dept. Store later.\p"
	.string "Fern was making a big deal out of it.\n"
	.string "You come too, okay?$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
	.string "Sure, okay.\n"
	.string "Well, see you then. Bye-bye.$"

PrimeCity_CladBuilding_3F_CladRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
	.string "(The Dept. Store is close, but maybe\n"
	.string "I should walk about town first.)\p"
	.string "(I don't like being early at all.)$"

PrimeCity_CladBuilding_3F_CladRoom_Trigger_LeaveWithoutWailmer_Text_0:
	.string "(Ah, I shouldn't leave without a Pokémon.)$"

PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_0:
	.string "Welko! Welko!$"

PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_1:
	.string "You think I'd forget you, Wailmer?\n"
	.string "C'mon big guy, we're heading out.$"

PrimeCity_CladBuilding_3F_CladRoom_EventScript_WailmerBall_Text_2:
	.string "Would you like to nickname Wailmer?$"
