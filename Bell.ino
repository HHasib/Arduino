//Hasnat Hasib
//Testing a LCD with Arduino
#include <LiquidCrystal.h>
LiquidCrystal LCD(10, 9, 5, 4, 3, 2);
int buz = 7;
int rest = 8;
void setup() {
  pinMode(buz, OUTPUT);
  pinMode(rest, OUTPUT);
  LCD.begin(20, 4);


}

void loop() {
  LCD.setCursor(0, 0);
  LCD.print("Class Ongoing");
  {
    for (int i = 0; i <= 7; i++)
    {
      digitalWrite(buz, HIGH);
      delay(2000);
      digitalWrite(buz, LOW);
      delay(4000);
      {
        if (i == 0)
        {
          LCD.setCursor(0, 1);
          LCD.print("maths ");
        }
      }
      {
        if (i == 01)
        {
          LCD.setCursor(0, 1);
          LCD.print("physics ");
        }
      }
      {
        if (i == 02)
        {
          LCD.setCursor(0, 1);
          LCD.print("Chemistry ");
        }
      }
      {
        if (i == 03)
        {
          LCD.setCursor(0, 1);
          LCD.print("Biology  ");
        }
      }
      {
        if (i == 04)
        {
          LCD.setCursor(0, 1);
          LCD.print("Pure Maths ");
        }
      }
      {
        if (i == 05)
        {
          LCD.setCursor(0, 1);
          LCD.print("Economics ");
        }
      }
      {
        if (i == 06)
        {
          LCD.setCursor(0, 1);
          LCD.print("Bangla   ");
        }
      }
    }
  }
  digitalWrite(buz, HIGH);
  LCD.setCursor(0, 0);
  LCD.print("CLASSES OVER ");
  LCD.setCursor(0, 1);
  LCD.print("                    ");
  delay(3000);
  digitalWrite(buz, LOW);
  delay(2000);
  digitalWrite(rest, HIGH);
  delay(100);

}
