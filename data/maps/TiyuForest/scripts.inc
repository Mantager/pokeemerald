TiyuForest_MapScripts::
	.byte 0

TiyuForest_EventScript_Shi::
	trainerbattle_single TRAINER_SHI, TiyuForest_Text_ShiIntro, TiyuForest_Text_ShiDefeat
	msgbox TiyuForest_Text_ShiPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Ping::
	trainerbattle_single TRAINER_PING, TiyuForest_Text_PingIntro, TiyuForest_Text_PingDefeat
	msgbox TiyuForest_Text_ShiPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Chuntao::
	trainerbattle_single TRAINER_CHUNTAO, TiyuForest_Text_ChuntaoIntro, TiyuForest_Text_ChuntaoDefeat
	msgbox TiyuForest_Text_ChuntaoPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Daiyu::
	trainerbattle_single TRAINER_DAIYU, TiyuForest_Text_DaiyuIntro, TiyuForest_Text_DaiyuDefeat
	msgbox TiyuForest_Text_DaiyuPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_Text_ShiIntro:
	.string "I know all about Bug-type Pokémon.\n"
	.string "People call me the Bug-type guru!$"

TiyuForest_Text_ShiDefeat:
	.string "Knowledge isn't always power, it\n"
	.string "seems…$"

TiyuForest_Text_ShiPostBattle:
	.string "You're researching the ruins?\p"
	.string "Cool. I wonder if there are any\n"
	.string "Bug-type Pokémon living there.$"

TiyuForest_Text_PingIntro:
	.string "Ha! I've ensnared a Trainer!$"

TiyuForest_Text_PingDefeat:
	.string "It was a trap!\n"
	.string "I was the one who was ensnared…$"

TiyuForest_Text_PingPostBattle:
	.string "I catch Bug-type Pokémon to give to\n"
	.string "my big sis, who works as a tailor.$"

TiyuForest_Text_ChuntaoIntro:
	.string "Huh? A battle?\n"
	.string "But I'm trying to weave a dress!$"

TiyuForest_Text_ChuntaoDefeat:
	.string "This really winds me up!$"

TiyuForest_Text_ChuntaoPostBattle:
	.string "Seriously, leave me alone.\n"
	.string "I need to catch up on my work.$"

TiyuForest_Text_DaiyuIntro:
	.string "I'm collecting mushrooms to bring\n"
	.string "back to Cho Village.$"

TiyuForest_Text_DaiyuDefeat:
	.string "I lost? This sucks!$"

TiyuForest_Text_DaiyuPostBattle:
	.string "Selling Tiny Mushrooms is decent\n"
	.string "pocket money, but I need to sell\l"
	.string "Big Mushrooms to live properly.$"
