#include "light.h"

int main(void){
    struct io_led light1;
    struct lsd light2;
    int tmp;    
    //struct light_i **light;

    io_led_init(&light1);
    lsd_init(&light2);

    assert(!light_get_state(&light1, &tmp));
    printf("state of light1: %d\n", tmp);

    assert(!light_get_state(&light2, &tmp));
    printf("state of light2: %d\n", tmp);
    // Turn on the lights
    light_on(&light1);
    light_on(&light2);

    // Main loop
    while(1){


        // Delay for a while
        delay_ms(100);
    }
}