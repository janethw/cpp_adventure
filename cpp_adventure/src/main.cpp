#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include "classes/room.h"
#include "functions/enterRoom.h"


int main() {

    Room hall("Hall");
    Room cave("Cave");
    Room castle("Castle");
    Room market("Market");
    
    std::string choice;
    std::string room;
    std::string message;

    room = hall.getName();

    message = enterRoom(room);

    std::cout << message << std::endl;
    std::cin >> choice;
    std::cout << choice << std::endl;
}