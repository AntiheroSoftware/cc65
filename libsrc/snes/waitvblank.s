;
; Written by lintbe/AntiheroSoftware <jfdusar@gmail.com>
;
; void waitvblank(void);
;

        .setcpu     "65816"

        .include    "snes.inc"

        .export     _waitvblank

.proc       _waitvblank

	    sep		#$20
	    .a8
wait:   lda		CPU_RDNMI
	    and		#<$80
	    beq		wait
	    rep		#$20
	    .a16
	    rts

.endproc

