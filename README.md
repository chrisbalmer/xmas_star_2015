# Christmas Star 2015

This is a quick project to light up several Adafruit Neopixel RGB LEDs inside a Christmas star.

The Neopixel's I used were the [Flora pixels](https://www.adafruit.com/products/1260) which are meant for sewing into clothes. Due to this, the positive and negative terminals only had single pads for each side. That made it difficult to chain them with through hole soldering so I chose to wire up five of them directly to the controller instead of chaining them. I'd recommend using the [breadboard LEDs](https://www.adafruit.com/products/1312) instead.

Each LED is located in the center of one point of the star which is covered in a frosted glass layer.

## Pattern

Currently this chooses a color once a second and then loads the color into all five LEDs. The color is chosen from an array of five Christmas colors.