//
//  main.cpp
//  Calculator_3
//
//  Created by 서희찬 on 2021/05/10.
//

#include <iostream>
#include "Calculator.hpp"

using namespace std;

int main(void)
{
    Calculator cal;
    cal.init();
    cout<<cal.Add(3.2, 2.4)<<endl;
    cout<<cal.Min(3.2, 2.4)<<endl;
    cout<<cal.Mul(3.2, 2.4)<<endl;
    cout<<cal.Div(3.2, 2.4)<<endl;
    cal.showOpCount();
    return 0;
}
