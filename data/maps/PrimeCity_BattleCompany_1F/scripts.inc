PrimeCity_BattleCompany_1F_MapScripts::
	.byte 0


PrimeCity_BattleCompany_1F_EventScript_Elevator::
	lock
	message PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_0
	waitmessage
	multichoicedefault 0, 0, MULTI_BATTLE_COMPANY, 0, 0
	release
	end


PrimeCity_BattleCompany_1F_EventScript_Elevator_Text_0:
	.string "Which floor will you visit?$"
