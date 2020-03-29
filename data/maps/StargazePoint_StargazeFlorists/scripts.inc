StargazePoint_StargazeFlorists_MapScripts::
	.byte 0

StargazePoint_StargazeFlorists_EventScript_WailmerPailWoman::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, StargazePoint_StargazeFlorists_EventScript_GiveWailmerPail
	msgbox StargazePoint_StargazeFlorists_Text_AfterWailmerPailRecieved, MSGBOX_DEFAULT
	release
	end

StargazePoint_StargazeFlorists_EventScript_GiveWailmerPail::
	msgbox StargazePoint_StargazeFlorists_Text_PleaseTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_WAILMER_PAIL
	msgbox StargazePoint_StargazeFlorists_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	end

StargazePoint_StargazeFlorists_EventScript_RandomBerryGirl:: @ 822A442
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, StargazePoint_StargazeFlorists_EventScript_AlreadyReceivedBerry
	msgbox StargazePoint_StargazeFlorists_Text_FreeDailySamples, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	msgbox StargazePoint_StargazeFlorists_Text_ComeBackTomorrow, MSGBOX_DEFAULT
	release
	end

StargazePoint_StargazeFlorists_EventScript_AlreadyReceivedBerry::
	msgbox StargazePoint_StargazeFlorists_Text_BerryBusiness, MSGBOX_DEFAULT
	release
	end

StargazePoint_StargazeFlorists_Text_PleaseTakeThis:
	.string "When growing Berries, it's important\n"
	.string "to give each plant lots of attention.\p"
	.string "Think of them as like children.\p"
	.string "In order to develop properly, they\n"
	.string "need the utmost care.\p"
	.string "I have something here that will help\n"
	.string "you care for your Berry plants.\l"
	.string "Please take it.$"

StargazePoint_StargazeFlorists_Text_WailmerPailExplanation:
	.string "That's a Wailmer Pail, and it's\n"
	.string "essential for tending plants.\p"
	.string "If you water Berry plants with it,\n"
	.string "then they will definitely be grateful.\p"
	.string "Once per day should be enough.$"

StargazePoint_StargazeFlorists_Text_AfterWailmerPailRecieved:
	.string "When it comes to growing Berries,\n"
	.string "being patient is key.\p"
	.string "If you water your Berry plants every\n"
	.string "day, your crop is sure to be fruitful.\p"
	.string "On the other hand, if you neglect your\n"
	.string "plants, they will wither away…$"

StargazePoint_StargazeFlorists_Text_FreeDailySamples:
	.string "Hiya!\p"
	.string "We're offering free samples daily to\n"
	.string "anybody who visits the shop.\p"
	.string "Here you go!\n"
	.string "It's for you!$"

StargazePoint_StargazeFlorists_Text_ComeBackTomorrow:
	.string "If you come back tomorrow, I'll give\n"
	.string "you another Berry!$"

StargazePoint_StargazeFlorists_Text_BerryBusiness:
	.string "Berries aren't just tasty food.\n"
	.string "Many are also useful in battle.\p"
	.string "Because of that, the Berry business\n"
	.string "is very lucrative if you're growing\l"
	.string "the right kind of crop.$"
