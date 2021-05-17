#include <iostream>

using namespace std;

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
