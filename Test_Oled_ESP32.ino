/*
    Programma: Test_oled_SSD1331_wemos_d1.ino
    
   This is a example sketch demonstrating the graphics
   capabilities of the SSD1331 library  for the 0.96"
   16-bit Color OLED with SSD1331 driver chip

    Ultima modifica il 10/5/2018

    Applicazione realizzata da Adriano Gandolfo
    Sito http://www.adrirobot.it
    Blog http://it.emcelettronica.com/author/adrirobot
    Pagina Facebook https://www.facebook.com/Adrirobot-318949048122955
    Istagram https://www.instagram.com/adrirobot/
    This example code is in the public domain.
*/
/*
// Definizione dei pin di collegamento
#define sclk 18
#define mosi 23
#define cs   17
#define rst  5
#define dc   16
*/
// Definizione dei colori
#define	BLACK           0x0000
#define	BLUE            0x001F
#define	RED             0xF800
#define	GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0
#define WHITE           0xFFFF

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1331.h>
#include <SPI.h>

//Adafruit_SSD1331 display = Adafruit_SSD1331(cs, dc, rst);
Adafruit_SSD1331 display = Adafruit_SSD1331(17, 16, 23, 18, 5);

void setup(void) {
  display.begin();
}

void loop() {
  display.fillScreen(BLACK);
  display.setTextSize(2);
  display.setCursor(20, 0);
  display.setTextColor(WHITE);
  display.print("TEST");
  display.setCursor(5, 16);
  display.setTextColor(YELLOW);
  display.print("DISPLAY");
  display.drawFastHLine(0, 45, display.width() - 1, RED);
  display.setCursor(0, 52);
  display.setTextColor(GREEN);
  display.setTextSize(1);
  display.print("WWW.ADRIROBOT.IT");
  delay(1500);
}
