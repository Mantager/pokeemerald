PrimeCity_CladBuilding_2F_MapScripts::
	.byte 0


PrimeCity_CladBuilding_2F_EventScript_CityTalker::
	lock
	faceplayer
	msgbox PrimeCity_CladBuilding_2F_EventScript_CityTalker_Text_0
	release
	end


PrimeCity_CladBuilding_2F_EventScript_UrghGirl::
	lock
	faceplayer
	msgbox PrimeCity_CladBuilding_2F_EventScript_UrghGirl_Text_0
	release
	end


PrimeCity_CladBuilding_2F_EventScript_CityTalker_Text_0:
	.string "This city has a deep sickness…\nit's too funky, yo!$"

PrimeCity_CladBuilding_2F_EventScript_UrghGirl_Text_0:
	.string "Urgh, the guy in the room next\nto me is always partying at 2am.\pMaybe I should call the police\non him, that'll show him not\lto try and one-up my parties.$"
