;
; 2014-02-05 lintbe/AntiheroSoftware <jfdusar@gmail.com>
;
; unsigned char get_tv (void);
; /* Return the video mode the machine is using */
;

        .setcpu         "65816"

        .include        "snes.inc"
        .include        "get_tv.inc"

.proc   _get_tv

        lda     PPU_RO_STAT78   ; assume a is 8-bit
        and     #<10
        beq     isntsc
        lda     #TV::PAL
        rts
isntsc: lda     #TV::NTSC
        rts

.endproc
