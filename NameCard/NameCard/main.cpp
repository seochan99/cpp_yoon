#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
    enum {CLERK, SENIOR, ASSIST, MANAGER}; // 열거형 상수

    void ShowPositionInfo(int pos)
{
        switch (pos) {
            case CLERK: //0
                cout<<"사원"<<endl;
                break;
            case SENIOR: // 1
                cout<<"주임"<<endl;
                break;
            case ASSIST: // 2
                cout<<"대리"<<endl;
                break;
            case MANAGER: // 3
                cout<<"과장"<<endl;
                break;
        }
    }
}

class NameCard
{
private:
    char * name; // 성명
    char * company; // 회사이름
    char * phone; // 폰번
    int position; // 직급
public:
    NameCard(char * _name, char * _company, char * _phone, int pos):position(pos)// 생성자와 이니셜라이저
    {
        name = new char[strlen(_name)+1]; // 크기만큼 동적할당
        company = new char[strlen(_company)+1];
        phone = new char[strlen(_phone)+1];
        strcpy(name, _name);
        strcpy(company, _company);
        strcpy(phone, _phone);
    }
    void ShowNameCardInfo() const
    {
        cout<<"name : "<<name<<endl;
        cout<<"company : "<<company<<endl;
        cout<<"phone : "<<phone<<endl;
        cout<<"position : "<<position<<endl;
        cout<<endl;
    }
    ~NameCard() // 소멸자
    {
        delete []name;
        delete [] company;
        delete [] phone;
    }
};

int main(void)
{
    NameCard manClerk("Lee","ABEng","010-2342-1231",COMP_POS::CLERK);
    NameCard manSENIOR("Seo","APPLE","010-2342-1231",COMP_POS::SENIOR);
    NameCard manAssist("Kim","SAMSUNG","010-2342-1231",COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}
