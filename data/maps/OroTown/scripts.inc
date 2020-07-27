OroTown_MapScripts::
	.byte 0


OroTown_EventScript_NasTrainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_G2_NAS, 0, OroTown_EventScript_NasTrainer_Text_0, OroTown_EventScript_NasTrainer_Text_0
	end


OroTown_EventScript_RodriTrainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_G2_RODRI, 0, OroTown_EventScript_RodriTrainer_Text_0, OroTown_EventScript_RodriTrainer_Text_0
	end


OroTown_EventScript_PrepareForBattle::
	special SavePlayerParty
	fadescreen 1
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 1
	goto_if_eq OroTown_EventScript_PrepareForBattle_2
OroTown_EventScript_PrepareForBattle_1:
	compare VAR_RESULT, 0
	special LoadPlayerParty
	goto OroTown_EventScript_PrepareForBattle
	return

OroTown_EventScript_PrepareForBattle_2:
	special ReducePlayerPartyToSelectedMons
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	setvar VAR_0x8004, SPECIAL_BATTLE_STEVEN
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	frontier_saveparty
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, OroTown_EventScript_PrepareForBattle_6
OroTown_EventScript_PrepareForBattle_4:
	special SetCB2WhiteOut
	setflag FLAG_ORO_TOWN_HIDE_MALIMO
	setflag FLAG_ORO_TOWN_HIDE_RYAN
	waitstate
	goto OroTown_EventScript_PrepareForBattle_1

OroTown_EventScript_PrepareForBattle_6:
	goto OroTown_EventScript_AfterBattle
	goto OroTown_EventScript_PrepareForBattle_4


OroTown_Trigger_MeetUp::
	lockall
	fadescreen 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 15
	goto_if_eq OroTown_Trigger_MeetUp_2
OroTown_Trigger_MeetUp_1:
	compare VAR_TEMP_1, 16
	goto_if_eq OroTown_Trigger_MeetUp_5
OroTown_Trigger_MeetUp_4:
	compare VAR_TEMP_1, 17
	goto_if_eq OroTown_Trigger_MeetUp_8
OroTown_Trigger_MeetUp_7:
	compare VAR_TEMP_1, 18
	goto_if_eq OroTown_Trigger_MeetUp_11
OroTown_Trigger_MeetUp_10:
	waitmovement 0
	setobjectxyperm 7, 17, 23
	setobjectxy 7, 17, 23
	applymovement 7, Common_Movement_FaceLeft
	waitmovement 0
	fadescreen 0
	msgbox OroTown_Trigger_MeetUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox OroTown_Trigger_MeetUp_Text_1
	closemessage
	addobject 5
	addobject 6
	clearflag FLAG_ORO_TOWN_HIDE_MALIMO
	clearflag FLAG_ORO_TOWN_HIDE_RYAN
	applymovement 5, Common_Movement_WalkUp3
	applymovement 6, Common_Movement_WalkUp3
	waitmovement 0
	msgbox OroTown_Trigger_MeetUp_Text_2
	msgbox OroTown_Trigger_MeetUp_Text_3
	msgbox OroTown_Trigger_MeetUp_Text_4
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	delay 8
	msgbox OroTown_Trigger_MeetUp_Text_5
	closemessage
	applymovement 7, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, OroTown_Movement_CameraMoveToNas
	waitmovement 0
	fadeoutbgm 1
	msgbox OroTown_Trigger_MeetUp_Text_6
	closemessage
	fadescreen 1
	applymovement OBJ_EVENT_ID_CAMERA, OroTown_Movement_CameraMoveBack
	waitmovement 0
	setobjectxyperm 6, 17, 24
	setobjectxy 6, 17, 24
	setobjectxyperm 5, 16, 24
	setobjectxy 5, 16, 24
	fadescreen 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	msgbox OroTown_Trigger_MeetUp_Text_7
	closemessage
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox OroTown_Trigger_MeetUp_Text_8
	playbgm MUS_B_FRONTIER, 0
	msgbox OroTown_Trigger_MeetUp_Text_9
	msgbox OroTown_Trigger_MeetUp_Text_10
	msgbox OroTown_Trigger_MeetUp_Text_11
	msgbox OroTown_Trigger_MeetUp_Text_12
	msgbox OroTown_Trigger_MeetUp_Text_13
	closemessage
	delay 16
	msgbox OroTown_Trigger_MeetUp_Text_14
	closemessage
	special RemoveCameraObject
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	msgbox OroTown_Trigger_MeetUp_Text_15
	applymovement 7, OroTown_Movement_FernMoveToNas
	applymovement OBJ_EVENT_ID_PLAYER, OroTown_Movement_PlayerMoveToNas
	applymovement 5, OroTown_Movement_MalimoMoveToNas
	applymovement 6, OroTown_Movement_RyanMoveToNas
	waitmovement 0
	delay 16
	message OroTown_Trigger_MeetUp_Text_16
	closemessage
	delay 32
	message OroTown_Trigger_MeetUp_Text_17
	closemessage
	msgbox OroTown_Trigger_MeetUp_Text_18
	msgbox OroTown_Trigger_MeetUp_Text_19
	goto OroTown_EventScript_AfterBattle
	return

OroTown_Trigger_MeetUp_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto OroTown_Trigger_MeetUp_1

OroTown_Trigger_MeetUp_5:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto OroTown_Trigger_MeetUp_4

OroTown_Trigger_MeetUp_8:
	applymovement OBJ_EVENT_ID_PLAYER, OroTown_Movement_PlayerWalkLeftFaceRight
	goto OroTown_Trigger_MeetUp_7

OroTown_Trigger_MeetUp_11:
	applymovement OBJ_EVENT_ID_PLAYER, OroTown_Movement_PlayerWalkLeft2FaceRight
	goto OroTown_Trigger_MeetUp_10


OroTown_EventScript_AfterBattle::
	applymovement 1, Common_Movement_WalkUpBackwards
	applymovement 2, Common_Movement_WalkUpBackwards
	applymovement 3, Common_Movement_WalkUpBackwards
	applymovement 4, Common_Movement_WalkUpBackwards
	waitmovement 0
	fadeoutbgm 1
	msgbox OroTown_EventScript_AfterBattle_Text_0
	closemessage
	msgbox OroTown_EventScript_AfterBattle_Text_1
	applymovement 1, Common_Movement_FaceRight
	applymovement 3, Common_Movement_FaceLeft
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	delay 8
	msgbox OroTown_EventScript_AfterBattle_Text_2
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_3
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_4
	closemessage
	delay 8
	applymovement 1, OroTown_Movement_FernMoveToNas
	applymovement 3, OroTown_Movement_FernMoveToNas
	applymovement 4, OroTown_Movement_FernMoveToNas
	delay 16
	message OroTown_EventScript_AfterBattle_Text_5
	waitmovement 0
	removeobject 1
	removeobject 3
	removeobject 4
	setflag FLAG_ORO_TOWN_HIDE_GOONS
	closemessage
	delay 16
	msgbox OroTown_EventScript_AfterBattle_Text_6
	msgbox OroTown_EventScript_AfterBattle_Text_7
	delay 32
	msgbox OroTown_EventScript_AfterBattle_Text_8
	closemessage
	msgbox OroTown_EventScript_AfterBattle_Text_9
	delay 32
	msgbox OroTown_EventScript_AfterBattle_Text_10
	delay 16
	msgbox OroTown_EventScript_AfterBattle_Text_11
	msgbox OroTown_EventScript_AfterBattle_Text_12
	closemessage
	delay 16
	msgbox OroTown_EventScript_AfterBattle_Text_13
	closemessage
	applymovement 2, OroTown_Movement_PlayerMoveToNas
	waitmovement 0
	removeobject 2
	setflag FLAG_ORO_TOWN_HIDE_NAS
	delay 16
	playbgm MUS_MACHI_S2, 0
	msgbox OroTown_EventScript_AfterBattle_Text_14
	applymovement 5, Common_Movement_FaceRight
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_15
	closemessage
	applymovement 7, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_16
	closemessage
	delay 8
	msgbox OroTown_EventScript_AfterBattle_Text_17
	closemessage
	msgbox OroTown_EventScript_AfterBattle_Text_18
	msgbox OroTown_EventScript_AfterBattle_Text_19
	closemessage
	delay 8
	msgbox OroTown_EventScript_AfterBattle_Text_20
	closemessage
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_21
	applymovement 7, Common_Movement_FaceLeft
	waitmovement 0
	msgbox OroTown_EventScript_AfterBattle_Text_22
	msgbox OroTown_EventScript_AfterBattle_Text_23
	closemessage
	delay 8
	msgbox OroTown_EventScript_AfterBattle_Text_24
	msgbox OroTown_EventScript_AfterBattle_Text_25
	msgbox OroTown_EventScript_AfterBattle_Text_26
	closemessage
	delay 16
	fadescreen 1
	removeobject 5
	removeobject 6
	removeobject 7
	setflag FLAG_ORO_TOWN_HIDE_FERN
	setflag FLAG_ORO_TOWN_HIDE_MALIMO
	setflag FLAG_ORO_TOWN_HIDE_RYAN
	setvar VAR_ORO_TOWN_STATE, 1
	fadescreen 0
	delay 16
	releaseall
	end


OroTown_Movement_PlayerWalkLeft2FaceRight:
	walk_left
	walk_left
	face_right
	step_end

OroTown_Movement_PlayerWalkLeftFaceRight:
	walk_left
	face_right
	step_end

OroTown_Movement_CameraMoveToNas:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

OroTown_Movement_CameraMoveBack:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	step_end

OroTown_Movement_FernMoveToNas:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

OroTown_Movement_PlayerMoveToNas:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OroTown_Movement_MalimoMoveToNas:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OroTown_Movement_RyanMoveToNas:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OroTown_EventScript_NasTrainer_Text_0:
	.string "No good!$"

OroTown_EventScript_RodriTrainer_Text_0:
	.string "Ah.$"

OroTown_Trigger_MeetUp_Text_0:
	.string "{COLOR}{RED}You made it, Clad!\nWe're about halfway to Wing Peak now.\lI'm soooo excited!$"

OroTown_Trigger_MeetUp_Text_1:
	.string "{COLOR}{GREEN}Yo, lads!$"

OroTown_Trigger_MeetUp_Text_2:
	.string "{COLOR}{BLUE}Looks like we're finally all\nback together.\lIt's been a while!$"

OroTown_Trigger_MeetUp_Text_3:
	.string "{COLOR}{GREEN}You okay, Fern?$"

OroTown_Trigger_MeetUp_Text_4:
	.string "{COLOR}{RED}I'm a-okay now, guys!\pMore importantly, shouldn't we go?$"

OroTown_Trigger_MeetUp_Text_5:
	.string "{COLOR}{GREEN}Doesn't look like that's gonna be easy.$"

OroTown_Trigger_MeetUp_Text_6:
	.string "{COLOR}{RED}Oh no…\nIt's him again!$"

OroTown_Trigger_MeetUp_Text_7:
	.string "{COLOR}{RED}We can't do it…\nIt's over!\lNas is gonna stop us all here…$"

OroTown_Trigger_MeetUp_Text_8:
	.string "{COLOR}{GREEN}Then we're just gonna have to kick\nNas and his goons to kingdom come!$"

OroTown_Trigger_MeetUp_Text_9:
	.string "{COLOR}{GREEN}Fern!\nAre you a man?\lYou are, aren't you?\pPart of being a man is knowing\nthat nobody has the right\lto get in the way of your dream!$"

OroTown_Trigger_MeetUp_Text_10:
	.string "{COLOR}{RED}But…$"

OroTown_Trigger_MeetUp_Text_11:
	.string "{COLOR}{BLUE}You wanted to go to Wing Peak,\ndidn't you?\lYou still feel that way, right?$"

OroTown_Trigger_MeetUp_Text_12:
	.string "{COLOR}{RED}Yeah…\nI do.\pI was going to wish for power…\npower to beat Nas…$"

OroTown_Trigger_MeetUp_Text_13:
	.string "{COLOR}{GREEN}You don't need a poxy wish to\ncrush Nas!\pHe's been causing trouble for you\nfor a long time, right?\pThen… it's time you beat him!\pEven if you're a bit of a fairy…\nthat's alright!\lIt's who you are.$"

OroTown_Trigger_MeetUp_Text_14:
	.string "{COLOR}{RED}Rye…\nYou're right!$"

OroTown_Trigger_MeetUp_Text_15:
	.string "{COLOR}{RED}NAS!!!$"

OroTown_Trigger_MeetUp_Text_16:
	.string "Why, if it isn't the little\nlady Fern!$"

OroTown_Trigger_MeetUp_Text_17:
	.string "{COLOR}{RED}Shut your mouth!$"

OroTown_Trigger_MeetUp_Text_18:
	.string "Oh, so you're up for a scrap?\nDon't you worry, Fern…\pI'll give you a beating that\nyou'll never forget!$"

OroTown_Trigger_MeetUp_Text_19:
	.string "{COLOR}{RED}For a long time now you've been\na massive pain, but that ends\lhere and now!\pI'll get to Wing Peak,\nand you ain't gonna stop me!$"

OroTown_EventScript_AfterBattle_Text_0:
	.string "{COLOR}{RED}Well?!\nHow's that?!$"

OroTown_EventScript_AfterBattle_Text_1:
	.string "What the hell?!\nI can't believe this…$"

OroTown_EventScript_AfterBattle_Text_2:
	.string "Nas lost…$"

OroTown_EventScript_AfterBattle_Text_3:
	.string "W-what do we do?$"

OroTown_EventScript_AfterBattle_Text_4:
	.string "Let's get out of here!$"

OroTown_EventScript_AfterBattle_Text_5:
	.string "N-NO!\nWait, all of you!$"

OroTown_EventScript_AfterBattle_Text_6:
	.string "…$"

OroTown_EventScript_AfterBattle_Text_7:
	.string "{COLOR}{RED}You picked on me whenever you\nsaw me, Nas.\pIf I was in the bathroom at school,\nyou'd dunk my head in the toilet.\pOn that field trip last year,\nyou set a herd of Bouffalant on me!$"

OroTown_EventScript_AfterBattle_Text_8:
	.string "{COLOR}{RED}I want to know why…\nWhy did you do all that?!$"

OroTown_EventScript_AfterBattle_Text_9:
	.string "… …\n… …$"

OroTown_EventScript_AfterBattle_Text_10:
	.string "{COLOR}{RED}You've really got nothing to say?!$"

OroTown_EventScript_AfterBattle_Text_11:
	.string "I…\nI just…\p… …\n… …\pWell, I was just doing\nwhat I had to.$"

OroTown_EventScript_AfterBattle_Text_12:
	.string "{COLOR}{GREEN}What are you talking about?$"

OroTown_EventScript_AfterBattle_Text_13:
	.string "People like you don't get it.$"

OroTown_EventScript_AfterBattle_Text_14:
	.string "What a weird guy.$"

OroTown_EventScript_AfterBattle_Text_15:
	.string "{COLOR}{BLUE}You surprised me, Fern.$"

OroTown_EventScript_AfterBattle_Text_16:
	.string "{COLOR}{RED}Huh?\nWhat do you mean?$"

OroTown_EventScript_AfterBattle_Text_17:
	.string "{COLOR}{BLUE}I never knew you'd have that\nkind of rage inside of you…$"

OroTown_EventScript_AfterBattle_Text_18:
	.string "{COLOR}{RED}I guess it was just brewing for\na long, long time.$"

OroTown_EventScript_AfterBattle_Text_19:
	.string "{COLOR}{BLUE}People sure are surprising.$"

OroTown_EventScript_AfterBattle_Text_20:
	.string "{COLOR}{RED}Thank you, guys.\pBecause of all of you, I was\nfinally able to properly\lstand up to Nas.$"

OroTown_EventScript_AfterBattle_Text_21:
	.string "{COLOR}{GREEN}Don't mention it, man!\nThat's what friends are for.$"

OroTown_EventScript_AfterBattle_Text_22:
	.string "That's right.$"

OroTown_EventScript_AfterBattle_Text_23:
	.string "{COLOR}{BLUE}Mhm!$"

OroTown_EventScript_AfterBattle_Text_24:
	.string "{COLOR}{RED}Well then, everyone!\pLike I said, we're about halfway\nbetween Prime City and Wing Peak.\pNot too long, at we'll be\nat Wing Peak!\pAhh, I'm so excited!$"

OroTown_EventScript_AfterBattle_Text_25:
	.string "{COLOR}{BLUE}After we pass the Land Bridge,\nwe're going through Viento Walk,\lright?$"

OroTown_EventScript_AfterBattle_Text_26:
	.string "{COLOR}{RED}You got it, Malimo old pal!\nLet's all meet at Viento Walk!$"
