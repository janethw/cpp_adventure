#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include "room.h"


// class Room {
// private:
//     std::string _RoomName;

// public:
//     // Constructor with an initializer list
//     // const ensure immutability
//     // string& name passes by reference for efficiency
//     Room(const std::string& name) : _RoomName(name) {};
    
//     // Get name method
//     const std::string& getName() const { return _RoomName; }
    
//     // Set name method
//     void setName(const std::string& newName) { _RoomName = newName; }
// };


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