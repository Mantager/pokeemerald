LinkingTunnel_MapScripts::
	.byte 0

LinkingTunnel_EventScript_Diglett::
	lock
	msgbox LinkingTunnel_Text_DiglettAsleep, MSGBOX_DEFAULT
	release
	end

LinkingTunnel_EventScript_DiglettGuy::
	lock
	faceplayer
	msgbox LinkingTunnel_Text_DiglettBlockingWay, MSGBOX_DEFAULT
	release
	end

LinkingTunnel_Text_DiglettAsleep:
	.string "The Diglett is sleeping soundly.$"

LinkingTunnel_Text_DiglettBlockingWay:
	.string "I wanted to get to Zhaoun Path, but\n"
	.string "these Diglett are blocking the way!\p"
	.string "I'm sure they'll wake up and move\n"
	.string "soon enough, though.$"
