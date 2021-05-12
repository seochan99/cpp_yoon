//
//  Car.hpp
//  1_practice
//
//  Created by 서희찬 on 2021/05/10.
//

#ifndef Car_hpp
#define Car_hpp

class Point
{
private:
    int x;
    int y;
    
public:
    bool InitMembers(int xpos,int ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);  
};

#endif /* Car_hpp */
