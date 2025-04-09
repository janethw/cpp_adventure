#include <string>
#include "enterRoom.h"

std::string enterRoom(std::string room) {
    std::string enterRoomText;
    enterRoomText = "You are in a " + room + ". What direction next? ";
    return enterRoomText;
}