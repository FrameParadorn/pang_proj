#include <TinyGPS++.h>
#include <SoftwareSerial.h>

static const int RX = 5 , TX = 16;   
static const uint32_t GPSBaud = 9600; 

TinyGPSPlus gps;

SoftwareSerial ss(RX, TX);    

void setup()
{
    Serial.begin(9600);
    Serial.println();
    ss.begin(GPSBaud);
}


void checkGPS()
{

    if (gps.charsProcessed() < 10) {
        Serial.println("No GPS detected: check wiring.");
    }else {
        Serial.println("Detected.");
    }
    
}


void loop()
{
    checkGPS();
    delay(1000);
}

