#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>



// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16,2);


SoftwareSerial mySerial(3, 2);

//Delcaration of Arduino port connections
int sensor = A0;
int redLed = 7;
int greenLed = 8;
int buzzer = 4;


/*
* Definition of sensor thresholds
*/

int sensorThresh = 160;


void setup()
{

  Serial.begin(9600);
  mySerial.begin(9600);

  
  lcd.begin(16,2); // initialize the LCD
  lcd.backlight(); // Turn on the blacklight and print a message.

  pinMode(redLed, OUTPUT); 
  pinMode(greenLed, OUTPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(sensor,INPUT);

  lcd.print("Hey Faro");
  lcd.setCursor(0, 1);
  delay(3000);
  lcd.clear();
  lcd.print(" Loading module... ");
  lcd.setCursor(0, 1);
  lcd.print(" Gas Detection");
  delay(3000);
  lcd.clear();

 
  
}

void loop()
{
  //Read and Display LPG Gas concentration
  int analogValue = analogRead(sensor);
  Serial.print(analogValue);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(analogValue);
  delay(1000);


   if (analogValue > sensorThresh) {
    SendAlertMessage();
    Serial.print("Gas detect alarm");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Gas Leakage");
    lcd.setCursor(0, 1);
    lcd.print(" SMS Sent");
    delay(1000);
    digitalWrite(redLed, HIGH);
    tone(buzzer, 1000);
    delay(3000);
    tone(buzzer, 1000);
  
 
  } else {
    Serial.print("Gas Level Low");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Gas Level Normal");
    digitalWrite(greenLed, HIGH);
    delay(1000);
  }
  lcd.clear();
}


//Function to send SMS using SIM800L module
void SendAlertMessage() {
  Serial.println("Sending");
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+263785449297\"\r");
  mySerial.println("Faro - Gas Detected. Open Windows");
  delay(100);
  mySerial.println((char)26);
  delay(1000);
}
  


 
  




