#include "src/graphics.h"
#include "src/input.h"
#include "src/color.h"

int main() {
    CLKPR = (1 << CLKPCE);
    CLKPR = 0;

    init_graphics();
    init_input();

    while (1) {
        if (LEFT_PRESSED)
            draw_fill_rectangle((rect_t){0, display.width-1, 0, display.height-1}, RED);
        else if (RIGHT_PRESSED)
            draw_fill_rectangle((rect_t){0, display.width-1, 0, display.height-1}, BLUE);
        else if (UP_PRESSED)
            draw_fill_rectangle((rect_t){0, display.width-1, 0, display.height-1}, GREEN);
        else if (DOWN_PRESSED)
            draw_fill_rectangle((rect_t){0, display.width-1, 0, display.height-1}, PINK);
        else if (ENTER_PRESSED)
            draw_fill_rectangle((rect_t){0, display.width-1, 0, display.height-1}, WHITE);
    }

    return 0;
}