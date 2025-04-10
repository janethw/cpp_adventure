#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>
#include "thing.h"

class Room : public Thing {
    // Explicitly call the Thing class constructor
    Room(const std::string& name) : Thing(name) {};

    public:
        void interact() override;
};

#endif // ROOM