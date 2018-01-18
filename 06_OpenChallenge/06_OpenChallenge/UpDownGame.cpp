//
//  UpDownGame.cpp
//  06_OpenChallenge
//
//  Created by GODJin on 2018. 1. 15..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "UpDownGame.hpp"
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

UpDownGame::UpDownGame() {
    srand((unsigned int)time(0));
}

int UpDownGame::mUp = 0;
int UpDownGame::mDown = 99;
int UpDownGame::mAnswer = 0;

void UpDownGame::run() {
    cout << "Up & Down 게임을 시작합니다." << endl;
    std::array<Person, 2> players = {Person("문재석"), Person("이상은")};
    mAnswer = rand() % 100;
    
    while(true) {
        for(auto it = players.begin(); it != players.end(); it++) {
            cout << "답은 " << mUp << "과 " << mDown << "사이에 있습니다." << endl;
            cout << (*it).getName() + ">>";
            
            int num;
            cin >> num;
            
            if(num == mAnswer) {
                cout << (*it).getName() + "이 이겼습니다!!" << endl;
                return;
            }
            else if(num > mAnswer) mDown = num;
            else mUp = num;
        }
    }
}

