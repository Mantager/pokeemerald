YanurasTown_RestHouse_MapScripts::
	.byte 0


YanurasTown_RestHouse_EventScript_Woman::
	lock
	faceplayer
	msgbox YanurasTown_RestHouse_EventScript_Woman_Text_0
	release
	end


YanurasTown_RestHouse_EventScript_Man::
	lock
	faceplayer
	msgbox YanurasTown_RestHouse_EventScript_Man_Text_0
	release
	end


YanurasTown_RestHouse_EventScript_Bed::
	lock
	msgbox YanurasTown_RestHouse_EventScript_Bed_Text_0
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end


YanurasTown_RestHouse_EventScript_Woman_Text_0:
	.string "Oh my, you look exhausted.\pPlease feel free to take\na rest here if you need.$"

YanurasTown_RestHouse_EventScript_Man_Text_0:
	.string "This town is a close-knit,\nhard-working community.\pBut let's face it,\nnobody wants to live here.$"

YanurasTown_RestHouse_EventScript_Bed_Text_0:
	.string "(Looks like this bed is free to use.\nLet's take a rest.)$"
