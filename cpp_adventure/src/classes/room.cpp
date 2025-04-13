#include <iostream>
#include "room.h"

// Define and initialise Room class

// Define interact() method override
void Room::interact() const {
        std::cout << "You are in " << getRoomName() << ". Where do you want to go next (n, e, s, w)?" << std::endl;
}

// Get name method
const std::string &Room::getRoomName() const { return _roomName; }
