PrimeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PrimeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PrimeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_PRIME_CITY
	end


PrimeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

