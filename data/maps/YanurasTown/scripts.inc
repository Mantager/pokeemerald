YanurasTown_MapScripts::
	.byte 0


YanurasTown_Trigger_AfterMeetingRyan::
	lockall
	fadescreen 1
	clearflag FLAG_YANURAS_TOWN_HIDE_RYAN
	addobject 3
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 13
	goto_if_eq YanurasTown_Trigger_AfterMeetingRyan_2
YanurasTown_Trigger_AfterMeetingRyan_1:
	compare VAR_TEMP_1, 14
	goto_if_eq YanurasTown_Trigger_AfterMeetingRyan_5
YanurasTown_Trigger_AfterMeetingRyan_4:
	compare VAR_TEMP_1, 15
	goto_if_eq YanurasTown_Trigger_AfterMeetingRyan_8
YanurasTown_Trigger_AfterMeetingRyan_7:
	waitmovement 0
	fadescreen 0
	delay 8
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_0
	applymovement 1, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_1
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_2
	closemessage
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	delay 24
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	delay 24
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_3
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_4
	applymovement 3, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_5
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_6
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_7
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_8
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_9
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_10
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_11
	applymovement 2, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_12
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_13
	applymovement 3, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox YanurasTown_Trigger_AfterMeetingRyan_Text_14
	closemessage
	fadescreen 1
	setflag FLAG_YANURAS_TOWN_HIDE_RYAN
	removeobject 3
	setflag FLAG_YANURAS_TOWN_HIDE_MALIMO
	removeobject 2
	setflag FLAG_YANURAS_TOWN_HIDE_FERN
	removeobject 1
	setflag FLAG_NEW_VALLEY_WAY_HIDE_FERN
	setflag FLAG_NEW_VALLEY_WAY_HIDE_MALIMO
	setvar VAR_YANURAS_TOWN_STATE, 2
	fadescreen 0
	delay 8
	releaseall
	end

YanurasTown_Trigger_AfterMeetingRyan_2:
	applymovement OBJ_EVENT_ID_PLAYER, YanurasTown_Movement_LeftPlayerMoveToSide
	goto YanurasTown_Trigger_AfterMeetingRyan_1

YanurasTown_Trigger_AfterMeetingRyan_5:
	applymovement OBJ_EVENT_ID_PLAYER, YanurasTown_Movement_MiddlePlayerMoveToSide
	goto YanurasTown_Trigger_AfterMeetingRyan_4

YanurasTown_Trigger_AfterMeetingRyan_8:
	applymovement OBJ_EVENT_ID_PLAYER, YanurasTown_Movement_RightPlayerMoveToSide
	goto YanurasTown_Trigger_AfterMeetingRyan_7


YanurasTown_EventScript_StoreSign::
	lock
	msgbox YanurasTown_EventScript_StoreSign_Text_0
	release
	end


YanurasTown_Movement_LeftPlayerMoveToSide:
	walk_down
	walk_right
	walk_down
	step_end

YanurasTown_Movement_MiddlePlayerMoveToSide:
	walk_down
	walk_down
	step_end

YanurasTown_Movement_RightPlayerMoveToSide:
	walk_down
	walk_left
	walk_down
	step_end

YanurasTown_Movement_FernMoveToPlayer:
	walk_right
	walk_up
	step_end

YanurasTown_Movement_MalimoMoveToPlayer:
	walk_left
	walk_up
	step_end

YanurasTown_Trigger_AfterMeetingRyan_Text_0:
	.string "{COLOR}{GREEN}Howzit, guys.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_1:
	.string "{COLOR}{RED}F-i-n-a-l-l-y!\nWe haven't got all day, you know!\lCome on, let's go!\pOr else Nas-I mean somebody will\nget to Wing Peak first!$"

YanurasTown_Trigger_AfterMeetingRyan_Text_2:
	.string "{COLOR}{GREEN}What was that, you looney?!\pYou know, not everyone can afford to\ndrop everything right away!$"

YanurasTown_Trigger_AfterMeetingRyan_Text_3:
	.string "{COLOR}{BLUE}Lads, lads.\nCool it, will you?\lWe're all friends here.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_4:
	.string "{COLOR}{BLUE}What's with you and Nas today, anyway?\nYou've been mentioning him a lot.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_5:
	.string "{COLOR}{GREEN}Nas, that guy…\nHas he been on your case again?$"

YanurasTown_Trigger_AfterMeetingRyan_Text_6:
	.string "{COLOR}{RED}I don't want to talk about it.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_7:
	.string "Clearly it's on your mind a lot…$"

YanurasTown_Trigger_AfterMeetingRyan_Text_8:
	.string "{COLOR}{RED}I said I don't want to talk about it!$"

YanurasTown_Trigger_AfterMeetingRyan_Text_9:
	.string "{COLOR}{BLUE}…Sorry, Fern.\nI shouldn't have asked…$"

YanurasTown_Trigger_AfterMeetingRyan_Text_10:
	.string "{COLOR}{RED}Let's just get going, shall we?\nWe've gotta head through the Valley,\nso make sure your Pokémon are in top shape.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_11:
	.string "{COLOR}{GREEN}Got it.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_12:
	.string "{COLOR}{BLUE}What if we get lost?\nI mean, the Valley is huge.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_13:
	.string "If we just keep going north, we'll reach\nDeriva Walk.\pI think we'll be okay.$"

YanurasTown_Trigger_AfterMeetingRyan_Text_14:
	.string "{COLOR}{GREEN}Alright then, let's head out!$"

YanurasTown_EventScript_StoreSign_Text_0:
	.string "Yanuras Town General Store$"
