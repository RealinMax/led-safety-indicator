#include "unity.h"
#include "led_control.h"

void setUp(void) {}
void tearDown(void) {}

void test_initial_state_is_off(void)
{
    LED_Control_Init();
    TEST_ASSERT_EQUAL(0, LED_GetState());
}

void test_set_state_on(void)
{
    LED_Control_SetState(LED_STATE_ON);
    TEST_ASSERT_EQUAL(1, LED_GetState());
}

void test_set_state_off(void)
{
    LED_Control_SetState(LED_STATE_OFF);
    TEST_ASSERT_EQUAL(0, LED_GetState());
}

void test_toggle_state(void)
{
    LED_Control_SetState(LED_STATE_TOGGLE);
    LED_Control_Task();
    TEST_ASSERT_EQUAL(1, LED_GetState());
    LED_Control_Task();
    TEST_ASSERT_EQUAL(0, LED_GetState());
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_initial_state_is_off);
    RUN_TEST(test_set_state_on);
    RUN_TEST(test_set_state_off);
    RUN_TEST(test_toggle_state);
    return UNITY_END();
}