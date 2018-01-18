//
//  Player.hpp
//  04_OpenChallenge
//
//  Created by GODJin on 2018. 1. 12..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <string>

class Player {
public:
    Player(const std::string& inName);
    Player() = default;
    const std::string& getName() const;
private:
    std::string mName;
};

#endif /* Player_hpp */
