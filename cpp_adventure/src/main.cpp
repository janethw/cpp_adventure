#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include "classes/room.h"
#include "classes/thing.h"
#include "functions/enterRoom.h"
#include "functions/init.h"


int main() {

    // Room hall("Room", "Hall", 2, 3, 4, -1);
    // Room cave("Room", "Cave", -1, -1, 1, -1);
    // Room castle("Room", "Castle", -1, -1, 5, 1);
    // Room market("Room", "Market", 1, 5, -1, -1);
    // Room garden("Room", "Garden", 3, -1, -1, 4);
    
    std::void init;
    std::string choice;
    std::string room;
    std::string message;

    room = r1.getRoomName();

    message = enterRoom(room);

    std::cout << message << std::endl;
    std::cin >> choice;
    std::cout << choice << std::endl;
}