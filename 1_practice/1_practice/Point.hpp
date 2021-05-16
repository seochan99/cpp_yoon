//
//  Point.hpp
//  1_practice
//
//  Created by 서희찬 on 2021/05/16.
//

#ifndef Point_hpp
#define Point_hpp
#include <iostream>

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};
#endif /* Point_hpp */
