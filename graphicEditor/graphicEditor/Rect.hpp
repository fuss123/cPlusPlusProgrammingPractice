//
//  Rect.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Rect_hpp
#define Rect_hpp

#include "Shape.hpp"

class Rect : public Shape {
public:
    // 생성자, 소멸자
    Rect() = default;
    virtual ~Rect() = default;
    
    // 출력 메서드
    virtual void draw() const override;
};

#endif /* Rect_hpp */
