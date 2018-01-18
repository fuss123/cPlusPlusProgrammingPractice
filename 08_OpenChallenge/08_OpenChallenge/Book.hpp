//
//  Book.hpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp

#include "Product.hpp"

class Book : public Product {
public:
    Book();
    virtual ~Book() = default;
    virtual const std::string& getISBN() const;
    virtual void setISBN(const std::string& inISBN);
    virtual const std::string& getAuthor() const;
    virtual void setAuthor(const std::string& inAuthor);
    virtual const std::string& getTitle() const;
    virtual void setTitle(const std::string& inTitle);
    virtual void setter() override;
    virtual void show(int inID) override;
private:
    std::string mISBN;
    std::string mAuthor;
    std::string mTitle;
};

#endif /* Book_hpp */
