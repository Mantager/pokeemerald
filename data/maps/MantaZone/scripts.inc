MantaZone_MapScripts::
	.byte 0


MantaZone_Sign::
	lock
	msgbox MantaZone_Sign_Text_0, MSGBOX_SIGN
	release
	end


MantaZone_EventScript_Baro::
	trainerbattle_single TRAINER_BARO, MantaZone_EventScript_Baro_Text_0, MantaZone_EventScript_Baro_Text_1
	msgbox MantaZone_EventScript_Baro_Text_2, MSGBOX_AUTOCLOSE
	end


MantaZone_Sign_Text_0:
	.string "Manta Zone$"

MantaZone_EventScript_Baro_Text_0:
	.string "Battle me now, loser!$"

MantaZone_EventScript_Baro_Text_1:
	.string "No way!$"

MantaZone_EventScript_Baro_Text_2:
	.string "I'll beat you next time.$"
