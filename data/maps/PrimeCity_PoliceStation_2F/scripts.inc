PrimeCity_PoliceStation_2F_MapScripts::
	.byte 0


PrimeCity_PoliceStation_2F_EventScript_PoliceChief::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_2F_EventScript_PoliceChief_Text_0
	release
	end


PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerWoman::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerWoman_Text_0
	release
	end


PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerMan::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerMan_Text_0
	release
	end


PrimeCity_PoliceStation_2F_EventScript_ThiefTalker::
	lock
	faceplayer
	msgbox PrimeCity_PoliceStation_2F_EventScript_ThiefTalker_Text_0
	release
	end


PrimeCity_PoliceStation_2F_EventScript_StayPrepared::
	lock
	faceplayer
	goto_if_unset FLAG_RECIEVED_ASSAULT_VEST, PrimeCity_PoliceStation_2F_EventScript_StayPrepared_2
	msgbox PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_3
PrimeCity_PoliceStation_2F_EventScript_StayPrepared_1:
	release
	end

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_2:
	msgbox PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_0
	giveitem FLAG_RECIEVED_ASSAULT_VEST
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_PoliceStation_2F_EventScript_StayPrepared_5
	setflag FLAG_RECIEVED_ASSAULT_VEST
	msgbox PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_2
	goto PrimeCity_PoliceStation_2F_EventScript_StayPrepared_1

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_5:
	msgbox PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_1
	goto PrimeCity_PoliceStation_2F_EventScript_StayPrepared_1


PrimeCity_PoliceStation_2F_EventScript_PoliceChief_Text_0:
	.string "I'm the Chief of Police here.\nI'll let you in on a secret though.\pI only took the promotion so that\nI'd get a big desk all to myself.$"

PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerWoman_Text_0:
	.string "Raihan, a famous Trainer from Galar, is\ncoming for an exhibition match soon.\pHe's totally gorgeous!$"

PrimeCity_PoliceStation_2F_EventScript_RaihanTalkerMan_Text_0:
	.string "We'll have to tighten up security\nfor the Raihan visit.\pPeople tend to get heated after\nbig Pokémon matches.$"

PrimeCity_PoliceStation_2F_EventScript_ThiefTalker_Text_0:
	.string "We recieved reports of a thief\nstealing house plants once.\pTurns out it was just a Slakoth\nwhich climbed through the window\land ate the plants.\pI don't know how the client didn't\nnotice before, though.$"

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_0:
	.string "In this job, you should be\nprepared for a scrap at all times.\pHere, if you get in a fight,\nthis should help a lot.$"

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_1:
	.string "Uh, you've got no room for this.$"

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_2:
	.string "If a Pokémon holds that, its Sp. Def\nis boosted, but it can only attack.$"

PrimeCity_PoliceStation_2F_EventScript_StayPrepared_Text_3:
	.string "If a Pokémon holds that Assault Vest,\nits Sp. Def is boosted,\lbut it can only attack.$"
