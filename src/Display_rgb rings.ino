#include <Adafruit_NeoPixel.h>

#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
double t=0;
int n=1, hspin=2, ledpin=13,state=1;
double revtime=0,starttime=0, omega =0;
void setup() {
Serial.begin(9600);  
pinMode(hspin,INPUT);
 strip.begin();// START THE led show and turn all the leds off
 strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 0,0,0);
strip.setPixelColor(2, 0, 0,0);
strip.setPixelColor(1, 0, 0,0); 
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {

attachInterrupt(digitalPinToInterrupt(hspin),led,FALLING);

//Serial.print("led started");


}
void led()
{
  Serial.println("start");
  
  revtime =millis();
  Serial.println(revtime);
   

  t=double(-starttime+revtime);

  // . t = 1000;
  starttime=millis();
  
  Serial.println(t);
  //omega=6283.185/double(-starttime+revtime);
//  Serial.println("w= ",omega);



strip.setPixelColor(5, 255, 25, 87);  // magenta color
strip.show();
delay(t/3);
strip.setPixelColor(5, 255, 0,0); 
strip.setPixelColor(4, 255, 0,0);
strip.setPixelColor(3, 255,0,0);
strip.setPixelColor(2, 255, 0,0);
strip.setPixelColor(1, 255, 0,0);
strip.show();
delay(t/3);
strip.setPixelColor(5, 0, 255,0); 
strip.setPixelColor(4, 0, 255,0);
strip.setPixelColor(3, 0,255,0);
strip.setPixelColor(2, 0, 255,0);
strip.setPixelColor(1, 0, 255,0);
strip.show();
delay(t/3);
strip.setPixelColor(5, 0, 0,255); 
strip.setPixelColor(4, 0, 0,255);
strip.setPixelColor(3, 0,0,255);
strip.setPixelColor(2, 0, 0,255);
strip.setPixelColor(1, 0, 0,255);
strip.show();
delay(t/3);
/*strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 255, 25,87);
strip.setPixelColor(2, 0, 0,0);
strip.setPixelColor(1, 255, 25,87); 
strip.show();
delay(t/n);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 255, 25,87);
strip.setPixelColor(2, 255, 25,87); 
strip.show();
delay(t/n);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 0, 0,0);
strip.setPixelColor(3, 255, 25,87); 
strip.show();
delay(t/n);
strip.setPixelColor(5, 0, 0,0); 
strip.setPixelColor(4, 255, 25, 87); 
strip.show();
delay(t/n);
strip.setPixelColor(5, 255, 25, 87);
strip.show();
 delay(t/n);
*/
//Serial.print("led round over"); 



 
}
