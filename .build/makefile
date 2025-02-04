# Project configuration
PROJ_NAME    := isometric-tiling-example

BIN          := bin
EXECUTABLE   := main.exe

SRC          := $(wildcard ../$(PROJ_NAME)/src/*.cc)
INCLUDE      := ../$(PROJ_NAME)/include
RAYLIB_STATIC:= ../$(PROJ_NAME)/extern/lib
RAYLIB_HEAD  := ../$(PROJ_NAME)/extern

# Compiler settings
CXX          := g++
CXXFLAGS     := -Wall -std=c++17 -I$(INCLUDE) -I$(RAYLIB_HEAD)/include

# Linker settings
LDFLAGS      := -L$(RAYLIB_STATIC) -lraylib -lopengl32 -lgdi32 -lwinmm

all: $(BIN)/$(EXECUTABLE) copy_data

$(BIN)/$(EXECUTABLE): $(SRC)
	@if exist "$(BIN)" rmdir /s /q "$(BIN)"
	@if not exist "$(BIN)" mkdir "$(BIN)"
	$(CXX) $(CXXFLAGS) -o "$@" $^ $(LDFLAGS)

copy_data:
	@if exist "data" rmdir /s /q "data"
	xcopy /E /I /Y "..\$(PROJ_NAME)\data\*" "data"

clean:
	@if exist "$(BIN)" rmdir /s /q "$(BIN)"
	@if exist "data" rmdir /s /q "data"

debug: clean all
	pushd $(BIN) && $(EXECUTABLE) && popd

run:
	pushd $(BIN) && $(EXECUTABLE) && popd

# ----------------
# Raylib Download
# ----------------
RAYLIB_VERSION := raylib-5.5_win64_mingw-w64

download_raylib:
	@if not exist "..\$(PROJ_NAME)\extern" mkdir "..\$(PROJ_NAME)\extern"
	@echo Downloading raylib...
	@curl -L -o raylib.zip https://github.com/raysan5/raylib/releases/latest/download/$(RAYLIB_VERSION).zip
	@if exist raylib_temp rmdir /s /q raylib_temp
	@echo Extracting raylib...
	@mkdir raylib_temp
	@tar -xf raylib.zip -C raylib_temp
	@echo Moving include files...
	@move /Y "raylib_temp\$(RAYLIB_VERSION)\include\*" "..\$(PROJ_NAME)\extern"
	@if exist "..\$(PROJ_NAME)\extern\lib" rmdir /s /q "..\$(PROJ_NAME)\extern\lib"
	@echo Moving lib files...
	@move /Y "raylib_temp\$(RAYLIB_VERSION)\lib" "..\$(PROJ_NAME)\extern\lib"
	@echo Cleaning up temporary files...
	@rmdir /s /q raylib_temp
	@del raylib.zip

.PHONY: all clean debug run copy_data download_raylib
