# ifndef USMLCD_H
# define USMLCD_H

# include "Arduino.h"

// Warning: Here be dragons
// This class uses the 'new' keyword and may behave strangely
// Test! Test! Test! 

// This class is a wrapper for the built in Arduino LCD library.
// We opted not to support 8-pin configuration to save time.
// Tie the RW pin on the display to GND.
class charLCD {
  private:
    LiquidCrystal *lcd;	// May throw compile-time errors, needs testing.
						// We need to call the class constructor after assigning the instance variable.
  public:
    void init(int _rs, int _en, int _d4, int _d5, int _d6, int _d7);
	void clear();
	void home();
	void writeCharacter(char c);
	void print(byte b);
	void print(char c);
	void print(long l);
	void print(int i);
	void print(string s);
	void cursor();
	void noCursor();
	void blink();
	void noBlink();
	void display();
	void noDisplay();
	void scrollDisplayLeft();
	void scrollDisplayRight();
	void autoscroll();
	void noAutoscroll();
};

#endif