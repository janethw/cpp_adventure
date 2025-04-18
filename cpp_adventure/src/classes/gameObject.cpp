#include <iostream>
#include "gameObject.h"

// Define Thing class
// Constructor with initializer list
// const ensures immutability
// string& name passes by reference for efficiency
GameObject::GameObject(const std::string &name) : _gameObjectName(name) {};

// Get name method
const std::string &GameObject::getGameObjectName() const { return _gameObjectName; }

// Set name method
void GameObject::setGameObjectName(const std::string &newName) { _gameObjectName = newName; } 

// The virtual (abstract) method does not need to be defined because it will be overridden by the (derived) Room class
