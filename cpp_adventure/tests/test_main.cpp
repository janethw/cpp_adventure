#include "gtest/gtest.h"
#include "../src/classes/room.h"


TEST(Room, SetAndGetName) {
    // Create an instance of the Room Class using custom constructor syntax
    Room r("Default");

    // Test default
    EXPECT_EQ(r.getName(), "Default");

    // Test specified name
    r.setName("SomeName");
    EXPECT_EQ (r.getName(), "SomeName");
}