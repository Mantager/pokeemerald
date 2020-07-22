PrimeCity_MapScripts::
	.byte 0


PrimeCity_DebugWailmer::
	end


PrimeCity_EventScript_PrimeWherePartyAt::
	lock
	faceplayer
	msgbox PrimeCity_EventScript_PrimeWherePartyAt_Text_0
	release
	end


PrimeCity_EventScript_DeptStoreSecuritySucks::
	lock
	faceplayer
	msgbox PrimeCity_EventScript_DeptStoreSecuritySucks_Text_0
	release
	end


PrimeCity_EventScript_PrimeWherePartyAt_Text_0:
	.string "Prime City is the biggest city in Ríota!\nThis is where the party's at, baby!$"

PrimeCity_EventScript_DeptStoreSecuritySucks_Text_0:
	.string "Those security guards at the\nDepartment Store are total bozos!\pI managed to get away with a whole\nshelf worths of PP Ups, heh heh heh!$"
