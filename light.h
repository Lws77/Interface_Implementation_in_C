#ifndef __LIGHT_H__
#define __LIGHT_H__

typedef int (*light_on_fn_t)(void* self);
typedef int (*light_off_fn_t)(void* self);
typedef int (*light_get_state_fn_t)(void* self, int *state);

struct light_i {
    light_on_fn_t on;
    light_off_fn_t off;
    light_get_state_fn_t get_state;
};

static inline int light_on(void *self) 
{
    return (*(struct light_i **)self)->on(self);
}
static inline int light_off(void *self)
{
    return (*(struct light_i **)self)->off(self);
}
static inline int light_get_state(void *self, int *state)
{
    return (*(struct light_i **)self)->get_state(self, state);
}

#endif /* __LIGHT_H__ */
