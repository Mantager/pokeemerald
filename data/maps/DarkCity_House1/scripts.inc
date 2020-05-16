DarkCity_House1_MapScripts::
	.byte 0

DarkCity_House1_EventScript_GlitterLittleGirl::
	lock
	faceplayer
	msgbox DarkCity_House1_Text_GlitterYay, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_EventScript_GiveLuckyEgg::
	lock
	faceplayer
	goto_if_set FLAG_DARK_CITY_RECIEVED_LUCKY_EGG, DarkCity_House1_EventScript_RecievedLuckyEgg
	msgbox DarkCity_House1_Text_HeresLuckyEgg, MSGBOX_DEFAULT
	closemessage
	checkitemspace ITEM_LUCKY_EGG, 1
	compare VAR_RESULT, FALSE
	goto_if_eq DarkCity_House1_EventScript_NoRoomForItem
	giveitem_std ITEM_LUCKY_EGG, 1
	delay 8
	setflag FLAG_DARK_CITY_RECIEVED_LUCKY_EGG
	goto DarkCity_House1_EventScript_RecievedLuckyEgg
	end

DarkCity_House1_EventScript_DecorationMaker::	
	lock
	faceplayer
	msgbox DarkCity_House1_Text_DecorationMaker, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_EventScript_RecievedLuckyEgg::
	msgbox DarkCity_House1_Text_LuckyEggGainMore, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_EventScript_NoRoomForItem::
	msgbox DarkCity_House1_Text_NoRoomForLuckyEgg, MSGBOX_DEFAULT
	release
	end
