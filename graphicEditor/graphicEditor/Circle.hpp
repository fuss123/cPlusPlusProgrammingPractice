//
//  Circle.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Shape.hpp"

class Circle : public Shape {
public:
    // 생성자, 소멸자
    Circle() = default;
    virtual ~Circle() = default;
    
    // 출력 메서드
    virtual void draw() const override;
};

#endif /* Circle_hpp */
