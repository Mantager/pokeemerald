ChoVillage_MapScripts::
	.byte 0

ChoVillage_EventScript_HallOfFameDebug::
	delay 40
	setvar VAR_STORY_EVENT_PROGRESS, 12
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_GameClearMale
	end

ChoVillage_EventScript_InnSign::
	msgbox ChoVillage_Text_InnSign, MSGBOX_SIGN
	end

ChoVillage_EventScript_Man::
	lock
	faceplayer
	msgbox ChoVillage_Text_Man, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_Woman::
	lock
	faceplayer
	msgbox ChoVillage_Text_Woman, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_ComplainingFisherman::
	lock
	faceplayer
	msgbox ChoVillage_Text_ComplainingFisherman, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, ChoVillage_EventScript_HowsFishing
	msgbox ChoVillage_Text_WantMorePeopleFish, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ChoVillage_EventScript_GiveOldRod
	compare VAR_RESULT, NO
	goto_if_eq ChoVillage_EventScript_NotGettingItchToFish
	end

ChoVillage_EventScript_GiveOldRod::
	msgbox ChoVillage_Text_MyOldFishingRod, MSGBOX_DEFAULT
	giveitem_std ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox ChoVillage_Text_FishingMaySeemDifficult, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_NotGettingItchToFish::
	msgbox ChoVillage_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_HowsFishing::
	message ChoVillage_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, 1
	compare VAR_RESULT, 0
	goto_if_eq ChoVillage_EventScript_FishingExcellent
	compare VAR_RESULT, 1
	goto_if_eq ChoVillage_EventScript_FishingNotSoGood
	end

ChoVillage_EventScript_FishingExcellent::
	msgbox ChoVillage_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_FishingNotSoGood::
	msgbox ChoVillage_Text_TimingYourPulls, MSGBOX_DEFAULT
	release
	end

ChoVillage_EventScript_EarlyLogTrigger_Top::
	lockall
	goto ChoVillage_EventScript_EarlyLog
	end

ChoVillage_EventScript_EarlyLogTrigger_MiddleTop::
	lockall
	setobjectxy 6, 34, 11
	goto ChoVillage_EventScript_EarlyLog
	end

ChoVillage_EventScript_EarlyLogTrigger_MiddleBottom::
	lockall
	setobjectxy 6, 34, 12
	goto ChoVillage_EventScript_EarlyLog
	end

ChoVillage_EventScript_EarlyLogTrigger_Bottom::
	lockall
	setobjectxy 6, 34, 13
	goto ChoVillage_EventScript_EarlyLog
	end

ChoVillage_EventScript_EarlyLog::
	applymovement 6, ChoVillage_Movement_EarlyLogApproach
	waitmovement 0
	delay 8
	msgbox ChoVillage_Text_EarlyLogIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LOG_1, ChoVillage_Text_EarlyLogDefeat
	msgbox ChoVillage_Text_EarlyLogPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 6, ChoVillage_Movement_EarlyLogLeave
	waitmovement 0
	delay 8
	removeobject 6
	setflag FLAG_MEET_LOG_CHO_VILLAGE_1
	setvar VAR_STORY_EVENT_PROGRESS, 4
	releaseall
	end

ChoVillage_EventScript_LogTrigger_Left::
	setvar VAR_TEMP_1, 0
	goto ChoVillage_EventScript_Log
	end

ChoVillage_EventScript_LogTrigger_MiddleLeft::
	setvar VAR_TEMP_1, 1
	goto ChoVillage_EventScript_Log
	end

ChoVillage_EventScript_LogTrigger_MiddleRight::
	setvar VAR_TEMP_1, 2
	goto ChoVillage_EventScript_Log
	end

ChoVillage_EventScript_LogTrigger_Right::
	setvar VAR_TEMP_1, 3
	goto ChoVillage_EventScript_Log
	end

ChoVillage_EventScript_Log::
	lockall
	addobject 6
	setobjectxy 6, 18, 6
	compare VAR_TEMP_1, 0
	call_if_eq ChoVillage_EventScript_LogApproachLeft
	compare VAR_TEMP_1, 1
	call_if_eq ChoVillage_EventScript_LogApproachMiddleLeft
	compare VAR_TEMP_1, 2
	call_if_eq ChoVillage_EventScript_LogApproachMiddleRight
	compare VAR_TEMP_1, 3
	call_if_eq ChoVillage_EventScript_LogApproachRight
	msgbox ChoVillage_Text_LogIntro, MSGBOX_DEFAULT
	closemessage
	delay 20
	msgbox ChoVillage_Text_LogNext, MSGBOX_DEFAULT
	closemessage
	applymovement 6, ChoVillage_Movement_LogLeave
	waitmovement 0
	removeobject 6
	setflag FLAG_MEET_LOG_CHO_VILLAGE_2
	setvar VAR_STORY_EVENT_PROGRESS, 5
	releaseall
	end

ChoVillage_EventScript_LogApproachLeft::
	applymovement 6, ChoVillage_Movement_LogApproachLeft
	waitmovement 0
	return

ChoVillage_EventScript_LogApproachMiddleLeft::
	applymovement 6, ChoVillage_Movement_LogApproachMiddleLeft
	waitmovement 0
	return

ChoVillage_EventScript_LogApproachMiddleRight::
	applymovement 6, ChoVillage_Movement_LogApproachMiddleRight
	waitmovement 0
	return

ChoVillage_EventScript_LogApproachRight::
	applymovement 6, ChoVillage_Movement_LogApproachRight
	waitmovement 0
	return

ChoVillage_Movement_LogApproachLeft:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ChoVillage_Movement_LogApproachMiddleLeft:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ChoVillage_Movement_LogApproachMiddleRight:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ChoVillage_Movement_LogApproachRight:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

ChoVillage_Movement_LogLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ChoVillage_Movement_EarlyLogApproach:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ChoVillage_Movement_EarlyLogLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

ChoVillage_Text_InnSign:
	.string "Cho Village Inn$"

ChoVillage_Text_Man:
	.string "Hey there, {PLAYER}!$"

ChoVillage_Text_Woman:
	.string "Good day, {PLAYER}.\n"
	.string "I heard the Berry harvest this year\l"
	.string "is going well. Good for you!$"

ChoVillage_Text_ComplainingFisherman:
	.string "Argh, I can't catch any fish at all!\p"
	.string "It must be because of all those\n"
	.string "Grimer polluting the river!$"

ChoVillage_Text_EarlyLogIntro:
	.string "Yo, it's {PLAYER}!\n"
	.string "How's it going, old friend?\l"
	.string "I just got back from work!\p"
	.string "Of course, now that our eyes have\n"
	.string "met, we've got to have a battle, right?!$"

ChoVillage_Text_EarlyLogDefeat:
	.string "No way, that was a fluke!$"

ChoVillage_Text_EarlyLogPostBattle:
	.string "I thought I was going to win\n"
	.string "this time for sure…\p"
	.string "Anyway, how come you're not driving\n"
	.string "here in the truck today?\p"
	.string "Huh? It's broken down?\p"
	.string "Looks like you'd better go see the\n"
	.string "mechanic. He lives in the north-west\l"
	.string "of the village.\p"
	.string "If anyone can fix your truck, it'll\n"
	.string "be that guy.\p"
	.string "By the way, I was thinking about\n"
	.string "what you told me the other day.\p"
	.string "You said you wanted to move to the\n"
	.string "city, and I was all for it, but…\p"
	.string "Now that I think about it, moving\n"
	.string "to the city requires so much money,\l"
	.string "more money than we'd make in a decade…\p"
	.string "Oh, I have an idea.\n"
	.string "You should go and see the Oracle.\p"
	.string "He might have an idea on how you could\n"
	.string "get enough money to move to the city.\p"
	.string "Anyhow, I've got to go!\p"
	.string "Can't spend too much time dawdling,\n"
	.string "because time is money! See ya!$"

ChoVillage_Text_LogIntro:
	.string "Yo, {PLAYER}!\n"
	.string "Fancy seeing you again so soon!\p"
	.string "So, did you speak to the Oracle?$"

ChoVillage_Text_LogNext:
	.string "You did?\n"
	.string "And now you're investigating the\l"
	.string "Color Ruins? Sounds fun!\p"
	.string "But if you're planning to go to all of\n"
	.string "the Color Ruins, you're out of luck!\p"
	.string "You can't get to the red Color Ruins on\n"
	.string "foot because the river is in the way!\p"
	.string "Luckily for you, your best friend, me,\n"
	.string "specializes in building bridges!\p"
	.string "Yup, your dreams are my dreams, buddy,\n"
	.string "so I'll go and build a bridge to the\l"
	.string "red Color Ruins on Shendown Path.\l"
	.string "It might take a little while though!\p"
	.string "I've got yet another job to get to, so\n"
	.string "I'll speak to you again later! See ya!$"

ChoVillage_Text_WantMorePeopleFish:
	.string "I want more young people to fish.\n"
	.string "Do you want to learn to fish?$"

ChoVillage_Text_MyOldFishingRod:
	.string "Very good!\n"
	.string "Here, take my old fishing rod.$"

ChoVillage_Text_FishingMaySeemDifficult:
	.string "Now, fishing may seem difficult,\n"
	.string "but it's actually very simple.\p"
	.string "First, you want to face the water,\n"
	.string "then use the rod.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your rod\l"
	.string "to haul them in.$"

ChoVillage_Text_ThatsTooBadThen:
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

ChoVillage_Text_HowsYourFishing:
	.string "Yo!\n"
	.string "How's your fishing?$"

ChoVillage_Text_GreatHaulInSomeBigOnes:
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

ChoVillage_Text_TimingYourPulls:
	.string "Remember, timing your pulls\n"
	.string "is key when it comes to fishing.$"
