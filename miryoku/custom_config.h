// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_NAV_VI

// #define MIRYOKU_KEYBOARD_EYELASH_CORNE

// #if defined (MIRYOKU_KEYBOARD_EYELASH_CORNE)

// // map outer keys to shift and gui
// #define LSH &kp LEFT_SHIFT
// #define RSH &kp RIGHT_SHIFT
// #define LGU &kp LEFT_GUI
// #define RGU &kp RIGHT_GUI
// #define MTE &kp C_MUTE

// #define MIRYOKU_LAYERMAPPING_BASE( \
//      K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
// ) \
// K32  K00  K01  K02  K03  K04                &kp UP                     K05  K06  K07  K08  K09  K37 \
// K32  K10  K11  K12  K13  K14    &kp LEFT    &u_to_U_BASE  &kp RIGHT    K15  K16  K17  K18  K19  K35 \
// LSH  K20  K21  K22  K23  K24    MTE         &kp DOWN                   K25  K26  K27  K28  K29  RSH \
//                K32  K33  K34                                           K35  K36  K37

// #define MIRYOKU_LAYERMAPPING_TAP( \
//      K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
// ) \
// K32  K00  K01  K02  K03  K04                &kp UP                     K05  K06  K07  K08  K09  K37 \
// LGU  K10  K11  K12  K13  K14    &kp LEFT    &u_to_U_BASE  &kp RIGHT    K15  K16  K17  K18  K19  RGU \
// LSH  K20  K21  K22  K23  K24    MTE         &kp DOWN                   K25  K26  K27  K28  K29  RSH \
//                K32  K33  K34                                           K35  K36  K37

// #endif

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MTL(LGUI, A),     U_MTL(LALT, S),     U_MTL(LCTRL, D),    U_MTL(LSHFT, F),    &kp G,             &kp H,             U_MTR(LSHFT, J),    U_MTR(LCTRL, K),    U_MTR(LALT, L),     U_MTR(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MTL(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MTR(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC),  U_NP,              U_NP
