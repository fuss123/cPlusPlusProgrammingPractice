//
//  Console.hpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Console_hpp
#define Console_hpp

#include <string>
#include <iostream>

class Console {
public:
    Console() = delete;
    ~Console() = delete;
    static int selectMenu();
    static int setTime();
    static int setSeatNum();
    static const std::string setName();
};

#endif /* Console_hpp */
