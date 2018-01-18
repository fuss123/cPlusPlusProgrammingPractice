//
//  Schedule.hpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Schedule_hpp
#define Schedule_hpp

#include <array>
#include "Seat.hpp"

class Schedule {
public:
    Schedule() = default;
    ~Schedule() = default;
    void showSeats() const;
    void book();
    void cancel();
private:
    std::array<Seat, 8> mSeats;
};

#endif /* Schedule_hpp */
