DelaguaTown_HouseC_MapScripts::
	.byte 0


DelaguaTown_HouseC_EventScript_Woman::
	lock
	faceplayer
	msgbox DelaguaTown_HouseC_EventScript_Woman_Text_0
	release
	end


DelaguaTown_HouseC_EventScript_Girl::
	lock
	faceplayer
	msgbox DelaguaTown_HouseC_EventScript_Girl_Text_0
	release
	end


DelaguaTown_HouseC_EventScript_Woman_Text_0:
	.string "We just moved in, so the house is a mess.\pI'm huge on botany, though I'm sure\nyou figured that out when you\lstepped in here.$"

DelaguaTown_HouseC_EventScript_Girl_Text_0:
	.string "My mum moved here to study\nsome flowers.\pMy favourite flower is the Amaryllis.$"
