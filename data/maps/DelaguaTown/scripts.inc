DelaguaTown_MapScripts::
	.byte 0


DelaguaTown_EventScript_Fisherman::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_Fisherman_Text_0
	release
	end


DelaguaTown_EventScript_TuberM::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_TuberM_Text_0
	release
	end


DelaguaTown_EventScript_TuberF::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_TuberF_Text_0
	release
	end


DelaguaTown_EventScript_LeagueTalker::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_LeagueTalker_Text_0
	release
	end


DelaguaTown_EventScript_SwimOffTalker::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_SwimOffTalker_Text_0
	release
	end


DelaguaTown_EventScript_BattleTalker::
	lock
	faceplayer
	msgbox DelaguaTown_EventScript_BattleTalker_Text_0
	release
	end


DelaguaTown_EventScript_Sign::
	lock
	msgbox DelaguaTown_EventScript_Sign_Text_0
	release
	end


DelaguaTown_EventScript_Beauty::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ITEMFINDER, DelaguaTown_EventScript_Beauty_2
	msgbox DelaguaTown_EventScript_Beauty_Text_2
DelaguaTown_EventScript_Beauty_1:
	release
	end

DelaguaTown_EventScript_Beauty_2:
	msgbox DelaguaTown_EventScript_Beauty_Text_0
	giveitem ITEM_ITEMFINDER
	setflag FLAG_RECEIVED_ITEMFINDER
	msgbox DelaguaTown_EventScript_Beauty_Text_1
	goto DelaguaTown_EventScript_Beauty_1


DelaguaTown_EventScript_Fisherman_Text_0:
	.string "Whaddaya think about the sea, huh?\nI wonder just how many Pokémon\llive down there.$"

DelaguaTown_EventScript_TuberM_Text_0:
	.string "The sea!\nThe sea!\lI love the sea!$"

DelaguaTown_EventScript_TuberF_Text_0:
	.string "Delagua Town used to be occupied\nby pirates hundreds of years ago.\lI want to meet one.$"

DelaguaTown_EventScript_LeagueTalker_Text_0:
	.string "Pokémon League…\pRíota doesn't have one, but there's\lplans to build one in the future.\pI wonder what kind of Trainers\nwould compete?$"

DelaguaTown_EventScript_SwimOffTalker_Text_0:
	.string "I saw you in the Swim-Off!\nTo think that you beat Marlon…\lIt's incredible!$"

DelaguaTown_EventScript_BattleTalker_Text_0:
	.string "Man, sometimes I relax on the beach\nfor so long that I forget\lhow to battle.$"

DelaguaTown_EventScript_Sign_Text_0:
	.string "Delagua Town\nShining Cove of Sand$"

DelaguaTown_EventScript_Beauty_Text_0:
	.string "I've got something for you!\nIt's an Itemfinder!$"

DelaguaTown_EventScript_Beauty_Text_1:
	.string "With an Itemfinder, you can find\nhidden items in the field!$"

DelaguaTown_EventScript_Beauty_Text_2:
	.string "You should try out the Itemfinder\neverywhere you go!\pYou'll be surprised at what you\ncan find.$"
