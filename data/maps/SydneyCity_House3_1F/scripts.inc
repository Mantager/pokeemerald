SydneyCity_House3_1F_MapScripts::
	.byte 0

SydneyCity_House3_1F_EventScript_ApartmentInfoWoman::
	lock
	faceplayer
	msgbox SydneyCity_House3_1F_Text_ThisHouseIsConverted, MSGBOX_DEFAULT
	release
	end

SydneyCity_House3_1F_EventScript_ManWantedFable::
	lock
	faceplayer
	msgbox SydneyCity_House3_1F_Text_WantedToMoveFable, MSGBOX_DEFAULT
	release
	end

SydneyCity_House3_1F_Text_ThisHouseIsConverted:
	.string "This house is actually a two-story\n"
	.string "apartment building.\p"
	.string "We live down here, and somebody\n"
	.string "else lives upstairs.$"

SydneyCity_House3_1F_Text_WantedToMoveFable:
	.string "We wanted to move to Fable Square,\n"
	.string "but the housing prices there are\l"
	.string "oddly high.\p"
	.string "So we settled for an apartment\n"
	.string "in Sydney City instead.$"
