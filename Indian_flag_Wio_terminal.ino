#include "TFT_eSPI.h" // LCD library
TFT_eSPI tft; // intialize the TFT LCD library

void setup() {
  // put your setup code here, to run once:
  // intialize the TFT LCD screen on Wio terminal
  tft.begin();
  tft.setRotation(3) ; // it sets the rotation of the LCD screen
  tft.fillScreen(TFT_WHITE); // fills the entire screen with color white

  tft.drawRect(0,0, 320, 80 , TFT_BLACK); // draw a rectangle on the LCD screen 

  tft.fillRect(0,0, 320, 80, tft.color565(255, 153,51)); // fill a rectangle on the LCD screen with deep saffron colour by using the rgb values


  tft.drawRect(0,160, 320, 80, TFT_BLACK);

  tft.fillRect(0,160, 320, 80, tft.color565(19, 136, 8)); //fill a rectangle on the LCD screen with green color by using the rgb value


  tft.drawCircle(160, 120, 40, TFT_NAVY); // draw a circle on the LCD screen 

  tft.drawCircle(160, 120, 15, TFT_NAVY); 

  tft.fillCircle(160, 120, 15, TFT_NAVY); // fill a circle on the LCD screen 

  tft.drawFastVLine(160, 80, 80, TFT_NAVY); // draw a vertical line

  tft.drawFastHLine(120, 120, 80, TFT_NAVY); // draw a horizontal line

  tft.drawLine(160, 120, 125, 100, TFT_NAVY); // to draw a line between two points on the lcd screen
  tft.drawLine(160, 120, 145, 85, TFT_NAVY);
  tft.drawLine(160, 120, 133, 90, TFT_NAVY);
  tft.drawLine(160, 120, 122, 110, TFT_NAVY);
  tft.drawLine(160, 120, 150, 80, TFT_NAVY);

  tft.drawLine(160, 120, 200, 110, TFT_NAVY);
  tft.drawLine(160, 120, 180, 85, TFT_NAVY);
  tft.drawLine(160, 120, 192, 95, TFT_NAVY);
  tft.drawLine(160, 120, 170, 80, TFT_NAVY);
  tft.drawLine(160, 120, 185, 90, TFT_NAVY);

  tft.drawLine(160,120,180,155,TFT_NAVY); 
  tft.drawLine(160,120,198,135,TFT_NAVY); 
  tft.drawLine(160,120,170,158,TFT_NAVY); 
  tft.drawLine(160,120,190,145,TFT_NAVY); 
  tft.drawLine(160,120,200,130,TFT_NAVY);  
                             
  tft.drawLine(160,120,123,130,TFT_NAVY); 
  tft.drawLine(160,120,133,150,TFT_NAVY); 
  tft.drawLine(160,120,148,158,TFT_NAVY); 
  tft.drawLine(160,120,128,145,TFT_NAVY); 
  tft.drawLine(160,120,140,155,TFT_NAVY);

  
  tft.setTextColor(TFT_BLACK);  // sets the text color to black
  tft.setTextSize(3); // sets the size of the text
  tft.drawString("Azadi Ka", 100, 10); // to print string on the LCD screen


  tft.setTextColor(TFT_BLACK);         
  tft.setTextSize(3);                   
  tft.drawString("Amrit Mahotsav", 40,200); 

}

void loop() {
  // put your main code here, to run repeatedly:

}
