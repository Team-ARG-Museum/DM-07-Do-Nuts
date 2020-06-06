#ifndef PRECALC_H
#define PRECALC_H

int offsetIndex = 0;
int frameIndex = 0;
byte offsetX;
byte offsetY;

const unsigned char PROGMEM  offsetArrayX[] =
{
  // array created with this formula
  // float a = 0.0;
  //
  // xC = (32 + (32 * sin(2 * a)));
  // Serial.print(xC);
  // Serial.print(", ");
  // a += 0.01;
  32, 32, 33, 33, 34, 35, 35, 36, 37, 37, 38, 38, 39, 40, 40, 41, 42, 42, 43, 43, 44, 45, 45, 46, 46, 47, 47, 48, 48, 49, 50, 50, 51, 51, 52, 52,
  53, 53, 54, 54, 54, 55, 55, 56, 56, 57, 57, 57, 58, 58, 58, 59, 59, 59, 60, 60, 60, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62, 63, 63, 63, 63, 63,
  63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 61, 61, 61, 61, 60, 60, 60, 59, 59, 59, 58,
  58, 58, 57, 57, 57, 56, 56, 55, 55, 54, 54, 54, 53, 53, 52, 52, 51, 51, 50, 50, 49, 49, 48, 47, 47, 46, 46, 45, 45, 44, 43, 43, 42, 42, 41, 40,
  40, 39, 39, 38, 37, 37, 36, 35, 35, 34, 33, 33, 32, 32, 31, 30, 30, 29, 28, 28, 27, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20, 20, 19, 18, 18,
  17, 17, 16, 16, 15, 15, 14, 13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1,
  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7,
  7, 8, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 16, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22, 23, 23, 24, 24, 25, 26, 26, 27, 28,
  28, 29, 29, 30, 31, 31, 32, 33, 33, 34, 35, 35, 36, 36, 37, 38, 38, 39, 40, 40, 41, 41, 42, 43, 43, 44, 44, 45, 46, 46, 47, 47, 48, 48, 49, 49,
  50, 51, 51, 52, 52, 53, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57, 57, 58, 58, 58, 59, 59, 59, 60, 60, 60, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62,
  63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 61, 61, 61, 61, 60, 60,
  60, 59, 59, 59, 59, 58, 58, 57, 57, 57, 56, 56, 55, 55, 55, 54, 54, 53, 53, 52, 52, 51, 51, 50, 50, 49, 49, 48, 48, 47, 46, 46, 45, 45, 44, 44,
  43, 42, 42, 41, 40, 40, 39, 39, 38, 37, 37, 36, 35, 35, 34, 34, 33, 32, 32, 31, 30, 30, 29, 28, 28, 27, 27, 26, 25, 25, 24, 23, 23, 22, 22, 21,
  20, 20, 19, 19, 18, 17, 17, 16, 16, 15, 15, 14, 14, 13, 13, 12, 11, 11, 11, 10, 10, 9, 9, 8, 8, 7, 7, 7, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2,
  2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4,
  4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 17, 17, 18, 18, 19, 19, 20, 21, 21, 22, 22, 23, 24,
  24, 25, 26, 26, 27, 27, 28, 29, 29, 30, 31,
};

const unsigned char PROGMEM  offsetArrayY[] =
{
  // array created with this formula
  // float a = 0.0;
  //
  // yC = (32 + (32 * sin(-a)));
  // Serial.print(yC);
  // Serial.print(", ");
  // a += 0.01;
  32, 31, 31, 31, 30, 30, 30, 29, 29, 29, 28, 28, 28, 27, 27, 27, 26, 26, 26, 25, 25, 25, 25, 24, 24, 24, 23, 23, 23, 22, 22, 22, 21, 21, 21, 21, 20,
  20, 20, 19, 19, 19, 18, 18, 18, 18, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 12, 12, 12, 12, 11, 11, 11, 11, 10, 10,
  10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5,
  6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15,
  16, 16, 16, 16, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 22, 22, 22, 23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 26, 26, 26,
  27, 27, 27, 28, 28, 28, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 32, 32, 32, 33, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 36, 37, 37, 37, 37, 38, 38,
  38, 39, 39, 39, 40, 40, 40, 41, 41, 41, 42, 42, 42, 42, 43, 43, 43, 44, 44, 44, 45, 45, 45, 45, 46, 46, 46, 47, 47, 47, 47, 48, 48, 48, 48, 49, 49,
  49, 50, 50, 50, 50, 51, 51, 51, 51, 52, 52, 52, 52, 53, 53, 53, 53, 54, 54, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 56, 57, 57, 57, 57, 57, 57,
  58, 58, 58, 58, 58, 59, 59, 59, 59, 59, 59, 60, 60, 60, 60, 60, 60, 60, 61, 61, 61, 61, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
  63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
  63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 61, 61, 61, 61, 61, 61, 61, 61, 60, 60, 60, 60, 60, 60,
  60, 59, 59, 59, 59, 59, 59, 58, 58, 58, 58, 58, 58, 57, 57, 57, 57, 57, 56, 56, 56, 56, 56, 55, 55, 55, 55, 55, 54, 54, 54, 54, 53, 53, 53, 53, 52,
  52, 52, 52, 51, 51, 51, 51, 50, 50, 50, 50, 49, 49, 49, 49, 48, 48, 48, 47, 47, 47, 47, 46, 46, 46, 46, 45, 45, 45, 44, 44, 44, 43, 43, 43, 43, 42,
  42, 42, 41, 41, 41, 40, 40, 40, 40, 39, 39, 39, 38, 38, 38, 37, 37, 37, 36, 36, 36, 35, 35, 35, 34, 34, 34, 34, 33, 33, 33, 32, 32,
};

const unsigned char PROGMEM frameArray1[] =
{
  // array created with this formula
  // float b = 0.0;
  //
  // for (byte y = 0; y < 8; y++)
  // {
  //   for (byte x = 0; x < 16; x++)
  //   {
  //     byte calcB = (10 * sin (b));
  //     Serial.print(calcB %6);
  //     Serial.print(", ");
  //     b += 0.166;
  //   }
  //   b += 0.166;
  //   Serial.println();
  // }
  0, 1, 3, 4, 0, 1, 2, 3, 3, 3, 3, 3, 3, 2, 1, 0,
  3, 1, 0, 3, 1, 0, 4, 3, 2, 1, 1, 1, 1, 1, 1, 2,
  5, 0, 1, 3, 0, 1, 3, 4, 0, 1, 2, 3, 3, 3, 3, 3,
  2, 1, 5, 4, 2, 1, 0, 2, 1, 5, 4, 3, 2, 1, 1, 1,
  1, 2, 2, 3, 5, 0, 2, 3, 0, 2, 3, 5, 0, 1, 2, 3,
  3, 3, 3, 2, 2, 0, 5, 4, 2, 1, 0, 2, 1, 5, 4, 3,
  1, 1, 1, 1, 1, 2, 3, 4, 5, 0, 2, 0, 0, 2, 3, 5,
  1, 2, 3, 3, 3, 3, 3, 2, 1, 0, 5, 3, 2, 0, 0, 2,
};

const unsigned char PROGMEM frameArray2[] =
{
  /*
    array created with this formula
    float c = 0.0;
    float d = 0.0;
    for (byte y = 0; y < 16; y++)
    {
      for (byte x = 0; x < 32; x++)
      {
        byte calcB = 8* (sin(d) + sin(-c) );
        Serial.print(calcB % 22);
        Serial.print(", ");
        d += 0.2;
      }
    c += 0.1;
    Serial.println();
    }
  */
  0, 1, 3, 4, 5, 6, 7, 7, 7, 7, 7, 6, 5, 4, 2, 1, 0, 12, 11, 10, 8, 8, 7, 7, 7, 7, 7, 8, 9, 11, 12, 0,
  0, 1, 3, 4, 5, 6, 6, 7, 7, 6, 6, 5, 3, 2, 0, 0, 12, 11, 9, 8, 7, 6, 6, 6, 6, 6, 7, 8, 9, 11, 12, 0,
  0, 1, 3, 4, 5, 5, 6, 6, 6, 5, 4, 3, 2, 0, 0, 12, 11, 9, 8, 7, 6, 5, 5, 5, 5, 6, 7, 8, 9, 11, 13, 0,
  0, 1, 3, 4, 4, 5, 5, 5, 5, 4, 3, 2, 0, 0, 12, 10, 9, 8, 6, 5, 5, 4, 4, 4, 5, 6, 7, 8, 10, 11, 13, 0,
  0, 1, 2, 3, 4, 4, 4, 4, 3, 3, 1, 0, 0, 12, 10, 9, 7, 6, 5, 4, 4, 3, 3, 4, 5, 6, 7, 8, 10, 11, 13, 0,
  0, 1, 2, 3, 4, 4, 3, 3, 2, 1, 0, 13, 12, 10, 9, 7, 6, 5, 4, 3, 3, 3, 3, 4, 4, 6, 7, 8, 10, 11, 13, 0,
  0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 13, 12, 10, 9, 7, 6, 4, 3, 3, 2, 2, 2, 3, 3, 4, 6, 7, 9, 10, 12, 13, 0,
  0, 1, 2, 2, 2, 2, 2, 1, 0, 13, 12, 10, 9, 7, 6, 4, 3, 2, 2, 1, 1, 2, 2, 3, 4, 6, 7, 9, 10, 12, 13, 0,
  0, 1, 2, 2, 2, 1, 1, 0, 13, 12, 10, 9, 7, 6, 4, 3, 2, 1, 1, 1, 1, 1, 2, 3, 5, 6, 8, 9, 11, 12, 0, 0,
  0, 1, 1, 1, 1, 0, 0, 13, 12, 11, 9, 7, 6, 4, 3, 2, 1, 1, 0, 0, 1, 1, 2, 4, 5, 6, 8, 10, 11, 13, 0, 0,
  0, 1, 1, 1, 0, 0, 13, 12, 11, 9, 8, 6, 4, 3, 2, 1, 0, 0, 0, 0, 1, 1, 3, 4, 5, 7, 8, 10, 11, 13, 0, 0,
  0, 0, 0, 0, 0, 13, 12, 11, 9, 8, 6, 5, 3, 2, 1, 0, 0, 21, 21, 0, 1, 2, 3, 4, 6, 7, 9, 10, 12, 13, 0, 0,
  0, 0, 0, 0, 0, 12, 11, 10, 8, 7, 5, 3, 2, 1, 0, 21, 21, 21, 21, 0, 1, 2, 3, 5, 6, 8, 10, 11, 12, 13, 0, 0,
  0, 0, 0, 0, 13, 11, 10, 9, 7, 5, 4, 2, 1, 0, 21, 21, 21, 21, 21, 0, 1, 3, 4, 5, 7, 9, 10, 12, 13, 0, 0, 0,
  0, 0, 0, 13, 12, 10, 9, 7, 6, 4, 3, 2, 0, 0, 21, 21, 21, 21, 0, 1, 2, 3, 5, 6, 8, 9, 11, 12, 13, 0, 0, 0,
  0, 0, 13, 12, 11, 10, 8, 6, 5, 3, 2, 1, 0, 21, 21, 21, 21, 21, 0, 1, 2, 4, 5, 7, 9, 10, 11, 13, 0, 0, 0, 0,
};

const unsigned char PROGMEM frameArray3[] =
{
  /*
    // array created with this formula
    float b = 0.0;
    float c = 0.0;
    for (byte x = 0; x < 32; x++)
    {
      for (byte y = 0; y < 16; y++)
      {
        byte calcB = cos (c) + (10 * sin (b));
        byte z = calcB % 22;
        Serial.print(z);
        Serial.print(", ");
        b += 0.2;
      }
      b = 0;
      c++;
      Serial.println();
    }
  */
  1, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 9, 7, 6, 4, 2,
  0, 2, 4, 6, 7, 8, 9, 10, 10, 10, 9, 8, 7, 5, 3, 1,
  0, 1, 3, 5, 6, 7, 8, 9, 9, 9, 8, 7, 6, 4, 2, 0,
  0, 0, 2, 4, 6, 7, 8, 8, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 4, 6, 7, 8, 9, 9, 9, 8, 7, 6, 4, 2, 0,
  0, 2, 4, 5, 7, 8, 9, 10, 10, 10, 9, 8, 7, 5, 3, 1,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 9, 7, 6, 4, 2,
  0, 2, 4, 6, 7, 9, 10, 10, 10, 10, 9, 8, 7, 5, 4, 2,
  0, 1, 3, 5, 7, 8, 9, 9, 9, 9, 8, 7, 6, 5, 3, 1,
  0, 1, 2, 4, 6, 7, 8, 8, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 4, 6, 7, 8, 9, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 5, 7, 8, 9, 9, 10, 9, 9, 8, 6, 5, 3, 1,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 9, 8, 7, 5, 4, 2,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 8, 7, 6, 4, 2,
  0, 2, 4, 5, 7, 8, 9, 9, 10, 9, 9, 8, 6, 5, 3, 1,
  0, 1, 3, 4, 6, 7, 8, 9, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 2, 4, 6, 7, 8, 8, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 5, 6, 8, 9, 9, 9, 9, 8, 7, 6, 4, 3, 1,
  0, 2, 4, 6, 7, 9, 9, 10, 10, 10, 9, 8, 7, 5, 4, 2,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 9, 7, 6, 4, 2,
  0, 2, 4, 6, 7, 8, 9, 10, 10, 10, 9, 8, 7, 5, 3, 1,
  0, 1, 3, 5, 6, 7, 8, 9, 9, 9, 8, 7, 6, 4, 2, 0,
  0, 0, 2, 4, 6, 7, 8, 8, 8, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 5, 6, 7, 8, 9, 9, 9, 8, 7, 6, 4, 2, 0,
  0, 2, 4, 6, 7, 8, 9, 10, 10, 10, 9, 8, 7, 5, 3, 1,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 9, 7, 6, 4, 2,
  0, 2, 4, 6, 7, 9, 9, 10, 10, 10, 9, 8, 7, 5, 3, 2,
  0, 1, 3, 5, 6, 8, 9, 9, 9, 9, 8, 7, 6, 4, 3, 1,
  0, 1, 2, 4, 6, 7, 8, 8, 9, 8, 8, 7, 5, 4, 2, 0,
  0, 1, 3, 4, 6, 7, 8, 9, 9, 8, 8, 7, 6, 4, 2, 0,
  0, 2, 4, 5, 7, 8, 9, 10, 10, 9, 9, 8, 6, 5, 3, 1,
  0, 2, 4, 6, 8, 9, 10, 10, 10, 10, 10, 8, 7, 6, 4, 2,
};

const unsigned char PROGMEM frameArray4[] =
{
  /*
    // array created with this formula
    float b = 0.0;
    float e = 0.0;
    for (byte x = 0; x < 32; x++)
    {
      for (byte y = 0; y < 16; y++)
      {
        byte calcB = e + (10 * sin (b));
        byte f = calcB;
        Serial.print(f);
        Serial.print(", ");
        b += 0.15;
        if (b > 3) b = 0;
      }
      Serial.println();
      b = 0;
      e += 0.3;
    }
  */
  0, 1, 2, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 8, 7,
  0, 1, 3, 4, 5, 7, 8, 8, 9, 10, 10, 10, 10, 9, 8, 8,
  0, 2, 3, 4, 6, 7, 8, 9, 9, 10, 10, 10, 10, 9, 9, 8,
  0, 2, 3, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 9, 8,
  1, 2, 4, 5, 6, 8, 9, 9, 10, 10, 11, 11, 10, 10, 9, 8,
  1, 2, 4, 5, 7, 8, 9, 10, 10, 11, 11, 11, 11, 10, 10, 9,
  1, 3, 4, 6, 7, 8, 9, 10, 11, 11, 11, 11, 11, 11, 10, 9,
  2, 3, 5, 6, 7, 8, 9, 10, 11, 11, 12, 12, 11, 11, 10, 9,
  2, 3, 5, 6, 8, 9, 10, 11, 11, 12, 12, 12, 12, 11, 11, 10,
  2, 4, 5, 7, 8, 9, 10, 11, 12, 12, 12, 12, 12, 11, 11, 10,
  2, 4, 5, 7, 8, 9, 10, 11, 12, 12, 12, 12, 12, 12, 11, 10,
  3, 4, 6, 7, 8, 10, 11, 11, 12, 13, 13, 13, 13, 12, 11, 11,
  3, 5, 6, 7, 9, 10, 11, 12, 12, 13, 13, 13, 13, 12, 12, 11,
  3, 5, 6, 8, 9, 10, 11, 12, 13, 13, 13, 13, 13, 13, 12, 11,
  4, 5, 7, 8, 9, 11, 12, 12, 13, 13, 14, 14, 13, 13, 12, 11,
  4, 5, 7, 8, 10, 11, 12, 13, 13, 14, 14, 14, 14, 13, 13, 12,
  4, 6, 7, 9, 10, 11, 12, 13, 14, 14, 14, 14, 14, 14, 13, 12,
  5, 6, 8, 9, 10, 11, 12, 13, 14, 14, 15, 15, 14, 14, 13, 12,
  5, 6, 8, 9, 11, 12, 13, 14, 14, 15, 15, 15, 15, 14, 14, 13,
  5, 7, 8, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 14, 14, 13,
  6, 7, 8, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 14, 13,
  6, 7, 9, 10, 11, 13, 14, 14, 15, 16, 16, 16, 16, 15, 14, 14,
  6, 8, 9, 10, 12, 13, 14, 15, 15, 16, 16, 16, 16, 15, 15, 14,
  6, 8, 9, 11, 12, 13, 14, 15, 16, 16, 16, 16, 16, 16, 15, 14,
  7, 8, 10, 11, 12, 14, 15, 15, 16, 16, 17, 17, 16, 16, 15, 14,
  7, 8, 10, 11, 13, 14, 15, 16, 16, 17, 17, 17, 17, 16, 16, 15,
  7, 9, 10, 12, 13, 14, 15, 16, 17, 17, 17, 17, 17, 17, 16, 15,
  8, 9, 11, 12, 13, 14, 15, 16, 17, 17, 18, 18, 17, 17, 16, 15,
  8, 9, 11, 12, 14, 15, 16, 17, 17, 18, 18, 18, 18, 17, 17, 16,
  8, 10, 11, 13, 14, 15, 16, 17, 18, 18, 18, 18, 18, 17, 17, 16,
  9, 10, 11, 13, 14, 15, 16, 17, 18, 18, 18, 18, 18, 18, 17, 16,
  9, 10, 12, 13, 14, 16, 17, 17, 18, 19, 19, 19, 19, 18, 17, 17,
};

const unsigned char PROGMEM frameArray5[] =
{
  /*
    // array created with this formula
    float b = 0.0;
    for (byte x = 0; x < 32; x++)
    {
      for (byte y = 0; y < 16; y++)
      {
        byte calcB = (10 * sin (b));
        Serial.print(calcB % 22);
        Serial.print(", ");
        b += 0.045;
      }
      b += 0.045;
      Serial.println();
    }
  */
  0, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6,
  6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9,
  9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8,
  7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 1,
  0, 0, 0, 0, 0, 13, 13, 12, 12, 11, 11, 10, 10, 10, 9, 9,
  8, 8, 8, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5,
  5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6,
  6, 7, 7, 7, 8, 8, 8, 9, 9, 10, 10, 10, 11, 11, 12, 12,
  13, 13, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4,
  5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9,
  9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8,
  8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 4, 3, 3,
  2, 1, 1, 1, 0, 0, 0, 0, 13, 13, 12, 12, 12, 11, 11, 10,
  10, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5,
  5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
  6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10,
  11, 12, 12, 13, 13, 13, 0, 0, 0, 0, 1, 1, 2, 2, 2, 3,
  4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8,
  9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
  9, 9, 8, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4,
  3, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 13, 13, 12, 12,
  11, 11, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6,
  5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
  5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9,
  10, 10, 11, 11, 11, 12, 12, 13, 13, 0, 0, 0, 0, 0, 1, 1,
  2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8,
  8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
  9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 6, 6, 6,
  5, 5, 4, 4, 3, 3, 2, 2, 2, 1, 1, 0, 0, 0, 0, 13,
  13, 12, 12, 11, 11, 10, 10, 10, 9, 9, 8, 8, 8, 7, 7, 7,
  6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
  5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8,
};



#endif