//
//  Calculator.cpp
//  Calculator_3
//
//  Created by 서희찬 on 2021/05/10.
//
#include <iostream>
#include "Calculator.hpp"
using namespace std;

void Calculator::init()
{
    numofAdd = 0;
    numofDiv = 0;
    numofMuul = 0;
    numofAMin = 0;
}

double Calculator::Add(double num1, double num2)
{
    numofAdd++;
    return num1+num2;
}

double Calculator::Div(double num1, double num2)
{
    numofDiv ++;
    return num1/num2;
}

double Calculator::Min(double num1, double num2)
{
    numofAMin++;
    return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
    numofMuul++;
    return num1 * num2;
}


void Calculator::showOpCount()
{
    cout<<numofAdd<<endl;
    cout<<numofDiv<<endl;
    cout<<numofMuul<<endl;
    cout<<numofAMin<<endl;
}
