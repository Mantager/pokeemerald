KimyangRoad_MapScripts::
	.byte 0

KimyangRoad_EventScript_Gen::
	trainerbattle_single TRAINER_GEN, KimyangRoad_Text_GenIntro, KimyangRoad_Text_GenDefeat
	msgbox KimyangRoad_Text_GenPostBattle, MSGBOX_AUTOCLOSE
	end

KimyangRoad_EventScript_Nian::
	trainerbattle_single TRAINER_NIAN, KimyangRoad_Text_NianIntro, KimyangRoad_Text_NianDefeat
	msgbox KimyangRoad_Text_NianPostBattle, MSGBOX_AUTOCLOSE
	end

KimyangRoad_EventScript_ItemfinderMan::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_ITEMFINDER, KimyangRoad_EventScript_ItemfinderMan_End
	msgbox KimyangRoad_Text_ItemfinderIntro, MSGBOX_DEFAULT
	giveitem_std ITEM_ITEMFINDER
	setflag FLAG_OBTAINED_ITEMFINDER
	msgbox KimyangRoad_Text_ItemfinderExplain, MSGBOX_DEFAULT
	release
	end

KimyangRoad_EventScript_ItemfinderMan_End::
	lock
	faceplayer
	msgbox KimyangRoad_Text_ItemfinderRecieved, MSGBOX_DEFAULT
	release
	end
