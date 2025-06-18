#ifndef UNITY_H
#define UNITY_H
typedef void (*UnityTestFunction)(void);
typedef unsigned short UNITY_LINE_TYPE;
typedef int UNITY_INT;
typedef unsigned int UNITY_STORAGE_T;
typedef enum {
    UNITY_DISPLAY_STYLE_INT = 0
} UNITY_DISPLAY_STYLE_T;

void UnityBegin(const char*);
void UnityEnd(void);
void UnityDefaultTestRun(UnityTestFunction func, const char* name, const int line_num);
#define UNITY_BEGIN() UnityBegin(__FILE__)
#define UNITY_END() UnityEnd()
#define RUN_TEST(func) UnityDefaultTestRun(func, #func, __LINE__)
#define TEST_ASSERT_EQUAL(expected, actual)
#endif