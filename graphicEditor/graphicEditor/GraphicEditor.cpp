//
//  GraphicEditor.cpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#include "Circle.hpp"
#include "Rect.hpp"
#include "Line.hpp"
#include "GraphicEditor.hpp"

GraphicEditor::GraphicEditor() : mSize(0), mStartPtr(nullptr), mEndPtr(nullptr) {
    Console::output_endl("*** 그래픽 에디터 프로그램 입니다. ***");
}

GraphicEditor::~GraphicEditor() {
    Console:: output_endl("그래픽 에디터 프로그램을 종료합니다.");
    
    Shape* explorer = getStartPtr();
    while(explorer != nullptr) {
        Shape* preItem = explorer;
        explorer = explorer->getNext();
        delete preItem;
    }
}

const int GraphicEditor::selectMenu() const {
    Console::output("삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ");
    int ans;
    Console::input(ans);
    return ans;
}

const int GraphicEditor::selectShape() const {
    Console::output("원:1, 사각형:2, 선:3 >> ");
    int ans;
    Console::input(ans);
    return ans;
}

void GraphicEditor::integerError() const {
    Console::output_endl("입력 오류! 정수로 다시 입력하세요~");
}

void GraphicEditor::scopeError(const int& index) const {
    Console::output("입력 오류! " + std::to_string(index) + "보다 작은 인덱스를 다시 입력하시오.>> ");
}

const int& GraphicEditor::getSize() const {
    return mSize;
}

void GraphicEditor::incrSize() {
    mSize++;
}

void GraphicEditor::decrSize() {
    mSize--;
}

Shape* GraphicEditor::getStartPtr() {
    return mStartPtr;
}

void GraphicEditor::setStartPtr(Shape* inPtr) {
    mStartPtr = inPtr;
}

Shape* GraphicEditor::getEndPtr() {
    return mEndPtr;
}

void GraphicEditor::setEndPtr(Shape* inPtr) {
    mEndPtr = inPtr;
}

void GraphicEditor::run() {
    while(true) {
        switch(selectMenu()) {
            case static_cast<int>(Menu::Insert):
                insertGraphic();
                break;
            case static_cast<int>(Menu::Delete):
                deleteGraphic();
                break;
            case static_cast<int>(Menu::ViewAll):
                viewAll();
                break;
            case static_cast<int>(Menu::Quit):
                return;
            default:
                integerError();
        }
    }
}

// 큐에 데이터를 삽입하는 메서드
void GraphicEditor::insertGraphic() {
    switch(selectShape()) {
        case static_cast<int>(Type::Circle):
            insertFactory(new Circle());
            break;
        case static_cast<int>(Type::Rectangle):
            insertFactory(new Rect());
            break;
        case static_cast<int>(Type::Line):
            insertFactory(new Line());
            break;
        default:
            integerError();
            insertGraphic();
    }
    
    incrSize();
}

// 입력받은 인덱스 데이터 값을 큐에서 삭제하는 메서드
void GraphicEditor::deleteGraphic() {
    Console::output("삭제하고자 하는 도형의 인덱스 >> ");
    
    int index;
    while(true) {
        Console::input(index);
        if(index > getSize() - 1)
            scopeError(index);
        else
            break;
    }
    
    Shape* preItem = nullptr;
    Shape* explorer = getStartPtr();
    while(index--) {
        preItem = explorer;
        explorer = explorer->getNext();
        if(explorer == nullptr)
            return;
    }
    
    if(explorer == getStartPtr())
        setStartPtr(getStartPtr()->getNext());
    else
        preItem->setNext(explorer->getNext());
    
    delete explorer;
}

// 큐에 담겨있는 데이터 전체를 출력하는 메서드
void GraphicEditor::viewAll() const {
    Shape* explorer = mStartPtr;
    
    int i = 0;
    while(explorer != nullptr) {
        Console::output(std::to_string(i++) + ": ");
        explorer->draw();
        explorer = explorer->getNext();
    }
}
