#include <vector>
#include "initRooms.h"
#include "../classes/room.h"

std::vector<Room> initRooms() {
    // r1
    // |
    // r0 - r2
    // |    |
    // r3 - r4

    Room r0("Room", "Hall", 2, 3, 4, -1);
    Room r1("Room", "Cave", -1, -1, 1, -1);
    Room r2("Room", "Castle", -1, -1, 5, 1);
    Room r3("Room", "Market", 1, 5, -1, -1);
    Room r4("Room", "Garden", 3, -1, -1, 4);

    std::vector<Room> roomVec = {r0, r1, r2, r3, r4};
    return roomVec;
}