#!/bin/bash

# Local build script for custom Miryoku ZMK configuration
# Make sure you have ZMK development environment set up first

echo "Building custom Miryoku ZMK configuration..."
echo "Board: nice_nano_v2"
echo "Shield: corne_left nice_view_adapter nice_view, corne_right nice_view_adapter nice_view"
echo "Alphas: qwerty"
echo "Nav: vi"
echo

# Set environment variables for the build
export MIRYOKU_ALPHAS=qwerty
export MIRYOKU_NAV=vi

# Build left side
echo "Building left side..."
west build -s zmk/app -d build/corne_left -- -DSHIELD="corne_left nice_view_adapter nice_view" -DBOARD=nice_nano_v2

# Build right side  
echo "Building right side..."
west build -s zmk/app -d build/corne_right -- -DSHIELD="corne_right nice_view_adapter nice_view" -DBOARD=nice_nano_v2

echo "Build complete!"
echo "Firmware files will be in:"
echo "- build/corne_left/zephyr/zmk.uf2"
echo "- build/corne_right/zephyr/zmk.uf2" 