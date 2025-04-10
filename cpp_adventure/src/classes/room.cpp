#include <iostream>
#include "room.h"

void Room::interact() {
        std::cout << "You are in " << Room::getName() << ". Where do you want to go next (n, e, s, w)?" << std::endl;
}