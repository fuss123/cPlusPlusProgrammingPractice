//
//  Main.cpp
//  07_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Histogram.hpp"

int main() {
    Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
    song << "falling" << "in love with you." << "- by "; // 히스토그램에 문자열 추가
    song << 'k' << 'i' << 't'; // 히스토그램에 문자 추가
    !song; // 히스토그램 그리기
    return 0;
}

