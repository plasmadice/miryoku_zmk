// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Change right thumb cluster from ret, bspc, del -> ret, space, bspc
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MTL(LGUI, A),     U_MTL(LALT, S),     U_MTL(LCTRL, D),    U_MTL(LSHFT, F),    &kp G,             &kp H,             U_MTR(LSHFT, J),    U_MTR(LCTRL, K),    U_MTR(LALT, L),     U_MTR(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MTL(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MTR(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC),  U_NP,              U_NP


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",   sensor-bindings = <&inc_dec_kp C_VOL_UP C_VOL_DN &inc_dec_kp C_VOL_UP C_VOL_DN> ;) \
MIRYOKU_X(EXTRA,  "Extra",  sensor-bindings = <&inc_dec_kp C_VOL_UP C_VOL_DN &inc_dec_kp C_VOL_UP C_VOL_DN> ;) \
MIRYOKU_X(TAP,    "Tap",    ) \
MIRYOKU_X(BUTTON, "Button", ) \
MIRYOKU_X(NAV,    "Nav",    sensor-bindings = <&inc_dec_kp PG_UP PG_DN &inc_dec_kp PG_DN PG_UP> ;) \
MIRYOKU_X(MOUSE,  "Mouse",  ) \
MIRYOKU_X(MEDIA,  "Media",  sensor-bindings = <&inc_dec_kp C_VOL_UP C_VOL_DN &inc_dec_kp C_VOL_UP C_VOL_DN> ;) \
MIRYOKU_X(NUM,    "Num",    ) \
MIRYOKU_X(SYM,    "Sym",    ) \
MIRYOKU_X(FUN,    "Fun",    )

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9