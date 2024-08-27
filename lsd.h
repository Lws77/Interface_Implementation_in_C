#ifndef __LSD_H__
#define __LSD_H__

#include "light.h"

struct lsd {
    struct light_i *interface;
    char state;
}

int lsd_init(struct lsd *self);


#endif