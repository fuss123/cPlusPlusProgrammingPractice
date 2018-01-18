//
//  Exp.cpp
//  03_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Exp.hpp"

Exp::Exp(int inBase, int inExp): mBase(inBase), mExp(inExp)
{}

int Exp::getBase() const {
    return mBase;
}

int Exp::getExp() const {
    return mExp;
}

int Exp::getValue() const {
    int res = 1;

    for(int i = 0; i < mExp; i++)
        res *= mBase;
    
    return res;
}

bool Exp::equals(const Exp& b) const {
    return (b.getValue() == getValue())? true : false;
}
