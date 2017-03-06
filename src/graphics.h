/*  Author: Steve Gunn
 * Licence: This work is licensed under the Creative Commons Attribution License.
 *           View this license at http://creativecommons.org/about/licenses/
 */
#ifndef jamiesos_graphics_h
#define jamiesos_graphics_h

#include "ili934x.h" 
#include <avr/io.h>
#include <stdint.h>
#include "color.h"

#define LCDWIDTH	240
#define LCDHEIGHT	320

typedef enum {North, West, South, East} orientation;

typedef struct {
	uint16_t width, height;
	orientation orient;
	uint16_t foreground, background;
} lcd_t;

extern lcd_t display;

typedef struct {
	uint16_t left, right;
	uint16_t top, bottom;
} rect_t;	

void init_graphics();
void set_brightness(uint8_t i);
void set_orientation(orientation o);
void set_frame_rate(uint8_t f);
void clear_screen();
void draw_fill_rectangle(rect_t r, uint16_t col);
void blit_rectangle(rect_t r, uint16_t* col);
void draw_char(char c, uint16_t x, uint16_t y);
void draw_string(char *str, uint16_t x, uint16_t y);
void set_display_colors(uint16_t fg, uint16_t bg);
#endif