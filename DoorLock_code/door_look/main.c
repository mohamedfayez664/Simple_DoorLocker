#include "lcd.h"
#include "keypad.h"
#include "motors.h"
#include "switches.h"
#include "internal_eeprom.h"
#include "delay.h"

#include "internal_eeprom.h"

//#include <avr/eeprom.h>
unsigned char count =0, i=0 ;
unsigned char letter=0;

int main(void){

	LCD_init();
	switch_init();
	servo_init(124);
	DELAY_init();

	while(1){

		SREG&=~(1<<7);       //to save me from interrupts
		servo_move(124);
		LCD_clearScreen();
		LCD_displayString("  Enter Password    ");
		LCD_goToRowColumn(2,2);

		for (count=0 ; count < 5 ; count ++){
			letter= KeyPad_getPressedKey();
			input_pass[count]=letter;
			LCD_displayCharacter('*');
			DELAY_ms(400);
		}

		for(i=0;i<5;i++){
			if(memory_pass[i]!=input_pass[i])
				break;
		}
		if(i==5){
			LCD_clearScreen();
			LCD_goToRowColumn(2,1);
			LCD_displayString("  Welcome  ");
			servo_move(187);
			DELAY_ms(1000);
		}//i

		else if(i!=5){    //the password not matched
			LCD_clearScreen();
			LCD_goToRowColumn(2,1);
			LCD_displayString(" Amo 7ramy ");
			DELAY_ms(1000);
		}//i!=5

		SREG|=(1<<7);   //enable it again 
	}
}
