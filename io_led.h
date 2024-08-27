#ifndef __IO_LED_H__
#define __IO_LED_H__

#include "light.h"

struct io_led {
    struct light_i *interface;
    char state;
};


int io_led_init(struct io_led *self) {}


#endif