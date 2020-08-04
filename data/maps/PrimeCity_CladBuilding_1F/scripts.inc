PrimeCity_CladBuilding_1F_MapScripts::
	.byte 0


PrimeCity_CladBuilding_1F_EventScript_PriceLamenter::
	lock
	faceplayer
	msgbox PrimeCity_CladBuilding_1F_EventScript_PriceLamenter_Text_0
	release
	end


PrimeCity_CladBuilding_1F_EventScript_RiotaTalker::
	lock
	faceplayer
	msgbox PrimeCity_CladBuilding_1F_EventScript_RiotaTalker_Text_0
	release
	end


PrimeCity_CladBuilding_1F_EventScript_PriceLamenter_Text_0:
	.string "Sure, the apartments here are pretty\nand well-maintained, but they're\lridiculously expensive!\pMaybe I should move back to Oro Town…$"

PrimeCity_CladBuilding_1F_EventScript_RiotaTalker_Text_0:
	.string "Kids these days are luckier\nthan they think.\pRíota was a poor country when\nI was a teenager, and I mean POOR!$"
