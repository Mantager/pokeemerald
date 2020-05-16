DarkCityEntrance_MapScripts::
	.byte 0

DarkCityEntrance_EventScript_Lu::
	trainerbattle_single TRAINER_LU, DarkCityEntrance_Text_LuIntro, DarkCityEntrance_Text_LuDefeat
	msgbox DarkCityEntrance_Text_LuPostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_Rue::
	trainerbattle_single TRAINER_RUE, DarkCityEntrance_Text_RueIntro, DarkCityEntrance_Text_RueDefeat
	msgbox DarkCityEntrance_Text_RuePostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_Guowei::
	trainerbattle_single TRAINER_GUOWEI, DarkCityEntrance_Text_GuoweiIntro, DarkCityEntrance_Text_GuoweiDefeat
	msgbox DarkCityEntrance_Text_GuoweiPostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_ArumTriggerLeft::
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerMiddleLeft::
	setobjectxy 3, 14, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerMiddleRight::
	setobjectxy 3, 15, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerRight::
	setobjectxy 3, 16, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_Arum::
	lockall
	applymovement 3, DarkCityEntrance_Movement_ArumApproach
	waitmovement 0
	delay 8
	msgbox DarkCityEntrance_Text_ArumStrangeSound, MSGBOX_DEFAULT
	closemessage
	delay 25
	msgbox DarkCityEntrance_Text_ArumExplain, MSGBOX_DEFAULT
	closemessage
	delay 25
	msgbox DarkCityEntrance_Text_ArumRelic, MSGBOX_DEFAULT
	closemessage
	applymovement 3, DarkCityEntrance_Movement_ArumLeave
	waitmovement 0
	setvar VAR_STORY_EVENT_PROGRESS, 7
	setflag FLAG_MEET_ARUM_DARK_CITY_ENTRANCE
	removeobject 3
	delay 20
	releaseall
	end

DarkCityEntrance_Movement_ArumApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

DarkCityEntrance_Movement_ArumLeave:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
