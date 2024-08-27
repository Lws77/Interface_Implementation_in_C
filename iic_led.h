#ifndef __IIC_LED_H__
#define __IIC_LED_H__

#include "light.h"

struct iic_led_i{
    int (*iic_led_read)(void* self, char address, int *data);
    int (*iic_led_write)(void* self, char address, int data);
};

static inline int iic_led_write(void *self, char address, int data) {
    return (*(struct iic_led_i**)self)->iic_led_write(self, address, data);
}

static inline int iic_led_read(struct iic_led *self, char address, int *data) {
    return (*(struct iic_led_i**)self)->iic_led_read(self, address, data);
}

struct iic_led {
    struct light_i *interface;
    struct iic_led_i **iic_dev;
    char address;
    char state;
};

int iic_led_init(struct iic_led *self);


#endif