AgudoWoodland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 5
	goto_if_ge AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxy 1, 117, 17
	setobjectxyperm 1, 117, 17
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PISTA_VILLAGE_STATE, 4, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	fadescreen 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 10, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
	case 11, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
	case 12, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5
	case 13, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6
	case 14, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
	case 15, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8
	case 16, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX17
AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
	waitmovement 0
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	fadescreen 0
	delay 8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
	closemessage
	delay 8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
	closemessage
	delay 8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
	closemessage
	delay 8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9
	closemessage
	delay 8
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11
	closemessage
	delay 8
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12
	closemessage
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19
	giveitem ITEM_HM02_FLY, 1
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21
	msgbox AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22
	closemessage
	delay 8
	fadescreen 1
	setobjectxy 1, 117, 17
	setobjectxyperm 1, 117, 17
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_PISTA_VILLAGE_STATE, 5
	fadescreen 0
	delay 8
	releaseall
	end

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX10
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX11
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX12
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX13
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX14
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX15
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMalimoX16
	goto AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


AgudoWoodland_EventScript_Keila::
	trainerbattle_single TRAINER_G2_KEILA, AgudoWoodland_EventScript_Keila_Text_0, AgudoWoodland_EventScript_Keila_Text_1
	msgbox AgudoWoodland_EventScript_Keila_Text_2
	release
	end


AgudoWoodland_EventScript_Des::
	trainerbattle_single TRAINER_G2_DES, AgudoWoodland_EventScript_Des_Text_0, AgudoWoodland_EventScript_Des_Text_1
	msgbox AgudoWoodland_EventScript_Des_Text_2
	release
	end


AgudoWoodland_EventScript_Franco::
	trainerbattle_single TRAINER_G2_FRANCO, AgudoWoodland_EventScript_Franco_Text_0, AgudoWoodland_EventScript_Franco_Text_1
	msgbox AgudoWoodland_EventScript_Franco_Text_2
	release
	end


AgudoWoodland_EventScript_Cristian::
	trainerbattle_single TRAINER_G2_CRISTIAN, AgudoWoodland_EventScript_Cristian_Text_0, AgudoWoodland_EventScript_Cristian_Text_1
	msgbox AgudoWoodland_EventScript_Cristian_Text_2
	release
	end


AgudoWoodland_EventScript_Mariana::
	trainerbattle_single TRAINER_G2_MARIANA, AgudoWoodland_EventScript_Mariana_Text_0, AgudoWoodland_EventScript_Mariana_Text_1
	msgbox AgudoWoodland_EventScript_Mariana_Text_2
	release
	end


AgudoWoodland_EventScript_Rep::
	trainerbattle_single TRAINER_G2_REP, AgudoWoodland_EventScript_Rep_Text_0, AgudoWoodland_EventScript_Rep_Text_1
	msgbox AgudoWoodland_EventScript_Rep_Text_2
	release
	end


AgudoWoodland_EventScript_Luca::
	trainerbattle_single TRAINER_G2_LUCA, AgudoWoodland_EventScript_Luca_Text_0, AgudoWoodland_EventScript_Luca_Text_1
	msgbox AgudoWoodland_EventScript_Luca_Text_2
	release
	end


AgudoWoodland_EventScript_Kireiya::
	trainerbattle_single TRAINER_G2_KIREIYA, AgudoWoodland_EventScript_Kireiya_Text_0, AgudoWoodland_EventScript_Kireiya_Text_1
	msgbox AgudoWoodland_EventScript_Kireiya_Text_2
	release
	end


AgudoWoodland_Trigger_EntranceMeetUp::
	lockall
	fadescreen 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 117, AgudoWoodland_Trigger_EntranceMeetUp_3
	case 118, AgudoWoodland_Trigger_EntranceMeetUp_4
	case 119, AgudoWoodland_Trigger_EntranceMeetUp_5
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMeetupX120
AgudoWoodland_Trigger_EntranceMeetUp_1:
	waitmovement 0
	fadescreen 0
	delay 8
	applymovement 10, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_0
	closemessage
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_1
	closemessage
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_2
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_3
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_4
	closemessage
	trainerbattle_no_intro TRAINER_G2_MALIMO, AgudoWoodland_Trigger_EntranceMeetUp_Text_5
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 1, Common_Movement_FaceRight
	applymovement 10, Common_Movement_FaceRight
	waitmovement 0
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_7
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_8
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToBattle
	waitmovement 0
	trainerbattle_no_intro TRAINER_G2_RYAN, AgudoWoodland_Trigger_EntranceMeetUp_Text_9
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_10
	closemessage
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_11
	closemessage
	msgbox AgudoWoodland_Trigger_EntranceMeetUp_Text_12
	closemessage
	fadescreen 1
	removeobject 1
	removeobject 10
	removeobject 9
	setflag FLAG_AGUDO_WOODLAND_HIDE_FERN
	setflag FLAG_AGUDO_WOODLAND_HIDE_MALIMO
	setflag FLAG_AGUDO_WOODLAND_HIDE_RYAN
	setvar VAR_PISTA_VILLAGE_STATE, 6
	fadescreen 0
	delay 8
	releaseall
	end

AgudoWoodland_Trigger_EntranceMeetUp_3:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMeetupX117
	goto AgudoWoodland_Trigger_EntranceMeetUp_1

AgudoWoodland_Trigger_EntranceMeetUp_4:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMeetupX118
	goto AgudoWoodland_Trigger_EntranceMeetUp_1

AgudoWoodland_Trigger_EntranceMeetUp_5:
	applymovement OBJ_EVENT_ID_PLAYER, AgudoWoodland_Movement_PlayerMoveToMeetupX119
	goto AgudoWoodland_Trigger_EntranceMeetUp_1


AgudoWoodland_Movement_PlayerMoveToMalimoX10:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX11:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_right
	walk_fastest_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX12:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX13:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	face_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX14:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_left
	face_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX15:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	face_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX16:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	face_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMalimoX17:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	face_right
	step_end

AgudoWoodland_Movement_PlayerMoveToMeetupX117:
	walk_fastest_right
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

AgudoWoodland_Movement_PlayerMoveToMeetupX118:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

AgudoWoodland_Movement_PlayerMoveToMeetupX119:
	walk_fastest_left
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

AgudoWoodland_Movement_PlayerMoveToMeetupX120:
	walk_fastest_left
	walk_fastest_left
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

AgudoWoodland_Movement_PlayerMoveToBattle:
	walk_up
	face_right
	step_end

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "{COLOR}{BLUE}…Hey, Clad.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Hey, man.\pHave Fern and Rye not arrived yet?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "{COLOR}{BLUE}Actually, they already went ahead.\nI told them to.\pI need to talk to you about\nsomething.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "This doesn't sound good.\nYou only talk like this when\lsomething serious has gone down.\pWhat happened?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
	.string "{COLOR}{BLUE}…I just had a fight on the phone\nwith my parents.\pThey want me to go home.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
	.string "I see…\nAre you going to?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
	.string "{COLOR}{BLUE}Well…\nI don't know.\pClad, can I ask you something?\pIt's something that I think only you\ncould really help me with.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
	.string "Anything.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
	.string "{COLOR}{BLUE}You're on the path to becoming\na real professional swimmer.\pYou even did the Swim-Off last week,\nand I mean, that's a serious\lnational event.\pBut I mean…\nthat was of your own will, right?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
	.string "My own will?\nWhat do you mean?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
	.string "{COLOR}{BLUE}Nobody's pressuring you to be a\ngreat swimmer, are they?\pYou're really doing it because you\nlove to compete?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
	.string "Of course!\nIt's been my dream for a long time.\pYou've got a dream too, right?\nYou said you wanted to be a doctor.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
	.string "{COLOR}{BLUE}I realised…\nthat's not my dream.\pIt's my parents' dream that\nI become a doctor.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
	.string "{COLOR}{BLUE}I've always been told that being\na doctor is the way to be…\pBoth of my parents are doctors.\nIt's the 'only path' to them.\pBut on this journey, I've realised\nthat I don't want it to be my path.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
	.string "I see…\nhave you told them about this?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
	.string "{COLOR}{BLUE}That was what the argument on\nthe phone was about.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
	.string "I'm sure they'll come around eventually.\pBut…\nare you really gonna leave now?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
	.string "{COLOR}{BLUE}No way.\nI told them that I'll be home soon.\pWe came this far, right?\nJust got to head through these woods.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18:
	.string "Fair enough.\nAnd yeah, we're close to Wing Peak now.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19:
	.string "{COLOR}{BLUE}Before we get going,\nI want you to have this.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20:
	.string "{COLOR}{BLUE}That's the HM for Fly.\nY'know how it works, right?$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21:
	.string "You betcha, man.\nJust use it on a Pokémon.$"

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22:
	.string "{COLOR}{BLUE}My parents gave that HM to me\nso that I could get home at any time.\pI don't need it right now, though.\pSo if you need to go back\nsomewhere to help you prepare for\lWing Peak, go ahead.\pWith that said, I'm going to get\na move on, Clad!$"

AgudoWoodland_EventScript_Keila_Text_0:
	.string "The stars have aligned!\nYou will lose to me!$"

AgudoWoodland_EventScript_Keila_Text_1:
	.string "This is… 'fate'.$"

AgudoWoodland_EventScript_Keila_Text_2:
	.string "Stargazing fills me with a\nsense of inner peace.$"

AgudoWoodland_EventScript_Des_Text_0:
	.string "Where are you going?\nWhat's the rush?$"

AgudoWoodland_EventScript_Des_Text_1:
	.string "Take it easy!$"

AgudoWoodland_EventScript_Des_Text_2:
	.string "So you're going to Wing Peak?\nYou'd better be prepared!$"

AgudoWoodland_EventScript_Franco_Text_0:
	.string "The 'future' and the 'past'…\nWhich is more important?$"

AgudoWoodland_EventScript_Franco_Text_1:
	.string "Oh no!$"

AgudoWoodland_EventScript_Franco_Text_2:
	.string "Perhaps the 'present' is more\nimportant than both the 'future'\land the 'past'…$"

AgudoWoodland_EventScript_Cristian_Text_0:
	.string "Are you in trouble?\pI'll help you out…\nwith a battle!$"

AgudoWoodland_EventScript_Cristian_Text_1:
	.string "Now I'm in trouble!$"

AgudoWoodland_EventScript_Cristian_Text_2:
	.string "I knew you were fine.\pI just didn't know how to ask\nfor a battle!$"

AgudoWoodland_EventScript_Mariana_Text_0:
	.string "Hello, there.\nWhy don't we battle?$"

AgudoWoodland_EventScript_Mariana_Text_1:
	.string "Oh, fiddlesticks!$"

AgudoWoodland_EventScript_Mariana_Text_2:
	.string "Do you ever wonder if plants\nare actually a special type\lof Pokémon?\pNo?\nJust me?\lOkay then.$"

AgudoWoodland_EventScript_Rep_Text_0:
	.string "Dragon-type Pokémon are the strongest!\pThey'll beat any non-dragon easily!$"

AgudoWoodland_EventScript_Rep_Text_1:
	.string "My precious Druddigon!$"

AgudoWoodland_EventScript_Rep_Text_2:
	.string "Are you secretly a dragon?\pAfter all, only dragons can beat\ndragons.\pWhat? Fairy-type?\nWhat's that?$"

AgudoWoodland_EventScript_Luca_Text_0:
	.string "You're my hundredth opponent today!\pUnbeaten streak of one hundred,\nhere I come!$"

AgudoWoodland_EventScript_Luca_Text_1:
	.string "You're kidding, right?$"

AgudoWoodland_EventScript_Luca_Text_2:
	.string "Looks like I have to start my\nstreak all over again.$"

AgudoWoodland_EventScript_Kireiya_Text_0:
	.string "I'm your opponent!\nDon't try and get away!$"

AgudoWoodland_EventScript_Kireiya_Text_1:
	.string "I haven't lost like this\nsince the Kalos League…$"

AgudoWoodland_EventScript_Kireiya_Text_2:
	.string "I've challenged quite a few Pokémon\nLeagues in my time.$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_0:
	.string "{COLOR}{RED}We're finally here…\nIt's Wing Peak!\pThe genie on the peak is waiting,\nso let's go, everyone!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_1:
	.string "{COLOR}{BLUE}Wait!\pI feel as if I need a\nlittle more training before\lI head on in.$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_2:
	.string "{COLOR}{BLUE}Clad, would you have a quick\nbattle with me?$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_3:
	.string "You got it, Malimo!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_4:
	.string "{COLOR}{BLUE}Then let's start!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_5:
	.string "Aw…$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_6:
	.string "{COLOR}{BLUE}Man, you're too good, Clad.\pThanks, though.\nI feel a lot more ready now.$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_7:
	.string "{COLOR}{GREEN}Mind having a match with me too?\pI've been battling a lot on this\ntrip of ours.\pI want you see how much stronger\nmy team has grown.$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_8:
	.string "Alright!\nLet's do it.$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_9:
	.string "You've grown stronger, too!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_10:
	.string "{COLOR}{GREEN}Whew, thanks for the battle!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_11:
	.string "No problem!$"

AgudoWoodland_Trigger_EntranceMeetUp_Text_12:
	.string "{COLOR}{RED}Alright, if everyone's ready,\nlet's start the climb!$"
