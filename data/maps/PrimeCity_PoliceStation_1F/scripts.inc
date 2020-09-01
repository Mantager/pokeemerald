PrimeCity_PoliceStation_1F_MapScripts::
	.byte 0


PrimeCity_PoliceStation_1F_EventScript_OfficerDesk::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_1F_EventScript_OfficerDesk_Text_0
	release
	end


PrimeCity_PoliceStation_1F_EventScript_OfficerIdle::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_1F_EventScript_OfficerIdle_Text_0
	release
	end


PrimeCity_PoliceStation_1F_EventScript_OfficerTable::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_1F_EventScript_OfficerTable_Text_0
	release
	end


PrimeCity_PoliceStation_1F_EventScript_OfficerDesk_Text_0:
	.string "This is Prime City's police station.\pIf you ever do something wrong, then\nwe'll know about it!$"

PrimeCity_PoliceStation_1F_EventScript_OfficerIdle_Text_0:
	.string "Ríota's actually very light on crime.\pYou could probably call us more 'public\nambassadors' than policemen.$"

PrimeCity_PoliceStation_1F_EventScript_OfficerTable_Text_0:
	.string "The job pays well, but sometimes\nit's tiring.\pYou see, I have to wake up really early.$"
