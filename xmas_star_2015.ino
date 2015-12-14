#include <Adafruit_NeoPixel.h>

#define colorsMax 5
#define pixelsMax 5

Adafruit_NeoPixel pixels[pixelsMax];

byte colors[][3] = {
  {255, 215, 0},     // Gold
  {60, 141, 13},     // Green
  {255, 255, 255},   // White
  {242, 19, 19},     // Red
  {192, 192, 192}    // Silver
};

void setup() {
  
  pixels[0] = Adafruit_NeoPixel(32, 5);
  pixels[1] = Adafruit_NeoPixel(32, 12);
  pixels[2] = Adafruit_NeoPixel(32, 13);
  pixels[3] = Adafruit_NeoPixel(32, 14);
  pixels[4] = Adafruit_NeoPixel(32, 15);
  
  for (int i = 0; i < pixelsMax; i = i + 1) {
    pixels[i].begin();
    pixels[i].setBrightness(50);
    pixels[i].show();
  }
}

void loop() {
  byte color = random(colorsMax);
  
  for (int i = 0; i < pixelsMax; i = i + 1) {
    pixels[i].setPixelColor(i,
                            colors[color][0],
                            colors[color][1],
                            colors[color][2]);
    pixels[i].show();
  }
  
  delay(1000);
}