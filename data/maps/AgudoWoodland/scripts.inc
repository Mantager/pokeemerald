AgudoWoodland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 4
	goto_if_ge AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxy 1, 117, 17
	setobjectxyperm 1, 117, 17
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PISTA_VILLAGE_STATE, 3, AgudoWoodland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
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
	setvar VAR_PISTA_VILLAGE_STATE, 4
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
