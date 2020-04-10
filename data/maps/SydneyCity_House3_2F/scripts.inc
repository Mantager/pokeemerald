SydneyCity_House3_2F_MapScripts::
	.byte 0

SydneyCity_House3_2F_EventScript_PannenkoekGirl::
	lock
	faceplayer
	msgbox SydneyCity_House3_2F_Text_IfYouGoToDotsy, MSGBOX_DEFAULT
	release
	end

SydneyCity_House3_2F_Text_IfYouGoToDotsy:
	.string "If you go to Dotsy City, you just\n"
	.string "have to check out the little shop\l"
	.string "in the outskirts of town.\p"
	.string "The pannenkoeks they sell are\n"
	.string "just the best!$"
