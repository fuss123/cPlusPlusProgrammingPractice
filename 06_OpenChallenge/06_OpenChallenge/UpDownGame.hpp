//
//  UpDownGame.hpp
//  06_OpenChallenge
//
//  Created by GODJin on 2018. 1. 15..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef UpDownGame_hpp
#define UpDownGame_hpp

#include "Person.hpp"

class UpDownGame {
public:
    UpDownGame();
    ~UpDownGame() = default;
    void run();
private:
    static int mUp;
    static int mDown;
    static int mAnswer;
};

#endif /* UpDownGame_hpp */
