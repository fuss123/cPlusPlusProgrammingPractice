//
//  Person.hpp
//  06_OpenChallenge
//
//  Created by GODJin on 2018. 1. 15..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <iostream>

class Person {
public:
    Person(const std::string& inName);
    ~Person() = default;
    const std::string& getName() const;
private:
    std::string mName;
};

#endif /* Person_hpp */
