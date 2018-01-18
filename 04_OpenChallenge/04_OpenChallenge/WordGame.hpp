//
//  WordGame.hpp
//  04_OpenChallenge
//
//  Created by GODJin on 2018. 1. 12..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef WordGame_hpp
#define WordGame_hpp

#include "Player.hpp"
#include <vector>

class WordGame {
public:
    WordGame();
    ~WordGame() = default;
    void run();
    void setPlayers();
    bool isEqual(const std::string& inWord);
private:
    std::vector<Player> mPlayers;
    std::string mBeginWord;
};

#endif /* WordGame_hpp */
