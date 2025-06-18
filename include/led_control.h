#ifndef LED_CONTROL_H
#define LED_CONTROL_H

typedef enum {
    LED_STATE_OFF,
    LED_STATE_ON,
    LED_STATE_TOGGLE
} e_LED_STATE;

void LED_Control_Init(void);
void LED_Control_SetState(e_LED_STATE state);
void LED_Control_Task(void);
int LED_GetState(void);  // 테스트용

#endif