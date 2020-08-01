PistaVillage_Dojo_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 2
	goto_if_ge PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_PISTA_VILLAGE_DOJO_DEFEATED_SANCHEZ, PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto_if_set FLAG_PISTA_VILLAGE_DOJO_DEFEATED_SANCHEZ, PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxy 6, 6, 3
	setobjectxyperm 6, 6, 3
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	return

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxy 5, 2, 22
	setobjectxyperm 5, 2, 22
	setobjectmovementtype 5, MOVEMENT_TYPE_LOOK_AROUND
	goto PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_3

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxy 5, 6, 21
	setobjectxyperm 5, 6, 21
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	settrainerflag TRAINER_G2_MAGA
	settrainerflag TRAINER_G2_HOLLY
	settrainerflag TRAINER_G2_AEMILLA
	settrainerflag TRAINER_G2_IGNACIO
	goto PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_3

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PISTA_VILLAGE_STATE, 1, PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	delay 8
	applymovement 6, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	delay 8
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	delay 16
	applymovement 6, Common_Movement_FaceDown
	waitmovement 0
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
	closemessage
	applymovement 6, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
	closemessage
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
	msgbox PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11
	closemessage
	delay 8
	fadescreen 1
	setvar VAR_PISTA_VILLAGE_STATE, 2
	setobjectxy 5, 2, 22
	setobjectxyperm 5, 2, 22
	setobjectmovementtype 5, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxy 6, 6, 3
	setobjectxyperm 6, 6, 3
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	fadescreen 0
	releaseall
	end


PistaVillage_Dojo_EventScript_Ryan::
	lock
	faceplayer
	msgbox PistaVillage_Dojo_EventScript_Ryan_Text_0
	release
	end


PistaVillage_Dojo_EventScript_Sanchez::
	lock
	faceplayer
	goto_if_set FLAG_PISTA_VILLAGE_DOJO_DEFEATED_SANCHEZ, PistaVillage_Dojo_EventScript_Sanchez_2
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PistaVillage_Dojo_EventScript_Sanchez_8
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_10
PistaVillage_Dojo_EventScript_Sanchez_1:
	release
	end

PistaVillage_Dojo_EventScript_Sanchez_2:
	goto_if_set FLAG_RECIEVED_EXPERT_BELT, PistaVillage_Dojo_EventScript_Sanchez_5
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_1
	compare VAR_RESULT, 0
	goto_if_eq PistaVillage_Dojo_EventScript_Sanchez_11
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_3
	setflag FLAG_RECIEVED_EXPERT_BELT
	goto PistaVillage_Dojo_EventScript_Sanchez_1

PistaVillage_Dojo_EventScript_Sanchez_5:
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_0
	goto PistaVillage_Dojo_EventScript_Sanchez_1

PistaVillage_Dojo_EventScript_Sanchez_8:
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_5
	closemessage
	trainerbattle_no_intro TRAINER_G2_SANCHEZ, PistaVillage_Dojo_EventScript_Sanchez_Text_6
	setflag FLAG_PISTA_VILLAGE_DOJO_DEFEATED_SANCHEZ
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_7
	giveitem ITEM_EXPERT_BELT
	compare VAR_RESULT, 0
	goto_if_eq PistaVillage_Dojo_EventScript_Sanchez_15
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_8
	setflag FLAG_RECIEVED_EXPERT_BELT
PistaVillage_Dojo_EventScript_Sanchez_14:
	setobjectxy 5, 6, 21
	setobjectxyperm 5, 6, 21
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	settrainerflag TRAINER_G2_MAGA
	settrainerflag TRAINER_G2_HOLLY
	settrainerflag TRAINER_G2_AEMILLA
	settrainerflag TRAINER_G2_IGNACIO
	setvar VAR_PISTA_VILLAGE_STATE, 3
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_9
	goto PistaVillage_Dojo_EventScript_Sanchez_1

PistaVillage_Dojo_EventScript_Sanchez_11:
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_2
	goto PistaVillage_Dojo_EventScript_Sanchez_1

PistaVillage_Dojo_EventScript_Sanchez_15:
	msgbox PistaVillage_Dojo_EventScript_Sanchez_Text_2
	goto PistaVillage_Dojo_EventScript_Sanchez_14


PistaVillage_Dojo_EventScript_Maga::
	trainerbattle_single TRAINER_G2_MAGA, PistaVillage_Dojo_EventScript_Maga_Text_0, PistaVillage_Dojo_EventScript_Maga_Text_1
	msgbox PistaVillage_Dojo_EventScript_Maga_Text_2
	release
	end


PistaVillage_Dojo_EventScript_Holly::
	trainerbattle_single TRAINER_G2_HOLLY, PistaVillage_Dojo_EventScript_Maga_Text_0, PistaVillage_Dojo_EventScript_Maga_Text_1
	msgbox PistaVillage_Dojo_EventScript_Maga_Text_2
	release
	end


PistaVillage_Dojo_EventScript_Aemilla::
	trainerbattle_single TRAINER_G2_AEMILLA, PistaVillage_Dojo_EventScript_Maga_Text_0, PistaVillage_Dojo_EventScript_Maga_Text_1
	msgbox PistaVillage_Dojo_EventScript_Maga_Text_2
	release
	end


PistaVillage_Dojo_EventScript_Ignacio::
	trainerbattle_single TRAINER_G2_IGNACIO, PistaVillage_Dojo_EventScript_Maga_Text_0, PistaVillage_Dojo_EventScript_Maga_Text_1
	msgbox PistaVillage_Dojo_EventScript_Maga_Text_2
	release
	end


PistaVillage_Dojo_Trigger_AfterBeatenSanchez::
	lockall
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 6
	goto_if_eq PistaVillage_Dojo_Trigger_AfterBeatenSanchez_2
	applymovement 5, PistaVillage_Dojo_Movement_RyanMoveToPlayerRight
PistaVillage_Dojo_Trigger_AfterBeatenSanchez_1:
	waitmovement 0
	msgbox PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_0
	msgbox PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_1
	msgbox PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_2
	closemessage
	delay 8
	applymovement 5, PistaVillage_Dojo_Movement_RyanLeave
	waitmovement 0
	removeobject 5
	setflag FLAG_PISTA_VILLAGE_DOJO_HIDE_RYAN
	playse SE_TK_WARPOUT
	waitse
	delay 8
	setvar VAR_PISTA_VILLAGE_STATE, 4
	releaseall
	end

PistaVillage_Dojo_Trigger_AfterBeatenSanchez_2:
	applymovement 5, Common_Movement_FaceUp
	goto PistaVillage_Dojo_Trigger_AfterBeatenSanchez_1


PistaVillage_Dojo_Movement_RyanLeave:
	walk_down
	walk_down
	step_end

PistaVillage_Dojo_Movement_RyanMoveToPlayerRight:
	walk_right
	face_up
	step_end

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "You did well, Ryan.\pIt's clear you and your Pokémon\nhave a strong bond.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "{COLOR}{GREEN}It's because we're always working\nthe fields together.\pWe've got a bond that goes\nbeyond just battles.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "{COLOR}{GREEN}Oh, Clad!\nCome to get me, have you?$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "Actually, we're gonna stay here a\nlittle longer.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
	.string "{COLOR}{GREEN}Okay, you got it!\pHey, let me introduce you.\nThis is Sanchez.\lHe runs a dojo here.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
	.string "That's right!\nThis dojo just opened.\pBecause of that, I'm inviting\npeople to train with us for free.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
	.string "Ryan told me that you and\nyour friends are going to\lclimb Wing Peak.\pIn that case, you'll need all\nof the training you can get.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
	.string "What kind of training did you\nhave in mind?$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
	.string "Pokémon training, of course!\pThere are four volunteers here now.\pIf you can beat them all,\nthen speak to me at the end.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
	.string "{COLOR}{GREEN}You should give it a shot, Clad.\pThese guys are tough, but they're\nreally fun to battle.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
	.string "Okay, I'll take on your challenge.$"

PistaVillage_Dojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
	.string "Good to hear!\nThen, let's begin.$"

PistaVillage_Dojo_EventScript_Ryan_Text_0:
	.string "Apparently, Sanchez ran a dojo like\nthis in Hoenn a couple years back.\pI wonder why he decided to\nmove to Ríota.\pAfter all, you don't really\nfind many oriental places here.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_0:
	.string "Well, youngster.\pI hope that I can grow this dojo into\na truly remarkable place for Trainers\nto gather and train at.\pI hope that this training has\ngreater prepared you for Wing Peak!$"

PistaVillage_Dojo_EventScript_Sanchez_Text_1:
	.string "Before you go,\nI'd like you to have this.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_2:
	.string "Oh, my apologies.\nYou have no room for this.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_3:
	.string "If a Pokémon wears that\nExpert Belt, then its super-effective\lattacks will become much more\lpowerful.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_4:
	.string "Ah, so you beat the other Trainers!\nThat's good to see.\pOf course, I would like to test\nyour strength for myself now.\pThink of it as one final challenge.\nIs this acceptable?$"

PistaVillage_Dojo_EventScript_Sanchez_Text_5:
	.string "Then let us begin!$"

PistaVillage_Dojo_EventScript_Sanchez_Text_6:
	.string "Very good.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_7:
	.string "That was a grand battle.\pJust like your friend, you and\nyour Pokémon have a strong bond.\pPlease, take this.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_8:
	.string "If a Pokémon wears that Expert Belt,\nthen its super-effective attacks\lwill become much more powerful.$"

PistaVillage_Dojo_EventScript_Sanchez_Text_9:
	.string "Well, youngster.\pI hope that I can grow this dojo into\na truly remarkable place for Trainers\lto gather and train at.\pI hope that this training has\ngreater prepared you for Wing Peak!$"

PistaVillage_Dojo_EventScript_Sanchez_Text_10:
	.string "Ah, you need to prepare first?\nVery well.\lTalk to me when you're ready.$"

PistaVillage_Dojo_EventScript_Maga_Text_0:
	.string "Battle me now!$"

PistaVillage_Dojo_EventScript_Maga_Text_1:
	.string "No, I lost!$"

PistaVillage_Dojo_EventScript_Maga_Text_2:
	.string "You're good.$"

PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_0:
	.string "{COLOR}{GREEN}So you beat Sanchez too, huh?$"

PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_1:
	.string "Yeah.\nHe's pretty strong.$"

PistaVillage_Dojo_Trigger_AfterBeatenSanchez_Text_2:
	.string "{COLOR}{GREEN}Right?\pAlthough, he's no match for Trainers\nfrom Ríota.\pWell, we should get going now.\pI've just gotten a text from Fern\ntelling me to meet him at Agudo Woodland.$"
