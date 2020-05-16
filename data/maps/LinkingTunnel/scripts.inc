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
