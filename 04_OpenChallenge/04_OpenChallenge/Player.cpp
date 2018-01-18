//
//  Player.cpp
//  04_OpenChallenge
//
//  Created by GODJin on 2018. 1. 12..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Player.hpp"
using namespace std;

Player::Player(const string& inName) {
    mName = inName;
}

const string& Player::getName() const {
    return mName;
}
