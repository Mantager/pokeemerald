PrimeCity_PokemonCenter_3F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	goto_if_set FLAG_MEMLINK_IN_PROGRESS, PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
	setvar VAR_TEMP_1, 1
	return

PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	setobjectxy 1, 11, 2
	addobject 1
	clearflag FLAG_MEMLINK_IN_PROGRESS
	playse SE_KAIDAN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	waitse
	delay 4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	releaseall
	end


PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_2
	goto_if_set FLAG_SYS_GAME_CLEAR, PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_3
PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_1:
	release
	end

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_2:
	msgbox PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_0
	goto PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_1

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_3:
	msgbox PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_6
	goto PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_1

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_6:
	msgbox PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_2
	closemessage
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	playse SE_KAIDAN
	removeobject 1
	setflag FLAG_MEMLINK_IN_PROGRESS
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	setflag FLAG_HIDE_MEMLINK_OPPONENT
	warp MAP_PRIME_CITY_MEMLINK_CHAMBER, 0, 0, 0
	goto PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_1


PrimeCity_PokemonCenter_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "We hope to see you again!$"

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_0:
	.string "We're working on something very\ninteresting indeed, but it isn't ready yet,\lI'm afraid…\pWe hope to see you again!$"

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_1:
	.string "Ah, welcome!\pWould you like to try Memlink?\pIt's a special device that allows\nyou to battle Trainers you've already\lbeaten!\pAll you need to do is remember\nbattling somebody, and the system will\ldo the rest of the work.\pSo, would you like to try it?$"

PrimeCity_PokemonCenter_3F_EventScript_MemLinkWoman_Text_2:
	.string "Please follow me!$"
