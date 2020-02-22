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

ChoVillage_House1_Text_WantToRest:
	.string "Welcome to the Cho Village Inn.\n"
	.string "It's good to see you again, {PLAYER}.\p"
	.string "Unfortunately, we're fully booked\n"
	.string "for tonight, but would you like to\l"
	.string "take a short rest free of charge?$"

ChoVillage_House1_Text_ComeAgainAnyTime:
	.string "Come again any time.$"

ChoVillage_House1_Text_HaveAGoodRest:
	.string "Have a good rest, {PLAYER}.$"

ChoVillage_House1_Text_HopeYouRestedWell:
	.string "I hope you rested well.\n"
	.string "Come again any time.$"

ChoVillage_House1_Text_OldMan:
	.string "Why, it's {PLAYER}.\n"
	.string "How are you doing?$"

ChoVillage_House1_Text_Lodger:
	.string "If you stay overnight here, then\n"
	.string "breakfast is included in your stay.\p"
	.string "I'm glad about that, because\n"
	.string "the cooking here is delicious!$"
