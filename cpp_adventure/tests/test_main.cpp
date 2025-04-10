// Warning on the gtest include due to Intellisense not knowing the path of the gtest header file 
//  in the local Googletest installation
#include "gtest/gtest.h"
#include "../src/classes/room.h"
#include <stdexcept>


TEST(Room, SetAndGetName) {
    // Create an instance of the Room Class using custom constructor syntax
    Room r("Default");

    // Test default
    EXPECT_EQ(r.getName(), "Default");

    // Test specified name
    r.setName("SomeName");
    EXPECT_EQ (r.getName(), "SomeName");
}

