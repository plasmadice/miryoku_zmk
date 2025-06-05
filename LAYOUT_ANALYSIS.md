# Eyelash Corne Layout Analysis

## Problem Discovery

The initial implementation used a **42-key layout mapping** (standard Corne), but the Eyelash Corne actually has a **48-key layout** with additional encoder and directional rocker controls.

## Original zmk-new_corne Analysis

### Matrix Transform Structure
From `zmk-new_corne/boards/arm/eyelash_corne/eyelash_corne.dtsi`:

```
Row 1: RC(0,0) RC(0,1) RC(0,2) RC(0,3) RC(0,4) RC(0,5) | RC(0,12) | RC(0,13) RC(0,7) RC(0,8) RC(0,9) RC(0,10) RC(0,11)
Row 2: RC(1,0) RC(1,1) RC(1,2) RC(1,3) RC(1,4) RC(1,5) | RC(2,12) RC(4,12) RC(3,12) | RC(1,13) RC(1,7) RC(1,8) RC(1,9) RC(1,10) RC(1,11)
Row 3: RC(2,0) RC(2,1) RC(2,2) RC(2,3) RC(2,4) RC(2,5) RC(3,2) | RC(1,12) | RC(2,13) RC(2,7) RC(2,8) RC(2,9) RC(2,10) RC(2,11)
Row 4: RC(3,3) RC(3,4) RC(3,5) | RC(3,13) RC(3,7) RC(3,8)
```

### Key Count Breakdown
- **Row 1**: 6 left + 1 encoder + 6 right = **13 keys**
- **Row 2**: 6 left + 3 rocker (left/center/right) + 6 right = **15 keys**
- **Row 3**: 6 left + 1 space + 1 encoder + 6 right = **14 keys**
- **Row 4**: 3 left thumbs + 3 right thumbs = **6 keys**

**Total**: 13 + 15 + 14 + 6 = **48 keys**

### Physical Layout
From the original keymap:
```
Row 1: TAB Q W E R T | UP | Y U I O P BSPC
Row 2: SHIFT A S D F G | LEFT ENTER RIGHT | H J K L SEMI SQT  
Row 3: CTRL Z X C V B SPACE | DOWN | N M COMMA DOT FSLH ESC
Row 4: GUI MO1 LT3 | LT3 MO2 RALT
```

## Solution

### 1. Created 48-key Mapping
- **Path**: `miryoku/mapping/48/eyelash_corne.h`
- **Structure**: Properly maps Miryoku's 34-key layout to the 48-key Eyelash Corne
- **Middle columns**: Handled with `XXX` placeholders for encoder/rocker positions

### 2. Updated Configuration
- **Keymap**: Updated to reference `48/eyelash_corne.h` instead of `42/eyelash_corne.h`
- **Validation**: Updated test script to check for 48-key mapping
- **Documentation**: Updated status and analysis files

### 3. Key Features Preserved
- **Encoder (left)**: Volume control, scrolling, RGB brightness
- **Rocker (right)**: Directional navigation, mouse movement
- **Miryoku layout**: Core 34-key layout properly mapped to outer positions
- **Thumb clusters**: Standard Miryoku thumb key arrangement

## Validation

All configuration tests now pass:
```bash
./test_eyelash_corne_config.sh
# ✅ All configuration tests passed!
```

## Next Steps

1. **Test build** via GitHub Actions
2. **Verify layout** works correctly on hardware
3. **Fine-tune** encoder/rocker behaviors if needed

## Technical Notes

- The Eyelash Corne is more complex than a standard Corne due to the integrated encoder and rocker
- The matrix transform shows the exact physical-to-logical key mapping
- The 48-key layout accommodates all physical positions while preserving Miryoku's ergonomic design
- Middle columns (encoder/rocker) are handled by the board definition, not the keymap mapping 