// copyright 2021 manna harbour
// https://github.com/manna-harbour/miryoku

// change right thumb cluster from ret, bspc, del -> ret, space, bspc
#define miryoku_layer_base \
&kp q,             &kp w,             &kp e,             &kp r,             &kp t,             &kp y,             &kp u,             &kp i,             &kp o,             &kp p,             \
u_mt(lgui, a),     u_mt(lalt, s),     u_mt(lctrl, d),    u_mt(lshft, f),    &kp g,             &kp h,             u_mt(lshft, j),    u_mt(lctrl, k),    u_mt(lalt, l),     u_mt(lgui, sqt),   \
u_lt(u_button, z), u_mt(ralt, x),     &kp c,             &kp v,             &kp b,             &kp n,             &kp m,             &kp comma,         u_mt(ralt, dot),   u_lt(u_button, slash),\
u_np,              u_np,              u_lt(u_media, esc),u_lt(u_nav, space),u_lt(u_mouse, tab),u_lt(u_sym, ret),  u_lt(u_num, space), u_lt(u_fun, bspc),  u_np,              u_np
