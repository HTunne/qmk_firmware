#ifndef HANDWIRED_ERGODOX_H
#define HANDWIRED_ERGODOX_H

#include "quantum.h"
#include <stdint.h>
#include <stdbool.h>

#define CPU_PRESCALE(n) (CLKPR = 0x80, CLKPR = (n))
#define CPU_16MHz       0x00

void init_ergodox(void);
/*
 */
#define LAYOUT_ergodox_handwired(                                               \
                                                                                \
    L00, L01, L02, L03, L04, L05, L06,     R00, R01, R02, R03, R04, R05, R06,   \
    L10, L11, L12, L13, L14, L15, L16,     R10, R11, R12, R13, R14, R15, R16,   \
    L20, L21, L22, L23, L24, L25,               R21, R22, R23, R24, R25, R26,   \
    L30, L31, L32, L33, L34, L35, L36,     R30, R31, R32, R33, R34, R35, R36,   \
    L40, L41, L42, L43, L44,                         R42, R43, R44, R45, R46,   \
                             L55, L56,     R50, R51,                            \
                                  L54,     R52,                                 \
                        L53, L52, L51,     R55, R54, R53 )                      \
                                                                                \
   /* matrix positions */                                                       \
   {                                                                            \
    { L00,    L01,    L02,    L03,    L04,    L05,    L06   }, \
    { L10,    L11,    L12,    L13,    L14,    L15,    L16   }, \
    { L20,    L21,    L22,    L23,    L24,    L25,    KC_NO }, \
    { L30,    L31,    L32,    L33,    L34,    L35,    L36   }, \
    { L40,    L41,    L42,    L43,    L44,    KC_NO,  KC_NO }, \
    { KC_NO,  L51,    L52,    L53,    L54,    L55,    L56   }, \
    { R00,    R01,    R02,    R03,    R04,    R05,    R06   }, \
    { R10,    R11,    R12,    R13,    R14,    R15,    R16   }, \
    { KC_NO,  R21,    R22,    R23,    R24,    R25,    R26   }, \
    { R30,    R31,    R32,    R33,    R34,    R35,    R36   }, \
    { KC_NO,  KC_NO,  R42,    R43,    R44,    R45,    R46   }, \
    { R50,    R51,    R52,    R53,    R54,    R55,    KC_NO }  \
   }

#endif

