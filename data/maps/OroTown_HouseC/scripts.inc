OroTown_HouseC_MapScripts::
	.byte 0


OroTown_HouseC_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_ORO_TRADE_COMPLETED, OroTown_HouseC_EventScript_Trader_1
	setvar VAR_0x8008, INGAME_TRADE_FINNEON
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox OroTown_HouseC_EventScript_Trader_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq OroTown_HouseC_EventScript_Trader_5
OroTown_HouseC_EventScript_Trader_4:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq OroTown_HouseC_EventScript_Trader_8
OroTown_HouseC_EventScript_Trader_7:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq OroTown_HouseC_EventScript_Trader_11
	msgbox OroTown_HouseC_EventScript_Trader_Text_3
OroTown_HouseC_EventScript_Trader_10:
	release
	end

OroTown_HouseC_EventScript_Trader_1:
	msgbox OroTown_HouseC_EventScript_Trader_Text_0
	release
	end

OroTown_HouseC_EventScript_Trader_5:
	goto OroTown_HouseC_EventScript_TraderDeclined
	goto OroTown_HouseC_EventScript_Trader_4

OroTown_HouseC_EventScript_Trader_8:
	goto OroTown_HouseC_EventScript_TraderDeclined
	goto OroTown_HouseC_EventScript_Trader_7

OroTown_HouseC_EventScript_Trader_11:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_ORO_TRADE_COMPLETED
	msgbox OroTown_HouseC_EventScript_Trader_Text_2
	goto OroTown_HouseC_EventScript_Trader_10


OroTown_HouseC_EventScript_TraderDeclined::
	msgbox OroTown_HouseC_EventScript_TraderDeclined_Text_0
	release
	end


OroTown_HouseC_EventScript_Trader_Text_0:
	.string "Thanks!\nTake good care of Finneon!$"

OroTown_HouseC_EventScript_Trader_Text_1:
	.string "I'm looking for a Buizel!\pIf you've got one, want to\ntrade it for a Finneon?$"

OroTown_HouseC_EventScript_Trader_Text_2:
	.string "Thank you so much!$"

OroTown_HouseC_EventScript_Trader_Text_3:
	.string "Hey, I'm not dumb!\nThat's not a Buizel at all!$"

OroTown_HouseC_EventScript_TraderDeclined_Text_0:
	.string "You don't want to trade?\pI'll ask someone else then.$"
