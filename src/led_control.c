#include "led_control.h"

static e_LED_STATE current_state = LED_STATE_OFF;
static int led_state = 0;  // 0: OFF, 1: ON

void LED_Control_Init(void)
{
    current_state = LED_STATE_OFF;
    led_state = 0;
}

void LED_Control_SetState(e_LED_STATE state)
{
    current_state = state;
    if (state == LED_STATE_ON)
        led_state = 1;
    else if (state == LED_STATE_OFF)
        led_state = 0;
}

void LED_Control_Task(void)
{
    if (current_state == LED_STATE_TOGGLE)
        led_state = !led_state;
}

int LED_GetState(void)
{
    return led_state;
}