#include <iostream>
#include "thing.h"

// Define Thing class
// Constructor with initializer list
// const ensures immutability
// string& name passes by reference for efficiency
Thing::Thing(const std::string &name) : _gameObjectName(name) {};

// Get name method
const std::string &Thing::getGameObjectName() const { return _gameObjectName; }

// Set name method
void Thing::setGameObjectName(const std::string &newName) { _gameObjectName = newName; } 

// The virtual (abstract) method does not need to be defined because it will be overridden by the (derived) Room class
