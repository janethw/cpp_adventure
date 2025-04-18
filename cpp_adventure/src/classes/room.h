#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>
#include "gameObject.h"


// Declare Room class
class Room : public GameObject {
private:
    std::string _roomName;  // Descriptive room name
    // ints to represent exits from the room (ints represent the IDs of connected rooms)
    int n, e, s, w;
    
public:
    // _ObjectName is a private data member of the Thing class.
    // The Thing constructor initializes _ObjectName with the value of 'name',
    // ensuring that the room's name is correctly stored in the base class.
    explicit Room(const std::string &name, const std::string &roomName, 
        const int nArg, const int eArg, const int sArg, const int wArg) 
        : GameObject(name), _roomName(roomName), n(nArg), e(eArg), s(sArg), w(wArg) {};

    // Get roomName method
    const std::string &getRoomName() const;

    // Override interact method from parent class
    void interact() const override;
};

#endif // ROOM