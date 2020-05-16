DarkRuins_FinalRoom_MapScripts::
	.byte 0

DarkRuins_FinalRoom_EventScript_Arum::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_RELIC_CROWN, DarkRuins_FinalRoom_EventScript_ArumReturnToSurface
	msgbox DarkRuins_FinalRoom_Text_ArumIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARUM, DarkRuins_FinalRoom_Text_ArumDefeat
	msgbox DarkRuins_FinalRoom_Text_ArumPostBattle, MSGBOX_DEFAULT
	closemessage
	giveitem_std ITEM_RELIC_CROWN, 1
	msgbox DarkRuins_FinalRoom_Text_ArumNext, MSGBOX_DEFAULT
	setflag FLAG_OBTAINED_RELIC_CROWN
	closemessage
	release
	end

DarkRuins_FinalRoom_EventScript_ArumReturnToSurface::
	msgbox DarkRuins_FinalRoom_Text_ArumWantToReturn, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DarkRuins_FinalRoom_EventScript_ArumTakeYourTime
	msgbox DarkRuins_FinalRoom_Text_ArumLetsGo, MSGBOX_DEFAULT
	closemessage
	setvar VAR_STORY_EVENT_PROGRESS, 9
	setflag FLAG_LOG_PULP_BYROAD
	setrespawn HEAL_LOCATION_JAM_KEY_MAP
	warp MAP_FARMER_FIELD, 255, 9, 7
	release
	end

DarkRuins_FinalRoom_EventScript_ArumTakeYourTime::
	msgbox DarkRuins_FinalRoom_Text_ArumTakeYourTime, MSGBOX_DEFAULT
	release
	end
