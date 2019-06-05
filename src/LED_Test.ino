#include <Adafruit_NeoPixel.h>

//#include <Adafruit_NeoPixel_ZeroDMA.h>
//#include <bittable.h>


  #define PIN 6
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
    
void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}           
void loop() {
strip.setPixelColor(5, 255, 25, 87);  // magenta color
strip.show();
delay(100);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 255, 25, 87); 
strip.show();
delay(100);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 25, 25,7); 
strip.show();
delay(100);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 255, 25,87);
strip.setPixelColor(2, 25, 25,67); 
strip.show();
delay(100);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 255, 25,87);
strip.setPixelColor(2, 0, 0,0);
strip.setPixelColor(1, 255, 25,87); 
strip.show();
delay(100);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 55, 25,87);
strip.setPixelColor(2, 255, 2,8); 
strip.show();
delay(500);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 55, 25,87); 
strip.show();
delay(500);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 255, 25, 87); 
strip.show();
delay(500);
strip.setPixelColor(5, 255, 25, 87);
strip.show();
}
