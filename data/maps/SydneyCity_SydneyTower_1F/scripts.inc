SydneyCity_SydneyTower_1F_MapScripts::
	.byte 0

SydneyCity_SydneyTower_1F_EventScript_Receptionist::
	lock
	faceplayer
	msgbox SydneyCity_SydneyTower_1F_Text_WelcomeToSydneyTower, MSGBOX_DEFAULT
	release
	end

SydneyCity_SydneyTower_1F_Text_WelcomeToSydneyTower:
	.string "Welcome to Sydney Tower.\p"
	.string "Local business rent out floors of\n"
	.string "this building to use as offices.\p"
	.string "I hope you enjoy your stay.$"
