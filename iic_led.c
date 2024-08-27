#include "iic_led.h"
#include "light.h"
#include <stdio.h>

int iic_led_on(struct iic_led *self);
int iic_led_off(struct iic_led *self);
int iic_led_get_state(struct iic_led *self, int *state);

struct light_i led_interface = {
    .on = (light_on_fn_t)iic_led_on,
    .off = (light_off_fn_t)iic_led_off,
    .get_state = (light_get_state_fn_t)iic_led_get_state,
};

int iic_led_on(struct iic_led *self) {

}
int iic_led_off(struct iic_led *self) {
    
}

int iic_led_get_state(struct iic_led *self, int *state) {
    return iic_led_read_reg(self->iic_dev, self->address, &state);
}

int iic_led_init(struct iic_led *self)
{
    self->interface = &led_interface;
    self->state = 0;
    // initialize self->iic_dev
    return 0;
}