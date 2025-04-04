#include "gtest/gtest.h"
#include "../src/TestPublicMethods.h"


TEST(TestPublicMethods, SetAndGetName) {
    // Test default
    EXPECT_EQ(t.getName(), "Default");

    // Test specified name
    t.setName("SomeName");
    EXPECT_EQ (t.getName(), "SomeName");
}