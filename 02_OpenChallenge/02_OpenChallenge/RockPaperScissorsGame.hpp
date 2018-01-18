//
//  RockPaperScissorsGame.hpp
//  02_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef RockPaperScissorsGame_hpp
#define RockPaperScissorsGame_hpp

#include "Player.hpp"

class RockPaperScissorsGame {
public:
    RockPaperScissorsGame();
    ~RockPaperScissorsGame() = default;
    void run();
    void prtResult(std::string& p1Status, std::string& p2Status) const;
private:
    Player mPlayer1, mPlayer2;
};

#endif /* RockPaperScissorsGame_hpp */
