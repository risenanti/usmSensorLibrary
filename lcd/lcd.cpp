#include "lcd.h"

void init(int _rs, int _en, int _d4, int _d5, int _d6, int _d7) {
	lcd = new LiquidCrystal(_rs, _en, _d4, _d5, _d6, _d7); // in memoriam of all my hopes and dreams
	lcd->begin(16,2);		// Assume we always a 16x2 display
	lcd->print("init");	
}

void clear(){
	lcd->clear();
}

void home() {
	lcd->home();
}

void writeCharacter(char c) {
	lcd->write(c);
}

void print(byte b) {
	lcd->print(b);
}

void print(char c) {
	lcd->print(c);
}

void print(long l) {
	lcd->print(l);
}

void print(int i) {
	lcd->print(i);
}

void print(string s) {
	lcd->print(s);
}

// Display the LCD cursor: an underscore (line) at the position to which the next character will be written.
void cursor() {
	lcd->cursor()
}

Hides the LCD cursor.
void noCursor() {
	lcd->noCursor();
}

// Display the blinking LCD cursor. If used in combination with the cursor() function, the result will depend on the particular display. 
void blink() {
	lcd->blink();
}

// Turns off the blinking LCD cursor.
void noBlink() {
	lcd->noBlink();
}

// Turns on the LCD display, after it's been turned off with noDisplay(). This will restore the text (and cursor) that was on the display. 
void display() {
	lcd->display();
}

void noDisplay() {
	lcd->noDisplay()
}

void scrollDisplayLeft() {
	lcd->scrollDisplayLeft();
}

void scrollDisplayRight() {
	lcd->scrollDisplayRight();
}

void autoscroll(){
	lcd->autoscroll();
}

void noAutoscroll() {
	lcd->noAutoscroll();
}