
#include <vector>
#include "init.h"
#include "../classes/room.h"

void init() {
    // r2
    // |
    // r1 - r3
    // |    |
    // r4 - r5

    Room r1("Room", "Hall", 2, 3, 4, -1);
    Room r2("Room", "Cave", -1, -1, 1, -1);
    Room r3("Room", "Castle", -1, -1, 5, 1);
    Room r4("Room", "Market", 1, 5, -1, -1);
    Room r5("Room", "Garden", 3, -1, -1, 4);
}