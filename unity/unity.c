/* Minimal unity.c stub for compilation - real unity.c should be downloaded from official repo */
#include "unity.h"
int UnityTestResultsFailBegin(const char* file, const UNITY_LINE_TYPE line) { return 0; }
void UnityIgnore(const char* msg, const UNITY_LINE_TYPE line) {}
void UnityMessage(const char* msg, const UNITY_LINE_TYPE line) {}
UNITY_STORAGE_T UnityStorage;
UNITY_STORAGE_T UnityBegin(const char* name) { return 0; }
void UnityEnd(void) {}
void UnityAssertEqualNumber(const UNITY_INT expected, const UNITY_INT actual, const char* msg, const UNITY_LINE_TYPE line, const UNITY_DISPLAY_STYLE_T style) {}
void UnityDefaultTestRun(UnityTestFunction func, const char* name, const int line_num) {}
void UnityTestRunner(UnityTestFunction func, const char* name, const int line_num) {}