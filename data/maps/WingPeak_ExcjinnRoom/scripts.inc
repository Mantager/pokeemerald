WingPeak_ExcjinnRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_WING_PEAK_EXCJINN_ROOM_HIDE_ROCKS
	return

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PISTA_VILLAGE_STATE, 11, WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	delay 8
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	applymovement 2, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	applymovement 2, WingPeak_ExcjinnRoom_Movement_NasMoveToMisle
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_ExcjinnRoom_Movement_PlayerMoveToMisle
	delay 4
	message WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	waitmovement 0
	waitmessage
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
	closemessage
	delay 8
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
	closemessage
	applymovement 2, WingPeak_ExcjinnRoom_Movement_NasLeave
	delay 4
	applymovement 1, WingPeak_ExcjinnRoom_Movement_MisleLeave
	delay 4
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_ExcjinnRoom_Movement_PlayerLeave
	waitmovement 1
	removeobject 1
	setflag FLAG_WING_PEAK_EXCJINN_ROOM_HIDE_MISLE
	playse SE_KAIDAN
	waitse
	waitmovement 0
	delay 16
	applymovement 2, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
	delay 8
	playse SE_RU_GASYAN
	waitse
	delay 4
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	applymovement 2, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
	closemessage
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
	applymovement 2, Common_Movement_WalkUp3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	clearflag FLAG_WING_PEAK_EXCJINN_ROOM_HIDE_ROCKS
	addobject 3
	addobject 4
	addobject 5
	playse SE_W089
	waitse
	delay 8
	fadescreen 0
	delay 16
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
	closemessage
	message WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9
	waitmessage
	playse SE_KOUKA_H
	applymovement 2, WingPeak_ExcjinnRoom_Movement_NasThrownBack
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	fadeoutbgm 1
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11
	closemessage
	setweather WEATHER_FOG_DIAGONAL
	doweather
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12
	closemessage
	delay 8
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
	closemessage
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15
	closemessage
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18
	closemessage
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playbgm MUS_B_FRONTIER, 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_23
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_24
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_25
	fadeoutbgm 2
	delay 16
	playbgm MUS_VS_EXCJINN, 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_26
	closemessage
	delay 8
	setflag FLAG_DISABLE_CATCHING
	setwildbattle SPECIES_EXCJINN, 40, ITEM_NONE
	special BattleSetup_StartExcjinnBattle
	waitstate
	clearflag FLAG_DISABLE_CATCHING
	resetweather
	delay 8
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_27
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_28
	closemessage
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_29
	closemessage
	delay 8
	fadescreen 1
	playse SE_BOWA2
	waitse
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_30
	closemessage
	delay 8
	playmoncry SPECIES_BOUFFALANT, 0
	waitmoncry
	delay 16
	playse SE_OP_BASYU
	waitse
	delay 8
	msgbox WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_31
	closemessage
	setflag FLAG_WING_PEAK_EXCJINN_ROOM_HIDE_ROCKS
	removeobject 3
	removeobject 4
	removeobject 5
	playse SE_BOWA2
	waitse
	fadescreen 0
	applymovement 2, WingPeak_ExcjinnRoom_Movement_NasLeave2
	waitmovement 0
	removeobject 2
	setflag FLAG_WING_PEAK_EXCJINN_ROOM_HIDE_NAS
	playse SE_KAIDAN
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_ExcjinnRoom_Movement_PlayerLeave2
	waitmovement 0
	setvar VAR_PISTA_VILLAGE_STATE, 12
	warp MAP_WING_PEAK_TOP, 1, 0, 0
	releaseall
	end


WingPeak_ExcjinnRoom_Movement_NasMoveToMisle:
	walk_up
	walk_up
	walk_right
	face_up
	step_end

WingPeak_ExcjinnRoom_Movement_PlayerMoveToMisle:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

WingPeak_ExcjinnRoom_Movement_NasLeave:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_left
	face_down
	step_end

WingPeak_ExcjinnRoom_Movement_MisleLeave:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

WingPeak_ExcjinnRoom_Movement_PlayerLeave:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_right
	face_down
	step_end

WingPeak_ExcjinnRoom_Movement_NasThrownBack:
	lock_facing_direction
	walk_fastest_up
	walk_fastest_up
	unlock_facing_direction
	step_end

WingPeak_ExcjinnRoom_Movement_NasLeave2:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

WingPeak_ExcjinnRoom_Movement_PlayerLeave2:
	walk_left
	walk_down
	walk_down
	step_end

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "Oh, somebody finally came…!\pI was waiting so long…\nbut thankfully somebody's here now…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Hey, you look shattered.\nLet's talk later.\pRight now, let's get you out\nof this place.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "I've been here for weeks…\nNobody came, so I started\lwishing as hard as I could…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "What did I tell you, man?\nSave your energy until we\lcan get you a bite to eat.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
	.string "1, 2, 3, 4…\nHeave-ho!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
	.string "We'd better get out, too.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
	.string "W-what was that?!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
	.string "It sounded like…\nThe cave collapsing in!\lNas, watch out!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
	.string "Rocks, huh?\nThat's no biggie!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
	.string "Go, Bouffalant-$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
	.string "Nas?!\nWhat just happened?!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
	.string "Urgh…\nSomething just… threw me back…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
	.string "You will not leave.\nThat is the nature of this wish.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
	.string "What?!\nWho's this?!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
	.string "When one door opens, another door must\nclose. That is a 'rule of life'.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
	.string "That child wished to be rescued.\pThe 'door' that opened was his\npossibility of escaping Wing Peak.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
	.string "However, the door that closed was\nthe possibility of you two escaping…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
	.string "So this is the 'genie of Wing Peak'?\nShow yourself!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18:
	.string "I used my telepathy to bring you here.\pI communicated that child's wish\ninto your mind.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19:
	.string "As penance, you must stay\nhere for all eternity…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20:
	.string "Heh…\nNo way am I staying here…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21:
	.string "Me neither.\pI'll bust us out of here even if\nI have to destroy the whole cave\lto do it!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22:
	.string "You dare defy the terms of this wish?\pYou are disrespecting one of\nthe sacred rules of life…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_23:
	.string "Rules?\nWho ever cared about rules?\pI sure don't…\nScrew your wishes… and your rules!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_24:
	.string "This wish will be carried out.\nYour fate is already sealed.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_25:
	.string "Show yourself, genie!\pNo poncy spirit is gonna keep me\nhere for all eternity!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_26:
	.string "So you truly mean to defy this wish…\nThen I shall strike you down here!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_27:
	.string "Looks like it's gone…\nwhat a weird-looking thing it was.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_28:
	.string "I wonder how everyone'll react now\nwe found out that the magical\lgenie was a total jerk…$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_29:
	.string "Well…\nlet's get out of here for real.$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_30:
	.string "Bouffalant, Head Charge!$"

WingPeak_ExcjinnRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_31:
	.string "Good job, Bouffalant.\nReturn!$"
