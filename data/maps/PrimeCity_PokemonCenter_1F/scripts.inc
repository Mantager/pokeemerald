PrimeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PrimeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PrimeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_PRIME_CITY
	end


PrimeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	clearflag FLAG_MEMLINK_IN_PROGRESS
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


PrimeCity_PokemonCenter_1F_EventScript_Lass::
	lock
	faceplayer
	msgbox PrimeCity_PokemonCenter_1F_EventScript_Lass_Text_0
	release
	end


PrimeCity_PokemonCenter_1F_EventScript_Lass_Text_0:
	.string "Ah, Pokémon Centers are the best\nplace to rest and recover after a\ltough Pokémon battle.$"
