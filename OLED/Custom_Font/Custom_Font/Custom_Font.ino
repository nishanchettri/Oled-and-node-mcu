
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "font1.h"

#define oledReset LED_BUILTIN
Adafruit_SSD1306 display(oledReset);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   { 
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C,false);   // initialize with the I2C addr 0x3C (for the 128x64)
  
  display.clearDisplay();                      // Make sure the display is cleared
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.setFont(&Aclonica_Regular_16);   // Set the custom font
  display.println("LIKE\nSUBSCRIBE\nSHARE"); 
  
  display.display();                           // Update the display
}


void loop() {
  
}
