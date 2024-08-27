#include "lsd.h"
#include "light.h"
#include <stdio.h>

int lsd_on(struct lsd *self);
int lsd_off(struct lsd *self);
int lsd_get_state(struct lsd *self);

struct light_i lsd_interface = {
    .on = (light_on_fn_t)lsd_on,
    .off = (light_off_fn_t)lsd_off,
    .get_state = (light_get_state_fn_t)lsd_get_state,
};

int lsd_on(struct lsd *self) {

}
int lsd_off(struct lsd *self) {
    
}

int lsd_get_state(struct lsd *self) {
    return self->state;
}

int lsd_init(struct lsd *self)
{
    self->interface = &lsd_interface;
    self->state = 0;
    return 0;
}