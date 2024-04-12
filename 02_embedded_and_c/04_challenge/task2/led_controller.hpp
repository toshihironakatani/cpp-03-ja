#ifndef LED_CONTROLLER_HEADER_H
#define LED_CONTROLLER_HEADER_H


#ifdef __cplusplus
extern "C" {
#endif

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#ifdef __cplusplus
}
#endif

#endif  //LED_CONTROLLER_HEADER_H
