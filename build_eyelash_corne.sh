#!/bin/bash

# Build script for Eyelash Corne with nice_nano_v2 and nice_view
# Based on build_local.sh

set -e

echo "Building Eyelash Corne configuration..."

# Set up build parameters
BOARD="eyelash_corne"
SHIELD="nice_view_adapter nice_view"
ALPHAS="qwerty"
NAV="vi"

echo "Board: $BOARD"
echo "Shield: $SHIELD"
echo "Alphas: $ALPHAS"
echo "Nav: $NAV"

# Create build directory
mkdir -p build

# Build firmware
echo "Building firmware..."
west build -d build -b $BOARD -- -DSHIELD="$SHIELD" -DZMK_CONFIG="$(pwd)/config"

echo "Build complete!"
echo "Left side firmware: build/left/zephyr/zmk.uf2"
echo "Right side firmware: build/right/zephyr/zmk.uf2" 