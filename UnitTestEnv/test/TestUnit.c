#include "unity.h"
#include "Unit.h"

void test_FirstFunction_should_DoWhatItNeedsTo(void)
{
    TEST_ASSERT_TRUE(0||1);
    TEST_ASSERT_FALSE(1&&1);
    TEST_ASSERT_EQUAL(0, FirstFunction());
}

void test_SecondFunction_should_DoWhatItNeedsTo(void)
{
    TEST_ASSERT(SecondFunction());
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_FirstFunction_should_DoWhatItNeedsTo);
    RUN_TEST(test_SecondFunction_should_DoWhatItNeedsTo);
    return UNITY_END();
}