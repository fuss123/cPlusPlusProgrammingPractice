//
//  Exp.hpp
//  03_OpenChallenge
//
//  Created by GODJin on 2018. 1. 10..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Exp_hpp
#define Exp_hpp

class Exp {
public:
    Exp(int inBase = 1, int inExp = 1);
    ~Exp() = default;
    int getBase() const;             // 베이스 값 리턴
    int getExp() const;              // 지수 값 리턴
    int getValue() const;            // 지수를 정수로 계산하여 리턴
    bool equals(const Exp& b) const; // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
private:
    int mBase, mExp;
};

#endif /* Exp_hpp */
