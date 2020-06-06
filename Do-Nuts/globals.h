#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <Arduboy2.h>
#include "bitmaps.h"
#include "precalc.h"

Arduboy2Base arduboy;
Sprites sprites;

byte globalCounter = 0;

int backgroundFrame = 0;
byte rotatingFrame = 0;
bool moveItAround = true;

#endif
