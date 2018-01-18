//
//  Player.cpp
//  02_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Player.hpp"
using namespace std;

Player::Player(const string& inName): mName(inName)
{}

const string& Player::getName() const {
    return mName;
}

void Player::setName(const string& inName) {
    mName = inName;
}
