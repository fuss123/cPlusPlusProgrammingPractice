//
//  Schedule.cpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Schedule.hpp"
using namespace std;

void Schedule::showSeats() const {
    for(int i = 0; i < mSeats.size(); i++)
        mSeats[i].show();
    cout << endl;
}

void Schedule::book() {
    int seatNum = Console::setSeatNum() - 1;
    string name = Console::setName();
    mSeats.at(seatNum).setName(name);
    mSeats.at(seatNum).setBooked(true);
    
    cout << "예약 완료!" << endl;
}

void Schedule::cancel() {
    int seatNum = Console::setSeatNum() - 1;
    string name = Console::setName();
    
    if(!mSeats.at(seatNum).isBooked()) {
        cout << "취소 실패! 예약 보기를 수행한 후 다시 좌석 번호와 이름을 지정하세요~" << endl;
        return;
    }
    
    mSeats.at(seatNum).setName("--------");
    mSeats.at(seatNum).setBooked(false);
    
    cout << "취소 완료!" << endl;
}
