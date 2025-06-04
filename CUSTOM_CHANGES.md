# Custom Miryoku ZMK Changes

This fork contains minimal modifications to the default Miryoku ZMK configuration to customize the right thumb cluster for QWERTY layout.

## Changes Made

### Right Thumb Cluster Modification

**Original Layout:**
- Return (SYM layer)
- Backspace (NUM layer) 
- Del (FUN layer)

**Modified Layout:**
- Return (SYM layer) - unchanged
- Space (NUM layer) - replaces Backspace, keeps NUM layer access
- Backspace (FUN layer) - replaces Del, gets FUN layer access

### Left Thumb Cluster
No changes - remains as:
- ESC (MEDIA layer)
- Space (NAV layer)
- TAB (MOUSE layer)

## Build Configuration

The included GitHub workflow builds with these settings:
- **Board:** nice_nano_v2
- **Shield:** corne_left nice_view_adapter nice_view, corne_right nice_view_adapter nice_view
- **Alphas:** qwerty
- **Nav:** vi

## Files Modified

1. `miryoku/miryoku_babel/miryoku_layer_alternatives.h`
   - Modified `MIRYOKU_ALTERNATIVES_BASE_QWERTY` definition
   - Modified `MIRYOKU_ALTERNATIVES_TAP_QWERTY` definition

2. `.github/workflows/build-custom-corne-nice_nano_v2-nice_view.yml`
   - Custom workflow for automatic builds

## Layer Access Preserved

The layer functionality is preserved with the new thumb assignments:
- **NUM layer:** Still accessible via thumb (now Space instead of Backspace)
- **FUN layer:** Still accessible via thumb (now Backspace instead of Del)
- **SYM layer:** Unchanged (Return)

## Building

The workflow runs automatically on push/PR, or can be triggered manually via GitHub Actions "workflow_dispatch". 