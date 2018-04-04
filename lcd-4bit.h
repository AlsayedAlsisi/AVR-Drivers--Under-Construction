/*
 * lcd.h
 *
 * Created: 20-Mar-18 7:32:26 PM
 *  Author: Alsayed
 */ 

/*----------------------------------------------------------------
--------------------- Header Guard -------------------------------
----------------------------------------------------------------*/
#ifndef LCD_H_
#define LCD_H_

/*----------------------------------------------------------------
--------------------- File Inclusions ----------------------------
----------------------------------------------------------------*/
#include <stdint.h>




/*----------------------------------------------------------------
--------------------- Public Function Prototypes ----------------
----------------------------------------------------------------*/
void lcd_init(void);

void lcd_command_send(char cmnd);

void lcd_data_send(char data);

void lcd_gotoxy(uint8_t x, uint8_t y);

void lcd_print_string(char* str);

#endif /* LCD_H_ */


/*----------------------------------------------------------------
--------------------- End of File --------------------------------
----------------------------------------------------------------*/