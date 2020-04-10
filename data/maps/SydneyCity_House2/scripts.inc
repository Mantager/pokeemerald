SydneyCity_House2_MapScripts::
	.byte 0

SydneyCity_House2_EventScript_TM01OldMan::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, SydneyCity_House2_EventScript_NoPokemonYet
	goto_if_set FLAG_RECEIVED_TM01, SydneyCity_House2_EventScript_AfterRecievingTM01
	msgbox SydneyCity_House2_Text_LetMeGiveYouSomething, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM01
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox SydneyCity_House2_Text_ExplainReturn
	setflag FLAG_RECEIVED_TM01
	release
	end

SydneyCity_House2_EventScript_NoPokemonYet::
	msgbox SydneyCity_House2_Text_ComeBackWhenHaveMon, MSGBOX_DEFAULT
	release
	end

SydneyCity_House2_EventScript_AfterRecievingTM01::
	msgbox SydneyCity_House2_Text_KeepMonsHappy, MSGBOX_DEFAULT
	release
	end

SydneyCity_House2_Text_LetMeGiveYouSomething:
	.string "You!\n"
	.string "You're a Trainer, aren't you?\l"
	.string "Then let me give you something nice.$"

SydneyCity_House2_Text_ExplainReturn:
	.string "That Technical Machine there contains\n"
	.string "the move Return, or so I've been told.\p"
	.string "I can't get the darn thing to work\n"
	.string "myself, so you can have it.$"

SydneyCity_House2_Text_KeepMonsHappy:
	.string "Make sure to keep your Pokémon happy,\n"
	.string "whippersnapper!\p"
	.string "One time I riled up my Tabbyeow a tad\n"
	.string "too much, and it was a disaster!$"

SydneyCity_House2_Text_ComeBackWhenHaveMon:
	.string "You!\n"
	.string "You're a Trainer, aren't you?\p"
    .string "What do you mean, no?!\p"
	.string "Kids these days are too lazy to even go\n"
	.string "on a journey with Pokémon, it seems!\p"
	.string "I was going to give you something nice,\n"
	.string "but if you've got no Pokémon, forget it!$"
