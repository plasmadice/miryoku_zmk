// Copyright 2025 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define XXX &none

#define LSH &kp LEFT_SHIFT
#define RSH &kp RIGHT_SHIFT

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
K32  K00  K01  K02  K03  K04                     &kp UP                K05  K06  K07  K08  K09  K37 \
K32  K10  K11  K12  K13  K14             &kp LEFT  &u_to_U_BASE  &kp RIGHT  K15  K16  K17  K18  K19  K35 \
LSH  K20  K21  K22  K23  K24  &kp C_MUTE         &kp DOWN              K25  K26  K27  K28  K29  RSH \
                    K32  K33  K34                                 K35  K36  K37
#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE 