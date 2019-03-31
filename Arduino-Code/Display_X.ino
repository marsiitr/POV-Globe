#include <Adafruit_NeoPixel.h>

//#include <Adafruit_NeoPixel_ZeroDMA.h>
//#include <bittable.h>
  #define PIN 6
  Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
long count;
int n=30;
int dir_m=8,starttime=0,revtime=0;
double t=0;
int pwm_m=9;
void setup() {
  //pinMode(LED, OUTPUT); //LED is a output pin
  
  pinMode(3, INPUT_PULLUP); //Hall sensor is input pin
  pinMode(dir_m, OUTPUT);
  pinMode(pwm_m, OUTPUT);
  digitalWrite(dir_m, LOW);
  analogWrite(pwm_m, 65);
  attachInterrupt(digitalPinToInterrupt(3), led, RISING);
  Serial.begin(9600);
    strip.begin();
  strip.show();
}
void loop()
{
  int k = 15;
if(count>0)
{
    for(int i=0;i<n;i++)
  {
    for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j,k,k,k);
    }
    strip.show();
    k=k+8;
    delay(t/n);
}
}
}
void led()
{
  count++;
//  Serial.println("start");
  
  revtime =millis();
  Serial.println(t);
   

    
  t=double(-starttime+revtime);

  //t = 1000;
  starttime=revtime;
  
//  Serial.println("hello");

}
void alphaX(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, 0, 0, 0);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+1, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.setPixelColor(a+2, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, 0, 0, 0);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(t/n);
}
