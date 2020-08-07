OroTown_HouseB_MapScripts::
	.byte 0


OroTown_HouseB_EventScript_Cook::
	lock
	faceplayer
	msgbox OroTown_HouseB_EventScript_Cook_Text_0
	release
	end


OroTown_HouseB_EventScript_Cook_Text_0:
	.string "After working in Lumiose City for many\nyears, I decided to move to Ríota.\pThe food here is completely different,\nwhich is a nice challenge for me.$"
