//
//  Product.hpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <iostream>
#include <string>

class Product {
public:
    Product();
    virtual ~Product() = default;
    virtual int getID() const;
    virtual void setID(const int& inID);
    virtual const std::string& getNote() const;
    virtual void setNote(const std::string& inNote);
    virtual const std::string& getProducer() const;
    virtual void setProducer(const std::string& inProducer);
    virtual const int getPrice() const;
    virtual void setPrice(const int& inPrice);
    virtual void setter();
    virtual void show(int inID);
private:
    int mID;
    std::string mNote;
    std::string mProducer;
    int mPrice;
};

#endif /* Product_hpp */
