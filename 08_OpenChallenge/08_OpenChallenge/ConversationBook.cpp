//
//  ConversationBook.cpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "ConversationBook.hpp"
using namespace std;

ConversationBook::ConversationBook() : mLanguage("")
{}

const string& ConversationBook::getLanguage() const {
    return mLanguage;
}

void ConversationBook::setLanguage(const string &inLanguage) {
    mLanguage = inLanguage;
}

void ConversationBook::setter() {
    Book::setter();
    string input;
    
    cout << "언어>>";
    cin >> input;
    setLanguage(input);
}

void ConversationBook::show(int inID) {
    Book::show(inID);
    cout << "언어: " << getLanguage() << endl;
}
