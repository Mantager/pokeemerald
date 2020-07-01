MantaZone_MapScripts::
	.byte 0


MantaZone_Sign::
	lock
	msgbox MantaZone_Sign_Text_0, MSGBOX_SIGN
	release
	end


MantaZone_Sign_Text_0:
	.string "Manta Zone$"
