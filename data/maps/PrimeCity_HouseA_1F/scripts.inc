PrimeCity_HouseA_1F_MapScripts::
	.byte 0


PrimeCity_HouseA_1F_EventScript_HouseSeller::
	lock
	faceplayer
	msgbox PrimeCity_HouseA_1F_EventScript_HouseSeller_Text_0
	release
	end


PrimeCity_HouseA_1F_EventScript_HouseSeller_Text_0:
	.string "I had to spend most of my life\nsavings in order to purchase this house.\pSo, I'm hoping that the housing\nmarket doesn't crash soon.\pOr else…\nthings might be looking hairy for me.$"
