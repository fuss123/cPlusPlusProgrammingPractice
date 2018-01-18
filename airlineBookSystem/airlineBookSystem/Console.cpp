//
//  Console.cpp
//  airlineBookSystem
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Console.hpp"
using namespace std;

int Console::selectMenu() {
    cout << "예약:1, 취소:2, 보기:3, 끝내기:4 >> ";
    int ans;
    cin >> ans;
    return ans;
}

int Console::setTime() {
    cout << "7시:1, 12시:2, 17시:3 >> ";
    int time;
    cin >> time;
    return time;
}

int Console::setSeatNum() {
    cout << "좌석 번호 >> ";
    int num;
    cin >> num;
    return num;
}

const string Console::setName() {
    cout << "이름 입력 >> ";
    string name;
    cin >> name;
    return name;
}
