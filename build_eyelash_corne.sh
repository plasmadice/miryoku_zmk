#!/bin/bash

# Build script for Eyelash Corne with nice_nano_v2 and nice_view
# Based on build_local.sh

set -e

echo "Building Eyelash Corne configuration..."

# Set up build parameters
BOARD_LEFT="eyelash_corne_left"
BOARD_RIGHT="eyelash_corne_right"
SHIELD="nice_view"
ALPHAS="qwerty"
NAV="vi"

echo "Board Left: $BOARD_LEFT"
echo "Board Right: $BOARD_RIGHT"
echo "Shield: $SHIELD"
echo "Alphas: $ALPHAS"
echo "Nav: $NAV"

# Create build directory
mkdir -p build

# Build left side
echo "Building left side..."
west build -d build/left -b $BOARD_LEFT -- -DSHIELD="$SHIELD" -DZMK_CONFIG="$(pwd)/config"

# Build right side
echo "Building right side..."
west build -d build/right -b $BOARD_RIGHT -- -DSHIELD="$SHIELD" -DZMK_CONFIG="$(pwd)/config"

echo "Build complete!"
echo "Left side firmware: build/left/zephyr/zmk.uf2"
echo "Right side firmware: build/right/zephyr/zmk.uf2" 