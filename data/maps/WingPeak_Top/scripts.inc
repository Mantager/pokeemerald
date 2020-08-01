WingPeak_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 9
	goto_if_eq WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_WING_PEAK_TOP_HIDE_NAS
	goto WingPeak_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PISTA_VILLAGE_STATE, 9, WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	clearflag FLAG_WING_PEAK_TOP_HIDE_NAS
	addobject 4
	applymovement 4, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	delay 8
	msgbox WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	setflag FLAG_WING_PEAK_TOP_HIDE_NAS
	removeobject 4
	setvar VAR_PISTA_VILLAGE_STATE, 10
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
	playbgm MUS_VS_EXCJINN, 0
	msgbox WingPeak_Top_Trigger_TopEvent_Text_20
	closemessage
	setwildbattle SPECIES_EXCJINN, 40, ITEM_NONE
	special BattleSetup_StartExcjinnBattle
	releaseall
	end

WingPeak_Top_Trigger_TopEvent_2:
	applymovement 4, WingPeak_Top_Movement_NasMoveRight
	goto WingPeak_Top_Trigger_TopEvent_1

WingPeak_Top_Trigger_TopEvent_5:
	applymovement 4, WingPeak_Top_Movement_NasMoveLeft
	goto WingPeak_Top_Trigger_TopEvent_4


WingPeak_Top_Movement_NasMoveLeft:
	walk_left
	face_up
	step_end

WingPeak_Top_Movement_NasMoveRight:
	walk_right
	face_up
	step_end

WingPeak_Top_EventScript_DebugExcjinnBattle::
	setwildbattle SPECIES_EXCJINN, 40, ITEM_NONE
	special BattleSetup_StartExcjinnBattle
	return


WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "Clad.\nWe're pretty close to the top now.\pAre you ready?$"

WingPeak_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Ready as I'll ever be.\nLet's go.$"

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
	.string "Wait, Fern!\nIt's true.\pI… I'm sorry, dude.\pI was wrong.\pI picked on you… not because\nI didn't understand you…\lbut because I didn't understand the world.$"

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
	.string "Since we left Prime City, I've\nbeen seeing things.\pThis kid… he appears and\ndisappears, and tells me to\lsave him.$"

WingPeak_Top_Trigger_TopEvent_Text_16:
	.string "{COLOR}{GREEN}Woah.\nThat's some real sci-fi stuff.$"

WingPeak_Top_Trigger_TopEvent_Text_17:
	.string "He also says to come to Wing Peak.\pI've seen it as well.$"

WingPeak_Top_Trigger_TopEvent_Text_18:
	.string "{COLOR}{BLUE}So you were led here by the kid…\pAnd Clad, you were on the way\nto Wing Peak regardless as\nwe were travelling together.$"

WingPeak_Top_Trigger_TopEvent_Text_19:
	.string "Urgh…\nPlease help me!\lI can't get out…\lI'm… so tired…$"

WingPeak_Top_Trigger_TopEvent_Text_20:
	.string "{COLOR}{GREEN}So the kid's in there?\pBut we can't get in anyway.\nIt's closed off by rocks.\pTrust me, we were trying to clear\nthe entrance whilst we were waiting.$"
