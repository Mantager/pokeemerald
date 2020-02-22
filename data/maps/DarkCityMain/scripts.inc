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

DarkCityMain_Text_HotSpringInfo:
	.string "This hot spring has healing properties.\p"
	.string "If you take a dip in it, then your\n"
	.string "Pokémon team's health will be restored.$"

DarkCityMain_Text_CaveLover:
	.string "I was born and raised in Dark City,\n"
	.string "but I occasionally explore the surface.\p"
	.string "However, as a lover of caves, this\n"
	.string "is a perfect place for me to live.$"

DarkCityMain_Text_MoneyRare:
	.string "We don't use money much in this city.\n"
	.string "Most of the time, we barter goods.$"

DarkCityMain_Text_WomanBathingInSpring:
	.string "Ah… that hits the spot…$"

DarkCityMain_Text_ShopSign:
	.string "DARK CITY GENERAL STORE\n"
	.string "NOW ACCEPTING SURFACE CURRENCY$"

DarkCityMain_Text_PokemonHealed:
	.string "Your Pokémon were restored to full\n"
	.string "health!$"

DarkCityMain_Text_ArumSoCool:
	.string "Arum is so cool…\n"
	.string "He's the strongest Trainer ever!$"

DarkCityMain_Text_RelicCrownInfo:
	.string "My Relic Crown is indeed the golden\n"
	.string "relic from that ancient story.\p"
	.string "I found it five years ago on an\n"
	.string "excursion I took to a mountain in\l"
	.string "the east.\p"
	.string "You want the Crown, don't you?\n"
	.string "I can see it in your eyes…\p"
	.string "For years, people have been trying\n"
	.string "to buy the Relic Crown off of me.\p"
	.string "But I will not sell out so easily!\n"
	.string "Money is of no concern to me, anyway.\p"
	.string "No, what I care about is puzzles!\p"
	.string "Do you remember the puzzles you had\n"
	.string "to solve in order to explore the\l"
	.string "back caves of the Color Ruins?\p"
	.string "I created many puzzles just like\n"
	.string "them and filled the Dark Ruins behind\l"
	.string "me with them.\p"
	.string "If you want the Relic Crown, you must\n"
	.string "solve all of these puzzles!\p"
	.string "Follow me, uh…$"

DarkCityMain_Text_ForgotToAskName:
	.string "Oh, so sorry!\n"
	.string "I didn't even ask your name!$"

DarkCityMain_Text_PulpIsIt:
	.string "{PLAYER}, is it?\n"
	.string "Follow me!$"
