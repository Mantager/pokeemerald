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
