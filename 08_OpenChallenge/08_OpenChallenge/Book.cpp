//
//  Book.cpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Book.hpp"
using namespace std;

Book::Book() : mISBN(""), mAuthor(""), mTitle("")
{}

const std::string& Book::getISBN() const {
    return mISBN;
}

void Book::setISBN(const std::string& inISBN) {
    mISBN = inISBN;
}

const std::string& Book::getAuthor() const {
    return mAuthor;
}

void Book::setAuthor(const std::string& inAuthor) {
    mAuthor = inAuthor;
}

const std::string& Book::getTitle() const {
    return mTitle;
}

void Book::setTitle(const std::string& inTitle) {
    mTitle = inTitle;
}

void Book::setter() {
    Product::setter();
    string input;
    
    cout << "ISBN>>";
    cin >> input;
    setISBN(input);
    
    cout << "저자>>";
    cin >> input;
    setAuthor(input);
    
    cout << "책제목>>";
    cin >> input;
    setTitle(input);
}

void Book::show(int inID) {
    Product::show(inID);
    cout << "ISBN: " << getISBN() << endl;
    cout << "저자: " << getAuthor() << endl;
    cout << "책제목: " << getTitle() << endl;
}
