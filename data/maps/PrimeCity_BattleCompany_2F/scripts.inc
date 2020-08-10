PrimeCity_BattleCompany_2F_MapScripts::
	.byte 0


PrimeCity_BattleCompany_2F_EventScript_Enzo::
	trainerbattle_single TRAINER_G2_ENZO, PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_0, PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_1
	msgbox PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_2
	release
	end


PrimeCity_BattleCompany_2F_EventScript_Abril::
	trainerbattle_single TRAINER_G2_ABRIL, PrimeCity_BattleCompany_2F_EventScript_Abril_Text_0, PrimeCity_BattleCompany_2F_EventScript_Abril_Text_1
	msgbox PrimeCity_BattleCompany_2F_EventScript_Abril_Text_2
	release
	end


PrimeCity_BattleCompany_2F_EventScript_Elevator::
	lock
	message PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_0
	waitmessage
	multichoicedefault 0, 0, MULTI_BATTLE_COMPANY, 0, 0
	switch VAR_RESULT
	case 0, PrimeCity_BattleCompany_2F_EventScript_Elevator_3
	case 1, PrimeCity_BattleCompany_2F_EventScript_Elevator_4
	case 2, PrimeCity_BattleCompany_2F_EventScript_Elevator_5
PrimeCity_BattleCompany_2F_EventScript_Elevator_1:
	release
	end

PrimeCity_BattleCompany_2F_EventScript_Elevator_3:
	msgbox PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_1
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_1F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_2F_EventScript_Elevator_1

PrimeCity_BattleCompany_2F_EventScript_Elevator_4:
	msgbox PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_2
	goto PrimeCity_BattleCompany_2F_EventScript_Elevator_1

PrimeCity_BattleCompany_2F_EventScript_Elevator_5:
	msgbox PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_3
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_3F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_2F_EventScript_Elevator_1


PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_0:
	.string "Welcome to our company!\nShall we battle?$"

PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_1:
	.string "My pay's gonna get docked for this…$"

PrimeCity_BattleCompany_2F_EventScript_Enzo_Text_2:
	.string "Our company's primary export?\nPokémon battles, of course!$"

PrimeCity_BattleCompany_2F_EventScript_Abril_Text_0:
	.string "We're still getting our offices\nset up, so please forgive the mess!$"

PrimeCity_BattleCompany_2F_EventScript_Abril_Text_1:
	.string "Not shabby!$"

PrimeCity_BattleCompany_2F_EventScript_Abril_Text_2:
	.string "If we lose too much, our\nshareholders won't be happy.$"

PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_0:
	.string "Which floor will you visit?$"

PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_1:
	.string "Going to 1F.$"

PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_2:
	.string "Decided to stay on 2F.$"

PrimeCity_BattleCompany_2F_EventScript_Elevator_Text_3:
	.string "Going to 3F.$"
