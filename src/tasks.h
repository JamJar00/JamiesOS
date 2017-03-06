#ifndef jamiesos_tasks_h
#define jamiesos_tasks_h

#define PERIOD 15

#include <stdint.h>

typedef struct {
    uint8_t priority;
    void (*func)(task_t*);
} task_t;

void init_tasks();
task_t* create_task(void (*func)(task_t*), uint8_t priority);
void stop_task(task_t* task);

#endif