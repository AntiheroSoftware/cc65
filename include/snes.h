/*****************************************************************************/
/*                                                                           */
/*                                  snes.h                                   */
/*                                                                           */
/*                     SNES system specific definitions                      */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2014 lintbe (jfdusar@gmail.com)                                       */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/

#ifndef _SNES_H
#define _SNES_H

/* Check for errors */
#if !defined(__SNES__)
#  error This module may only be used when compiling for the SNES!
#endif

/* Return codes of get_tv */
#define TV_NTSC         0
#define TV_PAL          1
#define TV_OTHER        2

/* No support for dynamically loadable drivers */
#define DYN_DRV         0

void waitvblank (void);
/* Wait for the vertical blanking */

unsigned char get_tv (void);
/* Return the video mode the machine is using. */

/* End of snes.h */
#endif
