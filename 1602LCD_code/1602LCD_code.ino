#include <Wire.h>                    //IIC Communication Library File
#include <LiquidCrystal_I2C.h>    //1602 screen IIC communication library file
LiquidCrystal_I2C lcd(0x27,16,2); //instantiate an LCD class with address 0x27
void setup()   //Set the parameter function, only run once after the program starts.
{
  lcd.init();                      //Initialize 1602LCD screen           
  lcd.backlight();                 //Off 1602 LCD screen backlight
}
void loop()      // main loop function, the program will continue 
                 //to run in this function after this function is executed

{
  lcd.setCursor(2,0);         //The cursor is set to the 3rd position on the 1st line.
  lcd.print("Hello world!");  //Show "Hello world!" from the 3rd position on the 1st line
  lcd.setCursor(0,1);         //The cursor is set to the first position on the 2nd line.
  lcd.print("COKOINO Arduino!"); //Show "COKOINO Arduino!" from the 1st position on the 2nd line
}
