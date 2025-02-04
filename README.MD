# Isometric Tiling Example
The main purpose of this project is to become more familiar with C++ and the Raylib library while also learning how to work with isometric perspective grid of sprites.

## Features
- [x] Render an isometric perspective grid of tiles to the screen
- [ ] Give user feedback when hovering on a tile
- [ ] Zoom in and out of the map
- [ ] Pan the map location within the window
- [ ] UI for debug and configuration options
- [ ] Import config from file
- [ ] Render custom map layouts
- [ ] Sound cue when hovering on a tile

## Building

I currently only have a simple build process for Windows, but I will be adding MacOS and Linux in the future.

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
make debug
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