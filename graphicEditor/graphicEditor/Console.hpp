//
//  Console.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Console_hpp
#define Console_hpp

#include <iostream>
#include <string>

class Console {
public:
    // 생성자, 소멸자 -> 명시적 삭제
    Console() = delete;
    ~Console() = delete;
    
    // 콘솔 입출력 메서드
    static void output(const std::string& inMsg);
    static void output_endl(const std::string& inMsg);
    template<typename T> static void input(T& inVariable);
};

template<typename T>
void Console::input(T& inVariable) {
    std::cin >> inVariable;
}

#endif /* Console_hpp */
