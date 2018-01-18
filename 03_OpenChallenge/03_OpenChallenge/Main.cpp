//
//  Main.cpp
//  03_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include <iostream>
#include "Exp.hpp"
using namespace std;

int main() {
    Exp a(3, 2);
    Exp b(9);
    Exp c;
    
    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;
    
    if(a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;
    
    return 0;
}
