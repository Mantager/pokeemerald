PrimeCity_SpecialBuilding_MapScripts::
	.byte 0


PrimeCity_SpecialBuilding_EventScript_Woman::
	lock
	faceplayer
	msgbox PrimeCity_SpecialBuilding_EventScript_Woman_Text_0
	release
	end


PrimeCity_SpecialBuilding_EventScript_Woman_Text_0:
	.string "This is the City Hall.\pMembers of the city committee meet\nhere to debate issues affecting\lthe community of Prime City.$"
