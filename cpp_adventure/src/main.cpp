#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include "classes/room.h"


int main() {

    Room hall("Hall");
    Room cave("Cave");
    Room castle("Castle");
    Room market("Market");
    
    std::string choice;
    std::string room;

    room = hall.getName();

    std::cout << "You are in " + room + ". What direction next? " << std::endl;
    std::cin >> choice;
    std::cout << choice << std::endl;
}