DarkCityMain_MapScripts::
	.byte 0

DarkCityMain_EventScript_HealPokemonTrigger::
	lock
	delay 20
	special HealPlayerParty
	playse SE_KAIFUKU
	waitse
	msgbox DarkCityMain_Text_PokemonHealed
	setrespawn HEAL_LOCATION_DARK_CITY_MAIN
	setvar VAR_TEMP_F, 1
	release
	end

DarkCityMain_EventScript_HotSpringInfoWoman::
	lock
	faceplayer
	msgbox DarkCityMain_Text_HotSpringInfo, MSGBOX_DEFAULT
	release
	end

DarkCityMain_EventScript_CaveLoverHiker::
	lock
	faceplayer
	msgbox DarkCityMain_Text_CaveLover, MSGBOX_DEFAULT
	release
	end

DarkCityMain_EventScript_MoneyRareMan::
	lock
	faceplayer
	msgbox DarkCityMain_Text_MoneyRare, MSGBOX_DEFAULT
	release
	end

DarkCityMain_EventScript_WomanBathingInSpring::
	lock
	faceplayer
	msgbox DarkCityMain_Text_WomanBathingInSpring, MSGBOX_DEFAULT
	release
	end

DarkCityMain_EventScript_ArumSoCoolKid::
	lock
	faceplayer
	msgbox DarkCityMain_Text_ArumSoCool, MSGBOX_DEFAULT
	release
	end

DarkCityMain_EventScript_FrontOfRuinsArum::
	lock
	faceplayer
	msgbox DarkCityMain_Text_RelicCrownInfo, MSGBOX_DEFAULT
	closemessage
	delay 15
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox DarkCityMain_Text_ForgotToAskName, MSGBOX_DEFAULT
	closemessage
	delay 20
	msgbox DarkCityMain_Text_PulpIsIt, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setflag FLAG_MEET_ARUM_DARK_CITY_MAIN
	setvar VAR_STORY_EVENT_PROGRESS, 7
	removeobject 4
	fadescreen 0
	release
	end

DarkCityMain_EventScript_ShopSign::
	lock
	msgbox DarkCityMain_Text_ShopSign, MSGBOX_DEFAULT
	release
	end
