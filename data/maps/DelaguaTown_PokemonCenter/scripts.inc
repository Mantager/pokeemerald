DelaguaTown_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DelaguaTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DelaguaTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_DELAGUA_TOWN
	end


DelaguaTown_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


DelaguaTown_PokemonCenter_EventScript_SoManyMons::
	lock
	faceplayer
	msgbox DelaguaTown_PokemonCenter_EventScript_SoManyMons_Text_0
	release
	end


DelaguaTown_PokemonCenter_EventScript_SoManyMons_Text_0:
	.string "So many Pokémon can be found in\nthis world of ours.\pI wonder if anyone will ever catch\nthem all?$"
