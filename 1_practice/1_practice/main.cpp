#include <iostream>


void swap(int *num1,int * num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(char *c1,char *c2)
{
    char temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void swap(double * dbl1, double * dbl2)
{
    double temp;
    temp = *dbl1;
    *dbl1 = *dbl2;
    *dbl2 = temp;
}

int main(void)
{
    int num1= 20, num2 = 30;
    swap(&num1,&num2);
    std::cout<<num1<<' '<<num2<<std::endl;
    
    char ch1= 'a', ch2 = 'z';
    swap(&ch1,&ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;
    
    double dbl1= 2.22, dbl2 = 5.55;
    swap(&dbl1,&dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;
    
    
    return 0;
}
