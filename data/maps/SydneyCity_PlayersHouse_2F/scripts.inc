SydneyCity_PlayersHouse_2F_MapScripts::
	.byte 0

SydneyCity_PlayersHouse_2F_EventScript_CheckPlayersPC:: @ 81F8626
	setvar VAR_0x8004, 1
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

SydneyCity_PlayersHouse_2F_EventScript_TurnOffPlayerPC:: @ 81F863F
	setvar VAR_0x8004, 1
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

SydneyCity_PlayersHouse_2F_EventScript_DrawerPokeDoll::
	lock
	goto_if_set FLAG_HIDDEN_ITEM_PLAYERS_HOUSE_2F_POKE_DOLL, SydneyCity_PlayersHouse_2F_EventScript_DrawerEmpty
	msgbox SydneyCity_PlayersHouse_2F_Text_OhPokeDoll, MSGBOX_DEFAULT
	finditem ITEM_POKE_DOLL, 1
	setflag FLAG_HIDDEN_ITEM_PLAYERS_HOUSE_2F_POKE_DOLL
	release
	end

SydneyCity_PlayersHouse_2F_EventScript_DrawerEmpty::
	msgbox SydneyCity_PlayersHouse_2F_Text_ClothesAndClothes, MSGBOX_DEFAULT
	release
	end

SydneyCity_PlayersHouse_2F_Text_OhPokeDoll:
	.string "Clothes, clothes and more clothes…\n"
	.string "Oh! There's something in the drawer!$"

SydneyCity_PlayersHouse_2F_Text_ClothesAndClothes:
	.string "Clothes, clothes and more clothes…$"
