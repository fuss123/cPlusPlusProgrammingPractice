//
//  Shape.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include "Console.hpp"

class Shape {
public:
    // 생성자, 소멸자
    Shape();
    Shape(Shape* src);
    Shape& operator=(Shape* src);
    virtual ~Shape() = default;
    
    // getter, setter
    Shape* getNext();
    void setNext(Shape* inNext);
    
    // 출력 메서드
    virtual void draw() const = 0;
private:
    Shape* mNext;
};

#endif /* Shape_hpp */
