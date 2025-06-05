#!/bin/bash

# Build script for Eyelash Corne with nice_nano_v2 and nice_view
# Based on build_local.sh

set -e

echo "Building Eyelash Corne configuration..."

# Set up build parameters
BOARD="nice_nano_v2"
SHIELD_LEFT="eyelash_corne_left nice_view_adapter nice_view"
SHIELD_RIGHT="eyelash_corne_right nice_view_adapter nice_view"
ALPHAS="qwerty"
NAV="vi"

echo "Board: $BOARD"
echo "Shield Left: $SHIELD_LEFT"
echo "Shield Right: $SHIELD_RIGHT"
echo "Alphas: $ALPHAS"
echo "Nav: $NAV"

# Create build directory
mkdir -p build

# Build left side
echo "Building left side..."
west build -d build/left -b $BOARD -- -DSHIELD="$SHIELD_LEFT" -DZMK_CONFIG="$(pwd)/config"

# Build right side
echo "Building right side..."
west build -d build/right -b $BOARD -- -DSHIELD="$SHIELD_RIGHT" -DZMK_CONFIG="$(pwd)/config"

echo "Build complete!"
echo "Left side firmware: build/left/zephyr/zmk.uf2"
echo "Right side firmware: build/right/zephyr/zmk.uf2" 