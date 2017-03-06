#include <stdint.h>
#include "color.h"

uint16_t get_green(uint16_t rgb) {
	uint16_t sub = 63488 & rgb;
	uint16_t val = rgb - sub;
	return val >> 5;
}

uint16_t get_red(uint16_t rgb) {
	return rgb >> 11;
}

uint16_t get_blue(uint16_t rgb) {
	uint16_t sub = 65504 & rgb;
	return rgb - sub;
}

uint16_t from_rgb(uint16_t r, uint16_t g, uint16_t b) {
	return (r << 11) + (g << 5) + b;
}