//
//  Shape.cpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Shape.hpp"

Shape::Shape() : mNext(nullptr)
{}

Shape::Shape(Shape* src) : mNext(src->getNext())
{}

Shape& Shape::operator=(Shape* src) {
    if(this == src)
        return *this;
    setNext(src->getNext());
    return *this;
}

Shape* Shape::getNext() {
    return mNext;
}

void Shape::setNext(Shape* inNext) {
    mNext = inNext;
}
