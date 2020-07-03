MantaZone_House1_MapScripts::
	.byte 0


MantaZone_House1_EventScript_PsyduckPokeBall::
	lockall
	msgbox MantaZone_House1_Text_TakeThisBall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MantaZone_House1_EventScript_PsyduckPokeBall_1
	givemon SPECIES_PSYDUCK, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, 0
	goto_if_eq MantaZone_House1_EventScript_PsyduckPokeBall_5
	compare VAR_RESULT, 1
	goto_if_eq MantaZone_House1_EventScript_PsyduckPokeBall_6
	goto Common_EventScript_NoMoreRoomForPokemon
MantaZone_House1_EventScript_PsyduckPokeBall_4:
	releaseall
	end

MantaZone_House1_EventScript_PsyduckPokeBall_1:
	msgbox MantaZone_House1_Text_LeftTheBall
	releaseall
	end

MantaZone_House1_EventScript_PsyduckPokeBall_5:
	call MantaZone_House1_EventScript_PsyduckFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MantaZone_House1_EventScript_PsyduckPokeBall_11
MantaZone_House1_EventScript_PsyduckPokeBall_10:
	setflag FLAG_UNUSED_0x020
	goto MantaZone_House1_EventScript_PsyduckPokeBall_4

MantaZone_House1_EventScript_PsyduckPokeBall_6:
	call MantaZone_House1_EventScript_PsyduckFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MantaZone_House1_EventScript_PsyduckPokeBall_14
MantaZone_House1_EventScript_PsyduckPokeBall_13:
	call Common_EventScript_TransferredToPC
	setflag FLAG_UNUSED_0x020
	goto MantaZone_House1_EventScript_PsyduckPokeBall_4

MantaZone_House1_EventScript_PsyduckPokeBall_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MantaZone_House1_EventScript_PsyduckPokeBall_10

MantaZone_House1_EventScript_PsyduckPokeBall_14:
	call Common_EventScript_NameReceivedBoxMon
	goto MantaZone_House1_EventScript_PsyduckPokeBall_13


MantaZone_House1_EventScript_PsyduckFanfare::
	bufferspeciesname 1, SPECIES_PSYDUCK
	removeobject 1
	playfanfare MUS_FANFA4
	setflag FLAG_SYS_POKEMON_GET
	message MantaZone_House1_Text_ObtainedPsyduck
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_PSYDUCK
	return


MantaZone_House1_EventScript_EggWoman::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x021, MantaZone_House1_EventScript_EggWoman_1
	msgbox MantaZone_House1_Text_WantThisEgg, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MantaZone_House1_EventScript_EggWoman_4
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq MantaZone_House1_EventScript_EggWoman_7
	setflag FLAG_UNUSED_0x021
	msgbox MantaZone_House1_Text_TakeCareOfIt
	playfanfare MUS_FANFA4
	message MantaZone_House1_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_PICHU
	release
	end

MantaZone_House1_EventScript_EggWoman_1:
	msgbox MantaZone_House1_Text_SomethingNice
	release
	end

MantaZone_House1_EventScript_EggWoman_4:
	msgbox MantaZone_House1_Text_OkayThen
	release
	end

MantaZone_House1_EventScript_EggWoman_7:
	msgbox MantaZone_House1_Text_NoRoomForEgg
	release
	end


MantaZone_House1_Text_LeftTheBall::
	.string "Decided to leave the Poké Ball.$"

MantaZone_House1_Text_TakeThisBall::
	.string "This Poké Ball contains a Psyduck.\p"
	.string "Will you take it?$"

MantaZone_House1_Text_ObtainedPsyduck::
	.string "{PLAYER} obtained Psyduck!$"

MantaZone_House1_Text_NoRoomForEgg::
	.string "Oh, you have no room for this!$"

MantaZone_House1_Text_OkayThen::
	.string "I see.\n"
	.string "I hope you reconsider.$"

MantaZone_House1_Text_ReceivedTheEgg::
	.string "{PLAYER} received the mysterious Egg!$"

MantaZone_House1_Text_TakeCareOfIt::
	.string "I hope you take care of it.$"

MantaZone_House1_Text_SomethingNice::
	.string "Did that Egg hatch yet?\n"
	.string "I hope something nice came out.$"

MantaZone_House1_Text_WantThisEgg::
	.string "I've got a Pokémon Egg here.\p"
	.string "I'm not sure what's inside of it,\n"
	.string "but will you take it for me?$"
