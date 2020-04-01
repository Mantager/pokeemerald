SydneyCity_PokemonCenter_EventScript_LookingForPichu::
	lock
	faceplayer
	goto_if_set FLAG_SYDNEY_POKEMON_CENTER_SHOWN_PICHU, SydneyCity_PokemonCenter_EventScript_AfterShownPichu
	msgbox SydneyCity_PokemonCenter_Text_ImLookingForAPichu, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SydneyCity_PokemonCenter_EventScript_DeclineToShow
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq SydneyCity_PokemonCenter_EventScript_DeclineToShow
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	compare VAR_RESULT, SPECIES_PICHU
	goto_if_ne SydneyCity_PokemonCenter_EventScript_NotRequestedMon
	msgbox SydneyCity_PokemonCenter_Text_OhThatsAPichu, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_RED_SHARD, 3
	setflag FLAG_SYDNEY_POKEMON_CENTER_SHOWN_PICHU
	release
	end

SydneyCity_PokemonCenter_EventScript_AfterShownPichu::
	msgbox SydneyCity_PokemonCenter_Text_PichuIsPopular, MSGBOX_DEFAULT
	release
	end

SydneyCity_PokemonCenter_EventScript_DeclineToShow::
	msgbox SydneyCity_PokemonCenter_Text_ThatsTooBad, MSGBOX_DEFAULT
	release
	end

SydneyCity_PokemonCenter_EventScript_NotRequestedMon::
	msgbox SydneyCity_PokemonCenter_Text_ThisIsntAPichu, MSGBOX_DEFAULT
	release
	end

FableSquare_PokemonCenter_EventScript_LookingForRalts::
	lock
	faceplayer
	goto_if_set FLAG_FABLE_POKEMON_CENTER_SHOWN_RALTS, FableSquare_PokemonCenter_EventScript_AfterShownRalts
	msgbox FableSquare_PokemonCenter_Text_ImLookingForARalts, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FableSquare_PokemonCenter_EventScript_DeclineToShow
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq FableSquare_PokemonCenter_EventScript_DeclineToShow
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	compare VAR_RESULT, SPECIES_RALTS
	goto_if_ne FableSquare_PokemonCenter_EventScript_NotRequestedMon
	bufferspeciesname 0, SPECIES_RALTS
	msgbox FableSquare_PokemonCenter_Text_OhThatsARalts, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_GREEN_SHARD, 3
	setflag FLAG_FABLE_POKEMON_CENTER_SHOWN_RALTS
	release
	end

FableSquare_PokemonCenter_EventScript_AfterShownRalts::
	msgbox FableSquare_PokemonCenter_Text_RaltsIsPopular, MSGBOX_DEFAULT
	release
	end

FableSquare_PokemonCenter_EventScript_DeclineToShow::
	msgbox FableSquare_PokemonCenter_Text_ThatsTooBad, MSGBOX_DEFAULT
	release
	end

FableSquare_PokemonCenter_EventScript_NotRequestedMon::
	msgbox FableSquare_PokemonCenter_Text_ThisIsntARalts, MSGBOX_DEFAULT
	release
	end

SydneyCity_PokemonCenter_Text_ImLookingForAPichu:
	.string "I'm looking fa' a Pichu!\n"
	.string "Do us a favour and show me one, will ya?$"

SydneyCity_PokemonCenter_Text_OhThatsAPichu:
	.string "Blimey, so that's a Pichu?\n"
	.string "Thanks fa' showing me!\p"
	.string "Take this as a little pressie from me!$"

SydneyCity_PokemonCenter_Text_PichuIsPopular:
	.string "Pichu's evolution, Pikachu, can hold\n"
    .string "a Light Ball to boost its stats!$"

SydneyCity_PokemonCenter_Text_ThatsTooBad:
	.string "Eh? Ya don't want ta?$"

SydneyCity_PokemonCenter_Text_ThisIsntAPichu:
	.string "Why, you…\n"
    .string "Do ya think I was born yesterday?\l"
    .string "This ain't a Pichu!$"

FableSquare_PokemonCenter_Text_ImLookingForARalts:
	.string "I'm looking for a Ralts!\n"
	.string "If you have one, can you show it to me?$"

FableSquare_PokemonCenter_Text_OhThatsARalts:
	.string "Ah, so that's a Ralts!\n"
	.string "Thanks for showing me!\p"
	.string "I heard that a Ralts can evolve into\n"
	.string "two different types of Pokémon!\l"
	.string "Isn't that cool?\p"
	.string "Please take this as a token of my\n"
	.string "appreciation!$"

FableSquare_PokemonCenter_Text_RaltsIsPopular:
	.string "Ralts is a popular Pokémon, but it's\n"
	.string "difficult to find, you know.\p"
	.string "However, it's really strong in battle!$"

FableSquare_PokemonCenter_Text_ThatsTooBad:
	.string "That's too bad…$"

FableSquare_PokemonCenter_Text_ThisIsntARalts:
	.string "Hey! You can't fool me!\n"
	.string "This isn't a Ralts at all!$"
