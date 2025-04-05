#ifndef __ROOM_H_
#define __ROOM_H_

#include <string>

class Room {
    private:
        std::string _RoomName;
    
    public:
        // Constructor
        Room(const std::string& name);
        
        // Get name method
        const std::string& getName() const;
        
        // Set name method
        void setName(const std::string& newName);
    };

#endif //ROOM
