#include<Arduino.h>
#include<LiquidCrystal_I2C.h>
#include<DHT.h>


#define DHT_PIN 2
#define DHT_TYPE DHT22

DHT dht(DHT_PIN,DHT_TYPE);

LiquidCrystal_I2C lcd(0x27,20,4);

float temp=0.0;
float humid=0.0;

void setup(){
    dht.begin();
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("Temperature Monitor");
}

void loop(){
    temp=dht.readTemperature();
    humid=dht.readHumidity();
    // Check if any reads failed and exit early (to try again).
    if(isnan(temp) || isnan(humid)){
        lcd.setCursor(0,1);
        lcd.print("Failed to read.");
    }
    // Check if the temperature is above 30 degrees Celsius
    else if(temp>30){
        lcd.setCursor(0,1);
        lcd.print("Temp: ");
        lcd.print(temp);
        lcd.setCursor(0,2);
        lcd.print("Humid: ");
        lcd.print(humid);
        lcd.setCursor(0,3);
        lcd.print("Warning: High Temp!");
    }
    else{
        lcd.setCursor(0,1);
        lcd.print("Temp: ");
        lcd.print(temp);
        lcd.setCursor(0,2);
        lcd.print("Humid: ");
        lcd.print(humid);
        lcd.setCursor(0,3);
        lcd.print("Subs:OdariTutorials");
    }
    delay(1000);

}