SecretBase_TheDelphisCabin_MapScripts::
# 2 "data/maps/SecretBase_TheDelphisCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SecretBase_TheDelphisCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SecretBase_TheDelphisCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SecretBase_TheDelphisCabin/scripts.pory"
	compare VAR_SECRET_BASE_INITIALIZED, 1
	goto_if_ne SecretBase_TheDelphisCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SecretBase_TheDelphisCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/SecretBase_TheDelphisCabin/scripts.pory"
	goto SecretBase_EventScript_FirstEntrance
	return

