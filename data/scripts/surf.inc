EventScript_UseSurf::
	@ checkpartymove MOVE_SURF
	@ goto_if_unset FLAG_BADGE05_GET, EventScript_EndUseSurf
	@ bufferpartymonnick STR_VAR_1, VAR_RESULT
	@ setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox Text_WantToSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox Text_MonUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

Text_WantToSurf:
	.string "The water is a shining blue.\n"
	.string "Would you like to call a ride?$"

Text_MonUsedSurf:
	.string "Called Brineys Sails in\n"
	.string "Petalburg!\p"
	.string "A Wailmer came to ferry you!$"
