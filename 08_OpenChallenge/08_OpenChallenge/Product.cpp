//
//  Product.cpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Product.hpp"
using namespace std;

Product::Product() : mID(0), mNote(""), mProducer(""), mPrice(0)
{}

int Product::getID() const {
    return mID;
}

void Product::setID(const int& inID) {
    mID = inID;
}

const string& Product::getNote() const {
    return mNote;
}

void Product::setNote(const string& inNote) {
    mNote = inNote;
}

const int Product::getPrice() const {
    return mPrice;
}

void Product::setPrice(const int& inPrice) {
    mPrice = inPrice;
}

const string& Product::getProducer() const {
    return mProducer;
}

void Product::setProducer(const string& inProducer) {
    mProducer = inProducer;
}

void Product::setter() {
    string input;
    
    cout << "상품설명>>";
    cin >> input;
    setNote(input);
    
    cout << "생산자>>";
    cin >> input;
    setProducer(input);
    
    cout << "가격>>";
    int inPrice;
    cin >> inPrice;
    setPrice(inPrice);
}

void Product::show(int inID) {
    setID(inID);
    cout << "-- 상품ID: " << getID() << endl;
    cout << "상품설명: " << getNote() << endl;
    cout << "생산자: " << getProducer() << endl;
    cout << "가격: " << getPrice() << endl;
}
