// Copyright 2025 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define XXX &none

#define miryoku_layoutmapping_eyelash_corne( \
     k00, k01, k02, k03, k04,                k05, k06, k07, k08, k09, \
     k10, k11, k12, k13, k14,                k15, k16, k17, k18, k19, \
     k20, k21, k22, k23, k24,                k25, k26, k27, k28, k29, \
     n30, n31, k32, k33, k34,                k35, k36, k37, n38, n39 \
) \
k32  k00  k01  k02  k03  k04                     &kp UP                     k05  k06  k07  k08  k09  &u_to_u_base \
&kp left_shift  k10  k11  k12  k13  k14             &kp LEFT     xxx     &kp RIGHT             k15  k16  k17  k18  k19  &kp right_shift \
&kp left_gui  k20  k21  k22  k23  k24       xxx                   &kp DOWN             k25  k26  k27  k28  k29  &kp right_gui \
                    k32  k33  k34                                         k35  k36  k37

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 32 33
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 35 36

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE 