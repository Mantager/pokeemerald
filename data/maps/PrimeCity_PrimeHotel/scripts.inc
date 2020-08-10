PrimeCity_PrimeHotel_MapScripts::
	.byte 0


PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_2
	msgbox PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_3
PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_1:
	release
	end

PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_2:
	msgbox PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_0
	giveitem ITEM_EXP_SHARE
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_5
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_2
	goto PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_1

PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_5:
	msgbox PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_1
	goto PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_1


PrimeCity_PrimeHotel_EventScript_FinestHotelReceptionist::
	lock
	faceplayer
	msgbox PrimeCity_PrimeHotel_EventScript_FinestHotelReceptionist_Text_0
	release
	end


PrimeCity_PrimeHotel_EventScript_PistaVillageOldMan::
	lock
	faceplayer
	msgbox PrimeCity_PrimeHotel_EventScript_PistaVillageOldMan_Text_0
	release
	end


PrimeCity_PrimeHotel_EventScript_GameboyKid::
	lock
	faceplayer
	msgbox PrimeCity_PrimeHotel_EventScript_GameboyKid_Text_0
	release
	end


PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_0:
	.string "Welcome to the Prime Hotel.\pDo you wish to book a room?\nI'm sorry, but we're full right now.\pPlease take this as consolation.$"

PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_1:
	.string "Oh!\nYou have no room for this.$"

PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_2:
	.string "Give that Exp. Share to a Pokémon.\pIt will automatically receive a share\nof experience when an opponent is\lknocked out, even if it had not\lpreviously participated in the battle.$"

PrimeCity_PrimeHotel_EventScript_ExpShareReceptionist_Text_3:
	.string "Again, I am so very sorry for\nbeing unable to accommodate you.\pWe hope to see you again.$"

PrimeCity_PrimeHotel_EventScript_FinestHotelReceptionist_Text_0:
	.string "This hotel is the finest in Ríota.\pHence, our room prices are expensive.\nPlease understand.$"

PrimeCity_PrimeHotel_EventScript_PistaVillageOldMan_Text_0:
	.string "I'm from Pista Village, so I don't\nvisit Prime City all that often.\pWhen I do however, I always stay\nin this hotel.\pThe quality is unmatched elsewhere.$"

PrimeCity_PrimeHotel_EventScript_GameboyKid_Text_0:
	.string "In Ríota, Pokémon like Haunter and\nRhydon don't need to be traded\lin order to evolve.$"
