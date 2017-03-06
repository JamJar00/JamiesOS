#include <stdlib.h>

void init_tasks() {
    /* Timer 0 for task change: */
    TCCR0A = _BV(WGM01);
    TCCR0B = _BV(CS02) | _BV(CS00);   /* F_CPU / 1024 */

    /* Set OCR0A for a ~15ms period */
    OCR0A = 117;   /* F_CPU / 1024 prescaler = 117 steps per 15 ms. */

    /* Enable timer interrupt */
    STIMSK0 = _BV(OCIE0A);
}

task_t* create_task(void (*func)(task_t*), uint8_t priority) {
    task_t* task = (task_t*)malloc(sizeof(task_t));
    task->func = func
}

void stop_task(task_t* task);
