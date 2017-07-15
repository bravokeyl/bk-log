/*
 * lcd1602.h
 *
 *  Created on: 15-Jul-2017
 *      Author: xenial
 */

#ifndef LCD1602_H_
#define LCD1602_H_

extern void LCD_Init(void);
extern void LCD_cmd_4bit(uint8_t cmd);
extern void LCD_data_4bit(uint8_t data);
extern void LCD_Cls(void);
extern void LCD_GotoXY(int column, int line);
extern void LCD_Print(char *string);
extern void LCD_PrintI(uint32_t num);
extern void LCD_PrintH(uint32_t num);
extern void LCD_PrintB8(uint8_t num);
extern void LCD_PrintB16(uint16_t num);

#endif /* LCD1602_H_ */
