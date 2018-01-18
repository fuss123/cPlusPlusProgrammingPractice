//
//  AirlineBook.hpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef AirlineBook_hpp
#define AirlineBook_hpp

#include "Schedule.hpp"

class AirlineBook {
public:
    AirlineBook() = default;
    ~AirlineBook() = default;
    const auto viewList() const;
    void book();
    void cancel();
    void view() const;
    void run();
private:
    std::array<Schedule, 3> mSchedules;
    enum class Time {
        Seven = 1, Twelve, SevenTeen
    };
};

#endif /* AirlineBook_hpp */
