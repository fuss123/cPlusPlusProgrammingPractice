//
//  GraphicEditor.hpp
//  graphicEditor
//
//  Created by GODJin on 2018. 1. 17..
//  Copyright © 2018년 GODJin. All rights reserved.
//

#ifndef GraphicEditor_hpp
#define GraphicEditor_hpp

#include "Shape.hpp"
#include "Console.hpp"

class GraphicEditor {
public:
    // 생성자, 소멸자
    GraphicEditor();
    ~GraphicEditor();
    
    // 메세지 출력 메서드
    const int selectMenu() const;
    const int selectShape() const;
    void integerError() const;
    void scopeError(const int& index) const;
    
    // getter, setter
    const int& getSize() const;
    inline void incrSize();
    inline void decrSize();
    Shape* getStartPtr();
    void setStartPtr(Shape* inPtr);
    Shape* getEndPtr();
    void setEndPtr(Shape* inPtr);
    
    template<typename T> void insertFactory(T* inNewItem); // 힙에 객체를 생성하여 큐에 삽입
    void run();
    void insertGraphic(); // 큐에 데이터를 삽입하는 메서드
    void deleteGraphic(); // 입력받은 인덱스 데이터 값을 큐에서 삭제하는 메서드
    void viewAll() const; // 큐에 담겨있는 데이터 전체를 출력하는 메서드
private:
    int mSize;
    Shape* mStartPtr;
    Shape* mEndPtr;
    enum class Menu { Insert = 1, Delete, ViewAll, Quit };
    enum class Type { Circle = 1, Rectangle, Line };
};

template<typename T> void GraphicEditor::insertFactory(T* inNewItem) {
    Shape* newItem = inNewItem;
    newItem->setNext(nullptr);
    
    if(getStartPtr() == nullptr)
        setStartPtr(inNewItem);
    else
        getEndPtr()->setNext(inNewItem);
    setEndPtr(inNewItem);
}

#endif /* GraphicEditor_hpp */
