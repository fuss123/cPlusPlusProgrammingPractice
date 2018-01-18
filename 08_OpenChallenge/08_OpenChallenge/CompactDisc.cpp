//
//  CompactDisc.cpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "CompactDisc.hpp"
using namespace std;

CompactDisc::CompactDisc() : mAlbum(""), mSinger("")
{}

const string& CompactDisc::getAlbum() const {
    return mAlbum;
}

void CompactDisc::setAlbum(const string& inAlbum) {
    mAlbum = inAlbum;
}

const string& CompactDisc::getSinger() const {
    return mSinger;
}

void CompactDisc::setSinger(const string& inSinger) {
    mSinger = inSinger;
}

void CompactDisc::setter() {
    Product::setter();
    string input;
    
    cout << "앨범제목>>";
    cin >> input;
    setAlbum(input);
    
    cout << "가수>>";
    cin >> input;
    setSinger(input);
}

void CompactDisc::show(int inID) {
    Product::show(inID);
    cout << "앨범제목: " << getAlbum() << endl;
    cout << "가수: " << getSinger() << endl;
}
