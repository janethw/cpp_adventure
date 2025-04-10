#include <iostream>
#include "thing.h"

// Constructor with initializer list
// const ensures immutability
// string& name passes by reference for efficiency
Thing::Thing(const std::string& name) : _ObjectName(name) {};

// Get name method
const std::string& Thing::getName() const { return _ObjectName; }

// Set name method
void Thing::setName(const std::string& newName) { _ObjectName = newName; } 

// Define the virtual (abstract) method
void Thing::interact() {
    std::cout << "Default output for virtual interact method" << std::endl;
};
