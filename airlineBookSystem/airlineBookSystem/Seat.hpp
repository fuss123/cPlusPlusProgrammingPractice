//
//  Seat.hpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Seat_hpp
#define Seat_hpp

#include "Console.hpp"

class Seat {
public:
    Seat();
    ~Seat() = default;
    void setBooked(const bool inIsBooked);
    const bool& isBooked() const;
    void setName(const std::string& inName);
    const std::string& getName() const;
    void show() const;
private:
    bool mIsBooked;
    std::string mName;
};

#endif /* Seat_hpp */
