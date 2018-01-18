//
//  CompactDisc.hpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef CompactDisc_hpp
#define CompactDisc_hpp

#include "Product.hpp"

class CompactDisc : public Product {
public:
    CompactDisc();
    virtual ~CompactDisc() = default;
    virtual const std::string& getAlbum() const;
    virtual void setAlbum(const std::string& inAlbum);
    virtual const std::string& getSinger() const;
    virtual void setSinger(const std::string& inSinger);
    virtual void setter() override;
    virtual void show(int inID) override;
private:
    std::string mAlbum;
    std::string mSinger;
};

#endif /* CompactDisc_hpp */
