#ifndef __GAMEOBJECT_H_
#define __GAMEOBJECT_H_

#include <string>

// declare GameObject class
class GameObject {
private:
    std::string _gameObjectName;
    
public:
    // Constructor
    GameObject(const std::string &name);
    
    // Get name method
    const std::string &getGameObjectName() const;
    
    // Set name method
    void setGameObjectName(const std::string &newName);

    // Abstract method (pure virtual function)
    virtual void interact() const = 0;
};

#endif //GAMEOBJECT
