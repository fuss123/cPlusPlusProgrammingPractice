//
//  Histogram.hpp
//  07_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Histogram_hpp
#define Histogram_hpp

#include <array>
#include <string>

class Histogram {
public:
    Histogram(const std::string& inMsg);
    ~Histogram() = default;
    void operator!();
    Histogram& operator<<(const std::string& inString);
    Histogram& operator<<(const char inChar);
    inline auto getTotal(char& inChar);
    void countAlpha(char& inChar);
    void counter();
    void print() const;
private:
    std::string mMsg;
    int mTotal;
    std::array<int , 26> mDB = { 0 };
};

#endif /* Histogram_hpp */
