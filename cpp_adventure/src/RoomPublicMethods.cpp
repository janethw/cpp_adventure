#include "RoomPublicMethods.h"
#include "gtest/gtest.h"

// Return values
// -1 for error and build fails to launch because room name is private
// 1 if build succeeds and room name not private

void accessRoomName(){
    try {
        t.name = "Entrance";
        throw std::runtime_error("Name cannot be empty");
}