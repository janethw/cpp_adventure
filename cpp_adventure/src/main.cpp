#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include "classes/room.h"
#include "classes/thing.h"
#include "functions/enterRoom.h"


int main() {

    Room hall("Hall", 2, 3, 4, -1);
    Room cave("Cave", -1, -1, 1, -1);
    Room castle("Castle", -1, -1, 5, 1);
    Room market("Market", 1, 5, -1, -1);
    Room garden("Garden", 3, -1, -1, 4);
    
    std::string choice;
    std::string room;
    std::string message;

    room = hall.getName();

    message = enterRoom(room);

    std::cout << message << std::endl;
    std::cin >> choice;
    std::cout << choice << std::endl;
}