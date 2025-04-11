#include <iostream>
#include "room.h"


// Define Room class
void Room::interact() {
        Room("Hall");
        std::cout << "You are in " << Room::getName() << ". Where do you want to go next (n, e, s, w)?" << std::endl;
}