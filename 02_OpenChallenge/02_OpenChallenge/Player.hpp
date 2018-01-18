//
//  Player.hpp
//  02_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <string>

class Player {
public:
    Player(const std::string& inName);
    ~Player() = default;
    const std::string& getName() const;
    void setName(const std::string& inName);
private:
    std::string mName;
};

#endif /* Player_hpp */
