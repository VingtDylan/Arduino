// ---------------------------------------------------------------------------------
//  @Author:	  VingtDylan
//  @DateTime:	2019-01-16 03:14:25
//  @Description: cyh loves wmy.
//  @Email: 1205373709@qq.com
//  PS: Coding just for fun.
// ---------------------------------------------------------------------------------
#include "FastLED.h"

#define NUM_LEDS 30
#define DATA_PIN 9
#define LED_TYPE WS2812
#define COLOR_ORDER GRB

uint8_t max_bright =128;
uint8_t beginHue=0;
uint8_t deltaHue=1;

CRGB leds[NUM_LEDS];

void setup() {
    LEDS.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds,NUM_LEDS);
    FastLED.setBrightness(max_bright);
}

void loop() {
   /*leds[0]=CRGB::Red;
   leds[1]=CRGB::Blue;
   leds[2]=CRGB(50,0,50);
   FastLED.show();
   delay(50);*/

   /*fill_rainbow(leds,NUM_LEDS,beginHue,deltaHue);
   FastLED.show();
   delay(25);*/

   for(int i=0;i<NUM_LEDS-3;i++){
       fill_solid(leds+i,3,CRGB::SkyBlue);
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB(0,50,50));
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB::PaleGreen);
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB::Peru);
       FastLED.show();
       delay(1);
   }

   for(int i=NUM_LEDS-3;i>0;i--){
       fill_solid(leds+i,3,CRGB::Pink);
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB::Navy);
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB::Cyan);
       FastLED.show();
       delay(1);
       fill_solid(leds+i,3,CRGB::Aqua);
       FastLED.show();
       delay(1);
   }
}
