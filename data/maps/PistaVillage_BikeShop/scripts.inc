PistaVillage_BikeShop_MapScripts::
	.byte 0


PistaVillage_BikeShop_EventScript_ShopOwner::
	lock
	faceplayer
	msgbox PistaVillage_BikeShop_EventScript_ShopOwner_Text_0
	release
	end


PistaVillage_BikeShop_EventScript_Designer::
	lock
	faceplayer
	msgbox PistaVillage_BikeShop_EventScript_Designer_Text_0
	release
	end


PistaVillage_BikeShop_EventScript_ShopOwner_Text_0:
	.string "'Ello, sonny!\nYou like bikes, yes?\lFeel free to have a look around.$"

PistaVillage_BikeShop_EventScript_Designer_Text_0:
	.string "This is the workshop, where we\nfix bikes as well as design\lour own.\pActually, designing bikes is harder than\nyou might think.\pEspecially when it has to match up\nto professional brands!$"
