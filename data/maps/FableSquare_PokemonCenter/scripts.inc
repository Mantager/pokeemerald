FableSquare_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FableSquare_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FableSquare_PokemonCenter_OnTransition: @ 8200BD8
	setrespawn HEAL_LOCATION_FABLE_SQUARE
	call Common_EventScript_UpdateBrineyLocation
	end

@ VAR_0x800B is the Nurse's object event id
FableSquare_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
