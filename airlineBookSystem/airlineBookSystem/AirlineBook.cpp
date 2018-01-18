//
//  AirlineBook.cpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "AirlineBook.hpp"
using namespace std;

const auto AirlineBook::viewList() const {
    int time = Console::setTime();
    switch(time) {
        case static_cast<int>(Time::Seven):
            cout << " 7시: ";
            break;
        case static_cast<int>(Time::Twelve):
            cout << "12시: ";
            break;
        case static_cast<int>(Time::SevenTeen):
            cout << "17시: ";
    }
    
    mSchedules.at(--time).showSeats();
    return time;
}

void AirlineBook::book() {
    mSchedules.at(viewList()).book();
}

void AirlineBook::cancel() {
    mSchedules.at(viewList()).cancel();
}

void AirlineBook::view() const {
    for(auto& it : mSchedules)
        it.showSeats();
}

void AirlineBook::run() {
    cout << "*** 한성 항공에 오신 것을 환영합니다.. ***\n\n";
    
    while(true) {
        switch(Console::selectMenu()) {
            case 1:
                book();
                break;
            case 2:
                cancel();
                break;
            case 3:
                view();
                break;
            case 4:
                cout << "예약 시스템을 종료합니다..." << endl;
                return;
        }
        cout << endl;
    }
}
