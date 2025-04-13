#include <iostream>
#include "room.h"

// Define and initialise Room class
void Room::interact() const {
        std::cout << "You are in " << Room::getName() << ". Where do you want to go next (n, e, s, w)?" << std::endl;
}

// Get name method
const std::string &Room::getName() const { return _roomName; }
