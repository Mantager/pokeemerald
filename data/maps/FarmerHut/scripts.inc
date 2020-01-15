FarmerHut_MapScripts::
	.byte 0


FarmerHut_EventScript_DedenneTest::
	showmonpic SPECIES_DEDENNE, 10, 3
	bufferspeciesname 0, SPECIES_DEDENNE
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	givemon SPECIES_DEDENNE, 7, ITEM_NONE
	playfanfare MUS_FANFA4
	message FarmerHut_Text_ReceivedDedenne
	waitmessage
	waitfanfare
	removeobject 1
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FarmerHut_EventScript_DedenneTest_2
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto FarmerHut_EventScript_DedenneTest_2
	end

FarmerHut_EventScript_DedenneTest_2::
	hidemonpic
	setflag FLAG_SYS_POKEMON_GET
	releaseall
	end

FarmerHut_Text_ReceivedDedenne:
	.string "{PLAYER} received the {STR_VAR_1}!$"