MtPyre_3F_MapScripts:: @ 8231752
	.byte 0

MtPyre_3F_EventScript_William:: @ 8231753
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla:: @ 823176A
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro: @ 82317E3
	.string "The rich atmosphere of the mountain\n"
	.string "has elevated my psychic power!\p"
	.string "A mere child like you…\n"
	.string "You dream of winning?$"

MtPyre_3F_Text_WilliamDefeat: @ 8231853
	.string "I drown in self-pity…$"

MtPyre_3F_Text_WilliamPostBattle: @ 8231869
	.string "My psychic powers have surely\n"
	.string "grown several times, but…$"

MtPyre_3F_Text_KaylaIntro: @ 82318A1
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_KaylaDefeat: @ 82318DD
	.string "I lost that cleanly…$"

MtPyre_3F_Text_KaylaPostBattle: @ 82318F2
	.string "This means my training is still not\n"
	.string "enough…\p"
	.string "I've got to keep working toward the\n"
	.string "summit…\p"
	.string "Go, me!$"
