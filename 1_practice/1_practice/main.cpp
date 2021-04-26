//
//  main.cpp
//  1_practice
//
//  Created by 서희찬 on 2021/04/26.
//

#include <iostream>

int CalSalary(int sales)
{
    return (int)(50+sales*0.12);
}

int main(void)
{
    int num=0;
    
    while(num!=-1)
    {
        std::cout<<"판매 급액을 만원 단위로 입력(-1 to end) : ";
        std::cin>>num;
        if(num==-1)
        {
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
        std::cout<<"이번 달 급여 : "<<CalSalary(num)<<"만원(만원 단위 출력)"<<std::endl;
    }
 
    return 0;
}

