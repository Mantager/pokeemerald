ChoVillage_House1_MapScripts::
	.byte 0

ChoVillage_House1_EventScript_InnOldWoman::
	lockall
	faceplayer
	msgbox ChoVillage_House1_Text_WantToRest, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ChoVillage_House1_EventScript_Rest
	msgbox ChoVillage_House1_Text_ComeAgainAnyTime, MSGBOX_DEFAULT
	releaseall
	end

ChoVillage_House1_EventScript_Rest::
	msgbox ChoVillage_House1_Text_HaveAGoodRest, MSGBOX_DEFAULT
	closemessage
	setrespawn HEAL_LOCATION_CHO_VILLAGE
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox ChoVillage_House1_Text_HopeYouRestedWell, MSGBOX_DEFAULT
	releaseall
	end

ChoVillage_House1_EventScript_InnOldMan::
	lock
	faceplayer
	msgbox ChoVillage_House1_Text_OldMan, MSGBOX_DEFAULT
	release
	end

ChoVillage_House1_EventScript_Lodger::
	lock
	faceplayer
	msgbox ChoVillage_House1_Text_Lodger, MSGBOX_DEFAULT
	release
	end
