PrimeCity_SecretBuilding_MapScripts::
	.byte 0


PrimeCity_SecretBuilding_EventScript_Man::
	lock
	faceplayer
	msgbox PrimeCity_SecretBuilding_EventScript_Man_Text_0
	release
	end


PrimeCity_SecretBuilding_EventScript_Woman::
	lock
	faceplayer
	msgbox PrimeCity_SecretBuilding_EventScript_Woman_Text_0
	release
	end


PrimeCity_SecretBuilding_EventScript_Man_Text_0:
	.string "My wife wants to become an interior\ndesigner.\pBut I think you and me both know\nthat she's got a ways to go.\pPurple plants, for heaven's sake!$"

PrimeCity_SecretBuilding_EventScript_Woman_Text_0:
	.string "I gave our house a little makeover.\pWhat do you think?\nBeautiful, isn't it?$"
