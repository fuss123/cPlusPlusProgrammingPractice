//
//  WordGame.cpp
//  04_OpenChallenge
//
//  Created by GODJin on 2018. 1. 12..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "WordGame.hpp"
#include <iostream>
using namespace std;

WordGame::WordGame() : mBeginWord("아버지")
{}

void WordGame::run() {
    cout << "끝말 잇기 게임을 시작합니다" << endl;
    setPlayers();
    cout << "시작하는 단어는 " + mBeginWord + "입니다" << endl;
    
    for(int i = 0; i < mPlayers.size(); i++) {
        cout << mPlayers.at(i).getName() + ">>";
        string word;
        cin >> word;
        
        if(!isEqual(word)) {
            cout << mPlayers.at(i).getName() + "이 졌습니다." << endl;
            return;
        }
        
        if(i == mPlayers.size() - 1) i = 0;
    }
}

void WordGame::setPlayers() {
    int num = 0;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> num;
    
    for(int i = 0; i < num; i++){
        string name;
        cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
        cin >> name;
        mPlayers.push_back(Player(name));
    }
}

bool WordGame::isEqual(const string &inWord) {
    int beginSize = (int)mBeginWord.length();
    
    if(mBeginWord.at(beginSize - 2) == inWord.at(0) && mBeginWord.at(beginSize - 1) == inWord.at(1)) {
        mBeginWord = inWord;
        return true;
    }
    
    return false;
}
