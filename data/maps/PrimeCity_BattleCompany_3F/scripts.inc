PrimeCity_BattleCompany_3F_MapScripts::
	.byte 0


PrimeCity_BattleCompany_3F_EventScript_Diego::
	trainerbattle_single TRAINER_G2_DIEGO, PrimeCity_BattleCompany_3F_EventScript_Diego_Text_0, PrimeCity_BattleCompany_3F_EventScript_Diego_Text_1
	msgbox PrimeCity_BattleCompany_3F_EventScript_Diego_Text_2
	release
	end


PrimeCity_BattleCompany_3F_EventScript_Micaela::
	trainerbattle_single TRAINER_G2_MICAELA, PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_0, PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_1
	msgbox PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_2
	release
	end


PrimeCity_BattleCompany_3F_EventScript_Elevator::
	lock
	message PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_0
	waitmessage
	multichoicedefault 0, 0, MULTI_BATTLE_COMPANY, 0, 0
	switch VAR_RESULT
	case 0, PrimeCity_BattleCompany_3F_EventScript_Elevator_3
	case 1, PrimeCity_BattleCompany_3F_EventScript_Elevator_4
	case 2, PrimeCity_BattleCompany_3F_EventScript_Elevator_5
PrimeCity_BattleCompany_3F_EventScript_Elevator_1:
	release
	end

PrimeCity_BattleCompany_3F_EventScript_Elevator_3:
	msgbox PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_1
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_1F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_3F_EventScript_Elevator_1

PrimeCity_BattleCompany_3F_EventScript_Elevator_4:
	msgbox PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_2
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_2F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_3F_EventScript_Elevator_1

PrimeCity_BattleCompany_3F_EventScript_Elevator_5:
	msgbox PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_3
	goto PrimeCity_BattleCompany_3F_EventScript_Elevator_1


PrimeCity_BattleCompany_3F_EventScript_Diego_Text_0:
	.string "I can't wait to get off work!\nI'm gonna go bowling!$"

PrimeCity_BattleCompany_3F_EventScript_Diego_Text_1:
	.string "At this rate, I'll be working\novertime…$"

PrimeCity_BattleCompany_3F_EventScript_Diego_Text_2:
	.string "The best battlers in the company\nget higher positions.$"

PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_0:
	.string "Here comes my big break!$"

PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_1:
	.string "Out of my reach!$"

PrimeCity_BattleCompany_3F_EventScript_Micaela_Text_2:
	.string "I'm trying to make it big in\nthis company, but I keep losing.$"

PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_0:
	.string "Which floor will you visit?$"

PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_1:
	.string "Going to 1F.$"

PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_2:
	.string "Going to 2F.$"

PrimeCity_BattleCompany_3F_EventScript_Elevator_Text_3:
	.string "Decided to stay on 3F.$"
