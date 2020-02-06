WangyongMarsh_MapScripts::
	.byte 0

WangyongMarsh_EventScript_Fan::
	trainerbattle_single TRAINER_FAN, WangyongMarsh_Text_FanIntro, WangyongMarsh_Text_FanDefeat
	msgbox WangyongMarsh_Text_FanPostBattle, MSGBOX_AUTOCLOSE
	end

WangyongMarsh_EventScript_Bolin::
	trainerbattle_single TRAINER_BOLIN, WangyongMarsh_Text_BolinIntro, WangyongMarsh_Text_BolinDefeat
	msgbox WangyongMarsh_Text_BolinPostBattle, MSGBOX_AUTOCLOSE
	end

WangyongMarsh_EventScript_Changpu::
	trainerbattle_single TRAINER_CHANGPU, WangyongMarsh_Text_ChangpuIntro, WangyongMarsh_Text_ChangpuDefeat
	msgbox WangyongMarsh_Text_ChangpuPostBattle, MSGBOX_AUTOCLOSE
	end

WangyongMarsh_EventScript_Kang::
	trainerbattle_single TRAINER_KANG, WangyongMarsh_Text_KangIntro, WangyongMarsh_Text_KangDefeat
	msgbox WangyongMarsh_Text_KangPostBattle, MSGBOX_AUTOCLOSE
	end

WangyongMarsh_EventScript_Dandan::
	trainerbattle_single TRAINER_DANDAN, WangyongMarsh_Text_DandanIntro, WangyongMarsh_Text_DandanDefeat
	msgbox WangyongMarsh_Text_DandanPostBattle, MSGBOX_AUTOCLOSE
	end

WangyongMarsh_EventScript_ThinkingMan::
	lock
	faceplayer
	msgbox WangyongMarsh_Text_ThinkingMan, MSGBOX_DEFAULT
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	release
	end

WangyongMarsh_Text_KangIntro:
	.string "You're going to see the Oracle?\n"
	.string "Who has time for that?$"

WangyongMarsh_Text_KangDefeat:
	.string "Who has time to battle, even?\n"
	.string "I need to get back to work!$"

WangyongMarsh_Text_KangPostBattle:
	.string "The marshlands are full of nutrients,\n"
	.string "so they're the perfect place for\l"
	.string "gathering plants for compost.$"

WangyongMarsh_Text_FanIntro:
	.string "I almost had that one!\n"
	.string "Why, you…$"

WangyongMarsh_Text_FanDefeat:
	.string "Losing a catch and a battle?\n"
	.string "This is not my day…$"

WangyongMarsh_Text_FanPostBattle:
	.string "You got your fight, so shoo!\n"
	.string "I'm busy here.$"

WangyongMarsh_Text_BolinIntro:
	.string "This is the perfect spot to fish!\n"
	.string "I'm sure of it.$"

WangyongMarsh_Text_BolinDefeat:
	.string "This is the worst spot to battle!\n"
	.string "I'm sure of it.$"

WangyongMarsh_Text_BolinPostBattle:
	.string "Fishing rods are a fisherman's most\n"
	.string "prized possession, you know.\p"
	.string "The rod I'm using now was passed down\n"
	.string "from my great-grandfather, to my\l"
	.string "grandfather, to my father, to me.$"

WangyongMarsh_Text_ChangpuIntro:
	.string "Wachaaa!\p"
	.string "If you get too close, I'm gonna\n"
	.string "kick those Poké Balls out of your\l"
	.string "hands!$"

WangyongMarsh_Text_ChangpuDefeat:
	.string "Finished already?$"

WangyongMarsh_Text_ChangpuPostBattle:
	.string "Well, losing at Pokémon is\n"
	.string "no serious matter at all.\p"
	.string "After all, my strengths lie in my\n"
	.string "mind, body and soul!$"

WangyongMarsh_Text_DandanIntro:
	.string "I caught a Carnivine to help\n"
	.string "me make clothes, but it just\l"
	.string "chews all my fabric to pieces…$"

WangyongMarsh_Text_DandanDefeat:
	.string "Oh, dear!$"

WangyongMarsh_Text_DandanPostBattle:
	.string "Even if my Pokémon can be annoying\n"
	.string "sometimes, I still love them to bits.\p"
	.string "That's just part of being a Trainer,\n"
	.string "right?$"

WangyongMarsh_Text_ThinkingMan:
	.string "Our Cho Village is just a tiny,\n"
	.string "isolated part of a huge region…\p"
	.string "There's still a lot of things\n"
	.string "we have no idea about.\p"
	.string "I wonder what else the world holds.$"
