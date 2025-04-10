#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>
#include "thing.h"

class Room : public Thing {
    public:
        void interact() override;
};

#endif // ROOM