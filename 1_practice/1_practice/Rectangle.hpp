//
//  Rectangle.hpp
//  1_practice
//
//  Created by 서희찬 on 2021/05/12.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Car.hpp"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;
public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
    void huichan();
}


#endif /* Rectangle_hpp */
