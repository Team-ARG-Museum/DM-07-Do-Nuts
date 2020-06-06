#ifndef DONUTS_H
#define DONUTS_H

#include "globals.h"

#define TIME_TO_PASS            20 //in seconds (depeding on the frame speed set)


void timingAndCalculation()
{
  if (arduboy.justPressed(B_BUTTON))
  {
    globalCounter = 0;
    backgroundFrame++;
    if (backgroundFrame > 10)
    {
      backgroundFrame = 1;
      moveItAround = !moveItAround;
    }
  }
  if (arduboy.justPressed(A_BUTTON))
  {
    globalCounter = 0;
    backgroundFrame--;
    if (backgroundFrame < 1)
    {
      backgroundFrame = 10;
      moveItAround = !moveItAround;
    }
  }

  if (arduboy.everyXFrames(60)) globalCounter++;
  if (globalCounter > TIME_TO_PASS)
  {
    globalCounter = 0;
    backgroundFrame++;
    if (backgroundFrame > 10)
    {
      backgroundFrame = 1;
      moveItAround = !moveItAround;
    }
  }

  if (arduboy.everyXFrames(1))
  {
    offsetX = pgm_read_byte(&offsetArrayX[offsetIndex]) * moveItAround;
    offsetY = pgm_read_byte(&offsetArrayY[offsetIndex]) * moveItAround;
    offsetIndex++;
    if (offsetIndex > 627) offsetIndex = 0;
  }
}

void drawIntro()
{
  if (arduboy.everyXFrames(4)) globalCounter++;
  sprites.drawSelfMasked(34, 4, T_arg, 0);
}

void drawDonuts()
{
  if (arduboy.everyXFrames(6)) rotatingFrame++;
  for (byte y = 0; y < 8; y++)
  {
    for (byte x = 0; x < 16; x++)
    {
      sprites.drawSelfMasked((x * 22) - 10 - offsetX, (y * 21) - 8 - offsetY, donut_bitmap, (rotatingFrame + x + (8 * y)) % 6);
    }
  }
}

void drawDonuts2()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte y = 0; y < 8; y++)
  {
    for (byte x = 0; x < 16; x++)
    {
      sprites.drawSelfMasked((x * 22) - 10 - offsetX, (y * 21) - 8 - offsetY, donut_bitmap, (pgm_read_byte(&frameArray1[frameIndex]) + rotatingFrame) % 6);
      frameIndex++;
    }
  }
}

void drawGradient1()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte x = 0; x < 32; x++)
  {
    for (byte y = 0; y < 16; y++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8) - offsetY, gradient_bitmap, (pgm_read_byte(&frameArray2[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}

void drawGradient2()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte y = 0; y < 16; y++)
  {
    for (byte x = 0; x < 32; x++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8) - offsetY, gradient_bitmap, (pgm_read_byte(&frameArray3[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}

void drawGradient3()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte x = 0; x < 32; x++)
  {
    for (byte y = 0; y < 16; y++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8) - offsetY, gradient_bitmap, (pgm_read_byte(&frameArray4[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}


void drawLineBounce()
{
  byte c = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte y = 0; y < 16; y++)
  {
    for (byte x = 0; x < 32; x++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8)- offsetY, lineBounce_bitmap, (rotatingFrame + c) % 22);
    }
    c++;
  }
}

void drawLineBounce2()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte y = 0; y < 16; y++)
  {
    for (byte x = 0; x < 32; x++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8) - offsetY, lineBounce_bitmap, (pgm_read_byte(&frameArray2[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}

void drawLineBounce3()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte x = 0; x < 32; x++)
  {
    for (byte y = 0; y < 16; y++)
    {
      sprites.drawSelfMasked((x * 8) - offsetX, (y * 8) - offsetY, lineBounce_bitmap, (pgm_read_byte(&frameArray4[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}

void drawBounceBall()
{
  byte c = 0;
  byte d = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte y = 0; y < 8; y++)
  {
    for (byte x = 0; x < 16; x++)
    {

      sprites.drawSelfMasked((x * 16) - offsetX, (y * 16) - offsetY, bounceBall_bitmap, (rotatingFrame + d + c) % 22);
      d++;
    }
    d = 0;
    c++;
  }

}

void drawBounceBall2()
{
  frameIndex = 0;
  if (arduboy.everyXFrames(4)) rotatingFrame++;
  for (byte x = 0; x < 16; x++)
  {
    for (byte y = 0; y < 8; y++)
    {
      sprites.drawSelfMasked((x * 16) - offsetX, (y * 16) - offsetY, bounceBall_bitmap, (pgm_read_byte(&frameArray5[frameIndex]) + rotatingFrame) % 22);
      frameIndex++;
    }
  }
}

#endif
