JamKeyMap_MapScripts::
	.byte 0

JamKeyMap_EventScript_TriggerMechanicTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto JamKeyMap_EventScript_MechanicEndGame
	end
	
JamKeyMap_EventScript_TriggerMechanicMiddle::
	lockall
	setvar VAR_TEMP_1, 1
	goto JamKeyMap_EventScript_MechanicEndGame
	end
	
JamKeyMap_EventScript_TriggerMechanicBottom::
	lockall
	setvar VAR_TEMP_1, 2
	goto JamKeyMap_EventScript_MechanicEndGame
	end

JamKeyMap_EventScript_TriggerCantLeave::
	lock
	msgbox JamKeyMap_Text_CantLeave, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_WalkDown
	waitmovement 0
	release
	end

JamKeyMap_EventScript_MechanicEndGame::
	applymovement 2, JamKeyMap_Movement_MechanicFacePlayer
	waitmovement 0
	msgbox JamKeyMap_Text_MechanicHey, MSGBOX_DEFAULT
	closemessage
	compare VAR_TEMP_1, 0
	call_if_eq JamKeyMap_EventScript_MoveToMechanicTop
	compare VAR_TEMP_1, 1
	call_if_eq JamKeyMap_EventScript_MoveToMechanicMiddle
	compare VAR_TEMP_1, 2
	call_if_eq JamKeyMap_EventScript_MoveToMechanicBottom
	msgbox JamKeyMap_Text_GoodAsNew, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setflag FLAG_PULP_BYROAD_MECHANIC
	removeobject 2
	setvar VAR_STORY_EVENT_PROGRESS, 10
	fadescreen 0
	delay 16
	releaseall
	end

JamKeyMap_EventScript_Mechanic::
	lock
	msgbox JamKeyMap_Text_Mechanic, MSGBOX_DEFAULT
	release
	end

JamKeyMap_EventScript_MoveToMechanicTop::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicTop
	waitmovement 0
	return

JamKeyMap_EventScript_MoveToMechanicMiddle::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicMiddle
	waitmovement 0
	return

JamKeyMap_EventScript_MoveToMechanicBottom::
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MoveToMechanicBottom
	waitmovement 0
	return

JamKeyMap_EventScript_Truck::
	lock
	compare VAR_STORY_EVENT_PROGRESS, 1
	goto_if_eq JamKeyMap_EventScript_TruckInitialEvent
	compare VAR_STORY_EVENT_PROGRESS, 2
	goto_if_eq JamKeyMap_EventScript_TruckWontMove
	compare VAR_STORY_EVENT_PROGRESS, 10
	goto_if_eq JamKeyMap_EventScript_LogFinalFight
	release
	end

JamKeyMap_EventScript_TruckWontMove::
	msgbox JamKeyMap_Text_TruckWontStart, MSGBOX_DEFAULT
	release
	end

JamKeyMap_EventScript_TruckInitialEvent::
	msgbox JamKeyMap_Text_PulpUrgh, MSGBOX_DEFAULT
	setvar VAR_STORY_EVENT_PROGRESS, 2
	release
	end

JamKeyMap_EventScript_LogFinalFight::
	fadescreen 1
	clearflag FLAG_LOG_PULP_BYROAD
	addobject 3
	fadescreen 0
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, JamKeyMap_Movement_MechanicFacePlayer
	waitmovement 0
	delay 30
	msgbox JamKeyMap_Text_LogPleaseBattleMe, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setvar VAR_STORY_EVENT_PROGRESS, 11
	fadescreen 0
	delay 8
	release
	end

JamKeyMap_EventScript_Log::
	lock
	faceplayer
	msgbox JamKeyMap_Text_LogIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LOG_2, JamKeyMap_Text_LogDefeat
	playbgm MUS_END, 0x00
	msgbox JamKeyMap_Text_LogPostBattle, MSGBOX_DEFAULT
	closemessage
	delay 40
	setvar VAR_STORY_EVENT_PROGRESS, 12
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_GameClearMale
	end

JamKeyMap_Movement_MoveToMechanicTop:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MoveToMechanicMiddle:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MoveToMechanicBottom:
	walk_left
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

JamKeyMap_Movement_MechanicFacePlayer:
	face_right
	step_end

JamKeyMap_Movement_WalkDown:
	walk_down
	step_end

JamKeyMap_Text_Mechanic:
	.string "Hmm…\n"
	.string "This is gonna be a tough one…$"

JamKeyMap_Text_MechanicHey:
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

JamKeyMap_Text_GoodAsNew:
	.string "The truck is up and running!\n"
	.string "She's as good as new!\l"
	.string "I knew I could get it working again.\p"
	.string "It did take a while, I had to mess\n"
	.string "with the exhaust a little bit and\l"
	.string "replace the battery, but here she is!\p"
	.string "You just come find me if you ever\n"
	.string "need any more help!$"

JamKeyMap_Text_CantLeave:
	.string "I can't leave!\n"
	.string "I need to get in the truck.$"

JamKeyMap_Text_TruckWontStart:
	.string "The truck won't start.\n"
	.string "It seems to be broken.$"

JamKeyMap_Text_PulpUrgh:
	.string "The truck won't start!\p"
	.string "Looks like {PLAYER} has to travel\n"
	.string "to Cho Village in the east on foot.$"

JamKeyMap_Text_LogPleaseBattleMe:
	.string "Oh, it's {PLAYER}!\n"
	.string "How's it going?\p"
	.string "W-whaat?!\n"
	.string "You actually found that relic?!\l"
	.string "T-that's incredible!\p"
	.string "So, I guess you're… going?\p"
	.string "Before you go, {PLAYER}…\n"
	.string "Let's have another battle.\p"
	.string "But this time, I'll win!\p"
	.string "I'll let you prepare, so talk\n"
	.string "to me when you're ready to fight.$"

JamKeyMap_Text_LogIntro:
	.string "Well then, {PLAYER}!\n"
	.string "Our final fight… here I come!$"

JamKeyMap_Text_LogDefeat:
	.string "Aha, nothing's changed!$"

JamKeyMap_Text_LogPostBattle:
	.string "Like always, you win…\n"
	.string "But I don't care!\p"
	.string "I just like to battle, whether\n"
	.string "I win or lose!\p"
	.string "My Pokémon feel the same way.\p"
	.string "So, looks like this is goodbye…\n"
	.string "I'm not jealous or anything.\p"
	.string "I can find meaning in my construction\n"
	.string "work, so I'm happy right here!\p"
	.string "Yup, so go ahead and enjoy yourself\n"
	.string "in big ol' Honzhu City!\n"
	.string "Make sure you work hard on the\n"
	.string "Berry business too, though!\p"
	.string "And send me a postcard when you\n"
	.string "get there!\p"
	.string "Well, old friend…\n"
	.string "Farewell!$"
