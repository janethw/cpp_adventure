#include "room.h"

// Constructor with initializer list
// const ensures immutability
// string& name passes by reference for efficiency
Room::Room(const std::string& name) : _RoomName(name) {};

// Get name method
const std::string& Room::getName() const { return _RoomName; }

// Set name method
void Room::setName(const std::string& newName) { _RoomName = newName; }