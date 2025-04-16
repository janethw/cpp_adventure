// Warning on the gtest include due to Intellisense not knowing the path of the gtest header file 
//  in the local Googletest installation
#include <gtest/gtest.h>
#include "../src/classes/room.h"
#include <stdexcept>



TEST(Room, SetAndGetName) {
    // Create an instance of the Room Class using custom constructor syntax
    Room r("Default", "Hall", -1, -1, -1, -1);

    // Test descriptive room name is "Hall" on instantiation of Room object
    EXPECT_EQ(r.getRoomName(), "Hall");

    // Test default
    EXPECT_EQ(r.getGameObjectName(), "Default");

    // Test specified game object is type "Room" on instantiation of Room object
    r.setGameObjectName("Room");
    EXPECT_EQ(r.getGameObjectName(), "Room");
}

