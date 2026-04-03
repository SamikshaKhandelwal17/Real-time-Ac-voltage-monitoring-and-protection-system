#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
#include <EmonLib.h> // EmonLib for voltage measurement
const int relay = 10; // Relay connected to pin 10 
const int buzzer = 9; // Buzzer connected to pin 9
const int warningLED = 8; // LED connected to pin 8
EnergyMonitor emon; float current_Volts;
unsigned long printPeriod = 1000;
unsigned long previousMillis = 0;
int tripCount = 0; // Counter for relay trips
bool relayTripped = false; // To detect edge (change from ON to OFF) 
LiquidCrystal_I2C lcd(0x27, 20, 4); // I2C LCD: 20x

void setup() 
{ 
lcd.init(); 
lcd.backlight(); 
pinMode(relay, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(warning LED, OUTPUT);
digitalWrite(buzzer, LOW); 
digitalWrite(warningLED, LOW);
digitalWrite(relay, HIGH); // Start with relay ON
emon.voltage(A0, 234.0, 1.7); // Calibration
lcd.setCursor(0, 0);
lcd.print("Voltage Monitor"); 
delay(2000);
lcd.setCursor(0, 1);
lcd.print("Under:180V Over:240V");
delay(2000); 
lcd.clear();
}

void loop()
{
emon.calcVI(20, 2000); // Sample voltage 
current_Volts = emon.Vrms; // Read RMS voltage
if (millis() - previousMillis >= printPeriod)
{
previousMillis = millis(); 
lcd.setCursor(0, 0);
lcd.print("Voltage: ");
lcd.print(current_Volts, 1); 
lcd.print(current_Volts, 1);
lcd.print(" V "); // Voltage range checks 
if (current_Volts < 180)
{
lcd.setCursor(0, 1);
lcd.print("Status: Under Volt ");
digitalWrite(relay, LOW); 
digitalWrite(buzzer, HIGH);
digitalWrite(warningLED, HIGH); // Count trip only once per event
if (!relayTripped)
{
  tripCount++; relayTripped = true;
} 
}
else if (current_Volts > 240)
{
  lcd.setCursor(0, 1);
  lcd.print("Status: Over Volt ");
  digitalWrite(relay, LOW); 
  digitalWrite(buzzer, HIGH);
  digitalWrite(warningLED, HIGH); 
  if (!relayTripped) 
  {
    tripCount++; relayTripped = true;
  }
}
else
{
lcd.setCursor(0, 1);
lcd.print("Status: Normal "); 
digitalWrite(relay, HIGH);
digitalWrite(buzzer, LOW); 
digitalWrite(warningLED, LOW);
relayTripped = false; // Reset flag when back to normal
}
// Display trip count on 3rd line 
lcd.setCursor(0, 2); 
lcd.print("Trips: "); 
  lcd.print(tripCount);
lcd.print(" ");
}
