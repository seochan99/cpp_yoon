#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n)
    {}
    SoSimple(const SoSimple& copy) : num(copy.num)
    {
        cout<<"Called SoSimple(Const SoSimple& copy)"<<endl;
    }
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;
    }
    void ShowData()
    {
        cout<<"num : "<<num<<endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) // this things obj-> make copy construct
{
    cout<<"return 이전"<<endl;
    return ob; // this things make temporary Object v
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData(); // 37
    obj.ShowData(); //7 
    return 0;
}
