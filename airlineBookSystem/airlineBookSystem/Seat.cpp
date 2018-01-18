//
//  Seat.cpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Seat.hpp"
using namespace std;

Seat::Seat() : mIsBooked(false), mName("--------")
{}

void Seat::setBooked(const bool inIsBooked) {
    mIsBooked = inIsBooked;
}

const bool& Seat::isBooked() const {
    return mIsBooked;
}

void Seat::setName(const string& inName) {
    mName = inName;
}

const string& Seat::getName() const {
    return mName;
}

void Seat::show() const {
    int len = 8 - static_cast<int>(mName.length());
    cout << " ";
    for(int i = 0; i < len; i++)
        cout << " ";
    cout << mName + " ";
}
