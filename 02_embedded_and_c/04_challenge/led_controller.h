#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#endif // LED_CONTROLLER_H
