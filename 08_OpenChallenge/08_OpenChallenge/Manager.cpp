//
//  Manager.cpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Manager.hpp"
using namespace std;

Manager::Manager() : mTotal(0)
{}

int Manager::getTotal() const {
    return mTotal;
}

void Manager::setTotal() {
    mTotal++;
}

void Manager::run() {
    cout << "**** 상품 관리 프로그램을 작동합니다.****" << endl;
    
    while(true) {
        int ans = mainMenu();
        if(ans == 1) {
            int kind = selectKind();
            
            if(kind == 1) {
                mProduct[mTotal] = make_unique<Book>(); 
                mProduct[mTotal]->setter();
            }
            else if(kind == 2) {
                mProduct[mTotal] = make_unique<CompactDisc>();
                mProduct[mTotal]->setter();
            }
            else if(kind == 3) {
                mProduct[mTotal] = make_unique<ConversationBook>();
                mProduct[mTotal]->setter();
            }
            
            mTotal++;
        }
        else if(ans == 2)
            display();
        else if(ans == 3)
            return;
    }
}

int Manager::mainMenu() const {
    cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
    int ans;
    cin >> ans;
    return ans;
}

int Manager::selectKind() const {
    cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
    int ans;
    cin >> ans;
    return ans;
}

void Manager::display() const {
   for(int i = 0; i < mTotal; i++)
       mProduct[i]->show(i);
}
