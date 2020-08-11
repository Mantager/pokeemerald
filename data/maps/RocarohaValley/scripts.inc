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
	trainerbattle_single TRAINER_G2_VICKY, RocarohaValley_EventScript_Vicky_Text_0, RocarohaValley_EventScript_Vicky_Text_1
	msgbox RocarohaValley_EventScript_Vicky_Text_2
	release
	end


RocarohaValley_EventScript_Rafael::
	trainerbattle_single TRAINER_G2_RAFAEL, RocarohaValley_EventScript_Rafael_Text_0, RocarohaValley_EventScript_Rafael_Text_1
	msgbox RocarohaValley_EventScript_Rafael_Text_2
	release
	end


RocarohaValley_EventScript_Paolo::
	trainerbattle_single TRAINER_G2_PAOLO, RocarohaValley_EventScript_Paolo_Text_0, RocarohaValley_EventScript_Paolo_Text_1
	msgbox RocarohaValley_EventScript_Paolo_Text_2
	release
	end


RocarohaValley_EventScript_Martin::
	trainerbattle_single TRAINER_G2_MARTIN, RocarohaValley_EventScript_Martin_Text_0, RocarohaValley_EventScript_Martin_Text_1
	msgbox RocarohaValley_EventScript_Martin_Text_2
	release
	end


RocarohaValley_EventScript_Luisa::
	trainerbattle_single TRAINER_G2_LUISA, RocarohaValley_EventScript_Luisa_Text_0, RocarohaValley_EventScript_Luisa_Text_1
	msgbox RocarohaValley_EventScript_Luisa_Text_2
	release
	end


RocarohaValley_EventScript_Alvaro::
	trainerbattle_single TRAINER_G2_ALVARO, RocarohaValley_EventScript_Alvaro_Text_0, RocarohaValley_EventScript_Alvaro_Text_1
	msgbox RocarohaValley_EventScript_Alvaro_Text_2
	release
	end


RocarohaValley_EventScript_Belen::
	trainerbattle_single TRAINER_G2_BELEN, RocarohaValley_EventScript_Belen_Text_0, RocarohaValley_EventScript_Belen_Text_1
	msgbox RocarohaValley_EventScript_Belen_Text_2
	release
	end


RocarohaValley_EventScript_Mari::
	trainerbattle_double TRAINER_G2_MARI_AND_NOEL, RocarohaValley_EventScript_Mari_Text_0, RocarohaValley_EventScript_Mari_Text_1, RocarohaValley_EventScript_Mari_Text_2
	msgbox RocarohaValley_EventScript_Mari_Text_3
	release
	end


RocarohaValley_EventScript_Noel::
	trainerbattle_double TRAINER_G2_MARI_AND_NOEL, RocarohaValley_EventScript_Noel_Text_0, RocarohaValley_EventScript_Mari_Text_1, RocarohaValley_EventScript_Noel_Text_1
	msgbox RocarohaValley_EventScript_Noel_Text_2
	release
	end


RocarohaValley_EventScript_Milton::
	trainerbattle_single TRAINER_G2_MILTON, RocarohaValley_EventScript_Milton_Text_0, RocarohaValley_EventScript_Milton_Text_1
	msgbox RocarohaValley_EventScript_Milton_Text_2
	release
	end


RocarohaValley_EventScript_Lionel::
	trainerbattle_single TRAINER_G2_LIONEL, RocarohaValley_EventScript_Lionel_Text_0, RocarohaValley_EventScript_Lionel_Text_1
	msgbox RocarohaValley_EventScript_Lionel_Text_2
	release
	end


RocarohaValley_Trigger_MeetNas::
	lockall
	fadeoutbgm 1
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
	fadeinbgm 1
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
	.string "Your aura…\nit is one of darkness…$"

RocarohaValley_EventScript_Lucia_Text_1:
	.string "Curses!$"

RocarohaValley_EventScript_Lucia_Text_2:
	.string "Maybe it was my aura that was\nfull of darkness…\lI'm not quite sure.$"

RocarohaValley_EventScript_Vicky_Text_0:
	.string "Hey, a Trainer!\nGimme a battle, will ya?$"

RocarohaValley_EventScript_Vicky_Text_1:
	.string "Hey, thanks!$"

RocarohaValley_EventScript_Vicky_Text_2:
	.string "If I had a phone, I'd ask for\nyour number.$"

RocarohaValley_EventScript_Rafael_Text_0:
	.string "Rumbling around in Rocaroha Valley!$"

RocarohaValley_EventScript_Rafael_Text_1:
	.string "Rumbling with reckoning…$"

RocarohaValley_EventScript_Rafael_Text_2:
	.string "Rumble rumble rumble!$"

RocarohaValley_EventScript_Paolo_Text_0:
	.string "…Snork!\pI just loooove rare Pokémon.\nShow me yours?$"

RocarohaValley_EventScript_Paolo_Text_1:
	.string "Wow!\nThey're strong!$"

RocarohaValley_EventScript_Paolo_Text_2:
	.string "…Snigger!\nMy next target is Druddigon!$"

RocarohaValley_EventScript_Martin_Text_0:
	.string "Whew…\nI'm melting over here…\pPlease battle me so that I can\nforget about this heat!$"

RocarohaValley_EventScript_Martin_Text_1:
	.string "Now I just feel even hotter!$"

RocarohaValley_EventScript_Martin_Text_2:
	.string "I need to get out of here\nbefore I become one with the ground…$"

RocarohaValley_EventScript_Luisa_Text_0:
	.string "My partner Pokémon need some training!\nWill you oblige?$"

RocarohaValley_EventScript_Luisa_Text_1:
	.string "Ha ha ha!\nThanks a lot!$"

RocarohaValley_EventScript_Luisa_Text_2:
	.string "All Pokémon Rangers in Ríota carry Pokémon.\pIt's to help us tackle tasks that\nwould be difficult on our own.$"

RocarohaValley_EventScript_Alvaro_Text_0:
	.string "Our eyes met, so it's time for\na battle!$"

RocarohaValley_EventScript_Alvaro_Text_1:
	.string "I wish our eyes hadn't met…$"

RocarohaValley_EventScript_Alvaro_Text_2:
	.string "Good thing I have Revives, or\nelse I'd have to walk all\lthe way to Delagua Town!$"

RocarohaValley_EventScript_Belen_Text_0:
	.string "I battle whilst running!\nCan you catch up?$"

RocarohaValley_EventScript_Belen_Text_1:
	.string "I was surpassed!$"

RocarohaValley_EventScript_Belen_Text_2:
	.string "I'm still better when it comes\nto running.$"

RocarohaValley_EventScript_Mari_Text_0:
	.string "Oh! A Trainer!\nHere we go, Noel!$"

RocarohaValley_EventScript_Mari_Text_1:
	.string "Mari: Noel! We lost!\pNoel: Mari, you idiot!$"

RocarohaValley_EventScript_Mari_Text_2:
	.string "We only battle folks with\ntwo Pokémon!$"

RocarohaValley_EventScript_Mari_Text_3:
	.string "I always battle with Noel.\nTwo is better than one!$"

RocarohaValley_EventScript_Noel_Text_0:
	.string "Mari, over here!\nIt's a Trainer!$"

RocarohaValley_EventScript_Noel_Text_1:
	.string "If you've only got one Pokémon,\nwe can't fight!$"

RocarohaValley_EventScript_Noel_Text_2:
	.string "Double Battles are interesting, aren't they?$"

RocarohaValley_EventScript_Milton_Text_0:
	.string "Hear my call!\nA call of love!$"

RocarohaValley_EventScript_Milton_Text_1:
	.string "Love was no match for you!$"

RocarohaValley_EventScript_Milton_Text_2:
	.string "I caught my Pokémon as a Tyrogue\nfrom a cave nearby.$"

RocarohaValley_EventScript_Lionel_Text_0:
	.string "Hear my call!\nA call of pain!$"

RocarohaValley_EventScript_Lionel_Text_1:
	.string "Pain was no match for you!$"

RocarohaValley_EventScript_Lionel_Text_2:
	.string "Did you know?\nTyrogue has three evolutions.\lEach has its own niche.$"

RocarohaValley_Trigger_MeetNas_Text_0:
	.string "Well well well, if it isn't\nRíota's own swimming superstar, Clad!$"

RocarohaValley_Trigger_MeetNas_Text_1:
	.string "Nas…\nWhat do you want?$"

RocarohaValley_Trigger_MeetNas_Text_2:
	.string "I heard about your little trip, Clad.\nA genie that grants wishes?\lBahaha! You goons make me crack up.$"

RocarohaValley_Trigger_MeetNas_Text_3:
	.string "…Who told you about that?\nFern didn't want anyone else to know…$"

RocarohaValley_Trigger_MeetNas_Text_4:
	.string "Man Clad, you're just full of questions\ntoday, aren't you?\pWell, let me ask you a question.\nWhat's the name of the airy\lfairy loser that you're besties with?$"

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
