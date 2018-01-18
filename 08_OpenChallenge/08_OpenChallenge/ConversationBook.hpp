//
//  ConversationBook.hpp
//  08_OpenChallenge
//
//  Created by GODJin on 2018. 1. 16..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef ConversationBook_hpp
#define ConversationBook_hpp

#include "Book.hpp"

class ConversationBook : public Book {
public:
    ConversationBook();
    virtual ~ConversationBook() = default;
    virtual const std::string& getLanguage() const;
    virtual void setLanguage(const std::string& inLanguage);
    virtual void setter() override;
    virtual void show(int inID) override;
private:
    std::string mLanguage;
};

#endif /* ConversationBook_hpp */
