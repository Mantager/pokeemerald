SydneyCity_SydneyTower_2F_MapScripts::
	.byte 0

SydneyCity_SydneyTower_2F_EventScript_WheelDesigner::
	lock
	faceplayer
	msgbox SydneyCity_SydneyTower_2F_Text_DesignWheelsForBikes, MSGBOX_DEFAULT
	release
	end

SydneyCity_SydneyTower_2F_EventScript_BallDesigner::
	lock
	faceplayer
	msgbox SydneyCity_SydneyTower_2F_Text_PlanningBallConcepts, MSGBOX_DEFAULT
	release
	end

SydneyCity_SydneyTower_2F_EventScript_WonderTradeGuy::
	lock
	faceplayer
	msgbox SydneyCity_SydneyTower_2F_Text_WonderTradeNotReady, MSGBOX_DEFAULT
	release
	end

SydneyCity_SydneyTower_2F_Text_DesignWheelsForBikes:
	.string "I design the wheels used in bicycles\n"
	.string "sold all over the world.\p"
	.string "Using a computer program, I create\n"
	.string "a model and send it to a facility\l"
	.string "in another location.\p"
	.string "It might seem like a mundane job,\n"
	.string "but it requires lots of attention.\p"
	.string "Each bike has different requirements\n"
	.string "for its wheels.\p"
	.string "Therefore, there's a lot you have to\n"
	.string "consider when modelling.$"

SydneyCity_SydneyTower_2F_Text_PlanningBallConcepts:
	.string "I'm planning concepts for new\n"
	.string "Poké Balls for my company to produce.\p"
	.string "Huh?\n"
	.string "What company am I from, you ask?\p"
	.string "Hahaha, I can't really say.$"

SydneyCity_SydneyTower_2F_Text_WonderTradeNotReady:
	.string "I'm working on a system that'll allow\n"
	.string "Trainers from all over Tomen to trade\l"
	.string "Pokémon with each other.\p"
	.string "I call it Wonder Trade.\n"
	.string "It's not quite ready yet, though.$"
