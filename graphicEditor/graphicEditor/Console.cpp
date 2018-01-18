//
//  Console.cpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Console.hpp"
using namespace std;

void Console::output(const std::string& inMsg) {
    cout << inMsg;
}

void Console::output_endl(const std::string& inMsg) {
    cout << inMsg << endl;
}
