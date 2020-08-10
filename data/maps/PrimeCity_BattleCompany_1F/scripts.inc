PrimeCity_BattleCompany_1F_MapScripts::
	.byte 0


PrimeCity_BattleCompany_1F_EventScript_Elevator::
	lock
	message PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_0
	waitmessage
	multichoicedefault 0, 0, MULTI_BATTLE_COMPANY, 0, 0
	switch VAR_RESULT
	case 0, PrimeCity_BattleCompany_1F_EventScript_Elevator_3
	case 1, PrimeCity_BattleCompany_1F_EventScript_Elevator_4
	case 2, PrimeCity_BattleCompany_1F_EventScript_Elevator_5
PrimeCity_BattleCompany_1F_EventScript_Elevator_1:
	release
	end

PrimeCity_BattleCompany_1F_EventScript_Elevator_3:
	msgbox PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_1
	goto PrimeCity_BattleCompany_1F_EventScript_Elevator_1

PrimeCity_BattleCompany_1F_EventScript_Elevator_4:
	msgbox PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_2
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_2F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_1F_EventScript_Elevator_1

PrimeCity_BattleCompany_1F_EventScript_Elevator_5:
	msgbox PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_3
	closemessage
	warpdoor MAP_PRIME_CITY_BATTLE_COMPANY_3F, 0xFF, 7, 2
	goto PrimeCity_BattleCompany_1F_EventScript_Elevator_1


PrimeCity_BattleCompany_1F_EventScript_Receptionist::
	lock
	msgbox PrimeCity_BattleCompany_1F_EventScript_Receptionist_Text_0
	release
	end


PrimeCity_BattleCompany_1F_EventScript_Man::
	lock
	faceplayer
	msgbox PrimeCity_BattleCompany_1F_EventScript_Man_Text_0
	release
	end


PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_0:
	.string "Which floor will you visit?$"

PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_1:
	.string "Decided to stay on 1F.$"

PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_2:
	.string "Going to 2F.$"

PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_3:
	.string "Going to 3F.$"

PrimeCity_BattleCompany_1F_EventScript_Receptionist_Text_0:
	.string "Welcome to the Battle Company!$"

PrimeCity_BattleCompany_1F_EventScript_Man_Text_0:
	.string "This is the Battle Company.\pAccording to their mission statement,\ntheir goal is to 'enrich the world'\nwith 'wonderful battles'.\pI don't really understand it.$"
