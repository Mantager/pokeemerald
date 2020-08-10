PrimeCity_PokemonCenter_2F_MapScripts::
	.byte 0


PrimeCity_PokemonCenter_2F_EventScript_TraderGastly::
	lock
	faceplayer
	goto_if_set FLAG_PRIME_1_TRADE_COMPLETED, PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_1
	setvar VAR_0x8008, INGAME_TRADE_GASTLY
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_5
PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_4:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_8
PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_7:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_11
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_3
PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_10:
	release
	end

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_1:
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_0
	release
	end

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_5:
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderGastlyDeclined
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_4

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_8:
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderGastlyDeclined
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_7

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_11:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_PRIME_1_TRADE_COMPLETED
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_2
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_10


PrimeCity_PokemonCenter_2F_EventScript_TraderGastlyDeclined::
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderGastlyDeclined_Text_0
	release
	end


PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee::
	lock
	faceplayer
	goto_if_set FLAG_PRIME_2_TRADE_COMPLETED, PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_1
	setvar VAR_0x8008, INGAME_TRADE_COTTONEE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_5
PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_4:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_8
PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_7:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_11
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_3
PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_10:
	release
	end

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_1:
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_0
	release
	end

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_5:
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderCottoneeDeclined
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_4

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_8:
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderCottoneeDeclined
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_7

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_11:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_PRIME_2_TRADE_COMPLETED
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_2
	goto PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_10


PrimeCity_PokemonCenter_2F_EventScript_TraderCottoneeDeclined::
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TraderCottoneeDeclined_Text_0
	release
	end


PrimeCity_PokemonCenter_2F_EventScript_TradeCornerTalker::
	lock
	faceplayer
	msgbox PrimeCity_PokemonCenter_2F_EventScript_TradeCornerTalker_Text_0
	release
	end


PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_0:
	.string "How's my old Gastly doing?$"

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_1:
	.string "I'm looking for a Shinx!\pWant to trade for my Gastly?$"

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_2:
	.string "Cheers, friendo!$"

PrimeCity_PokemonCenter_2F_EventScript_TraderGastly_Text_3:
	.string "That Pokémon isn't a Shinx!$"

PrimeCity_PokemonCenter_2F_EventScript_TraderGastlyDeclined_Text_0:
	.string "Huh?\nYou don't want to trade?\pThat's too bad.$"

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_0:
	.string "I hope Cottonee is well.$"

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_1:
	.string "Would you perchance have a Zubat?\pIf you do, would you like\nto trade for my Cottonee?$"

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_2:
	.string "Thank you for the trade!\nI really do appreciate it!$"

PrimeCity_PokemonCenter_2F_EventScript_TraderCottonee_Text_3:
	.string "Excuse me, but this isn't a Zubat.$"

PrimeCity_PokemonCenter_2F_EventScript_TraderCottoneeDeclined_Text_0:
	.string "Oh, you wouldn't like to?\nI see…$"

PrimeCity_PokemonCenter_2F_EventScript_TradeCornerTalker_Text_0:
	.string "This is the Trade Corner.\pI'm sure you can guess what\npeople come here for.$"
