//
//  RockPaperScissorsGame.cpp
//  02_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "RockPaperScissorsGame.hpp"
#include <iostream>

using namespace std;

RockPaperScissorsGame::RockPaperScissorsGame()
: mPlayer1("사또"), mPlayer2("아랑")
{}

void RockPaperScissorsGame::run() {
    cout << "가위, 바위, 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    
    cout << mPlayer1.getName() + ">>";
    string p1Status;
    cin >> p1Status;
    
    cout << mPlayer2.getName() + ">>";
    string p2Status;
    cin >> p2Status;
    
    prtResult(p1Status, p2Status);
}

void RockPaperScissorsGame::prtResult(string& p1Status, string& p2Status) const {
    if((p1Status == "가위" && p2Status == "가위") ||
       (p1Status == "보" && p2Status == "보") ||
       (p1Status == "바위" && p2Status == "바위"))
        cout << "비겼습니다." << endl;
    else if((p1Status == "가위" && p2Status == "보") ||
            (p1Status == "보" && p2Status == "바위") ||
            (p1Status == "바위" && p2Status == "가위"))
        cout << mPlayer1.getName() + "이 이겼습니다." << endl;
    else
        cout << mPlayer2.getName() + "이 이겼습니다." << endl;
}
