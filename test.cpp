#include "gtest/gtest.h"

int add(int a, int b) {
    int addition = a + b;
    return addition;
}

namespace {
    TEST(Add_tests, add_test) {
        EXPECT_EQ(2, add(1, 1));
    }
}

