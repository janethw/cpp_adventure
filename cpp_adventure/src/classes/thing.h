#ifndef __THING_H_
#define __THING_H_

#include <string>

// declare Thing class
class Thing {
private:
    std::string _gameObjectName;
    
public:
    // Constructor
    Thing(const std::string &name);
    
    // Get name method
    const std::string &getGameObjectName() const;
    
    // Set name method
    void setGameObjectName(const std::string &newName);

    // Abstract method (pure virtual function)
    virtual void interact() const = 0;
};

#endif //THING
