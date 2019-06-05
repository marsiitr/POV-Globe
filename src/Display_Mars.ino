#include <Adafruit_NeoPixel.h>

#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
double t=0;
int n=80;

// Use the onboard Uno LED
int isObstaclePin = 3;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
int state=1;
double revtime=0,starttime=0;
long count=0;
int dir_m=8;
int pwm_m=9;

void setup() {
  Serial.begin(9600);
  pinMode(isObstaclePin, INPUT);

 strip.begin();
 for(int i=0;i<20;i++)
 {
  
strip.setPixelColor(i, 0, 34,56); 
 }
 strip.show(); // Initialize all pixels to 'off'
  pinMode(dir_m, OUTPUT);
  pinMode(pwm_m, OUTPUT);
  digitalWrite(dir_m, LOW);
  analogWrite(pwm_m, 60);
}

void loop() {
count =0;
isObstacle = digitalRead(isObstaclePin);

    attachInterrupt(digitalPinToInterrupt(isObstaclePin),led,RISING);


if(count>0 && t>=10){
 /*for(int i=0;i<n;i++)
  
  {
    for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 0, 0, 255); 
    }
    if(i==10)
    {
      strip.show();
      delay(2*t/n);
   // delay(50);

      for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 0, 0, 0); 
    }
 strip.show();

    }
    
  }
  delay(t/4);
  for(int i=0;i<n;i++)
  
  {
    for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 255, 0, 0); 
    }
    if(i==10)
    {
      strip.show();
      delay(2*t/n);
   // delay(50);

      for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 0, 0, 0); 
    }
 strip.show();

    }
    
  }
  delay(t/4);
  for(int i=0;i<n;i++)
  
  {
    for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 0, 255, 0); 
    }
    if(i==10)
    {
      strip.show();
      delay(2*t/n);
   // delay(50);

      for(int j=0;j<20;j++)
    {
      strip.setPixelColor(j, 0, 0, 0); 
    }
 strip.show();

    }
    
  }
}
  
//  delay(200);
  if(count >0)
    {

Serial.print(t);
Serial.print("\t");
Serial.println(count);
    }

//Serial.print("led started");
*/
delay(60*t/n);

alphaSrev(n,t,6,255,55,25);
//delay(2*t/n);
alphaRrev(n,t,6,255,255,255);
strip.show();
alphaA(n,t,6,255,255,255);
strip.show();
alphaM(n,t,6,255,255,255);

strip.show();}
}
void led()
{
  count++;
//  Serial.println("start");
  
  revtime =millis();
  //Serial.println(revtime);
   

    
  t=double(-starttime+revtime);

  //t = 1000;
  starttime=revtime;
  
//  Serial.println(t);
  //omega=6283.185/double(-starttime+revtime);
//  Serial.println("w= ",omega);

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

void alphaY(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.setPixelColor(a+2, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, 0, 0, 0);
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

void alphaZ(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+1, 0, 0, 0);
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
void alphaA(int n,double t,int a,int r,int g,int b)
{
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.show();
   delay(t/n);
   
   strip.setPixelColor(a+1,r,g,b);
   //strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a,r,g,b);
   //strip.setPixelColor(a+2,r,g,b);
   strip.show();
   delay(t/n);
  
   strip.setPixelColor(a,0,0,0);
   //strip.setPixelColor(a+1,r,g,b);
   //strip.setPixelColor(a+2,r,g,b);
   strip.show();
   delay(t/n);
   
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   strip.show();
   delay(t/n);
   
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
//   strip.setPixelColor(a+,0,0,0);
   strip.show();
 }
void alphaB(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
 }
 void alphaC(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show(); 
 }
 void alphaD(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   
   strip.show();
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
 }
  void alphaE(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a+2,0,0,0);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
 }
void alphaF(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a+2,0,0,0);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   
 }
void alphaH(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
   delay(t/n);
   delay(t/n);
    strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
  // strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
 }
void alphaI(int n,double t,int a,int r,int g,int b)
{
   strip.setPixelColor(a,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
 }
void alphaJ(int n,double t,int a,int r,int g,int b)
{
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   delay(t/n);  
   strip.setPixelColor(a,r,g,b);
   strip.setPixelColor(a+3,0,0,0);
   //strip.setPixelColor(a+4,r,g,b);
   delay(t/n);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
 }
 void alphaK(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   //strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
 }
 void alphaL(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
 }
  void alphaM(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,0,0,0);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+1,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
  // strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
 }
 void alphaN(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   delay(t/n);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,0,0,0);
   delay(t/n);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,r,g,b);
   delay(t/n);
   strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
  // strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a,r,g,b);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
 }
 void alphaO(int n,double t,int a,int r,int g,int b)
{
  //strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,r,g,b);
   strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   delay(t/n);
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+1,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.show();
   }
 
  void alphaP(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+1, r, g, b);
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

void alphaR(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a, 0, 0, 0);
  strip.show();
  delay(t/n);  
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
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
void alphaS(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+2, r, g, b);
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

void alphaSrev(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, 0, 0, 0);
//  strip.setPixelColor(a, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+1, r, g, b);
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

void alphaRrev(int n,double t,int a,int r,int g,int b)
{
  strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a+3,r,g,b);
   strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a,r,g,b);
   strip.setPixelColor(a+4,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.show();
   delay(t/n);
//   strip.setPixelColor(a,0,0,0);
//   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
//   strip.setPixelColor(a+4,0,0,0);
   strip.show();
   delay(t/n);
    strip.setPixelColor(a+4,r,g,b);
   strip.setPixelColor(a+3,r,g,b);
  // strip.setPixelColor(a+2,r,g,b);
   strip.setPixelColor(a+1,r,g,b);
//   strip.setPixelColor(a,r,g,b);
   strip.show();
   delay(t/n);
   strip.setPixelColor(a,0,0,0);
   strip.setPixelColor(a+1,0,0,0);
   strip.setPixelColor(a+2,0,0,0);
   strip.setPixelColor(a+3,0,0,0);
   strip.setPixelColor(a+4,0,0,0);
   strip.show();
 }
 void alphaT(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
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
void alphaU(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, 0, 0, 0);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(2*t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
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
void alphaV(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+3, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+4, r, g, b);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
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
void alphaW(int n, double t, int a, int r, int g, int b)
{
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, 0, 0, 0);
  strip.setPixelColor(a+4, 0, 0, 0);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.setPixelColor(a+1, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+2, 0, 0, 0);
  strip.show();
  delay(t/n);
  strip.setPixelColor(a, r, g, b);
  strip.setPixelColor(a+1, r, g, b);
  strip.setPixelColor(a+2, r, g, b);
  strip.setPixelColor(a+3, r, g, b);
  strip.setPixelColor(a+4, r, g, b);
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
