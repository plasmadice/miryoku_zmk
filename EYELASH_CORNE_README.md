# Eyelash Corne Miryoku Configuration

This repository now includes support for the **Eyelash Corne** keyboard, a unique variant of the Corne keyboard featuring:

- **Encoder on the left side** - EC11 rotary encoder for volume control, scrolling, etc.
- **Directional rocker on the right side** - 5-way navigation switch for cursor movement
- **RGB underglow** - WS2812 LED strip support
- **Per-key backlight** - Individual key illumination
- **Mouse support** - ZMK mouse functionality

## Hardware Requirements

- Eyelash Corne PCB (from 睫毛外设/Eyelash Peripherals)
- Built-in wireless controllers (no separate nice!nano needed)
- 2x nice!view displays (optional but recommended)
- EC11 rotary encoder
- 5-way directional switch/rocker
- Compatible switches and keycaps

**Note**: The Eyelash Corne is a complete board with integrated controllers, unlike standard Corne keyboards that require separate nice!nano controllers.

## Quick Start

### 1. Automatic Build (Recommended)

The easiest way to get firmware is through GitHub Actions:

1. Fork this repository
2. Go to **Actions** tab
3. Run the workflow: `Build Custom Eyelash Corne nice_nano_v2 nice_view QWERTY VI`
4. Download the generated firmware files

### 2. Manual Build

If you prefer to build locally:

```bash
# Clone the repository
git clone https://github.com/your-username/miryoku_zmk.git
cd miryoku_zmk

# Run the build script
./build_eyelash_corne.sh
```

The firmware file will be generated in:
- `build/zephyr/zmk.uf2` (unified firmware for both sides)

## Flashing Firmware

1. Put the Eyelash Corne into bootloader mode (double-tap reset button)
2. Copy the `zmk.uf2` file to the mounted drive
3. The keyboard will automatically reboot with new firmware

**Note**: Since the Eyelash Corne is a unified board, you only need to flash one firmware file, not separate left/right files.

## Layout

The Eyelash Corne uses the standard Miryoku layout with these additional features:

### Encoder Functions (Left Side)
- **Default layer:** Volume up/down
- **NAV layer:** Scroll up/down
- **NUM layer:** Increment/decrement values
- **Press:** Mute/unmute

### Rocker Functions (Right Side)
- **Up/Down:** Arrow keys or page up/down
- **Left/Right:** Arrow keys or word navigation
- **Press:** Enter or context menu

## Configuration

### RGB Underglow
- **Default:** Off on startup
- **Brightness:** 90% maximum
- **Auto-off:** Enabled when idle or on USB disconnect
- **Default effect:** Effect #3, Hue 160°

### Power Management
- **Sleep timeout:** 1 hour of inactivity
- **Bluetooth:** High power (+8dBm) for better range

### Features Enabled
- EC11 encoder support
- Mouse functionality
- RGB underglow (WS2812)
- Per-key backlight
- External power management

## Troubleshooting

### Build Issues
1. Ensure you have ZMK development environment set up
2. Check that the outboard repository is accessible
3. Verify all required modules are available

### Encoder Not Working
1. Check EC11 configuration in `.conf` file
2. Verify encoder is properly soldered
3. Ensure `CONFIG_EC11=y` is set

### RGB Not Working
1. Check WS2812 strip connections
2. Verify `CONFIG_WS2812_STRIP=y` is enabled
3. Check power supply to LED strip

## Board Definition Source

The Eyelash Corne board definition is automatically pulled from:
- **Repository:** [a741725193/zmk-new_corne](https://github.com/a741725193/zmk-new_corne)
- **Path:** `boards/arm/eyelash_corne`

## Contributing

If you find issues or want to improve the Eyelash Corne configuration:

1. Open an issue describing the problem
2. Submit a pull request with fixes
3. Test thoroughly before submitting

## Credits

- **Miryoku layout:** [Manna Harbour](https://github.com/manna-harbour/miryoku)
- **Eyelash Corne hardware:** 睫毛外设 (Eyelash Peripherals)
- **Board definition:** [a741725193](https://github.com/a741725193/zmk-new_corne)
- **ZMK firmware:** [ZMK Project](https://zmk.dev/)

## License

This configuration follows the same license as the original Miryoku project. 