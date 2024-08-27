#include "led.h"
#include "light.h"
#include <stdio.h>

int led_on(struct led *self);
int led_off(struct led *self);
int led_get_state(struct led *self);

struct light_i led_interface = {
    .on = (light_on_fn_t)led_on,
    .off = (light_off_fn_t)led_off,
    .get_state = (light_get_state_fn_t)led_get_state,
};

int led_on(struct led *self) {

}
int led_off(struct led *self) {
    
}

int led_get_state(struct led *self) {
    return self->state;
}

int led_init(struct led *self)
{
    self->interface = &led_interface;
    self->state = 0;
    return 0;
}