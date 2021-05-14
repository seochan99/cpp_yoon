#include <iostream>
using namespace std;

class Point
{
private:
    int xpos,ypos;
public:
    void Init(int x,int y)
    {
        xpos = x;
        ypos = y;
    }
    void showPointInfo() const // 이 함수내에서는 맴버변수에 저장된 값을 변경하지 않겠다.
    {
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};

class Circle //원 ->원의 중심좌표, 반지름 길이 정보
{
    
}

class Ring
{
    
}

int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}

