#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>
#include "thing.h"


// Declare Room class
class Room : public Thing {
    public:
    // Explicitly call the Thing class constructor
    Room(const std::string& name) : Thing(name) {};

        void interact() override;
};

#endif // ROOM