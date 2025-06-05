#!/bin/bash

# Test script for Eyelash Corne configuration
# Validates configuration files for syntax and completeness

set -e

echo "Testing Eyelash Corne configuration..."

# Check if required files exist
echo "Checking required files..."

REQUIRED_FILES=(
    "config/eyelash_corne.keymap"
    "config/eyelash_corne.conf"
    "miryoku/mapping/42/eyelash_corne.h"
    ".github/workflows/build-custom-eyelash_corne-nice_nano_v2-nice_view.yml"
    ".github/workflows/outboards/boards/eyelash_corne"
)

for file in "${REQUIRED_FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "✓ $file exists"
    else
        echo "✗ $file missing"
        exit 1
    fi
done

# Check keymap syntax
echo ""
echo "Checking keymap syntax..."
if grep -q "#include.*custom_config.h" config/eyelash_corne.keymap; then
    echo "✓ custom_config.h included"
else
    echo "✗ custom_config.h not included"
    exit 1
fi

if grep -q "#include.*eyelash_corne.h" config/eyelash_corne.keymap; then
    echo "✓ eyelash_corne.h mapping included"
else
    echo "✗ eyelash_corne.h mapping not included"
    exit 1
fi

if grep -q "#include.*miryoku.dtsi" config/eyelash_corne.keymap; then
    echo "✓ miryoku.dtsi included"
else
    echo "✗ miryoku.dtsi not included"
    exit 1
fi

# Check mapping file syntax
echo ""
echo "Checking mapping file syntax..."
if grep -q "MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE" miryoku/mapping/42/eyelash_corne.h; then
    echo "✓ Layout mapping macro defined"
else
    echo "✗ Layout mapping macro not defined"
    exit 1
fi

# Check workflow configuration
echo ""
echo "Checking workflow configuration..."
if grep -q "eyelash_corne_left.*eyelash_corne_right" .github/workflows/build-custom-eyelash_corne-nice_nano_v2-nice_view.yml; then
    echo "✓ Workflow uses correct board names"
else
    echo "✗ Workflow board configuration incorrect"
    exit 1
fi

# Check outboard configuration
echo ""
echo "Checking outboard configuration..."
if grep -q "a741725193/zmk-new_corne" .github/workflows/outboards/boards/eyelash_corne; then
    echo "✓ Outboard repository configured"
else
    echo "✗ Outboard repository not configured"
    exit 1
fi

echo ""
echo "✅ All configuration tests passed!"
echo ""
echo "Next steps:"
echo "1. Push changes to GitHub to trigger automated build"
echo "2. Check GitHub Actions for build status"
echo "3. Download firmware files from successful build"
echo ""
echo "Manual build options:"
echo "- Run ./build_eyelash_corne_docker.sh (requires Docker)"
echo "- Use GitHub Actions workflow dispatch" 