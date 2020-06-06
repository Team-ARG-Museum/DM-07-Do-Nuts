/*
  DEMO: Do-Nuts

  TEAM a.r.g.: http://www.team-arg.com/demos.html

  2018 - JO3RI

  Demo License: MIT : https://opensource.org/licenses/MIT

*/


#include "globals.h"
#include "donuts.h"

typedef void (*FunctionPointer) ();

const FunctionPointer PROGMEM drawBackground[] =
{
  drawIntro,
  drawDonuts,
  drawDonuts2,
  drawGradient1,
  drawGradient2,
  drawGradient3,
  drawLineBounce,
  drawLineBounce2,
  drawLineBounce3,
  drawBounceBall,
  drawBounceBall2,
};


void setup()
{
  arduboy.boot();
  arduboy.audio.begin();
  arduboy.bootLogoSpritesSelfMasked();
  arduboy.setFrameRate(60);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  timingAndCalculation();  
  arduboy.clear();
  ((FunctionPointer) pgm_read_word (&drawBackground[backgroundFrame]))();
  //Serial.write(arduboy.getBuffer(), 128 * 64 / 8);
  arduboy.display();

}
