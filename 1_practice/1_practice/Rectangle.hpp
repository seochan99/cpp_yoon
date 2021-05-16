//
//  Rectangle.hpp
//  1_practice
//
//  Created by 서희찬 on 2021/05/16.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Point.hpp"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight; // 두개의 포인트
public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void ShowRecInfo() const;
};

#endif /* Rectangle_hpp */
