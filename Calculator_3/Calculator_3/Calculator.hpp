//
//  Calculator.hpp
//  Calculator_3
//
//  Created by 서희찬 on 2021/05/10.
//

#ifndef Calculator_hpp
#define Calculator_hpp

#include <iostream>
using namespace std;

class Calculator
{
private:
    int numofAdd;
    int numofAMin;
    int numofMuul;
    int numofDiv;
public:
    void init();
    double Add(double num1, double num2);
    double Div(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    void showOpCount();
};

#endif /* Calculator_hpp */
