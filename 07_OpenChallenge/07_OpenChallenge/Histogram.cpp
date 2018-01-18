//
//  Histogram.cpp
//  07_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Histogram.hpp"
#include <iostream>
using namespace std;

Histogram::Histogram(const string& inMsg) : mMsg(inMsg)
{}

void Histogram::operator!() {
    cout << mMsg << endl << endl;
    
    counter();
    cout << "총 알파벳 수 " << mTotal << endl;
    print();
}

Histogram& Histogram::operator<<(const string& inString) {
    mMsg = mMsg + inString;
    return *this;
}

Histogram& Histogram::operator<<(const char inChar) {
    mMsg = mMsg + inChar;
    return *this;
}

auto Histogram::getTotal(char& inChar) {
    if(isalpha(inChar)) {
        mTotal++;
        return true;
    }
    return false;
}

void Histogram::countAlpha(char& inChar) {
    if(isupper(inChar))
        tolower(inChar);
    else {
        for(int i = 0; i < mDB.size(); i++) {
            if(inChar == (char)('a' + i)) {
                mDB[i]++;
                return;
            }
        }
    }
}

void Histogram::counter() {
    for(int i = 0; i < mMsg.size(); i++) {
        if(getTotal(mMsg.at(i))) {
            countAlpha(mMsg.at(i));
        }
    }
}

void Histogram::print() const {
    for(int i = 0; i < mDB.size(); i++) {
        cout << (char)('a' + i) << ": ";
        for(int j = 0; j < mDB[i]; j++)
            cout << "*";
        cout << endl;
    }
}




