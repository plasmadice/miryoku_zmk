// Copyright 2025 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define XXX &none

// Eyelash Corne 48-key layout based on matrix transform:
// Row 1: 6 left + 1 encoder + 6 right = 13 keys
// Row 2: 6 left + 3 rocker (left/center/right) + 6 right = 15 keys
// Row 3: 6 left + 1 space + 1 encoder + 6 right = 14 keys  
// Row 4: 3 left thumbs + 3 right thumbs = 6 keys
// Total: 48 keys in a 13+15+14+6 layout

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
K32  K00  K01  K02  K03  K04                     &kp UP                     K05  K06  K07  K08  K09  K37 \
K33  K10  K11  K12  K13  K14             &kp LEFT     U_BTN1     &kp RIGHT             K15  K16  K17  K18  K19  K36 \
K34  K20  K21  K22  K23  K24       XXX                   &kp DOWN             K25  K26  K27  K28  K29  K35 \
                    K32  K33  K34                                         K35  K36  K37

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 32 33
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 35 36

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE 