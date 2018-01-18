//
//  Manager.hpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include "ConversationBook.hpp"
#include "CompactDisc.hpp"
#include <memory>
#include <array>

class Manager {
public:
    Manager();
    ~Manager() = default;
    int getTotal() const;
    void setTotal();
    void run();
    int mainMenu() const;
    int selectKind() const;
    void display() const;
private:
    std::array<std::unique_ptr<Product>, 100> mProduct;
    int mTotal;
};

#endif /* Manager_hpp */
