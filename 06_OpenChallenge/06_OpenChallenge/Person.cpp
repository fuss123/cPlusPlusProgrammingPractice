//
//  Person.cpp
//  06_OpenChallenge
//
//  Created by GODJin on 2018. 1. 15..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Person.hpp"
using namespace std;

Person::Person(const string& inName) : mName(inName)
{}

const std::string& Person::getName() const {
    return mName;
}
