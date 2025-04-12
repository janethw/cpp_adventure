#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>
#include "thing.h"


// Declare Room class
class Room : public Thing {
private:
    // ints to represent exits from the room (ints represent the IDs of connected rooms)
    int n, e, s, w;
    
public:
    // _ObjectName is a private data member of the Thing class.
    // The Thing constructor initializes _ObjectName with the value of 'name',
    // ensuring that the room's name is correctly stored in the base class.
    explicit Room(const std::string &name, const int nArg, const int eArg, 
        const int sArg, const int wArg) 
        : Thing(name), n(nArg), e(eArg), s(sArg), w(wArg) {};

    void interact() const override;
};

#endif // ROOM