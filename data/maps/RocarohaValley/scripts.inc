RocarohaValley_MapScripts::
	.byte 0


RocarohaValley_EventScript_Santi::
	trainerbattle_single TRAINER_G2_SANTI, RocarohaValley_EventScript_Santi_Text_0, RocarohaValley_EventScript_Santi_Text_1
	msgbox RocarohaValley_EventScript_Santi_Text_2
	release
	end


RocarohaValley_EventScript_Lucia::
	trainerbattle_single TRAINER_G2_LUCIA, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Vicky::
	trainerbattle_single TRAINER_G2_VICKY, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Rafael::
	trainerbattle_single TRAINER_G2_RAFAEL, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Paolo::
	trainerbattle_single TRAINER_G2_PAOLO, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Martin::
	trainerbattle_single TRAINER_G2_MARTIN, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Luisa::
	trainerbattle_single TRAINER_G2_LUISA, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Alvaro::
	trainerbattle_single TRAINER_G2_ALVARO, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Belen::
	trainerbattle_single TRAINER_G2_BELEN, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Mari::
	trainerbattle_double TRAINER_G2_MARI_AND_NOEL, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1, RocarohaValley_EventScript_Mari_Text_0
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Noel::
	trainerbattle_double TRAINER_G2_MARI_AND_NOEL, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1, RocarohaValley_EventScript_Mari_Text_0
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Milton::
	trainerbattle_single TRAINER_G2_MILTON, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_EventScript_Lionel::
	trainerbattle_single TRAINER_G2_LIONEL, RocarohaValley_EventScript_Lucia_Text_0, RocarohaValley_EventScript_Lucia_Text_1
	msgbox RocarohaValley_EventScript_Lucia_Text_2
	release
	end


RocarohaValley_Trigger_MeetNas::
	lockall
	applymovement 14, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement 14, Common_Movement_ExclamationMark
	waitmovement 0
	delay 16
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 10
	goto_if_eq RocarohaValley_Trigger_MeetNas_2
RocarohaValley_Trigger_MeetNas_1:
	compare VAR_TEMP_1, 11
	goto_if_eq RocarohaValley_Trigger_MeetNas_5
RocarohaValley_Trigger_MeetNas_4:
	waitmovement 0
	msgbox RocarohaValley_Trigger_MeetNas_Text_0
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_1
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_2
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_3
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_4
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_5
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_6
	applymovement 14, Common_Movement_WalkUpBackwards
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	msgbox RocarohaValley_Trigger_MeetNas_Text_7
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_8
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_9
	delay 8
	applymovement 14, Common_Movement_FaceUp
	waitmovement 0
	msgbox RocarohaValley_Trigger_MeetNas_Text_10
	delay 8
	msgbox RocarohaValley_Trigger_MeetNas_Text_11
	delay 16
	applymovement 14, Common_Movement_FaceDown
	waitmovement 0
	msgbox RocarohaValley_Trigger_MeetNas_Text_12
	closemessage
	applymovement 14, RocarohaValley_Movement_NasLeave
	msgbox RocarohaValley_Trigger_MeetNas_Text_13
	closemessage
	waitmovement 0
	removeobject 14
	setflag FLAG_ROCAROHA_VALLEY_HIDE_NAS
	delay 16
	msgbox RocarohaValley_Trigger_MeetNas_Text_14
	releaseall
	setvar VAR_YANURAS_TOWN_STATE, 3
	end

RocarohaValley_Trigger_MeetNas_2:
	applymovement 14, Common_Movement_WalkDown
	goto RocarohaValley_Trigger_MeetNas_1

RocarohaValley_Trigger_MeetNas_5:
	applymovement 14, RocarohaValley_Movement_NasMoveToPlayer
	goto RocarohaValley_Trigger_MeetNas_4


RocarohaValley_Movement_NasMoveToPlayer:
	walk_down
	walk_right
	face_down
	step_end

RocarohaValley_Movement_NasLeave:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocarohaValley_EventScript_Santi_Text_0:
	.string "I'm a fish out of water!$"

RocarohaValley_EventScript_Santi_Text_1:
	.string "All I could do was flop!$"

RocarohaValley_EventScript_Santi_Text_2:
	.string "Y'know, lately I've been leaping\noff the cliffs at the Land Bridge.\pIt's great fun, I tell you!$"

RocarohaValley_EventScript_Lucia_Text_0:
	.string "Battle me now!$"

RocarohaValley_EventScript_Lucia_Text_1:
	.string "No, I lost!$"

RocarohaValley_EventScript_Lucia_Text_2:
	.string "You're good.$"

RocarohaValley_EventScript_Mari_Text_0:
	.string "We only battle folks with\ntwo Pokémon!$"

RocarohaValley_Trigger_MeetNas_Text_0:
	.string "Well well well, if it isn't\nRíota's own swimming superstar, Clad!$"

RocarohaValley_Trigger_MeetNas_Text_1:
	.string "Nas…\nWhat do you want?$"

RocarohaValley_Trigger_MeetNas_Text_2:
	.string "I heard about your little trip, Clad.\nA genie that grants wishes?\lBahaha! You goons make me crack up.$"

RocarohaValley_Trigger_MeetNas_Text_3:
	.string "…Who told you about that?\nFern didn't want anyone else to know…$"

RocarohaValley_Trigger_MeetNas_Text_4:
	.string "Man Clad, you're just full of questions\ntoday, aren't you?\pWell, let me ask you a question.\nWhat's the name of the airy\nfairy loser that you're best mates with?$"

RocarohaValley_Trigger_MeetNas_Text_5:
	.string "You mean Fern…$"

RocarohaValley_Trigger_MeetNas_Text_6:
	.string "There we go!\nYou're quick on the uptake, pool boy!\pThat ponce loves a good chat\nwith his buddy Nas…$"

RocarohaValley_Trigger_MeetNas_Text_7:
	.string "You've been at him again, haven't you?\nYou were waiting here for him!$"

RocarohaValley_Trigger_MeetNas_Text_8:
	.string "Don't get your swim shorts\nin a twist…\pShe's fine.$"

RocarohaValley_Trigger_MeetNas_Text_9:
	.string "Stop playing around…\nHow did you know where Fern was?$"

RocarohaValley_Trigger_MeetNas_Text_10:
	.string "I didn't know at all, Phelpsie.\nI was just passing by!\lIt was sheer coincidence.\pWhat do you think I do,\nstalk wimps for a living?$"

RocarohaValley_Trigger_MeetNas_Text_11:
	.string "Then where's Fern now?!\nTell me! Nas!$"

RocarohaValley_Trigger_MeetNas_Text_12:
	.string "Wouldn't you like to know?$"

RocarohaValley_Trigger_MeetNas_Text_13:
	.string "Wait!\nNas!$"

RocarohaValley_Trigger_MeetNas_Text_14:
	.string "(… …\n… …)\p(I ought to wait for the others, but…\nI need to find Fern.)\p(I'll send a text to Malimo quick.)\p… …\n… …\pThere we go.$"
