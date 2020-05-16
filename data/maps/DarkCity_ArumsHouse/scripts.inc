DarkCity_ArumsHouse_MapScripts::
	.byte 0

DarkCity_ArumsHouse_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_DARK_CITY_NPC_TRADE_COMPLETE, DarkCity_ArumsHouse_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_TORKOAL
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox DarkCity_ArumsHouse_Text_WillingToTradeIt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DarkCity_ArumsHouse_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq DarkCity_ArumsHouse_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	faceplayer
	bufferspeciesname 0, VAR_0x8009
	msgbox DarkCity_ArumsHouse_Text_TradeCompleted, MSGBOX_DEFAULT
	setflag FLAG_DARK_CITY_NPC_TRADE_COMPLETE
	release
	end

DarkCity_ArumsHouse_EventScript_DeclineTrade:: @ 8203C93
	msgbox DarkCity_ArumsHouse_Text_DeclinedTrade, MSGBOX_DEFAULT
	release
	end

DarkCity_ArumsHouse_EventScript_TradeCompleted:: @ 8203CAB
	msgbox DarkCity_ArumsHouse_Text_PostTrade, MSGBOX_DEFAULT
	release
	end

