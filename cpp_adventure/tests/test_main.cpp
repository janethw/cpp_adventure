// Warning on the gtest include due to Intellisense not knowing the path of the gtest header file 
//  in the local Googletest installation
#include "gtest/gtest.h"
#include "../src/classes/room.h"
#include <stdexcept>


TEST(Room, SetAndGetName) {
    // Create an instance of the Room Class using custom constructor syntax
    Room r("Default", "Default", -1, -1, -1, -1);

    // Test type of game object default
    EXPECT_EQ(r.getName(), "Default");

    // Test default
    //EXPECT_EQ(r.roomName(), "Default");

    // Test specified game object type
    // r.setName("Room");
    // EXPECT_EQ(r.getName(), "Room");

    // Test specified room descriptive name
    // r.roomName("Hall");
    // EXPECT_EQ(r._roomName(), "Hall"); 
}

