//
//  Line.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp

#include "Shape.hpp"

class Line : public Shape {
public:
    // 생성자, 소멸자
    Line() = default;
    virtual ~Line() = default;
    
    // 출력 메서드
    virtual void draw() const override;
};

#endif /* Line_hpp */
