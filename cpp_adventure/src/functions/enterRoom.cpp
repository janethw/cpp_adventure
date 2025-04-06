#include <string>
#include "enterRoom.h"

std::string enterRoom(std::string room) {
    std::string enterRoomText;
    enterRoomText = "You are in " + room + ". What direction next? ";
    return enterRoomText;
}