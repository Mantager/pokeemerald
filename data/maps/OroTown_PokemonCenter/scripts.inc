OroTown_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OroTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OroTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ORO_TOWN
	end


OroTown_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


OroTown_PokemonCenter_EventScript_Beauty::
	lock
	faceplayer
	msgbox OroTown_PokemonCenter_EventScript_Beauty_Text_0
	release
	end


OroTown_PokemonCenter_EventScript_Swimmer::
	lock
	faceplayer
	msgbox OroTown_PokemonCenter_EventScript_Swimmer_Text_0
	release
	end


OroTown_PokemonCenter_EventScript_Beauty_Text_0:
	.string "My Pokémon was injured in a battle.\pI'm waiting for it to recover before\nwe head down to the beach and do a\lspot of sunbathing!$"

OroTown_PokemonCenter_EventScript_Swimmer_Text_0:
	.string "The beaches in Ríota are great,\nbut they're nothing compared to\lback home in Alola.$"
