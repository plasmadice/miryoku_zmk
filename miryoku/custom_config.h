// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Change right thumb cluster from ret, bspc, del -> ret, space, bspc
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC),  U_NP,              U_NP

// // disable homerow mods on extra layer
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,     &kp S,     &kp D,    &kp F,    &kp G,             &kp H,             &kp J,    &kp K,    &kp L,     &kp SQT \
&kp Z, &kp X,     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,   &kp SLASH,\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC),  U_NP,              U_NP

#define U_TAPPING_TERM 120

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
K32  K00  K01  K02  K03  K04                     &kp UP                     K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LEFT_SHIFT  K10  K11  K12  K13  K14             &kp LEFT     XXX     &kp RIGHT             K15  K16  K17  K18  K19  &kp RIGHT_SHIFT \
&kp LEFT_GUI  K20  K21  K22  K23  K24       XXX                   &kp DOWN             K25  K26  K27  K28  K29  &kp RIGHT_GUI \
                    K32  K33  K34                                         K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
K32  K00  K01  K02  K03  K04                     &kp UP                     K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LEFT_SHIFT  K10  K11  K12  K13  K14             &kp LEFT     XXX     &kp RIGHT             K15  K16  K17  K18  K19  &kp RIGHT_SHIFT \
&kp LEFT_GUI  K20  K21  K22  K23  K24       XXX                   &kp DOWN             K25  K26  K27  K28  K29  &kp RIGHT_GUI \
                    K32  K33  K34                                         K35  K36  K37

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAME       10