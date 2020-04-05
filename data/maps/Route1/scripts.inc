Route1_MapScripts::
	.byte 0

Route1_EventScript_Freddy::
	trainerbattle_single TRAINER_FREDDY, Route1_Text_FreddyIntro, Route1_Text_FreddyDefeated
	msgbox Route1_Text_FreddyPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Liam::
	trainerbattle_single TRAINER_LIAM, Route1_Text_LiamIntro, Route1_Text_LiamDefeated
	msgbox Route1_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Nicolet::
	trainerbattle_single TRAINER_NICOLET, Route1_Text_NicoletIntro, Route1_Text_NicoletDefeated
	msgbox Route1_Text_NicoletPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_Text_FreddyIntro:
	.string "I'll reach the top with\n"
	.string "my awesome Pokémon!$"

Route1_Text_FreddyDefeated:
	.string "I can't believe this…$"

Route1_Text_FreddyPostBattle:
	.string "Just you wait!\n"
	.string "I'll be the best, I'll show you!$"

Route1_Text_LiamIntro:
	.string "Trainer spotted!\n"
	.string "Let's battle!$"

Route1_Text_LiamDefeated:
	.string "I thought that I'd win this one\n"
	.string "for sure…$"

Route1_Text_LiamPostBattle:
	.string "If you lock eyes with another\n"
	.string "Trainer, you have to battle.\l"
	.string "That's just common sense.$"

Route1_Text_NicoletIntro:
	.string "Cute Pokémon are my favourites!$"

Route1_Text_NicoletDefeated:
	.string "But they aren't always good in\n"
	.string "a battle…$"

Route1_Text_NicoletPostBattle:
	.string "Is your favourite Pokémon cute?$"
