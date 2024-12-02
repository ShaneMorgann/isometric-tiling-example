CXX := clang++
CXX_FLAGS := -Wall -g -std=c++23 -ggdb -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SRC_ROOT := ../$(shell basename $(realpath ../))

BIN := bin
SRC := $(shell find $(SRC_ROOT)/src -name "*.cc")
INCLUDE := $(shell find $(SRC_ROOT)/include -name "*.hh")

RAYLIB := ../.raylib

# Name of executable
EXECUTABLE := main

# Raylib version and download URL
RAYLIB_VERSION := 5.5
RAYLIB_PLATFORM := linux_amd64.tar.gz
RAYLIB_URL := https://github.com/raysan5/raylib/releases/download/$(RAYLIB_VERSION)/raylib-$(RAYLIB_VERSION)_$(RAYLIB_PLATFORM)

.PHONY: build run clean download_raylib

build: clean $(RAYLIB) $(BIN)/$(EXECUTABLE)

run: build
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)
	$(CXX) $(CXX_FLAGS) -I$(SRC_ROOT)/include -I$(RAYLIB)/include $^ -o $@

$(RAYLIB):
	@echo "Downloading raylib..."
	@mkdir -p $(RAYLIB)
	@mkdir -p rayDL
	@curl -L $(RAYLIB_URL) | tar -xz -C rayDL --strip-components=1
	@mv ./rayDL/include/* $(RAYLIB)
	@rm -rf ./rayDL/

clean:
	-rm -rf $(BIN)/*

