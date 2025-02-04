# Isometric Tiling Example
The purpose of this project is to allow me to become more familiar with C++ and the Raylib library while also learning how to work with isometric perspective grid of sprites. This project will ultimately serve as a gallery of features when using tiling sprites in an isometric perspective.

The code is currently heavily broken up using namespaces. While I understand that this is not necessarily a good coding convention, it makes it easier for me to recognize individual concepts while rapily testing different solutions. It will also influnence the final structure of the project when refactored.

## Features
- [x] Render an isometric perspective grid of tiles to the screen
- [ ] Give user feedback when hovering on a tile
- [ ] Zoom in and out of the map
- [ ] Pan the map within the window
- [ ] Import config from file
- [ ] UI for debug and configuration options
- [ ] Render custom map layouts
- [ ] Sound cue when hovering on a tile

## Building

Currently, there is only a build process for Windows, but I will be adding MacOS and Linux in the future.

### Windows :
**Required:**
- Make
- g++

**Steps:**
1. Clone or download the zip of this repository
```
git clone https://github.com/ShaneMorgann/isometric-tiling-example.git
```

2. Use command prompt to open the `.build` directory
````
cd .build
````

3. Download Raylib
````
make download_raylib
````

4. Build and Run
````
# Build
 make

# Run
 make run

# Build then Run
make debug

# Delete executable
make clean
````

## Usage
Edit `isometric-tiling-example/include/constants.hh` to change the configuration.

The sprite being rendered can be changed by editing the value of `spritesheet.spritesheetTileCoords`

**To use a custom spritesheet:**
1. Copy the file to: `isometric-tiling-example/data/sprites/`
2. Change the value of `spritesheet.spritesheetPath` to reflect the name of the spritesheet file
3. Change both `sprite.size` and `spritesheet.spriteSize` to the size of the sprites on the spritesheet

**Must remain unchanged:**
- window.midPoint
- map.originOffset
- sprite.sizeScale
- sprite.sizeHalfScale
- sprite.sizeQuarterScale