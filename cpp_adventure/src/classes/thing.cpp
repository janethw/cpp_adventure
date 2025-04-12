#include <iostream>
#include "thing.h"

// Define Thing class
// Constructor with initializer list
// const ensures immutability
// string& name passes by reference for efficiency
Thing::Thing(const std::string &name) : _ObjectName(name) {};

// Get name method
const std::string &Thing::getName() const { return _ObjectName; }

// Set name method
void Thing::setName(const std::string &newName) { _ObjectName = newName; } 

// The virtual (abstract) method does not need to be defined because it will be overridden by the (derived) Room class
