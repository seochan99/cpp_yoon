#include <iostream>
using namespace std;

class Point
{
private:
    int xpos,ypos;
public:
//    void Init(int x,int y)
//    {
//        xpos = x;
//        ypos = y;
//    }
    Point(int x, int y):xpos(x),ypos(y)
    {
        
    }
    void showPointInfo() const // 이 함수내에서는 맴버변수에 저장된 값을 변경하지 않겠다.
    {
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};

class Circle //원 ->원의 중심좌표, 반지름 길이 정보
{
private:
    int rad; // 반지름
    Point center; // 원의 중심
public:
//    void Init(int x,int y, int r)
//    {
//        rad =r;
//        center.Init(x, y);
//    }
    Circle(int x, int y, int r):center(x,y)
    {
        rad = r;
    }
    void ShowCircleInfo() const
    {
        cout<<"Radius : "<<rad<<endl;
        center.showPointInfo();
    }
};

class Ring
{
private:
    Circle inCircle;
    Circle outCircle;
public:
//    void Init(int inX,int inY, int inR, int x, int y, int r)
//    {
//        inCircle.Init(inX, inY, inR);
//        outCircle.Init(x, y, r);
//    }
    Ring(int inX,int inY, int inR, int x, int y, int r):inCircle(inX,inY,inR),outCircle(x,y,r)
    {
        
    }
    void ShowRingInfo() const
    {
        cout<<"Inner Circle Info ..."<<endl;
        inCircle.ShowCircleInfo();
        cout<<"Out Circle Info..."<<endl;
        outCircle.ShowCircleInfo();
    }
    
};

int main(void)
{
    Ring ring(1,1,4,2,2,9);
//    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}

