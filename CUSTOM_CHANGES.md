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

## Eyelash Corne Support

Added support for the Eyelash Corne keyboard with encoder and directional rocker:

### Files Added

1. `miryoku/mapping/42/eyelash_corne.h`
   - Keyboard layout mapping for Eyelash Corne
   - Based on standard Corne layout with encoder/rocker support

2. `config/eyelash_corne.keymap`
   - Keymap configuration file for Eyelash Corne

3. `config/eyelash_corne.conf`
   - Configuration file with encoder, RGB, and mouse support

4. `.github/workflows/build-custom-eyelash_corne-nice_nano_v2-nice_view.yml`
   - Custom workflow for Eyelash Corne builds

5. `.github/workflows/outboards/boards/eyelash_corne`
   - Outboard configuration to pull board definition from a741725193/zmk-new_corne

### Eyelash Corne Features

- **Encoder support:** EC11 rotary encoder on left side for volume/scroll control
- **Directional rocker:** 5-way navigation switch on right side
- **RGB underglow:** WS2812 LED strip with auto-off features
- **Mouse support:** ZMK mouse functionality enabled
- **Power management:** 1-hour sleep timeout, external power control
- **Unified board:** Single board definition with integrated controllers (not split shields)
- **Display support:** Compatible with nice!view displays

**Important**: The Eyelash Corne uses a board definition (not shields), so it builds as a single unified firmware rather than separate left/right files.

## Building

The workflow runs automatically on push/PR, or can be triggered manually via GitHub Actions "workflow_dispatch".

### Available Build Configurations

- **Standard Corne:** `build-custom-corne-nice_nano_v2-nice_view.yml`
- **Eyelash Corne:** `build-custom-eyelash_corne-nice_nano_v2-nice_view.yml` 