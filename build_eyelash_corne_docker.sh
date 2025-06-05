#!/bin/bash

# Docker-based build script for Eyelash Corne
# This uses the official ZMK Docker image to build the firmware

set -e

echo "Building Eyelash Corne using Docker..."

# Configuration
BOARD_LEFT="eyelash_corne_left"
BOARD_RIGHT="eyelash_corne_right"
SHIELD="nice_view"
CONFIG_DIR="$(pwd)/config"
OUTPUT_DIR="$(pwd)/build"

echo "Board Left: $BOARD_LEFT"
echo "Board Right: $BOARD_RIGHT"
echo "Shield: $SHIELD"
echo "Config Directory: $CONFIG_DIR"
echo "Output Directory: $OUTPUT_DIR"

# Create output directory
mkdir -p "$OUTPUT_DIR"

# Build left side
echo "Building left side..."
docker run --rm -it \
  -v "$CONFIG_DIR":/app/config:ro \
  -v "$OUTPUT_DIR":/app/build \
  -e BOARD="$BOARD_LEFT" \
  -e SHIELD="$SHIELD" \
  -e ZMK_CONFIG="/app/config" \
  zmkfirmware/zmk-build-arm:stable

# Rename the output file
if [ -f "$OUTPUT_DIR/zephyr/zmk.uf2" ]; then
    mv "$OUTPUT_DIR/zephyr/zmk.uf2" "$OUTPUT_DIR/eyelash_corne_left.uf2"
    echo "Left side firmware: $OUTPUT_DIR/eyelash_corne_left.uf2"
fi

# Build right side
echo "Building right side..."
docker run --rm -it \
  -v "$CONFIG_DIR":/app/config:ro \
  -v "$OUTPUT_DIR":/app/build \
  -e BOARD="$BOARD_RIGHT" \
  -e SHIELD="$SHIELD" \
  -e ZMK_CONFIG="/app/config" \
  zmkfirmware/zmk-build-arm:stable

# Rename the output file
if [ -f "$OUTPUT_DIR/zephyr/zmk.uf2" ]; then
    mv "$OUTPUT_DIR/zephyr/zmk.uf2" "$OUTPUT_DIR/eyelash_corne_right.uf2"
    echo "Right side firmware: $OUTPUT_DIR/eyelash_corne_right.uf2"
fi

echo "Build complete!"
echo "Firmware files:"
echo "  Left side:  $OUTPUT_DIR/eyelash_corne_left.uf2"
echo "  Right side: $OUTPUT_DIR/eyelash_corne_right.uf2" 