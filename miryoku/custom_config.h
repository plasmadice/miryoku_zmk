// copyright 2021 manna harbour
// https://github.com/manna-harbour/miryoku

#if !defined (miryoku_layoutmapping_eyelash_corne)

#define xxx &none

#define miryoku_layoutmapping_eyelash_corne( \
     k00, k01, k02, k03, k04,                k05, k06, k07, k08, k09, \
     k10, k11, k12, k13, k14,                k15, k16, k17, k18, k19, \
     k20, k21, k22, k23, k24,                k25, k26, k27, k28, k29, \
     n30, n31, k32, k33, k34,                k35, k36, k37, n38, n39 \
) \
k32  k00  k01  k02  k03  k04                     &kp UP                     k05  k06  k07  k08  k09  k37 \
&kp left_shift  k10  k11  k12  k13  k14             &kp LEFT     xxx     &kp RIGHT             k15  k16  k17  k18  k19  &kp right_shift \
&kp left_gui  k20  k21  k22  k23  k24       xxx                   &kp DOWN             k25  k26  k27  k28  k29  &kp right_gui \
                    k32  k33  k34                                         k35  k36  k37

#define miryoku_kludge_thumbcombos_left 32 33
#define miryoku_kludge_thumbcombos_right 35 36

#endif

// change right thumb cluster from ret, bspc, del -> ret, space, bspc
#define miryoku_layer_base \
&kp q,             &kp w,             &kp e,             &kp r,             &kp t,             &kp y,             &kp u,             &kp i,             &kp o,             &kp p,             \
u_mt(lgui, a),     u_mt(lalt, s),     u_mt(lctrl, d),    u_mt(lshft, f),    &kp g,             &kp h,             u_mt(lshft, j),    u_mt(lctrl, k),    u_mt(lalt, l),     u_mt(lgui, sqt),   \
u_lt(u_button, z), u_mt(ralt, x),     &kp c,             &kp v,             &kp b,             &kp n,             &kp m,             &kp comma,         u_mt(ralt, dot),   u_lt(u_button, slash),\
u_np,              u_np,              u_lt(u_media, esc),u_lt(u_nav, space),u_lt(u_mouse, tab),u_lt(u_sym, ret),  u_lt(u_num, space), u_lt(u_fun, bspc),  u_np,              u_np

// // disable homerow mods on extra layer
#define miryoku_layer_game \
&kp q,             &kp w,             &kp e,             &kp r,             &kp t,             &kp y,             &kp u,             &kp i,             &kp o,             &kp p,             \
&kp a,     &kp s,     &kp d,    &kp f,    &kp g,             &kp h,             &kp j,    &kp k,    &kp l,     &kp sqt \
&kp z, &kp x,     &kp c,             &kp v,             &kp b,             &kp n,             &kp m,             &kp comma,         &kp dot,   &kp slash,\
u_np,              u_np,              u_lt(u_media, esc),u_lt(u_nav, space),u_lt(u_mouse, tab),u_lt(u_sym, ret),  u_lt(u_num, space), u_lt(u_fun, bspc),  u_np,              u_np

#define u_tapping_term 120

#define miryoku_layer_list \
miryoku_x(base,   "base") \
miryoku_x(extra,  "extra") \
miryoku_x(tap,    "tap") \
miryoku_x(button, "button") \
miryoku_x(nav,    "nav") \
miryoku_x(mouse,  "mouse") \
miryoku_x(media,  "media") \
miryoku_x(num,    "num") \
miryoku_x(sym,    "sym") \
miryoku_x(fun,    "fun") \
miryoku_x(game,   "game") \

#define miryoku_layermapping_game( \
     k00, k01, k02, k03, k04,                k05, k06, k07, k08, k09, \
     k10, k11, k12, k13, k14,                k15, k16, k17, k18, k19, \
     k20, k21, k22, k23, k24,                k25, k26, k27, k28, k29, \
     n30, n31, k32, k33, k34,                k35, k36, k37, n38, n39 \
) \
k32  k00  k01  k02  k03  k04                     &kp UP                     k05  k06  k07  k08  k09  &u_to_u_base \
&kp left_shift  k10  k11  k12  k13  k14             &kp LEFT     xxx     &kp RIGHT             k15  k16  k17  k18  k19  &kp right_shift \
&kp left_gui  k20  k21  k22  k23  k24       xxx                   &kp DOWN             k25  k26  k27  k28  k29  &kp right_gui \
                    k32  k33  k34                                         k35  k36  k37

#define u_base        0
#define u_extra       1
#define u_tap         2
#define u_button      3
#define u_nav         4
#define u_mouse       5
#define u_media       6
#define u_num         7
#define u_sym         8
#define u_fun         9
#define u_game       10